/*
NAMES: PRANAV RAJPUT (19CS30036), PARTH JINDAL(19CS30033)
SUBJECT: COMPILERS LAB
ASSIGNMENT: 5
*/

#ifndef __TRANSLATION_H
#define __TRANSLATION_H

// including header files needed
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <map>
using namespace std;

extern char* yytext;
extern int yyparse();

// defining constants for type sizes
#define size_of_char 1
#define size_of_int 4
#define size_of_float 8
#define size_of_int_pointer 4
#define size_of_float_pointer 4
#define size_of_char_pointer 4

//sizes are defined as constants as hardcoded values make the program machine-dependent
//these values can be changed according to the machine it is being executed on

//CLASS DECLARATIONS
class symbol ;
class quad ;
class symType ;
class symTable ;
class quadArray ;

// Pointer to current symbol
extern symbol* currS ;

// current symbol table for the code 
extern symTable STable ;

// global Symbol Table
extern symTable globalSTable ;

// array of quads for the ones in the code
extern quadArray QArray ;

//CLASS DEFINITIONS

//-- CLASS SYMBOL

class symbol{
    public:

    // name of the symbol
    string name ;

    // type of symbol
    symType* s_type ;

    // to store any initial value present for the symbol
    string iVal ;

    // storing size of the symbol
    int size ;

    // storing the offset from the base pointer
    int offset ;

    // This pointer points to the nest 
    symTable* nestedST ;

    //member functions
    
    //Class constructor for initizalization 
    symbol(string sname, string tt = "INT", symType* p = NULL, int ss = 0) ;

    //function to update any symbol
    symbol* Update(symType* ts) ;
};

//--CLASS QUAD

class quad{
public:
    // res = arg2 op arg1
    string res ;
    string arg2 ;
    string op ;
    string arg1 ;

    // function to print the current quad
    void PRINT() ;

    // Constructors for quad initialization
    quad(string res, string arg2, string op = "=", string arg1 = "");
    quad(string res, float arg2, string op = "=", string arg1 = "");
    quad(string res, int arg2, string op = "=", string arg1 = "");
};


//--CLASS SYMBO TYPW

class symType{
public:
    // string to store symbol type
    string type ;
    // pointer to elements in case of complex symbol type such as array
    symType* p ;
    // number of elements.
    // for arrays etc. width = n
    // for simple width = 1
    int width ;

    // constructor for intialization
    symType(string type, symType* p = NULL, int width = 1);
};

// --CLASS QUAD ARRAY

class quadArray{
public:
    // vector to store all quads in code
    vector<quad> quadA ;

    // member function to print all the quads
    void print();
};

//--CLASS SYMTABLE

class symTable{
public:
    // variable to store the name of the table
    string name ;
    // counter for the number of temporary variables used
    int counter ;
    // list of symbols to store symbol table
    list<symbol> ST ;
    // pointer to store parent symbol table
    symTable* parent

    //member functions
    symTable(string name = "NULL");

    // function to update the symbol table
    void update();

    //function to print the symbol table
    void print();

    //function that searches for a symbol by name and returns a pointer to it
    symbol* lookup(string name);
};

struct statement{
    // list to store 
    list<int> nextList ;
};

struct expression{
    // string to store type
    string type ;
    // pointer to the entry in symbol table
    symbol* loc ;
    // next list for statement expressions
    list<symbol> nextList ;
    // false list for boolean expressions
    list<symbol> falseList ;
    // true list for boolean expressions
    list<symbol> trueList ;
};

// emit function used by the parser in overloaded state
void emit(string res, string op, string arg1 = "", string arg2 = "");
void emit(string res, string op, int arg1 = "", string arg2 = "");
void emit(string res, string op, float arg1 = "", string arg2 = "");

struct array{
    // string to store type of array [pointers , elements]
    string artype ;
    // symbol type of generated subarray stored
    // important for when multidimensional array in encountered
    symType* type ;
    // pointer to store location of array
    symbol* loc ;
    // pointer to symbol table entry
    symbol* Sarr ;
} ;

// LIST RELATED FUNCTIONS

// making a new list with only the integer address passed as parameter 
list<int> makelist (int i);      
// function to merge the 2 lists L1 and L2 passed as parameters
list<int> merge (list<int> &L1, list <int> &L2) ; 
// inserting target label into group of quads i.e. list<int> L
void backpatch (list <int> L, int i);                         

// BOOLEAN RELATED FUNCTIONS

// function for conversion of boolean expression to int
expression* convertBool2Int(expression*) ;
// function for conversion of integer expression to int
expression* convertInt2Bool(expression*) ;

// overloaded function to check if the symbol type is same for 2 symbols
bool checkType(symbol* &c1, symbol* &c2) ;
bool checkType(symType* s1, symType* s2) ;

// function to get the size of the symbol
int typeSize(symType*) ;

// function to get the type of the symbol
string typeGet(symType*) ;


//GENTEMP FUNCTION
symbol* gentemp(symTable* T, string initVal = "") ;

// returns the number of the next instruction
int nextInstruction() ;

// global function for the conversion of symbol to the type stored in string  
symbol* convert(symbol* , string) ;

// changing table passed as paramater to a new symbol table
void changeTable(symTable*) ;                                                  

#endif // __TRANSLATION_H

