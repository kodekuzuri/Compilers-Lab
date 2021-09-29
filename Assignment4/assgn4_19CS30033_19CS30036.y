%{
    #include "stdio.h"
    extern int yylex() ;
    void yyerror(char*) ;
%}

%union{

}

%%

%%

void yyerror(char *str){
    printf("found error %s\n", str) ;
    return ;
}
