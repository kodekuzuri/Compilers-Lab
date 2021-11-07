// test file to check conditional operators and relational operators and array operators

void numT(int x[], int n){
    
    for(int j = 0 ; j < n ; j++){

        int i = x[j] ;

        printInt(i) ;

        if((i % 2 == 0 ) && ( i % 3 == 0 )) printStr(" is even and divisible by 3") ;

        else if((i % 2 == 1) && ( i % 3 == 0 )) printStr(" is odd and divisible by 3") ;

        else if((i % 2 == 0 ) && ( i % 3 != 0 )) printStr(" is even and not divisible by 3") ;

        else printStr(" is odd and not divisible by 3") ;

        printStr("\n") ;
    }

    return ;
}

void test(){
    int n, x[1000] ;
    int *ee ;

    printStr("Enter the no. of numbers to be checked : ") ;
    n = readInt(ee) ;

    printStr("Enter the numbers \n") ;
    for(int i = 0 ; i < n ; i++) readInt(x[i]) ;

    numT(x, n) ;

    return 0 ;
}

int main(){
    printStr("Test file #4\n") ;

    // calling test function
    test() ;

    return 0 ;
}