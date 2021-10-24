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

symbol* symbol::Update(){

}
