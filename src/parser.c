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

#line 93 "src/parser.c"

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
    PLUS = 309,
    PLUSPLUS = 310,
    MINUS = 311,
    MINUSMINUS = 312,
    TIMES = 313,
    DIVIDE = 314,
    PERCENT = 315,
    DOLLAR = 316,
    QUESTION = 317,
    COLON = 318,
    COLONCOLON = 319,
    QUESTIONCOLON = 320,
    ATSYM = 321,
    GTPAREN = 322,
    LTPAREN = 323,
    NEW = 324,
    SPORK = 325,
    FORK = 326,
    TYPEOF = 327,
    L_HACK = 328,
    R_HACK = 329,
    AND = 330,
    EQ = 331,
    GE = 332,
    GT = 333,
    LE = 334,
    LT = 335,
    NEQ = 336,
    SHIFT_LEFT = 337,
    SHIFT_RIGHT = 338,
    S_AND = 339,
    S_OR = 340,
    S_XOR = 341,
    OR = 342,
    LTMPL = 343,
    RTMPL = 344,
    TILDA = 345,
    EXCLAMATION = 346,
    DYNOP = 347,
    PP_COMMENT = 348,
    PP_INCLUDE = 349,
    PP_DEFINE = 350,
    PP_UNDEF = 351,
    PP_IFDEF = 352,
    PP_IFNDEF = 353,
    PP_ELSE = 354,
    PP_ENDIF = 355,
    PP_NL = 356,
    UMINUS = 357,
    UTIMES = 358
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
#define PLUS 309
#define PLUSPLUS 310
#define MINUS 311
#define MINUSMINUS 312
#define TIMES 313
#define DIVIDE 314
#define PERCENT 315
#define DOLLAR 316
#define QUESTION 317
#define COLON 318
#define COLONCOLON 319
#define QUESTIONCOLON 320
#define ATSYM 321
#define GTPAREN 322
#define LTPAREN 323
#define NEW 324
#define SPORK 325
#define FORK 326
#define TYPEOF 327
#define L_HACK 328
#define R_HACK 329
#define AND 330
#define EQ 331
#define GE 332
#define GT 333
#define LE 334
#define LT 335
#define NEQ 336
#define SHIFT_LEFT 337
#define SHIFT_RIGHT 338
#define S_AND 339
#define S_OR 340
#define S_XOR 341
#define OR 342
#define LTMPL 343
#define RTMPL 344
#define TILDA 345
#define EXCLAMATION 346
#define DYNOP 347
#define PP_COMMENT 348
#define PP_INCLUDE 349
#define PP_DEFINE 350
#define PP_UNDEF 351
#define PP_IFDEF 352
#define PP_IFNDEF 353
#define PP_ELSE 354
#define PP_ENDIF 355
#define PP_NL 356
#define UMINUS 357
#define UTIMES 358

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "ly/gwion.y"

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
  Class_Def class_def;
  Ast ast;

#line 372 "src/parser.c"

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
#define YYFINAL  180
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1437

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  105
/* YYNRULES -- Number of rules.  */
#define YYNRULES  245
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  414

#define YYUNDEFTOK  2
#define YYMAXUTOK   359

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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   139,   139,   140,   143,   144,   148,   149,   150,   151,
     152,   153,   154,   158,   164,   164,   166,   166,   169,   170,
     173,   173,   174,   174,   176,   176,   178,   180,   183,   190,
     197,   197,   199,   203,   207,   208,   208,   209,   210,   210,
     217,   218,   224,   225,   226,   227,   228,   229,   230,   231,
     235,   236,   243,   243,   246,   249,   251,   253,   253,   256,
     264,   265,   267,   267,   269,   277,   278,   281,   283,   285,
     287,   289,   291,   296,   298,   303,   304,   305,   308,   309,
     313,   314,   317,   317,   319,   319,   321,   321,   323,   323,
     323,   326,   327,   328,   332,   333,   334,   337,   337,   338,
     338,   339,   341,   342,   343,   343,   345,   345,   346,   346,
     347,   347,   349,   349,   351,   352,   355,   356,   359,   360,
     361,   364,   364,   367,   370,   370,   370,   370,   370,   373,
     374,   376,   378,   380,   390,   390,   391,   391,   394,   395,
     399,   400,   404,   407,   408,   410,   411,   414,   434,   435,
     438,   439,   441,   442,   443,   444,   445,   446,   448,   448,
     449,   449,   449,   449,   450,   450,   451,   451,   452,   452,
     452,   454,   454,   455,   456,   458,   461,   461,   462,   462,
     463,   463,   464,   464,   465,   465,   466,   466,   467,   467,
     468,   468,   469,   469,   470,   470,   471,   471,   473,   473,
     475,   475,   478,   478,   478,   479,   479,   479,   479,   482,
     482,   483,   484,   485,   488,   489,   490,   490,   493,   494,
     497,   497,   499,   499,   501,   502,   502,   504,   507,   508,
     511,   512,   513,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528
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
  "enum_def", "label_stmt", "goto_stmt", "when_exp", "match_case_stmt",
  "match_list", "where_stmt", "match_stmt", "flow", "loop_stmt",
  "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "array", "decl_exp2",
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
     355,   356,   357,   358,   359
};
# endif

#define YYPACT_NINF -314

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-314)))

#define YYTABLE_NINF -88

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     446,  -314,   835,   904,   535,  -314,  -314,  -314,    67,    33,
    -314,   624,  -314,    57,   117,    73,  1180,    67,  1180,  -314,
    -314,    41,  -314,  -314,  -314,  -314,   349,    67,    67,    16,
     -20,    73,  1180,  -314,  -314,    93,  -314,  -314,  -314,  -314,
    -314,  -314,    73,  1180,    -1,   136,   136,   142,  1180,    -1,
    -314,  -314,   155,  -314,   446,  -314,  -314,  -314,  -314,  -314,
    -314,   624,   102,  -314,  -314,  -314,  -314,   159,  -314,  -314,
     164,  -314,  -314,   166,    15,  -314,   165,  -314,  -314,  -314,
    -314,   123,  -314,    -1,  -314,  -314,  -314,   -20,  -314,    73,
    -314,  -314,    -5,    96,    88,    94,    92,     9,    55,    78,
      27,    91,   110,  -314,   118,  1249,  -314,   136,  -314,  -314,
      18,  1180,  -314,  -314,    26,   176,  1346,  -314,   175,  -314,
     177,  -314,    -1,  1180,    49,  1180,   695,   188,   185,   186,
     193,    73,    67,  -314,  -314,  -314,  -314,  -314,    73,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,    -1,
    -314,  -314,  -314,  -314,    -1,    -1,    41,   151,  -314,  -314,
    -314,  -314,    73,    73,  -314,   158,    73,   207,   210,   209,
    -314,  -314,   213,  -314,  -314,  1180,   143,  -314,   212,   133,
    -314,  -314,  -314,    73,  -314,  1180,  -314,  -314,  1180,  1180,
     973,  -314,  -314,  -314,  -314,   213,  -314,   219,  1180,  1277,
    1277,  1277,  1277,  1277,  1277,  -314,  -314,  1277,  1277,  1277,
    1277,  1277,  1346,    -1,    -1,  -314,  -314,  -314,  1180,    73,
      -1,   220,  -314,  -314,   218,  -314,   213,  -314,    39,    73,
     221,  1180,   222,   -20,   766,  -314,   202,    73,  -314,   141,
      73,    -1,   227,   228,    39,    73,    73,  -314,  -314,  -314,
    -314,  -314,    73,  -314,  -314,   229,  -314,    -1,    28,  -314,
     230,  -314,  -314,  -314,  -314,    73,  -314,   178,  -314,    96,
      88,    94,    92,     9,    55,    78,    27,    91,   110,   118,
    -314,   233,  -314,   150,  1042,  -314,  -314,  -314,   165,  -314,
     236,   136,    41,   624,   240,   624,    73,  1111,  1180,   202,
     234,   237,  -314,   214,   243,    -1,    -1,  -314,    41,  -314,
     242,  -314,  -314,  -314,  -314,   624,  -314,  1277,    -1,  -314,
    -314,   247,  -314,  -314,   243,   238,  -314,  -314,   192,   624,
     250,   232,  -314,   241,    73,    -1,   249,    -1,   253,   256,
      73,   258,    90,    16,  -314,  -314,   260,  -314,  -314,   624,
    1180,  -314,   624,  1180,   205,   624,  -314,   268,  -314,   446,
     269,  -314,   136,    -1,   213,  -314,   136,  -314,    -1,  -314,
     271,    73,   265,   136,  -314,    22,  -314,  -314,   624,  -314,
    -314,   446,   266,  -314,    -1,  -314,   272,  -314,   165,  -314,
     273,  -314,    73,    16,  -314,    73,  -314,   624,  -314,  -314,
    -314,  -314,   136,    -1,   213,  -314,  -314,   276,  -314,  -314,
    -314,  -314,   165,  -314
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    81,     0,     0,     0,   231,   230,   232,   121,     0,
      65,     0,    66,     0,     0,     0,     0,   121,    75,    76,
      77,   113,   114,   115,   116,   117,     0,   121,   121,     0,
     134,   217,     0,   234,   235,    50,   236,   237,   222,   202,
     223,   203,     0,     0,     0,   206,   207,     0,     0,     0,
     208,   205,     0,     2,     4,     8,   138,     6,    11,    12,
      45,    24,   233,     9,    46,    47,    48,     0,    43,    44,
       0,    49,    42,     0,    82,    97,    98,   238,    84,   104,
     100,   119,   118,     0,   129,     7,   140,   134,   143,     0,
      10,    99,   173,   176,   178,   180,   182,   184,   186,   188,
     190,   192,   194,   196,   198,     0,   200,     0,   204,   229,
     209,     0,   225,   245,   233,     0,     0,    94,     0,    40,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   166,   167,   168,   169,   170,     0,    88,
     163,   161,   162,   160,    89,   164,   165,    90,   124,     0,
     126,   125,   128,   127,     0,     0,   113,    22,   144,   135,
     136,   137,     0,   214,   216,     0,     0,     0,    20,     0,
      32,   211,    30,   212,   213,     0,     0,    33,   218,     0,
       1,     5,    25,     0,    55,     0,    79,    80,     0,     0,
       0,    96,   120,   105,   142,   150,   102,   148,   172,     0,
       0,     0,     0,     0,     0,   158,   159,     0,     0,     0,
       0,     0,     0,     0,     0,   233,   210,   244,     0,     0,
       0,     0,   226,   228,     0,   243,    91,    41,     0,     0,
       0,     0,     0,   134,     0,    56,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,    53,   101,   215,   139,
      51,   240,     0,   241,    31,     0,   242,     0,     0,    23,
       0,    83,    85,    95,   151,     0,   171,     0,   175,   177,
     179,   181,   183,   185,   187,   189,   191,   193,   195,   197,
     201,     0,   224,     0,     0,   227,   239,    92,    93,   111,
       0,     0,   113,     0,     0,     0,     0,     0,     0,    60,
       0,     0,   112,    15,     0,     0,     0,    28,   113,    52,
       0,    21,   199,   219,   141,     0,   149,     0,     0,    86,
     221,     0,   110,   123,     0,    73,    68,    72,     0,     0,
       0,    58,    61,    63,    53,     0,     0,   107,     0,     0,
       0,     0,     0,     0,    67,   174,     0,   220,    27,     0,
       0,    69,     0,     0,     0,     0,    64,     0,    14,    17,
      35,   106,     0,     0,   152,    34,     0,    29,   109,    26,
       0,     0,     0,     0,    74,     0,    70,    57,     0,    62,
      54,    18,     0,    16,     0,   133,     0,   154,   153,   131,
      38,   108,    53,   145,   103,    53,   132,     0,    59,    19,
      13,    36,     0,     0,   155,    37,   146,     0,    71,   130,
      39,   157,   156,   147
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -314,  -314,   226,  -303,  -314,  -314,  -314,  -100,  -110,   103,
       2,  -314,  -314,  -314,  -314,   -35,   -48,  -105,  -253,   -96,
    -314,  -114,   -19,   -10,     0,  -298,  -314,  -314,  -314,  -314,
    -314,    -9,  -314,  -314,   167,  -314,  -314,  -314,  -314,  -104,
     138,   -58,  -314,   277,    36,  -212,  -121,   105,   223,  -314,
    -314,   -22,  -314,    60,  -149,  -314,   231,    12,     7,  -314,
    -314,  -314,    74,   224,    50,  -313,   280,   -36,   -83,  -314,
    -150,  -314,   -57,  -314,  -314,   290,   292,   294,   295,  -314,
    -189,  -314,   122,   124,   128,   130,   127,   131,   129,   126,
     134,   135,  -314,   139,     5,   -47,   194,  -314,  -187,  -314,
      11,  -314,  -314,  -314,  -314
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    52,    53,    54,    55,   336,   382,   383,   167,    56,
      57,   244,   228,    58,    59,   177,   171,   178,   360,   361,
     390,   391,    60,    61,   157,   310,    63,    64,    65,   354,
     299,   300,   356,    66,    67,    68,    69,    70,    71,    72,
      73,    74,   221,   189,    75,    76,    77,    78,    79,   370,
      80,   338,   369,   291,   132,    81,    82,    83,   122,    84,
     149,    85,   161,   162,    86,    87,    88,    89,   372,    90,
     196,   197,   365,   405,   207,   208,   209,   210,   211,   267,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   116,   106,   164,   107,   179,   285,
     108,   109,   110,   111,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   124,   114,   114,    62,   105,   120,   246,   172,   170,
     268,    62,   247,   172,   288,   127,   114,   229,   114,   188,
     121,   239,   234,   -87,   129,   218,   173,   174,   397,   121,
     371,   163,   114,   283,   155,   156,   357,   154,   123,   121,
     121,    29,   168,   114,   242,   289,   159,    32,   114,   243,
      35,   254,   339,   341,    62,   219,   381,   198,   216,   105,
     199,    62,   125,   182,    32,   346,    10,    35,    12,   216,
     313,   160,   183,    38,   264,    40,    32,   -22,   381,    35,
     371,   133,   200,   134,   290,   205,   172,    49,   217,   195,
     206,   139,   -22,   367,   404,   368,   144,   407,   139,    22,
      23,    24,    25,   144,    49,   215,   220,   147,   280,   281,
     386,   114,   191,   172,   147,   316,   215,   -22,   172,   172,
     245,   223,   126,   114,    35,   114,   114,   301,   345,   131,
     297,   168,   140,   141,   142,   143,   304,   166,   241,   240,
     115,   118,   311,   324,   121,     4,   222,   175,   183,   135,
     136,   137,   388,   -22,   128,   180,   130,    24,    25,   342,
     145,   146,   195,   163,   185,   184,   250,   186,   -22,   187,
     165,   201,   190,   202,   212,   114,   204,   172,   172,   213,
     203,   169,   225,   226,   172,   114,   176,   227,   114,   114,
     114,   235,   412,   -22,   236,   237,   238,   183,   114,   215,
     215,   215,   215,   215,   215,   172,   249,   215,   215,   215,
     215,   215,   215,   251,   252,   253,   257,   256,   114,   282,
       3,   172,   258,   265,   286,   284,   298,   293,   295,   292,
     302,   114,   305,   306,   114,   312,   315,   168,   318,   319,
     303,   317,   322,   326,   333,   308,   309,   334,   337,   224,
     335,   343,   168,   347,   349,   350,   352,   353,   359,   362,
     363,   230,   287,   232,   366,   195,   373,   355,   378,   340,
     340,   380,   323,   384,   393,   395,   400,   403,   402,   413,
     181,   399,   340,   325,   114,   327,   259,   358,   401,   410,
     332,   231,   375,    62,   262,    62,   328,   114,   114,   172,
     170,   340,   348,   148,   307,   344,   193,   296,   314,   158,
     406,   194,   192,   255,   394,    62,   150,   215,   151,   351,
     152,   153,   269,   260,   191,   270,   261,   340,   118,    62,
     271,   273,   392,   272,   309,   276,   266,   275,   274,   374,
     364,     0,   376,   385,   277,   379,   278,   389,   340,    62,
     114,   279,    62,   114,   396,    62,   118,   248,     0,    62,
       0,     0,     0,     0,   105,     0,     0,   392,     0,   294,
       0,   364,     0,     0,     0,     0,     0,     0,    62,     0,
     398,    62,     0,   409,     0,     0,   105,   408,     0,     0,
       0,     0,   309,     0,     0,   309,     0,    62,     0,     0,
     387,     0,     0,   133,    38,   134,    40,   135,   136,   137,
       0,     0,     0,     0,     0,   138,     0,     0,     0,     0,
       0,     0,   321,     0,   191,   139,   140,   141,   142,   143,
     144,   145,   146,     0,     0,   330,   331,     0,     0,     0,
     411,   147,     0,     0,     0,     0,     0,     0,   191,     1,
       0,     2,     0,     3,     0,     4,     0,     5,     6,     7,
       8,     9,     0,    10,    11,    12,    13,    14,    15,    16,
       0,     0,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,    26,    27,     0,    28,    29,    30,
       0,   377,     0,    31,    32,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,    44,    45,    46,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,    50,    51,     1,     0,
       2,     0,     3,     0,     4,   119,     5,     6,     7,     0,
       9,     0,    10,    11,    12,    13,    14,    15,    16,     0,
       0,     0,     0,    18,    19,    20,     0,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,    29,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
      38,    39,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,    44,    45,    46,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,    50,    51,     1,     0,     2,
       0,     3,     0,     4,     0,     5,     6,     7,     0,     9,
       0,    10,    11,    12,    13,    14,    15,    16,     0,     0,
       0,     0,    18,    19,    20,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,    38,
      39,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,     1,     0,
       2,     0,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,    49,     0,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,    29,   233,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
      38,    39,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,    44,    45,    46,    47,    48,     1,
       0,     2,     0,     3,     0,     0,     0,     5,     6,     7,
       0,     0,     0,    49,     0,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,    44,    45,    46,    47,    48,
       2,   113,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,     0,    49,     0,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,    29,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
      38,    39,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,    44,    45,    46,    47,    48,     2,
       0,     3,   117,     0,     0,     5,     6,     7,     0,     0,
       0,     0,     0,    49,     0,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,    38,
      39,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,     2,     0,
       3,   263,     0,     0,     5,     6,     7,     0,     0,     0,
       0,     0,    49,     0,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,    29,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    43,    44,    45,    46,    47,    48,     2,   320,     3,
       0,     0,     0,     5,     6,     7,     0,     0,     0,     0,
       0,    49,     0,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      43,    44,    45,    46,    47,    48,     2,   329,     3,     0,
       0,     0,     5,     6,     7,     0,     0,     0,     0,     0,
      49,     0,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,     0,    38,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,    45,    46,    47,    48,     2,     0,     3,     0,     0,
       0,     5,     6,     7,     0,     0,     0,     0,     0,    49,
       0,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,    38,    39,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    43,    44,
      45,    46,    47,    48,     2,     0,     3,     0,     0,     0,
       5,     6,     7,     0,     0,     0,     0,     0,    49,     0,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     0,     0,   214,     5,     6,
       7,     0,     0,     0,     0,     0,    31,     0,    33,    34,
      35,    36,    37,     0,    38,    39,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,     0,    48,     0,    31,     0,    33,    34,    35,    36,
      37,     0,    38,    39,    40,    41,     0,     0,     0,    50,
      51,     0,     0,     0,    42,    43,    44,    45,    46,    47,
      48,     2,     0,     3,     0,     0,     0,     5,     6,     7,
       0,     0,     0,     0,     0,     0,     0,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,    44,    45,    46,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51
};

static const yytype_int16 yycheck[] =
{
       0,    11,     2,     3,     4,     0,     4,   156,    44,    44,
     199,    11,   162,    49,   226,    15,    16,   122,    18,     4,
       8,   131,   126,     5,    17,     7,    45,    46,     6,    17,
     343,    31,    32,   220,    27,    28,   334,    26,     5,    27,
      28,    42,    42,    43,   149,     6,    66,    48,    48,   154,
      51,   172,   305,   306,    54,    37,   359,    62,   105,    54,
      65,    61,     5,    61,    48,   318,    17,    51,    19,   116,
     257,    91,    46,    55,   195,    57,    48,    51,   381,    51,
     393,    54,    87,    56,    45,    76,   122,    88,   107,    89,
      81,    76,    66,     3,   392,     5,    81,   395,    76,    32,
      33,    34,    35,    81,    88,   105,    88,    92,   213,   214,
     363,   111,    76,   149,    92,   265,   116,    91,   154,   155,
     155,   110,     5,   123,    51,   125,   126,   237,   317,    88,
     234,   131,    77,    78,    79,    80,   241,    44,   138,   132,
       2,     3,   252,   292,   132,     9,   110,     5,    46,    58,
      59,    60,   364,    51,    16,     0,    18,    34,    35,   308,
      82,    83,   162,   163,     5,    63,   166,     3,    66,     3,
      32,    75,     7,    85,    64,   175,    84,   213,   214,    61,
      86,    43,     6,     8,   220,   185,    48,    10,   188,   189,
     190,     3,   404,    91,     9,     9,     3,    46,   198,   199,
     200,   201,   202,   203,   204,   241,    48,   207,   208,   209,
     210,   211,   212,     6,     4,     6,     4,    74,   218,   219,
       7,   257,    89,     4,     6,     5,    24,     6,     6,   229,
      89,   231,     5,     5,   234,     6,     6,   237,     5,    89,
     240,    63,     6,     3,    10,   245,   246,    10,     5,   111,
      36,     9,   252,     6,    16,    63,     6,    25,     9,     6,
       4,   123,   226,   125,     6,   265,     6,    26,    63,   305,
     306,     3,   291,     4,     3,    10,    10,     4,     6,     3,
      54,   381,   318,   293,   284,   295,   183,   335,   384,   403,
     299,   124,   350,   293,   189,   295,   296,   297,   298,   335,
     335,   337,   324,    26,   244,   315,    83,   233,   258,    29,
     393,    87,    81,   175,   371,   315,    26,   317,    26,   329,
      26,    26,   200,   185,   288,   201,   188,   363,   190,   329,
     202,   204,   368,   203,   334,   209,   198,   208,   207,   349,
     340,    -1,   352,   362,   210,   355,   211,   366,   384,   349,
     350,   212,   352,   353,   373,   355,   218,   163,    -1,   359,
      -1,    -1,    -1,    -1,   359,    -1,    -1,   403,    -1,   231,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,   378,    -1,
     378,   381,    -1,   402,    -1,    -1,   381,   397,    -1,    -1,
      -1,    -1,   392,    -1,    -1,   395,    -1,   397,    -1,    -1,
     364,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,   284,    -1,   388,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,   297,   298,    -1,    -1,    -1,
     404,    92,    -1,    -1,    -1,    -1,    -1,    -1,   412,     3,
      -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    38,    39,    -1,    41,    42,    43,
      -1,   353,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    90,    91,     3,    -1,
       5,    -1,     7,    -1,     9,    10,    11,    12,    13,    -1,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    90,    91,     3,    -1,     5,
      -1,     7,    -1,     9,    -1,    11,    12,    13,    -1,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    -1,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,     3,    -1,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    88,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,     3,
      -1,     5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    88,    -1,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,     5,
      -1,     7,     8,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,     5,    -1,
       7,     8,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,     5,     6,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    38,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    -1,    73,    -1,    47,    -1,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
      73,     5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    38,    39,    41,    42,
      43,    47,    48,    49,    50,    51,    52,    53,    55,    56,
      57,    58,    67,    68,    69,    70,    71,    72,    73,    88,
      90,    91,   106,   107,   108,   109,   114,   115,   118,   119,
     127,   128,   129,   131,   132,   133,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   149,   150,   151,   152,   153,
     155,   160,   161,   162,   164,   166,   169,   170,   171,   172,
     174,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   202,   205,   206,
     207,   208,   209,     6,   129,   145,   199,     8,   145,    10,
     115,   162,   163,     5,   128,     5,     5,   129,   145,   163,
     145,    88,   159,    54,    56,    58,    59,    60,    66,    76,
      77,    78,    79,    80,    81,    82,    83,    92,   148,   165,
     180,   181,   182,   183,   205,   163,   163,   129,   171,    66,
      91,   167,   168,   129,   201,   145,    44,   113,   129,   145,
     120,   121,   172,   127,   127,     5,   145,   120,   122,   203,
       0,   107,   115,    46,    63,     5,     3,     3,     4,   148,
       7,   149,   161,   153,   168,   129,   175,   176,    62,    65,
      87,    75,    85,    86,    84,    76,    81,   179,   180,   181,
     182,   183,    64,    61,    38,   129,   200,   127,     7,    37,
      88,   147,   149,   205,   145,     6,     8,    10,   117,   122,
     145,   139,   145,    43,   144,     3,     9,     9,     3,   113,
     163,   129,   122,   122,   116,   120,   159,   175,   201,    48,
     129,     6,     4,     6,   151,   145,    74,     4,    89,   114,
     145,   145,   152,     8,   151,     4,   145,   184,   185,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   198,
     122,   122,   129,   203,     5,   204,     6,   149,   150,     6,
      45,   158,   129,     6,   145,     6,   167,   144,    24,   135,
     136,   113,    89,   129,   122,     5,     5,   158,   129,   129,
     130,   113,     6,   203,   169,     6,   175,    63,     5,    89,
       6,   145,     6,   127,   159,   128,     3,   128,   129,     6,
     145,   145,   136,    10,    10,    36,   110,     5,   156,   123,
     172,   123,   159,     9,   128,   185,   123,     6,   156,    16,
      63,   128,     6,    25,   134,    26,   137,   130,   121,     9,
     123,   124,     6,     4,   129,   177,     6,     3,     5,   157,
     154,   170,   173,     6,   128,   146,   128,   145,    63,   128,
       3,   108,   111,   112,     4,   127,   123,   149,   150,   127,
     125,   126,   172,     3,   177,    10,   127,     6,   115,   112,
      10,   124,     6,     4,   130,   178,   173,   130,   128,   127,
     126,   149,   150,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   106,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   117,   118,   119,
     120,   120,   121,   122,   123,   124,   124,   125,   126,   126,
     127,   127,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   129,   130,   130,   131,   132,   133,   134,   134,   135,
     136,   136,   137,   137,   138,   139,   139,   140,   140,   140,
     140,   140,   140,   141,   141,   142,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     148,   149,   149,   149,   150,   150,   150,   151,   151,   152,
     152,   152,   153,   154,   155,   155,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   162,
     162,   163,   163,   164,   165,   165,   165,   165,   165,   166,
     166,   166,   166,   166,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   172,   172,   173,   173,   174,   175,   175,
     176,   176,   177,   177,   177,   178,   178,   178,   179,   179,
     180,   180,   180,   180,   181,   181,   182,   182,   183,   183,
     183,   184,   184,   185,   185,   185,   186,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   191,   191,   192,   192,
     193,   193,   194,   194,   195,   195,   196,   196,   197,   197,
     198,   198,   199,   199,   199,   199,   199,   199,   199,   200,
     200,   200,   200,   200,   201,   201,   202,   202,   203,   203,
     204,   204,   205,   205,   206,   207,   207,   207,   207,   207,
     208,   208,   208,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     8,     2,     0,     1,     0,     1,     2,
       1,     3,     1,     3,     1,     2,     4,     4,     4,     6,
       1,     2,     1,     1,     2,     1,     3,     2,     1,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     0,     7,     2,     3,     2,     0,     5,
       1,     2,     2,     0,     6,     1,     1,     5,     5,     6,
       7,     9,     5,     5,     7,     1,     1,     1,     3,     2,
       2,     1,     1,     3,     1,     3,     3,     0,     1,     1,
       1,     3,     4,     4,     2,     3,     2,     1,     1,     1,
       1,     3,     2,     2,     1,     2,     2,     1,     2,     1,
       2,     1,     3,     0,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     5,     1,     1,     1,     1,     1,     1,
       9,     7,     7,     7,     0,     1,     1,     1,     1,     3,
       1,     4,     2,     1,     2,     2,     3,     9,     1,     3,
       1,     2,     1,     2,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     5,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     2,     2,     1,     1,     3,
       3,     2,     1,     1,     3,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     2,     2
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
#line 139 "ly/gwion.y"
    { arg->ast = (yyvsp[0].ast); }
#line 2127 "src/parser.c"
    break;

  case 3:
#line 140 "ly/gwion.y"
    { gwion_error(&(yyloc), arg, "file is empty.\n"); YYERROR; }
#line 2133 "src/parser.c"
    break;

  case 4:
#line 143 "ly/gwion.y"
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2139 "src/parser.c"
    break;

  case 5:
#line 144 "ly/gwion.y"
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2145 "src/parser.c"
    break;

  case 6:
#line 148 "ly/gwion.y"
    { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2151 "src/parser.c"
    break;

  case 7:
#line 149 "ly/gwion.y"
    { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2157 "src/parser.c"
    break;

  case 8:
#line 150 "ly/gwion.y"
    { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2163 "src/parser.c"
    break;

  case 9:
#line 151 "ly/gwion.y"
    { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2169 "src/parser.c"
    break;

  case 10:
#line 152 "ly/gwion.y"
    { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2175 "src/parser.c"
    break;

  case 11:
#line 153 "ly/gwion.y"
    { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2181 "src/parser.c"
    break;

  case 12:
#line 154 "ly/gwion.y"
    { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2187 "src/parser.c"
    break;

  case 13:
#line 159 "ly/gwion.y"
    { (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].class_body), GET_LOC(&(yyloc)));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-6].id_list), -1);
  }
#line 2196 "src/parser.c"
    break;

  case 14:
#line 164 "ly/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2202 "src/parser.c"
    break;

  case 15:
#line 164 "ly/gwion.y"
    { (yyval.type_decl) = NULL; }
#line 2208 "src/parser.c"
    break;

  case 17:
#line 166 "ly/gwion.y"
    { (yyval.class_body) = NULL; }
#line 2214 "src/parser.c"
    break;

  case 18:
#line 169 "ly/gwion.y"
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[0].section), NULL); }
#line 2220 "src/parser.c"
    break;

  case 19:
#line 170 "ly/gwion.y"
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2226 "src/parser.c"
    break;

  case 20:
#line 173 "ly/gwion.y"
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2232 "src/parser.c"
    break;

  case 21:
#line 173 "ly/gwion.y"
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2238 "src/parser.c"
    break;

  case 22:
#line 174 "ly/gwion.y"
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yylsp[0]))); }
#line 2244 "src/parser.c"
    break;

  case 23:
#line 174 "ly/gwion.y"
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2250 "src/parser.c"
    break;

  case 24:
#line 176 "ly/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2256 "src/parser.c"
    break;

  case 25:
#line 176 "ly/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2262 "src/parser.c"
    break;

  case 26:
#line 178 "ly/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1); }
#line 2269 "src/parser.c"
    break;

  case 27:
#line 180 "ly/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1); }
#line 2276 "src/parser.c"
    break;

  case 28:
#line 183 "ly/gwion.y"
    {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag));
}
#line 2288 "src/parser.c"
    break;

  case 29:
#line 190 "ly/gwion.y"
    {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1);
}
#line 2299 "src/parser.c"
    break;

  case 31:
#line 197 "ly/gwion.y"
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2305 "src/parser.c"
    break;

  case 32:
#line 199 "ly/gwion.y"
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2313 "src/parser.c"
    break;

  case 33:
#line 203 "ly/gwion.y"
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2321 "src/parser.c"
    break;

  case 34:
#line 207 "ly/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2327 "src/parser.c"
    break;

  case 35:
#line 208 "ly/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2333 "src/parser.c"
    break;

  case 36:
#line 208 "ly/gwion.y"
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2339 "src/parser.c"
    break;

  case 37:
#line 209 "ly/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2345 "src/parser.c"
    break;

  case 38:
#line 210 "ly/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2351 "src/parser.c"
    break;

  case 39:
#line 210 "ly/gwion.y"
    {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2361 "src/parser.c"
    break;

  case 40:
#line 217 "ly/gwion.y"
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2367 "src/parser.c"
    break;

  case 41:
#line 218 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2373 "src/parser.c"
    break;

  case 50:
#line 235 "ly/gwion.y"
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2379 "src/parser.c"
    break;

  case 51:
#line 236 "ly/gwion.y"
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2389 "src/parser.c"
    break;

  case 53:
#line 243 "ly/gwion.y"
    { (yyval.sym) = NULL; }
#line 2395 "src/parser.c"
    break;

  case 54:
#line 246 "ly/gwion.y"
    { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-5].flag); }
#line 2402 "src/parser.c"
    break;

  case 55:
#line 249 "ly/gwion.y"
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2408 "src/parser.c"
    break;

  case 56:
#line 251 "ly/gwion.y"
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2414 "src/parser.c"
    break;

  case 57:
#line 253 "ly/gwion.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2420 "src/parser.c"
    break;

  case 58:
#line 253 "ly/gwion.y"
    { (yyval.exp) = NULL; }
#line 2426 "src/parser.c"
    break;

  case 59:
#line 256 "ly/gwion.y"
    {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2437 "src/parser.c"
    break;

  case 60:
#line 264 "ly/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2443 "src/parser.c"
    break;

  case 61:
#line 265 "ly/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2449 "src/parser.c"
    break;

  case 62:
#line 267 "ly/gwion.y"
    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2455 "src/parser.c"
    break;

  case 63:
#line 267 "ly/gwion.y"
    { (yyval.stmt) = NULL; }
#line 2461 "src/parser.c"
    break;

  case 64:
#line 269 "ly/gwion.y"
    {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2472 "src/parser.c"
    break;

  case 65:
#line 277 "ly/gwion.y"
    { (yyval.ival) = ae_stmt_while; }
#line 2478 "src/parser.c"
    break;

  case 66:
#line 278 "ly/gwion.y"
    { (yyval.ival) = ae_stmt_until; }
#line 2484 "src/parser.c"
    break;

  case 67:
#line 282 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2490 "src/parser.c"
    break;

  case 68:
#line 284 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2496 "src/parser.c"
    break;

  case 69:
#line 286 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2502 "src/parser.c"
    break;

  case 70:
#line 288 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2508 "src/parser.c"
    break;

  case 71:
#line 290 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2514 "src/parser.c"
    break;

  case 72:
#line 292 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2520 "src/parser.c"
    break;

  case 73:
#line 297 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2526 "src/parser.c"
    break;

  case 74:
#line 299 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2532 "src/parser.c"
    break;

  case 75:
#line 303 "ly/gwion.y"
    { (yyval.ival) = ae_stmt_return; }
#line 2538 "src/parser.c"
    break;

  case 76:
#line 304 "ly/gwion.y"
    { (yyval.ival) = ae_stmt_break; }
#line 2544 "src/parser.c"
    break;

  case 77:
#line 305 "ly/gwion.y"
    { (yyval.ival) = ae_stmt_continue; }
#line 2550 "src/parser.c"
    break;

  case 78:
#line 308 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2556 "src/parser.c"
    break;

  case 79:
#line 309 "ly/gwion.y"
    { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2562 "src/parser.c"
    break;

  case 80:
#line 313 "ly/gwion.y"
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2568 "src/parser.c"
    break;

  case 81:
#line 314 "ly/gwion.y"
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2574 "src/parser.c"
    break;

  case 83:
#line 317 "ly/gwion.y"
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2580 "src/parser.c"
    break;

  case 85:
#line 319 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2586 "src/parser.c"
    break;

  case 86:
#line 321 "ly/gwion.y"
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2592 "src/parser.c"
    break;

  case 87:
#line 321 "ly/gwion.y"
    { (yyval.type_list) = NULL; }
#line 2598 "src/parser.c"
    break;

  case 91:
#line 326 "ly/gwion.y"
    { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2604 "src/parser.c"
    break;

  case 92:
#line 327 "ly/gwion.y"
    { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2610 "src/parser.c"
    break;

  case 93:
#line 328 "ly/gwion.y"
    { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2616 "src/parser.c"
    break;

  case 94:
#line 332 "ly/gwion.y"
    { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2622 "src/parser.c"
    break;

  case 95:
#line 333 "ly/gwion.y"
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2628 "src/parser.c"
    break;

  case 96:
#line 334 "ly/gwion.y"
    { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2634 "src/parser.c"
    break;

  case 101:
#line 339 "ly/gwion.y"
    { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), GET_LOC(&(yyloc)))), (yyvsp[0].var_decl_list)); }
#line 2641 "src/parser.c"
    break;

  case 102:
#line 341 "ly/gwion.y"
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2647 "src/parser.c"
    break;

  case 103:
#line 342 "ly/gwion.y"
    { (yyvsp[-1].type_decl)->flag |= ae_flag_ref | ae_flag_nonnull; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2653 "src/parser.c"
    break;

  case 105:
#line 343 "ly/gwion.y"
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2659 "src/parser.c"
    break;

  case 106:
#line 345 "ly/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2665 "src/parser.c"
    break;

  case 107:
#line 345 "ly/gwion.y"
    { (yyval.arg_list) = NULL; }
#line 2671 "src/parser.c"
    break;

  case 108:
#line 346 "ly/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2677 "src/parser.c"
    break;

  case 109:
#line 346 "ly/gwion.y"
    { (yyval.arg_list) = NULL; }
#line 2683 "src/parser.c"
    break;

  case 110:
#line 347 "ly/gwion.y"
    { (yyval.flag) = ae_flag_variadic; }
#line 2689 "src/parser.c"
    break;

  case 111:
#line 347 "ly/gwion.y"
    { (yyval.flag) = 0; }
#line 2695 "src/parser.c"
    break;

  case 112:
#line 349 "ly/gwion.y"
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2701 "src/parser.c"
    break;

  case 113:
#line 349 "ly/gwion.y"
    { (yyval.id_list) = NULL; }
#line 2707 "src/parser.c"
    break;

  case 114:
#line 351 "ly/gwion.y"
    { (yyval.flag) = ae_flag_static; }
#line 2713 "src/parser.c"
    break;

  case 115:
#line 352 "ly/gwion.y"
    { (yyval.flag) = ae_flag_global; }
#line 2719 "src/parser.c"
    break;

  case 116:
#line 355 "ly/gwion.y"
    { (yyval.flag) = ae_flag_private; }
#line 2725 "src/parser.c"
    break;

  case 117:
#line 356 "ly/gwion.y"
    { (yyval.flag) = ae_flag_protect; }
#line 2731 "src/parser.c"
    break;

  case 118:
#line 359 "ly/gwion.y"
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2737 "src/parser.c"
    break;

  case 119:
#line 360 "ly/gwion.y"
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2743 "src/parser.c"
    break;

  case 120:
#line 361 "ly/gwion.y"
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2749 "src/parser.c"
    break;

  case 121:
#line 364 "ly/gwion.y"
    { (yyval.flag) = 0; }
#line 2755 "src/parser.c"
    break;

  case 122:
#line 364 "ly/gwion.y"
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2761 "src/parser.c"
    break;

  case 123:
#line 368 "ly/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 2767 "src/parser.c"
    break;

  case 130:
#line 375 "ly/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2773 "src/parser.c"
    break;

  case 131:
#line 377 "ly/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 2779 "src/parser.c"
    break;

  case 132:
#line 379 "ly/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 2785 "src/parser.c"
    break;

  case 133:
#line 381 "ly/gwion.y"
    {
  const m_str str = s_name((yyvsp[-4].sym));
  char c[strlen(str) + 2];
  c[0] = '@';
  strcpy(c + 1, str);
  const Symbol sym = insert_symbol(c);
 (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-3].type_decl), sym, (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc)));
}
#line 2798 "src/parser.c"
    break;

  case 134:
#line 390 "ly/gwion.y"
    { (yyval.ival) = 0; }
#line 2804 "src/parser.c"
    break;

  case 135:
#line 390 "ly/gwion.y"
    { (yyval.ival) = ae_flag_ref; }
#line 2810 "src/parser.c"
    break;

  case 136:
#line 391 "ly/gwion.y"
    { (yyval.ival) = ae_flag_nonnull; }
#line 2816 "src/parser.c"
    break;

  case 138:
#line 394 "ly/gwion.y"
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].id_list)); }
#line 2822 "src/parser.c"
    break;

  case 139:
#line 395 "ly/gwion.y"
    { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[-1].exp)); }
#line 2828 "src/parser.c"
    break;

  case 140:
#line 399 "ly/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2834 "src/parser.c"
    break;

  case 141:
#line 400 "ly/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 2840 "src/parser.c"
    break;

  case 142:
#line 404 "ly/gwion.y"
    { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 2846 "src/parser.c"
    break;

  case 143:
#line 407 "ly/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2852 "src/parser.c"
    break;

  case 144:
#line 408 "ly/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 2858 "src/parser.c"
    break;

  case 145:
#line 410 "ly/gwion.y"
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2864 "src/parser.c"
    break;

  case 146:
#line 411 "ly/gwion.y"
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2870 "src/parser.c"
    break;

  case 147:
#line 414 "ly/gwion.y"
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
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-6].id_list), -1);
      }
    }
#line 2892 "src/parser.c"
    break;

  case 148:
#line 434 "ly/gwion.y"
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2898 "src/parser.c"
    break;

  case 149:
#line 435 "ly/gwion.y"
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2904 "src/parser.c"
    break;

  case 150:
#line 438 "ly/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2910 "src/parser.c"
    break;

  case 151:
#line 439 "ly/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2916 "src/parser.c"
    break;

  case 152:
#line 441 "ly/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2922 "src/parser.c"
    break;

  case 153:
#line 442 "ly/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2928 "src/parser.c"
    break;

  case 154:
#line 443 "ly/gwion.y"
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2934 "src/parser.c"
    break;

  case 155:
#line 444 "ly/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2940 "src/parser.c"
    break;

  case 156:
#line 445 "ly/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2946 "src/parser.c"
    break;

  case 157:
#line 446 "ly/gwion.y"
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2952 "src/parser.c"
    break;

  case 172:
#line 454 "ly/gwion.y"
    { (yyval.exp) = NULL; }
#line 2958 "src/parser.c"
    break;

  case 174:
#line 457 "ly/gwion.y"
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2964 "src/parser.c"
    break;

  case 175:
#line 459 "ly/gwion.y"
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 2970 "src/parser.c"
    break;

  case 177:
#line 461 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2976 "src/parser.c"
    break;

  case 179:
#line 462 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2982 "src/parser.c"
    break;

  case 181:
#line 463 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2988 "src/parser.c"
    break;

  case 183:
#line 464 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2994 "src/parser.c"
    break;

  case 185:
#line 465 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3000 "src/parser.c"
    break;

  case 187:
#line 466 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3006 "src/parser.c"
    break;

  case 189:
#line 467 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3012 "src/parser.c"
    break;

  case 191:
#line 468 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3018 "src/parser.c"
    break;

  case 193:
#line 469 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3024 "src/parser.c"
    break;

  case 195:
#line 470 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3030 "src/parser.c"
    break;

  case 197:
#line 471 "ly/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3036 "src/parser.c"
    break;

  case 199:
#line 473 "ly/gwion.y"
    { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3042 "src/parser.c"
    break;

  case 201:
#line 476 "ly/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3048 "src/parser.c"
    break;

  case 210:
#line 482 "ly/gwion.y"
    { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3054 "src/parser.c"
    break;

  case 211:
#line 483 "ly/gwion.y"
    {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3060 "src/parser.c"
    break;

  case 212:
#line 484 "ly/gwion.y"
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3066 "src/parser.c"
    break;

  case 213:
#line 485 "ly/gwion.y"
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3072 "src/parser.c"
    break;

  case 214:
#line 488 "ly/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3078 "src/parser.c"
    break;

  case 215:
#line 489 "ly/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3084 "src/parser.c"
    break;

  case 216:
#line 490 "ly/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3090 "src/parser.c"
    break;

  case 217:
#line 490 "ly/gwion.y"
    { (yyval.arg_list) = NULL; }
#line 3096 "src/parser.c"
    break;

  case 218:
#line 493 "ly/gwion.y"
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3102 "src/parser.c"
    break;

  case 219:
#line 494 "ly/gwion.y"
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3108 "src/parser.c"
    break;

  case 220:
#line 497 "ly/gwion.y"
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3114 "src/parser.c"
    break;

  case 221:
#line 497 "ly/gwion.y"
    { (yyval.exp) = NULL; }
#line 3120 "src/parser.c"
    break;

  case 224:
#line 501 "ly/gwion.y"
    { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3126 "src/parser.c"
    break;

  case 226:
#line 503 "ly/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3132 "src/parser.c"
    break;

  case 227:
#line 505 "ly/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3139 "src/parser.c"
    break;

  case 228:
#line 508 "ly/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3145 "src/parser.c"
    break;

  case 229:
#line 508 "ly/gwion.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3151 "src/parser.c"
    break;

  case 230:
#line 511 "ly/gwion.y"
    { (yyval.ival) = ae_primary_complex; }
#line 3157 "src/parser.c"
    break;

  case 231:
#line 512 "ly/gwion.y"
    { (yyval.ival) = ae_primary_polar;   }
#line 3163 "src/parser.c"
    break;

  case 232:
#line 513 "ly/gwion.y"
    { (yyval.ival) = ae_primary_vec;     }
#line 3169 "src/parser.c"
    break;

  case 233:
#line 516 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3175 "src/parser.c"
    break;

  case 234:
#line 517 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3181 "src/parser.c"
    break;

  case 235:
#line 518 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3187 "src/parser.c"
    break;

  case 236:
#line 519 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3193 "src/parser.c"
    break;

  case 237:
#line 520 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3199 "src/parser.c"
    break;

  case 238:
#line 521 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3205 "src/parser.c"
    break;

  case 239:
#line 522 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_vec(    mpool(arg), (yyvsp[-2].ival) ,(yyvsp[-1].exp)); }
#line 3211 "src/parser.c"
    break;

  case 240:
#line 523 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_unpack( mpool(arg), insert_symbol("auto"), (yyvsp[-1].id_list), GET_LOC(&(yyloc))); }
#line 3217 "src/parser.c"
    break;

  case 241:
#line 524 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_tuple(mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3223 "src/parser.c"
    break;

  case 242:
#line 525 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3229 "src/parser.c"
    break;

  case 243:
#line 526 "ly/gwion.y"
    { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3235 "src/parser.c"
    break;

  case 244:
#line 527 "ly/gwion.y"
    { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3241 "src/parser.c"
    break;

  case 245:
#line 528 "ly/gwion.y"
    { (yyval.exp) = new_exp_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3247 "src/parser.c"
    break;


#line 3251 "src/parser.c"

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
#line 530 "ly/gwion.y"

