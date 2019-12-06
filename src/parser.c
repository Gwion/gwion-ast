/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
#define YYBISON_VERSION "3.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         gwion_parse
#define yylex           gwion_lex
#define yyerror         gwion_error
#define yydebug         gwion_debug
#define yynerrs         gwion_nerrs


/* First part of user prologue.  */
#line 7 "src/gwion.y"

#include <math.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "bison_compat.h"
#include "parser.h"
#include "lexer.h"

#define YYERROR_VERBOSE
#define YYMALLOC xmalloc
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))
#define GET_LOC(a) loc_cpy(mpool(arg), a)
ANN void gwion_error(loc_t, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);

#line 94 "src/parser.c"

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
#ifndef YY_GWION_INCLUDE_PARSER_H_INCLUDED
# define YY_GWION_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int gwion_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    COMMA = 259,
    LPAREN = 260,
    RPAREN = 261,
    LBRACK = 262,
    RBRACK = 263,
    LBRACE = 264,
    RBRACE = 265,
    PERCENTPAREN = 266,
    SHARPPAREN = 267,
    ATPAREN = 268,
    FUNCTION = 269,
    IF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    UNTIL = 274,
    LOOP = 275,
    FOR = 276,
    GOTO = 277,
    MATCH = 278,
    CASE = 279,
    WHEN = 280,
    WHERE = 281,
    ENUM = 282,
    TRETURN = 283,
    BREAK = 284,
    CONTINUE = 285,
    CLASS = 286,
    STATIC = 287,
    GLOBAL = 288,
    PRIVATE = 289,
    PROTECT = 290,
    EXTENDS = 291,
    DOT = 292,
    OPERATOR = 293,
    TYPEDEF = 294,
    NOELSE = 295,
    UNION = 296,
    CONSTT = 297,
    AUTO = 298,
    PASTE = 299,
    ELLIPSE = 300,
    RARROW = 301,
    BACKSLASH = 302,
    BACKTICK = 303,
    NUM = 304,
    FLOATT = 305,
    ID = 306,
    STRING_LIT = 307,
    CHAR_LIT = 308,
    PP_COMMENT = 309,
    PP_INCLUDE = 310,
    PP_DEFINE = 311,
    PP_PRAGMA = 312,
    PP_UNDEF = 313,
    PP_IFDEF = 314,
    PP_IFNDEF = 315,
    PP_ELSE = 316,
    PP_ENDIF = 317,
    PP_NL = 318,
    PLUS = 319,
    PLUSPLUS = 320,
    MINUS = 321,
    MINUSMINUS = 322,
    TIMES = 323,
    DIVIDE = 324,
    PERCENT = 325,
    DOLLAR = 326,
    QUESTION = 327,
    COLON = 328,
    COLONCOLON = 329,
    QUESTIONCOLON = 330,
    ATSYM = 331,
    GTPAREN = 332,
    LTPAREN = 333,
    NEW = 334,
    SPORK = 335,
    FORK = 336,
    TYPEOF = 337,
    L_HACK = 338,
    R_HACK = 339,
    AND = 340,
    EQ = 341,
    GE = 342,
    GT = 343,
    LE = 344,
    LT = 345,
    NEQ = 346,
    SHIFT_LEFT = 347,
    SHIFT_RIGHT = 348,
    S_AND = 349,
    S_OR = 350,
    S_XOR = 351,
    OR = 352,
    LTMPL = 353,
    RTMPL = 354,
    TILDA = 355,
    EXCLAMATION = 356,
    DYNOP = 357,
    UMINUS = 358,
    UTIMES = 359
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define COMMA 259
#define LPAREN 260
#define RPAREN 261
#define LBRACK 262
#define RBRACK 263
#define LBRACE 264
#define RBRACE 265
#define PERCENTPAREN 266
#define SHARPPAREN 267
#define ATPAREN 268
#define FUNCTION 269
#define IF 270
#define ELSE 271
#define WHILE 272
#define DO 273
#define UNTIL 274
#define LOOP 275
#define FOR 276
#define GOTO 277
#define MATCH 278
#define CASE 279
#define WHEN 280
#define WHERE 281
#define ENUM 282
#define TRETURN 283
#define BREAK 284
#define CONTINUE 285
#define CLASS 286
#define STATIC 287
#define GLOBAL 288
#define PRIVATE 289
#define PROTECT 290
#define EXTENDS 291
#define DOT 292
#define OPERATOR 293
#define TYPEDEF 294
#define NOELSE 295
#define UNION 296
#define CONSTT 297
#define AUTO 298
#define PASTE 299
#define ELLIPSE 300
#define RARROW 301
#define BACKSLASH 302
#define BACKTICK 303
#define NUM 304
#define FLOATT 305
#define ID 306
#define STRING_LIT 307
#define CHAR_LIT 308
#define PP_COMMENT 309
#define PP_INCLUDE 310
#define PP_DEFINE 311
#define PP_PRAGMA 312
#define PP_UNDEF 313
#define PP_IFDEF 314
#define PP_IFNDEF 315
#define PP_ELSE 316
#define PP_ENDIF 317
#define PP_NL 318
#define PLUS 319
#define PLUSPLUS 320
#define MINUS 321
#define MINUSMINUS 322
#define TIMES 323
#define DIVIDE 324
#define PERCENT 325
#define DOLLAR 326
#define QUESTION 327
#define COLON 328
#define COLONCOLON 329
#define QUESTIONCOLON 330
#define ATSYM 331
#define GTPAREN 332
#define LTPAREN 333
#define NEW 334
#define SPORK 335
#define FORK 336
#define TYPEOF 337
#define L_HACK 338
#define R_HACK 339
#define AND 340
#define EQ 341
#define GE 342
#define GT 343
#define LE 344
#define LT 345
#define NEQ 346
#define SHIFT_LEFT 347
#define SHIFT_RIGHT 348
#define S_AND 349
#define S_OR 350
#define S_XOR 351
#define OR 352
#define LTMPL 353
#define RTMPL 354
#define TILDA 355
#define EXCLAMATION 356
#define DYNOP 357
#define UMINUS 358
#define UTIMES 359

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "src/gwion.y"

  char* sval;
  int ival;
  long unsigned int lval;
  ae_flag flag;
  m_float fval;
  Symbol sym;
  Array_Sub array_sub;
  Range* range;
  Var_Decl var_decl;
  Var_Decl_List var_decl_list;
  Type_Decl* type_decl;
  Exp   exp;
  struct Func_Base_ *func_base;
  Stmt stmt;
  Stmt_List stmt_list;
  Arg_List arg_list;
  Decl_List decl_list;
  Func_Def func_def;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section* section;
  ID_List id_list;
  Type_List type_list;
  Class_Def class_def;
  Ast ast;

#line 375 "src/parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int gwion_parse (Scanner* arg);

#endif /* !YY_GWION_INCLUDE_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  193
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1952

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  107
/* YYNRULES -- Number of rules.  */
#define YYNRULES  261
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  436

#define YYUNDEFTOK  2
#define YYMAXUTOK   360

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   140,   140,   141,   144,   145,   149,   150,   151,   152,
     153,   154,   155,   159,   165,   165,   167,   167,   170,   171,
     174,   174,   175,   175,   177,   177,   179,   181,   184,   191,
     198,   198,   200,   204,   208,   209,   209,   210,   211,   211,
     218,   219,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   248,   249,   256,   256,   259,   262,   264,   266,   266,
     269,   277,   278,   280,   280,   282,   290,   291,   294,   296,
     298,   300,   302,   304,   309,   311,   316,   317,   318,   321,
     322,   326,   327,   330,   330,   332,   332,   334,   334,   336,
     336,   336,   339,   340,   341,   345,   346,   347,   351,   352,
     353,   356,   356,   357,   357,   358,   360,   361,   362,   362,
     364,   364,   365,   365,   366,   366,   368,   368,   370,   371,
     374,   375,   378,   379,   380,   383,   383,   386,   389,   389,
     389,   389,   389,   392,   393,   395,   397,   399,   409,   409,
     410,   410,   413,   414,   418,   419,   423,   426,   427,   429,
     430,   433,   453,   454,   457,   458,   460,   461,   462,   463,
     464,   465,   467,   467,   468,   468,   468,   468,   469,   469,
     470,   470,   471,   471,   471,   473,   473,   474,   475,   477,
     480,   480,   481,   481,   482,   482,   483,   483,   484,   484,
     485,   485,   486,   486,   487,   487,   488,   488,   489,   489,
     490,   490,   492,   492,   494,   494,   497,   497,   497,   498,
     498,   498,   498,   501,   501,   502,   503,   504,   507,   508,
     509,   509,   512,   513,   516,   516,   518,   518,   520,   521,
     522,   524,   526,   529,   530,   533,   534,   535,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\";\"", "\",\"", "\"(\"", "\")\"",
  "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"%(\"", "\"#(\"", "\"@(\"",
  "\"fun\"", "\"if\"", "\"else\"", "\"while\"", "\"do\"", "\"until\"",
  "\"repeat\"", "\"for\"", "\"goto\"", "\"match\"", "\"case\"", "\"when\"",
  "\"where\"", "\"enum\"", "\"return\"", "\"break\"", "\"continue\"",
  "\"class\"", "\"static\"", "\"global\"", "\"private\"", "\"protect\"",
  "\"extends\"", "\".\"", "\"operator\"", "\"typedef\"", "NOELSE",
  "\"union\"", "\"const\"", "\"auto\"", "\"##\"", "\"...\"", "\"->\"",
  "\"\\\\\"", "\"`\"", "\"<integer>\"", "FLOATT", "\"<identifier>\"",
  "\"<litteral string>\"", "\"<litteral char>\"", "\"<comment>\"",
  "\"#include\"", "\"#define\"", "\"#pragma\"", "\"#undef\"", "\"#ifdef\"",
  "\"#ifndef\"", "\"#else\"", "\"#if\"", "\"\\n\"", "\"+\"", "\"++\"",
  "\"-\"", "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"",
  "\"::\"", "\"?:\"", "\"@\"", "\">(\"", "\"<(\"", "\"new\"", "\"spork\"",
  "\"fork\"", "\"typeof\"", "\"<<<\"", "\">>>\"", "\"&&\"", "\"==\"",
  "\">=\"", "\">\"", "\"<=\"", "\"<\"", "\"!=\"", "\"<<\"", "\">>\"",
  "\"&\"", "\"|\"", "\"^\"", "\"||\"", "\"<~\"", "\"~>\"", "\"~\"",
  "\"!\"", "\"<dynamic_operator>\"", "UMINUS", "UTIMES", "\"=\"",
  "$accept", "prg", "ast", "section", "class_def", "class_ext",
  "class_body", "class_body2", "id_list", "dot_decl", "stmt_list",
  "fptr_base", "fdef_base", "fptr_def", "type_def", "type_decl_array",
  "type_decl_exp", "type_decl_empty", "arg", "arg_list", "fptr_arg",
  "fptr_list", "code_stmt", "stmt_pp", "stmt", "id", "opt_id", "enum_def",
  "label_stmt", "goto_stmt", "when_exp", "match_case_stmt", "match_list",
  "where_stmt", "match_stmt", "flow", "loop_stmt", "selection_stmt",
  "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template",
  "op", "array_exp", "array_empty", "range", "array", "decl_exp2",
  "decl_exp", "union_exp", "decl_exp3", "func_args", "fptr_args",
  "arg_type", "decl_template", "storage_flag", "access_flag", "flag",
  "opt_flag", "func_def_base", "op_op", "func_def", "atsym", "decl_flag",
  "type_decl000", "type_decl00", "type_decl0", "type_decl", "decl_list",
  "union_def", "var_decl_list", "var_decl", "arg_decl", "fptr_arg_decl",
  "eq_op", "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp",
  "typeof_exp", "cast_exp", "unary_op", "unary_exp", "lambda_list",
  "lambda_arg", "type_list", "call_paren", "post_op", "dot_exp",
  "post_exp", "vec_type", "prim_exp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360
};
# endif

#define YYPACT_NINF -333

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-333)))

#define YYTABLE_NINF -99

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     626,  -333,  1063,   984,   725,  -333,  -333,  -333,   123,    29,
    -333,   824,  -333,    55,    68,    26,  1616,   123,  1616,  -333,
    -333,   -18,  -333,  -333,  -333,  -333,   116,   123,   123,   -24,
     -20,    26,  1616,  -333,  -333,    40,  -333,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,    26,  1616,    15,    80,    80,    87,  1616,    15,
    -333,  -333,    96,  -333,   626,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,   824,     2,  -333,  -333,  -333,  -333,    95,  -333,
    -333,   102,  -333,  -333,   109,    16,  -333,   120,  -333,  -333,
    -333,  -333,  -333,    74,  -333,    15,  -333,  -333,  -333,   -20,
    -333,    26,  -333,  -333,    50,    46,    44,    47,    48,     7,
      83,    67,    24,   -27,    75,  -333,    81,  1695,  -333,    80,
    -333,  -333,    39,  1616,  -333,  -333,    65,   155,  1851,  -333,
    1616,    14,  -333,   153,  -333,    15,  1616,   121,  1616,   454,
     161,   156,   165,   174,    26,   123,  -333,  -333,  -333,  -333,
    -333,    26,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,    15,  -333,  -333,  -333,  -333,    15,    15,   -18,
     132,  -333,  -333,  -333,  -333,    26,    26,  -333,   139,    26,
     185,   189,   188,  -333,  -333,   190,  -333,  -333,  1616,   114,
    -333,   195,   101,  -333,  -333,  -333,    26,  -333,  1616,  -333,
    -333,  1616,  1616,  1142,  -333,  -333,  -333,  -333,   190,  -333,
     206,  1616,  1772,  1772,  1772,  1772,  1772,  1772,  -333,  -333,
    1772,  1772,  1772,  1772,  1772,  1851,    15,    15,  -333,  -333,
    -333,  1221,    26,    15,   223,  -333,  -333,  -333,   205,  -333,
     221,   190,  1300,  -333,    22,    26,   224,  1616,   225,   -20,
     905,  -333,   210,    26,  -333,   136,    26,    15,   232,   233,
      22,    26,    26,  -333,  -333,  -333,  -333,  -333,    26,  -333,
    1379,  -333,   234,  -333,    15,    10,  -333,   235,  -333,  -333,
    -333,   231,  -333,    26,  -333,   169,  -333,    46,    44,    47,
      48,     7,    83,    67,    24,   -27,    75,    81,  -333,   238,
    -333,   145,  1458,  -333,  -333,  -333,  -333,   120,  -333,   239,
    -333,   240,    80,   -18,   824,   245,   824,    26,  1537,  1616,
     210,   241,   242,  -333,   213,   249,    15,    15,  -333,   -18,
    -333,   246,  -333,  -333,  -333,  -333,   824,  -333,  1772,    15,
    -333,  -333,   244,  -333,  -333,  -333,   249,   243,  -333,  -333,
     187,   824,   252,   247,  -333,   237,    26,    15,   255,    15,
     259,   262,    26,   263,   143,   -24,  -333,  -333,   264,  -333,
    -333,   824,  1616,  -333,   824,  1616,   198,   824,  -333,   270,
    -333,   626,   272,  -333,    80,    15,   190,  -333,    80,  -333,
      15,  -333,   274,    26,   268,    80,  -333,     8,  -333,  -333,
     824,  -333,  -333,   626,   269,  -333,    15,  -333,   275,  -333,
     120,  -333,   276,  -333,    26,   -24,  -333,    26,  -333,   824,
    -333,  -333,  -333,  -333,    80,    15,   190,  -333,  -333,   279,
    -333,  -333,  -333,  -333,   120,  -333
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,    92,     0,     0,     0,   246,   245,   247,   135,     0,
      76,     0,    77,     0,     0,     0,     0,   135,    86,    87,
      88,   127,   128,   129,   130,   131,     0,   135,   135,     0,
     148,   231,     0,   249,   250,    61,   251,   252,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   236,   216,
     237,   217,     0,     0,     0,   220,   221,     0,     0,     0,
     222,   219,     0,     2,     4,     8,   152,     6,    11,    12,
      55,    60,    24,   248,     9,    56,    57,    58,     0,    53,
      54,     0,    59,    52,     0,    93,   111,   112,   254,   253,
      95,   118,   114,   133,   132,     0,   143,     7,   154,   148,
     157,     0,    10,   113,   187,   190,   192,   194,   196,   198,
     200,   202,   204,   206,   208,   210,   212,     0,   214,     0,
     218,   244,   223,     0,   239,   261,   248,     0,     0,   105,
       0,     0,    40,     0,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   135,   180,   181,   182,   183,
     184,     0,    99,   177,   175,   176,   174,   100,   178,   179,
     101,   138,     0,   140,   139,   142,   141,     0,     0,   127,
      22,   158,   149,   150,   151,     0,   228,   230,     0,     0,
       0,    20,     0,    32,   225,    30,   226,   227,     0,     0,
      33,   232,     0,     1,     5,    25,     0,    66,     0,    90,
      91,     0,     0,     0,   107,   134,   119,   156,   164,   116,
     162,   186,     0,     0,     0,     0,     0,     0,   172,   173,
       0,     0,     0,     0,     0,     0,     0,     0,   248,   224,
     260,     0,     0,     0,     0,   240,   241,   243,     0,   259,
       0,   102,     0,    41,     0,     0,     0,     0,     0,   148,
       0,    67,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,    64,   115,   229,   153,    62,   256,     0,   257,
       0,    31,     0,   258,     0,     0,    23,     0,    94,    96,
     106,     0,   165,     0,   185,     0,   189,   191,   193,   195,
     197,   199,   201,   203,   205,   207,   209,   211,   215,     0,
     238,     0,     0,   242,   255,   110,   103,   104,   109,     0,
     125,     0,     0,   127,     0,     0,     0,     0,     0,     0,
      71,     0,     0,   126,    15,     0,     0,     0,    28,   127,
      63,     0,    21,   213,   233,   155,     0,   163,     0,     0,
      97,   235,     0,   108,   124,   137,     0,    84,    79,    83,
       0,     0,     0,    69,    72,    74,    64,     0,     0,   121,
       0,     0,     0,     0,     0,     0,    78,   188,     0,   234,
      27,     0,     0,    80,     0,     0,     0,     0,    75,     0,
      14,    17,    35,   120,     0,     0,   166,    34,     0,    29,
     123,    26,     0,     0,     0,     0,    85,     0,    81,    68,
       0,    73,    65,    18,     0,    16,     0,   147,     0,   168,
     167,   145,    38,   122,    64,   159,   117,    64,   146,     0,
      70,    19,    13,    36,     0,     0,   169,    37,   160,     0,
      82,   144,    39,   171,   170,   161
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -333,  -333,   220,  -332,  -333,  -333,  -333,  -118,  -134,    90,
      -2,  -333,  -333,  -333,  -333,   -48,   -70,  -112,  -294,  -116,
    -333,  -133,    13,  -333,    -8,     0,  -331,  -333,  -333,  -333,
    -333,  -333,   -29,  -333,  -333,   157,  -333,  -333,  -333,  -333,
    -127,   297,   -79,  -333,   271,   -40,  -236,   173,  -146,    94,
     203,  -333,  -333,   -44,  -333,    43,  -160,  -333,   211,     9,
      -9,  -333,  -333,  -333,    56,   208,    35,  -330,   282,   -38,
    -103,  -333,  -162,  -333,   -75,  -333,  -333,   294,   296,   298,
     304,  -333,  -205,  -333,   110,   117,   118,   119,   115,   122,
     113,   126,   130,   125,  -333,   112,     1,   -77,   164,  -333,
    -195,  -333,     4,  -333,  -333,  -333,  -333
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    62,    63,    64,    65,   358,   404,   405,   180,    66,
      67,   260,   244,    68,    69,   190,   184,   191,   382,   383,
     412,   413,    70,    71,    72,   126,   331,    74,    75,    76,
     376,   320,   321,   378,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   234,   202,    86,    87,    88,    89,    90,
      91,   392,    92,   360,   391,   312,   145,    93,    94,    95,
     135,    96,   162,    97,   174,   175,    98,    99,   100,   101,
     394,   102,   209,   210,   387,   427,   220,   221,   222,   223,
     224,   285,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   128,   118,   177,   119,
     192,   303,   120,   121,   122,   123,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,   117,   133,   137,    73,   307,   183,   286,   142,   262,
     255,    73,   250,   263,   419,   140,   185,   134,   168,   169,
     201,   185,   241,   245,    32,   379,   134,    35,   310,   170,
     167,   176,   361,   363,   136,   393,   134,   134,   301,   271,
     229,   148,   149,   150,   -98,   368,   231,   204,   196,   403,
     258,   229,   181,   -22,   170,   259,   172,    29,    32,   170,
     138,    35,   282,    32,    73,   117,    35,   311,   186,   187,
     195,   403,    73,   139,    59,   197,   232,    35,   -22,   334,
     144,   173,   235,   426,   179,   393,   429,   242,   146,     4,
     147,   408,   188,   218,   152,   170,   193,   185,   219,   157,
     198,   208,   152,   -22,    48,   199,    50,   157,    24,    25,
     160,   196,   200,    59,   298,   299,   -22,   228,   160,   322,
     261,   337,   211,   318,   185,   212,   237,   203,   228,   185,
     185,   214,   230,   367,   332,   170,   256,   233,    10,   215,
      12,   -22,   217,   216,   181,   325,   389,   213,   390,   225,
     410,   257,   226,   346,   134,    22,    23,    24,    25,   158,
     159,   239,   170,   243,   251,   252,   -22,   170,   170,   364,
     153,   154,   155,   156,   253,   208,   176,   254,   196,   266,
     146,    48,   147,    50,   148,   149,   150,   265,   185,   185,
     434,   267,   151,   268,   269,   185,   170,   270,   273,   274,
     275,   306,   152,   153,   154,   155,   156,   157,   158,   159,
     283,   304,   228,   228,   228,   228,   228,   228,   160,   185,
     228,   228,   228,   228,   228,   228,   170,   170,   302,   305,
     314,   316,   300,   170,   319,   323,   185,   326,   327,   241,
     333,   336,   338,   339,   340,   313,   344,   343,   348,   357,
     369,   355,   356,   181,   359,   365,   324,   170,   374,   371,
     372,   329,   330,   377,   381,   384,   385,   204,   181,   388,
     395,   400,   375,   402,   170,   170,   406,   415,   417,   422,
     425,   424,   435,   208,   194,   421,   276,   380,   362,   362,
     423,   354,   432,   397,   247,   236,   279,   161,   206,   127,
     131,   362,   370,   328,   205,   317,   347,   207,   349,   183,
     335,   171,   428,   141,    73,   143,    73,   350,   416,   185,
     163,   362,   164,   287,   165,   345,   170,   170,   366,   178,
     166,   288,   291,   289,   293,   290,    73,   297,   228,   170,
     264,     0,   292,   373,     0,     0,   409,   362,   294,   296,
     182,    73,   414,   295,     0,   189,   330,   170,     0,   170,
       0,     0,   386,   396,     0,   170,   398,     0,   362,   401,
     204,    73,     0,     0,    73,     0,     0,    73,     0,     0,
       0,    73,   117,     0,     0,   170,   433,   414,     0,     0,
     170,     0,     0,   386,   204,     0,     0,   407,   420,     0,
      73,   411,     0,    73,   117,     0,   170,     0,   418,     0,
       0,   430,     0,     0,   330,   170,     0,   330,     0,    73,
     238,     0,     0,     0,     0,   170,     0,   240,     0,     0,
       0,     0,     0,   246,     0,   248,     0,   431,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,     0,     0,     0,     5,     6,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   272,    22,    23,    24,    25,
       0,     0,     0,     0,     0,   277,    29,   249,   278,     0,
     281,    31,    32,    33,    34,    35,    36,    37,   284,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,     0,   131,     0,
       0,    52,    53,    54,    55,    56,    57,    58,     0,   309,
       0,     0,     0,     0,   315,     0,     0,     0,     0,     0,
       0,     0,    59,     0,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   281,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   352,   353,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     0,     3,     0,     4,     0,     5,     6,     7,
       8,     9,     0,    10,    11,    12,    13,    14,    15,    16,
       0,     0,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,    26,    27,     0,    28,    29,    30,
       0,     0,   399,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,    57,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,     0,    60,    61,     1,     0,
       2,     0,     3,     0,     4,   132,     5,     6,     7,     0,
       9,     0,    10,    11,    12,    13,    14,    15,    16,     0,
       0,     0,     0,    18,    19,    20,     0,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,    29,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     0,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,    56,    57,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,     0,    60,    61,     1,     0,     2,
       0,     3,     0,     4,     0,     5,     6,     7,     0,     9,
       0,    10,    11,    12,    13,    14,    15,    16,     0,     0,
       0,     0,    18,    19,    20,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,    57,    58,     1,     0,
       2,     0,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,    59,     0,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,    29,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,    56,    57,    58,     2,
       0,     3,   129,     0,     0,     5,     6,     7,     0,     0,
       0,     0,     0,    59,     0,    60,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,   130,     0,     0,
       0,    52,    53,    54,    55,    56,    57,    58,     2,   125,
       3,     0,     0,     0,     5,     6,     7,     0,     0,     0,
       0,     0,    59,     0,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,    29,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,    57,    58,     2,     0,     3,
     280,     0,     0,     5,     6,     7,     0,     0,     0,     0,
       0,    59,     0,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,    57,    58,     2,     0,     3,     0,
       0,     0,     5,     6,     7,     0,     0,     0,     0,     0,
      59,     0,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,   130,     0,     0,     0,    52,    53,
      54,    55,    56,    57,    58,     2,     0,     3,   308,     0,
       0,     5,     6,     7,     0,     0,     0,     0,     0,    59,
       0,    60,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,    57,    58,     2,     0,     3,   129,     0,     0,
       5,     6,     7,     0,     0,     0,     0,     0,    59,     0,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,    29,    30,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,    57,    58,     2,   341,     3,     0,     0,     0,     5,
       6,     7,     0,     0,     0,     0,     0,    59,     0,    60,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      57,    58,     2,   351,     3,     0,     0,     0,     5,     6,
       7,     0,     0,     0,     0,     0,    59,     0,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,    29,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,    57,
      58,     2,     0,     3,     0,     0,     0,     5,     6,     7,
       0,     0,     0,     0,     0,    59,     0,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,    57,    58,
       2,     0,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,     0,    59,     0,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   227,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,    56,     2,    58,     3,
       0,     0,     0,     5,     6,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,    57,    58,     2,     0,     3,     0,
       0,     0,     5,     6,     7,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,     0,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    61
};

static const yytype_int16 yycheck[] =
{
       0,     0,     4,    11,     4,   241,    54,   212,    17,   169,
     144,    11,   139,   175,     6,    15,    54,     8,    27,    28,
       4,    59,     8,   135,    48,   356,    17,    51,     6,    29,
      26,    31,   326,   327,     5,   365,    27,    28,   233,   185,
     117,    68,    69,    70,     5,   339,     7,    87,    46,   381,
     162,   128,    52,    51,    54,   167,    76,    42,    48,    59,
       5,    51,   208,    48,    64,    64,    51,    45,    55,    56,
      72,   403,    72,     5,    98,    73,    37,    51,    76,   274,
      98,   101,   122,   414,    44,   415,   417,    73,    64,     9,
      66,   385,     5,    86,    86,    95,     0,   135,    91,    91,
       5,   101,    86,   101,    65,     3,    67,    91,    34,    35,
     102,    46,     3,    98,   226,   227,    51,   117,   102,   253,
     168,   283,    72,   250,   162,    75,   122,     7,   128,   167,
     168,    85,   119,   338,   268,   135,   145,    98,    17,    95,
      19,    76,    94,    96,   144,   257,     3,    97,     5,    74,
     386,   151,    71,   313,   145,    32,    33,    34,    35,    92,
      93,     6,   162,    10,     3,     9,   101,   167,   168,   329,
      87,    88,    89,    90,     9,   175,   176,     3,    46,   179,
      64,    65,    66,    67,    68,    69,    70,    48,   226,   227,
     426,     6,    76,     4,     6,   233,   196,     7,    84,     4,
      99,   241,    86,    87,    88,    89,    90,    91,    92,    93,
       4,     6,   212,   213,   214,   215,   216,   217,   102,   257,
     220,   221,   222,   223,   224,   225,   226,   227,     5,     8,
       6,     6,   232,   233,    24,    99,   274,     5,     5,     8,
       6,     6,    73,     5,    99,   245,     6,     8,     3,    36,
       6,    10,    10,   253,     5,     9,   256,   257,     6,    16,
      73,   261,   262,    26,     9,     6,     4,   307,   268,     6,
       6,    73,    25,     3,   274,   275,     4,     3,    10,    10,
       4,     6,     3,   283,    64,   403,   196,   357,   326,   327,
     406,   320,   425,   372,   137,   122,   202,    26,    95,     2,
       3,   339,   346,   260,    93,   249,   314,    99,   316,   357,
     275,    29,   415,    16,   314,    18,   316,   317,   393,   357,
      26,   359,    26,   213,    26,   312,   326,   327,   336,    32,
      26,   214,   217,   215,   221,   216,   336,   225,   338,   339,
     176,    -1,   220,   351,    -1,    -1,   386,   385,   222,   224,
      53,   351,   390,   223,    -1,    58,   356,   357,    -1,   359,
      -1,    -1,   362,   371,    -1,   365,   374,    -1,   406,   377,
     410,   371,    -1,    -1,   374,    -1,    -1,   377,    -1,    -1,
      -1,   381,   381,    -1,    -1,   385,   426,   425,    -1,    -1,
     390,    -1,    -1,   393,   434,    -1,    -1,   384,   400,    -1,
     400,   388,    -1,   403,   403,    -1,   406,    -1,   395,    -1,
      -1,   419,    -1,    -1,   414,   415,    -1,   417,    -1,   419,
     123,    -1,    -1,    -1,    -1,   425,    -1,   130,    -1,    -1,
      -1,    -1,    -1,   136,    -1,   138,    -1,   424,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,   198,    42,    43,   201,    -1,
     203,    47,    48,    49,    50,    51,    52,    53,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    -1,    -1,   231,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,   242,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   270,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   318,   319,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    38,    39,    -1,    41,    42,    43,
      -1,    -1,   375,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,   100,   101,     3,    -1,
       5,    -1,     7,    -1,     9,    10,    11,    12,    13,    -1,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,   100,   101,     3,    -1,     5,
      -1,     7,    -1,     9,    -1,    11,    12,    13,    -1,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    -1,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,     3,    -1,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    98,    -1,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,     5,
      -1,     7,     8,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    98,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,     5,     6,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    98,    -1,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,     5,    -1,     7,
       8,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    98,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      98,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,     5,    -1,     7,     8,    -1,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    98,
      -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,
      80,    81,    82,    83,     5,    -1,     7,     8,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    98,    -1,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    82,    83,     5,     6,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    98,    -1,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,
      82,    83,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    98,    -1,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,     5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    98,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    98,    -1,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,     5,    83,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   101
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    38,    39,    41,    42,
      43,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    65,    66,
      67,    68,    77,    78,    79,    80,    81,    82,    83,    98,
     100,   101,   107,   108,   109,   110,   115,   116,   119,   120,
     128,   129,   130,   131,   133,   134,   135,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   151,   152,   153,   154,
     155,   156,   158,   163,   164,   165,   167,   169,   172,   173,
     174,   175,   177,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   205,
     208,   209,   210,   211,   212,     6,   131,   147,   202,     8,
      73,   147,    10,   116,   165,   166,     5,   130,     5,     5,
     131,   147,   166,   147,    98,   162,    64,    66,    68,    69,
      70,    76,    86,    87,    88,    89,    90,    91,    92,    93,
     102,   150,   168,   183,   184,   185,   186,   208,   166,   166,
     131,   174,    76,   101,   170,   171,   131,   204,   147,    44,
     114,   131,   147,   121,   122,   175,   128,   128,     5,   147,
     121,   123,   206,     0,   108,   116,    46,    73,     5,     3,
       3,     4,   150,     7,   151,   164,   156,   171,   131,   178,
     179,    72,    75,    97,    85,    95,    96,    94,    86,    91,
     182,   183,   184,   185,   186,    74,    71,    38,   131,   203,
     128,     7,    37,    98,   149,   151,   153,   208,   147,     6,
     147,     8,    73,    10,   118,   123,   147,   141,   147,    43,
     146,     3,     9,     9,     3,   114,   166,   131,   123,   123,
     117,   121,   162,   178,   204,    48,   131,     6,     4,     6,
       7,   154,   147,    84,     4,    99,   115,   147,   147,   155,
       8,   147,   154,     4,   147,   187,   188,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   201,   123,   123,
     131,   206,     5,   207,     6,     8,   151,   152,     8,   147,
       6,    45,   161,   131,     6,   147,     6,   170,   146,    24,
     137,   138,   114,    99,   131,   123,     5,     5,   161,   131,
     131,   132,   114,     6,   206,   172,     6,   178,    73,     5,
      99,     6,   147,     8,     6,   128,   162,   130,     3,   130,
     131,     6,   147,   147,   138,    10,    10,    36,   111,     5,
     159,   124,   175,   124,   162,     9,   130,   188,   124,     6,
     159,    16,    73,   130,     6,    25,   136,    26,   139,   132,
     122,     9,   124,   125,     6,     4,   131,   180,     6,     3,
       5,   160,   157,   173,   176,     6,   130,   148,   130,   147,
      73,   130,     3,   109,   112,   113,     4,   128,   124,   151,
     152,   128,   126,   127,   175,     3,   180,    10,   128,     6,
     116,   113,    10,   125,     6,     4,   132,   181,   176,   132,
     130,   128,   127,   151,   152,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   106,   107,   107,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   110,   111,   111,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   118,   119,   120,
     121,   121,   122,   123,   124,   125,   125,   126,   127,   127,
     128,   128,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   131,   131,   132,   132,   133,   134,   135,   136,   136,
     137,   138,   138,   139,   139,   140,   141,   141,   142,   142,
     142,   142,   142,   142,   143,   143,   144,   144,   144,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   150,   151,   151,   151,   152,   152,   152,   153,   153,
     153,   154,   154,   155,   155,   155,   156,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   165,   165,   165,   166,   166,   167,   168,   168,
     168,   168,   168,   169,   169,   169,   169,   169,   170,   170,
     171,   171,   172,   172,   173,   173,   174,   175,   175,   176,
     176,   177,   178,   178,   179,   179,   180,   180,   180,   181,
     181,   181,   182,   182,   183,   183,   183,   183,   184,   184,
     185,   185,   186,   186,   186,   187,   187,   188,   188,   188,
     189,   189,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   199,   200,   200,   201,   201,   202,   202,   202,   202,
     202,   202,   202,   203,   203,   203,   203,   203,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   209,   210,
     210,   210,   210,   210,   210,   211,   211,   211,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     8,     2,     0,     1,     0,     1,     2,
       1,     3,     1,     3,     1,     2,     4,     4,     4,     6,
       1,     2,     1,     1,     2,     1,     3,     2,     1,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     7,     2,     3,     2,     0,
       5,     1,     2,     2,     0,     6,     1,     1,     5,     5,
       6,     7,     9,     5,     5,     7,     1,     1,     1,     3,
       2,     2,     1,     1,     3,     1,     3,     3,     0,     1,
       1,     1,     3,     4,     4,     2,     3,     2,     5,     4,
       4,     1,     1,     1,     1,     3,     2,     2,     1,     2,
       2,     1,     2,     1,     2,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     5,     1,     1,
       1,     1,     1,     1,     9,     7,     7,     7,     0,     1,
       1,     1,     1,     3,     1,     4,     2,     1,     2,     2,
       3,     9,     1,     3,     1,     2,     1,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     5,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     2,
       2,     1,     1,     3,     3,     2,     1,     1,     3,     1,
       2,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       2,     2
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
        yyerror (&yylloc, arg, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, arg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Scanner* arg)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (arg);
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
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Scanner* arg)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, arg);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, Scanner* arg)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , arg);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, arg); \
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Scanner* arg)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 108: /* ast  */
#line 137 "src/gwion.y"
      { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1962 "src/parser.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (Scanner* arg)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

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
      yychar = yylex (&yylval, &yylloc, scan);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 140 "src/gwion.y"
    { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2260 "src/parser.c"
    break;

  case 3:
#line 141 "src/gwion.y"
    { gwion_error(&(yyloc), arg, "file is empty.\n"); YYERROR; }
#line 2266 "src/parser.c"
    break;

  case 4:
#line 144 "src/gwion.y"
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2272 "src/parser.c"
    break;

  case 5:
#line 145 "src/gwion.y"
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2278 "src/parser.c"
    break;

  case 6:
#line 149 "src/gwion.y"
    { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2284 "src/parser.c"
    break;

  case 7:
#line 150 "src/gwion.y"
    { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2290 "src/parser.c"
    break;

  case 8:
#line 151 "src/gwion.y"
    { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2296 "src/parser.c"
    break;

  case 9:
#line 152 "src/gwion.y"
    { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2302 "src/parser.c"
    break;

  case 10:
#line 153 "src/gwion.y"
    { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2308 "src/parser.c"
    break;

  case 11:
#line 154 "src/gwion.y"
    { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2314 "src/parser.c"
    break;

  case 12:
#line 155 "src/gwion.y"
    { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2320 "src/parser.c"
    break;

  case 13:
#line 160 "src/gwion.y"
    { (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-6].id_list));
  }
#line 2329 "src/parser.c"
    break;

  case 14:
#line 165 "src/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2335 "src/parser.c"
    break;

  case 15:
#line 165 "src/gwion.y"
    { (yyval.type_decl) = NULL; }
#line 2341 "src/parser.c"
    break;

  case 17:
#line 167 "src/gwion.y"
    { (yyval.ast) = NULL; }
#line 2347 "src/parser.c"
    break;

  case 18:
#line 170 "src/gwion.y"
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2353 "src/parser.c"
    break;

  case 19:
#line 171 "src/gwion.y"
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2359 "src/parser.c"
    break;

  case 20:
#line 174 "src/gwion.y"
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2365 "src/parser.c"
    break;

  case 21:
#line 174 "src/gwion.y"
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2371 "src/parser.c"
    break;

  case 22:
#line 175 "src/gwion.y"
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yylsp[0]))); }
#line 2377 "src/parser.c"
    break;

  case 23:
#line 175 "src/gwion.y"
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2383 "src/parser.c"
    break;

  case 24:
#line 177 "src/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2389 "src/parser.c"
    break;

  case 25:
#line 177 "src/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2395 "src/parser.c"
    break;

  case 26:
#line 179 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2402 "src/parser.c"
    break;

  case 27:
#line 181 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2409 "src/parser.c"
    break;

  case 28:
#line 184 "src/gwion.y"
    {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag));
}
#line 2421 "src/parser.c"
    break;

  case 29:
#line 191 "src/gwion.y"
    {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2432 "src/parser.c"
    break;

  case 31:
#line 198 "src/gwion.y"
    { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2438 "src/parser.c"
    break;

  case 32:
#line 200 "src/gwion.y"
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2446 "src/parser.c"
    break;

  case 33:
#line 204 "src/gwion.y"
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2454 "src/parser.c"
    break;

  case 34:
#line 208 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2460 "src/parser.c"
    break;

  case 35:
#line 209 "src/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2466 "src/parser.c"
    break;

  case 36:
#line 209 "src/gwion.y"
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2472 "src/parser.c"
    break;

  case 37:
#line 210 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2478 "src/parser.c"
    break;

  case 38:
#line 211 "src/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2484 "src/parser.c"
    break;

  case 39:
#line 211 "src/gwion.y"
    {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2494 "src/parser.c"
    break;

  case 40:
#line 218 "src/gwion.y"
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2500 "src/parser.c"
    break;

  case 41:
#line 219 "src/gwion.y"
    { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2506 "src/parser.c"
    break;

  case 42:
#line 223 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2512 "src/parser.c"
    break;

  case 43:
#line 224 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2518 "src/parser.c"
    break;

  case 44:
#line 225 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2524 "src/parser.c"
    break;

  case 45:
#line 226 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2530 "src/parser.c"
    break;

  case 46:
#line 227 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2536 "src/parser.c"
    break;

  case 47:
#line 228 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2542 "src/parser.c"
    break;

  case 48:
#line 229 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2548 "src/parser.c"
    break;

  case 49:
#line 230 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2554 "src/parser.c"
    break;

  case 50:
#line 231 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2560 "src/parser.c"
    break;

  case 51:
#line 232 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2566 "src/parser.c"
    break;

  case 61:
#line 248 "src/gwion.y"
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2572 "src/parser.c"
    break;

  case 62:
#line 249 "src/gwion.y"
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2582 "src/parser.c"
    break;

  case 64:
#line 256 "src/gwion.y"
    { (yyval.sym) = NULL; }
#line 2588 "src/parser.c"
    break;

  case 65:
#line 259 "src/gwion.y"
    { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-5].flag); }
#line 2595 "src/parser.c"
    break;

  case 66:
#line 262 "src/gwion.y"
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2601 "src/parser.c"
    break;

  case 67:
#line 264 "src/gwion.y"
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2607 "src/parser.c"
    break;

  case 68:
#line 266 "src/gwion.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2613 "src/parser.c"
    break;

  case 69:
#line 266 "src/gwion.y"
    { (yyval.exp) = NULL; }
#line 2619 "src/parser.c"
    break;

  case 70:
#line 269 "src/gwion.y"
    {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2630 "src/parser.c"
    break;

  case 71:
#line 277 "src/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2636 "src/parser.c"
    break;

  case 72:
#line 278 "src/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2642 "src/parser.c"
    break;

  case 73:
#line 280 "src/gwion.y"
    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2648 "src/parser.c"
    break;

  case 74:
#line 280 "src/gwion.y"
    { (yyval.stmt) = NULL; }
#line 2654 "src/parser.c"
    break;

  case 75:
#line 282 "src/gwion.y"
    {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2665 "src/parser.c"
    break;

  case 76:
#line 290 "src/gwion.y"
    { (yyval.ival) = ae_stmt_while; }
#line 2671 "src/parser.c"
    break;

  case 77:
#line 291 "src/gwion.y"
    { (yyval.ival) = ae_stmt_until; }
#line 2677 "src/parser.c"
    break;

  case 78:
#line 295 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2683 "src/parser.c"
    break;

  case 79:
#line 297 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2689 "src/parser.c"
    break;

  case 80:
#line 299 "src/gwion.y"
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2695 "src/parser.c"
    break;

  case 81:
#line 301 "src/gwion.y"
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2701 "src/parser.c"
    break;

  case 82:
#line 303 "src/gwion.y"
    { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2707 "src/parser.c"
    break;

  case 83:
#line 305 "src/gwion.y"
    { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2713 "src/parser.c"
    break;

  case 84:
#line 310 "src/gwion.y"
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2719 "src/parser.c"
    break;

  case 85:
#line 312 "src/gwion.y"
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2725 "src/parser.c"
    break;

  case 86:
#line 316 "src/gwion.y"
    { (yyval.ival) = ae_stmt_return; }
#line 2731 "src/parser.c"
    break;

  case 87:
#line 317 "src/gwion.y"
    { (yyval.ival) = ae_stmt_break; }
#line 2737 "src/parser.c"
    break;

  case 88:
#line 318 "src/gwion.y"
    { (yyval.ival) = ae_stmt_continue; }
#line 2743 "src/parser.c"
    break;

  case 89:
#line 321 "src/gwion.y"
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2749 "src/parser.c"
    break;

  case 90:
#line 322 "src/gwion.y"
    { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2755 "src/parser.c"
    break;

  case 91:
#line 326 "src/gwion.y"
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2761 "src/parser.c"
    break;

  case 92:
#line 327 "src/gwion.y"
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2767 "src/parser.c"
    break;

  case 94:
#line 330 "src/gwion.y"
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2773 "src/parser.c"
    break;

  case 96:
#line 332 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2779 "src/parser.c"
    break;

  case 97:
#line 334 "src/gwion.y"
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2785 "src/parser.c"
    break;

  case 98:
#line 334 "src/gwion.y"
    { (yyval.type_list) = NULL; }
#line 2791 "src/parser.c"
    break;

  case 102:
#line 339 "src/gwion.y"
    { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2797 "src/parser.c"
    break;

  case 103:
#line 340 "src/gwion.y"
    { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2803 "src/parser.c"
    break;

  case 104:
#line 341 "src/gwion.y"
    { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2809 "src/parser.c"
    break;

  case 105:
#line 345 "src/gwion.y"
    { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2815 "src/parser.c"
    break;

  case 106:
#line 346 "src/gwion.y"
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2821 "src/parser.c"
    break;

  case 107:
#line 347 "src/gwion.y"
    { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2827 "src/parser.c"
    break;

  case 108:
#line 351 "src/gwion.y"
    { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2833 "src/parser.c"
    break;

  case 109:
#line 352 "src/gwion.y"
    { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2839 "src/parser.c"
    break;

  case 110:
#line 353 "src/gwion.y"
    { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2845 "src/parser.c"
    break;

  case 115:
#line 358 "src/gwion.y"
    { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), GET_LOC(&(yyloc)))), (yyvsp[0].var_decl_list)); }
#line 2852 "src/parser.c"
    break;

  case 116:
#line 360 "src/gwion.y"
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2858 "src/parser.c"
    break;

  case 117:
#line 361 "src/gwion.y"
    { (yyvsp[-1].type_decl)->flag |= ae_flag_ref | ae_flag_nonnull; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2864 "src/parser.c"
    break;

  case 119:
#line 362 "src/gwion.y"
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2870 "src/parser.c"
    break;

  case 120:
#line 364 "src/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2876 "src/parser.c"
    break;

  case 121:
#line 364 "src/gwion.y"
    { (yyval.arg_list) = NULL; }
#line 2882 "src/parser.c"
    break;

  case 122:
#line 365 "src/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2888 "src/parser.c"
    break;

  case 123:
#line 365 "src/gwion.y"
    { (yyval.arg_list) = NULL; }
#line 2894 "src/parser.c"
    break;

  case 124:
#line 366 "src/gwion.y"
    { (yyval.flag) = ae_flag_variadic; }
#line 2900 "src/parser.c"
    break;

  case 125:
#line 366 "src/gwion.y"
    { (yyval.flag) = 0; }
#line 2906 "src/parser.c"
    break;

  case 126:
#line 368 "src/gwion.y"
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2912 "src/parser.c"
    break;

  case 127:
#line 368 "src/gwion.y"
    { (yyval.id_list) = NULL; }
#line 2918 "src/parser.c"
    break;

  case 128:
#line 370 "src/gwion.y"
    { (yyval.flag) = ae_flag_static; }
#line 2924 "src/parser.c"
    break;

  case 129:
#line 371 "src/gwion.y"
    { (yyval.flag) = ae_flag_global; }
#line 2930 "src/parser.c"
    break;

  case 130:
#line 374 "src/gwion.y"
    { (yyval.flag) = ae_flag_private; }
#line 2936 "src/parser.c"
    break;

  case 131:
#line 375 "src/gwion.y"
    { (yyval.flag) = ae_flag_protect; }
#line 2942 "src/parser.c"
    break;

  case 132:
#line 378 "src/gwion.y"
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2948 "src/parser.c"
    break;

  case 133:
#line 379 "src/gwion.y"
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2954 "src/parser.c"
    break;

  case 134:
#line 380 "src/gwion.y"
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2960 "src/parser.c"
    break;

  case 135:
#line 383 "src/gwion.y"
    { (yyval.flag) = 0; }
#line 2966 "src/parser.c"
    break;

  case 136:
#line 383 "src/gwion.y"
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2972 "src/parser.c"
    break;

  case 137:
#line 387 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 2978 "src/parser.c"
    break;

  case 144:
#line 394 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2984 "src/parser.c"
    break;

  case 145:
#line 396 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 2990 "src/parser.c"
    break;

  case 146:
#line 398 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 2996 "src/parser.c"
    break;

  case 147:
#line 400 "src/gwion.y"
    {
  const m_str str = s_name((yyvsp[-4].sym));
  char c[strlen(str) + 2];
  c[0] = '@';
  strcpy(c + 1, str);
  const Symbol sym = insert_symbol(c);
 (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-3].type_decl), sym, (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_typedef, GET_LOC(&(yyloc)));
}
#line 3009 "src/parser.c"
    break;

  case 148:
#line 409 "src/gwion.y"
    { (yyval.ival) = 0; }
#line 3015 "src/parser.c"
    break;

  case 149:
#line 409 "src/gwion.y"
    { (yyval.ival) = ae_flag_ref; }
#line 3021 "src/parser.c"
    break;

  case 150:
#line 410 "src/gwion.y"
    { (yyval.ival) = ae_flag_nonnull; }
#line 3027 "src/parser.c"
    break;

  case 152:
#line 413 "src/gwion.y"
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].id_list)); }
#line 3033 "src/parser.c"
    break;

  case 153:
#line 414 "src/gwion.y"
    { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[-1].exp)); }
#line 3039 "src/parser.c"
    break;

  case 154:
#line 418 "src/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3045 "src/parser.c"
    break;

  case 155:
#line 419 "src/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 3051 "src/parser.c"
    break;

  case 156:
#line 423 "src/gwion.y"
    { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 3057 "src/parser.c"
    break;

  case 157:
#line 426 "src/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3063 "src/parser.c"
    break;

  case 158:
#line 427 "src/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 3069 "src/parser.c"
    break;

  case 159:
#line 429 "src/gwion.y"
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 3075 "src/parser.c"
    break;

  case 160:
#line 430 "src/gwion.y"
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 3081 "src/parser.c"
    break;

  case 161:
#line 433 "src/gwion.y"
    {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-3].decl_list), GET_LOC(&(yyloc)));
      (yyval.union_def)->type_xid = (yyvsp[-5].sym);
      (yyval.union_def)->xid = (yyvsp[-1].sym);
      (yyval.union_def)->flag = (yyvsp[-7].flag);
      if((yyvsp[-6].id_list)) {
        if(!(yyvsp[-5].sym)) {
          gwion_error(&(yyloc), arg, _("Template unions requires type name\n"));
          YYERROR;
        }
        if((yyvsp[-1].sym)) {
          gwion_error(&(yyloc), arg, _("Can't instantiate template union types at declaration site.\n"));
          YYERROR;
        }
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-6].id_list));
      }
    }
#line 3103 "src/parser.c"
    break;

  case 162:
#line 453 "src/gwion.y"
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3109 "src/parser.c"
    break;

  case 163:
#line 454 "src/gwion.y"
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3115 "src/parser.c"
    break;

  case 164:
#line 457 "src/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3121 "src/parser.c"
    break;

  case 165:
#line 458 "src/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3127 "src/parser.c"
    break;

  case 166:
#line 460 "src/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3133 "src/parser.c"
    break;

  case 167:
#line 461 "src/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3139 "src/parser.c"
    break;

  case 168:
#line 462 "src/gwion.y"
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3145 "src/parser.c"
    break;

  case 169:
#line 463 "src/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3151 "src/parser.c"
    break;

  case 170:
#line 464 "src/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3157 "src/parser.c"
    break;

  case 171:
#line 465 "src/gwion.y"
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3163 "src/parser.c"
    break;

  case 186:
#line 473 "src/gwion.y"
    { (yyval.exp) = NULL; }
#line 3169 "src/parser.c"
    break;

  case 188:
#line 476 "src/gwion.y"
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3175 "src/parser.c"
    break;

  case 189:
#line 478 "src/gwion.y"
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 3181 "src/parser.c"
    break;

  case 191:
#line 480 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3187 "src/parser.c"
    break;

  case 193:
#line 481 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3193 "src/parser.c"
    break;

  case 195:
#line 482 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3199 "src/parser.c"
    break;

  case 197:
#line 483 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3205 "src/parser.c"
    break;

  case 199:
#line 484 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3211 "src/parser.c"
    break;

  case 201:
#line 485 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3217 "src/parser.c"
    break;

  case 203:
#line 486 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3223 "src/parser.c"
    break;

  case 205:
#line 487 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3229 "src/parser.c"
    break;

  case 207:
#line 488 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3235 "src/parser.c"
    break;

  case 209:
#line 489 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3241 "src/parser.c"
    break;

  case 211:
#line 490 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3247 "src/parser.c"
    break;

  case 213:
#line 492 "src/gwion.y"
    { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3253 "src/parser.c"
    break;

  case 215:
#line 495 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3259 "src/parser.c"
    break;

  case 224:
#line 501 "src/gwion.y"
    { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3265 "src/parser.c"
    break;

  case 225:
#line 502 "src/gwion.y"
    {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3271 "src/parser.c"
    break;

  case 226:
#line 503 "src/gwion.y"
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3277 "src/parser.c"
    break;

  case 227:
#line 504 "src/gwion.y"
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3283 "src/parser.c"
    break;

  case 228:
#line 507 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3289 "src/parser.c"
    break;

  case 229:
#line 508 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3295 "src/parser.c"
    break;

  case 230:
#line 509 "src/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3301 "src/parser.c"
    break;

  case 231:
#line 509 "src/gwion.y"
    { (yyval.arg_list) = NULL; }
#line 3307 "src/parser.c"
    break;

  case 232:
#line 512 "src/gwion.y"
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3313 "src/parser.c"
    break;

  case 233:
#line 513 "src/gwion.y"
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3319 "src/parser.c"
    break;

  case 234:
#line 516 "src/gwion.y"
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3325 "src/parser.c"
    break;

  case 235:
#line 516 "src/gwion.y"
    { (yyval.exp) = NULL; }
#line 3331 "src/parser.c"
    break;

  case 238:
#line 520 "src/gwion.y"
    { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3337 "src/parser.c"
    break;

  case 240:
#line 523 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3343 "src/parser.c"
    break;

  case 241:
#line 525 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range)); }
#line 3349 "src/parser.c"
    break;

  case 242:
#line 527 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3356 "src/parser.c"
    break;

  case 243:
#line 530 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3362 "src/parser.c"
    break;

  case 244:
#line 530 "src/gwion.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3368 "src/parser.c"
    break;

  case 245:
#line 533 "src/gwion.y"
    { (yyval.ival) = ae_prim_complex; }
#line 3374 "src/parser.c"
    break;

  case 246:
#line 534 "src/gwion.y"
    { (yyval.ival) = ae_prim_polar;   }
#line 3380 "src/parser.c"
    break;

  case 247:
#line 535 "src/gwion.y"
    { (yyval.ival) = ae_prim_vec;     }
#line 3386 "src/parser.c"
    break;

  case 248:
#line 538 "src/gwion.y"
    { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3392 "src/parser.c"
    break;

  case 249:
#line 539 "src/gwion.y"
    { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3398 "src/parser.c"
    break;

  case 250:
#line 540 "src/gwion.y"
    { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3404 "src/parser.c"
    break;

  case 251:
#line 541 "src/gwion.y"
    { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3410 "src/parser.c"
    break;

  case 252:
#line 542 "src/gwion.y"
    { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3416 "src/parser.c"
    break;

  case 253:
#line 543 "src/gwion.y"
    { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3422 "src/parser.c"
    break;

  case 254:
#line 544 "src/gwion.y"
    { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3428 "src/parser.c"
    break;

  case 255:
#line 545 "src/gwion.y"
    { (yyval.exp) = new_prim_vec(    mpool(arg), (yyvsp[-2].ival) ,(yyvsp[-1].exp)); }
#line 3434 "src/parser.c"
    break;

  case 256:
#line 546 "src/gwion.y"
    { (yyval.exp) = new_prim_unpack( mpool(arg), insert_symbol("auto"), (yyvsp[-1].id_list), GET_LOC(&(yyloc))); }
#line 3440 "src/parser.c"
    break;

  case 257:
#line 547 "src/gwion.y"
    { (yyval.exp) = new_prim_tuple(mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3446 "src/parser.c"
    break;

  case 258:
#line 548 "src/gwion.y"
    { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3452 "src/parser.c"
    break;

  case 259:
#line 549 "src/gwion.y"
    { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3458 "src/parser.c"
    break;

  case 260:
#line 550 "src/gwion.y"
    { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3464 "src/parser.c"
    break;

  case 261:
#line 551 "src/gwion.y"
    { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3470 "src/parser.c"
    break;


#line 3474 "src/parser.c"

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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, arg, YY_("syntax error"));
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
        yyerror (&yylloc, arg, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, arg);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, arg);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, arg, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, arg);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, arg);
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
#line 553 "src/gwion.y"

