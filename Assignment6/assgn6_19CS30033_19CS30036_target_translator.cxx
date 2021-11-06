#include "assgn6_19CS30033_19CS30036_translator.h"
#include <fstream>
#include <iostream> 
#include <cstring>
#include <string>
#include <map>

using namespace std ;

extern FILE *yyin ;

// file name parameters 
string IPFname = "assgn6_19CS30033_19CS30036_test" ;
string ASMfn = "assgn6_19CS30033_19CS30036_" ;

// vector to store all strings
extern vector<string> AS ;

// map from quads to labels
map<int, int> Mlabel ;

// counter variable to count the number of labels in the asm file 
int countLabel = 0 ;

// file stream for ASM file 
ofstream fout ;

// vector of quads
vector <quad> Qarr ;

// function to compute activation record 
void ActivationRec (symTable *S) {
    // p -> parameter
    // l -> local
    int l = -24, p = -20 ;

    list <symbol> :: iterator i = S->table.begin() ; 

    while(i != S->table.end()){
        if(i->name == "return") continue ;

        // checking category 
        else if(i->cat == "param"){ // parameter
            // assigning p (param)
            S->AR[i->name] = p ;
            // adding entry size to p
            p = p + i->size ; 
        }

        else{ // case for local symbols
            // assigning l (local)
            S->AR[i->name] = l ;
            // subtracting entry size from l
            l = l - i->size ; 
        }

        i++ ; 
    }

    return ;
}

// generate ASM
void ASMgenerate () {
    
    Qarr = QArray.array ;
    int ctr = 0 ;

    // Array traversal to update goto labels
    vector<quad> :: iterator i = Qarr.begin() ;

    while(i != Qarr.end()){
        vector<string> vv = {"NEOP", "EQOP", "GOTOOP", "GT", "LE", "LT", "GE"} ;
        
        for(auto x: vv){
            if(x.compare(i->op) == 0){
                // converting string to int 
                int k = atoi(i->res.c_str()) ;
                Mlabel[k] = 1 ;
            }
        }

        ++i ;
    }

    // traversing the label map and mapping quads to labels

    map<int, int> :: iterator j =  Mlabel.begin() ;

    while(j != Mlabel.end()){
        j->second = ctr ;
        ctr++ ;
        j++ ;
    }

    // list of tables
    list<symTable*> TList ;
    list<symTable*> :: iterator z ;
    list<symbol> :: iterator k = globalST->table.begin() ;

    // storing all nested tables in a list
    while(k != globalST->table.begin()){
        if(k->nestedST != NULL){
            TList.push_back(k->nestedST) ;
        }
        k++ ;
    }

    z = TList.begin() ;

    // traversing nested tablelist and computing activation record
    while(z != TList.end()){
        ActivationRec(*z) ;
        z++ ;
    }

    // stream for assembly file (.s) 
    ofstream sout ;
    // open .s for writing
    sout.open(ASMfn.c_str()) ;

    list<symbol> :: iterator m = ST->table.begin() ;

    sout << "\t.file	\"test.c\"" << "\n" ;
    while(m != ST->table.end()){
        string cy = m->cat ;
        string ch = m->type->type ;
        string nm = m->name ;

        if(cy == "function"){
            continue ;
        }

        else{
            // INT
            if(ch == "INT"){
                if(m->val == "") sout << "\t.comm\t" << nm << ", 4, 4" << "\n" ;

                else{
					sout << "\t.globl\t" << nm << "\n" ;
					sout << "\t.data" << "\n" ;
					sout << "\t.align 4" << "\n";
					sout << "\t.type\t" << nm << ", @object" << "\n" ;
					sout << "\t.size\t" << nm << ", 4" << "\n" ;
					sout << nm <<":" << "\n" ;
					sout << "\t.long\t" << m->val << "\n" ;
                }
            }

            // CHAR
            if(ch == "CHAR"){
                if(m->val == "") sout << "\t.comm\t" << nm << ", 1, 1" << "\n" ;

                else{
					sout << "\t.globl\t" << nm << "\n" ;
					sout << "\t.type\t" << nm << ", @object" << "\n" ;
					sout << "\t.size\t" << nm << ", 1" << "\n" ;
					sout << nm <<":" << "\n" ;
                    int vd = atoi( m->val.c_str()) ;
					sout << "\t.byte\t" << vd << "\n" ;
                }
            }
        }
        m++ ;
    }

    // input strings being outputted

    if(AS.size() > 0){
        sout << "\t.section\t.rodata\n";
        vector <string> :: iterator i = AS.begin() ;

		while(i != AS.end()) {
            int temp = i - AS.begin() ;
 			sout << ".LC" << temp << ":" << "\n";
			sout << "\t.string\t" << *i << "\n";	
            i++ ;
		}	
    }

    // TEXT SEGMENT 
    // start 

    sout << "\t.text	" << "\n";

    // vector for parameters
	vector <string> PMs;

    // map 
	map <string, int> mp;

    vector <quad> :: iterator a = Qarr.begin() ;

	while(a != Qarr.end()){
        int zz = a - Qarr.begin() ;
    
        if(Mlabel.count(zz) > 0){
            int labval = Mlabel.at(zz) + 2*countLabel + 2 ;
            sout << ".L" << labval << ": " << "\n" ;
        }

        string a1 = a->arg1, a2 = a->arg2, op = a->op, res = a->res ; 

        if(op != "PARAM"){
            // Operators that do not need processing being handled first 
            // (Bit and Shift operations)
            sout << "\t" ;

			if (op == "MODOP"){		    
                sout << res << " = " << a1 << " % " << a2 ;
            }

			else if (op == "XOR"){
                sout << res << " = " << a1 << " ^ " << a2 ;
            }

			else if (op == "INOR"){
                sout << res << " = " << a1 << " | " << a2 ;
            }

			else if (op == "BAND"){
                sout << res << " = " << a1 << " & " << a2 ;
            }

			else if (op == "LEFTOP"){
                sout << res << " = " << a1 << " << " << a2 ;
            }

			else if (op == "RIGHTOP"){
                sout << res << " = " << a2 << " >> " << a2 ;
            }

			else if (op=="UMINUS") {
				sout << "negl\t" << ST->AR[a1] << "(%rbp)";
			}

			else if (op=="BNOT"){
                sout << res << " = ~" << a1 ;
            }

			else if (op=="LNOT"){
                sout << res << " = !" << a1 ;
            }

            // Addition
            else if(op == "ADD"){
                if( ( (a2[0] != '-') && (a2[0] != '+') && !isdigit(a2[0]) ) || a2.size() == 0 ){
					sout << "movl \t" << ST->AR[a1] << "(%rbp), " << "%eax" << "\n" ;
					sout << "\tmovl \t" << ST->AR[a2] << "(%rbp), " << "%edx" << "\n" ;
					sout << "\taddl \t%edx, %eax" << "\n" ;
					sout << "\tmovl \t%eax, " << ST->AR[res] << "(%rbp)" ;
                }

                else{
                    char *ch ;
                    strtol(a2.c_str(), &ch, 10) ;
                    if(*ch == 0){
                        int temp  = atoi(a2.c_str()) ;
                        sout << "addl \t$" << temp << ", " << ST->AR[a1] << "(%rbp)" ;
                    }

                    else{
                        sout << "movl \t" << ST->AR[a1] << "(%rbp), " << "%eax" << "\n" ;
					    sout << "\tmovl \t" << ST->AR[a2] << "(%rbp), " << "%edx" << "\n" ;
					    sout << "\taddl \t%edx, %eax" << "\n" ;
					    sout << "\tmovl \t%eax, " << ST->AR[res] << "(%rbp)" ;
                    }
                }
            }

            // subtraction
            else if(op == "SUB"){
                sout << "movl \t" << ST->AR[a1] << "(%rbp), " << "%eax" << "\n" ;
			    sout << "\tmovl \t" << ST->AR[a2] << "(%rbp), " << "%edx" << "\n" ;
			    sout << "\tsubl \t%edx, %eax" << "\n" ;
			    sout << "\tmovl \t%eax, " << ST->AR[res] << "(%rbp)" ;    
            }

            // multiplication
            else if(op == "MULT"){
                sout << "movl \t" << ST->AR[a1] << "(%rbp), " << "%eax" << "\n" ;

                if( ( (a2[0] != '-') && (a2[0] != '+') && !isdigit(a2[0]) ) || a2.size() == 0 ){
                    sout << "\timull \t" << ST->AR[a2] << "(%rbp), " << "%eax" << "\n" ;
                }

                else{
                    char *ch ;
                    strtol(a2.c_str(), &ch, 10) ;
                    if(*ch == 0 ){
                        int temp  = atoi(a2.c_str()) ;
				    	sout << "\timull \t$" << temp << ", " << "%eax" << "\n" ;
				    	symTable* tb = ST ;
					    string cval;

                        list <symbol>::iterator k = tb->table.begin() ;

					    while(k != tb->table.end()) {
					    	if(k->name == a1){
                                cval = k->val ;
                            }
                            k++ ; 
				    	}

                        int vv = atoi(a2.c_str()) ;
                        vv *= atoi(cval.c_str()) ;

				    	mp[res] = vv ;
                    }

                    else{
                        sout << "\timull \t" << ST->AR[a2] << "(%rbp), " << "%eax" << "\n" ;
                    }
                } 

                sout << "\tmovl \t%eax, " << ST->AR[res] << "(%rbp)" ;               
            }

            // division
            else if(op == "DIV"){
				sout << "movl \t" << ST->AR[a1] << "(%rbp), " << "%eax" << "\n" ;
				sout << "\tcltd" << "\n" ;
				sout << "\tidivl \t" << ST->AR[a2] << "(%rbp)" << "\n" ;
				sout << "\tmovl \t%eax, " << ST->AR[res] << "(%rbp)" ;
            }

			else if (op ==" EQUAL"){
                if( ( (a1[0] != '-') && (a1[0] != '+') && !isdigit(a1[0]) ) || a1.size() == 0 ){
                    sout << "movl\t" << ST->AR[a1] << "(%rbp), " << "%eax" << "\n" ;
                }

                else{
                    char *ch ;
                    strtol(a1.c_str(), &ch, 10) ;
                    if(*ch == 0 ){
                        int temp  = atoi(a1.c_str()) ;
                        sout << "movl\t$" << temp << ", " << "%eax" << "\n" ;
                    }

                    else{
                        sout << "movl\t" << ST->AR[a1] << "(%rbp), " << "%eax" << "\n" ;
                    }
                }
                sout << "\tmovl \t%eax, " << ST->AR[res] << "(%rbp)" ;    
			}

			else if (op == "EQUALSTR")	{
				sout << "movq \t$.LC" << a1 << ", " << ST->AR[res] << "(%rbp)" ;
			}

			else if (op == "EQUALCHAR")	{
                int temp = atoi(a1.c_str()) ;
				sout << "movb\t$" << temp << ", " << ST->AR[res] << "(%rbp)" ;
			}
            
            // equality operator
			else if (op == "EQOP") {
                int zz = atoi(res.c_str()) ;
                int temp = Mlabel.at(zz) + 2*( countLabel + 1 ) ;

				sout << "movl\t" << ST->AR[a1] << "(%rbp), %eax" << "\n" ;
				sout << "\tcmpl\t" << ST->AR[a2] << "(%rbp), %eax" << "\n" ;
				sout << "\tje .L" << temp ;
			}

            // greater than
			else if (op == "GT") {
                int zz = atoi(res.c_str()) ;
                int temp = Mlabel.at(zz) + 2*( countLabel + 1 ) ;
                
				sout << "movl\t" << ST->AR[a1] << "(%rbp), %eax" << "\n" ;
				sout << "\tcmpl\t" << ST->AR[a2] << "(%rbp), %eax" << "\n" ;
				sout << "\tjg .L" << temp ;
			}

            // not equal to 
			else if (op == "NEOP") {
                int zz = atoi(res.c_str()) ;
                int temp = Mlabel.at(zz) + 2*( countLabel + 1 ) ;
                
				sout << "movl\t" << ST->AR[a1] << "(%rbp), %eax" << "\n" ;
				sout << "\tcmpl\t" << ST->AR[a2] << "(%rbp), %eax" << "\n" ;
				sout << "\tjne .L" << temp ;
			}

			else if (op == "LT") {
                int zz = atoi(res.c_str()) ;
                int temp = Mlabel.at(zz) + 2*( countLabel + 1 ) ;
                
				sout << "movl\t" << ST->AR[a1] << "(%rbp), %eax" << "\n" ;
				sout << "\tcmpl\t" << ST->AR[a2] << "(%rbp), %eax" << "\n" ;
				sout << "\tjl .L" << temp ;
			}

            // goto jump label
			else if (op=="GOTOOP") {
                int zz = atoi(res.c_str()) ;
                int temp = Mlabel.at(zz) + 2*( countLabel + 1 ) ;
                
				sout << "jmp .L" << temp ;
			}

            // greater than equal to
			else if (op == "GE") {
                int zz = atoi(res.c_str()) ;
                int temp = Mlabel.at(zz) + 2*( countLabel + 1 ) ;
                
				sout << "movl\t" << ST->AR[a1] << "(%rbp), %eax" << "\n" ;
				sout << "\tcmpl\t" << ST->AR[a2] << "(%rbp), %eax" << "\n" ;
				sout << "\tjge .L" << temp ;
			}

            // less than equal to
			else if (op == "LE") {
                int zz = atoi(res.c_str()) ;
                int temp = Mlabel.at(zz) + 2*( countLabel + 1 ) ;
                
				sout << "movl\t" << ST->AR[a1] << "(%rbp), %eax" << "\n" ;
				sout << "\tcmpl\t" << ST->AR[a2] << "(%rbp), %eax" << "\n" ;
				sout << "\tjle .L" << temp ;
			}

			else if (op == "PTRR") {
				sout << "movl\t" << ST->AR[a1] << "(%rbp), %eax" << "\n";
				sout << "\tmovl\t(%eax),%eax" << "\n";
				sout << "\tmovl \t%eax, " <<  ST->AR[res] << "(%rbp)";	
			}

			else if (op == "PTRL") {
				sout << "movl\t" << ST->AR[res] << "(%rbp), %eax" << "\n";
				sout << "\tmovl\t" << ST->AR[a1] << "(%rbp), %edx" << "\n";
				sout << "\tmovl\t%edx, (%eax)";
			} 

            // address operator
			else if (op == "ADDRESS") {
				sout << "leaq\t" << ST->AR[a1] << "(%rbp), %rax" << "\n";
				sout << "\tmovq \t%rax, " <<  ST->AR[res] << "(%rbp)";
			}

            // return [for functions]
			else if (op == "RETURN") {
                if(res == "") sout << "nop";
				else sout << "movl\t" << ST->AR[res] << "(%rbp), "<<"%eax";
				
			}

            // if parameter push into the vector for parameters
			else if (op == "PARAM") {
				PMs.push_back(res);
			}

            // a = b[c]
			else if (op == "ARRR") {
				int vv = ST->AR[a1] - mp[a2] ;
				sout << "movq\t" << vv << "(%rbp), "<<"%rax" << "\n";
				sout << "\tmovq \t%rax, " <<  ST->AR[res] << "(%rbp)";
			}	

            // a[b] = c
			else if (op == "ARRL") {
				int vv = ST->AR[res] - mp[a1] ;
				sout << "movq\t" << ST->AR[a2] << "(%rbp), "<<"%rdx" << "\n";
				sout << "\tmovq\t" << "%rdx, " << vv << "(%rbp)";
			}	


            // function call   
            else if (op == "CALL"){
                
                // copying function table locally   
                symTable *TT = globalST->lookup(a1)->nestedST ;

                // indices
                int i = 0 ;
                int j = 0 ;

                list<symbol> :: iterator k = TT->table.begin() ;

                while(k != TT->table.end()){
                    i = distance( k, TT->table.begin() ) ;
                    if(k->cat == "param"){
                    switch (j)
                    {
                        // first parameter of the function 
                    case 0: j++ ;
						sout << "movl \t" << ST->AR[PMs[i]] << "(%rbp), " << "%eax" << "\n";
						sout << "\tmovq \t" << ST->AR[PMs[i]] << "(%rbp), " << "%rdi" << "\n";
                        break;

                        // second parameter of the function
                    case 1: j++ ;
						sout << "movl \t" << ST->AR[PMs[i]] << "(%rbp), " << "%eax" << "\n";
						sout << "\tmovq \t" << ST->AR[PMs[i]] << "(%rbp), " << "%rsi" << "\n";
                        break;

                        // third parameter of the function
                    case 2: j++ ;
						sout << "movl \t" << ST->AR[PMs[i]] << "(%rbp), " << "%eax" << "\n";
						sout << "\tmovq \t" << ST->AR[PMs[i]] << "(%rbp), " << "%rdx" << "\n";
                        break;

                        // fourth parameter of the function
                    case 3: j++ ;
						sout << "movl \t" << ST->AR[PMs[i]] << "(%rbp), " << "%eax" << "\n";
						sout << "\tmovq \t" << ST->AR[PMs[i]] << "(%rbp), " << "%rcx" << "\n";
                        break;

                    default: 
						sout << "\tmovq \t" << ST->AR[PMs[i]] << "(%rbp), " << "%rdi" << "\n";
                        break;
                    }
                    } 
                    else break ;
                    k++ ;
                }
            }

            // function start
			else if (op == "FUNC") {
				// function start program

				sout <<".globl\t" << res << "\n";
				sout << "\t.type\t"	<< res << ", @function" << "\n";
				sout << res << ": " << "\n";
				sout << ".LFB" << countLabel <<":" << "\n";
				sout << "\t.cfi_startproc" << "\n";
				sout << "\tpushq \t%rbp" << "\n";
				sout << "\t.cfi_def_cfa_offset 8" << "\n";
				sout << "\t.cfi_offset 5, -8" << "\n";
				sout << "\tmovq \t%rsp, %rbp" << "\n";
				sout << "\t.cfi_def_cfa_register 5" << "\n";

                // assigning symbol table from global symbol table
				ST = globalST->lookup(res)->nestedST ;

				sout << "\tsubq\t$" << ST->table.back().offset+24 << ", %rsp" << "\n" ;
				
				// The table for functions
                // temporary symbol table
				symTable* TT = ST ;

				int k = 0 ;
                list <symbol> :: iterator i = TT->table.begin() ;

				while (i != TT->table.end()) {
					if (i->cat == "param") {
                        switch (k)
                        {
                        case 0:
                        	sout << "\tmovq\t%rdi, " << ST->AR[i->name] << "(%rbp)";
                            k++ ;
                            break ;

                        case 1:
                        	sout << "\n\tmovq\t%rsi, " << ST->AR[i->name]  << "(%rbp)";
                            k++ ;
                            break ;

                        case 2:
                        	sout << "\n\tmovq\t%rdx, " << ST->AR[i->name]  << "(%rbp)";
                            k++ ;
                            break ;

                        case 3:
                        	sout << "\n\tmovq\t%rcx, " << ST->AR[i->name] << "(%rbp)";
                            k++ ;
                            break ;
                        
                        default:
                            break;
                        }

                        i++ ;
					}
					else break;
				}
			}

            // function end
			else if (op == "FUNCEND") {
				sout << "leave" << "\n" ;
				sout << "\t.cfi_restore 5" << "\n" ;
				sout << "\t.cfi_def_cfa 4, 4" << "\n" ;
				sout << "\tret" << "\n" ;
				sout << "\t.cfi_endproc" << "\n" ;
				sout << ".LFE" << countLabel <<":" << "\n" ;
                countLabel++ ;
				sout << "\t.size\t"<< res << ", .-" << res ;
			}

            // operator not included in definition
			else sout << "op";

            // newline 
			sout << "\n" ;         


        }
        
        // if it is a parameter, then push into vector of parameters
        else PMs.push_back(res) ;

        a++ ;
    }
}

// printing overloaded operator
template<class T>
ostream& operator << (ostream& out, const vector<T>& vec){

    copy(vec.begin(), vec.end(), ostream_iterator<T>(out, " ")); 
	return out;

}



int main(int argc, char *argv[]){

    string temp = string(argv[argc - 1]) ;
    ASMfn = ASMfn + temp + string(".s") ;

    temp = temp + string(".c") ;
    IPFname = IPFname + temp ;

    globalST = new symTable( "global" ) ;
    ST = globalST ;

    // setting parser for taking input and opening file 
    yyin = fopen(IPFname.c_str(), "r") ;

    // parse
    yyparse() ;

    // updating + printing global table, and generating ASM
    globalST->update() ;
    globalST->print() ;
    QArray.print() ;
    ASMgenerate() ;

    return 0 ;
}
