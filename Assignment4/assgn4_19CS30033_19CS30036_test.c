int main(){
    
    int x = 6 ;
    float fNum = 365.77e-2 ;
    char testString[100] = "This is a program for testing the bison specification\n" ;
    double dNum = 33.76 ;
    char cTest = 'a' ;


    for(int i = 0 ; i < 4 ; i++){
        for(int j = i + 1 ; j < 7 ; j++)
            x++ ;
    }

    while(fNum > 0){
        fNum-- ;
        dNum-- ;
    }

    do{
        x-=4 ;
        dNum++ ;
    }while(x > 0) ;

    return 0 ;
}