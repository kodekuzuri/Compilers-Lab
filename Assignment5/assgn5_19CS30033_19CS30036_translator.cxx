/*
NAMES: PRANAV RAJPUT (19CS30036), PARTH JINDAL(19CS30033)
SUBJECT: COMPILERS LAB
ASSIGNMENT: 5
*/

// including the custom header file
#include "assgn5_19CS30033_19CS30036_translator.h"

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
symbol::symbol(string sname, string tt = "INT", symbolType* p, int ss){

}
