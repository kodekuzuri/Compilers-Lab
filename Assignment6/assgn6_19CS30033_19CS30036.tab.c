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
#line 1 "assgn6_19CS30033_19CS30036.y"


#include <bits/stdc++.h>
#include <sstream>
#include "assgn6_19CS30033_19CS30036_translator.h"

extern int yylex();
void yyerror(string s);

extern string varType;
vector <string> stringList;
using namespace std;

#line 84 "assgn6_19CS30033_19CS30036.tab.c"

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
#ifndef YY_YY_ASSGN6_19CS30033_19CS30036_TAB_H_INCLUDED
# define YY_YY_ASSGN6_19CS30033_19CS30036_TAB_H_INCLUDED
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
#line 15 "assgn6_19CS30033_19CS30036.y"

    char unaryOp;	 
    char* charVal;	 
    int instrNum;	 
    int intVal;		 
	float floatVal;	 
    int numParams;	 
    expression* exp;  
    statement* stmt;  
    symType* stype;  
    symbol* sym;     
    Array* arr;		 

#line 236 "assgn6_19CS30033_19CS30036.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASSGN6_19CS30033_19CS30036_TAB_H_INCLUDED  */



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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1053

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  361

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
       0,   131,   131,   137,   142,   153,   160,   165,   170,   178,
     183,   190,   204,   211,   232,   233,   240,   241,   242,   249,
     256,   262,   271,   276,   284,   288,   293,   298,   340,   341,
     344,   345,   346,   347,   348,   349,   352,   353,   359,   376,
     388,   401,   415,   416,   428,   442,   443,   454,   467,   468,
     482,   497,   511,   529,   530,   546,   564,   565,   580,   581,
     597,   598,   614,   615,   628,   629,   642,   643,   666,   667,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   701,   702,   705,   708,   709,   712,   713,   714,   715,
     716,   717,   718,   719,   722,   723,   726,   727,   735,   736,
     737,   738,   741,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   756,   757,   760,   761,   764,
     765,   766,   769,   770,   773,   774,   777,   778,   781,   782,
     783,   786,   789,   797,   800,   805,   806,   807,   808,   829,
     849,   850,   851,   852,   853,   867,   868,   885,   886,   889,
     893,   899,   900,   903,   904,   907,   908,   911,   915,   918,
     919,   922,   925,   926,   927,   930,   931,   934,   935,   938,
     941,   942,   945,   946,   951,   952,   953,   958,   959,   960,
     963,   967,   968,   974,   978,   984,   985,   992,   993,   996,
     997,  1000,  1009,  1019,  1022,  1033,  1041,  1053,  1067,  1068,
    1069,  1070,  1075,  1084,  1085,  1088,  1089,  1092,  1093,  1101,
    1102
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
  "\"then\"", "'('", "')'", "'['", "']'", "'{'", "'}'", "$accept",
  "primary_expression", "constant", "M", "N", "changetable",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "type_qualifier_list_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
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

#define YYPACT_NINF (-257)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-124)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1014,  -257,  -257,  -257,   -25,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,   -10,  1014,  1014,  -257,  1014,  1014,   977,
    -257,  -257,   -57,   -15,  -257,    15,  -257,    -7,   -33,  -257,
     399,    47,   -27,  -257,  -257,  -257,  -257,  -257,  -257,   -20,
    -257,    37,    15,    35,  -257,    -7,   725,    42,  -257,   -10,
    1014,   109,   510,    47,    83,   -38,  -257,  -257,  -257,  -257,
    -257,   101,   881,  -257,  -257,  -257,  -257,  -257,   901,   901,
    -257,  -257,  -257,  -257,  -257,  -257,   620,    27,  -257,  -257,
      93,   603,   922,  -257,   105,     4,   108,   117,   121,   139,
     129,   141,   147,   123,  -257,  -257,  -257,   284,  -257,    42,
    -257,  -257,   490,   -53,   668,   128,  -257,   133,   561,   922,
     -30,  -257,   620,  -257,   620,  -257,  -257,  -257,    -2,   232,
    -257,   232,   138,   190,   922,    33,   725,  -257,    73,  -257,
     191,   192,  -257,  -257,   777,   922,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,   922,  -257,  -257,
     922,   922,   922,   922,   922,   922,   922,   922,   922,   922,
     922,   922,   922,   922,   922,   922,   166,   131,   163,   922,
     165,   167,  -257,   153,   202,   156,   808,   161,  -257,   179,
    -257,  -257,   -32,  -257,  -257,  -257,  -257,   158,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,    -7,   169,   170,  -257,   211,
    -257,   173,   668,  -257,  -257,   174,  -257,   178,  -257,  -257,
    -257,  -257,   171,   185,   922,  -257,  -257,  -257,  -257,   756,
    -257,   184,    -8,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
      63,  -257,    30,  -257,  -257,  -257,  -257,   105,   105,     4,
       4,   108,   108,   108,   108,   117,   117,   121,   139,   129,
    -257,  -257,  -257,  -257,   205,  -257,   435,   435,   849,   206,
     922,  -257,   -26,   922,   189,  -257,  -257,  -257,   344,  -257,
    -257,   723,  -257,  -257,   188,  -257,  -257,   193,   193,  -257,
      27,  -257,  -257,  -257,   725,   922,  -257,  -257,   922,   922,
     922,   435,  -257,  -257,  -257,  -257,   195,  -257,    75,   922,
     435,  -257,  -257,  -257,  -257,    40,  -257,  -257,   141,   147,
     195,  -257,   244,   849,   194,   435,    80,  -257,    -4,  -257,
     213,   208,   223,  -257,  -257,  -257,  -257,  -257,   922,  -257,
     922,   435,   435,   922,    87,   435,   195,  -257,  -257,  -257,
     245,  -257,   227,   318,  -257,  -257,  -257,   435,   435,  -257,
    -257
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   103,   128,   122,    98,   100,   107,   131,   106,
     129,   104,   109,   101,   105,   108,   110,   102,   130,   111,
     112,   113,   206,     0,    87,    89,   114,    91,    93,     0,
     203,   205,   121,     0,   134,   147,    85,     0,     0,    94,
      96,   133,     0,    86,    88,    90,    92,     1,   204,     0,
     151,   149,   148,     0,    84,     0,     0,     0,   209,     0,
      11,    11,     0,   132,   126,     0,   124,   150,   152,   135,
      95,    96,     0,     2,     6,     7,     8,     4,     0,     0,
      30,    31,    32,    33,    34,    35,     0,   167,    12,     3,
      24,    36,     0,    38,    42,    45,    48,    53,    56,    58,
      60,    62,    64,    66,    68,   162,    97,     0,   208,     0,
     210,   159,     0,     0,     0,    31,   139,     0,     0,     0,
       0,   119,     0,    28,     0,    25,    26,    81,     0,   117,
     161,   117,     0,     0,     0,     0,     0,   168,     0,   170,
       0,     0,    18,    19,     0,     0,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,     0,    36,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     9,     2,
     190,   184,     0,   187,   188,   174,   175,     9,   185,   176,
     177,   178,   179,   207,   146,   158,     0,   153,   155,     0,
     145,     0,     0,   143,   138,    31,   137,     0,    83,   127,
     120,   125,     0,     0,     0,     5,   118,   115,   116,     0,
     173,     0,   167,   163,   165,   169,   171,    16,    17,    14,
       0,    22,     0,    69,    39,    40,    41,    43,    44,    46,
      47,    49,    50,    51,    52,    54,    55,    57,    59,    61,
       9,     9,     9,   200,     0,   199,     0,     0,     0,     0,
       0,   202,     0,     0,     0,     9,   189,   183,     0,   157,
     144,     0,   160,   141,     0,   142,   136,    29,     0,    82,
     167,    37,   172,   164,     0,     0,    15,    13,     0,     0,
       0,     0,   182,     9,     9,   198,    10,   201,     0,     0,
       0,   186,   154,   156,   140,     0,   166,    23,    63,    65,
      10,   181,     0,     0,     0,     0,     0,   180,   167,    20,
       0,     0,     9,     9,   193,     9,    21,     9,     0,     9,
       0,     0,     0,     0,     0,     0,    10,    10,   194,    67,
       0,   196,     0,   191,   195,     9,     9,     0,     0,   197,
     192
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -257,  -257,  -257,  -131,  -101,   150,  -257,  -257,   -71,  -257,
     -87,    49,    51,    28,    50,   157,   168,   164,    43,    41,
    -257,  -108,    -9,  -257,   -80,  -115,   -37,     0,  -257,   288,
    -257,    21,    52,   214,  -257,  -257,  -257,   224,    -3,  -257,
     -19,   304,  -257,   338,   -46,  -257,  -257,   118,  -257,    65,
    -127,   100,  -218,  -257,  -257,   262,  -188,  -257,   -40,  -257,
     125,  -256,  -257,  -257,  -257,  -257,   372,  -257,  -257
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    88,    89,   267,   176,    57,    90,   240,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   127,   157,   192,   219,    22,    59,    38,    39,
      24,    25,   130,   227,    26,    33,    65,    66,    27,    28,
      71,    41,    51,    42,    52,   206,   207,   208,   113,   132,
     106,   135,   136,   137,   138,   139,   194,   195,   196,   197,
     198,   199,   200,   201,   202,    29,    30,    31,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   123,   177,    58,    40,   159,   128,   125,   126,   234,
      64,   218,   304,    34,   294,    32,   118,   108,    53,   231,
      64,   158,     3,   110,    43,    44,   218,    45,    46,    23,
      34,   209,    50,    34,  -123,   210,    10,   133,    54,   276,
      35,   133,   128,    35,   128,   307,   120,   105,   158,    68,
      18,    55,   224,   117,   121,   163,   164,   274,   224,    50,
      37,    36,   220,   158,   264,   242,   278,   332,   212,   203,
     193,   218,   133,   244,   245,   246,    49,    37,   302,   303,
      37,   134,   224,   131,   293,   134,   225,    35,   336,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   211,   272,   129,   158,   217,
     294,    50,   205,   321,   224,    68,   134,   232,   133,   131,
     297,   131,   327,    69,   328,   233,   131,   105,   131,   298,
     299,   300,   329,   107,    61,   241,    62,   334,   140,   141,
     142,   143,   291,   129,   310,   129,   235,   295,   243,   111,
     129,   296,   129,   347,   348,   160,   119,   351,   158,   224,
     161,   162,   134,   325,   224,   165,   166,   316,   335,   359,
     360,   224,   322,   323,    56,   350,   167,   168,   169,   170,
     144,   226,   145,   226,   171,   172,   279,   222,   173,   223,
     306,   -10,   -10,   308,   174,   251,   252,   253,   254,   261,
     262,   340,   341,   284,   342,   324,   343,   175,   345,    68,
     109,   112,   247,   248,   -10,   289,   249,   250,   213,   330,
     320,   255,   256,   214,   357,   358,   229,   158,   158,   326,
     230,   237,   238,   260,   263,   349,   265,   266,     2,     3,
     268,   193,   269,   270,     4,   352,   353,     7,   273,   275,
     277,   282,     9,    10,   281,    11,    12,   280,   344,   287,
     346,    14,    15,   283,   285,    16,    17,    18,   286,    19,
      20,    21,   158,   288,   292,   301,   309,   305,   314,   224,
     331,   205,   333,   337,   290,   105,   317,     1,   178,   179,
       2,     3,   180,   181,   182,   338,     4,     5,     6,     7,
     183,   184,   185,     8,     9,    10,   186,    11,    12,    72,
      13,   339,   187,    14,    15,   355,   354,    16,    17,    18,
     188,    19,    20,    21,   189,    74,    75,    76,    77,   356,
     257,    78,    79,    80,    81,    82,    83,    84,    85,   259,
     319,   318,   258,    70,   221,   228,    63,     1,   178,   179,
       2,     3,   180,   181,   182,   190,     4,     5,     6,     7,
     183,   184,   185,     8,     9,    10,   186,    11,    12,    72,
      13,    86,   187,    14,    15,   107,   191,    16,    17,    18,
     188,    19,    20,    21,   189,    74,    75,    76,    77,    67,
     315,    78,    79,    80,    81,    82,    83,    84,    85,   313,
     236,    48,     1,   311,     0,     2,     3,     0,     0,     0,
       0,     4,     5,     6,     7,   190,     0,     0,     8,     9,
      10,     0,    11,    12,     0,    13,     0,     0,    14,    15,
       0,    86,    16,    17,    18,   107,    19,    20,    21,   178,
     179,     0,     0,   180,   181,   182,     0,     0,     0,     0,
       0,   183,   184,   185,     0,     0,     0,   186,     0,     0,
      72,     0,     0,   187,     0,     0,     0,     0,     0,     0,
       0,   188,    56,     0,     0,   189,    74,    75,    76,    77,
       0,     0,    78,    79,    80,    81,    82,    83,    84,    85,
     -11,     0,     0,     1,     0,     0,     2,     3,     0,     0,
       0,     0,     4,     5,     6,     7,   190,     0,     0,     8,
       9,    10,     0,    11,    12,     0,    13,     3,     0,    14,
      15,     0,    86,    16,    17,    18,   107,    19,    20,    21,
       0,    10,     0,     0,     0,    72,   114,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
      73,    74,    75,    76,    77,     0,     0,    78,    79,    80,
     115,    82,    83,    84,    85,     0,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   204,     0,
       0,     0,    10,     0,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    86,     0,     0,
     116,    73,    74,    75,    76,    77,     0,     0,    78,    79,
      80,   215,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     0,     0,
       0,     0,     4,     0,     0,     7,     0,     0,     0,     0,
       9,    10,     0,    11,    12,    72,     0,     0,    86,    14,
      15,   216,     0,    16,    17,    18,     0,    19,    20,    21,
      73,    74,    75,    76,    77,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    85,     3,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,    10,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,    86,    73,    74,
      75,    76,    77,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,     0,     0,     0,     1,     0,     0,     2,
       3,     0,     0,     0,     0,     4,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      72,     0,    14,    15,     0,    86,    16,    17,    18,     0,
      19,    20,    21,     0,     0,    73,    74,    75,    76,    77,
       0,     0,    78,    79,    80,    81,    82,    83,    84,    85,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   312,    73,    74,    75,    76,
      77,     0,    72,    78,    79,    80,    81,    82,    83,    84,
      85,     0,    86,     0,     0,     0,    87,    73,    74,    75,
      76,    77,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,   290,    73,    74,
      75,    76,    77,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,     0,    86,   239,     0,     0,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,   271,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,     0,    86,    78,    79,    80,    81,
      82,    83,    84,    85,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     190,    73,    74,    75,    76,    77,    72,     0,    78,    79,
      80,    81,    82,    83,    84,    85,    86,     0,     0,     0,
       0,    73,    74,    75,    76,    77,     0,    72,    78,    79,
      80,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,    73,    74,    75,    76,    77,     0,   122,    78,
      79,    80,    81,    82,    83,    84,    85,    47,     0,     0,
       1,     0,     0,     2,     3,     0,     0,     0,   124,     4,
       5,     6,     7,     0,     0,     0,     8,     9,    10,     0,
      11,    12,     0,    13,     0,     0,    14,    15,     0,    86,
      16,    17,    18,     0,    19,    20,    21,     1,     0,     0,
       2,     3,     0,     0,     0,     0,     4,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,     0,
      13,     0,     0,    14,    15,     0,     0,    16,    17,    18,
       0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    72,   103,    40,    23,    92,    86,    78,    79,   136,
      40,   119,   268,    40,   232,    40,    62,    57,    37,   134,
      40,    92,     7,    60,    24,    25,   134,    27,    28,    29,
      40,    84,    35,    40,    91,    88,    21,    45,    71,    71,
      50,    45,   122,    50,   124,    71,    84,    56,   119,    52,
      35,    84,    84,    62,    92,    51,    52,   188,    84,    62,
      87,    71,    92,   134,   179,   145,   197,   323,   114,   109,
     107,   179,    45,   160,   161,   162,    91,    87,   266,   267,
      87,    89,    84,    86,    92,    89,    88,    50,    92,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   114,   186,    86,   179,   118,
     328,   114,   112,   301,    84,   118,    89,    84,    45,   122,
      90,   124,   310,    88,    84,    92,   129,   136,   131,   260,
     261,   262,    92,    91,    87,   144,    89,   325,    45,    46,
      47,    48,   229,   122,   275,   124,    73,    84,   157,    40,
     129,    88,   131,   341,   342,    50,    73,   345,   229,    84,
      55,    56,    89,    88,    84,    57,    58,   294,    88,   357,
     358,    84,   303,   304,    73,    88,    59,    60,    61,    62,
      87,   129,    89,   131,    63,    64,   205,   122,    49,   124,
     270,    68,    69,   273,    65,   167,   168,   169,   170,    68,
      69,   332,   333,   212,   335,   306,   337,    66,   339,   212,
      60,    61,   163,   164,    67,   224,   165,   166,    90,   320,
     300,   171,   172,    90,   355,   356,    88,   298,   299,   309,
      40,    40,    40,    67,    71,   343,    71,    70,     6,     7,
      87,   278,    40,    87,    12,   346,   347,    15,    87,    70,
      92,    40,    20,    21,    84,    23,    24,    88,   338,    88,
     340,    29,    30,    90,    90,    33,    34,    35,    90,    37,
      38,    39,   343,    88,    90,    70,    87,    71,    90,    84,
      36,   281,    88,    70,    91,   294,   295,     3,     4,     5,
       6,     7,     8,     9,    10,    87,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    88,    28,    29,    30,    88,    71,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    11,
     173,    47,    48,    49,    50,    51,    52,    53,    54,   175,
     299,   298,   174,    55,   120,   131,    42,     3,     4,     5,
       6,     7,     8,     9,    10,    71,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    87,    28,    29,    30,    91,    92,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    51,
     290,    47,    48,    49,    50,    51,    52,    53,    54,   281,
     138,    29,     3,   278,    -1,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    15,    71,    -1,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    -1,    -1,    29,    30,
      -1,    87,    33,    34,    35,    91,    37,    38,    39,     4,
       5,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    73,    -1,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      91,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    71,    -1,    -1,    19,
      20,    21,    -1,    23,    24,    -1,    26,     7,    -1,    29,
      30,    -1,    87,    33,    34,    35,    91,    37,    38,    39,
      -1,    21,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    87,    -1,    -1,
      90,    40,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    -1,    -1,    87,    29,
      30,    90,    -1,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,     7,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    21,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    87,    40,    41,
      42,    43,    44,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      25,    -1,    29,    30,    -1,    87,    33,    34,    35,    -1,
      37,    38,    39,    -1,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    40,    41,    42,    43,
      44,    -1,    25,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    87,    -1,    -1,    -1,    91,    40,    41,    42,
      43,    44,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    40,    41,
      42,    43,    44,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    -1,    87,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    40,    41,    42,    43,    44,    25,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    87,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    -1,    25,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    -1,    87,    47,
      48,    49,    50,    51,    52,    53,    54,     0,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    87,    12,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    -1,    -1,    29,    30,    -1,    87,
      33,    34,    35,    -1,    37,    38,    39,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,
      26,    -1,    -1,    29,    30,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    12,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    29,    30,    33,    34,    35,    37,
      38,    39,   119,   120,   123,   124,   127,   131,   132,   158,
     159,   160,    40,   128,    40,    50,    71,    87,   121,   122,
     133,   134,   136,   120,   120,   120,   120,     0,   159,    91,
     131,   135,   137,   133,    71,    84,    73,    98,   119,   120,
     161,    87,    89,   134,    40,   129,   130,   136,   131,    88,
     122,   133,    25,    40,    41,    42,    43,    44,    47,    48,
      49,    50,    51,    52,    53,    54,    87,    91,    94,    95,
      99,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   143,    91,   151,    98,
     119,    40,    98,   141,    26,    50,    90,   115,   137,    73,
      84,    92,    87,   101,    87,   101,   101,   115,   117,   124,
     125,   131,   142,    45,    89,   144,   145,   146,   147,   148,
      45,    46,    47,    48,    87,    89,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   116,   101,   103,
      50,    55,    56,    51,    52,    57,    58,    59,    60,    61,
      62,    63,    64,    49,    65,    66,    97,    97,     4,     5,
       8,     9,    10,    16,    17,    18,    22,    28,    36,    40,
      71,    92,   117,   119,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   151,    88,   120,   138,   139,   140,    84,
      88,   115,   137,    90,    90,    50,    90,   115,   114,   118,
      92,   130,   142,   142,    84,    88,   125,   126,   126,    88,
      40,   118,    84,    92,   143,    73,   148,    40,    40,    88,
     100,   115,   117,   115,   103,   103,   103,   104,   104,   105,
     105,   106,   106,   106,   106,   107,   107,   108,   109,   110,
      67,    68,    69,    71,   118,    71,    70,    96,    87,    40,
      87,    71,   117,    87,    96,    70,    71,    92,    96,   133,
      88,    84,    40,    90,   115,    90,    90,    88,    88,   115,
      91,   103,    90,    92,   145,    84,    88,    90,    96,    96,
      96,    70,   149,   149,   154,    71,   117,    71,   117,    87,
      96,   153,    72,   140,    90,   144,   143,   115,   111,   112,
     117,   149,    96,    96,    97,    88,   117,   149,    84,    92,
      97,    36,   154,    88,   149,    88,    92,    70,    87,    88,
      96,    96,    96,    96,   117,    96,   117,   149,   149,   114,
      88,   149,    97,    97,    71,    88,    11,    96,    96,   149,
     149
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    95,    95,    95,    96,
      97,    98,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     102,   102,   102,   102,   102,   102,   103,   103,   104,   104,
     104,   104,   105,   105,   105,   106,   106,   106,   107,   107,
     107,   107,   107,   108,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   119,   119,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   125,   126,   126,   127,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   132,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   141,
     141,   142,   143,   143,   143,   144,   144,   145,   145,   146,
     147,   147,   148,   148,   149,   149,   149,   149,   149,   149,
     150,   150,   150,   151,   151,   152,   152,   153,   153,   154,
     154,   155,   155,   155,   156,   156,   156,   156,   157,   157,
     157,   157,   157,   158,   158,   159,   159,   160,   160,   161,
     161
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     0,
       0,     0,     1,     4,     3,     4,     3,     3,     2,     2,
       6,     7,     1,     3,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     5,     1,     9,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     1,     5,
       6,     2,     0,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     3,
       6,     5,     5,     4,     5,     4,     4,     0,     1,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     3,     4,     2,     4,     0,     1,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       4,     4,     3,     3,     2,     1,     3,     1,     1,     2,
       1,     8,    11,     5,     7,     9,     8,    11,     3,     2,
       2,     3,     2,     1,     2,     1,     1,     5,     4,     1,
       2
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
#line 132 "assgn6_19CS30033_19CS30036.y"
        {
	    (yyval.exp)=new expression();                                                   
	    (yyval.exp)->loc=(yyvsp[0].sym);
	    (yyval.exp)->type="NONBOOL";
	}
#line 1848 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 3:
#line 138 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.exp) = new expression();
		(yyval.exp)->loc = (yyvsp[0].sym);
	}
#line 1857 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 4:
#line 143 "assgn6_19CS30033_19CS30036.y"
        {                                                                           
		(yyval.exp)=new expression();
		(yyval.exp)->loc=gentemp(new symType("PTR"),(yyvsp[0].charVal));
		(yyval.exp)->loc->type->ptr=new symType("CHAR");

		stringList.push_back((yyvsp[0].charVal));
		string tmp = to_string(stringList.size()-1);
		emit("EQUALSTR", (yyval.exp)->loc->name, tmp);
		
	}
#line 1872 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 5:
#line 154 "assgn6_19CS30033_19CS30036.y"
        {                                                                           
		(yyval.exp)=(yyvsp[-1].exp);
	}
#line 1880 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 6:
#line 161 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.sym) = gentemp(new symType("INT"),to_string((yyvsp[0].intVal)));
		emit("EQUAL", (yyval.sym)->name, (yyvsp[0].intVal));
	}
#line 1889 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 7:
#line 166 "assgn6_19CS30033_19CS30036.y"
        {                                                                          
		(yyval.sym) = gentemp(new symType("FLOAT"), to_string((yyvsp[0].floatVal)));
		emit("EQUAL",(yyval.sym)->name, (yyvsp[0].floatVal));
	}
#line 1898 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 8:
#line 171 "assgn6_19CS30033_19CS30036.y"
        {                                                                          
		(yyval.sym) = gentemp(new symType("CHAR"),(yyvsp[0].charVal));
		emit("EQUALCHAR", (yyval.sym)->name, string((yyvsp[0].charVal)));
	}
#line 1907 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 9:
#line 179 "assgn6_19CS30033_19CS30036.y"
    {
        (yyval.instrNum) = nextInstruction();
    }
#line 1915 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 10:
#line 184 "assgn6_19CS30033_19CS30036.y"
    {
        (yyval.stmt) = new statement();
        (yyval.stmt)->nextList = makelist(nextInstruction());
        emit("GOTOOP","");
    }
#line 1925 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 11:
#line 191 "assgn6_19CS30033_19CS30036.y"
    {                                                          
		if(currS->nestedST == NULL) 
		{
			changeTable(new symTable(""));	                                            
		}
		else 
		{
			changeTable(currS->nestedST);						                
			emit("FUNC", ST->name);
		}
    }
#line 1941 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 12:
#line 205 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.arr) = new Array();	
		(yyval.arr)->Sarr = (yyvsp[0].exp)->loc;	
		(yyval.arr)->type = (yyvsp[0].exp)->loc->type;	
		(yyval.arr)->loc = (yyval.arr)->Sarr;
	}
#line 1952 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 13:
#line 212 "assgn6_19CS30033_19CS30036.y"
        { 	
		
		(yyval.arr) = new Array();
		(yyval.arr)->Sarr = (yyvsp[-3].arr)->loc;
		(yyval.arr)->type = (yyvsp[-3].arr)->type->ptr;
		(yyval.arr)->loc = gentemp(new symType("INT")); 
		(yyval.arr)->artype = "ARR";    	                          
		
		if((yyvsp[-3].arr)->artype == "ARR") {			                                
			symbol* t = gentemp(new symType("INT"));
			int p = typeSize((yyval.arr)->type);
			string str = to_string(p);
			emit("MULT", t->name, (yyvsp[-1].exp)->loc->name, str);
			emit("ADD", (yyval.arr)->loc->name, (yyvsp[-3].arr)->loc->name, t->name);
		} else {   
			int p = typeSize((yyval.arr)->type);	
			string str = to_string(p);
			emit("MULT", (yyval.arr)->loc->name, (yyvsp[-1].exp)->loc->name, str);
		}
	}
#line 1977 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 14:
#line 232 "assgn6_19CS30033_19CS30036.y"
                                     {}
#line 1983 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 15:
#line 234 "assgn6_19CS30033_19CS30036.y"
        { 
		(yyval.arr) = new Array();	
		(yyval.arr)->Sarr = gentemp((yyvsp[-3].arr)->type);
		string str = to_string((yyvsp[-1].numParams));
		emit("CALL", (yyval.arr)->Sarr->name, (yyvsp[-3].arr)->Sarr->name, str);
	}
#line 1994 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 16:
#line 240 "assgn6_19CS30033_19CS30036.y"
                                            {  }
#line 2000 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 17:
#line 241 "assgn6_19CS30033_19CS30036.y"
                                               {  }
#line 2006 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 18:
#line 243 "assgn6_19CS30033_19CS30036.y"
        { 
		(yyval.arr) = new Array();	
		(yyval.arr)->Sarr = gentemp((yyvsp[-1].arr)->Sarr->type);
		emit("EQUAL", (yyval.arr)->Sarr->name, (yyvsp[-1].arr)->Sarr->name);
		emit("ADD", (yyvsp[-1].arr)->Sarr->name, (yyvsp[-1].arr)->Sarr->name, "1"); // increment $1 by 1
	}
#line 2017 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 19:
#line 250 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.arr) = new Array();	
		(yyval.arr)->Sarr = gentemp((yyvsp[-1].arr)->Sarr->type);
		emit("EQUAL", (yyval.arr)->Sarr->name, (yyvsp[-1].arr)->Sarr->name);
		emit("SUB", (yyvsp[-1].arr)->Sarr->name, (yyvsp[-1].arr)->Sarr->name, "1");	
	}
#line 2028 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 20:
#line 257 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.arr) = new Array();
		(yyval.arr)->Sarr = gentemp(new symType("INT"));
		(yyval.arr)->loc = gentemp(new symType("INT"));
	}
#line 2038 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 21:
#line 263 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.arr) = new Array();
		(yyval.arr)->Sarr = gentemp(new symType("INT"));
		(yyval.arr)->loc = gentemp(new symType("INT"));
	}
#line 2048 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 22:
#line 272 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.numParams) = 1;                                       
		emit("PARAM", (yyvsp[0].exp)->loc->name);	
	}
#line 2057 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 23:
#line 277 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.numParams)= (yyvsp[-2].numParams) + 1;                                   
		emit("PARAM", (yyvsp[0].exp)->loc->name);
	}
#line 2066 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 24:
#line 285 "assgn6_19CS30033_19CS30036.y"
        { 
		(yyval.arr) = (yyvsp[0].arr); /*Equate $$ and $1*/
	}
#line 2074 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 25:
#line 289 "assgn6_19CS30033_19CS30036.y"
        {  		 
		emit("ADD", (yyvsp[0].arr)->Sarr->name, (yyvsp[0].arr)->Sarr->name, "1");		
		(yyval.arr) = (yyvsp[0].arr);
	}
#line 2083 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 26:
#line 294 "assgn6_19CS30033_19CS30036.y"
        {
		emit("SUB", (yyvsp[0].arr)->Sarr->name, (yyvsp[0].arr)->Sarr->name, "1");
		(yyval.arr) = (yyvsp[0].arr);
	}
#line 2092 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 27:
#line 299 "assgn6_19CS30033_19CS30036.y"
        {   
		(yyval.arr) = new Array();
		switch((yyvsp[-1].unaryOp))
		{	  
			case '&':                                                   
				(yyval.arr)->Sarr = gentemp(new symType("PTR"));
				(yyval.arr)->Sarr->type->ptr=(yyvsp[0].arr)->Sarr->type; 
				emit("ADDRESS", (yyval.arr)->Sarr->name, (yyvsp[0].arr)->Sarr->name);
				break;

			case '*':                                                    
				(yyval.arr)->artype = "PTR";
				(yyval.arr)->loc = gentemp((yyvsp[0].arr)->Sarr->type->ptr);
				(yyval.arr)->Sarr = (yyvsp[0].arr)->Sarr;
				emit("PTRR", (yyval.arr)->loc->name, (yyvsp[0].arr)->Sarr->name);
				break;

			case '+':  
				(yyval.arr) = (yyvsp[0].arr);
				break;                  
			
			case '-':				    
				(yyval.arr)->Sarr = gentemp(new symType((yyvsp[0].arr)->Sarr->type->type));
				emit("UMINUS", (yyval.arr)->Sarr->name, (yyvsp[0].arr)->Sarr->name);
				break;
			
			case '~':                    
				(yyval.arr)->Sarr = gentemp(new symType((yyvsp[0].arr)->Sarr->type->type));
				emit("BNOT", (yyval.arr)->Sarr->name, (yyvsp[0].arr)->Sarr->name);
				break;
			
			case '!':				 
				(yyval.arr)->Sarr = gentemp(new symType((yyvsp[0].arr)->Sarr->type->type));
				emit("LNOT", (yyval.arr)->Sarr->name, (yyvsp[0].arr)->Sarr->name);
				break;
				
			default:
				break;
			
		}
	}
#line 2138 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 28:
#line 340 "assgn6_19CS30033_19CS30036.y"
                                   {  }
#line 2144 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 29:
#line 341 "assgn6_19CS30033_19CS30036.y"
                                     {  }
#line 2150 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 30:
#line 344 "assgn6_19CS30033_19CS30036.y"
                           { (yyval.unaryOp) = '&'; }
#line 2156 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 31:
#line 345 "assgn6_19CS30033_19CS30036.y"
               { (yyval.unaryOp) = '*'; }
#line 2162 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 32:
#line 346 "assgn6_19CS30033_19CS30036.y"
               { (yyval.unaryOp) = '+'; }
#line 2168 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 33:
#line 347 "assgn6_19CS30033_19CS30036.y"
                { (yyval.unaryOp) = '-'; }
#line 2174 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 34:
#line 348 "assgn6_19CS30033_19CS30036.y"
              { (yyval.unaryOp) = '~'; }
#line 2180 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 35:
#line 349 "assgn6_19CS30033_19CS30036.y"
                      { (yyval.unaryOp) = '!'; }
#line 2186 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 36:
#line 352 "assgn6_19CS30033_19CS30036.y"
                                   { (yyval.arr)=(yyvsp[0].arr); }
#line 2192 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 37:
#line 354 "assgn6_19CS30033_19CS30036.y"
        { 
		(yyval.arr) = (yyvsp[0].arr);           
	}
#line 2200 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 38:
#line 360 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.exp) = new expression();              
		if((yyvsp[0].arr)->artype == "ARR") 			    
		{
			(yyval.exp)->loc = gentemp((yyvsp[0].arr)->loc->type);	
			emit("ARRR", (yyval.exp)->loc->name, (yyvsp[0].arr)->Sarr->name, (yyvsp[0].arr)->loc->name);      
		}
		else if((yyvsp[0].arr)->artype == "PTR")          
		{ 
			(yyval.exp)->loc = (yyvsp[0].arr)->loc;        	    
		}
		else
		{
			(yyval.exp)->loc = (yyvsp[0].arr)->Sarr;
		}
	}
#line 2221 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 39:
#line 377 "assgn6_19CS30033_19CS30036.y"
        { 
		 
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].arr)->Sarr))         
			cout<<"Type Error in Program"<< endl;	 
		else 								 		 
		{
			(yyval.exp) = new expression();	
			(yyval.exp)->loc = gentemp(new symType((yyvsp[-2].exp)->loc->type->type));
			emit("MULT", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].arr)->Sarr->name);
		}
	}
#line 2237 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 40:
#line 389 "assgn6_19CS30033_19CS30036.y"
        {
		 
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].arr)->Sarr)){ 
			cout << "Type Error in Program"<< endl;
		}
		else   
		{
			(yyval.exp) = new expression();
			(yyval.exp)->loc = gentemp(new symType((yyvsp[-2].exp)->loc->type->type));
			emit("DIVIDE", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].arr)->Sarr->name);
		}
	}
#line 2254 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 41:
#line 402 "assgn6_19CS30033_19CS30036.y"
        {
		
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].arr)->Sarr)) 
			cout << "Type Error in Program"<< endl;		
		else 		 
		{ 
			(yyval.exp) = new expression();
			(yyval.exp)->loc = gentemp(new symType((yyvsp[-2].exp)->loc->type->type));
			emit("MODOP", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].arr)->Sarr->name);	
		}
	}
#line 2270 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 42:
#line 415 "assgn6_19CS30033_19CS30036.y"
                                                 { (yyval.exp)=(yyvsp[0].exp); }
#line 2276 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 43:
#line 417 "assgn6_19CS30033_19CS30036.y"
        {
		
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))
			cout << "Type Error in Program"<< endl;
		else    	 
		{
			(yyval.exp) = new expression();	
			(yyval.exp)->loc = gentemp(new symType((yyvsp[-2].exp)->loc->type->type));
			emit("ADD", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
		}
	}
#line 2292 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 44:
#line 429 "assgn6_19CS30033_19CS30036.y"
        {
		
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))
			cout << "Type Error in Program"<< endl;		
		else         
		{	
			(yyval.exp) = new expression();	
			(yyval.exp)->loc = gentemp(new symType((yyvsp[-2].exp)->loc->type->type));
			emit("SUB", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
		}
	}
#line 2308 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 45:
#line 442 "assgn6_19CS30033_19CS30036.y"
                                        { (yyval.exp)=(yyvsp[0].exp); }
#line 2314 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 46:
#line 444 "assgn6_19CS30033_19CS30036.y"
        { 
		if(!((yyvsp[0].exp)->loc->type->type == "INT"))
			cout << "Type Error in Program"<< endl; 		
		else             
		{		
			(yyval.exp) = new expression();		
			(yyval.exp)->loc = gentemp(new symType("INT"));
			emit("LEFTOP", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);		
		}
	}
#line 2329 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 47:
#line 455 "assgn6_19CS30033_19CS30036.y"
        { 	
		if(!((yyvsp[0].exp)->loc->type->type == "INT"))
			cout << "Type Error in Program"<< endl; 		
		else  		 
		{			
			(yyval.exp) = new expression();	
			(yyval.exp)->loc = gentemp(new symType("INT"));
			emit("RIGHTOP", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);			
		}
	}
#line 2344 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 48:
#line 467 "assgn6_19CS30033_19CS30036.y"
                                          { (yyval.exp)=(yyvsp[0].exp); }
#line 2350 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 49:
#line 469 "assgn6_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc)) 
			cout << "Type Error in Program";
		else 
		{       
			(yyval.exp) = new expression();
			(yyval.exp)->type = "BOOL";                          
			(yyval.exp)->trueList = makelist(nextInstruction());      
			(yyval.exp)->falseList = makelist(nextInstruction()+1);
			emit("LT", "", (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);      
			emit("GOTOOP", "");	 
		}
	}
#line 2368 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 50:
#line 483 "assgn6_19CS30033_19CS30036.y"
        {
		 
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc)) 
			cout <<  "Type Error in Program";
		else 
		{	
			(yyval.exp) = new expression();		
			(yyval.exp)->type = "BOOL";
			(yyval.exp)->trueList = makelist(nextInstruction());
			(yyval.exp)->falseList = makelist(nextInstruction()+1);
			emit("GT", "", (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
			emit("GOTOOP", "");
		}	
	}
#line 2387 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 51:
#line 498 "assgn6_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc)) 
			cout << "Type Error in Program"<< endl;
		else 
		{			
			(yyval.exp) = new expression();		
			(yyval.exp)->type = "BOOL";
			(yyval.exp)->trueList = makelist(nextInstruction());
			(yyval.exp)->falseList = makelist(nextInstruction()+1);
			emit("LE", "", (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
			emit("GOTOOP", "");
		}		
	}
#line 2405 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 52:
#line 512 "assgn6_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))
		{
			cout << "Type Error in Program"<< endl;
		}
		else 
		{	
			(yyval.exp) = new expression();	
			(yyval.exp)->type = "BOOL";
			(yyval.exp)->trueList = makelist(nextInstruction());
			(yyval.exp)->falseList = makelist(nextInstruction()+1);
			emit("GE", "", (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
			emit("GOTOOP", "");
		}
	}
#line 2425 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 53:
#line 529 "assgn6_19CS30033_19CS30036.y"
                                            { (yyval.exp)=(yyvsp[0].exp); }
#line 2431 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 54:
#line 531 "assgn6_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))                 
			cout << "Type Error in Program"<< endl;
		else 
		{
			convertBool2Int((yyvsp[-2].exp));                   
			convertBool2Int((yyvsp[0].exp));
			(yyval.exp) = new expression();
			(yyval.exp)->type = "BOOL";
			(yyval.exp)->trueList = makelist(nextInstruction());             
			(yyval.exp)->falseList = makelist(nextInstruction()+1); 
			emit("EQOP", "", (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);       
			emit("GOTOOP", "");				 
		}
	}
#line 2451 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 55:
#line 547 "assgn6_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc)) 
			cout << "Type Error in Program"<< endl;
		else 
		{			
			convertBool2Int((yyvsp[-2].exp));
			convertBool2Int((yyvsp[0].exp));
			(yyval.exp) = new expression();                  
			(yyval.exp)->type = "BOOL";
			(yyval.exp)->trueList = makelist(nextInstruction());
			(yyval.exp)->falseList = makelist(nextInstruction()+1);
			emit("NEOP", "", (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
			emit("GOTOOP", "");
		}
	}
#line 2471 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 56:
#line 564 "assgn6_19CS30033_19CS30036.y"
                                     { (yyval.exp)=(yyvsp[0].exp); }
#line 2477 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 57:
#line 566 "assgn6_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))          
			cout << "Type Error in Program"<< endl;
		else 
		{              
			convertBool2Int((yyvsp[-2].exp));                              
			convertBool2Int((yyvsp[0].exp));			
			(yyval.exp) = new expression();
			(yyval.exp)->type = "NONBOOL";
			(yyval.exp)->loc = gentemp(new symType("INT"));
			emit("BAND", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);        }
	}
#line 2494 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 58:
#line 580 "assgn6_19CS30033_19CS30036.y"
                                         { (yyval.exp)=(yyvsp[0].exp); }
#line 2500 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 59:
#line 582 "assgn6_19CS30033_19CS30036.y"
        {
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))     
			cout << "Type Error in Program"<< endl;
		else 
		{
			convertBool2Int((yyvsp[-2].exp));
			convertBool2Int((yyvsp[0].exp));
			(yyval.exp) = new expression();
			(yyval.exp)->type = "NONBOOL";
			(yyval.exp)->loc = gentemp(new symType("INT"));
			emit("XOR", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
		}
	}
#line 2518 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 60:
#line 597 "assgn6_19CS30033_19CS30036.y"
                                                 { (yyval.exp)=(yyvsp[0].exp); }
#line 2524 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 61:
#line 599 "assgn6_19CS30033_19CS30036.y"
        { 
		if(!checkType((yyvsp[-2].exp)->loc, (yyvsp[0].exp)->loc))    
		    cout << "Type Error in Program";
		else 
		{
			convertBool2Int((yyvsp[-2].exp));		
			convertBool2Int((yyvsp[0].exp));
			(yyval.exp) = new expression();
			(yyval.exp)->type = "NONBOOL";
			(yyval.exp)->loc = gentemp(new symType("INT"));
			emit("INOR", (yyval.exp)->loc->name, (yyvsp[-2].exp)->loc->name, (yyvsp[0].exp)->loc->name);
		} 
	}
#line 2542 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 62:
#line 614 "assgn6_19CS30033_19CS30036.y"
                                                 { (yyval.exp)=(yyvsp[0].exp); }
#line 2548 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 63:
#line 616 "assgn6_19CS30033_19CS30036.y"
        { 
		convertInt2Bool((yyvsp[0].exp));
		backpatch((yyvsp[-3].stmt)->nextList, nextInstruction());
		convertInt2Bool((yyvsp[-4].exp));                                   
		(yyval.exp) = new expression();                                  
		(yyval.exp)->type = "BOOL";
		backpatch((yyvsp[-4].exp)->trueList, (yyvsp[-1].instrNum));                            
		(yyval.exp)->trueList = (yyvsp[0].exp)->trueList;                            
		(yyval.exp)->falseList = merge((yyvsp[-4].exp)->falseList, (yyvsp[0].exp)->falseList);    
	}
#line 2563 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 64:
#line 628 "assgn6_19CS30033_19CS30036.y"
                                                { (yyval.exp)=(yyvsp[0].exp); }
#line 2569 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 65:
#line 630 "assgn6_19CS30033_19CS30036.y"
        { 
		convertInt2Bool((yyvsp[0].exp));
		backpatch((yyvsp[-3].stmt)->nextList, nextInstruction());
		convertInt2Bool((yyvsp[-4].exp));			  
		(yyval.exp) = new expression();			  
		(yyval.exp)->type = "BOOL";
		backpatch((yyvsp[-4].exp)->falseList, (yyvsp[-1].instrNum));		 
		(yyval.exp)->trueList = merge((yyvsp[-4].exp)->trueList, (yyvsp[0].exp)->trueList);		 
		(yyval.exp)->falseList = (yyvsp[0].exp)->falseList;		 	 
	}
#line 2584 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 66:
#line 642 "assgn6_19CS30033_19CS30036.y"
                                              {(yyval.exp)=(yyvsp[0].exp);}
#line 2590 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 67:
#line 644 "assgn6_19CS30033_19CS30036.y"
        {
		 
		(yyval.exp)->loc = gentemp((yyvsp[-4].exp)->loc->type);        
		(yyval.exp)->loc->update((yyvsp[-4].exp)->loc->type);
		emit("EQUAL", (yyval.exp)->loc->name, (yyvsp[0].exp)->loc->name);       
		list<int> l = makelist(nextInstruction());         
		emit("GOTOOP", "");               
		
		backpatch((yyvsp[-3].stmt)->nextList, nextInstruction());         
		emit("EQUAL", (yyval.exp)->loc->name, (yyvsp[-4].exp)->loc->name);
		list<int> m = makelist(nextInstruction());          
		l = merge(l, m);						 
		emit("GOTOOP", "");

		backpatch((yyvsp[-7].stmt)->nextList, nextInstruction());    
		convertInt2Bool((yyvsp[-8].exp));                    
		backpatch((yyvsp[-8].exp)->trueList, (yyvsp[-5].instrNum));            
		backpatch((yyvsp[-8].exp)->falseList, (yyvsp[-1].instrNum));           
		backpatch(l, nextInstruction());
	}
#line 2615 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 68:
#line 666 "assgn6_19CS30033_19CS30036.y"
                                              {(yyval.exp)=(yyvsp[0].exp);}
#line 2621 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 69:
#line 668 "assgn6_19CS30033_19CS30036.y"
        {
		if((yyvsp[-2].arr)->artype=="ARR")           
		{
			(yyvsp[0].exp)->loc = convert((yyvsp[0].exp)->loc, (yyvsp[-2].arr)->type->type);
			emit("ARRL", (yyvsp[-2].arr)->Sarr->name, (yyvsp[-2].arr)->loc->name, (yyvsp[0].exp)->loc->name);	
		}
		else if((yyvsp[-2].arr)->artype=="PTR")      
		{
			emit("PTRL", (yyvsp[-2].arr)->Sarr->name, (yyvsp[0].exp)->loc->name);	
		}
		else                               
		{
			(yyvsp[0].exp)->loc = convert((yyvsp[0].exp)->loc, (yyvsp[-2].arr)->Sarr->type->type);
			emit("EQUAL", (yyvsp[-2].arr)->Sarr->name, (yyvsp[0].exp)->loc->name);
		}
		(yyval.exp) = (yyvsp[0].exp);
	}
#line 2643 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 70:
#line 688 "assgn6_19CS30033_19CS30036.y"
                              {  }
#line 2649 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 71:
#line 689 "assgn6_19CS30033_19CS30036.y"
                           {  }
#line 2655 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 72:
#line 690 "assgn6_19CS30033_19CS30036.y"
                         {  }
#line 2661 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 73:
#line 691 "assgn6_19CS30033_19CS30036.y"
                         {  }
#line 2667 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 74:
#line 692 "assgn6_19CS30033_19CS30036.y"
                       {  }
#line 2673 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 75:
#line 693 "assgn6_19CS30033_19CS30036.y"
                        {  }
#line 2679 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 76:
#line 694 "assgn6_19CS30033_19CS30036.y"
                            {  }
#line 2685 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 77:
#line 695 "assgn6_19CS30033_19CS30036.y"
                             {  }
#line 2691 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 78:
#line 696 "assgn6_19CS30033_19CS30036.y"
                      {  }
#line 2697 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 79:
#line 697 "assgn6_19CS30033_19CS30036.y"
                      {  }
#line 2703 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 80:
#line 698 "assgn6_19CS30033_19CS30036.y"
                     { }
#line 2709 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 81:
#line 701 "assgn6_19CS30033_19CS30036.y"
                                  {  (yyval.exp)=(yyvsp[0].exp);  }
#line 2715 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 82:
#line 702 "assgn6_19CS30033_19CS30036.y"
                                                 {   }
#line 2721 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 83:
#line 705 "assgn6_19CS30033_19CS30036.y"
                                            {   }
#line 2727 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 84:
#line 708 "assgn6_19CS30033_19CS30036.y"
                                                                   {	}
#line 2733 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 85:
#line 709 "assgn6_19CS30033_19CS30036.y"
                                           {  	}
#line 2739 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 86:
#line 712 "assgn6_19CS30033_19CS30036.y"
                                                                       {	}
#line 2745 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 87:
#line 713 "assgn6_19CS30033_19CS30036.y"
                                  {	}
#line 2751 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 88:
#line 714 "assgn6_19CS30033_19CS30036.y"
                                                {	}
#line 2757 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 89:
#line 715 "assgn6_19CS30033_19CS30036.y"
                         {	}
#line 2763 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 90:
#line 716 "assgn6_19CS30033_19CS30036.y"
                                                {	}
#line 2769 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 91:
#line 717 "assgn6_19CS30033_19CS30036.y"
                         {	}
#line 2775 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 92:
#line 718 "assgn6_19CS30033_19CS30036.y"
                                                    {	}
#line 2781 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 93:
#line 719 "assgn6_19CS30033_19CS30036.y"
                             {	}
#line 2787 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 94:
#line 722 "assgn6_19CS30033_19CS30036.y"
                                      {	}
#line 2793 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 95:
#line 723 "assgn6_19CS30033_19CS30036.y"
                                                     {	}
#line 2799 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 96:
#line 726 "assgn6_19CS30033_19CS30036.y"
                            { (yyval.sym) = (yyvsp[0].sym); }
#line 2805 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 97:
#line 728 "assgn6_19CS30033_19CS30036.y"
        {
		if((yyvsp[0].sym)->val != "") 
			(yyvsp[-2].sym)->val=(yyvsp[0].sym)->val;         
		emit("EQUAL", (yyvsp[-2].sym)->name, (yyvsp[0].sym)->name);	
	}
#line 2815 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 98:
#line 735 "assgn6_19CS30033_19CS30036.y"
                                 {}
#line 2821 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 99:
#line 736 "assgn6_19CS30033_19CS30036.y"
               {}
#line 2827 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 100:
#line 737 "assgn6_19CS30033_19CS30036.y"
                   {}
#line 2833 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 101:
#line 738 "assgn6_19CS30033_19CS30036.y"
                  {}
#line 2839 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 102:
#line 741 "assgn6_19CS30033_19CS30036.y"
                       { varType="VOID"; }
#line 2845 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 103:
#line 742 "assgn6_19CS30033_19CS30036.y"
                 { varType="CHAR"; }
#line 2851 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 104:
#line 743 "assgn6_19CS30033_19CS30036.y"
                 { }
#line 2857 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 105:
#line 744 "assgn6_19CS30033_19CS30036.y"
                { varType="INT"; }
#line 2863 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 106:
#line 745 "assgn6_19CS30033_19CS30036.y"
                 {  }
#line 2869 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 107:
#line 746 "assgn6_19CS30033_19CS30036.y"
                  { varType="FLOAT"; }
#line 2875 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 108:
#line 747 "assgn6_19CS30033_19CS30036.y"
                   { }
#line 2881 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 109:
#line 748 "assgn6_19CS30033_19CS30036.y"
                   {  }
#line 2887 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 110:
#line 749 "assgn6_19CS30033_19CS30036.y"
                     { }
#line 2893 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 111:
#line 750 "assgn6_19CS30033_19CS30036.y"
                 {  }
#line 2899 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 112:
#line 751 "assgn6_19CS30033_19CS30036.y"
                    {  }
#line 2905 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 113:
#line 752 "assgn6_19CS30033_19CS30036.y"
                      {  }
#line 2911 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 114:
#line 753 "assgn6_19CS30033_19CS30036.y"
                           {  }
#line 2917 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 115:
#line 756 "assgn6_19CS30033_19CS30036.y"
                                                                        {  }
#line 2923 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 116:
#line 757 "assgn6_19CS30033_19CS30036.y"
                                                       {  }
#line 2929 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 117:
#line 760 "assgn6_19CS30033_19CS30036.y"
                                     {  }
#line 2935 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 118:
#line 761 "assgn6_19CS30033_19CS30036.y"
                                    {}
#line 2941 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 119:
#line 764 "assgn6_19CS30033_19CS30036.y"
                                                              {  }
#line 2947 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 120:
#line 765 "assgn6_19CS30033_19CS30036.y"
                                                              {  }
#line 2953 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 121:
#line 766 "assgn6_19CS30033_19CS30036.y"
                          {}
#line 2959 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 122:
#line 769 "assgn6_19CS30033_19CS30036.y"
                       {}
#line 2965 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 123:
#line 770 "assgn6_19CS30033_19CS30036.y"
                       {}
#line 2971 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 124:
#line 773 "assgn6_19CS30033_19CS30036.y"
                              {}
#line 2977 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 125:
#line 774 "assgn6_19CS30033_19CS30036.y"
                                             {}
#line 2983 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 126:
#line 777 "assgn6_19CS30033_19CS30036.y"
                         {}
#line 2989 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 127:
#line 778 "assgn6_19CS30033_19CS30036.y"
                                                {}
#line 2995 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 128:
#line 781 "assgn6_19CS30033_19CS30036.y"
                      {}
#line 3001 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 129:
#line 782 "assgn6_19CS30033_19CS30036.y"
                   {}
#line 3007 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 130:
#line 783 "assgn6_19CS30033_19CS30036.y"
                   {}
#line 3013 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 131:
#line 786 "assgn6_19CS30033_19CS30036.y"
                           {}
#line 3019 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 132:
#line 790 "assgn6_19CS30033_19CS30036.y"
        {
		symType *t = (yyvsp[-1].stype);
		while(t->ptr != NULL)
			t = t->ptr;            
		t->ptr = (yyvsp[0].sym)->type;                 
		(yyval.sym) = (yyvsp[0].sym)->update((yyvsp[-1].stype));                   
	}
#line 3031 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 133:
#line 797 "assgn6_19CS30033_19CS30036.y"
                            {   }
#line 3037 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 134:
#line 801 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.sym) = (yyvsp[0].sym)->update(new symType(varType));
		currS = (yyval.sym);	
	}
#line 3046 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 135:
#line 805 "assgn6_19CS30033_19CS30036.y"
                             { (yyval.sym) = (yyvsp[-1].sym); }
#line 3052 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 136:
#line 806 "assgn6_19CS30033_19CS30036.y"
                                                                              {}
#line 3058 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 137:
#line 807 "assgn6_19CS30033_19CS30036.y"
                                                        {}
#line 3064 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 138:
#line 809 "assgn6_19CS30033_19CS30036.y"
        {
		symType *t = (yyvsp[-3].sym)->type;
		symType *prev = NULL;
		while(t->type == "ARR") 
		{
			prev = t;	
			t = t->ptr;       
		}
		if(prev==NULL) 
		{
			int temp = atoi((yyvsp[-1].exp)->loc->val.c_str());       
			symType* s = new symType("ARR", (yyvsp[-3].sym)->type, temp);         
			(yyval.sym) = (yyvsp[-3].sym)->update(s);    
		}
		else 
		{
			prev->ptr =  new symType("ARR", t, atoi((yyvsp[-1].exp)->loc->val.c_str()));      
			(yyval.sym) = (yyvsp[-3].sym)->update((yyvsp[-3].sym)->type);
		}
	}
#line 3089 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 139:
#line 830 "assgn6_19CS30033_19CS30036.y"
        {
		symType *t = (yyvsp[-2].sym)->type;
		symType *prev = NULL;
		while(t->type == "ARR") 
		{
			prev = t;	
			t = t->ptr;          
		}
		if(prev==NULL) 
		{
			symType* s = new symType("ARR", (yyvsp[-2].sym)->type, 0);     
			(yyval.sym) = (yyvsp[-2].sym)->update(s);
		}
		else 
		{
			prev->ptr =  new symType("ARR", t, 0);
			(yyval.sym) = (yyvsp[-2].sym)->update((yyvsp[-2].sym)->type);
		}
	}
#line 3113 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 140:
#line 849 "assgn6_19CS30033_19CS30036.y"
                                                                                    {	}
#line 3119 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 141:
#line 850 "assgn6_19CS30033_19CS30036.y"
                                                                {	}
#line 3125 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 142:
#line 851 "assgn6_19CS30033_19CS30036.y"
                                                            {	}
#line 3131 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 143:
#line 852 "assgn6_19CS30033_19CS30036.y"
                                        {	}
#line 3137 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 144:
#line 854 "assgn6_19CS30033_19CS30036.y"
        {
		ST->name = (yyvsp[-4].sym)->name;	
		if((yyvsp[-4].sym)->type->type !="VOID") 
		{
			symbol *s = ST->lookup("return");          
			s->update((yyvsp[-4].sym)->type);		
		}
		(yyvsp[-4].sym)->nestedST = ST;
		(yyvsp[-4].sym)->cat = "function";
		ST->parent = globalST;
		changeTable(globalST);				 
		currS = (yyval.sym);
	}
#line 3155 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 145:
#line 867 "assgn6_19CS30033_19CS30036.y"
                                                    {	}
#line 3161 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 146:
#line 869 "assgn6_19CS30033_19CS30036.y"
        {  
		ST->name = (yyvsp[-3].sym)->name;
		if((yyvsp[-3].sym)->type->type != "VOID") 
		{	
			symbol *s = ST->lookup("return");
			s->update((yyvsp[-3].sym)->type);
		}
		(yyvsp[-3].sym)->nestedST=ST;
		(yyvsp[-3].sym)->cat = "function";

		ST->parent = globalST;
		changeTable(globalST);				 
		currS = (yyval.sym);
	}
#line 3180 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 147:
#line 885 "assgn6_19CS30033_19CS30036.y"
                                {}
#line 3186 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 148:
#line 886 "assgn6_19CS30033_19CS30036.y"
                              {}
#line 3192 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 149:
#line 890 "assgn6_19CS30033_19CS30036.y"
        { 
		(yyval.stype) = new symType("PTR");    
	}
#line 3200 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 150:
#line 894 "assgn6_19CS30033_19CS30036.y"
        { 
		(yyval.stype) = new symType("PTR",(yyvsp[0].stype));
	}
#line 3208 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 151:
#line 899 "assgn6_19CS30033_19CS30036.y"
                                      {  }
#line 3214 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 152:
#line 900 "assgn6_19CS30033_19CS30036.y"
                                               {  }
#line 3220 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 153:
#line 903 "assgn6_19CS30033_19CS30036.y"
                                      {  }
#line 3226 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 154:
#line 904 "assgn6_19CS30033_19CS30036.y"
                                          {  }
#line 3232 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 155:
#line 907 "assgn6_19CS30033_19CS30036.y"
                                        {  }
#line 3238 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 156:
#line 908 "assgn6_19CS30033_19CS30036.y"
                                                        {  }
#line 3244 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 157:
#line 912 "assgn6_19CS30033_19CS30036.y"
        {
        (yyvsp[0].sym)->cat = "param";
	}
#line 3252 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 158:
#line 915 "assgn6_19CS30033_19CS30036.y"
                                    {  }
#line 3258 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 159:
#line 918 "assgn6_19CS30033_19CS30036.y"
                                {  }
#line 3264 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 160:
#line 919 "assgn6_19CS30033_19CS30036.y"
                                             {  }
#line 3270 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 161:
#line 922 "assgn6_19CS30033_19CS30036.y"
                                      {  }
#line 3276 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 162:
#line 925 "assgn6_19CS30033_19CS30036.y"
                                     { (yyval.sym)=(yyvsp[0].exp)->loc; }
#line 3282 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 163:
#line 926 "assgn6_19CS30033_19CS30036.y"
                                    {  }
#line 3288 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 164:
#line 927 "assgn6_19CS30033_19CS30036.y"
                                          {  }
#line 3294 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 165:
#line 930 "assgn6_19CS30033_19CS30036.y"
                                               {  }
#line 3300 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 166:
#line 931 "assgn6_19CS30033_19CS30036.y"
                                                               {  }
#line 3306 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 167:
#line 934 "assgn6_19CS30033_19CS30036.y"
                        {}
#line 3312 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 168:
#line 935 "assgn6_19CS30033_19CS30036.y"
                        {}
#line 3318 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 169:
#line 938 "assgn6_19CS30033_19CS30036.y"
                                      {  }
#line 3324 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 170:
#line 941 "assgn6_19CS30033_19CS30036.y"
                               {  }
#line 3330 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 171:
#line 942 "assgn6_19CS30033_19CS30036.y"
                                       {  }
#line 3336 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 172:
#line 945 "assgn6_19CS30033_19CS30036.y"
                                         {  }
#line 3342 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 173:
#line 946 "assgn6_19CS30033_19CS30036.y"
                         {  }
#line 3348 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 174:
#line 951 "assgn6_19CS30033_19CS30036.y"
                                 {  }
#line 3354 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 175:
#line 952 "assgn6_19CS30033_19CS30036.y"
                                     { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3360 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 176:
#line 954 "assgn6_19CS30033_19CS30036.y"
                { 
		        (yyval.stmt)=new statement();             
		        (yyval.stmt)->nextList=(yyvsp[0].exp)->nextList; 
	        }
#line 3369 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 177:
#line 958 "assgn6_19CS30033_19CS30036.y"
                                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3375 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 178:
#line 959 "assgn6_19CS30033_19CS30036.y"
                                        { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3381 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 179:
#line 960 "assgn6_19CS30033_19CS30036.y"
                                   { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3387 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 180:
#line 964 "assgn6_19CS30033_19CS30036.y"
                    {  
                        (yyval.stmt) = new statement();
					}
#line 3395 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 181:
#line 967 "assgn6_19CS30033_19CS30036.y"
                                                                 { (yyval.stmt) = new statement(); }
#line 3401 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 182:
#line 969 "assgn6_19CS30033_19CS30036.y"
                                        {
					   (yyval.stmt) = new statement();
					}
#line 3409 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 183:
#line 975 "assgn6_19CS30033_19CS30036.y"
        { 
		(yyval.stmt) = (yyvsp[-1].stmt);
	}
#line 3417 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 184:
#line 979 "assgn6_19CS30033_19CS30036.y"
        { 
		(yyval.stmt) = new statement();
	}
#line 3425 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 185:
#line 984 "assgn6_19CS30033_19CS30036.y"
                              { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3431 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 186:
#line 986 "assgn6_19CS30033_19CS30036.y"
        { 
		(yyval.stmt)=(yyvsp[0].stmt);
		backpatch((yyvsp[-2].stmt)->nextList,(yyvsp[-1].instrNum));      
	}
#line 3440 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 187:
#line 992 "assgn6_19CS30033_19CS30036.y"
                          { (yyval.stmt)=new statement(); }
#line 3446 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 188:
#line 993 "assgn6_19CS30033_19CS30036.y"
                      { (yyval.stmt)=(yyvsp[0].stmt); }
#line 3452 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 189:
#line 996 "assgn6_19CS30033_19CS30036.y"
                                           {(yyval.exp)=(yyvsp[-1].exp);}
#line 3458 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 190:
#line 997 "assgn6_19CS30033_19CS30036.y"
                    {(yyval.exp) = new expression();}
#line 3464 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 191:
#line 1001 "assgn6_19CS30033_19CS30036.y"
        {
		backpatch((yyvsp[-4].stmt)->nextList, nextInstruction());         
		convertInt2Bool((yyvsp[-5].exp));          
		(yyval.stmt) = new statement();         
		backpatch((yyvsp[-5].exp)->trueList, (yyvsp[-2].instrNum));         
		list<int> temp = merge((yyvsp[-5].exp)->falseList, (yyvsp[-1].stmt)->nextList);    
		(yyval.stmt)->nextList = merge((yyvsp[0].stmt)->nextList, temp);
	}
#line 3477 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 192:
#line 1010 "assgn6_19CS30033_19CS30036.y"
        {
		backpatch((yyvsp[-7].stmt)->nextList, nextInstruction());		 
		convertInt2Bool((yyvsp[-8].exp));         
		(yyval.stmt) = new statement();        
		backpatch((yyvsp[-8].exp)->trueList, (yyvsp[-5].instrNum));     
		backpatch((yyvsp[-8].exp)->falseList, (yyvsp[-1].instrNum));
		list<int> temp = merge((yyvsp[-4].stmt)->nextList, (yyvsp[-3].stmt)->nextList);        
		(yyval.stmt)->nextList = merge((yyvsp[0].stmt)->nextList,temp);	
	}
#line 3491 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 193:
#line 1019 "assgn6_19CS30033_19CS30036.y"
                                              {	}
#line 3497 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 194:
#line 1023 "assgn6_19CS30033_19CS30036.y"
        {	
		(yyval.stmt) = new statement();     
		convertInt2Bool((yyvsp[-3].exp));      
		backpatch((yyvsp[0].stmt)->nextList, (yyvsp[-5].instrNum));	 
		backpatch((yyvsp[-3].exp)->trueList, (yyvsp[-1].instrNum));	 
		(yyval.stmt)->nextList = (yyvsp[-3].exp)->falseList;    
		 
		string str=to_string((yyvsp[-5].instrNum));		
		emit("GOTOOP",str);	
	}
#line 3512 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 195:
#line 1034 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.stmt) = new statement();      
		convertInt2Bool((yyvsp[-2].exp));       
		backpatch((yyvsp[-2].exp)->trueList, (yyvsp[-7].instrNum));						 
		backpatch((yyvsp[-6].stmt)->nextList, (yyvsp[-5].instrNum));						 
		(yyval.stmt)->nextList = (yyvsp[-2].exp)->falseList;                        
	}
#line 3524 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 196:
#line 1042 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.stmt) = new statement();		  
		convertInt2Bool((yyvsp[-3].exp));   
		backpatch((yyvsp[-3].exp)->trueList, (yyvsp[-1].instrNum));	 
		backpatch((yyvsp[0].stmt)->nextList, (yyvsp[-4].instrNum));	 

		string str=to_string((yyvsp[-4].instrNum));

		emit("GOTOOP", str);				 
		(yyval.stmt)->nextList = (yyvsp[-3].exp)->falseList;	 
	}
#line 3540 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 197:
#line 1054 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.stmt) = new statement();		  
		convertInt2Bool((yyvsp[-6].exp));   
		backpatch((yyvsp[-6].exp)->trueList, (yyvsp[-1].instrNum));	 
		backpatch((yyvsp[-3].stmt)->nextList, (yyvsp[-7].instrNum));	 
		backpatch((yyvsp[0].stmt)->nextList, (yyvsp[-5].instrNum));

		string str=to_string((yyvsp[-5].instrNum));
		emit("GOTOOP", str);				 
		(yyval.stmt)->nextList = (yyvsp[-6].exp)->falseList;	 
	}
#line 3556 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 198:
#line 1067 "assgn6_19CS30033_19CS30036.y"
                                          { (yyval.stmt) = new statement(); }
#line 3562 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 199:
#line 1068 "assgn6_19CS30033_19CS30036.y"
                             { (yyval.stmt) = new statement(); }
#line 3568 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 200:
#line 1069 "assgn6_19CS30033_19CS30036.y"
                          { (yyval.stmt) = new statement(); }
#line 3574 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 201:
#line 1071 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.stmt) = new statement();	
		emit("RETURN", (yyvsp[-1].exp)->loc->name);                
	}
#line 3583 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 202:
#line 1076 "assgn6_19CS30033_19CS30036.y"
        {
		(yyval.stmt) = new statement();	
		emit("RETURN", "");                          
	}
#line 3592 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 203:
#line 1084 "assgn6_19CS30033_19CS30036.y"
                                       { }
#line 3598 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 204:
#line 1085 "assgn6_19CS30033_19CS30036.y"
                                                { }
#line 3604 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 205:
#line 1088 "assgn6_19CS30033_19CS30036.y"
                                          {  }
#line 3610 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 206:
#line 1089 "assgn6_19CS30033_19CS30036.y"
                        {  }
#line 3616 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 207:
#line 1092 "assgn6_19CS30033_19CS30036.y"
                                                                                                       {}
#line 3622 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 208:
#line 1094 "assgn6_19CS30033_19CS30036.y"
        {
		emit("FUNCEND", ST->name);
		ST->parent = globalST;
		changeTable(globalST);
	}
#line 3632 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 209:
#line 1101 "assgn6_19CS30033_19CS30036.y"
                                {  }
#line 3638 "assgn6_19CS30033_19CS30036.tab.c"
    break;

  case 210:
#line 1102 "assgn6_19CS30033_19CS30036.y"
                                          {  }
#line 3644 "assgn6_19CS30033_19CS30036.tab.c"
    break;


#line 3648 "assgn6_19CS30033_19CS30036.tab.c"

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
#line 1104 "assgn6_19CS30033_19CS30036.y"


void yyerror(string s){
    cout << "Error: " << s << endl;
}
