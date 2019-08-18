/* A Bison parser, made by GNU Bison 3.4.  */

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
#define YYBISON_VERSION "3.4"

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
#line 6 "ly/gwion.y"

#include <stdio.h> // strlen in paste operation
#include <string.h> // strlen in paste operation
#include <math.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"
#include "lexer.h"


#define YYERROR_VERBOSE
#define YYMALLOC xmalloc
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))
#define GET_LOC(a) loc_cpy(mpool(arg), a)
ANN void gwion_error(YYLTYPE*, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);

#line 96 "src/parser.c"

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
    SWITCH = 278,
    CASE = 279,
    ENUM = 280,
    RETURN = 281,
    BREAK = 282,
    CONTINUE = 283,
    CLASS = 284,
    STATIC = 285,
    GLOBAL = 286,
    PRIVATE = 287,
    PROTECT = 288,
    EXTENDS = 289,
    DOT = 290,
    AST_DTOR = 291,
    OPERATOR = 292,
    TYPEDEF = 293,
    NOELSE = 294,
    UNION = 295,
    CONSTT = 296,
    AUTO = 297,
    PASTE = 298,
    ELLIPSE = 299,
    RARROW = 300,
    BACKSLASH = 301,
    BACKTICK = 302,
    NUM = 303,
    FLOATT = 304,
    ID = 305,
    STRING_LIT = 306,
    CHAR_LIT = 307,
    PLUS = 308,
    PLUSPLUS = 309,
    MINUS = 310,
    MINUSMINUS = 311,
    TIMES = 312,
    DIVIDE = 313,
    PERCENT = 314,
    DOLLAR = 315,
    QUESTION = 316,
    COLON = 317,
    COLONCOLON = 318,
    QUESTIONCOLON = 319,
    ATSYM = 320,
    GTPAREN = 321,
    LTPAREN = 322,
    NEW = 323,
    SPORK = 324,
    FORK = 325,
    TYPEOF = 326,
    L_HACK = 327,
    R_HACK = 328,
    AND = 329,
    EQ = 330,
    GE = 331,
    GT = 332,
    LE = 333,
    LT = 334,
    NEQ = 335,
    SHIFT_LEFT = 336,
    SHIFT_RIGHT = 337,
    S_AND = 338,
    S_OR = 339,
    S_XOR = 340,
    OR = 341,
    LTMPL = 342,
    RTMPL = 343,
    TILDA = 344,
    EXCLAMATION = 345,
    DYNOP = 346,
    PP_COMMENT = 347,
    PP_INCLUDE = 348,
    PP_DEFINE = 349,
    PP_UNDEF = 350,
    PP_IFDEF = 351,
    PP_IFNDEF = 352,
    PP_ELSE = 353,
    PP_ENDIF = 354,
    PP_NL = 355,
    UMINUS = 356,
    UTIMES = 357
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
#define SWITCH 278
#define CASE 279
#define ENUM 280
#define RETURN 281
#define BREAK 282
#define CONTINUE 283
#define CLASS 284
#define STATIC 285
#define GLOBAL 286
#define PRIVATE 287
#define PROTECT 288
#define EXTENDS 289
#define DOT 290
#define AST_DTOR 291
#define OPERATOR 292
#define TYPEDEF 293
#define NOELSE 294
#define UNION 295
#define CONSTT 296
#define AUTO 297
#define PASTE 298
#define ELLIPSE 299
#define RARROW 300
#define BACKSLASH 301
#define BACKTICK 302
#define NUM 303
#define FLOATT 304
#define ID 305
#define STRING_LIT 306
#define CHAR_LIT 307
#define PLUS 308
#define PLUSPLUS 309
#define MINUS 310
#define MINUSMINUS 311
#define TIMES 312
#define DIVIDE 313
#define PERCENT 314
#define DOLLAR 315
#define QUESTION 316
#define COLON 317
#define COLONCOLON 318
#define QUESTIONCOLON 319
#define ATSYM 320
#define GTPAREN 321
#define LTPAREN 322
#define NEW 323
#define SPORK 324
#define FORK 325
#define TYPEOF 326
#define L_HACK 327
#define R_HACK 328
#define AND 329
#define EQ 330
#define GE 331
#define GT 332
#define LE 333
#define LT 334
#define NEQ 335
#define SHIFT_LEFT 336
#define SHIFT_RIGHT 337
#define S_AND 338
#define S_OR 339
#define S_XOR 340
#define OR 341
#define LTMPL 342
#define RTMPL 343
#define TILDA 344
#define EXCLAMATION 345
#define DYNOP 346
#define PP_COMMENT 347
#define PP_INCLUDE 348
#define PP_DEFINE 349
#define PP_UNDEF 350
#define PP_IFDEF 351
#define PP_IFNDEF 352
#define PP_ELSE 353
#define PP_ENDIF 354
#define PP_NL 355
#define UMINUS 356
#define UTIMES 357

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "ly/gwion.y"

  char* sval;
  int ival;
  long unsigned int lval;
  ae_flag flag;
  m_float fval;
  Symbol sym;
  Array_Sub array_sub;
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
  Class_Body class_body;
//  ID_List class_ext;
  Class_Def class_def;
  Ast ast;

#line 374 "src/parser.c"

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
#define YYFINAL  188
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1478

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  243
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  410

#define YYUNDEFTOK  2
#define YYMAXUTOK   358

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
      95,    96,    97,    98,    99,   100,   101,   102,   103
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   143,   143,   144,   147,   148,   152,   153,   154,   155,
     156,   157,   158,   162,   168,   168,   170,   170,   173,   174,
     177,   177,   178,   178,   180,   180,   182,   184,   187,   194,
     201,   201,   203,   207,   211,   212,   212,   213,   214,   214,
     217,   218,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   236,   237,   244,   244,   247,   250,   252,   255,   256,
     257,   260,   263,   264,   267,   269,   271,   273,   275,   277,
     282,   284,   289,   290,   291,   294,   295,   299,   300,   303,
     303,   305,   305,   307,   307,   309,   309,   309,   312,   313,
     314,   318,   319,   320,   323,   323,   324,   324,   325,   327,
     328,   329,   329,   331,   331,   332,   332,   333,   333,   335,
     335,   337,   338,   341,   342,   345,   346,   347,   350,   350,
     353,   356,   356,   356,   356,   356,   358,   359,   361,   363,
     365,   371,   371,   372,   372,   375,   376,   380,   381,   385,
     388,   389,   391,   392,   395,   412,   419,   420,   423,   424,
     426,   427,   428,   429,   430,   431,   433,   433,   434,   434,
     434,   434,   435,   435,   436,   436,   437,   437,   437,   439,
     439,   440,   441,   443,   446,   446,   447,   447,   448,   448,
     449,   449,   450,   450,   451,   451,   452,   452,   453,   453,
     454,   454,   455,   455,   456,   456,   458,   458,   460,   460,
     463,   463,   463,   464,   464,   464,   464,   467,   467,   468,
     469,   470,   473,   474,   475,   475,   478,   479,   482,   482,
     484,   484,   486,   487,   487,   489,   492,   493,   496,   497,
     498,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513
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
  "\"repeat\"", "\"for\"", "\"goto\"", "\"switch\"", "\"case\"",
  "\"enum\"", "\"return\"", "\"break\"", "\"continue\"", "\"class\"",
  "\"static\"", "\"global\"", "\"private\"", "\"protect\"", "\"extends\"",
  "\".\"", "\"dtor\"", "\"operator\"", "\"typedef\"", "NOELSE",
  "\"union\"", "\"const\"", "\"auto\"", "\"##\"", "\"...\"", "\"->\"",
  "\"\\\\\"", "\"`\"", "\"<integer>\"", "FLOATT", "\"<identifier>\"",
  "\"<litteral string>\"", "\"<litteral char>\"", "\"+\"", "\"++\"",
  "\"-\"", "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"",
  "\"::\"", "\"?:\"", "\"@\"", "\">(\"", "\"<(\"", "\"new\"", "\"spork\"",
  "\"fork\"", "\"typeof\"", "\"<<<\"", "\">>>\"", "\"&&\"", "\"==\"",
  "\">=\"", "\">\"", "\"<=\"", "\"<\"", "\"!=\"", "\"<<\"", "\">>\"",
  "\"&\"", "\"|\"", "\"^\"", "\"||\"", "\"<~\"", "\"~>\"", "\"~\"",
  "\"!\"", "\"<dynamic_operator>\"", "\"<comment>\"", "\"#include\"",
  "\"#define>\"", "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"",
  "\"#if\"", "\"\\n\"", "UMINUS", "UTIMES", "\"=\"", "$accept", "prg",
  "ast", "section", "class_def", "class_ext", "class_body", "class_body2",
  "id_list", "dot_decl", "stmt_list", "fptr_base", "fdef_base", "fptr_def",
  "type_def", "type_decl_array", "type_decl_exp", "type_decl_empty", "arg",
  "arg_list", "fptr_arg", "fptr_list", "code_stmt", "stmt", "id", "opt_id",
  "enum_def", "label_stmt", "goto_stmt", "case_stmt", "switch_stmt",
  "flow", "loop_stmt", "selection_stmt", "breaks", "jump_stmt", "exp_stmt",
  "exp", "binary_exp", "call_template", "op", "array_exp", "array_empty",
  "array", "decl_exp2", "decl_exp", "union_exp", "decl_exp3", "func_args",
  "arg_type", "decl_template", "storage_flag", "access_flag", "flag",
  "opt_flag", "func_def_base", "op_op", "func_def", "atsym", "decl_flag",
  "type_decl000", "type_decl00", "type_decl0", "type_decl", "decl_list",
  "union_def", "var_decl_list", "var_decl", "arg_decl", "fptr_arg_decl",
  "eq_op", "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp",
  "typeof_exp", "cast_exp", "unary_op", "unary_exp", "lambda_list",
  "lambda_arg", "type_list", "call_paren", "post_op", "dot_exp",
  "post_exp", "vec_type", "primary_exp", YY_NULLPTR
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
     355,   356,   357,   358
};
# endif

#define YYPACT_NINF -319

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-319)))

#define YYTABLE_NINF -85

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     501,  -319,   885,   953,   589,  -319,  -319,  -319,   135,    49,
    -319,   677,  -319,    72,    82,    41,  1225,   385,   135,  1225,
    -319,  -319,    18,  -319,  -319,  -319,  -319,    86,  1371,   135,
     135,   114,    -4,    41,  1225,  -319,  -319,    90,  -319,  -319,
    -319,  -319,  -319,  -319,    41,  1225,   102,    86,    86,   143,
    1225,   102,  -319,  -319,   158,  -319,   501,  -319,  -319,  -319,
    -319,  -319,  -319,   677,    95,  -319,  -319,  -319,  -319,  -319,
     164,  -319,  -319,   170,  -319,  -319,   179,    19,  -319,   165,
    -319,  -319,  -319,  -319,     8,  -319,   102,  -319,  -319,  -319,
      -4,  -319,    41,  -319,  -319,    11,   113,   106,   107,   108,
     -20,    99,    56,   101,   122,   131,  -319,   139,  1293,  -319,
      86,  -319,  -319,    44,  1225,  -319,  -319,    51,   189,  1388,
    -319,   192,  -319,   193,  -319,   102,  1225,   169,  1225,   747,
     199,    86,   142,  -319,   151,    97,   152,   196,   218,    41,
     135,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,  -319,  -319,  -319,   102,  -319,  -319,
    -319,  -319,   102,   102,    18,   177,  -319,  -319,   159,  -319,
      41,    41,  -319,   176,    41,   222,   226,   225,  -319,  -319,
     227,  -319,  -319,  1225,   160,  -319,   228,   147,  -319,  -319,
    -319,    41,  -319,  1225,  -319,  -319,  1225,  1225,  1021,  -319,
    -319,  -319,  -319,   227,  -319,   233,  1225,  1320,  1320,  1320,
    1320,  1320,  1320,  -319,  -319,  1320,  1320,  1320,  1320,  1320,
    1388,   102,   102,  -319,  -319,  1225,    41,   102,   234,  -319,
    -319,   236,  -319,   227,  -319,    22,    41,   237,  1225,   238,
      -4,   817,  -319,  -319,  -319,  -319,  -319,    41,  -319,   157,
      41,   235,   241,    22,    41,    41,  -319,  -319,  -319,  -319,
    -319,  -319,    41,  -319,  -319,   242,  -319,   102,    35,  -319,
     243,  -319,  -319,  -319,  -319,    41,  -319,   190,  -319,   113,
     106,   107,   108,   -20,    99,    56,   101,   122,   131,   139,
    -319,   246,  -319,   168,  1089,  -319,  -319,  -319,   165,  -319,
     247,    86,    18,   677,   254,   677,    41,  1157,   248,  -319,
     229,   102,   102,  -319,    18,  -319,   250,  -319,  -319,  -319,
    -319,   677,  -319,  1320,   102,  -319,  -319,   258,  -319,  -319,
     255,   249,  -319,  -319,   206,   677,   265,    41,   102,   263,
     269,    41,   268,    43,    26,  -319,  -319,   270,  -319,   102,
    -319,   677,  1225,  -319,   677,   274,  -319,   501,   102,   227,
    -319,    86,  -319,    24,  -319,    41,   271,   275,    41,   272,
      86,   276,  -319,  -319,    32,  -319,  -319,   501,   277,  -319,
     278,  -319,   165,  -319,   281,  -319,   227,  -319,    41,   102,
    -319,    41,  -319,   102,   677,  -319,  -319,    86,    24,  -319,
     165,   286,  -319,   287,  -319,  -319,  -319,  -319,  -319,  -319
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    78,     0,     0,     0,   229,   228,   230,   118,     0,
      62,     0,    63,     0,     0,     0,     0,     0,   118,    72,
      73,    74,   110,   111,   112,   113,   114,     0,     0,   118,
     118,     0,   131,   215,     0,   232,   233,    51,   234,   235,
     220,   200,   221,   201,     0,     0,     0,   204,   205,     0,
       0,     0,   206,   203,     0,     2,     4,     8,   135,     6,
      11,    12,    45,    24,   231,     9,    46,    47,    49,    48,
       0,    43,    44,     0,    50,    42,     0,    79,    94,    95,
     236,    81,   101,    97,   116,   115,     0,   126,     7,   137,
     131,   140,     0,    10,    96,   171,   174,   176,   178,   180,
     182,   184,   186,   188,   190,   192,   194,   196,     0,   198,
       0,   202,   227,   207,     0,   223,   243,   231,     0,     0,
      91,     0,    40,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,   231,   227,    84,   223,     0,     0,     0,
     118,   130,   164,   165,   166,   167,   168,    85,   161,   159,
     160,   158,    86,   162,   163,    87,   121,     0,   123,   122,
     125,   124,     0,     0,   110,    22,   141,   132,   131,   134,
       0,   212,   214,     0,     0,     0,    20,     0,    32,   209,
      30,   210,   211,     0,     0,    33,   216,     0,     1,     5,
      25,     0,    56,     0,    76,    77,     0,     0,     0,    93,
     117,   102,   139,   148,    99,   146,   170,     0,     0,     0,
       0,     0,     0,   156,   157,     0,     0,     0,     0,     0,
       0,     0,     0,   208,   242,     0,     0,     0,     0,   224,
     226,     0,   241,    88,    41,     0,     0,     0,     0,     0,
     131,     0,    57,    61,    60,    59,    58,     0,    75,     0,
       0,     0,     0,     0,     0,    54,   133,    98,   213,   136,
      52,   238,     0,   239,    31,     0,   240,     0,     0,    23,
       0,    80,    82,    92,   149,     0,   169,     0,   173,   175,
     177,   179,   181,   183,   185,   187,   189,   191,   193,   195,
     199,     0,   222,     0,     0,   225,   237,    89,    90,   108,
       0,     0,   110,     0,     0,     0,     0,     0,     0,   109,
      15,     0,     0,    28,   110,    53,     0,    21,   197,   217,
     138,     0,   147,     0,     0,    83,   219,     0,   107,   120,
       0,    70,    65,    69,     0,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,    64,   172,     0,   218,   104,
      27,     0,     0,    66,     0,     0,    14,    17,     0,   150,
      34,     0,    29,   106,    26,    54,     0,     0,     0,     0,
       0,    35,   103,    71,     0,    67,    55,    18,     0,    16,
       0,   152,   151,   128,    38,   105,   153,    37,    54,   142,
     100,    54,   129,     0,     0,    19,    13,     0,     0,   155,
     154,     0,   143,     0,    36,    68,   127,    39,   145,   144
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -319,  -319,   239,  -318,  -319,  -319,  -319,   -86,  -127,   105,
      58,  -319,  -319,  -319,  -319,   -39,   -46,  -104,  -243,  -100,
     -41,  -101,   -22,    -5,     0,  -285,  -319,  -319,  -319,  -319,
    -319,   181,  -319,  -319,  -319,  -319,  -116,   267,   -48,  -319,
     282,   -71,  -223,  -133,   112,   232,  -319,  -319,  -319,    60,
    -155,  -319,   230,     6,     2,  -319,  -319,  -319,  -138,   244,
      52,  -319,   288,   104,   -67,  -319,  -148,  -319,   -44,  -319,
    -319,   299,   300,   304,   305,  -319,  -189,  -319,   128,   129,
     130,   132,   133,   127,   134,   136,   126,   137,  -319,   140,
       1,   -30,   184,  -319,  -184,  -319,     9,   330,   342,  -319,
     344
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,    55,    56,    57,   339,   378,   379,   175,    58,
      59,   253,   235,    60,    61,   185,   179,   186,   371,   372,
     384,   385,    62,    63,   165,   316,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,   228,
     197,    78,    79,    80,    81,    82,   367,    83,   350,   301,
     140,    84,    85,    86,   125,    87,   157,    88,   169,   170,
      89,    90,    91,    92,   369,    93,   204,   205,   360,   387,
     215,   216,   217,   218,   219,   277,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     119,   109,   172,   110,   187,   295,   111,   112,   113,   114,
     115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,   108,   117,   117,    64,   141,   127,   178,   199,   255,
     298,    64,   249,   241,   124,   130,   117,   133,   278,   117,
     137,   236,   257,   196,   124,   181,   182,   366,   299,   363,
     256,   163,   164,   171,   117,   124,   124,   162,   394,   377,
      25,    26,   229,   293,   176,   117,   362,   264,   363,   -84,
     117,   225,   355,   251,   126,   213,    64,   108,   252,   377,
     214,   167,   123,    64,   229,    31,   300,    31,   340,   342,
     274,    34,   206,    34,    37,   207,    37,   128,   223,   226,
     386,   347,    34,   319,    31,    37,   168,   129,   224,   223,
      34,    37,   203,    37,   147,     4,   191,   208,    40,   152,
      42,   -22,   306,   401,   225,   139,   403,   147,   133,   243,
     155,    51,   152,    51,   117,   380,   -22,   290,   291,   133,
     308,   190,   230,   155,   254,   307,   117,   322,   117,   117,
      51,   227,   226,   174,   346,   317,   382,   153,   154,   176,
     191,   -22,   250,    31,   230,   -22,   124,   330,   183,    34,
     180,    40,    37,    42,   142,   180,   143,   192,   188,   343,
     -22,    34,   297,   400,    37,    23,    24,    25,    26,   193,
     203,   171,   198,   194,   260,   148,   149,   150,   151,   144,
     145,   146,   195,   117,   227,   -22,    10,   209,    12,    51,
     210,   212,   211,   117,   220,   232,   117,   117,   117,   221,
     233,    51,   242,   234,   244,   247,   117,   133,   133,   133,
     133,   133,   133,   245,   246,   133,   133,   133,   133,   133,
     133,   248,   191,   259,   167,   117,   292,   199,   261,   180,
     262,   263,   267,   266,     3,   268,   302,   275,   117,   294,
     311,   117,   296,   303,   305,   309,   312,   176,   318,   321,
     310,   324,   323,   328,   314,   315,   325,   332,   337,   344,
     349,   180,   176,   338,   348,   351,   180,   180,   352,   118,
     121,   354,   357,   358,   361,   203,   370,   376,   389,   329,
     393,   388,   391,   131,   397,   398,   138,   396,   381,   408,
     409,   395,   356,   404,   117,   189,   269,   407,   331,   178,
     333,   173,   364,    64,   374,    64,   334,   117,   238,   272,
     156,   199,   177,   313,   200,   399,   345,   184,   201,   166,
     320,    64,   402,   133,   390,   180,   180,   158,   159,   199,
     353,   180,   160,   161,   202,    64,   279,   315,   280,   383,
     281,   359,   284,   282,   287,   283,   373,   134,   392,   375,
     285,    64,   117,   286,    64,   258,   288,    64,   108,   135,
     289,   136,     0,     0,     0,   315,     0,     0,   359,     0,
       0,   180,     0,     0,     0,   406,     0,    64,   108,     0,
       0,   231,     0,     0,     0,     0,   132,     0,   315,   405,
       2,   315,     3,   237,    64,   239,     5,     6,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   341,   341,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
       0,    33,     0,    35,    36,    37,    38,    39,     0,     0,
       0,     0,   180,     0,     0,     0,     0,   365,   368,     0,
     265,    44,    45,   341,     0,     0,     0,    50,     0,     0,
     270,     0,   341,   271,     0,   121,     0,   365,     0,     0,
       0,     0,     0,   276,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   368,     0,     0,     0,   341,     0,     0,
       0,     0,   365,     0,     1,   304,     2,     0,     3,     0,
       4,     0,     5,     6,     7,     8,     9,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,    27,    28,    29,
       0,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,    43,     0,
       0,   327,     0,     0,     0,     0,     0,    44,    45,    46,
      47,    48,    49,    50,   336,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
      52,    53,     1,     0,     2,     0,     3,     0,     4,   122,
       5,     6,     7,     0,     9,     0,    10,    11,    12,    13,
      14,    15,    16,    17,     0,    19,    20,    21,     0,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,    52,    53,
       1,     0,     2,     0,     3,     0,     4,     0,     5,     6,
       7,     0,     9,     0,    10,    11,    12,    13,    14,    15,
      16,    17,     0,    19,    20,    21,     0,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,    49,    50,
       1,     0,     2,     0,     3,     0,     0,     0,     5,     6,
       7,     0,     0,     0,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,    31,   240,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,    49,    50,
       1,     0,     2,     0,     3,     0,     0,     0,     5,     6,
       7,     0,     0,     0,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,    49,    50,
       2,   116,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,     0,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,    46,    47,    48,    49,    50,     2,     0,
       3,   120,     0,     0,     5,     6,     7,     0,     0,     0,
       0,     0,    51,     0,    52,    53,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,    46,    47,    48,    49,    50,     2,     0,     3,   273,
       0,     0,     5,     6,     7,     0,     0,     0,     0,     0,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,    44,    45,    46,
      47,    48,    49,    50,     2,   326,     3,     0,     0,     0,
       5,     6,     7,     0,     0,     0,     0,     0,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,    46,    47,    48,
      49,    50,     2,   335,     3,     0,     0,     0,     5,     6,
       7,     0,     0,     0,     0,     0,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,    49,    50,
       2,     0,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,     0,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,    46,    47,    48,    49,    50,     2,     0,
       3,     0,     0,     0,     5,     6,     7,     0,     0,     0,
       0,     0,    51,     0,    52,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
     222,     5,     6,     7,     0,     0,     0,     0,     0,    33,
       0,    35,    36,    37,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,    46,    47,    48,     0,    50,    33,     0,    35,    36,
      37,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,    52,    53,     0,     0,    44,    45,    46,    47,
      48,    49,    50,     2,     0,     3,     0,     0,     0,     5,
       6,     7,     0,     0,     0,     0,     0,     0,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,    40,   143,    42,   144,   145,
     146,     0,     0,     0,    33,     0,    35,    36,    37,    38,
      39,     0,    40,    41,    42,    43,   147,   148,   149,   150,
     151,   152,   153,   154,    44,    45,    46,    47,    48,     0,
      50,     0,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    53
};

static const yytype_int16 yycheck[] =
{
       0,     0,     2,     3,     4,    27,    11,    46,    79,   164,
     233,    11,   139,   129,     8,    15,    16,    17,   207,    19,
      18,   125,   170,     4,    18,    47,    48,     1,     6,     5,
     168,    29,    30,    33,    34,    29,    30,    28,     6,   357,
      32,    33,   113,   227,    44,    45,     3,   180,     5,     5,
      50,     7,   337,   157,     5,    75,    56,    56,   162,   377,
      80,    65,     4,    63,   135,    41,    44,    41,   311,   312,
     203,    47,    61,    47,    50,    64,    50,     5,   108,    35,
     365,   324,    47,   267,    41,    50,    90,     5,   110,   119,
      47,    50,    92,    50,    75,     9,    45,    86,    54,    80,
      56,    50,   240,   388,     7,    87,   391,    75,   108,   131,
      91,    87,    80,    87,   114,   358,    65,   221,   222,   119,
     247,    63,   113,    91,   163,   241,   126,   275,   128,   129,
      87,    87,    35,    43,   323,   262,   359,    81,    82,   139,
      45,    90,   140,    41,   135,    50,   140,   302,     5,    47,
      46,    54,    50,    56,    53,    51,    55,    62,     0,   314,
      65,    47,   233,   386,    50,    30,    31,    32,    33,     5,
     170,   171,     7,     3,   174,    76,    77,    78,    79,    57,
      58,    59,     3,   183,    87,    90,    17,    74,    19,    87,
      84,    83,    85,   193,    63,     6,   196,   197,   198,    60,
       8,    87,     3,    10,    62,     9,   206,   207,   208,   209,
     210,   211,   212,    62,    62,   215,   216,   217,   218,   219,
     220,     3,    45,    47,    65,   225,   226,   298,     6,   125,
       4,     6,     4,    73,     7,    88,   236,     4,   238,     5,
       5,   241,     6,     6,     6,    88,     5,   247,     6,     6,
     250,     5,    62,     6,   254,   255,    88,     3,    10,     9,
       5,   157,   262,    34,     6,    16,   162,   163,    62,     2,
       3,     6,     9,     4,     6,   275,     6,     3,     3,   301,
       4,    10,    10,    16,     6,     4,    19,    10,   359,     3,
       3,   377,   338,   393,   294,    56,   191,   398,   303,   338,
     305,    34,   343,   303,   352,   305,   306,   307,   127,   197,
      28,   382,    45,   253,    84,   386,   321,    50,    86,    31,
     268,   321,   389,   323,   368,   221,   222,    28,    28,   400,
     335,   227,    28,    28,    90,   335,   208,   337,   209,   361,
     210,   341,   215,   211,   218,   212,   351,    17,   370,   354,
     216,   351,   352,   217,   354,   171,   219,   357,   357,    17,
     220,    17,    -1,    -1,    -1,   365,    -1,    -1,   368,    -1,
      -1,   267,    -1,    -1,    -1,   397,    -1,   377,   377,    -1,
      -1,   114,    -1,    -1,    -1,    -1,     1,    -1,   388,   394,
       5,   391,     7,   126,   394,   128,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   311,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,
      -1,    46,    -1,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,   338,    -1,    -1,    -1,    -1,   343,   344,    -1,
     183,    66,    67,   349,    -1,    -1,    -1,    72,    -1,    -1,
     193,    -1,   358,   196,    -1,   198,    -1,   363,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,   389,    -1,    -1,    -1,   393,    -1,    -1,
      -1,    -1,   398,    -1,     3,   238,     5,    -1,     7,    -1,
       9,    -1,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      -1,    40,    41,    42,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,   294,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,   307,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      89,    90,     3,    -1,     5,    -1,     7,    -1,     9,    10,
      11,    12,    13,    -1,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    89,    90,
       3,    -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,
      13,    -1,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    26,    27,    28,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
       3,    -1,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
      13,    -1,    -1,    -1,    87,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
       3,    -1,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
      13,    -1,    -1,    -1,    87,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,     5,    -1,
       7,     8,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,     5,    -1,     7,     8,
      -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,     5,     6,     7,    -1,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    87,    -1,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,
      37,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    -1,    72,    46,    -1,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    46,    -1,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    75,    76,    77,    78,
      79,    80,    81,    82,    66,    67,    68,    69,    70,    -1,
      72,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    36,    37,    38,
      40,    41,    42,    46,    47,    48,    49,    50,    51,    52,
      54,    55,    56,    57,    66,    67,    68,    69,    70,    71,
      72,    87,    89,    90,   105,   106,   107,   108,   113,   114,
     117,   118,   126,   127,   128,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   145,   146,
     147,   148,   149,   151,   155,   156,   157,   159,   161,   164,
     165,   166,   167,   169,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     197,   200,   201,   202,   203,   204,     6,   128,   141,   194,
       8,   141,    10,   114,   157,   158,     5,   127,     5,     5,
     128,   141,     1,   128,   201,   202,   204,   158,   141,    87,
     154,   126,    53,    55,    57,    58,    59,    75,    76,    77,
      78,    79,    80,    81,    82,    91,   144,   160,   175,   176,
     177,   178,   200,   158,   158,   128,   166,    65,    90,   162,
     163,   128,   196,   141,    43,   112,   128,   141,   119,   120,
     167,   126,   126,     5,   141,   119,   121,   198,     0,   106,
     114,    45,    62,     5,     3,     3,     4,   144,     7,   145,
     156,   149,   163,   128,   170,   171,    61,    64,    86,    74,
      84,    85,    83,    75,    80,   174,   175,   176,   177,   178,
      63,    60,    37,   195,   126,     7,    35,    87,   143,   145,
     200,   141,     6,     8,    10,   116,   121,   141,   135,   141,
      42,   140,     3,   126,    62,    62,    62,     9,     3,   112,
     158,   121,   121,   115,   119,   154,   162,   170,   196,    47,
     128,     6,     4,     6,   147,   141,    73,     4,    88,   113,
     141,   141,   148,     8,   147,     4,   141,   179,   180,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   193,
     121,   121,   128,   198,     5,   199,     6,   145,   146,     6,
      44,   153,   128,     6,   141,     6,   162,   140,   112,    88,
     128,     5,     5,   153,   128,   128,   129,   112,     6,   198,
     164,     6,   170,    62,     5,    88,     6,   141,     6,   126,
     154,   127,     3,   127,   128,     6,   141,    10,    34,   109,
     122,   167,   122,   154,     9,   127,   180,   122,     6,     5,
     152,    16,    62,   127,     6,   129,   120,     9,     4,   128,
     172,     6,     3,     5,   124,   167,     1,   150,   167,   168,
       6,   122,   123,   127,   142,   127,     3,   107,   110,   111,
     122,   145,   146,   126,   124,   125,   129,   173,    10,     3,
     172,    10,   126,     4,     6,   111,    10,     6,     4,   145,
     146,   129,   168,   129,   123,   127,   126,   125,     3,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   106,   106,   107,   107,   107,   107,
     107,   107,   107,   108,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   116,   117,   118,
     119,   119,   120,   121,   122,   123,   123,   124,   125,   125,
     126,   126,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   129,   129,   130,   131,   132,   133,   133,
     133,   134,   135,   135,   136,   136,   136,   136,   136,   136,
     137,   137,   138,   138,   138,   139,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   144,   144,   144,   145,   145,
     145,   146,   146,   146,   147,   147,   148,   148,   148,   149,
     150,   151,   151,   152,   152,   124,   124,   153,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   157,   158,   158,
     159,   160,   160,   160,   160,   160,   161,   161,   161,   161,
     161,   162,   162,   163,   163,   164,   164,   165,   165,   166,
     167,   167,   168,   168,   169,   169,   170,   170,   171,   171,
     172,   172,   172,   173,   173,   173,   174,   174,   175,   175,
     175,   175,   176,   176,   177,   177,   178,   178,   178,   179,
     179,   180,   180,   180,   181,   181,   182,   182,   183,   183,
     184,   184,   185,   185,   186,   186,   187,   187,   188,   188,
     189,   189,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   194,   194,   194,   194,   194,   195,   195,   195,
     195,   195,   196,   196,   197,   197,   198,   198,   199,   199,
     200,   200,   201,   202,   202,   202,   202,   202,   203,   203,
     203,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     8,     2,     0,     1,     0,     1,     2,
       1,     3,     1,     3,     1,     2,     4,     4,     4,     6,
       1,     2,     1,     1,     2,     1,     3,     2,     1,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     7,     2,     3,     3,     3,
       3,     3,     1,     1,     5,     5,     6,     7,     9,     5,
       5,     7,     1,     1,     1,     3,     2,     2,     1,     1,
       3,     1,     3,     3,     0,     1,     1,     1,     3,     4,
       4,     2,     3,     2,     1,     1,     1,     1,     3,     2,
       2,     1,     2,     2,     1,     2,     1,     2,     1,     3,
       0,     1,     1,     1,     1,     1,     1,     2,     0,     1,
       5,     1,     1,     1,     1,     1,     1,     9,     7,     7,
       2,     0,     1,     2,     1,     1,     3,     1,     4,     2,
       1,     2,     2,     3,     9,     9,     1,     3,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     5,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     2,     2,     1,     1,     3,     3,     2,
       1,     1,     3,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     2,     2
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
  YYUSE (yytype);
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
  YYUSE (yytype);
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
#line 143 "ly/gwion.y"
    { arg->ast = (yyvsp[0].ast); }
#line 2133 "src/parser.c"
    break;

  case 3:
#line 144 "ly/gwion.y"
    { gwion_error(&(yyloc), arg, "file is empty.\n"); YYERROR; }
#line 2139 "src/parser.c"
    break;

  case 4:
#line 147 "ly/gwion.y"
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2145 "src/parser.c"
    break;

  case 5:
#line 148 "ly/gwion.y"
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2151 "src/parser.c"
    break;

  case 6:
#line 152 "ly/gwion.y"
    { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2157 "src/parser.c"
    break;

  case 7:
#line 153 "ly/gwion.y"
    { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2163 "src/parser.c"
    break;

  case 8:
#line 154 "ly/gwion.y"
    { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2169 "src/parser.c"
    break;

  case 9:
#line 155 "ly/gwion.y"
    { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2175 "src/parser.c"
    break;

  case 10:
#line 156 "ly/gwion.y"
    { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2181 "src/parser.c"
    break;

  case 11:
#line 157 "ly/gwion.y"
    { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2187 "src/parser.c"
    break;

  case 12:
#line 158 "ly/gwion.y"
    { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2193 "src/parser.c"
    break;

  case 13:
#line 163 "ly/gwion.y"
    { (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].class_body), GET_LOC(&(yyloc)));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-6].id_list), -1);
  }
#line 2202 "src/parser.c"
    break;

  case 14:
#line 168 "ly/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2208 "src/parser.c"
    break;

  case 15:
#line 168 "ly/gwion.y"
    { (yyval.type_decl) = NULL; }
#line 2214 "src/parser.c"
    break;

  case 17:
#line 170 "ly/gwion.y"
    { (yyval.class_body) = NULL; }
#line 2220 "src/parser.c"
    break;

  case 18:
#line 173 "ly/gwion.y"
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[0].section), NULL); }
#line 2226 "src/parser.c"
    break;

  case 19:
#line 174 "ly/gwion.y"
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2232 "src/parser.c"
    break;

  case 20:
#line 177 "ly/gwion.y"
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2238 "src/parser.c"
    break;

  case 21:
#line 177 "ly/gwion.y"
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2244 "src/parser.c"
    break;

  case 22:
#line 178 "ly/gwion.y"
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yylsp[0]))); }
#line 2250 "src/parser.c"
    break;

  case 23:
#line 178 "ly/gwion.y"
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2256 "src/parser.c"
    break;

  case 24:
#line 180 "ly/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2262 "src/parser.c"
    break;

  case 25:
#line 180 "ly/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2268 "src/parser.c"
    break;

  case 26:
#line 182 "ly/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1); }
#line 2275 "src/parser.c"
    break;

  case 27:
#line 184 "ly/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1); }
#line 2282 "src/parser.c"
    break;

  case 28:
#line 187 "ly/gwion.y"
    {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag));
}
#line 2294 "src/parser.c"
    break;

  case 29:
#line 194 "ly/gwion.y"
    {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1);
}
#line 2305 "src/parser.c"
    break;

  case 31:
#line 201 "ly/gwion.y"
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2311 "src/parser.c"
    break;

  case 32:
#line 203 "ly/gwion.y"
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2319 "src/parser.c"
    break;

  case 33:
#line 207 "ly/gwion.y"
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2327 "src/parser.c"
    break;

  case 34:
#line 211 "ly/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2333 "src/parser.c"
    break;

  case 35:
#line 212 "ly/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2339 "src/parser.c"
    break;

  case 36:
#line 212 "ly/gwion.y"
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2345 "src/parser.c"
    break;

  case 37:
#line 213 "ly/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2351 "src/parser.c"
    break;

  case 38:
#line 214 "ly/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2357 "src/parser.c"
    break;

  case 39:
#line 214 "ly/gwion.y"
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2363 "src/parser.c"
    break;

  case 40:
#line 217 "ly/gwion.y"
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2369 "src/parser.c"
    break;

  case 41:
#line 218 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2375 "src/parser.c"
    break;

  case 51:
#line 236 "ly/gwion.y"
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2381 "src/parser.c"
    break;

  case 52:
#line 237 "ly/gwion.y"
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2391 "src/parser.c"
    break;

  case 54:
#line 244 "ly/gwion.y"
    { (yyval.sym) = NULL; }
#line 2397 "src/parser.c"
    break;

  case 55:
#line 247 "ly/gwion.y"
    { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-5].flag); }
#line 2404 "src/parser.c"
    break;

  case 56:
#line 250 "ly/gwion.y"
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2410 "src/parser.c"
    break;

  case 57:
#line 252 "ly/gwion.y"
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2416 "src/parser.c"
    break;

  case 58:
#line 255 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2422 "src/parser.c"
    break;

  case 59:
#line 256 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2428 "src/parser.c"
    break;

  case 60:
#line 257 "ly/gwion.y"
    { gw_err(_("unhandled expression type in case statement.\n")); YYERROR; }
#line 2434 "src/parser.c"
    break;

  case 61:
#line 260 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_switch(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2440 "src/parser.c"
    break;

  case 62:
#line 263 "ly/gwion.y"
    { (yyval.ival) = ae_stmt_while; }
#line 2446 "src/parser.c"
    break;

  case 63:
#line 264 "ly/gwion.y"
    { (yyval.ival) = ae_stmt_until; }
#line 2452 "src/parser.c"
    break;

  case 64:
#line 268 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2458 "src/parser.c"
    break;

  case 65:
#line 270 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2464 "src/parser.c"
    break;

  case 66:
#line 272 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2470 "src/parser.c"
    break;

  case 67:
#line 274 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2476 "src/parser.c"
    break;

  case 68:
#line 276 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2482 "src/parser.c"
    break;

  case 69:
#line 278 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2488 "src/parser.c"
    break;

  case 70:
#line 283 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2494 "src/parser.c"
    break;

  case 71:
#line 285 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2500 "src/parser.c"
    break;

  case 72:
#line 289 "ly/gwion.y"
    { (yyval.ival) = ae_stmt_return; }
#line 2506 "src/parser.c"
    break;

  case 73:
#line 290 "ly/gwion.y"
    { (yyval.ival) = ae_stmt_break; }
#line 2512 "src/parser.c"
    break;

  case 74:
#line 291 "ly/gwion.y"
    { (yyval.ival) = ae_stmt_continue; }
#line 2518 "src/parser.c"
    break;

  case 75:
#line 294 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2524 "src/parser.c"
    break;

  case 76:
#line 295 "ly/gwion.y"
    { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2530 "src/parser.c"
    break;

  case 77:
#line 299 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2536 "src/parser.c"
    break;

  case 78:
#line 300 "ly/gwion.y"
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2542 "src/parser.c"
    break;

  case 80:
#line 303 "ly/gwion.y"
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2548 "src/parser.c"
    break;

  case 82:
#line 305 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2554 "src/parser.c"
    break;

  case 83:
#line 307 "ly/gwion.y"
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2560 "src/parser.c"
    break;

  case 84:
#line 307 "ly/gwion.y"
    { (yyval.type_list) = NULL; }
#line 2566 "src/parser.c"
    break;

  case 88:
#line 312 "ly/gwion.y"
    { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2572 "src/parser.c"
    break;

  case 89:
#line 313 "ly/gwion.y"
    { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2578 "src/parser.c"
    break;

  case 90:
#line 314 "ly/gwion.y"
    { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2584 "src/parser.c"
    break;

  case 91:
#line 318 "ly/gwion.y"
    { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2590 "src/parser.c"
    break;

  case 92:
#line 319 "ly/gwion.y"
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2596 "src/parser.c"
    break;

  case 93:
#line 320 "ly/gwion.y"
    { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2602 "src/parser.c"
    break;

  case 98:
#line 325 "ly/gwion.y"
    { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), GET_LOC(&(yyloc)))), (yyvsp[0].var_decl_list)); }
#line 2609 "src/parser.c"
    break;

  case 99:
#line 327 "ly/gwion.y"
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2615 "src/parser.c"
    break;

  case 100:
#line 328 "ly/gwion.y"
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2621 "src/parser.c"
    break;

  case 102:
#line 329 "ly/gwion.y"
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2627 "src/parser.c"
    break;

  case 103:
#line 331 "ly/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2633 "src/parser.c"
    break;

  case 104:
#line 331 "ly/gwion.y"
    { (yyval.arg_list) = NULL; }
#line 2639 "src/parser.c"
    break;

  case 105:
#line 332 "ly/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2645 "src/parser.c"
    break;

  case 106:
#line 332 "ly/gwion.y"
    { (yyval.arg_list) = NULL; }
#line 2651 "src/parser.c"
    break;

  case 107:
#line 333 "ly/gwion.y"
    { (yyval.flag) = ae_flag_variadic; }
#line 2657 "src/parser.c"
    break;

  case 108:
#line 333 "ly/gwion.y"
    { (yyval.flag) = 0; }
#line 2663 "src/parser.c"
    break;

  case 109:
#line 335 "ly/gwion.y"
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2669 "src/parser.c"
    break;

  case 110:
#line 335 "ly/gwion.y"
    { (yyval.id_list) = NULL; }
#line 2675 "src/parser.c"
    break;

  case 111:
#line 337 "ly/gwion.y"
    { (yyval.flag) = ae_flag_static; }
#line 2681 "src/parser.c"
    break;

  case 112:
#line 338 "ly/gwion.y"
    { (yyval.flag) = ae_flag_global; }
#line 2687 "src/parser.c"
    break;

  case 113:
#line 341 "ly/gwion.y"
    { (yyval.flag) = ae_flag_private; }
#line 2693 "src/parser.c"
    break;

  case 114:
#line 342 "ly/gwion.y"
    { (yyval.flag) = ae_flag_protect; }
#line 2699 "src/parser.c"
    break;

  case 115:
#line 345 "ly/gwion.y"
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2705 "src/parser.c"
    break;

  case 116:
#line 346 "ly/gwion.y"
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2711 "src/parser.c"
    break;

  case 117:
#line 347 "ly/gwion.y"
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2717 "src/parser.c"
    break;

  case 118:
#line 350 "ly/gwion.y"
    { (yyval.flag) = 0; }
#line 2723 "src/parser.c"
    break;

  case 119:
#line 350 "ly/gwion.y"
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2729 "src/parser.c"
    break;

  case 120:
#line 354 "ly/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 2735 "src/parser.c"
    break;

  case 127:
#line 360 "ly/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2741 "src/parser.c"
    break;

  case 128:
#line 362 "ly/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 2747 "src/parser.c"
    break;

  case 129:
#line 364 "ly/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 2753 "src/parser.c"
    break;

  case 130:
#line 366 "ly/gwion.y"
    {
ID_List l = new_id_list(mpool(arg), insert_symbol("void"), GET_LOC(&(yyloc)));
(yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), new_type_decl(mpool(arg), l),
       insert_symbol("dtor"), NULL), (yyvsp[0].stmt), ae_flag_dtor, GET_LOC(&(yyloc))); }
#line 2762 "src/parser.c"
    break;

  case 131:
#line 371 "ly/gwion.y"
    { (yyval.ival) = 0; }
#line 2768 "src/parser.c"
    break;

  case 132:
#line 371 "ly/gwion.y"
    { (yyval.ival) = ae_flag_ref; }
#line 2774 "src/parser.c"
    break;

  case 133:
#line 372 "ly/gwion.y"
    { (yyval.ival) = ae_flag_nonnull | (yyvsp[0].ival); }
#line 2780 "src/parser.c"
    break;

  case 135:
#line 375 "ly/gwion.y"
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].id_list)); }
#line 2786 "src/parser.c"
    break;

  case 136:
#line 376 "ly/gwion.y"
    { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[-1].exp)); }
#line 2792 "src/parser.c"
    break;

  case 137:
#line 380 "ly/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2798 "src/parser.c"
    break;

  case 138:
#line 381 "ly/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 2804 "src/parser.c"
    break;

  case 139:
#line 385 "ly/gwion.y"
    { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 2810 "src/parser.c"
    break;

  case 140:
#line 388 "ly/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2816 "src/parser.c"
    break;

  case 141:
#line 389 "ly/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 2822 "src/parser.c"
    break;

  case 142:
#line 391 "ly/gwion.y"
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2828 "src/parser.c"
    break;

  case 143:
#line 392 "ly/gwion.y"
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2834 "src/parser.c"
    break;

  case 144:
#line 395 "ly/gwion.y"
    {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-3].decl_list), GET_LOC(&(yyloc)));
      (yyval.union_def)->type_xid = (yyvsp[-5].sym);
      (yyval.union_def)->xid = (yyvsp[-1].sym);
      (yyval.union_def)->flag = (yyvsp[-7].flag);
      if((yyvsp[-6].id_list)) {
        if(!(yyvsp[-5].sym)) {
          gw_err(_("Template unions requires type name\n"));
          YYERROR;
        }
        if((yyvsp[-1].sym)) {
          gw_err(_("Can't instantiate template union types at declaration site.\n"));
          YYERROR;
        }
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-6].id_list), -1);
      }
    }
#line 2856 "src/parser.c"
    break;

  case 145:
#line 412 "ly/gwion.y"
    {
    gw_err(_("Unions should only contain declarations.\n"));
    YYERROR;
    }
#line 2865 "src/parser.c"
    break;

  case 146:
#line 419 "ly/gwion.y"
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2871 "src/parser.c"
    break;

  case 147:
#line 420 "ly/gwion.y"
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2877 "src/parser.c"
    break;

  case 148:
#line 423 "ly/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2883 "src/parser.c"
    break;

  case 149:
#line 424 "ly/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2889 "src/parser.c"
    break;

  case 150:
#line 426 "ly/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2895 "src/parser.c"
    break;

  case 151:
#line 427 "ly/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2901 "src/parser.c"
    break;

  case 152:
#line 428 "ly/gwion.y"
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2907 "src/parser.c"
    break;

  case 153:
#line 429 "ly/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2913 "src/parser.c"
    break;

  case 154:
#line 430 "ly/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2919 "src/parser.c"
    break;

  case 155:
#line 431 "ly/gwion.y"
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2925 "src/parser.c"
    break;

  case 170:
#line 439 "ly/gwion.y"
    { (yyval.exp) = NULL; }
#line 2931 "src/parser.c"
    break;

  case 172:
#line 442 "ly/gwion.y"
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2937 "src/parser.c"
    break;

  case 173:
#line 444 "ly/gwion.y"
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 2943 "src/parser.c"
    break;

  case 175:
#line 446 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2949 "src/parser.c"
    break;

  case 177:
#line 447 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2955 "src/parser.c"
    break;

  case 179:
#line 448 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2961 "src/parser.c"
    break;

  case 181:
#line 449 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2967 "src/parser.c"
    break;

  case 183:
#line 450 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2973 "src/parser.c"
    break;

  case 185:
#line 451 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2979 "src/parser.c"
    break;

  case 187:
#line 452 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2985 "src/parser.c"
    break;

  case 189:
#line 453 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2991 "src/parser.c"
    break;

  case 191:
#line 454 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2997 "src/parser.c"
    break;

  case 193:
#line 455 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3003 "src/parser.c"
    break;

  case 195:
#line 456 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3009 "src/parser.c"
    break;

  case 197:
#line 458 "ly/gwion.y"
    { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3015 "src/parser.c"
    break;

  case 199:
#line 461 "ly/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3021 "src/parser.c"
    break;

  case 208:
#line 467 "ly/gwion.y"
    { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3027 "src/parser.c"
    break;

  case 209:
#line 468 "ly/gwion.y"
    {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3033 "src/parser.c"
    break;

  case 210:
#line 469 "ly/gwion.y"
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3039 "src/parser.c"
    break;

  case 211:
#line 470 "ly/gwion.y"
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3045 "src/parser.c"
    break;

  case 212:
#line 473 "ly/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3051 "src/parser.c"
    break;

  case 213:
#line 474 "ly/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3057 "src/parser.c"
    break;

  case 214:
#line 475 "ly/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3063 "src/parser.c"
    break;

  case 215:
#line 475 "ly/gwion.y"
    { (yyval.arg_list) = NULL; }
#line 3069 "src/parser.c"
    break;

  case 216:
#line 478 "ly/gwion.y"
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3075 "src/parser.c"
    break;

  case 217:
#line 479 "ly/gwion.y"
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3081 "src/parser.c"
    break;

  case 218:
#line 482 "ly/gwion.y"
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3087 "src/parser.c"
    break;

  case 219:
#line 482 "ly/gwion.y"
    { (yyval.exp) = NULL; }
#line 3093 "src/parser.c"
    break;

  case 222:
#line 486 "ly/gwion.y"
    { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3099 "src/parser.c"
    break;

  case 224:
#line 488 "ly/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3105 "src/parser.c"
    break;

  case 225:
#line 490 "ly/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3112 "src/parser.c"
    break;

  case 226:
#line 493 "ly/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3118 "src/parser.c"
    break;

  case 227:
#line 493 "ly/gwion.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3124 "src/parser.c"
    break;

  case 228:
#line 496 "ly/gwion.y"
    { (yyval.ival) = ae_primary_complex; }
#line 3130 "src/parser.c"
    break;

  case 229:
#line 497 "ly/gwion.y"
    { (yyval.ival) = ae_primary_polar;   }
#line 3136 "src/parser.c"
    break;

  case 230:
#line 498 "ly/gwion.y"
    { (yyval.ival) = ae_primary_vec;     }
#line 3142 "src/parser.c"
    break;

  case 231:
#line 501 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3148 "src/parser.c"
    break;

  case 232:
#line 502 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3154 "src/parser.c"
    break;

  case 233:
#line 503 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3160 "src/parser.c"
    break;

  case 234:
#line 504 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3166 "src/parser.c"
    break;

  case 235:
#line 505 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3172 "src/parser.c"
    break;

  case 236:
#line 506 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3178 "src/parser.c"
    break;

  case 237:
#line 507 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_vec(    mpool(arg), (yyvsp[-2].ival) ,(yyvsp[-1].exp)); }
#line 3184 "src/parser.c"
    break;

  case 238:
#line 508 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_unpack( mpool(arg), insert_symbol("auto"), (yyvsp[-1].id_list), GET_LOC(&(yyloc))); }
#line 3190 "src/parser.c"
    break;

  case 239:
#line 509 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_tuple(mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3196 "src/parser.c"
    break;

  case 240:
#line 510 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3202 "src/parser.c"
    break;

  case 241:
#line 511 "ly/gwion.y"
    { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3208 "src/parser.c"
    break;

  case 242:
#line 512 "ly/gwion.y"
    { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3214 "src/parser.c"
    break;

  case 243:
#line 513 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3220 "src/parser.c"
    break;


#line 3224 "src/parser.c"

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
#line 515 "ly/gwion.y"

