/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_ASSGN5_19CS30033_19CS30036_TAB_H_INCLUDED
# define YY_YY_ASSGN5_19CS30033_19CS30036_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    ELSE = 266,
    ENUM = 267,
    EXTERN = 268,
    REGISTER = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    LONG = 275,
    RESTRICT = 276,
    RETURN = 277,
    SHORT = 278,
    SIGNED = 279,
    SIZEOF = 280,
    STATIC = 281,
    STRUCT = 282,
    SWITCH = 283,
    INT = 284,
    DOUBLE = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    BOOL = 292,
    COMPLEX = 293,
    IMAGINARY = 294,
    IDENTIFIER = 295,
    INTEGER_CONSTANT = 296,
    FLOATING_CONSTANT = 297,
    CHARACTER_CONSTANT = 298,
    STRING_LITERAL = 299,
    DOT = 300,
    ARROW = 301,
    INCREMENT = 302,
    DECREMENT = 303,
    BITWISEAND = 304,
    STAR = 305,
    PLUS = 306,
    MINUS = 307,
    NOT = 308,
    EXCLAMATION = 309,
    DIVIDE = 310,
    PERCENTAGE = 311,
    LEFTSHIFT = 312,
    RIGHTSHIFT = 313,
    LESSTHAN = 314,
    GREATERTHAN = 315,
    LESSEQUAL = 316,
    GREATEREQUAL = 317,
    EQUAL = 318,
    NOTEQUAL = 319,
    XOR = 320,
    BITWISEOR = 321,
    AND = 322,
    OR = 323,
    QUESTIONMARK = 324,
    COLON = 325,
    SEMICOLON = 326,
    ELLIPSIS = 327,
    ASSIGN = 328,
    MULTIPLYEQUAL = 329,
    DIVIDEEQUAL = 330,
    MODULOEQUAL = 331,
    PLUSEQUAL = 332,
    MINUSEQUAL = 333,
    SHIFTLEFTEQUAL = 334,
    SHIFTRIGHTEQUAL = 335,
    ANDEQUAL = 336,
    XOREQUAL = 337,
    OREQUAL = 338,
    COMMA = 339,
    HASH = 340
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "assgn5_19CS30033_19CS30036.y"

    char unaryOp;	// unary operator
    char* charVal;	// char value
    int instrNum;	// instruction number
    int intVal;		// integer value
	float floatVal;	// float value
    int numParams;	// number of parameters
    expression* exp; // expression
    statement* stmt; // statement
    symType* stype; // symbol type
    symbol* sym;    // symbol
    Array* arr;		// Array type

#line 157 "assgn5_19CS30033_19CS30036.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASSGN5_19CS30033_19CS30036_TAB_H_INCLUDED  */
