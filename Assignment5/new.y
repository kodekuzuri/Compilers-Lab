% {

#include <bits/stdc++.h>
#include <sstream>
#include "ass5_19CS30033_19CS30036_translator.h"

extern int yylex();
void yyerror(string s);

extern string varType;
extern vector<label> labelList;

using namespace std;
%}

% union {
    char unaryOp;	// unary operator
    char* charVal;	// char value
    int instrNum;	// instruction number
    int intVal;		// integer value
	float floatVal;	// float value
    int numParams;	// number of parameters
    expression* exp; // expression
    statement* stmt; // statement
    symType* stype; // symbol type
    symbol* sym;    // symbol
    Array* arr;		// Array type
}

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO ELSE
%token ENUM EXTERN REGISTER FLOAT FOR GOTO IF INLINE LONG
%token RESTRICT RETURN SHORT  SIGNED SIZEOF STATIC STRUCT SWITCH
%token INT DOUBLE TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE BOOL COMPLEX IMAGINARY

%token <sym> IDENTIFIER 		 		
%token <intval> INTEGER_CONSTANT			
%token <floatVal> FLOATING_CONSTANT			
%token <charVal> CHARACTER_CONSTANT				
%token <charVal> STRING_LITERAL 		

// Punctuators and operators
%token DOT
%token ARROW
%token INCREMENT
%token DECREMENT
%token BITWISEAND
%token STAR
%token PLUS
%token MINUS
%token NOT
%token EXCLAMATION
%token DIVIDE
%token PERCENTAGE
%token LEFTSHIFT
%token RIGHTSHIFT
%token LESSTHAN
%token GREATERTHAN
%token LESSEQUAL
%token GREATEREQUAL
%token EQUAL
%token NOTEQUAL
%token XOR
%token BITWISEOR
%token AND
%token OR
%token QUESTIONMARK
%token COLON
%token SEMICOLON
%token ELLIPSIS
%token ASSIGN
%token MULTIPLYEQUAL
%token DIVIDEEQUAL
%token MODULOEQUAL
%token PLUSEQUAL
%token MINUSEQUAL
%token SHIFTLEFTEQUAL
%token SHIFTRIGHTEQUAL
%token ANDEQUAL
%token XOREQUAL
%token OREQUAL
%token COMMA
%token HASH

%start translation_unit

//to remove dangling else problem
%right "then" ELSE

//unary operator
%type <unaryOp> unary_operator

//number of parameters
%type <numParams> argument_expression_list argument_expression_list_opt

%type <exp> 
    expression
	primary_expression
	multiplicative_expression
	additive_expression
	shift_expression
	relational_expression
	equality_expression
	and_expression
	exclusive_or_expression
	inclusive_or_expression
	logical_and_expression
	logical_or_expression
	conditional_expression
	assignment_expression
	expression_statement

%type <stmt> statement
    compound_statement
	loop_statement
	selection_statement
	iteration_statement
	labeled_statement
	jump_statement
	block_item
	block_item_list
	blocl_item_list_opt

%type <stype> pointer

%type <sym> initializer direct_declarator init_declarator declarator

%type <arr> postfix_expression unary_expression cast_expression

// auxillary non-terminals for backpatching
%type <instrNum> M
%type <stmt> N

%%

M : /* empty */
    {
        $$ = nextInstruction();
    }
    ;

F : /* empty */
    {
        loopName = "FOR";   
    }
    ;

W: /* empty */ 
	{
		loopName = "WHILE";
	}   
	;

D: /* empty */ 
	{
		loopName = "DO_WHILE";
	}   
	;

X: /* empty */ 
    {
        string name = ST->name "." + loopName + "$" + to_string(tableCount);
        tableCount++;
        symbol* s = ST->lookup(name);
        s->nestedST = new symbolTable(name);
        s->nestedST->parent = ST;
        s->name = name
        s->type = new symType("block");
        currSymbol = s;
    }   
    ;
N: /* empty */ 
    {
        $$ = new statement();
        $$->nextList = makelist(nextInstruction());
        emit("goto","");
    }
    ;
changetable: /* empty */
    {
		parST = ST;                                                               // Used for changing to symbol table for a function
		if(currS->nestedST == NULL) 
		{
			changeTable(new symTable(""));	                                           // Function symbol table doesn't already exist	
		}
		else 
		{
			changeTable(currS->nestedST);						               // Function symbol table already exists	
			emit("label", ST->name);
		}
    }
    ;

primary_expression: IDENTIFIER
	{
	    $$=new expression();                                                  // create new expression and store pointer to ST entry in the location			
	    $$->loc=$1;
	    $$->type="not-boolean";
	}
	| INTEGER_CONSTANT
	{ 
		$$ = new expression();	
		string p = to_string($1);
		$$->loc = gentemp(new symType("int"),p);
		emit("=",$$->loc->name,p);
	}
	| FLOATING_CONSTANT        	  					   
	{                                                                         // create new expression and store the value of the constant in a temporary
		$$=new expression();
		$$->loc=gentemp(new symType("float"),$1);
		emit("=",$$->loc->name,string($1));
	}
	| CHARACTER_CONSTANT       	  			
	{                                                                         // create new expression and store the value of the constant in a temporary
		$$=new expression();
		string p = to_string($1);
		$$->loc=gentemp(new symType("char"),p);
		emit("=",$$->loc->name,p);
	}
	| STRING_LITERAL        					    
	{                                                                          // create new expression and store the value of the constant in a temporary
		$$=new expression();
		$$->loc=gentemp(new symType("ptr"),$1);
		$$->loc->type->ptr=new symType("char");
	}
	| '(' expression ')'
	{                                                                          // simply equal to expression
		$$=$2;
	}
	;
postfix_expression: primary_expression      				       //create new Array and store the location of primary expression in it
	{
		$$ = new Array();	
		$$->Sarr=$1->loc;	
		$$->type=$1->loc->type;	
		$$->loc=$$->Sarr;
	}
	| postfix_expression '[' expression ']'
	{ 	
		
		$$ = new Array();
		$$->type = $1->type->ptr;               // type=type of element	
		$$->Sarr = $1->Sarr;                        // copy the base
		$$->loc = gentemp(new symType("int"));     	// store computed address
		$$->artype = "arr";                         //atype is arr.
		
		if($1->artype=="arr") 
		{			                               // if already arr, multiply the size of the sub-type of Array with the expression value and add
			symbol* t = gentemp(new symType("int"));
			int p = typeSize($$->type);
			string str = to_string(p);
			emit("*", t->name, $3->loc->name, str);
			emit("+", $$->loc->name, $1->loc->name, t->name);
		}
		else 
		{   
			int p = typeSize($$->type);	
			string str = to_string(p);
			emit("*", $$->loc->name, $3->loc->name, str);
		}
	}
	| postfix_expression '(' argument_expression_list_opt ')'       
	{
		//call the function with number of parameters from argument_expression_list_opt
		$$ = new Array();	
		$$->Sarr = gentemp($1->type);
		string str = to_string($3);
		emit("call",$$->Sarr->name,$1->Sarr->name,str);
	}
	| postfix_expression DOT IDENTIFIER {  }
	| postfix_expression ARROW IDENTIFIER  {  }
	| postfix_expression INCREMENT               //generate new temporary, equate it to old one and then add 1
	{ 
		$$ = new Array();	
		$$->Sarr = gentemp($1->Sarr->type);
		emit("=",$$->Sarr->name,$1->->name);
		emit("+",$1->Sarr->name,$1->Sarr->name,"1");
	}
	| postfix_expression DECREMENT                //generate new temporary, equate it to old one and then subtract 1
	{
		$$=new Array();	
		$$->Sarr=gentemp($1->Sarr->type);
		emit("=",$$->Sarr->name,$1->Sarr->name);
		emit("-",$1->Sarr->name,$1->Sarr->name,"1");	
	}
	| '(' type_name ')' '{' initializer_list '}' {  }
	| '(' type_name ')' '{' initializer_list COMMA '}' {  }
	;

argument_expression_list_opt: argument_expression_list 
	{ 
		$$=$1; // Equate $$ and $1
	}
	| /* empty */ 
	{ 
		$$=0; // No arguments
	} 
	;

argument_expression_list: assignment_expression    
	{
		$$=1;                                      //one argument and emit param
		emit("param",$1->loc->name);	
	}
	| argument_expression_list COMMA assignment_expression     
	{
		$$=$1+1;                                  //one more argument and emit param		 
		emit("param",$3->loc->name);
	}
	;

unary_expression: postfix_expression { $$=$1; /*Equate $$ and $1*/} 					  
	| INCREMENT unary_expression                           
	{  	
		//simply add 1
		emit("+",$2->Sarr->name,$2->Sarr->name,"1");		
		$$=$2;
	}
	| DECREMENT unary_expression                           
	{
		//simply subtract 1
		emit("-",$2->Sarr->name,$2->Sarr->name,"1");
		$$=$2;
	}
	| unary_operator cast_expression                       
	{   
		$$ = new Array();
		switch($1)
		{	  
			case '&':                                                  //address of something, then generate a pointer temporary and emit the quad
				$$->Sarr=gentemp(new symType("ptr"));
				$$->Sarr->type->ptr=$2->Sarr->type; 
				emit("=&",$$->Sarr->name,$2->Sarr->name);
				break;
			case '*':                                                   // value of something, then generate a temporary of the corresponding type and emit the quad	
				$$->artype="ptr";
				$$->loc=gentemp($2->Sarr->type->ptr);
				$$->Sarr=$2->Sarr;
				emit("=*",$$->loc->name,$2->Sarr->name);
				break;
			case '+':  
				$$=$2;
				break;                 //unary plus, do nothing
			case '-':				   //unary minus, generate new temporary of the same base type and make it negative of current one
				$$->Sarr=gentemp(new symType($2->Sarr->type->type));
				emit("uminus",$$->Sarr->name,$2->Sarr->name);
				break;
			case '~':                   //bitwise not, generate new temporary of the same base type and make it negative of current one
				$$->Sarr=gentemp(new symType($2->Sarr->type->type));
				emit("~",$$->Sarr->name,$2->Sarr->name);
				break;
			case '!':				//logical not, generate new temporary of the same base type and make it negative of current one
				$$->Sarr=gentemp(new symType($2->Sarr->type->type));
				emit("!",$$->Sarr->name,$2->Sarr->name);
				break;
		}
	}
	| SIZEOF unary_expression  {  }
	| SIZEOF '(' type_name ')'   {  }
	;

unary_operator: BITWISEAND 	 //simply equate to the corresponding operator
	{ $$='&'; }       
	| STAR  		
	{$$='*'; }
	| PLUS  		
	{ $$='+'; }
	| MINUS  		
	{ $$='-'; }
	| NOT  
	{ $$='~'; } 
	| EXCLAMATION  
	{$$='!'; }
	;

cast_expression: unary_expression  { $$=$1; }                       //unary expression, simply equate
	| '(' type_name ')' cast_expression          //if cast type is given
	{ 
		$$=new Array();	
		$$->Sarr=convert($4->Sarr,varType);             //generate a new symbol of the given type	
	}
	;

multiplicative_expression: cast_expression  
	{
		$$ = new expression();             //generate new expression							    
		if($1->artype=="arr") 			   //if it is of type arr
		{
			$$->loc = gentemp($1->loc->type);	
			emit("=[]", $$->loc->name, $1->Sarr->name, $1->loc->name);     //emit with Array right
		}
		else if($1->artype=="ptr")         //if it is of type ptr
		{ 
			$$->loc = $1->loc;        	   //equate the locs
		}
		else
		{
			$$->loc = $1->Sarr;
		}
	}
	| multiplicative_expression STAR cast_expression           
	{ 
		//if we have multiplication
		if(!checkType($1->loc, $3->Sarr))         
			cout<<"Type Error in Program"<< endl;	// error
		else 								 		//if types are compatible, generate new temporary and equate to the product
		{
			$$ = new expression();	
			$$->loc = gentemp(new symType($1->loc->type->type));
			emit("*", $$->loc->name, $1->loc->name, $3->Sarr->name);
		}
	}
	| multiplicative_expression DIVIDE cast_expression      
	{
		//if we have division
		if(!checkType($1->loc, $3->Sarr)){ 
			cout << "Type Error in Program"<< endl;
		}
		else   
		{
			//if types are compatible, generate new temporary and equate to the quotient
			$$ = new expression();
			$$->loc = gentemp(new symType($1->loc->type->type));
			emit("/", $$->loc->name, $1->loc->name, $3->Sarr->name);
		}
	}
	| multiplicative_expression MOD cast_expression    //if we have mod
	{
		
		if(!checkType($1->loc, $3->Sarr)) cout << "Type Error in Program"<< endl;		
		else 		 
		{
			//if types are compatible, generate new temporary and equate to the quotient
			$$ = new expression();
			$$->loc = gentemp(new symType($1->loc->type->type));
			emit("%", $$->loc->name, $1->loc->name, $3->Sarr->name);	
		}
	}
	;

additive_expression: multiplicative_expression   { $$=$1; }            //simply equate
	| additive_expression PLUS multiplicative_expression      //if we have addition
	{
		
		if(!checkType($1->loc, $3->loc))
			cout << "Type Error in Program"<< endl;
		else    	//if types are compatible, generate new temporary and equate to the sum
		{
			$$ = new expression();	
			$$->loc = gentemp(new symType($1->loc->type->type));
			emit("+", $$->loc->name, $1->loc->name, $3->loc->name);
		}
	}
	| additive_expression MINUS multiplicative_expression    //if we have subtraction
	{
		
		if(!checkType($1->loc, $3->loc))
			cout << "Type Error in Program"<< endl;		
		else        //if types are compatible, generate new temporary and equate to the difference
		{	
			$$ = new expression();	
			$$->loc = gentemp(new symType($1->loc->type->type));
			emit("-", $$->loc->name, $1->loc->name, $3->loc->name);
		}
	}
	;

shift_expression: additive_expression   { $$=$1; }              //simply equate
	| shift_expression LEFTSHIFT additive_expression   
	{ 
		if(!($3->loc->type->type == "int"))
			cout << "Type Error in Program"<< endl; 		
		else            //if base type is int, generate new temporary and equate to the shifted value
		{		
			$$ = new expression();		
			$$->loc = gentemp(new symType("int"));
			emit("<<", $$->loc->name, $1->loc->name, $3->loc->name);		
		}
	}
	| shift_expression RIGHTSHIFT additive_expression
	{ 	
		if(!($3->loc->type->type == "int"))
		{
			cout << "Type Error in Program"<< endl; 		
		}
		else  		//if base type is int, generate new temporary and equate to the shifted value
		{			
			$$ = new expression();	
			$$->loc = gentemp(new symType("int"));
			emit(">>", $$->loc->name, $1->loc->name, $3->loc->name);			
		}
	}
	;

relational_expression: shift_expression   { $$=$1; }              //simply equate
	| relational_expression LESSTHAN shift_expression
	{
		if(!checkType($1->loc, $3->loc)) 
		{
			yyerror("Type Error in Program");
		}
		else 
		{      //check compatible types									
			$$ = new expression();
			$$->type = "bool";                         //new type is boolean
			$$->truelist = makelist(nextInstruction());     //makelist for truelist and falselist
			$$->falselist = makelist(nextInstruction()+1);
			emit("<", "", $1->loc->name, $3->loc->name);     //emit statement if a<b goto .. 
			emit("goto", "");	//emit statement goto ..
		}
	}
	| relational_expression GREATERTHAN shift_expression          
	{
		// similar to above, check compatible types,make new lists and emit
		if(!checkType($1->loc, $3->loc)) 
		{
			yyerror("Type Error in Program");
		}
		else 
		{	
			$$ = new expression();		
			$$->type = "bool";
			$$->truelist = makelist(nextInstruction());
			$$->falselist = makelist(nextInstruction()+1);
			emit(">", "", $1->loc->name, $3->loc->name);
			emit("goto", "");
		}	
	}
	| relational_expression LESSEQUAL shift_expression			 //similar to above, check compatible types,make new lists and emit
	{
		if(!checkType($1->loc, $3->loc)) 
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{			
			$$ = new expression();		
			$$->type = "bool";
			$$->truelist = makelist(nextInstruction());
			$$->falselist = makelist(nextInstruction()+1);
			emit("<=", "", $1->loc->name, $3->loc->name);
			emit("goto", "");
		}		
	}
	| relational_expression GREATEREQUAL shift_expression 			 //similar to above, check compatible types,make new lists and emit
	{
		if(!checkType($1->loc, $3->loc))
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{	
			$$ = new expression();	
			$$->type = "bool";
			$$->truelist = makelist(nextInstruction());
			$$->falselist = makelist(nextInstruction()+1);
			emit(">=", "", $1->loc->name, $3->loc->name);
			emit("goto", "");
		}
	}
	;

equality_expression: relational_expression  { $$=$1; }						//simply equate
	| equality_expression EQUAL relational_expression 
	{
		if(!checkType($1->loc, $3->loc))                //check compatible types
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			convertBool2Int($1);                  //convert bool to int		
			convertBool2Int($3);
			$$ = new expression();
			$$->type = "bool";
			$$->truelist = makelist(nextInstruction());            //make lists for new expression
			$$->falselist = makelist(nextInstruction()+1); 
			emit("==", "", $1->loc->name, $3->loc->name);      //emit if a==b goto ..
			emit("goto", "");				//emit goto ..
		}
	}
	| equality_expression NOTEQUAL relational_expression   //Similar to above, check compatibility, convert bool to int, make list and emit
	{
		if(!checkType($1->loc, $3->loc)) 
		{
			
			cout << "Type Error in Program"<< endl;
		}
		else 
		{			
			convertBool2Int($1);
			convertBool2Int($3);
			$$ = new expression();                 //result is boolean
			$$->type = "bool";
			$$->truelist = makelist(nextInstruction());
			$$->falselist = makelist(nextInstruction()+1);
			emit("!=", "", $1->loc->name, $3->loc->name);
			emit("goto", "");
		}
	}
	;

and_expression: equality_expression  { $$=$1; }						//simply equate
	| and_expression BITWISEAND equality_expression 
	{
		if(!checkType($1->loc, $3->loc))         //check compatible types 
		{		
			cout << "Type Error in Program"<< endl;
		}
		else 
		{              
			convertBool2Int($1);                             //convert bool to int	
			convertBool2Int($3);			
			$$ = new expression();
			$$->type = "not-boolean";                   //result is not boolean
			$$->loc = gentemp(new symType("int"));
			emit("&", $$->loc->name, $1->loc->name, $3->loc->name);               //emit the quad
		}
	}
	;

exclusive_or_expression: and_expression  { $$=$1; }				//simply equate
	| exclusive_or_expression XOR and_expression    
	{
		if(!checkType($1->loc, $3->loc))    //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			convertBool2Int($1);
			convertBool2Int($3);
			$$ = new expression();
			$$->type = "not-boolean";
			$$->loc = gentemp(new symType("int"));
			emit("^", $$->loc->name, $1->loc->name, $3->loc->name);
		}
	}
	;

inclusive_or_expression: exclusive_or_expression { $$=$1; }			//simply equate
	| inclusive_or_expression BITWISEOR exclusive_or_expression          
	{ 
		if(!checkType($1->loc, $3->loc))   //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
		{ yyerror("Type Error in Program"); }
		else 
		{
			convertBool2Int($1);		
			convertBool2Int($3);
			$$ = new expression();
			$$->type = "not-boolean";
			$$->loc = gentemp(new symType("int"));
			emit("|", $$->loc->name, $1->loc->name, $3->loc->name);
		} 
	}
	;

logical_and_expression: inclusive_or_expression  { $$=$1; }				//simply equate
	| logical_and_expression AND M inclusive_or_expression      //backpatching involved here
	{ 
		convertInt2Bool($4);                                  //convert inclusive_or_expression int to bool	
		convertInt2Bool($1);                                  //convert logical_and_expression to bool
		$$ = new expression();                                 //make new boolean expression 
		$$->type = "bool";
		backpatch($1->truelist, $3);                           //if $1 is true, we move to $5
		$$->truelist = $4->truelist;                           //if $5 is also true, we get truelist for $$
		$$->falselist = merge($1->falselist, $4->falselist);   //merge their falselists
	}
	;

logical_or_expression: logical_and_expression   { $$=$1; }				//simply equate
	| logical_or_expression OR M logical_and_expression        //backpatching involved here
	{ 
		convertInt2Bool($4);			 //convert logical_and_expression int to bool	
		convertInt2Bool($1);			 //convert logical_or_expression to bool
		$$ = new expression();			 //make new boolean expression
		$$->type = "bool";
		backpatch($1->falselist, $3);		//if $1 is true, we move to $5
		$$->truelist = merge($1->truelist, $4->truelist);		//merge their truelists
		$$->falselist = $4->falselist;		 	//if $5 is also false, we get falselist for $$
	}
	;

conditional_expression: logical_or_expression {$$=$1;}       //simply equate
	| logical_or_expression N QUESTIONMARK M expression N COLON M conditional_expression 
	{
		//normal conversion method to get conditional expressions
		$$->loc = gentemp($5->loc->type);       //generate temporary for expression
		$$->loc->update($5->loc->type);
		emit("=", $$->loc->name, $9->loc->name);      //make it equal to sconditional_expression
		list<int> l = makelist(nextInstruction());        //makelist next instruction
		emit("goto", "");              //prevent fallthrough
		backpatch($6->nextlist, nextInstruction());        //after N, go to next instruction
		emit("=", $$->loc->name, $5->loc->name);
		list<int> m = makelist(nextInstruction());         //makelist next instruction
		l = merge(l, m);						//merge the two lists
		emit("goto", "");						//prevent fallthrough
		backpatch($2->nextlist, nextInstruction());   //backpatching
		convertInt2Bool($1);                   //convert expression to boolean
		backpatch($1->truelist, $4);           //$1 true goes to expression
		backpatch($1->falselist, $8);          //$1 false goes to conditional_expression
		backpatch(l, nextInstruction());
	}
	;

assignment_expression: conditional_expression {$$=$1;}         //simply equate
	| unary_expression assignment_operator assignment_expression 
	 {
		if($1->artype=="arr")          // if type is arr, simply check if we need to convert and emit
		{
			$3->loc = convert($3->loc, $1->type->type);
			emit("[]=", $1->Sarr->name, $1->loc->name, $3->loc->name);		
		}
		else if($1->artype=="ptr")     // if type is ptr, simply emit
		{
			emit("*=", $1->Sarr->name, $3->loc->name);	
		}
		else                              //otherwise assignment
		{
			$3->loc = convert($3->loc, $1->Sarr->type->type);
			emit("=", $1->Sarr->name, $3->loc->name);
		}
		
		$$ = $3;
	}
	;


assignment_operator: ASSIGN   {  }
	| MULTIPLYEQUAL    {  }
	| DIVIDEEQUAL    {  }
	| MODULOEQUAL    {  }
	| PLUSEQUAL    {  }
	| MINUSEQUAL    {  }
	| SHIFTLEFTEQUALEQ    {  }
	| SHIFTRIGHTEQUALEQ    {  }
	| ANDEQUAL    {  }
	| XOREQUAL    {  }
	| OREQUAL    { }
	;

expression: assignment_expression {  $$=$1;  }
	| expression COMMA assignment_expression {   }
	;

constant_expression: conditional_expression {   }
	;

declaration: declaration_specifiers init_declarator_list SEMICOLON {	}
	| declaration_specifiers SEMICOLON {  	}
	;

declaration_specifiers: storage_class_specifier declaration_specifiers {	}
	| storage_class_specifier {	}
	| type_specifier declaration_specifiers {	}
	| type_specifier {	}
	| type_qualifier declaration_specifiers {	}
	| type_qualifier {	}
	| function_specifier declaration_specifiers {	}
	| function_specifier {	}
	;

init_declarator_list: init_declarator {	}
	| init_declarator_list COMMA init_declarator {	}
	;

init_declarator: declarator {$$=$1;}
	| declarator ASSIGN initializer 
	{
		if($3->val!="") $1->val=$3->val;        //get the initial value and  emit it
		emit("=", $1->name, $3->name);	
	}
	;

storage_class_specifier: EXTERN  { }
	| STATIC  { }
	;

type_specifier: VOID   { varType="void"; }           //store the latest type in varType
	| CHAR   { varType="char"; }
	| SHORT  { }
	| INT   { varType="int"; }
	| LONG   {  }
	| FLOAT   { varType="float"; }
	| DOUBLE   { }
	| SIGNED   {  }
	| UNSIGNED   { }
	| _BOOL   {  }
	| _COMPLEX   {  }
	| _IMAGINARY   {  }
	| enum_specifier   {  }
	;

specifier_qualifier_list: type_specifier specifier_qualifier_list_opt   {  }
	| type_qualifier specifier_qualifier_list_opt  {  }
	;

specifier_qualifier_list_opt: /* empty */ {  }
	| specifier_qualifier_list  {  }
	;

enum_specifier: ENUM identifier_opt '{' enumerator_list '}'   {  }
	| ENUM identifier_opt '{' enumerator_list COMMA '}'   {  }
	| ENUM IDENTIFIER {  }
	;

identifier_opt: /* empty */  {  }
	| IDENTIFIER   {  }
	;

enumerator_list: enumerator   {  }
	| enumerator_list COMMA enumerator   {  }
	;	

enumerator: IDENTIFIER   {  }
	| IDENTIFIER ASSIGN constant_expression   {  }
	;

type_qualifier: CONST   {  }
	| RESTRICT   {  }
	| VOLATILE   {  }
	;

function_specifier: INLINE   {  }
	;

declarator: pointer direct_declarator 
	{
		symType *t = $1;
		while(t->ptr!=NULL) t = t->ptr;           //for multidimensional arr1s, move in depth till you get the base type
		t->ptr = $2->type;                //add the base type 
		$$ = $2->update($1);                  //update
	}
	| direct_declarator {   }
	;

direct_declarator: IDENTIFIER                 //if ID, simply add a new variable of varType
	{
		$$ = $1->update(new symType(varType));
		currS = $$;	
	}
	| '(' declarator ')' {$$=$2;}        //simply equate
	| direct_declarator '[' type_qualifier_list assignment_expression ']'{	}
	| direct_declarator '[' type_qualifier_list ']'{	}
	| direct_declarator '[' assignment_expression ']'
	{
		symType *t = $1 -> type;
		symType *prev = NULL;
		while(t->type == "arr") 
		{
			prev = t;	
			t = t->ptr;      //keep moving recursively to get basetype
		}
		if(prev==NULL) 
		{
			int temp = atoi($3->loc->val.c_str());      //get initial value
			symType* s = new symType("arr", $1->type, temp);        //create new symbol with that initial value
			$$ = $1->update(s);   //update the symbol table
		}
		else 
		{
			prev->ptr =  new symType("arr", t, atoi($3->loc->val.c_str()));     //similar arguments as above		
			$$ = $1->update($1->type);
		}
	}
	| direct_declarator '[' ']'
	{
		symType *t = $1 -> type;
		symType *prev = NULL;
		while(t->type == "arr") 
		{
			prev = t;	
			t = t->ptr;         //keep moving recursively to base type
		}
		if(prev==NULL) 
		{
			symType* s = new symType("arr", $1->type, 0);    //no initial values, simply keep 0
			$$ = $1->update(s);
		}
		else 
		{
			prev->ptr =  new symType("arr", t, 0);
			$$ = $1->update($1->type);
		}
	}
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'{	}
	| direct_declarator '[' STATIC assignment_expression ']'{	}
	| direct_declarator '[' type_qualifier_list STAR ']'{	}
	| direct_declarator '[' STAR ']'{	}
	| direct_declarator '(' changetable parameter_type_list ')' 
	{
		ST->name = $1->name;	
		if($1->type->type !="void") 
		{
			sym *s = ST->lookup("return");         //lookup for return value	
			s->update($1->type);		
		}
		$1->nestedST=ST;       
		ST->parent = globalST;
		changeTable(globalST);				// Come back to globalsymbol table
		currS = $$;
	}
	| direct_declarator '(' identifier_list ')' {	}
	| direct_declarator '(' changetable ')' 
	{        //similar as above
		ST->name = $1->name;
		if($1->type->type !="void") 
		{
			sym *s = ST->lookup("return");
			s->update($1->type);
		}
		$1->nestedST=ST;
		ST->parent = globalST;
		changeTable(globalST);				// Come back to globalsymbol table
		currS = $$;
	}
	;

type_qualifier_list_opt: /* empty */   {  }
	| type_qualifier_list      {  }
	;

pointer: STAR type_qualifier_list_opt   
	{ 
		$$ = new symType("ptr");   //create new pointer
	}         
	| STAR type_qualifier_list_opt pointer 
	{ 
		$$ = new symType("ptr",$3);
	}
	;

type_qualifier_list: type_qualifier   {  }
	| type_qualifier_list type_qualifier   {  }
	;

parameter_type_list: parameter_list   {  }
	| parameter_list COMMA DOTS   {  }
	;

parameter_list: parameter_declaration   {  }
	| parameter_list COMMA parameter_declaration    {  }
	;

parameter_declaration: declaration_specifiers declarator   {  }
	| declaration_specifiers    {  }
	;

identifier_list: IDENTIFIER	{  }		  
	| identifier_list COMMA IDENTIFIER   {  }
	;

type_name: specifier_qualifier_list   {  }
	;

initializer: assignment_expression   { $$=$1->loc; }    //assignment
	| '{' initializer_list '}'  {  }
	| '{' initializer_list COMMA '}'  {  }
	;

initializer_list: designation_opt initializer  {  }
	| initializer_list COMMA designation_opt initializer   {  }
	;

designation_opt: /* empty */   {  }
	| designation   {  }
	;

designation: designator_list ASSIGN   {  }
	;

designator_list: designator    {  }
	| designator_list designator   {  }
	;

designator: '[' constant_expression ']'  {  }
	| DOT IDENTIFIER {  }
	;

/*****************STATEMENTS************/

statement   : labeled_statement  {  }
	        | compound_statement { $$=$1; }
	        | expression_statement   
	        { 
		        $$=new statement();             
		        $$->nextlist=$1->nextlist; 
	        }
	        | selection_statement   { $$=$1; }
	        | iteration_statement   { $$=$1; }
	        | jump_statement   { $$=$1; }
	        ;

loop_statement  : labeled_statement   {  }
	            | expression_statement   
	            { 
                    $$=new statement();              
                    $$->nextlist=$1->nextlist; 
                }
                | selection_statement   { $$=$1; }
                | iteration_statement   { $$=$1; }
                | jump_statement   { $$=$1; }
                ;

labeled_statement   : IDENTIFIER COLON M statement   
                    {  
                        $$ = $4;
                        label *s = findLabel($1->name);
                        if(s!=nullptr){
                            s->addr = $3;
                            backpatch(s->nextlist,s->addr);
                        }else{
                            s = new label($1->name);
                            s->addr = nextInstruction();
                            s->nextlist = makelist($3);
                            labelList.push_back(*s);
                        }
                    }
                    | CASE constant_expression COLON statement   {  }
                    | DEFAULT COLON statement   {  }
                    ;

compound_statement: '{' X changetable block_item_list_opt '}'   
	{ 
		$$=$4;
		changeTable(ST->parent); 
	}  //equate
	;

block_item_list_opt: /* empty */  { $$=new statement(); }      //create new statement
	| block_item_list   { $$=$1; }        //simply equate
	;

block_item_list: block_item   { $$=$1; }			//simply equate
	| block_item_list M block_item    
	{ 
		$$=$3;
		backpatch($1->nextlist,$2);     //after $1, move to block_item via $2
	}
	;

block_item: declaration   { $$=new statement(); }          //new statement
	| statement   { $$=$1; }				//simply equate
	;

expression_statement: expression SEMICOLON {$$=$1;}			//simply equate
	| SEMICOLON {$$ = new expression();}      //new  expression
	;

selection_statement: IF '(' expression N ')' M statement N %prec "then"      // if statement without else
	{
		backpatch($4->nextlist, nextInstruction());        //nextlist of N goes to nextInstruction
		convertInt2Bool($3);         //convert expression to bool
		$$ = new statement();        //make new statement
		backpatch($3->truelist, $6);        //is expression is true, go to M i.e just before statement body
		list<int> temp = merge($3->falselist, $7->nextlist);   //merge falselist of expression, nextlist of statement and second N
		$$->nextlist = merge($8->nextlist, temp);
	}
	| IF '(' expression N ')' M statement N ELSE M statement   //if statement with else
	{
		backpatch($4->nextlist, nextInstruction());		//nextlist of N goes to nextInstruction
		convertInt2Bool($3);        //convert expression to bool
		$$ = new statement();       //make new statement
		backpatch($3->truelist, $6);    //when expression is true, go to M1 else go to M2
		backpatch($3->falselist, $10);
		list<int> temp = merge($7->nextlist, $8->nextlist);       //merge the nextlists of the statements and second N
		$$->nextlist = merge($11->nextlist,temp);	
	}
	| SWITCH '(' expression ')' statement {	}       //not to be modelled
	;

iteration_statement: WHILE W '(' X changetable M expression ')' M loop_statement      //while statement
	{	
		$$ = new statement();    //create statement
		convertInt2Bool($7);     //convert expression to bool
		backpatch($10->nextlist, $6);	// M1 to go back to expression again
		backpatch($7->truelist, $9);	// M2 to go to statement if the expression is true
		$$->nextlist = $7->falselist;   //when expression is false, move out of loop
		// Emit to prevent fallthrough
		string str=to_string($6);		
		emit("goto",str);	
		loopName = "";
		changeTable(ST->parent);
	}
	|
	WHILE W '(' X changetable M expression ')' '{' M block_item_list_opt '}'     //while statement
	{	
		$$ = new statement();    //create statement
		convertInt2Bool($7);     //convert expression to bool
		backpatch($11->nextlist, $6);	// M1 to go back to expression again
		backpatch($7->truelist, $10);	// M2 to go to statement if the expression is true
		$$->nextlist = $7->falselist;   //when expression is false, move out of loop
		// Emit to prevent fallthrough
		string str=to_string($6);		
		emit("goto",str);	
		loopName = "";
		changeTable(ST->parent);
	}
	| DO D M loop_statement M WHILE '(' expression ')' SEMICOLON      //do statement
	{
		$$ = new statement();     //create statement	
		convertInt2Bool($8);      //convert to bool
		backpatch($8->truelist, $3);						// M1 to go back to statement if expression is true
		backpatch($4->nextlist, $5);						// M2 to go to check expression if statement is complete
		$$->nextlist = $8->falselist;                       //move out if statement is false
		loopName = "";
	}
	| DO D '{' M block_item_list_opt '}' M WHILE '(' expression ')' SEMICOLON      //do statement
	{
		$$ = new statement();     //create statement	
		convertInt2Bool($10);      //convert to bool
		backpatch($10->truelist, $4);						// M1 to go back to statement if expression is true
		backpatch($5->nextlist, $7);						// M2 to go to check expression if statement is complete
		$$->nextlist = $10->falselist;                       //move out if statement is false
		loopName = "";
	}
	| FOR F '(' X changetable declaration M expression_statement M expression N ')' M loop_statement     //for loop
	{
		$$ = new statement();		 //create new statement
		convertInt2Bool($8);  //convert check expression to boolean
		backpatch($8->truelist, $13);	//if expression is true, go to M2
		backpatch($11->nextlist, $7);	//after N, go back to M1
		backpatch($14->nextlist, $9);	//statement go back to expression
		string str=to_string($9);
		emit("goto", str);				//prevent fallthrough
		$$->nextlist = $8->falselist;	//move out if statement is false
		loopName = "";
		changeTable(ST->parent);
	}
	| FOR F '(' X changetable expression_statement M expression_statement M expression N ')' M loop_statement     //for loop
	{
		$$ = new statement();		 //create new statement
		convertInt2Bool($8);  //convert check expression to boolean
		backpatch($8->truelist, $13);	//if expression is true, go to M2
		backpatch($11->nextlist, $7);	//after N, go back to M1
		backpatch($14->nextlist, $9);	//statement go back to expression
		string str=to_string($9);
		emit("goto", str);				//prevent fallthrough
		$$->nextlist = $8->falselist;	//move out if statement is false
		loopName = "";
		changeTable(ST->parent);
	}
	| FOR F '(' X changetable declaration M expression_statement M expression N ')' M '{' block_item_list_opt '}'      //for loop
	{
		$$ = new statement();		 //create new statement
		convertInt2Bool($8);  //convert check expression to boolean
		backpatch($8->truelist, $13);	//if expression is true, go to M2
		backpatch($11->nextlist, $7);	//after N, go back to M1
		backpatch($15->nextlist, $9);	//statement go back to expression
		string str=to_string($9);
		emit("goto", str);				//prevent fallthrough
		$$->nextlist = $8->falselist;	//move out if statement is false
		loopName = "";
		changeTable(ST->parent);
	}
	| FOR F '(' X changetable expression_statement M expression_statement M expression N ')' M '{' block_item_list_opt '}'
	{	
		$$ = new statement();		 //create new statement
		convertInt2Bool($8);  //convert check expression to boolean
		backpatch($8->truelist, $13);	//if expression is true, go to M2
		backpatch($11->nextlist, $7);	//after N, go back to M1
		backpatch($15->nextlist, $9);	//statement go back to expression
		string str=to_string($9);
		emit("goto", str);				//prevent fallthrough
		$$->nextlist = $8->falselist;	//move out if statement is false
		loopName = "";
		changeTable(ST->parent);
	}
	;

jump_statement: GOTO IDENTIFIER SEMICOLON { 
		$$ = new statement();
		label *l = findLabel($2->name);
		if(l){
			emit("goto","");
			list<int>lst = makelist(nextInstruction());
			l->nextlist = merge(l->nextlist,lst);
			if(l->addr!=-1)
				backpatch(l->nextlist,l->addr);
		} else {
			l = new label($2->name);
			l->nextlist = makelist(nextInstruction());
			emit("goto","");
			labelList.push_back(*l);
		}
	}           
	| CONTINUE SEMICOLON { $$ = new statement(); }			  
	| BREAK SEMICOLON { $$ = new statement(); }
	| RETURN expression SEMICOLON               
	{
		$$ = new statement();	
		emit("return",$2->loc->name);               //emit return with the name of the return value
	}
	| RETURN SEMICOLON 
	{
		$$ = new statement();	
		emit("return","");                         //simply emit return
	}
	;

/*EXTERNAL DEFINITIONS*/

translation_unit: external_declaration { }
	| translation_unit external_declaration { } 
	;

external_declaration: function_definition {  }
	| declaration   {  }
	;
	                      
function_definition: declaration_specifiers declarator declaration_list_opt changetable '{' block_item_list_opt '}'  
	{
		int instr = 0; 	
		ST->parent=globalST;
		tableCount = 0;
		labelList.clear();
		changeTable(globalST);
	}
	;

declaration_list: declaration   {  }
	| declaration_list declaration    {  }
	;				   										  				   

declaration_list_opt: /*empty*/ {  }
	| declaration_list   {  }
	;


%%

void yyerror(string s){
    cout << "Error: " << s << endl;
}