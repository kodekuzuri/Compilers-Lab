int printInt(int num);
int printStr(char *c);
int readInt(int *eP);


// gcd function 
int gcd(int a, int b){

    if(b == 0) return a ;
    return gcd(b, a%b) ;
}

void test(){
    
    int *ee ;
    printStr("Enter 1st number: ") ; 
    
    int x = readInt(ee) ;

    printStr("Enter 2nd number: ") ; 
    
    int y = readInt(ee) ;

    int z = gcd(x, y) ;

    // arithmetic operators check 
    int a = x - z ;
    int b = y + z ;
    int c = x * z ;
    int d = x / z ;
  
    printStr("a - gcd(a, b) = ") ; printInt(a) ;
    printStr("\n") ;
    printStr("b + gcd(a, b) = ") ; printInt(b) ;
    printStr("\n") ;
    printStr("a * gcd(a, b) = ") ; printInt(c) ;
    printStr("\n") ;
    printStr("a / gcd(a, b) = ") ; printInt(d) ;   
    printStr("\n") ; 

    return ;
}

int main(){

    printStr("test file #3") ;

    // calling test function
    test() ;

    return 0 ; 
}
