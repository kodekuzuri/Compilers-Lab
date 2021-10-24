/*
NAMES: PRANAV RAJPUT (19CS30036), PARTH JINDAL(19CS30033)
SUBJECT: COMPILERS LAB
ASSIGNMENT: 5
*/

// including the custom header file
#include "assgn5_19CS30033_19CS30036_translator.h"

// including built-in libraries
#include <bits/stdc++.h>
using namespace std;

// GLOBAL VARIABLES [Imported from header file]

// Pointer to current symbol
symbol* currS;
// current symbol table for the code
symTable* ST;
// global Symbol Table
symTable* globalST;
// array of quads for the ones in the code
quadArray QArray;
std::string varType;
std::string loopName;
symTable* parST;
long long int tableCount;
std::vector<label> labelList;

// IMPLEMENTING symbol CLASS FUNCTIONS

// constructor
symbol::symbol(string name_, string type_,
               symType* ptr, int width) : name(name_),
                                          nestedST(NULL),
                                          offset(0) {
    this->type = new symType(type_, ptr, width);
    this->size = typeSize(this->type);
    this->val = "";
}

// update function
symbol* symbol::update(symType* ptr) {
    this->type = ptr;
    this->size = typeSize(ptr);
    return this;
}

symType::symType(string type_, symType* ptr, int width_) {
    this->type = type_;
    this->ptr = ptr;
    this->width = width;
}

label::label(string name_, int addr_) : name(name_), addr(addr_) {}

symTable::symTable(string name_) : name(name_), count(0) {}

symbol* symTable::lookup(string name_) {
    symbol* s;
    for (auto it = this->table.begin(); it != this->table.end(); it++) {
        if (it->name == name_)
            return &(*it);
    }
    if (this->parent != NULL)
        s = this->parent->lookup(name_);
    if (ST == this && s == NULL) {
        s = new symbol(name);
        this->table.push_back(*s);
        return &(this->table.back());
    } else if (s != NULL)
        return s;
    else
        return NULL;
}

void symTable::update() {
    int offset = 0;
    std::vector<symTable*> tablePtrs;
    for (auto it = this->table.begin(); it != this->table.end(); it++) {
        it->offset = offset;
        offset += it->size;
        if (it->nestedST != NULL)
            tablePtrs.push_back(it->nestedST);
    }
    for (auto it = tablePtrs.begin(); it != tablePtrs.end(); it++)
        (*it)->update();
}

void symTable::print() {
    cout << "_______________________" << endl;
    cout << "Table-Name: " << this->name << "   ";
    cout << "Parent Table-Name: " << (this->parent == NULL ? "NULL" : this->parent->name) << endl;
    cout << "Name"
         << "\t"
         << "Type"
         << "\t"
         << "Offset"
         << "\t"
         << "Size"
         << "\t"
         << "Nested Table" << endl;
    vector<symTable*> tablePtrs;
    for (auto it = this->table.begin(); it != this->table.end(); it++) {
        cout << it->name
             << "\t"
             << it->type->type
             << "\t"
             << it->offset
             << "\t"
             << it->size
             << "\t"
             << (it->nestedST == NULL ? "null" : it->nestedST->name)
             << endl;
        if (it->nestedST != NULL)
            tablePtrs.push_back(it->nestedST);
    }

    for (auto it = tablePtrs.begin(); it != tablePtrs.end(); it++)
        (*it)->print();
}

quad::quad(string res_, string arg1_,
           string op_, string arg2_) : res(res_),
                                       arg1(arg1_),
                                       op(op_),
                                       arg2(arg2_) {}
void quad::print() {
    static vector<string> binOps = {"+", "-", "*", "/", "%", "|", "^", "&", ">>", "<<"};
    if (find(binOps.begin(), binOps.end(), this->op) != binOps.end())
        cout << this->res << " = " << this->arg1 << " " << this->op << " " << this->arg2 << endl;
    //RELATIONAL OPERATORS
    else if (op == "==" || op == "!=" || op == "<=" || op == "<" || op == ">=")
        cout << "if " << arg1 << " " << op << " " << arg2 << " goto " << res << endl;
    else if (op == "goto")
        cout << "goto " << res << endl;
    else if (op == "=")
        cout << res << " = " << arg1 << endl;
    else if (op == "=&")
        cout << res << " = &" << arg1 << endl;
    else if (op == "=*")
        cout << res << " = *" << arg1 << endl;
    // else if (op == "*=")
    //     cout << res << " = " << arg1 << " * " << arg2 << endl;
    else if (op == "uminus")
        cout << res << " = -" << arg1 << endl;
    else if (op == "~")
        cout << res << " = ~" << arg1 << endl;
    else if (op == "!")
        cout << res << " = !" << arg1 << endl;

    // EXTRA OPERATORS
    else if (op == "=[]")
        cout << res << " = " << arg1 << "[" << arg2 << "]" << endl;
    else if (op == "[]=")
        cout << res << "[" << arg1 << "] = " << arg2 << endl;
    else if (op == "return")
        cout << "return " << res << endl;
    else if (op == "param")
        cout << "param" << res << endl;
    else if (op == "call")
        cout << res << " = call " << arg1 << " " << arg2 << endl;
    else if (op == "label")
        cout << res << ": " << endl;
    else
        cout << "undefined operator" << op << endl;
}

void quadArray::print() {
    cout << "THREE ADDRESS CODE(TAC)" << endl;
    int i = 0;
    for (auto it = this->array.begin(); it != this->array.end(); it++) {
        if (it->op == "label") {
            cout << "\n"
                 << i << ": ";
            it->print();
        } else {
            cout << i << ": ";
            it->print();
        }
    }
}

void emit(string op, string res, string arg1, string arg2) {
    quad* q = new quad(res, arg1, op, arg2);
    QArray.array.push_back(*q);
}

void emit(string op, string res, int arg1, string arg2) {
    string arg1_ = to_string(arg1);
    quad* q = new quad(res, arg1_, op, arg2);
    QArray.array.push_back(*q);
}

void emit(string op, string res, float arg1, string arg2) {
    string arg1_ = to_string(arg1);
    quad* q = new quad(res, arg1_, op, arg2);
    QArray.array.push_back(*q);
}

symbol* gentemp(symType* T, string initVal) {
    string tmp = "t" + to_string(ST->count++);
    symbol* s = new symbol(tmp);
    s->type = T;
    s->size = typeSize(T);
    s->val = initVal;
    ST->table.push_back(*s);
    return &ST->table.back();
}

label* findLabel(string name) {
    for (auto it = labelList.begin(); it != labelList.end(); it++) {
        if (it->name == name) return &(*it);
    }
    return NULL;
}

void backpatch(list<int>& L, int i) {
    string s = to_string(i);
    for (auto it = L.begin(); it != L.end(); it++) {
        QArray.array[*it].res = s;
    }
}

list<int> makelist(int i) {
    list<int> L;
    L.push_back(i);
    return L;
}

list<int> merge(list<int>& L1, list<int>& L2) {
    L1.merge(L2);
    return L1;
}

expression* convertBool2Int(expression* e) {
    if (e->type == "bool") {
        e->loc = gentemp(new symType("int"));
        backpatch(e->trueList, nextInstruction());
        emit("=", e->loc->name, "true");
        int p = nextInstruction() + 1;
        string tmp = to_string(p);
        emit("goto", tmp);
        backpatch(e->falseList, nextInstruction());
        emit("=", e->loc->name, "false");
    }
    return e;
}

expression* convertInt2Bool(expression* e) {
    if (e->type != "bool") {
        e->falseList = makelist(nextInstruction());
        emit("=", e->loc->name, "0");
        e->trueList = makelist(nextInstruction());
        emit("goto", "");
    }
    return e;
}

int nextInstruction() {
    return QArray.array.size();
}

bool checkType(symbol*& t1, symbol*& t2) {
    symType* t1_ = t1->type;
    symType* t2_ = t2->type;
    if (checkType(t1_, t2_))
        return true;
    else if (t1 = convert(t1, t2_->type))
        return true;
    else if (t2 = convert(t2, t1_->type))
        return true;
    return false;
}

bool checkType(symType* t1, symType* t2) {
    if (t1 == NULL && t2 == NULL)
        return true;
    else if (t1 == NULL || t2 == NULL || t1->type != t2->type)
        return false;
    else
        return checkType(t1->ptr, t2->ptr);
}

void changeTable(symTable* Table) {
    ST = Table;
}

symbol* convert(symbol* s, string type) {
    symbol* tmp = gentemp(new symType(type));
    if (s->type->type == "float") {
        if (type == "int") {
            emit("=", tmp->name, "float2int(" + s->name + ")");
            return tmp;
        } else if (type == "char") {
            emit("=", tmp->name, "float2char(" + s->name + ")");
            return tmp;
        }
        return s;
    } else if (s->type->type == "int") {
        if (type == "float") {
            emit("=", tmp->name, "int2float(" + s->name + ")");
            return tmp;
        } else if (type == "char") {
            emit("=", tmp->name, "int2char(" + s->name + ")");
            return tmp;
        }
        return s;
    } else if (s->type->type == "char") {
        if (type == "float") {
            emit("=", tmp->name, "char2float(" + s->name + ")");
            return tmp;
        } else if (type == "int") {
            emit("=", tmp->name, "char2int(" + s->name + ")");
            return tmp;
        }
        return s;
    }
    return s;
}

int typeSize(symType* T) {
    if (T->type == "int")
        return size_of_int;
    else if (T->type == "float")
        return size_of_float;
    else if (T->type == "char")
        return size_of_char;
    else if (T->type == "ptr")
        return size_of_ptr;
    else if (T->type == "arr")
        return T->width * typeSize(T->ptr);
    else
        return 0;
}

string typeGet(symType* T) {
    if (T == NULL)
        return "null";
    if (T->type == "void")
        return "void";
    else if (T->type == "int")
        return "int";
    else if (T->type == "float")
        return "float";
    else if (T->type == "char")
        return "char";
    else if (T->type == "ptr")
        return "ptr(" + typeGet(T->ptr) + ")";
    else if (T->type == "arr") {
        return "arr(" + to_string(T->width) + "," + typeGet(T->ptr) + ")";
    } else if (T->type == "func")
        return "func";
    else if (T->type == "block")
        return "block";
    else
        return "undefined type";
}

int main() {
    ST = new symTable("Main");
    symbol s1 = symbol("a", "int", new symType("int"), 0);
    ST->table.push_back(s1);
    symbol s2 = symbol("b", "int", new symType("int"), 0);
    ST->table.push_back(s2);
    ST->update();
    ST->print();
}

// END OF DEFINITION OF CLASS quad
/// TODO: change emit declaration sign.