int printInt(int num);
int printStr(char *c);
int readInt(int *eP);

void printGrid(int x, int y){

    if(x == y) printStr("The required grid is a square \n") ;
    else printStr("required grid is rectangular \n") ;

    printStr("The visualised grid [ * = 1x1 grid ] \n" ) ;

    for(int i = 0 ;  i < x ; i ++ ){
        for(int j = 0 ; j < y ; j++){
            
            printStr("*") ;
        }
        printStr("\n") ;
    } 

    return ;
}

void test(){
    int *ee ;
    printStr("Enter 1st number: ") ; 
    
    int x = readInt(ee) ;

    printStr("Enter 2nd number: ") ; 
    
    int y = readInt(ee) ;

    printGrid(x, y) ;

    return ;
}

int main(){
    printStr("Test file #5\n") ;

    // calling test function 
    test() ;

    return 0 ;
}