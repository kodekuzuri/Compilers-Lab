// testing print and read operations

void test(){
    
    int *errVal ;

    printStr("***********************************************************************************************\n") ;
    
    // checking printStr function 
    printStr("This is a test file for checking the proper functioning of the library functions readInt, printInt and printStr\n") ;
    
    // checking readInt function
    printStr("Enter value to check readInt function") ;
    int v = readInt(errVal) ;

    // checking printInt function
    printStr("The value entered by the user is : ") ;
    printInt(v) ;

    printStr("\n***********************************************************************************************\n") ;

    return ;
}


int main(){

    printStr("Test file #1 \n") ;
    printStr("checking self-built-library functions\n") ;
    
    // call to test function 
    test() ;

    return 0 ;
}