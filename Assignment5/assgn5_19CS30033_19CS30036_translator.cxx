/*
NAMES: PRANAV RAJPUT (19CS30036), PARTH JINDAL(19CS30033)
SUBJECT: COMPILERS LAB
ASSIGNMENT: 5
*/

// including the custom header file
#include "1.h"

// including built-in libraries
#include <bits/stdc++.h>
using namespace std ;

// GLOBAL VARIABLES [Imported from header file]
 
 // Pointer to current symbol
symbol* currS ;

// current symbol table for the code 
symTable STable ;

// global Symbol Table
symTable globalSTable ;

// array of quads for the ones in the code
quadArray QArray ;

// string to store current variable type 
string varType ;

// IMPLEMENTING symbol CLASS FUNCTIONS

// constructor
symbol::symbol(string sname, string tt = "INT", symType* p, int ss){
    name = sname ;
    s_type = new symType(tt, p, ss) ;
    iVal = "" ;
    nestedST = NULL ;
    offset = 0 ;
    size = typeSize(s_type) ;
}

// update function
symbol* symbol::Update(symTable* ts){

    this->size = TypeSize(ts) ;
    s_type = ts ;

    return this ;
}

// END OF DEFINITION OF CLASS symbol


// IMPLEMENTING quad CLASS FUNCTIONS
//constructor
quad::quad(string res, string arg1, string op, string arg2){
    this->res = res ;
    this->arg1 = arg1 ;
    this->op = op ;
    this->arg2 = arg2 ;
}

quad::quad(string res, int arg1, string op, string arg2){
    this->res = res ;
    this->arg1 = to_string(arg1) ;
    this->op = op ;
    this->arg2 = arg2 ;
}

quad::quad(string res, float arg1, string op, string arg2){
    this->res = res ;
    this->arg1 = to_string(arg1) ;
    this->op = op ;
    this->arg2 = arg2 ;
}

void quad::PRINT(){

}

// END OF DEFINITION OF CLASS quad

// IMPLEMENTING symTable CLASS FUNCTIONS

//constructor
symType::symType(string type, symType* p, int width) : type(type), p(p), width(width){}

// END OF DEFINITION OF CLASS symTable 

// IMPLEMENTING quadArray CLASS FUNCTIONS



// END OF DEFINITION OF CLASS quadArray
