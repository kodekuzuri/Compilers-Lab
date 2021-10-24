/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "assgn5_19CS30033_19CS30036.y"


#include <bits/stdc++.h>
#include <sstream>
#include "assgn5_19CS30033_19CS30036_translator.h"

extern int yylex();
void yyerror(string s);

extern string varType;
extern vector<label> labelList;

using namespace std;

#line 85 "assgn5_19CS30033_19CS30036.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 237 "assgn5_19CS30033_19CS30036.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASSGN5_19CS30033_19CS30036_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1210

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  398

#define YYUNDEFTOK  2
#define YYMAXUTOK   341


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      87,    88,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    89,     2,    90,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,     2,    92,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   136,   136,   142,   148,   154,   160,   172,   179,   193,
     199,   206,   213,   219,   225,   230,   237,   261,   269,   270,
     271,   278,   285,   286,   289,   294,   299,   304,   311,   312,
     318,   324,   357,   358,   361,   363,   365,   367,   369,   371,
     375,   376,   383,   400,   412,   426,   440,   441,   453,   467,
     468,   479,   494,   495,   511,   528,   544,   562,   563,   581,
     602,   603,   621,   622,   640,   641,   657,   658,   670,   671,
     683,   684,   705,   706,   728,   729,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   741,   742,   745,   748,   749,
     752,   753,   754,   755,   756,   757,   758,   759,   762,   763,
     766,   767,   774,   775,   778,   779,   780,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   793,   794,   797,
     798,   801,   802,   803,   806,   807,   810,   811,   814,   815,
     818,   819,   820,   823,   826,   833,   836,   841,   842,   843,
     844,   865,   885,   886,   887,   888,   889,   902,   903,   918,
     919,   922,   926,   932,   933,   936,   937,   940,   941,   944,
     945,   948,   949,   952,   955,   956,   957,   960,   961,   964,
     965,   968,   971,   972,   975,   976,   981,   982,   983,   988,
     989,   990,   993,   994,   999,  1000,  1001,  1004,  1018,  1019,
    1022,  1029,  1030,  1033,  1034,  1041,  1042,  1045,  1046,  1049,
    1058,  1068,  1071,  1085,  1098,  1107,  1116,  1129,  1142,  1155,
    1170,  1186,  1187,  1188,  1193,  1202,  1203,  1206,  1207,  1210,
    1220,  1221,  1224,  1225
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "ELSE", "ENUM", "EXTERN", "REGISTER",
  "FLOAT", "FOR", "GOTO", "IF", "INLINE", "LONG", "RESTRICT", "RETURN",
  "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "INT",
  "DOUBLE", "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE",
  "BOOL", "COMPLEX", "IMAGINARY", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL", "DOT",
  "ARROW", "INCREMENT", "DECREMENT", "BITWISEAND", "STAR", "PLUS", "MINUS",
  "NOT", "EXCLAMATION", "DIVIDE", "PERCENTAGE", "LEFTSHIFT", "RIGHTSHIFT",
  "LESSTHAN", "GREATERTHAN", "LESSEQUAL", "GREATEREQUAL", "EQUAL",
  "NOTEQUAL", "XOR", "BITWISEOR", "AND", "OR", "QUESTIONMARK", "COLON",
  "SEMICOLON", "ELLIPSIS", "ASSIGN", "MULTIPLYEQUAL", "DIVIDEEQUAL",
  "MODULOEQUAL", "PLUSEQUAL", "MINUSEQUAL", "SHIFTLEFTEQUAL",
  "SHIFTRIGHTEQUAL", "ANDEQUAL", "XOREQUAL", "OREQUAL", "COMMA", "HASH",
  "\"then\"", "'('", "')'", "'['", "']'", "'{'", "'}'", "$accept", "M",
  "F", "W", "D", "X", "N", "changetable", "primary_expression",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "type_qualifier_list_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "loop_statement", "labeled_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list",
  "declaration_list_opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    40,    41,    91,
      93,   123,   125
};
# endif

#define YYPACT_NINF (-294)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-223)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1137,  -294,  -294,     4,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,   -24,  1137,  1137,  -294,  1137,  1137,  1103,  -294,  -294,
     -18,    -6,  -294,    18,  -294,   -16,   -29,  -294,   498,    15,
     -22,  -294,  -294,  -294,  -294,  -294,  -294,    71,  -294,    65,
      18,    35,  -294,   -16,   891,  -294,   -24,  1137,  -294,   121,
     583,    15,    96,   -43,  -294,  -294,  -294,  -294,  -294,   102,
    1007,  -294,  -294,  -294,  -294,  -294,  1027,  1027,  -294,  -294,
    -294,  -294,  -294,  -294,   790,    -9,  -294,   137,   177,  1048,
    -294,   103,   149,   156,   185,   169,   129,   130,   139,   148,
     193,  -294,  -294,  -294,  -294,   127,  -294,   693,    36,   838,
     131,  -294,   133,   634,  1048,   -28,  -294,   790,  -294,   790,
    -294,  -294,  -294,    46,  1171,  -294,  1171,   142,   194,  1048,
     -38,   891,  -294,   -30,  -294,   197,   202,  -294,  -294,  1048,
    1048,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  1048,  -294,  -294,  1048,  1048,  1048,  1048,  1048,
    1048,  1048,  1048,  1048,  1048,  1048,  1048,  1048,  1048,  1048,
    1048,  -294,  -294,   201,   283,  -294,   -16,   175,   191,  -294,
     242,  -294,   204,   838,  -294,  -294,   207,  -294,   220,  -294,
    -294,  -294,  -294,   196,   250,  1048,  -294,  -294,  -294,  -294,
     922,  -294,   249,   -15,  -294,  -294,  -294,  -294,  -294,  -294,
     253,   258,  -294,    -8,  -294,  -294,  -294,  -294,   103,   103,
     149,   149,   156,   156,   156,   156,   185,   185,   169,   129,
     130,  1048,  1048,  -294,   274,  1048,   275,   280,  -294,  -294,
     311,   265,   943,   266,  -294,   288,  -294,  -294,   -23,  -294,
    -294,  -294,  -294,   267,   268,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,   889,  -294,  -294,   272,  -294,  -294,   277,   277,
    -294,    -9,  -294,  -294,  -294,   891,  -294,  1048,  -294,   139,
     148,  1048,  -294,   293,  -294,   339,   278,   279,   294,  1048,
    -294,    -3,  1048,   284,  -294,  -294,  -294,  -294,   283,  -294,
    -294,  -294,   -14,  -294,  -294,   289,   339,  -294,  -294,   534,
    -294,  -294,   289,  -294,    83,  -294,   339,   283,  -294,    27,
    -294,   302,  -294,   283,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,   290,   339,  -294,  -294,   285,  -294,  -294,   292,   340,
     735,  -294,  -294,  -294,  -294,  1048,  -294,   298,  -294,  -294,
     339,  1048,  -294,   358,  1048,   975,   975,  -294,    86,   310,
      93,  -294,  -294,   387,   312,  1048,   331,  1048,  1048,  -294,
    -294,   534,   104,  -294,   289,   289,   339,   283,  -294,   333,
     317,   318,  -294,   319,  -294,  -294,  -294,  -294,   391,   443,
     283,  -294,   283,  -294,   320,   322,  -294,  -294
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   105,   130,   124,   102,   109,   133,   108,   131,   106,
     111,   103,   107,   110,   112,   104,   132,   113,   114,   115,
     218,     0,    91,    93,   116,    95,    97,     0,   215,   217,
     123,     0,   136,   149,    89,     0,     0,    98,   100,   135,
       0,    90,    92,    94,    96,     1,   216,     0,   153,   151,
     150,     0,    88,     0,     0,   220,     0,   223,     8,     8,
       0,   134,   128,     0,   126,   152,   154,   137,    99,   100,
       0,     9,    10,    11,    12,    13,     0,     0,    34,    35,
      36,    37,    38,    39,     0,   169,    15,    28,    40,     0,
      42,    46,    49,    52,    57,    60,    62,    64,    66,    68,
      70,    72,   164,   101,   221,     0,   161,     0,     0,     0,
      35,   141,     0,     0,     0,     0,   121,     0,    32,     0,
      29,    30,    85,     0,   119,   163,   119,     0,     0,     0,
       0,     0,   170,     0,   172,     0,     0,    20,    21,    25,
       0,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,     0,    40,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     2,     0,   191,   148,   160,     0,   155,   157,
       0,   147,     0,     0,   145,   140,    35,   139,     0,    87,
     129,   122,   127,     0,     0,     0,    14,   120,   117,   118,
       0,   175,     0,   169,   165,   167,   171,   173,    18,    19,
       0,    24,    26,     0,    73,    43,    44,    45,    47,    48,
      50,    51,    53,    54,    55,    56,    58,    59,    61,    63,
      65,     0,     0,     2,     0,     0,     0,     0,     5,     3,
       0,     0,     0,     0,     4,     9,   198,     6,     0,   195,
     196,   176,   177,     0,     2,   193,   178,   179,   180,   181,
     159,   146,     0,   162,   143,     0,   144,   138,    33,     0,
      86,   169,    41,   174,   166,     0,    17,     0,    16,    67,
      69,     0,   212,     0,   211,     0,     2,     0,     0,     0,
     214,     0,     0,     0,     2,     8,   197,   219,     0,   156,
     158,   142,     0,   168,    27,     7,     0,   189,     2,     0,
       6,   210,     7,   213,     0,     6,     0,   191,   194,   169,
      22,     0,   188,   191,     2,   182,   183,   184,   185,   186,
       8,     0,     0,     8,   187,     0,    23,     2,     0,     0,
       0,     2,   201,     2,   190,     0,     2,     0,     2,     2,
       0,     0,    71,     0,     0,     0,     0,     7,     0,     0,
       0,     2,     2,   199,     2,     0,     0,     0,     0,     2,
       2,     0,     0,   204,     7,     7,     0,   191,   202,     0,
       0,     0,   200,     0,   205,     2,     2,   203,     0,     0,
     191,   206,   191,   207,     0,     0,   208,   209
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -294,  -121,  -294,  -294,  -294,  -293,  -291,   -56,  -294,  -294,
    -294,  -294,   -69,  -294,   -49,   108,   154,   116,   162,   247,
     248,   251,   187,   188,  -294,  -110,    -4,  -294,   -82,  -118,
       0,     6,  -294,   369,  -294,   112,    82,   297,  -294,  -294,
    -294,   309,    19,  -294,   -12,   385,  -294,   379,   -47,  -294,
    -294,   167,  -294,    92,  -126,   165,  -193,  -294,  -294,   304,
    -164,  -249,  -242,  -294,  -173,  -294,   151,  -199,  -234,  -195,
    -191,  -294,   419,  -294,  -294,  -294
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   231,   287,   293,   286,   295,   173,   105,    86,    87,
     210,   211,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   122,   152,   248,   190,
     249,    56,    36,    37,    22,    23,   125,   198,    24,    31,
      63,    64,    25,    26,    69,    39,    49,    40,    50,   177,
     178,   179,   108,   127,   103,   130,   131,   132,   133,   134,
     250,   324,   251,   252,   253,   254,   255,   256,   257,   258,
     259,    27,    28,    29,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,   118,   123,   107,   189,   205,    21,   120,   121,    38,
     275,   202,    62,   113,   321,   128,    32,   330,    32,   189,
     153,   331,   333,    51,    32,     2,    33,    20,    41,    42,
     128,    43,    44,    21,    33,   123,   128,   123,    55,     8,
     154,   115,    52,   206,    30,   153,   203,    34,   296,   116,
     102,   232,    48,    16,   204,    53,   112,   104,   213,   129,
     153,   195,   183,    35,   191,    35,   363,   325,   313,    66,
     319,    35,   128,  -125,   129,   327,   195,   274,   320,    48,
     129,   195,   278,   380,   381,    47,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,    59,   126,    60,   182,   215,   216,   217,   188,
     326,    62,   281,   176,   328,    33,   129,   283,   329,   336,
     180,   307,   378,    67,   181,   189,   275,   102,    48,   325,
     195,   153,    66,   298,   196,   212,   126,   327,   126,   391,
     393,   349,   322,   126,   335,   126,   325,   325,   214,   303,
     338,   272,   334,   155,   327,   327,   361,   362,   156,   157,
     291,   106,   153,   153,   260,   309,   153,   195,   342,   114,
     195,   332,   326,   316,   364,    54,   328,   195,   168,   265,
     329,   366,   135,   136,   137,   138,   357,   323,   195,   326,
     326,   270,   379,   328,   328,   169,   124,   329,   329,   305,
     158,   159,    66,   339,   383,   170,   197,   312,   197,   193,
     314,   194,   382,   160,   161,   171,   345,   394,   174,   395,
     350,   184,   351,   185,   139,   353,   140,   355,   356,   124,
     200,   124,   166,   167,   201,   352,   124,   208,   124,   317,
     367,   368,   209,   371,   162,   163,   164,   165,   376,   377,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   172,    -7,   261,   388,   389,   218,   219,   176,   358,
     233,   102,   360,   304,   340,   262,   153,   343,   222,   223,
     224,   225,   263,   372,   268,   374,   375,   234,   235,     1,
       2,   236,   237,   238,   264,     3,     4,   266,     5,   239,
     240,   241,     6,     7,     8,   242,     9,    10,    70,    11,
     267,   243,    12,    13,   220,   221,    14,    15,    16,   244,
      17,    18,    19,   245,    72,    73,    74,    75,   226,   227,
      76,    77,    78,    79,    80,    81,    82,    83,   269,   273,
     348,   276,   277,   234,   235,   282,   284,   236,   237,   238,
     285,   288,   289,   292,   246,   239,   240,   241,   294,   297,
    -192,   242,   301,   306,    70,   311,   310,   243,   271,   308,
      84,   315,   337,   195,   247,   244,   347,   344,   341,   245,
      72,    73,    74,    75,   346,   354,    76,    77,    78,    79,
      80,    81,    82,    83,   359,   234,   235,   365,   369,   236,
     237,   238,   373,   370,   384,   385,   386,   239,   240,   241,
     246,   387,   396,   242,   397,   228,    70,   229,   279,   243,
     280,   230,    68,   199,   192,    61,    84,   244,    65,   300,
     247,   245,    72,    73,    74,    75,   302,   207,    76,    77,
      78,    79,    80,    81,    82,    83,    46,   234,   235,   318,
       0,   236,   237,   238,     0,     0,     0,     0,     0,   239,
     240,   241,   246,     0,     0,   242,     0,     0,    70,     0,
       0,   243,     0,     0,     0,     0,     0,     0,    84,   244,
       0,     0,   390,   245,    72,    73,    74,    75,     0,     0,
      76,    77,    78,    79,    80,    81,    82,    83,     0,     0,
       0,     0,     0,     0,     1,     2,     0,     0,     0,     0,
       3,     4,     0,     5,   246,     0,     0,     6,     7,     8,
       0,     9,    10,     0,    11,     0,     0,    12,    13,     0,
      84,    14,    15,    16,   392,    17,    18,    19,   234,   235,
       0,     0,   236,   237,   238,     0,     0,     0,     0,     0,
     239,   240,   241,     0,     0,     0,   242,     0,     0,    70,
       0,     0,   243,     0,     0,     0,     0,     0,     0,     0,
     244,    54,     0,     0,   245,    72,    73,    74,    75,     0,
       0,    76,    77,    78,    79,    80,    81,    82,    83,  -222,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,   246,     0,     0,    70,   109,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,    84,     0,    71,    72,    73,    74,    75,     0,     0,
      76,    77,    78,   110,    80,    81,    82,    83,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     0,     0,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
      84,     0,     0,   111,    71,    72,    73,    74,    75,     0,
       0,    76,    77,    78,   186,    80,    81,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     0,     0,     0,     0,     3,     4,     0,     5,     0,
       0,     0,     6,     7,     8,     0,     9,    10,     0,    11,
       0,    84,    12,    13,   187,     0,    14,    15,    16,     0,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     0,     0,     0,     0,     3,     4,     0,
       5,     0,     0,     0,     6,     7,     8,     0,     9,    10,
      70,    11,     0,     0,    12,    13,     0,     0,    14,    15,
      16,     0,    17,    18,    19,    71,    72,    73,    74,    75,
       0,   175,    76,    77,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,     0,     1,     2,     0,     0,
       0,     0,     3,     0,     0,     5,   246,     0,     0,     0,
       7,     8,     0,     9,    10,    70,     0,     0,     0,    12,
      13,     0,    84,    14,    15,    16,     0,    17,    18,    19,
      71,    72,    73,    74,    75,     0,     0,    76,    77,    78,
      79,    80,    81,    82,    83,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,    84,    71,    72,
      73,    74,    75,     0,     0,    76,    77,    78,    79,    80,
      81,    82,    83,     0,     0,     1,     2,     0,     0,     0,
       0,     3,     4,     0,     5,     0,     0,     0,     6,     7,
       8,     0,     9,    10,     0,    11,    70,     0,    12,    13,
       0,     0,    14,    15,    16,    84,    17,    18,    19,     0,
       0,    71,    72,    73,    74,    75,     0,     0,    76,    77,
      78,    79,    80,    81,    82,    83,     0,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   299,    71,    72,    73,    74,    75,     0,    70,    76,
      77,    78,    79,    80,    81,    82,    83,     0,    84,     0,
       0,     0,    85,    71,    72,    73,    74,    75,     0,     0,
      76,    77,    78,    79,    80,    81,    82,    83,     0,     0,
      70,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,   271,   290,    71,    72,    73,    74,    75,
       0,     0,    76,    77,    78,    79,    80,    81,    82,    83,
      84,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,    71,    72,    73,
      74,    75,    70,     0,    76,    77,    78,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,    71,    72,    73,
      74,    75,     0,    70,    76,    77,    78,    79,    80,    81,
      82,    83,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,     0,   117,    76,    77,    78,    79,    80,
      81,    82,    83,    45,     0,     0,     0,     0,     0,     1,
       2,     0,     0,     0,   119,     3,     4,     0,     5,     0,
       0,     0,     6,     7,     8,     0,     9,    10,     0,    11,
       0,     0,    12,    13,     0,    84,    14,    15,    16,     0,
      17,    18,    19,     1,     2,     0,     0,     0,     0,     3,
       4,     0,     5,     0,     0,     0,     6,     7,     8,     0,
       9,    10,     0,    11,     0,     0,    12,    13,     0,     0,
      14,    15,    16,     0,    17,    18,    19,     1,     2,     0,
       0,     0,     0,     3,     0,     0,     5,     0,     0,     0,
       0,     7,     8,     0,     9,    10,     0,     0,     0,     0,
      12,    13,     0,     0,    14,    15,    16,     0,    17,    18,
      19
};

static const yytype_int16 yycheck[] =
{
       0,    70,    84,    59,   114,   131,     0,    76,    77,    21,
     203,   129,    40,    60,   305,    45,    40,   310,    40,   129,
      89,   312,   315,    35,    40,     7,    50,    27,    22,    23,
      45,    25,    26,    27,    50,   117,    45,   119,    38,    21,
      89,    84,    71,    73,    40,   114,    84,    71,    71,    92,
      54,   172,    33,    35,    92,    84,    60,    57,   140,    89,
     129,    84,   109,    87,    92,    87,   357,   309,    71,    50,
      84,    87,    45,    91,    89,   309,    84,    92,    92,    60,
      89,    84,    90,   374,   375,    91,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,    87,    84,    89,   109,   155,   156,   157,   113,
     309,    40,   233,   107,   309,    50,    89,   235,   309,    92,
      84,   285,   371,    88,    88,   235,   319,   131,   109,   371,
      84,   200,   113,   254,    88,   139,   117,   371,   119,   388,
     389,   340,   306,   124,   317,   126,   388,   389,   152,   275,
     323,   200,   316,    50,   388,   389,   355,   356,    55,    56,
     242,    40,   231,   232,   176,   286,   235,    84,   332,    73,
      84,    88,   371,   294,    88,    73,   371,    84,    49,   183,
     371,    88,    45,    46,    47,    48,   350,   308,    84,   388,
     389,   195,    88,   388,   389,    65,    84,   388,   389,   281,
      51,    52,   183,   324,   377,    66,   124,   289,   126,   117,
     292,   119,   376,    57,    58,    67,   337,   390,    91,   392,
     341,    90,   343,    90,    87,   346,    89,   348,   349,   117,
      88,   119,    63,    64,    40,   345,   124,    40,   126,   295,
     361,   362,    40,   364,    59,    60,    61,    62,   369,   370,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    68,    69,    88,   385,   386,   158,   159,   262,   351,
      69,   275,   354,   277,   330,    84,   345,   333,   162,   163,
     164,   165,    40,   365,    88,   367,   368,     4,     5,     6,
       7,     8,     9,    10,    90,    12,    13,    90,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      90,    28,    29,    30,   160,   161,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,   166,   167,
      47,    48,    49,    50,    51,    52,    53,    54,    88,    90,
     340,    88,    84,     4,     5,    71,    71,     8,     9,    10,
      70,    40,    87,    87,    71,    16,    17,    18,    70,    92,
      92,    22,    90,    70,    25,    71,    87,    28,    91,    91,
      87,    87,    70,    84,    91,    36,    36,    92,    88,    40,
      41,    42,    43,    44,    92,    87,    47,    48,    49,    50,
      51,    52,    53,    54,    36,     4,     5,    87,    11,     8,
       9,    10,    71,    91,    71,    88,    88,    16,    17,    18,
      71,    92,    92,    22,    92,   168,    25,   169,   231,    28,
     232,   170,    53,   126,   115,    40,    87,    36,    49,   262,
      91,    40,    41,    42,    43,    44,   271,   133,    47,    48,
      49,    50,    51,    52,    53,    54,    27,     4,     5,   298,
      -1,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    71,    -1,    -1,    22,    -1,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    87,    36,
      -1,    -1,    91,    40,    41,    42,    43,    44,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    71,    -1,    -1,    19,    20,    21,
      -1,    23,    24,    -1,    26,    -1,    -1,    29,    30,    -1,
      87,    33,    34,    35,    91,    37,    38,    39,     4,     5,
      -1,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    73,    -1,    -1,    40,    41,    42,    43,    44,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    91,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    71,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    87,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      87,    -1,    -1,    90,    40,    41,    42,    43,    44,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      -1,    87,    29,    30,    90,    -1,    33,    34,    35,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,
      25,    26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    88,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    15,    71,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    -1,    -1,    -1,    29,
      30,    -1,    87,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    87,    40,    41,
      42,    43,    44,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    25,    -1,    29,    30,
      -1,    -1,    33,    34,    35,    87,    37,    38,    39,    -1,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    40,    41,    42,    43,    44,    -1,    25,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    87,    -1,
      -1,    -1,    91,    40,    41,    42,    43,    44,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    91,    71,    40,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      87,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    40,    41,    42,
      43,    44,    25,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    87,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    -1,    25,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    -1,    87,    47,    48,    49,    50,    51,
      52,    53,    54,     0,    -1,    -1,    -1,    -1,    -1,     6,
       7,    -1,    -1,    -1,    87,    12,    13,    -1,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      -1,    -1,    29,    30,    -1,    87,    33,    34,    35,    -1,
      37,    38,    39,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    -1,    -1,    29,    30,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    33,    34,    35,    -1,    37,    38,
      39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    12,    13,    15,    19,    20,    21,    23,
      24,    26,    29,    30,    33,    34,    35,    37,    38,    39,
     123,   124,   127,   128,   131,   135,   136,   164,   165,   166,
      40,   132,    40,    50,    71,    87,   125,   126,   137,   138,
     140,   124,   124,   124,   124,     0,   165,    91,   135,   139,
     141,   137,    71,    84,    73,   123,   124,   167,   168,    87,
      89,   138,    40,   133,   134,   140,   135,    88,   126,   137,
      25,    40,    41,    42,    43,    44,    47,    48,    49,    50,
      51,    52,    53,    54,    87,    91,   101,   102,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   147,   123,   100,    40,   100,   145,    26,
      50,    90,   119,   141,    73,    84,    92,    87,   105,    87,
     105,   105,   119,   121,   128,   129,   135,   146,    45,    89,
     148,   149,   150,   151,   152,    45,    46,    47,    48,    87,
      89,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,   120,   105,   107,    50,    55,    56,    51,    52,
      57,    58,    59,    60,    61,    62,    63,    64,    49,    65,
      66,    67,    68,    99,    91,    88,   124,   142,   143,   144,
      84,    88,   119,   141,    90,    90,    50,    90,   119,   118,
     122,    92,   134,   146,   146,    84,    88,   129,   130,   130,
      88,    40,   122,    84,    92,   147,    73,   152,    40,    40,
     103,   104,   119,   121,   119,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   110,   110,   111,   111,   112,   113,
     114,    94,    94,    69,     4,     5,     8,     9,    10,    16,
      17,    18,    22,    28,    36,    40,    71,    91,   121,   123,
     153,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     137,    88,    84,    40,    90,   119,    90,    90,    88,    88,
     119,    91,   107,    90,    92,   149,    88,    84,    90,   115,
     116,    94,    71,   122,    71,    70,    97,    95,    40,    87,
      71,   121,    87,    96,    70,    98,    71,    92,    94,    72,
     144,    90,   148,   147,   119,   121,    70,   153,    91,    94,
      87,    71,   121,    71,   121,    87,    94,   100,   159,    84,
      92,    99,   153,    94,   154,   155,   160,   161,   162,   163,
      98,    99,    88,    98,   153,   157,    92,    70,   157,    94,
     100,    88,   153,   100,    92,    94,    92,    36,   123,   160,
      94,    94,   118,    94,    87,    94,    94,   153,   121,    36,
     121,   160,   160,    99,    88,    87,    88,    94,    94,    11,
      91,    94,   121,    71,   121,   121,    94,    94,   154,    88,
      99,    99,   153,   157,    71,    88,    88,    92,    94,    94,
      91,   154,    91,   154,   157,   157,    92,    92
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     101,   101,   101,   101,   101,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   104,   104,   105,   105,
     105,   105,   105,   105,   106,   106,   106,   106,   106,   106,
     107,   107,   108,   108,   108,   108,   109,   109,   109,   110,
     110,   110,   111,   111,   111,   111,   111,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   121,   121,   122,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   125,   125,
     126,   126,   127,   127,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   129,   129,   130,
     130,   131,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   135,   135,   136,   137,   137,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   147,   147,   147,   148,   148,   149,
     149,   150,   151,   151,   152,   152,   153,   153,   153,   153,
     153,   153,   154,   154,   154,   154,   154,   155,   155,   155,
     156,   157,   157,   158,   158,   159,   159,   160,   160,   161,
     161,   161,   162,   162,   162,   162,   162,   162,   162,   162,
     163,   163,   163,   163,   163,   164,   164,   165,   165,   166,
     167,   167,   168,   168
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,     0,     0,     0,     1,
       1,     1,     1,     1,     3,     1,     4,     4,     3,     3,
       2,     2,     6,     7,     1,     0,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     4,     1,     4,
       1,     9,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     0,
       1,     5,     6,     2,     0,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     2,     1,     1,     3,     5,     4,
       4,     3,     6,     5,     5,     4,     5,     4,     4,     0,
       1,     2,     3,     1,     2,     1,     3,     1,     3,     2,
       1,     1,     3,     1,     1,     3,     4,     2,     4,     0,
       1,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       5,     0,     1,     1,     3,     1,     1,     2,     1,     8,
      11,     5,    10,    12,    10,    12,    14,    14,    16,    16,
       3,     2,     2,     3,     2,     1,     2,     1,     1,     7,
       1,     2,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 136 "assgn5_19CS30033_19CS30036.y"
    {
        (yyval.instrNum) = nextInstruction();
    }
#line 1894 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 3:
#line 142 "assgn5_19CS30033_19CS30036.y"
    {
        loopName = "FOR";   
    }
#line 1902 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 4:
#line 148 "assgn5_19CS30033_19CS30036.y"
        {
		loopName = "WHILE";
	}
#line 1910 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 5:
#line 154 "assgn5_19CS30033_19CS30036.y"
        {
		loopName = "DO_WHILE";
	}
#line 1918 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 6:
#line 160 "assgn5_19CS30033_19CS30036.y"
    {
        string name = ST->name + "." + loopName + "$" + to_string(tableCount);
        tableCount++;
        symbol* s = ST->lookup(name);
        s->nestedST = new symTable(name);
        s->nestedST->parent = ST;
        s->name = name;
        s->type = new symType("block");
        currS = s;
    }
#line 1933 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 7:
#line 172 "assgn5_19CS30033_19CS30036.y"
    {
        (yyval.stmt) = new statement();
        (yyval.stmt)->nextList = makelist(nextInstruction());
        emit("goto","");
    }
#line 1943 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 8:
#line 179 "assgn5_19CS30033_19CS30036.y"
    {
		parST = ST;                                                               // Used for changing to symbol table for a function
		if(currS->nestedST == NULL) 
		{
			changeTable(new symTable(""));	                                           // Function symbol table doesn't already exist	
		}
		else 
		{
			changeTable(currS->nestedST);						               // Function symbol table already exists	
			emit("label", ST->name);
		}
    }
#line 1960 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 9:
#line 194 "assgn5_19CS30033_19CS30036.y"
        {
	    (yyval.exp)=new expression();                                                  // create new expression and store pointer to ST entry in the location			
	    (yyval.exp)->loc=(yyvsp[0].sym);
	    (yyval.exp)->type="not-boolean";
	}
#line 1970 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 10:
#line 200 "assgn5_19CS30033_19CS30036.y"
        { 
		(yyval.exp) = new expression();	
		string p = to_string((yyvsp[0].intVal));
		(yyval.exp)->loc = gentemp(new symType("int"),p);
		emit("=",(yyval.exp)->loc->name,p);
	}
#line 1981 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 11:
#line 207 "assgn5_19CS30033_19CS30036.y"
        {                                                                         // create new expression and store the value of the constant in a temporary
		(yyval.exp)=new expression();
		string p = to_string((yyvsp[0].floatVal));
		(yyval.exp)->loc=gentemp(new symType("float"),p);
		emit("=",(yyval.exp)->loc->name,p);
	}
#line 1992 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 12:
#line 214 "assgn5_19CS30033_19CS30036.y"
        {                                                                         // create new expression and store the value of the constant in a temporary
		(yyval.exp)=new expression();
		(yyval.exp)->loc=gentemp(new symType("char"),(yyvsp[0].charVal));
		emit("=",(yyval.exp)->loc->name,(yyvsp[0].charVal));
	}
#line 2002 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 13:
#line 220 "assgn5_19CS30033_19CS30036.y"
        {                                                                          // create new expression and store the value of the constant in a temporary
		(yyval.exp)=new expression();
		(yyval.exp)->loc=gentemp(new symType("ptr"),(yyvsp[0].charVal));
		(yyval.exp)->loc->type->ptr=new symType("char");
	}
#line 2012 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 14:
#line 226 "assgn5_19CS30033_19CS30036.y"
        {                                                                          // simply equal to expression
		(yyval.exp)=(yyvsp[-1].exp);
	}
#line 2020 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 15:
#line 231 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.arr) = new Array();	
		(yyval.arr)->Sarr=(yyvsp[0].exp)->loc;	
		(yyval.arr)->type=(yyvsp[0].exp)->loc->type;	
		(yyval.arr)->loc=(yyval.arr)->Sarr;
	}
#line 2031 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 16:
#line 238 "assgn5_19CS30033_19CS30036.y"
        { 	
		
		(yyval.arr) = new Array();
		(yyval.arr)->type = (yyvsp[-3].arr)->type->ptr;               // type=type of element	
		(yyval.arr)->Sarr = (yyvsp[-3].arr)->Sarr;                        // copy the base
		(yyval.arr)->loc = gentemp(new symType("int"));     	// store computed address
		(yyval.arr)->artype = "arr";                         //atype is arr.
		
		if((yyvsp[-3].arr)->artype=="arr") 
		{			                               // if already arr, multiply the size of the sub-type of Array with the expression value and add
			symbol* t = gentemp(new symType("int"));
			int p = typeSize((yyval.arr)->type);
			string str = to_string(p);
			emit("*", t->name, (yyvsp[-1].exp)->loc->name, str);
			emit("+", (yyval.arr)->loc->name, (yyvsp[-3].arr)->loc->name, t->name);
		}
		else 
		{   
			int p = typeSize((yyval.arr)->type);	
			string str = to_string(p);
			emit("*", (yyval.arr)->loc->name, (yyvsp[-1].exp)->loc->name, str);
		}
	}
#line 2059 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 17:
#line 262 "assgn5_19CS30033_19CS30036.y"
        {
		//call the function with number of parameters from argument_expression_list_opt
		(yyval.arr) = new Array();	
		(yyval.arr)->Sarr = gentemp((yyvsp[-3].arr)->type);
		string str = to_string((yyvsp[-1].numParams));
		emit("call",(yyval.arr)->Sarr->name,(yyvsp[-3].arr)->Sarr->name,str);
	}
#line 2071 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 18:
#line 269 "assgn5_19CS30033_19CS30036.y"
                                            {  }
#line 2077 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 19:
#line 270 "assgn5_19CS30033_19CS30036.y"
                                               {  }
#line 2083 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 20:
#line 272 "assgn5_19CS30033_19CS30036.y"
        { 
		(yyval.arr) = new Array();	
		(yyval.arr)->Sarr = gentemp((yyvsp[-1].arr)->Sarr->type);
		emit("=",(yyval.arr)->Sarr->name,(yyvsp[-1].arr)->Sarr->name);
		emit("+",(yyvsp[-1].arr)->Sarr->name,(yyvsp[-1].arr)->Sarr->name,"1");
	}
#line 2094 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 21:
#line 279 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.arr)=new Array();	
		(yyval.arr)->Sarr=gentemp((yyvsp[-1].arr)->Sarr->type);
		emit("=",(yyval.arr)->Sarr->name,(yyvsp[-1].arr)->Sarr->name);
		emit("-",(yyvsp[-1].arr)->Sarr->name,(yyvsp[-1].arr)->Sarr->name,"1");	
	}
#line 2105 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 22:
#line 285 "assgn5_19CS30033_19CS30036.y"
                                                     {  }
#line 2111 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 23:
#line 286 "assgn5_19CS30033_19CS30036.y"
                                                           {  }
#line 2117 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 24:
#line 290 "assgn5_19CS30033_19CS30036.y"
        { 
		(yyval.numParams)=(yyvsp[0].numParams); // Equate $$ and $1
	}
#line 2125 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 25:
#line 294 "assgn5_19CS30033_19CS30036.y"
        { 
		(yyval.numParams)=0; // No arguments
	}
#line 2133 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 26:
#line 300 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.numParams)=1;                                      //one argument and emit param
		emit("param",(yyvsp[0].exp)->loc->name);	
	}
#line 2142 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 27:
#line 305 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.numParams)=(yyvsp[-2].numParams)+1;                                  //one more argument and emit param		 
		emit("param",(yyvsp[0].exp)->loc->name);
	}
#line 2151 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 28:
#line 311 "assgn5_19CS30033_19CS30036.y"
                                     { (yyval.arr)=(yyvsp[0].arr); /*Equate $$ and $1*/}
#line 2157 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 29:
#line 313 "assgn5_19CS30033_19CS30036.y"
        {  	
		//simply add 1
		emit("+",(yyvsp[0].arr)->Sarr->name,(yyvsp[0].arr)->Sarr->name,"1");		
		(yyval.arr)=(yyvsp[0].arr);
	}
#line 2167 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 30:
#line 319 "assgn5_19CS30033_19CS30036.y"
        {
		//simply subtract 1
		emit("-",(yyvsp[0].arr)->Sarr->name,(yyvsp[0].arr)->Sarr->name,"1");
		(yyval.arr)=(yyvsp[0].arr);
	}
#line 2177 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 31:
#line 325 "assgn5_19CS30033_19CS30036.y"
        {   
		(yyval.arr) = new Array();
		switch((yyvsp[-1].unaryOp))
		{	  
			case '&':                                                  //address of something, then generate a pointer temporary and emit the quad
				(yyval.arr)->Sarr=gentemp(new symType("ptr"));
				(yyval.arr)->Sarr->type->ptr=(yyvsp[0].arr)->Sarr->type; 
				emit("=&",(yyval.arr)->Sarr->name,(yyvsp[0].arr)->Sarr->name);
				break;
			case '*':                                                   // value of something, then generate a temporary of the corresponding type and emit the quad	
				(yyval.arr)->artype="ptr";
				(yyval.arr)->loc=gentemp((yyvsp[0].arr)->Sarr->type->ptr);
				(yyval.arr)->Sarr=(yyvsp[0].arr)->Sarr;
				emit("=*",(yyval.arr)->loc->name,(yyvsp[0].arr)->Sarr->name);
				break;
			case '+':  
				(yyval.arr)=(yyvsp[0].arr);
				break;                 //unary plus, do nothing
			case '-':				   //unary minus, generate new temporary of the same base type and make it negative of current one
				(yyval.arr)->Sarr=gentemp(new symType((yyvsp[0].arr)->Sarr->type->type));
				emit("uminus",(yyval.arr)->Sarr->name,(yyvsp[0].arr)->Sarr->name);
				break;
			case '~':                   //bitwise not, generate new temporary of the same base type and make it negative of current one
				(yyval.arr)->Sarr=gentemp(new symType((yyvsp[0].arr)->Sarr->type->type));
				emit("~",(yyval.arr)->Sarr->name,(yyvsp[0].arr)->Sarr->name);
				break;
			case '!':				//logical not, generate new temporary of the same base type and make it negative of current one
				(yyval.arr)->Sarr=gentemp(new symType((yyvsp[0].arr)->Sarr->type->type));
				emit("!",(yyval.arr)->Sarr->name,(yyvsp[0].arr)->Sarr->name);
				break;
		}
	}
#line 2214 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 32:
#line 357 "assgn5_19CS30033_19CS30036.y"
                                   {  }
#line 2220 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 33:
#line 358 "assgn5_19CS30033_19CS30036.y"
                                     {  }
#line 2226 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 34:
#line 362 "assgn5_19CS30033_19CS30036.y"
        { (yyval.unaryOp)='&'; }
#line 2232 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 35:
#line 364 "assgn5_19CS30033_19CS30036.y"
        {(yyval.unaryOp)='*'; }
#line 2238 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 36:
#line 366 "assgn5_19CS30033_19CS30036.y"
        { (yyval.unaryOp)='+'; }
#line 2244 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 37:
#line 368 "assgn5_19CS30033_19CS30036.y"
        { (yyval.unaryOp)='-'; }
#line 2250 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 38:
#line 370 "assgn5_19CS30033_19CS30036.y"
        { (yyval.unaryOp)='~'; }
#line 2256 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 39:
#line 372 "assgn5_19CS30033_19CS30036.y"
        {(yyval.unaryOp)='!'; }
#line 2262 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 40:
#line 375 "assgn5_19CS30033_19CS30036.y"
                                   { (yyval.arr)=(yyvsp[0].arr); }
#line 2268 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 41:
#line 377 "assgn5_19CS30033_19CS30036.y"
        { 
		(yyval.arr)=new Array();	
		(yyval.arr)->Sarr=convert((yyvsp[0].arr)->Sarr,varType);             //generate a new symbol of the given type	
	}
#line 2277 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 42:
#line 384 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.exp) = new expression();             //generate new expression							    
		if((yyvsp[0].arr)->artype=="arr") 			   //if it is of type arr
		{
			(yyval.exp)->loc = gentemp((yyvsp[0].arr)->loc->type);	
			emit("=[]", (yyval.exp)->loc->name, (yyvsp[0].arr)->Sarr->name, (yyvsp[0].arr)->loc->name);     //emit with Array right
		}
		else if((yyvsp[0].arr)->artype=="ptr")         //if it is of type ptr
		{ 
			(yyval.exp)->loc = (yyvsp[0].arr)->loc;        	   //equate the locs
		}
		else
		{
			(yyval.exp)->loc = (yyvsp[0].arr)->Sarr;
		}
	}
#line 2298 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 43:
#line 401 "assgn5_19CS30033_19CS30036.y"
        { 
		//if we have multiplication
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].arr)->Sarr))         
			cout<<"Type Error in Program"<< endl;	// error
		else 								 		//if types are compatible, generate new temporary and equate to the product
		{
			(yyval.exp) = new expression();	
			(yyval.exp)->loc = gentemp(new symType((yyvsp[-2].exp)->loc->type->type));
			emit("*", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].arr)->Sarr->name);
		}
	}
#line 2314 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 44:
#line 413 "assgn5_19CS30033_19CS30036.y"
        {
		//if we have division
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].arr)->Sarr)){ 
			cout << "Type Error in Program"<< endl;
		}
		else   
		{
			//if types are compatible, generate new temporary and equate to the quotient
			(yyval.exp) = new expression();
			(yyval.exp)->loc = gentemp(new symType((yyvsp[-2].exp)->loc->type->type));
			emit("/", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].arr)->Sarr->name);
		}
	}
#line 2332 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 45:
#line 427 "assgn5_19CS30033_19CS30036.y"
        {
		
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].arr)->Sarr)) cout << "Type Error in Program"<< endl;		
		else 		 
		{
			//if types are compatible, generate new temporary and equate to the quotient
			(yyval.exp) = new expression();
			(yyval.exp)->loc = gentemp(new symType((yyvsp[-2].exp)->loc->type->type));
			emit("%", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].arr)->Sarr->name);	
		}
	}
#line 2348 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 46:
#line 440 "assgn5_19CS30033_19CS30036.y"
                                                 { (yyval.exp)=(yyvsp[0].exp); }
#line 2354 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 47:
#line 442 "assgn5_19CS30033_19CS30036.y"
        {
		
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))
			cout << "Type Error in Program"<< endl;
		else    	//if types are compatible, generate new temporary and equate to the sum
		{
			(yyval.exp) = new expression();	
			(yyval.exp)->loc = gentemp(new symType((yyvsp[-2].exp)->loc->type->type));
			emit("+", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
		}
	}
#line 2370 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 48:
#line 454 "assgn5_19CS30033_19CS30036.y"
        {
		
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))
			cout << "Type Error in Program"<< endl;		
		else        //if types are compatible, generate new temporary and equate to the difference
		{	
			(yyval.exp) = new expression();	
			(yyval.exp)->loc = gentemp(new symType((yyvsp[-2].exp)->loc->type->type));
			emit("-", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
		}
	}
#line 2386 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 49:
#line 467 "assgn5_19CS30033_19CS30036.y"
                                        { (yyval.exp)=(yyvsp[0].exp); }
#line 2392 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 50:
#line 469 "assgn5_19CS30033_19CS30036.y"
        { 
		if(!((yyvsp[0].exp)->loc->type->type == "int"))
			cout << "Type Error in Program"<< endl; 		
		else            //if base type is int, generate new temporary and equate to the shifted value
		{		
			(yyval.exp) = new expression();		
			(yyval.exp)->loc = gentemp(new symType("int"));
			emit("<<", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);		
		}
	}
#line 2407 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 51:
#line 480 "assgn5_19CS30033_19CS30036.y"
        { 	
		if(!((yyvsp[0].exp)->loc->type->type == "int"))
		{
			cout << "Type Error in Program"<< endl; 		
		}
		else  		//if base type is int, generate new temporary and equate to the shifted value
		{			
			(yyval.exp) = new expression();	
			(yyval.exp)->loc = gentemp(new symType("int"));
			emit(">>", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);			
		}
	}
#line 2424 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 52:
#line 494 "assgn5_19CS30033_19CS30036.y"
                                          { (yyval.exp)=(yyvsp[0].exp); }
#line 2430 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 53:
#line 496 "assgn5_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc)) 
		{
			yyerror("Type Error in Program");
		}
		else 
		{      //check compatible types									
			(yyval.exp) = new expression();
			(yyval.exp)->type = "bool";                         //new type is boolean
			(yyval.exp)->trueList = makelist(nextInstruction());     //makelist for trueList and falseList
			(yyval.exp)->falseList = makelist(nextInstruction()+1);
			emit("<", "", (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);     //emit statement if a<b goto .. 
			emit("goto", "");	//emit statement goto ..
		}
	}
#line 2450 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 54:
#line 512 "assgn5_19CS30033_19CS30036.y"
        {
		// similar to above, check compatible types,make new lists and emit
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc)) 
		{
			yyerror("Type Error in Program");
		}
		else 
		{	
			(yyval.exp) = new expression();		
			(yyval.exp)->type = "bool";
			(yyval.exp)->trueList = makelist(nextInstruction());
			(yyval.exp)->falseList = makelist(nextInstruction()+1);
			emit(">", "", (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
			emit("goto", "");
		}	
	}
#line 2471 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 55:
#line 529 "assgn5_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc)) 
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{			
			(yyval.exp) = new expression();		
			(yyval.exp)->type = "bool";
			(yyval.exp)->trueList = makelist(nextInstruction());
			(yyval.exp)->falseList = makelist(nextInstruction()+1);
			emit("<=", "", (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
			emit("goto", "");
		}		
	}
#line 2491 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 56:
#line 545 "assgn5_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{	
			(yyval.exp) = new expression();	
			(yyval.exp)->type = "bool";
			(yyval.exp)->trueList = makelist(nextInstruction());
			(yyval.exp)->falseList = makelist(nextInstruction()+1);
			emit(">=", "", (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
			emit("goto", "");
		}
	}
#line 2511 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 57:
#line 562 "assgn5_19CS30033_19CS30036.y"
                                            { (yyval.exp)=(yyvsp[0].exp); }
#line 2517 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 58:
#line 564 "assgn5_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))                //check compatible types
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			convertBool2Int((yyvsp[-2].exp));                  //convert bool to int		
			convertBool2Int((yyvsp[0].exp));
			(yyval.exp) = new expression();
			(yyval.exp)->type = "bool";
			(yyval.exp)->trueList = makelist(nextInstruction());            //make lists for new expression
			(yyval.exp)->falseList = makelist(nextInstruction()+1); 
			emit("==", "", (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);      //emit if a==b goto ..
			emit("goto", "");				//emit goto ..
		}
	}
#line 2539 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 59:
#line 582 "assgn5_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc)) 
		{
			
			cout << "Type Error in Program"<< endl;
		}
		else 
		{			
			convertBool2Int((yyvsp[-2].exp));
			convertBool2Int((yyvsp[0].exp));
			(yyval.exp) = new expression();                 //result is boolean
			(yyval.exp)->type = "bool";
			(yyval.exp)->trueList = makelist(nextInstruction());
			(yyval.exp)->falseList = makelist(nextInstruction()+1);
			emit("!=", "", (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
			emit("goto", "");
		}
	}
#line 2562 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 60:
#line 602 "assgn5_19CS30033_19CS30036.y"
                                     { (yyval.exp)=(yyvsp[0].exp); }
#line 2568 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 61:
#line 604 "assgn5_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))         //check compatible types 
		{		
			cout << "Type Error in Program"<< endl;
		}
		else 
		{              
			convertBool2Int((yyvsp[-2].exp));                             //convert bool to int	
			convertBool2Int((yyvsp[0].exp));			
			(yyval.exp) = new expression();
			(yyval.exp)->type = "not-boolean";                   //result is not boolean
			(yyval.exp)->loc = gentemp(new symType("int"));
			emit("&", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);               //emit the quad
		}
	}
#line 2588 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 62:
#line 621 "assgn5_19CS30033_19CS30036.y"
                                         { (yyval.exp)=(yyvsp[0].exp); }
#line 2594 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 63:
#line 623 "assgn5_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))    //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			convertBool2Int((yyvsp[-2].exp));
			convertBool2Int((yyvsp[0].exp));
			(yyval.exp) = new expression();
			(yyval.exp)->type = "not-boolean";
			(yyval.exp)->loc = gentemp(new symType("int"));
			emit("^", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
		}
	}
#line 2614 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 64:
#line 640 "assgn5_19CS30033_19CS30036.y"
                                                 { (yyval.exp)=(yyvsp[0].exp); }
#line 2620 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 65:
#line 642 "assgn5_19CS30033_19CS30036.y"
        { 
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))   //same as and_expression: check compatible types, make non-boolean expression and convert bool to int and emit
		{ yyerror("Type Error in Program"); }
		else 
		{
			convertBool2Int((yyvsp[-2].exp));		
			convertBool2Int((yyvsp[0].exp));
			(yyval.exp) = new expression();
			(yyval.exp)->type = "not-boolean";
			(yyval.exp)->loc = gentemp(new symType("int"));
			emit("|", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
		} 
	}
#line 2638 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 66:
#line 657 "assgn5_19CS30033_19CS30036.y"
                                                 { (yyval.exp)=(yyvsp[0].exp); }
#line 2644 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 67:
#line 659 "assgn5_19CS30033_19CS30036.y"
        { 
		convertInt2Bool((yyvsp[0].exp));                                  //convert inclusive_or_expression int to bool	
		convertInt2Bool((yyvsp[-3].exp));                                  //convert logical_and_expression to bool
		(yyval.exp) = new expression();                                 //make new boolean expression 
		(yyval.exp)->type = "bool";
		backpatch((yyvsp[-3].exp)->trueList, (yyvsp[-1].instrNum));                           //if $1 is true, we move to $5
		(yyval.exp)->trueList = (yyvsp[0].exp)->trueList;                           //if $5 is also true, we get trueList for $$
		(yyval.exp)->falseList = merge((yyvsp[-3].exp)->falseList, (yyvsp[0].exp)->falseList);   //merge their falseLists
	}
#line 2658 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 68:
#line 670 "assgn5_19CS30033_19CS30036.y"
                                                { (yyval.exp)=(yyvsp[0].exp); }
#line 2664 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 69:
#line 672 "assgn5_19CS30033_19CS30036.y"
        { 
		convertInt2Bool((yyvsp[0].exp));			 //convert logical_and_expression int to bool	
		convertInt2Bool((yyvsp[-3].exp));			 //convert logical_or_expression to bool
		(yyval.exp) = new expression();			 //make new boolean expression
		(yyval.exp)->type = "bool";
		backpatch((yyvsp[-3].exp)->falseList, (yyvsp[-1].instrNum));		//if $1 is true, we move to $5
		(yyval.exp)->trueList = merge((yyvsp[-3].exp)->trueList, (yyvsp[0].exp)->trueList);		//merge their trueLists
		(yyval.exp)->falseList = (yyvsp[0].exp)->falseList;		 	//if $5 is also false, we get falseList for $$
	}
#line 2678 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 70:
#line 683 "assgn5_19CS30033_19CS30036.y"
                                              {(yyval.exp)=(yyvsp[0].exp);}
#line 2684 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 71:
#line 685 "assgn5_19CS30033_19CS30036.y"
        {
		//normal conversion method to get conditional expressions
		(yyval.exp)->loc = gentemp((yyvsp[-4].exp)->loc->type);       //generate temporary for expression
		(yyval.exp)->loc->update((yyvsp[-4].exp)->loc->type);
		emit("=", (yyval.exp)->loc->name, (yyvsp[0].exp)->loc->name);      //make it equal to sconditional_expression
		list<int> l = makelist(nextInstruction());        //makelist next instruction
		emit("goto", "");              //prevent fallthrough
		backpatch((yyvsp[-3].stmt)->nextList, nextInstruction());        //after N, go to next instruction
		emit("=", (yyval.exp)->loc->name, (yyvsp[-4].exp)->loc->name);
		list<int> m = makelist(nextInstruction());         //makelist next instruction
		l = merge(l, m);						//merge the two lists
		emit("goto", "");						//prevent fallthrough
		backpatch((yyvsp[-7].stmt)->nextList, nextInstruction());   //backpatching
		convertInt2Bool((yyvsp[-8].exp));                   //convert expression to boolean
		backpatch((yyvsp[-8].exp)->trueList, (yyvsp[-5].instrNum));           //$1 true goes to expression
		backpatch((yyvsp[-8].exp)->falseList, (yyvsp[-1].instrNum));          //$1 false goes to conditional_expression
		backpatch(l, nextInstruction());
	}
#line 2707 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 72:
#line 705 "assgn5_19CS30033_19CS30036.y"
                                              {(yyval.exp)=(yyvsp[0].exp);}
#line 2713 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 73:
#line 707 "assgn5_19CS30033_19CS30036.y"
         {
		if((yyvsp[-2].arr)->artype=="arr")          // if type is arr, simply check if we need to convert and emit
		{
			(yyvsp[0].exp)->loc = convert((yyvsp[0].exp)->loc, (yyvsp[-2].arr)->type->type);
			emit("[]=", (yyvsp[-2].arr)->Sarr->name, (yyvsp[-2].arr)->loc->name, (yyvsp[0].exp)->loc->name);		
		}
		else if((yyvsp[-2].arr)->artype=="ptr")     // if type is ptr, simply emit
		{
			emit("*=", (yyvsp[-2].arr)->Sarr->name, (yyvsp[0].exp)->loc->name);	
		}
		else                              //otherwise assignment
		{
			(yyvsp[0].exp)->loc = convert((yyvsp[0].exp)->loc, (yyvsp[-2].arr)->Sarr->type->type);
			emit("=", (yyvsp[-2].arr)->Sarr->name, (yyvsp[0].exp)->loc->name);
		}
		
		(yyval.exp) = (yyvsp[0].exp);
	}
#line 2736 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 74:
#line 728 "assgn5_19CS30033_19CS30036.y"
                              {  }
#line 2742 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 75:
#line 729 "assgn5_19CS30033_19CS30036.y"
                           {  }
#line 2748 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 76:
#line 730 "assgn5_19CS30033_19CS30036.y"
                         {  }
#line 2754 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 77:
#line 731 "assgn5_19CS30033_19CS30036.y"
                         {  }
#line 2760 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 78:
#line 732 "assgn5_19CS30033_19CS30036.y"
                       {  }
#line 2766 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 79:
#line 733 "assgn5_19CS30033_19CS30036.y"
                        {  }
#line 2772 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 80:
#line 734 "assgn5_19CS30033_19CS30036.y"
                            {  }
#line 2778 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 81:
#line 735 "assgn5_19CS30033_19CS30036.y"
                             {  }
#line 2784 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 82:
#line 736 "assgn5_19CS30033_19CS30036.y"
                      {  }
#line 2790 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 83:
#line 737 "assgn5_19CS30033_19CS30036.y"
                      {  }
#line 2796 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 84:
#line 738 "assgn5_19CS30033_19CS30036.y"
                     { }
#line 2802 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 85:
#line 741 "assgn5_19CS30033_19CS30036.y"
                                  {  (yyval.exp)=(yyvsp[0].exp);  }
#line 2808 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 86:
#line 742 "assgn5_19CS30033_19CS30036.y"
                                                 {   }
#line 2814 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 87:
#line 745 "assgn5_19CS30033_19CS30036.y"
                                            {   }
#line 2820 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 88:
#line 748 "assgn5_19CS30033_19CS30036.y"
                                                                   {	}
#line 2826 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 89:
#line 749 "assgn5_19CS30033_19CS30036.y"
                                           {  	}
#line 2832 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 90:
#line 752 "assgn5_19CS30033_19CS30036.y"
                                                                       {	}
#line 2838 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 91:
#line 753 "assgn5_19CS30033_19CS30036.y"
                                  {	}
#line 2844 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 92:
#line 754 "assgn5_19CS30033_19CS30036.y"
                                                {	}
#line 2850 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 93:
#line 755 "assgn5_19CS30033_19CS30036.y"
                         {	}
#line 2856 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 94:
#line 756 "assgn5_19CS30033_19CS30036.y"
                                                {	}
#line 2862 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 95:
#line 757 "assgn5_19CS30033_19CS30036.y"
                         {	}
#line 2868 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 96:
#line 758 "assgn5_19CS30033_19CS30036.y"
                                                    {	}
#line 2874 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 97:
#line 759 "assgn5_19CS30033_19CS30036.y"
                             {	}
#line 2880 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 98:
#line 762 "assgn5_19CS30033_19CS30036.y"
                                      {	}
#line 2886 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 99:
#line 763 "assgn5_19CS30033_19CS30036.y"
                                                     {	}
#line 2892 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 100:
#line 766 "assgn5_19CS30033_19CS30036.y"
                            {(yyval.sym)=(yyvsp[0].sym);}
#line 2898 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 101:
#line 768 "assgn5_19CS30033_19CS30036.y"
        {
		if((yyvsp[0].sym)->val!="") (yyvsp[-2].sym)->val=(yyvsp[0].sym)->val;        //get the initial value and  emit it
		emit("=", (yyvsp[-2].sym)->name, (yyvsp[0].sym)->name);	
	}
#line 2907 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 102:
#line 774 "assgn5_19CS30033_19CS30036.y"
                                 { }
#line 2913 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 103:
#line 775 "assgn5_19CS30033_19CS30036.y"
                  { }
#line 2919 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 104:
#line 778 "assgn5_19CS30033_19CS30036.y"
                       { varType="void"; }
#line 2925 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 105:
#line 779 "assgn5_19CS30033_19CS30036.y"
                 { varType="char"; }
#line 2931 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 106:
#line 780 "assgn5_19CS30033_19CS30036.y"
                 { }
#line 2937 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 107:
#line 781 "assgn5_19CS30033_19CS30036.y"
                { varType="int"; }
#line 2943 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 108:
#line 782 "assgn5_19CS30033_19CS30036.y"
                 {  }
#line 2949 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 109:
#line 783 "assgn5_19CS30033_19CS30036.y"
                  { varType="float"; }
#line 2955 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 110:
#line 784 "assgn5_19CS30033_19CS30036.y"
                   { }
#line 2961 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 111:
#line 785 "assgn5_19CS30033_19CS30036.y"
                   {  }
#line 2967 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 112:
#line 786 "assgn5_19CS30033_19CS30036.y"
                     { }
#line 2973 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 113:
#line 787 "assgn5_19CS30033_19CS30036.y"
                 {  }
#line 2979 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 114:
#line 788 "assgn5_19CS30033_19CS30036.y"
                    {  }
#line 2985 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 115:
#line 789 "assgn5_19CS30033_19CS30036.y"
                      {  }
#line 2991 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 116:
#line 790 "assgn5_19CS30033_19CS30036.y"
                           {  }
#line 2997 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 117:
#line 793 "assgn5_19CS30033_19CS30036.y"
                                                                        {  }
#line 3003 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 118:
#line 794 "assgn5_19CS30033_19CS30036.y"
                                                       {  }
#line 3009 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 119:
#line 797 "assgn5_19CS30033_19CS30036.y"
                                          {  }
#line 3015 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 120:
#line 798 "assgn5_19CS30033_19CS30036.y"
                                    {  }
#line 3021 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 121:
#line 801 "assgn5_19CS30033_19CS30036.y"
                                                              {  }
#line 3027 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 122:
#line 802 "assgn5_19CS30033_19CS30036.y"
                                                              {  }
#line 3033 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 123:
#line 803 "assgn5_19CS30033_19CS30036.y"
                          {  }
#line 3039 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 124:
#line 806 "assgn5_19CS30033_19CS30036.y"
                             {  }
#line 3045 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 125:
#line 807 "assgn5_19CS30033_19CS30036.y"
                       {  }
#line 3051 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 126:
#line 810 "assgn5_19CS30033_19CS30036.y"
                              {  }
#line 3057 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 127:
#line 811 "assgn5_19CS30033_19CS30036.y"
                                             {  }
#line 3063 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 128:
#line 814 "assgn5_19CS30033_19CS30036.y"
                         {  }
#line 3069 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 129:
#line 815 "assgn5_19CS30033_19CS30036.y"
                                                  {  }
#line 3075 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 130:
#line 818 "assgn5_19CS30033_19CS30036.y"
                        {  }
#line 3081 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 131:
#line 819 "assgn5_19CS30033_19CS30036.y"
                     {  }
#line 3087 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 132:
#line 820 "assgn5_19CS30033_19CS30036.y"
                     {  }
#line 3093 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 133:
#line 823 "assgn5_19CS30033_19CS30036.y"
                             {  }
#line 3099 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 134:
#line 827 "assgn5_19CS30033_19CS30036.y"
        {
		symType *t = (yyvsp[-1].stype);
		while(t->ptr!=NULL) t = t->ptr;           //for multidimensional arr1s, move in depth till you get the base type
		t->ptr = (yyvsp[0].sym)->type;                //add the base type 
		(yyval.sym) = (yyvsp[0].sym)->update((yyvsp[-1].stype));                  //update
	}
#line 3110 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 135:
#line 833 "assgn5_19CS30033_19CS30036.y"
                            {   }
#line 3116 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 136:
#line 837 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.sym) = (yyvsp[0].sym)->update(new symType(varType));
		currS = (yyval.sym);	
	}
#line 3125 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 137:
#line 841 "assgn5_19CS30033_19CS30036.y"
                             {(yyval.sym)=(yyvsp[-1].sym);}
#line 3131 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 138:
#line 842 "assgn5_19CS30033_19CS30036.y"
                                                                             {	}
#line 3137 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 139:
#line 843 "assgn5_19CS30033_19CS30036.y"
                                                       {	}
#line 3143 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 140:
#line 845 "assgn5_19CS30033_19CS30036.y"
        {
		symType *t = (yyvsp[-3].sym) -> type;
		symType *prev = NULL;
		while(t->type == "arr") 
		{
			prev = t;	
			t = t->ptr;      //keep moving recursively to get basetype
		}
		if(prev==NULL) 
		{
			int temp = atoi((yyvsp[-1].exp)->loc->val.c_str());      //get initial value
			symType* s = new symType("arr", (yyvsp[-3].sym)->type, temp);        //create new symbol with that initial value
			(yyval.sym) = (yyvsp[-3].sym)->update(s);   //update the symbol table
		}
		else 
		{
			prev->ptr =  new symType("arr", t, atoi((yyvsp[-1].exp)->loc->val.c_str()));     //similar arguments as above		
			(yyval.sym) = (yyvsp[-3].sym)->update((yyvsp[-3].sym)->type);
		}
	}
#line 3168 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 141:
#line 866 "assgn5_19CS30033_19CS30036.y"
        {
		symType *t = (yyvsp[-2].sym) -> type;
		symType *prev = NULL;
		while(t->type == "arr") 
		{
			prev = t;	
			t = t->ptr;         //keep moving recursively to base type
		}
		if(prev==NULL) 
		{
			symType* s = new symType("arr", (yyvsp[-2].sym)->type, 0);    //no initial values, simply keep 0
			(yyval.sym) = (yyvsp[-2].sym)->update(s);
		}
		else 
		{
			prev->ptr =  new symType("arr", t, 0);
			(yyval.sym) = (yyvsp[-2].sym)->update((yyvsp[-2].sym)->type);
		}
	}
#line 3192 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 142:
#line 885 "assgn5_19CS30033_19CS30036.y"
                                                                                    {	}
#line 3198 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 143:
#line 886 "assgn5_19CS30033_19CS30036.y"
                                                                {	}
#line 3204 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 144:
#line 887 "assgn5_19CS30033_19CS30036.y"
                                                            {	}
#line 3210 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 145:
#line 888 "assgn5_19CS30033_19CS30036.y"
                                        {	}
#line 3216 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 146:
#line 890 "assgn5_19CS30033_19CS30036.y"
        {
		ST->name = (yyvsp[-4].sym)->name;	
		if((yyvsp[-4].sym)->type->type !="void") 
		{
			symbol *s = ST->lookup("return");         //lookup for return value	
			s->update((yyvsp[-4].sym)->type);		
		}
		(yyvsp[-4].sym)->nestedST=ST;       
		ST->parent = globalST;
		changeTable(globalST);				// Come back to globalsymbol table
		currS = (yyval.sym);
	}
#line 3233 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 147:
#line 902 "assgn5_19CS30033_19CS30036.y"
                                                    {	}
#line 3239 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 148:
#line 904 "assgn5_19CS30033_19CS30036.y"
        {        //similar as above
		ST->name = (yyvsp[-3].sym)->name;
		if((yyvsp[-3].sym)->type->type !="void") 
		{
			symbol *s = ST->lookup("return");
			s->update((yyvsp[-3].sym)->type);
		}
		(yyvsp[-3].sym)->nestedST=ST;
		ST->parent = globalST;
		changeTable(globalST);				// Come back to globalsymbol table
		currS = (yyval.sym);
	}
#line 3256 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 149:
#line 918 "assgn5_19CS30033_19CS30036.y"
                                       {  }
#line 3262 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 150:
#line 919 "assgn5_19CS30033_19CS30036.y"
                                   {  }
#line 3268 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 151:
#line 923 "assgn5_19CS30033_19CS30036.y"
        { 
		(yyval.stype) = new symType("ptr");   //create new pointer
	}
#line 3276 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 152:
#line 927 "assgn5_19CS30033_19CS30036.y"
        { 
		(yyval.stype) = new symType("ptr",(yyvsp[0].stype));
	}
#line 3284 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 153:
#line 932 "assgn5_19CS30033_19CS30036.y"
                                      {  }
#line 3290 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 154:
#line 933 "assgn5_19CS30033_19CS30036.y"
                                               {  }
#line 3296 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 155:
#line 936 "assgn5_19CS30033_19CS30036.y"
                                      {  }
#line 3302 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 156:
#line 937 "assgn5_19CS30033_19CS30036.y"
                                          {  }
#line 3308 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 157:
#line 940 "assgn5_19CS30033_19CS30036.y"
                                        {  }
#line 3314 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 158:
#line 941 "assgn5_19CS30033_19CS30036.y"
                                                        {  }
#line 3320 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 159:
#line 944 "assgn5_19CS30033_19CS30036.y"
                                                           {  }
#line 3326 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 160:
#line 945 "assgn5_19CS30033_19CS30036.y"
                                    {  }
#line 3332 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 161:
#line 948 "assgn5_19CS30033_19CS30036.y"
                                {  }
#line 3338 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 162:
#line 949 "assgn5_19CS30033_19CS30036.y"
                                             {  }
#line 3344 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 163:
#line 952 "assgn5_19CS30033_19CS30036.y"
                                      {  }
#line 3350 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 164:
#line 955 "assgn5_19CS30033_19CS30036.y"
                                     { (yyval.sym)=(yyvsp[0].exp)->loc; }
#line 3356 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 165:
#line 956 "assgn5_19CS30033_19CS30036.y"
                                    {  }
#line 3362 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 166:
#line 957 "assgn5_19CS30033_19CS30036.y"
                                          {  }
#line 3368 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 167:
#line 960 "assgn5_19CS30033_19CS30036.y"
                                               {  }
#line 3374 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 168:
#line 961 "assgn5_19CS30033_19CS30036.y"
                                                               {  }
#line 3380 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 169:
#line 964 "assgn5_19CS30033_19CS30036.y"
                               {  }
#line 3386 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 170:
#line 965 "assgn5_19CS30033_19CS30036.y"
                        {  }
#line 3392 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 171:
#line 968 "assgn5_19CS30033_19CS30036.y"
                                      {  }
#line 3398 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 172:
#line 971 "assgn5_19CS30033_19CS30036.y"
                               {  }
#line 3404 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 173:
#line 972 "assgn5_19CS30033_19CS30036.y"
                                       {  }
#line 3410 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 174:
#line 975 "assgn5_19CS30033_19CS30036.y"
                                         {  }
#line 3416 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 175:
#line 976 "assgn5_19CS30033_19CS30036.y"
                         {  }
#line 3422 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 176:
#line 981 "assgn5_19CS30033_19CS30036.y"
                                 {  }
#line 3428 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 177:
#line 982 "assgn5_19CS30033_19CS30036.y"
                                     { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3434 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 178:
#line 984 "assgn5_19CS30033_19CS30036.y"
                { 
		        (yyval.stmt)=new statement();             
		        (yyval.stmt)->nextList=(yyvsp[0].exp)->nextList; 
	        }
#line 3443 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 179:
#line 988 "assgn5_19CS30033_19CS30036.y"
                                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3449 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 180:
#line 989 "assgn5_19CS30033_19CS30036.y"
                                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3455 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 181:
#line 990 "assgn5_19CS30033_19CS30036.y"
                                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3461 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 182:
#line 993 "assgn5_19CS30033_19CS30036.y"
                                      {  }
#line 3467 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 183:
#line 995 "assgn5_19CS30033_19CS30036.y"
                    { 
                    (yyval.stmt)=new statement();              
                    (yyval.stmt)->nextList=(yyvsp[0].exp)->nextList; 
                }
#line 3476 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 184:
#line 999 "assgn5_19CS30033_19CS30036.y"
                                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3482 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 185:
#line 1000 "assgn5_19CS30033_19CS30036.y"
                                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3488 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 186:
#line 1001 "assgn5_19CS30033_19CS30036.y"
                                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3494 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 187:
#line 1005 "assgn5_19CS30033_19CS30036.y"
                    {  
                        (yyval.stmt) = (yyvsp[0].stmt);
                        label *s = findLabel((yyvsp[-3].sym)->name);
                        if(s!=nullptr){
                            s->addr = (yyvsp[-1].instrNum);
                            backpatch(s->nextList,s->addr);
                        }else{
                            s = new label((yyvsp[-3].sym)->name);
                            s->addr = nextInstruction();
                            s->nextList = makelist((yyvsp[-1].instrNum));
                            labelList.push_back(*s);
                        }
                    }
#line 3512 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 188:
#line 1018 "assgn5_19CS30033_19CS30036.y"
                                                                 {  }
#line 3518 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 189:
#line 1019 "assgn5_19CS30033_19CS30036.y"
                                                {  }
#line 3524 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 190:
#line 1023 "assgn5_19CS30033_19CS30036.y"
        { 
		(yyval.stmt)=(yyvsp[-1].stmt);
		changeTable(ST->parent); 
	}
#line 3533 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 191:
#line 1029 "assgn5_19CS30033_19CS30036.y"
                                  { (yyval.stmt)=new statement(); }
#line 3539 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 192:
#line 1030 "assgn5_19CS30033_19CS30036.y"
                            { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3545 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 193:
#line 1033 "assgn5_19CS30033_19CS30036.y"
                              { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3551 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 194:
#line 1035 "assgn5_19CS30033_19CS30036.y"
        { 
		(yyval.stmt)=(yyvsp[0].stmt);
		backpatch((yyvsp[-2].stmt)->nextList,(yyvsp[-1].instrNum));     //after $1, move to block_item via $2
	}
#line 3560 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 195:
#line 1041 "assgn5_19CS30033_19CS30036.y"
                          { (yyval.stmt)=new statement(); }
#line 3566 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 196:
#line 1042 "assgn5_19CS30033_19CS30036.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3572 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 197:
#line 1045 "assgn5_19CS30033_19CS30036.y"
                                           {(yyval.exp)=(yyvsp[-1].exp);}
#line 3578 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 198:
#line 1046 "assgn5_19CS30033_19CS30036.y"
                    {(yyval.exp) = new expression();}
#line 3584 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 199:
#line 1050 "assgn5_19CS30033_19CS30036.y"
        {
		backpatch((yyvsp[-4].stmt)->nextList, nextInstruction());        //nextList of N goes to nextInstruction
		convertInt2Bool((yyvsp[-5].exp));         //convert expression to bool
		(yyval.stmt) = new statement();        //make new statement
		backpatch((yyvsp[-5].exp)->trueList, (yyvsp[-2].instrNum));        //is expression is true, go to M i.e just before statement body
		list<int> temp = merge((yyvsp[-5].exp)->falseList, (yyvsp[-1].stmt)->nextList);   //merge falseList of expression, nextList of statement and second N
		(yyval.stmt)->nextList = merge((yyvsp[0].stmt)->nextList, temp);
	}
#line 3597 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 200:
#line 1059 "assgn5_19CS30033_19CS30036.y"
        {
		backpatch((yyvsp[-7].stmt)->nextList, nextInstruction());		//nextList of N goes to nextInstruction
		convertInt2Bool((yyvsp[-8].exp));        //convert expression to bool
		(yyval.stmt) = new statement();       //make new statement
		backpatch((yyvsp[-8].exp)->trueList, (yyvsp[-5].instrNum));    //when expression is true, go to M1 else go to M2
		backpatch((yyvsp[-8].exp)->falseList, (yyvsp[-1].instrNum));
		list<int> temp = merge((yyvsp[-4].stmt)->nextList, (yyvsp[-3].stmt)->nextList);       //merge the nextLists of the statements and second N
		(yyval.stmt)->nextList = merge((yyvsp[0].stmt)->nextList,temp);	
	}
#line 3611 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 201:
#line 1068 "assgn5_19CS30033_19CS30036.y"
                                              {	}
#line 3617 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 202:
#line 1072 "assgn5_19CS30033_19CS30036.y"
        {	
		(yyval.stmt) = new statement();    //create statement
		convertInt2Bool((yyvsp[-3].exp));     //convert expression to bool
		backpatch((yyvsp[0].stmt)->nextList, (yyvsp[-4].instrNum));	// M1 to go back to expression again
		backpatch((yyvsp[-3].exp)->trueList, (yyvsp[-1].instrNum));	// M2 to go to statement if the expression is true
		(yyval.stmt)->nextList = (yyvsp[-3].exp)->falseList;   //when expression is false, move out of loop
		// Emit to prevent fallthrough
		string str=to_string((yyvsp[-4].instrNum));		
		emit("goto",str);	
		loopName = "";
		changeTable(ST->parent);
	}
#line 3634 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 203:
#line 1086 "assgn5_19CS30033_19CS30036.y"
        {	
		(yyval.stmt) = new statement();    //create statement
		convertInt2Bool((yyvsp[-5].exp));     //convert expression to bool
		backpatch((yyvsp[-1].stmt)->nextList, (yyvsp[-6].instrNum));	// M1 to go back to expression again
		backpatch((yyvsp[-5].exp)->trueList, (yyvsp[-2].instrNum));	// M2 to go to statement if the expression is true
		(yyval.stmt)->nextList = (yyvsp[-5].exp)->falseList;   //when expression is false, move out of loop
		// Emit to prevent fallthrough
		string str=to_string((yyvsp[-6].instrNum));		
		emit("goto",str);	
		loopName = "";
		changeTable(ST->parent);
	}
#line 3651 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 204:
#line 1099 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.stmt) = new statement();     //create statement	
		convertInt2Bool((yyvsp[-2].exp));      //convert to bool
		backpatch((yyvsp[-2].exp)->trueList, (yyvsp[-7].instrNum));						// M1 to go back to statement if expression is true
		backpatch((yyvsp[-6].stmt)->nextList, (yyvsp[-5].instrNum));						// M2 to go to check expression if statement is complete
		(yyval.stmt)->nextList = (yyvsp[-2].exp)->falseList;                       //move out if statement is false
		loopName = "";
	}
#line 3664 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 205:
#line 1108 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.stmt) = new statement();     //create statement	
		convertInt2Bool((yyvsp[-2].exp));      //convert to bool
		backpatch((yyvsp[-2].exp)->trueList, (yyvsp[-8].instrNum));						// M1 to go back to statement if expression is true
		backpatch((yyvsp[-7].stmt)->nextList, (yyvsp[-5].instrNum));						// M2 to go to check expression if statement is complete
		(yyval.stmt)->nextList = (yyvsp[-2].exp)->falseList;                       //move out if statement is false
		loopName = "";
	}
#line 3677 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 206:
#line 1117 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.stmt) = new statement();		 //create new statement
		convertInt2Bool((yyvsp[-6].exp));  //convert check expression to boolean
		backpatch((yyvsp[-6].exp)->trueList, (yyvsp[-1].instrNum));	//if expression is true, go to M2
		backpatch((yyvsp[-3].stmt)->nextList, (yyvsp[-7].instrNum));	//after N, go back to M1
		backpatch((yyvsp[0].stmt)->nextList, (yyvsp[-5].instrNum));	//statement go back to expression
		string str=to_string((yyvsp[-5].instrNum));
		emit("goto", str);				//prevent fallthrough
		(yyval.stmt)->nextList = (yyvsp[-6].exp)->falseList;	//move out if statement is false
		loopName = "";
		changeTable(ST->parent);
	}
#line 3694 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 207:
#line 1130 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.stmt) = new statement();		 //create new statement
		convertInt2Bool((yyvsp[-6].exp));  //convert check expression to boolean
		backpatch((yyvsp[-6].exp)->trueList, (yyvsp[-1].instrNum));	//if expression is true, go to M2
		backpatch((yyvsp[-3].stmt)->nextList, (yyvsp[-7].instrNum));	//after N, go back to M1
		backpatch((yyvsp[0].stmt)->nextList, (yyvsp[-5].instrNum));	//statement go back to expression
		string str=to_string((yyvsp[-5].instrNum));
		emit("goto", str);				//prevent fallthrough
		(yyval.stmt)->nextList = (yyvsp[-6].exp)->falseList;	//move out if statement is false
		loopName = "";
		changeTable(ST->parent);
	}
#line 3711 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 208:
#line 1143 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.stmt) = new statement();		 //create new statement
		convertInt2Bool((yyvsp[-8].exp));  //convert check expression to boolean
		backpatch((yyvsp[-8].exp)->trueList, (yyvsp[-3].instrNum));	//if expression is true, go to M2
		backpatch((yyvsp[-5].stmt)->nextList, (yyvsp[-9].instrNum));	//after N, go back to M1
		backpatch((yyvsp[-1].stmt)->nextList, (yyvsp[-7].instrNum));	//statement go back to expression
		string str=to_string((yyvsp[-7].instrNum));
		emit("goto", str);				//prevent fallthrough
		(yyval.stmt)->nextList = (yyvsp[-8].exp)->falseList;	//move out if statement is false
		loopName = "";
		changeTable(ST->parent);
	}
#line 3728 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 209:
#line 1156 "assgn5_19CS30033_19CS30036.y"
        {	
		(yyval.stmt) = new statement();		 //create new statement
		convertInt2Bool((yyvsp[-8].exp));  //convert check expression to boolean
		backpatch((yyvsp[-8].exp)->trueList, (yyvsp[-3].instrNum));	//if expression is true, go to M2
		backpatch((yyvsp[-5].stmt)->nextList, (yyvsp[-9].instrNum));	//after N, go back to M1
		backpatch((yyvsp[-1].stmt)->nextList, (yyvsp[-7].instrNum));	//statement go back to expression
		string str=to_string((yyvsp[-7].instrNum));
		emit("goto", str);				//prevent fallthrough
		(yyval.stmt)->nextList = (yyvsp[-8].exp)->falseList;	//move out if statement is false
		loopName = "";
		changeTable(ST->parent);
	}
#line 3745 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 210:
#line 1170 "assgn5_19CS30033_19CS30036.y"
                                          { 
		(yyval.stmt) = new statement();
		label *l = findLabel((yyvsp[-1].sym)->name);
		if(l){
			emit("goto","");
			list<int>lst = makelist(nextInstruction());
			l->nextList = merge(l->nextList,lst);
			if(l->addr!=-1)
				backpatch(l->nextList,l->addr);
		} else {
			l = new label((yyvsp[-1].sym)->name);
			l->nextList = makelist(nextInstruction());
			emit("goto","");
			labelList.push_back(*l);
		}
	}
#line 3766 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 211:
#line 1186 "assgn5_19CS30033_19CS30036.y"
                             { (yyval.stmt) = new statement(); }
#line 3772 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 212:
#line 1187 "assgn5_19CS30033_19CS30036.y"
                          { (yyval.stmt) = new statement(); }
#line 3778 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 213:
#line 1189 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.stmt) = new statement();	
		emit("return",(yyvsp[-1].exp)->loc->name);               //emit return with the name of the return value
	}
#line 3787 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 214:
#line 1194 "assgn5_19CS30033_19CS30036.y"
        {
		(yyval.stmt) = new statement();	
		emit("return","");                         //simply emit return
	}
#line 3796 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 215:
#line 1202 "assgn5_19CS30033_19CS30036.y"
                                       { }
#line 3802 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 216:
#line 1203 "assgn5_19CS30033_19CS30036.y"
                                                { }
#line 3808 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 217:
#line 1206 "assgn5_19CS30033_19CS30036.y"
                                          {  }
#line 3814 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 218:
#line 1207 "assgn5_19CS30033_19CS30036.y"
                        {  }
#line 3820 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 219:
#line 1211 "assgn5_19CS30033_19CS30036.y"
        {
		int instr = 0; 	
		ST->parent=globalST;
		tableCount = 0;
		labelList.clear();
		changeTable(globalST);
	}
#line 3832 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 220:
#line 1220 "assgn5_19CS30033_19CS30036.y"
                                {  }
#line 3838 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 221:
#line 1221 "assgn5_19CS30033_19CS30036.y"
                                          {  }
#line 3844 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 222:
#line 1224 "assgn5_19CS30033_19CS30036.y"
                                {  }
#line 3850 "assgn5_19CS30033_19CS30036.tab.c"
    break;

  case 223:
#line 1225 "assgn5_19CS30033_19CS30036.y"
                             {  }
#line 3856 "assgn5_19CS30033_19CS30036.tab.c"
    break;


#line 3860 "assgn5_19CS30033_19CS30036.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1229 "assgn5_19CS30033_19CS30036.y"


void yyerror(string s){
    cout << "Error: " << s << endl;
}
