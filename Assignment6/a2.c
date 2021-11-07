// testing file for function calls and other function related operators

// function to calculate factorial iteratively

int factItr(int n){

    int val = 1 ;

    for(int i = 2 ; i <= n ; i++){
        val *= i ;
    }

    return val ;
}

// function to calculate fatorial recursively
int factRec(int n){

    if(n == 1) return 1 ;
    
    else return n*fact(n-1) ;
}


// test function 
void test(){
    int *ee ;
    printStr("Enter a number: ") ; 
    
    int x = readInt(ee) ;

    // recursive call
    int recval = factRec(x) ;
    // iterative call 
    int itrval = factItr(x) ;

    printStr("The value of ") ; printInt(x) ; printStr("! calculated iteratively = ") ; printInt(itrval) ;
    printStr("The value of ") ; printInt(x) ; printStr("! calculated recursively = ") ; printInt(recval) ;

    return ;
}

int main(){

    printStr("test file #2") ;

    // calling test function
    test() ;

    return 0 ; 
}