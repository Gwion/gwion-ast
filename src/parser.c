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
    PP_UNDEF = 312,
    PP_IFDEF = 313,
    PP_IFNDEF = 314,
    PP_ELSE = 315,
    PP_ENDIF = 316,
    PP_NL = 317,
    PLUS = 318,
    PLUSPLUS = 319,
    MINUS = 320,
    MINUSMINUS = 321,
    TIMES = 322,
    DIVIDE = 323,
    PERCENT = 324,
    DOLLAR = 325,
    QUESTION = 326,
    COLON = 327,
    COLONCOLON = 328,
    QUESTIONCOLON = 329,
    ATSYM = 330,
    GTPAREN = 331,
    LTPAREN = 332,
    NEW = 333,
    SPORK = 334,
    FORK = 335,
    TYPEOF = 336,
    L_HACK = 337,
    R_HACK = 338,
    AND = 339,
    EQ = 340,
    GE = 341,
    GT = 342,
    LE = 343,
    LT = 344,
    NEQ = 345,
    SHIFT_LEFT = 346,
    SHIFT_RIGHT = 347,
    S_AND = 348,
    S_OR = 349,
    S_XOR = 350,
    OR = 351,
    LTMPL = 352,
    RTMPL = 353,
    TILDA = 354,
    EXCLAMATION = 355,
    DYNOP = 356,
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
#define PP_COMMENT 309
#define PP_INCLUDE 310
#define PP_DEFINE 311
#define PP_UNDEF 312
#define PP_IFDEF 313
#define PP_IFNDEF 314
#define PP_ELSE 315
#define PP_ENDIF 316
#define PP_NL 317
#define PLUS 318
#define PLUSPLUS 319
#define MINUS 320
#define MINUSMINUS 321
#define TIMES 322
#define DIVIDE 323
#define PERCENT 324
#define DOLLAR 325
#define QUESTION 326
#define COLON 327
#define COLONCOLON 328
#define QUESTIONCOLON 329
#define ATSYM 330
#define GTPAREN 331
#define LTPAREN 332
#define NEW 333
#define SPORK 334
#define FORK 335
#define TYPEOF 336
#define L_HACK 337
#define R_HACK 338
#define AND 339
#define EQ 340
#define GE 341
#define GT 342
#define LE 343
#define LT 344
#define NEQ 345
#define SHIFT_LEFT 346
#define SHIFT_RIGHT 347
#define S_AND 348
#define S_OR 349
#define S_XOR 350
#define OR 351
#define LTMPL 352
#define RTMPL 353
#define TILDA 354
#define EXCLAMATION 355
#define DYNOP 356
#define UMINUS 357
#define UTIMES 358

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
#define YYFINAL  190
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1638

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  255
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  424

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
       0,   135,   135,   136,   139,   140,   144,   145,   146,   147,
     148,   149,   150,   154,   160,   160,   162,   162,   165,   166,
     169,   169,   170,   170,   172,   172,   174,   176,   179,   186,
     193,   193,   195,   199,   203,   204,   204,   205,   206,   206,
     213,   214,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     242,   243,   250,   250,   253,   256,   258,   260,   260,   263,
     271,   272,   274,   274,   276,   284,   285,   288,   290,   292,
     294,   296,   298,   303,   305,   310,   311,   312,   315,   316,
     320,   321,   324,   324,   326,   326,   328,   328,   330,   330,
     330,   333,   334,   335,   339,   340,   341,   344,   344,   345,
     345,   346,   348,   349,   350,   350,   352,   352,   353,   353,
     354,   354,   356,   356,   358,   359,   362,   363,   366,   367,
     368,   371,   371,   374,   377,   377,   377,   377,   377,   380,
     381,   383,   385,   387,   397,   397,   398,   398,   401,   402,
     406,   407,   411,   414,   415,   417,   418,   421,   441,   442,
     445,   446,   448,   449,   450,   451,   452,   453,   455,   455,
     456,   456,   456,   456,   457,   457,   458,   458,   459,   459,
     459,   461,   461,   462,   463,   465,   468,   468,   469,   469,
     470,   470,   471,   471,   472,   472,   473,   473,   474,   474,
     475,   475,   476,   476,   477,   477,   478,   478,   480,   480,
     482,   482,   485,   485,   485,   486,   486,   486,   486,   489,
     489,   490,   491,   492,   495,   496,   497,   497,   500,   501,
     504,   504,   506,   506,   508,   509,   509,   511,   514,   515,
     518,   519,   520,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535
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
  "\"#include\"", "\"#define>\"", "\"#undef\"", "\"#ifdef\"",
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
  "op", "array_exp", "array_empty", "array", "decl_exp2", "decl_exp",
  "union_exp", "decl_exp3", "func_args", "fptr_args", "arg_type",
  "decl_template", "storage_flag", "access_flag", "flag", "opt_flag",
  "func_def_base", "op_op", "func_def", "atsym", "decl_flag",
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
     355,   356,   357,   358,   359
};
# endif

#define YYPACT_NINF -320

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-320)))

#define YYTABLE_NINF -98

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     482,  -320,   916,   994,   580,  -320,  -320,  -320,   124,    50,
    -320,   678,  -320,    61,    65,    35,  1306,   124,  1306,  -320,
    -320,    12,  -320,  -320,  -320,  -320,   361,   124,   124,    -4,
      20,    35,  1306,  -320,  -320,    70,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,    35,  1306,    -8,   108,   108,   118,  1306,    -8,  -320,
    -320,   134,  -320,   482,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,   678,     8,  -320,  -320,  -320,  -320,   144,  -320,  -320,
     147,  -320,  -320,   150,    54,  -320,   153,  -320,  -320,  -320,
    -320,    67,  -320,    -8,  -320,  -320,  -320,    20,  -320,    35,
    -320,  -320,     7,    85,    60,    75,    78,    -6,    76,    51,
      33,    99,   101,  -320,   105,  1384,  -320,   108,  -320,  -320,
      28,  1306,  -320,  -320,    10,   171,  1538,  -320,   172,  -320,
     169,  -320,    -8,  1306,    88,  1306,   758,   178,   173,   174,
     181,    35,   124,  -320,  -320,  -320,  -320,  -320,    35,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,    -8,
    -320,  -320,  -320,  -320,    -8,    -8,    12,   141,  -320,  -320,
    -320,  -320,    35,    35,  -320,   140,    35,   183,   186,   185,
    -320,  -320,   187,  -320,  -320,  1306,   109,  -320,   192,   103,
    -320,  -320,  -320,    35,  -320,  1306,  -320,  -320,  1306,  1306,
    1072,  -320,  -320,  -320,  -320,   187,  -320,   193,  1306,  1460,
    1460,  1460,  1460,  1460,  1460,  -320,  -320,  1460,  1460,  1460,
    1460,  1460,  1538,    -8,    -8,  -320,  -320,  -320,  1306,    35,
      -8,   197,  -320,  -320,   198,  -320,   187,  -320,    32,    35,
     200,  1306,   209,    20,   838,  -320,   179,    35,  -320,   125,
      35,    -8,   211,   219,    32,    35,    35,  -320,  -320,  -320,
    -320,  -320,    35,  -320,  -320,   221,  -320,    -8,    16,  -320,
     224,  -320,  -320,  -320,  -320,    35,  -320,   159,  -320,    85,
      60,    75,    78,    -6,    76,    51,    33,    99,   101,   105,
    -320,   220,  -320,   135,  1150,  -320,  -320,  -320,   153,  -320,
     226,   108,    12,   678,   231,   678,    35,  1228,  1306,   179,
     225,   227,  -320,   202,   237,    -8,    -8,  -320,    12,  -320,
     234,  -320,  -320,  -320,  -320,   678,  -320,  1460,    -8,  -320,
    -320,   230,  -320,  -320,   237,   229,  -320,  -320,   176,   678,
     240,   236,  -320,   223,    35,    -8,   242,    -8,   246,   250,
      35,   257,   127,    -4,  -320,  -320,   258,  -320,  -320,   678,
    1306,  -320,   678,  1306,   194,   678,  -320,   262,  -320,   482,
     264,  -320,   108,    -8,   187,  -320,   108,  -320,    -8,  -320,
     266,    35,   261,   108,  -320,    21,  -320,  -320,   678,  -320,
    -320,   482,   263,  -320,    -8,  -320,   268,  -320,   153,  -320,
     272,  -320,    35,    -4,  -320,    35,  -320,   678,  -320,  -320,
    -320,  -320,   108,    -8,   187,  -320,  -320,   274,  -320,  -320,
    -320,  -320,   153,  -320
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    91,     0,     0,     0,   241,   240,   242,   131,     0,
      75,     0,    76,     0,     0,     0,     0,   131,    85,    86,
      87,   123,   124,   125,   126,   127,     0,   131,   131,     0,
     144,   227,     0,   244,   245,    60,   246,   247,    42,    43,
      44,    45,    46,    47,    48,    49,    50,   232,   212,   233,
     213,     0,     0,     0,   216,   217,     0,     0,     0,   218,
     215,     0,     2,     4,     8,   148,     6,    11,    12,    54,
      59,    24,   243,     9,    55,    56,    57,     0,    52,    53,
       0,    58,    51,     0,    92,   107,   108,   248,    94,   114,
     110,   129,   128,     0,   139,     7,   150,   144,   153,     0,
      10,   109,   183,   186,   188,   190,   192,   194,   196,   198,
     200,   202,   204,   206,   208,     0,   210,     0,   214,   239,
     219,     0,   235,   255,   243,     0,     0,   104,     0,    40,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,   176,   177,   178,   179,   180,     0,    98,
     173,   171,   172,   170,    99,   174,   175,   100,   134,     0,
     136,   135,   138,   137,     0,     0,   123,    22,   154,   145,
     146,   147,     0,   224,   226,     0,     0,     0,    20,     0,
      32,   221,    30,   222,   223,     0,     0,    33,   228,     0,
       1,     5,    25,     0,    65,     0,    89,    90,     0,     0,
       0,   106,   130,   115,   152,   160,   112,   158,   182,     0,
       0,     0,     0,     0,     0,   168,   169,     0,     0,     0,
       0,     0,     0,     0,     0,   243,   220,   254,     0,     0,
       0,     0,   236,   238,     0,   253,   101,    41,     0,     0,
       0,     0,     0,   144,     0,    66,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,    63,   111,   225,   149,
      61,   250,     0,   251,    31,     0,   252,     0,     0,    23,
       0,    93,    95,   105,   161,     0,   181,     0,   185,   187,
     189,   191,   193,   195,   197,   199,   201,   203,   205,   207,
     211,     0,   234,     0,     0,   237,   249,   102,   103,   121,
       0,     0,   123,     0,     0,     0,     0,     0,     0,    70,
       0,     0,   122,    15,     0,     0,     0,    28,   123,    62,
       0,    21,   209,   229,   151,     0,   159,     0,     0,    96,
     231,     0,   120,   133,     0,    83,    78,    82,     0,     0,
       0,    68,    71,    73,    63,     0,     0,   117,     0,     0,
       0,     0,     0,     0,    77,   184,     0,   230,    27,     0,
       0,    79,     0,     0,     0,     0,    74,     0,    14,    17,
      35,   116,     0,     0,   162,    34,     0,    29,   119,    26,
       0,     0,     0,     0,    84,     0,    80,    67,     0,    72,
      64,    18,     0,    16,     0,   143,     0,   164,   163,   141,
      38,   118,    63,   155,   113,    63,   142,     0,    69,    19,
      13,    36,     0,     0,   165,    37,   156,     0,    81,   140,
      39,   167,   166,   157
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,  -320,   215,  -319,  -320,  -320,  -320,  -112,  -131,    89,
       2,  -320,  -320,  -320,  -320,   -46,   -64,  -111,  -286,  -110,
    -320,  -130,   -41,  -320,   -10,     0,  -305,  -320,  -320,  -320,
    -320,  -320,   -24,  -320,  -320,   152,  -320,  -320,  -320,  -320,
    -117,    72,   -73,  -320,   265,   -58,  -228,  -136,    90,   195,
    -320,  -320,   -44,  -320,    38,  -157,  -320,   205,     9,    -5,
    -320,  -320,  -320,    55,   204,    29,  -312,   273,    94,   -99,
    -320,  -147,  -320,   -72,  -320,  -320,   284,   285,   286,   288,
    -320,  -189,  -320,   110,   111,   107,   113,   114,   104,   112,
     115,   116,   102,  -320,   119,     5,   -66,   160,  -320,  -185,
    -320,    -2,  -320,  -320,  -320,  -320
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    61,    62,    63,    64,   346,   392,   393,   177,    65,
      66,   254,   238,    67,    68,   187,   181,   188,   370,   371,
     400,   401,    69,    70,    71,   167,   320,    73,    74,    75,
     364,   309,   310,   366,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   231,   199,    85,    86,    87,    88,    89,
     380,    90,   348,   379,   301,   142,    91,    92,    93,   132,
      94,   159,    95,   171,   172,    96,    97,    98,    99,   382,
     100,   206,   207,   375,   415,   217,   218,   219,   220,   221,
     277,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   126,   116,   174,   117,   189,
     295,   118,   119,   120,   121,   122
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,   134,   124,   124,    72,   115,   130,   180,   298,   256,
     249,    72,   139,   183,   184,   137,   124,   131,   124,   244,
     278,   239,   165,   166,   164,   257,   131,   407,   201,   349,
     351,   173,   124,   -97,    29,   228,   131,   131,   299,   367,
      32,   381,   356,    35,    32,   293,   264,    35,   252,   226,
     391,   178,   124,   253,   193,   133,   193,   124,   198,   -22,
     226,   -22,   232,    72,    32,   229,   135,    35,   115,   274,
     136,    72,   391,   192,   125,   128,   227,   300,   208,   215,
     194,   209,   323,   -22,   216,   -22,    35,   396,   138,    58,
     140,   381,    47,    58,    49,   169,   143,   414,   144,   205,
     417,    24,    25,   210,   175,    10,   149,    12,   -22,   141,
     -22,   154,   290,   291,   176,   225,   311,     4,   233,   255,
     170,   124,   157,   185,   179,   230,   225,   307,   326,   186,
     377,   321,   378,   124,   190,   124,   124,   250,   355,   149,
     314,   178,   155,   156,   154,   334,   398,   182,   251,   195,
     196,   131,   182,   197,   212,   157,    22,    23,    24,    25,
     200,   352,   150,   151,   152,   153,   145,   146,   147,   211,
     213,   214,   205,   173,   222,   223,   260,   235,   297,   237,
     236,   245,   246,   247,   248,   124,   422,   193,   259,   261,
     262,   263,   266,   234,     3,   124,   267,   275,   124,   124,
     124,   268,   294,   308,   296,   240,   303,   242,   124,   225,
     225,   225,   225,   225,   225,   305,   315,   225,   225,   225,
     225,   225,   225,   312,   316,   328,   182,   322,   124,   292,
     325,   327,   332,   329,   336,   343,   357,   344,   345,   302,
     201,   124,   347,   353,   124,   359,   362,   178,   360,   365,
     313,   369,   372,   182,   373,   318,   319,   265,   182,   182,
     333,   363,   178,   376,   383,   390,   388,   270,   394,   403,
     271,   405,   128,   410,   412,   205,   413,   423,   191,   409,
     276,   368,   269,   420,   411,   342,   241,   385,   203,   272,
     358,   158,   317,   335,   124,   337,   202,   324,   306,   180,
     128,   204,   168,    72,   416,    72,   338,   124,   124,   404,
     160,   161,   162,   304,   163,   354,   397,   182,   182,   281,
     279,   284,   280,   288,   182,    72,   282,   225,   283,   361,
     285,   395,     0,   258,   286,   399,   287,     0,     0,    72,
     201,   289,   406,     0,   319,   182,     0,     0,     0,   384,
     374,     0,   386,     0,     0,   389,   421,     0,     0,    72,
     124,   182,    72,   124,   201,    72,   331,     0,     0,    72,
       0,   419,     0,     0,   115,     0,     0,     0,     0,   340,
     341,   374,     0,     0,     0,     0,     0,     0,    72,     0,
     408,    72,     0,     0,     0,     0,   115,   418,     0,     0,
       0,     0,   319,     0,     0,   319,     0,    72,     0,   350,
     350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   350,     0,   143,    47,   144,    49,   145,   146,
     147,     0,     0,     0,     0,   387,   148,     0,     0,   182,
       0,   350,     0,     0,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,   157,     0,     0,     0,     0,   350,     0,     0,
       0,     0,   402,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,   350,     3,
       0,     4,     0,     5,     6,     7,     8,     9,     0,    10,
      11,    12,    13,    14,    15,    16,     0,   402,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
      26,    27,     0,    28,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,     0,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,    59,    60,     1,     0,     2,     0,     3,     0,     4,
     129,     5,     6,     7,     0,     9,     0,    10,    11,    12,
      13,    14,    15,    16,     0,     0,     0,     0,    18,    19,
      20,     0,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,     0,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,    59,
      60,     1,     0,     2,     0,     3,     0,     4,     0,     5,
       6,     7,     0,     9,     0,    10,    11,    12,    13,    14,
      15,    16,     0,     0,     0,     0,    18,    19,    20,     0,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     0,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,     1,     0,     2,     0,     3,     0,     0,     0,     5,
       6,     7,     0,     0,     0,    58,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
      29,   243,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,     1,     0,     2,     0,     3,     0,     0,     0,     5,
       6,     7,     0,     0,     0,    58,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,     2,   123,     3,     0,     0,     0,     5,     6,     7,
       0,     0,     0,     0,     0,    58,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,    56,    57,     2,
       0,     3,   127,     0,     0,     5,     6,     7,     0,     0,
       0,     0,     0,    58,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,    55,    56,    57,     2,     0,     3,
     273,     0,     0,     5,     6,     7,     0,     0,     0,     0,
       0,    58,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,    56,    57,     2,   330,     3,     0,     0,
       0,     5,     6,     7,     0,     0,     0,     0,     0,    58,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,    56,    57,     2,   339,     3,     0,     0,     0,     5,
       6,     7,     0,     0,     0,     0,     0,    58,     0,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,     2,     0,     3,     0,     0,     0,     5,     6,     7,
       0,     0,     0,     0,     0,    58,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,    56,    57,     2,
       0,     3,     0,     0,     0,     5,     6,     7,     0,     0,
       0,     0,     0,    58,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,    55,     2,    57,     3,     0,     0,
       0,     5,     6,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,    56,    57,     2,     0,     3,     0,     0,     0,     5,
       6,     7,     0,     0,     0,     0,     0,     0,     0,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,     0,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60
};

static const yytype_int16 yycheck[] =
{
       0,    11,     2,     3,     4,     0,     4,    53,   236,   166,
     141,    11,    17,    54,    55,    15,    16,     8,    18,   136,
     209,   132,    27,    28,    26,   172,    17,     6,    86,   315,
     316,    31,    32,     5,    42,     7,    27,    28,     6,   344,
      48,   353,   328,    51,    48,   230,   182,    51,   159,   115,
     369,    51,    52,   164,    46,     5,    46,    57,     4,    51,
     126,    51,   120,    63,    48,    37,     5,    51,    63,   205,
       5,    71,   391,    71,     2,     3,   117,    45,    71,    85,
      72,    74,   267,    75,    90,    75,    51,   373,    16,    97,
      18,   403,    64,    97,    66,    75,    63,   402,    65,    99,
     405,    34,    35,    96,    32,    17,    85,    19,   100,    97,
     100,    90,   223,   224,    44,   115,   247,     9,   120,   165,
     100,   121,   101,     5,    52,    97,   126,   244,   275,    57,
       3,   262,     5,   133,     0,   135,   136,   142,   327,    85,
     251,   141,    91,    92,    90,   302,   374,    53,   148,     5,
       3,   142,    58,     3,    94,   101,    32,    33,    34,    35,
       7,   318,    86,    87,    88,    89,    67,    68,    69,    84,
      95,    93,   172,   173,    73,    70,   176,     6,   236,    10,
       8,     3,     9,     9,     3,   185,   414,    46,    48,     6,
       4,     6,    83,   121,     7,   195,     4,     4,   198,   199,
     200,    98,     5,    24,     6,   133,     6,   135,   208,   209,
     210,   211,   212,   213,   214,     6,     5,   217,   218,   219,
     220,   221,   222,    98,     5,     5,   132,     6,   228,   229,
       6,    72,     6,    98,     3,    10,     6,    10,    36,   239,
     298,   241,     5,     9,   244,    16,     6,   247,    72,    26,
     250,     9,     6,   159,     4,   255,   256,   185,   164,   165,
     301,    25,   262,     6,     6,     3,    72,   195,     4,     3,
     198,    10,   200,    10,     6,   275,     4,     3,    63,   391,
     208,   345,   193,   413,   394,   309,   134,   360,    93,   199,
     334,    26,   254,   303,   294,   305,    91,   268,   243,   345,
     228,    97,    29,   303,   403,   305,   306,   307,   308,   381,
      26,    26,    26,   241,    26,   325,   374,   223,   224,   212,
     210,   217,   211,   221,   230,   325,   213,   327,   214,   339,
     218,   372,    -1,   173,   219,   376,   220,    -1,    -1,   339,
     398,   222,   383,    -1,   344,   251,    -1,    -1,    -1,   359,
     350,    -1,   362,    -1,    -1,   365,   414,    -1,    -1,   359,
     360,   267,   362,   363,   422,   365,   294,    -1,    -1,   369,
      -1,   412,    -1,    -1,   369,    -1,    -1,    -1,    -1,   307,
     308,   381,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
     388,   391,    -1,    -1,    -1,    -1,   391,   407,    -1,    -1,
      -1,    -1,   402,    -1,    -1,   405,    -1,   407,    -1,   315,
     316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   328,    -1,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,   363,    75,    -1,    -1,   345,
      -1,   347,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,   373,    -1,    -1,
      -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,   394,     7,
      -1,     9,    -1,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    -1,   413,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    99,   100,     3,    -1,     5,    -1,     7,    -1,     9,
      10,    11,    12,    13,    -1,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,    29,
      30,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    99,
     100,     3,    -1,     5,    -1,     7,    -1,     9,    -1,    11,
      12,    13,    -1,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,     3,    -1,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    -1,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,     3,    -1,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    -1,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,     5,     6,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,     5,
      -1,     7,     8,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,     5,    -1,     7,
       8,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,     5,     6,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    97,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,     5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    80,     5,    82,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    38,    39,    41,    42,
      43,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    64,    65,    66,
      67,    76,    77,    78,    79,    80,    81,    82,    97,    99,
     100,   106,   107,   108,   109,   114,   115,   118,   119,   127,
     128,   129,   130,   132,   133,   134,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   150,   151,   152,   153,   154,
     156,   161,   162,   163,   165,   167,   170,   171,   172,   173,
     175,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   203,   206,   207,
     208,   209,   210,     6,   130,   146,   200,     8,   146,    10,
     115,   163,   164,     5,   129,     5,     5,   130,   146,   164,
     146,    97,   160,    63,    65,    67,    68,    69,    75,    85,
      86,    87,    88,    89,    90,    91,    92,   101,   149,   166,
     181,   182,   183,   184,   206,   164,   164,   130,   172,    75,
     100,   168,   169,   130,   202,   146,    44,   113,   130,   146,
     120,   121,   173,   127,   127,     5,   146,   120,   122,   204,
       0,   107,   115,    46,    72,     5,     3,     3,     4,   149,
       7,   150,   162,   154,   169,   130,   176,   177,    71,    74,
      96,    84,    94,    95,    93,    85,    90,   180,   181,   182,
     183,   184,    73,    70,    38,   130,   201,   127,     7,    37,
      97,   148,   150,   206,   146,     6,     8,    10,   117,   122,
     146,   140,   146,    43,   145,     3,     9,     9,     3,   113,
     164,   130,   122,   122,   116,   120,   160,   176,   202,    48,
     130,     6,     4,     6,   152,   146,    83,     4,    98,   114,
     146,   146,   153,     8,   152,     4,   146,   185,   186,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   199,
     122,   122,   130,   204,     5,   205,     6,   150,   151,     6,
      45,   159,   130,     6,   146,     6,   168,   145,    24,   136,
     137,   113,    98,   130,   122,     5,     5,   159,   130,   130,
     131,   113,     6,   204,   170,     6,   176,    72,     5,    98,
       6,   146,     6,   127,   160,   129,     3,   129,   130,     6,
     146,   146,   137,    10,    10,    36,   110,     5,   157,   123,
     173,   123,   160,     9,   129,   186,   123,     6,   157,    16,
      72,   129,     6,    25,   135,    26,   138,   131,   121,     9,
     123,   124,     6,     4,   130,   178,     6,     3,     5,   158,
     155,   171,   174,     6,   129,   147,   129,   146,    72,   129,
       3,   108,   111,   112,     4,   127,   123,   150,   151,   127,
     125,   126,   173,     3,   178,    10,   127,     6,   115,   112,
      10,   124,     6,     4,   131,   179,   174,   131,   129,   127,
     126,   150,   151,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   106,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   117,   118,   119,
     120,   120,   121,   122,   123,   124,   124,   125,   126,   126,
     127,   127,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   130,   131,   131,   132,   133,   134,   135,   135,   136,
     137,   137,   138,   138,   139,   140,   140,   141,   141,   141,
     141,   141,   141,   142,   142,   143,   143,   143,   144,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     149,   150,   150,   150,   151,   151,   151,   152,   152,   153,
     153,   153,   154,   155,   156,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     163,   164,   164,   165,   166,   166,   166,   166,   166,   167,
     167,   167,   167,   167,   168,   168,   169,   169,   170,   170,
     171,   171,   172,   173,   173,   174,   174,   175,   176,   176,
     177,   177,   178,   178,   178,   179,   179,   179,   180,   180,
     181,   181,   181,   181,   182,   182,   183,   183,   184,   184,
     184,   185,   185,   186,   186,   186,   187,   187,   188,   188,
     189,   189,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   199,   200,   200,   200,   200,   200,   200,   200,   201,
     201,   201,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   206,   207,   208,   208,   208,   208,   208,
     209,   209,   209,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210
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
#line 135 "src/gwion.y"
    { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2176 "src/parser.c"
    break;

  case 3:
#line 136 "src/gwion.y"
    { gwion_error(&(yyloc), arg, "file is empty.\n"); YYERROR; }
#line 2182 "src/parser.c"
    break;

  case 4:
#line 139 "src/gwion.y"
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2188 "src/parser.c"
    break;

  case 5:
#line 140 "src/gwion.y"
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2194 "src/parser.c"
    break;

  case 6:
#line 144 "src/gwion.y"
    { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2200 "src/parser.c"
    break;

  case 7:
#line 145 "src/gwion.y"
    { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2206 "src/parser.c"
    break;

  case 8:
#line 146 "src/gwion.y"
    { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2212 "src/parser.c"
    break;

  case 9:
#line 147 "src/gwion.y"
    { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2218 "src/parser.c"
    break;

  case 10:
#line 148 "src/gwion.y"
    { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2224 "src/parser.c"
    break;

  case 11:
#line 149 "src/gwion.y"
    { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2230 "src/parser.c"
    break;

  case 12:
#line 150 "src/gwion.y"
    { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2236 "src/parser.c"
    break;

  case 13:
#line 155 "src/gwion.y"
    { (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-6].id_list));
  }
#line 2245 "src/parser.c"
    break;

  case 14:
#line 160 "src/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2251 "src/parser.c"
    break;

  case 15:
#line 160 "src/gwion.y"
    { (yyval.type_decl) = NULL; }
#line 2257 "src/parser.c"
    break;

  case 17:
#line 162 "src/gwion.y"
    { (yyval.ast) = NULL; }
#line 2263 "src/parser.c"
    break;

  case 18:
#line 165 "src/gwion.y"
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2269 "src/parser.c"
    break;

  case 19:
#line 166 "src/gwion.y"
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2275 "src/parser.c"
    break;

  case 20:
#line 169 "src/gwion.y"
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2281 "src/parser.c"
    break;

  case 21:
#line 169 "src/gwion.y"
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2287 "src/parser.c"
    break;

  case 22:
#line 170 "src/gwion.y"
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yylsp[0]))); }
#line 2293 "src/parser.c"
    break;

  case 23:
#line 170 "src/gwion.y"
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2299 "src/parser.c"
    break;

  case 24:
#line 172 "src/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2305 "src/parser.c"
    break;

  case 25:
#line 172 "src/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2311 "src/parser.c"
    break;

  case 26:
#line 174 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2318 "src/parser.c"
    break;

  case 27:
#line 176 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2325 "src/parser.c"
    break;

  case 28:
#line 179 "src/gwion.y"
    {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag));
}
#line 2337 "src/parser.c"
    break;

  case 29:
#line 186 "src/gwion.y"
    {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2348 "src/parser.c"
    break;

  case 31:
#line 193 "src/gwion.y"
    { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2354 "src/parser.c"
    break;

  case 32:
#line 195 "src/gwion.y"
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2362 "src/parser.c"
    break;

  case 33:
#line 199 "src/gwion.y"
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2370 "src/parser.c"
    break;

  case 34:
#line 203 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2376 "src/parser.c"
    break;

  case 35:
#line 204 "src/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2382 "src/parser.c"
    break;

  case 36:
#line 204 "src/gwion.y"
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2388 "src/parser.c"
    break;

  case 37:
#line 205 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2394 "src/parser.c"
    break;

  case 38:
#line 206 "src/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2400 "src/parser.c"
    break;

  case 39:
#line 206 "src/gwion.y"
    {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2410 "src/parser.c"
    break;

  case 40:
#line 213 "src/gwion.y"
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2416 "src/parser.c"
    break;

  case 41:
#line 214 "src/gwion.y"
    { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2422 "src/parser.c"
    break;

  case 42:
#line 218 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2428 "src/parser.c"
    break;

  case 43:
#line 219 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2434 "src/parser.c"
    break;

  case 44:
#line 220 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2440 "src/parser.c"
    break;

  case 45:
#line 221 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2446 "src/parser.c"
    break;

  case 46:
#line 222 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2452 "src/parser.c"
    break;

  case 47:
#line 223 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2458 "src/parser.c"
    break;

  case 48:
#line 224 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2464 "src/parser.c"
    break;

  case 49:
#line 225 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2470 "src/parser.c"
    break;

  case 50:
#line 226 "src/gwion.y"
    { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2476 "src/parser.c"
    break;

  case 60:
#line 242 "src/gwion.y"
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2482 "src/parser.c"
    break;

  case 61:
#line 243 "src/gwion.y"
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2492 "src/parser.c"
    break;

  case 63:
#line 250 "src/gwion.y"
    { (yyval.sym) = NULL; }
#line 2498 "src/parser.c"
    break;

  case 64:
#line 253 "src/gwion.y"
    { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-5].flag); }
#line 2505 "src/parser.c"
    break;

  case 65:
#line 256 "src/gwion.y"
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2511 "src/parser.c"
    break;

  case 66:
#line 258 "src/gwion.y"
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2517 "src/parser.c"
    break;

  case 67:
#line 260 "src/gwion.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 2523 "src/parser.c"
    break;

  case 68:
#line 260 "src/gwion.y"
    { (yyval.exp) = NULL; }
#line 2529 "src/parser.c"
    break;

  case 69:
#line 263 "src/gwion.y"
    {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2540 "src/parser.c"
    break;

  case 70:
#line 271 "src/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2546 "src/parser.c"
    break;

  case 71:
#line 272 "src/gwion.y"
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2552 "src/parser.c"
    break;

  case 72:
#line 274 "src/gwion.y"
    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2558 "src/parser.c"
    break;

  case 73:
#line 274 "src/gwion.y"
    { (yyval.stmt) = NULL; }
#line 2564 "src/parser.c"
    break;

  case 74:
#line 276 "src/gwion.y"
    {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2575 "src/parser.c"
    break;

  case 75:
#line 284 "src/gwion.y"
    { (yyval.ival) = ae_stmt_while; }
#line 2581 "src/parser.c"
    break;

  case 76:
#line 285 "src/gwion.y"
    { (yyval.ival) = ae_stmt_until; }
#line 2587 "src/parser.c"
    break;

  case 77:
#line 289 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2593 "src/parser.c"
    break;

  case 78:
#line 291 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2599 "src/parser.c"
    break;

  case 79:
#line 293 "src/gwion.y"
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2605 "src/parser.c"
    break;

  case 80:
#line 295 "src/gwion.y"
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2611 "src/parser.c"
    break;

  case 81:
#line 297 "src/gwion.y"
    { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2617 "src/parser.c"
    break;

  case 82:
#line 299 "src/gwion.y"
    { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2623 "src/parser.c"
    break;

  case 83:
#line 304 "src/gwion.y"
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2629 "src/parser.c"
    break;

  case 84:
#line 306 "src/gwion.y"
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2635 "src/parser.c"
    break;

  case 85:
#line 310 "src/gwion.y"
    { (yyval.ival) = ae_stmt_return; }
#line 2641 "src/parser.c"
    break;

  case 86:
#line 311 "src/gwion.y"
    { (yyval.ival) = ae_stmt_break; }
#line 2647 "src/parser.c"
    break;

  case 87:
#line 312 "src/gwion.y"
    { (yyval.ival) = ae_stmt_continue; }
#line 2653 "src/parser.c"
    break;

  case 88:
#line 315 "src/gwion.y"
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2659 "src/parser.c"
    break;

  case 89:
#line 316 "src/gwion.y"
    { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2665 "src/parser.c"
    break;

  case 90:
#line 320 "src/gwion.y"
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2671 "src/parser.c"
    break;

  case 91:
#line 321 "src/gwion.y"
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2677 "src/parser.c"
    break;

  case 93:
#line 324 "src/gwion.y"
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2683 "src/parser.c"
    break;

  case 95:
#line 326 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2689 "src/parser.c"
    break;

  case 96:
#line 328 "src/gwion.y"
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2695 "src/parser.c"
    break;

  case 97:
#line 328 "src/gwion.y"
    { (yyval.type_list) = NULL; }
#line 2701 "src/parser.c"
    break;

  case 101:
#line 333 "src/gwion.y"
    { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2707 "src/parser.c"
    break;

  case 102:
#line 334 "src/gwion.y"
    { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2713 "src/parser.c"
    break;

  case 103:
#line 335 "src/gwion.y"
    { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2719 "src/parser.c"
    break;

  case 104:
#line 339 "src/gwion.y"
    { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2725 "src/parser.c"
    break;

  case 105:
#line 340 "src/gwion.y"
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2731 "src/parser.c"
    break;

  case 106:
#line 341 "src/gwion.y"
    { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2737 "src/parser.c"
    break;

  case 111:
#line 346 "src/gwion.y"
    { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), GET_LOC(&(yyloc)))), (yyvsp[0].var_decl_list)); }
#line 2744 "src/parser.c"
    break;

  case 112:
#line 348 "src/gwion.y"
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2750 "src/parser.c"
    break;

  case 113:
#line 349 "src/gwion.y"
    { (yyvsp[-1].type_decl)->flag |= ae_flag_ref | ae_flag_nonnull; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2756 "src/parser.c"
    break;

  case 115:
#line 350 "src/gwion.y"
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2762 "src/parser.c"
    break;

  case 116:
#line 352 "src/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2768 "src/parser.c"
    break;

  case 117:
#line 352 "src/gwion.y"
    { (yyval.arg_list) = NULL; }
#line 2774 "src/parser.c"
    break;

  case 118:
#line 353 "src/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2780 "src/parser.c"
    break;

  case 119:
#line 353 "src/gwion.y"
    { (yyval.arg_list) = NULL; }
#line 2786 "src/parser.c"
    break;

  case 120:
#line 354 "src/gwion.y"
    { (yyval.flag) = ae_flag_variadic; }
#line 2792 "src/parser.c"
    break;

  case 121:
#line 354 "src/gwion.y"
    { (yyval.flag) = 0; }
#line 2798 "src/parser.c"
    break;

  case 122:
#line 356 "src/gwion.y"
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2804 "src/parser.c"
    break;

  case 123:
#line 356 "src/gwion.y"
    { (yyval.id_list) = NULL; }
#line 2810 "src/parser.c"
    break;

  case 124:
#line 358 "src/gwion.y"
    { (yyval.flag) = ae_flag_static; }
#line 2816 "src/parser.c"
    break;

  case 125:
#line 359 "src/gwion.y"
    { (yyval.flag) = ae_flag_global; }
#line 2822 "src/parser.c"
    break;

  case 126:
#line 362 "src/gwion.y"
    { (yyval.flag) = ae_flag_private; }
#line 2828 "src/parser.c"
    break;

  case 127:
#line 363 "src/gwion.y"
    { (yyval.flag) = ae_flag_protect; }
#line 2834 "src/parser.c"
    break;

  case 128:
#line 366 "src/gwion.y"
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2840 "src/parser.c"
    break;

  case 129:
#line 367 "src/gwion.y"
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2846 "src/parser.c"
    break;

  case 130:
#line 368 "src/gwion.y"
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2852 "src/parser.c"
    break;

  case 131:
#line 371 "src/gwion.y"
    { (yyval.flag) = 0; }
#line 2858 "src/parser.c"
    break;

  case 132:
#line 371 "src/gwion.y"
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2864 "src/parser.c"
    break;

  case 133:
#line 375 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 2870 "src/parser.c"
    break;

  case 140:
#line 382 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2876 "src/parser.c"
    break;

  case 141:
#line 384 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 2882 "src/parser.c"
    break;

  case 142:
#line 386 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 2888 "src/parser.c"
    break;

  case 143:
#line 388 "src/gwion.y"
    {
  const m_str str = s_name((yyvsp[-4].sym));
  char c[strlen(str) + 2];
  c[0] = '@';
  strcpy(c + 1, str);
  const Symbol sym = insert_symbol(c);
 (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-3].type_decl), sym, (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_typedef, GET_LOC(&(yyloc)));
}
#line 2901 "src/parser.c"
    break;

  case 144:
#line 397 "src/gwion.y"
    { (yyval.ival) = 0; }
#line 2907 "src/parser.c"
    break;

  case 145:
#line 397 "src/gwion.y"
    { (yyval.ival) = ae_flag_ref; }
#line 2913 "src/parser.c"
    break;

  case 146:
#line 398 "src/gwion.y"
    { (yyval.ival) = ae_flag_nonnull; }
#line 2919 "src/parser.c"
    break;

  case 148:
#line 401 "src/gwion.y"
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].id_list)); }
#line 2925 "src/parser.c"
    break;

  case 149:
#line 402 "src/gwion.y"
    { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[-1].exp)); }
#line 2931 "src/parser.c"
    break;

  case 150:
#line 406 "src/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2937 "src/parser.c"
    break;

  case 151:
#line 407 "src/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 2943 "src/parser.c"
    break;

  case 152:
#line 411 "src/gwion.y"
    { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 2949 "src/parser.c"
    break;

  case 153:
#line 414 "src/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2955 "src/parser.c"
    break;

  case 154:
#line 415 "src/gwion.y"
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 2961 "src/parser.c"
    break;

  case 155:
#line 417 "src/gwion.y"
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2967 "src/parser.c"
    break;

  case 156:
#line 418 "src/gwion.y"
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2973 "src/parser.c"
    break;

  case 157:
#line 421 "src/gwion.y"
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
#line 2995 "src/parser.c"
    break;

  case 158:
#line 441 "src/gwion.y"
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3001 "src/parser.c"
    break;

  case 159:
#line 442 "src/gwion.y"
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3007 "src/parser.c"
    break;

  case 160:
#line 445 "src/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3013 "src/parser.c"
    break;

  case 161:
#line 446 "src/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3019 "src/parser.c"
    break;

  case 162:
#line 448 "src/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3025 "src/parser.c"
    break;

  case 163:
#line 449 "src/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3031 "src/parser.c"
    break;

  case 164:
#line 450 "src/gwion.y"
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3037 "src/parser.c"
    break;

  case 165:
#line 451 "src/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3043 "src/parser.c"
    break;

  case 166:
#line 452 "src/gwion.y"
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3049 "src/parser.c"
    break;

  case 167:
#line 453 "src/gwion.y"
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3055 "src/parser.c"
    break;

  case 182:
#line 461 "src/gwion.y"
    { (yyval.exp) = NULL; }
#line 3061 "src/parser.c"
    break;

  case 184:
#line 464 "src/gwion.y"
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3067 "src/parser.c"
    break;

  case 185:
#line 466 "src/gwion.y"
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 3073 "src/parser.c"
    break;

  case 187:
#line 468 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3079 "src/parser.c"
    break;

  case 189:
#line 469 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3085 "src/parser.c"
    break;

  case 191:
#line 470 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3091 "src/parser.c"
    break;

  case 193:
#line 471 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3097 "src/parser.c"
    break;

  case 195:
#line 472 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3103 "src/parser.c"
    break;

  case 197:
#line 473 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3109 "src/parser.c"
    break;

  case 199:
#line 474 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3115 "src/parser.c"
    break;

  case 201:
#line 475 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3121 "src/parser.c"
    break;

  case 203:
#line 476 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3127 "src/parser.c"
    break;

  case 205:
#line 477 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3133 "src/parser.c"
    break;

  case 207:
#line 478 "src/gwion.y"
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3139 "src/parser.c"
    break;

  case 209:
#line 480 "src/gwion.y"
    { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3145 "src/parser.c"
    break;

  case 211:
#line 483 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3151 "src/parser.c"
    break;

  case 220:
#line 489 "src/gwion.y"
    { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3157 "src/parser.c"
    break;

  case 221:
#line 490 "src/gwion.y"
    {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3163 "src/parser.c"
    break;

  case 222:
#line 491 "src/gwion.y"
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3169 "src/parser.c"
    break;

  case 223:
#line 492 "src/gwion.y"
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3175 "src/parser.c"
    break;

  case 224:
#line 495 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3181 "src/parser.c"
    break;

  case 225:
#line 496 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3187 "src/parser.c"
    break;

  case 226:
#line 497 "src/gwion.y"
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3193 "src/parser.c"
    break;

  case 227:
#line 497 "src/gwion.y"
    { (yyval.arg_list) = NULL; }
#line 3199 "src/parser.c"
    break;

  case 228:
#line 500 "src/gwion.y"
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3205 "src/parser.c"
    break;

  case 229:
#line 501 "src/gwion.y"
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3211 "src/parser.c"
    break;

  case 230:
#line 504 "src/gwion.y"
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3217 "src/parser.c"
    break;

  case 231:
#line 504 "src/gwion.y"
    { (yyval.exp) = NULL; }
#line 3223 "src/parser.c"
    break;

  case 234:
#line 508 "src/gwion.y"
    { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3229 "src/parser.c"
    break;

  case 236:
#line 510 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3235 "src/parser.c"
    break;

  case 237:
#line 512 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3242 "src/parser.c"
    break;

  case 238:
#line 515 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3248 "src/parser.c"
    break;

  case 239:
#line 515 "src/gwion.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3254 "src/parser.c"
    break;

  case 240:
#line 518 "src/gwion.y"
    { (yyval.ival) = ae_prim_complex; }
#line 3260 "src/parser.c"
    break;

  case 241:
#line 519 "src/gwion.y"
    { (yyval.ival) = ae_prim_polar;   }
#line 3266 "src/parser.c"
    break;

  case 242:
#line 520 "src/gwion.y"
    { (yyval.ival) = ae_prim_vec;     }
#line 3272 "src/parser.c"
    break;

  case 243:
#line 523 "src/gwion.y"
    { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3278 "src/parser.c"
    break;

  case 244:
#line 524 "src/gwion.y"
    { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3284 "src/parser.c"
    break;

  case 245:
#line 525 "src/gwion.y"
    { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3290 "src/parser.c"
    break;

  case 246:
#line 526 "src/gwion.y"
    { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3296 "src/parser.c"
    break;

  case 247:
#line 527 "src/gwion.y"
    { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3302 "src/parser.c"
    break;

  case 248:
#line 528 "src/gwion.y"
    { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3308 "src/parser.c"
    break;

  case 249:
#line 529 "src/gwion.y"
    { (yyval.exp) = new_prim_vec(    mpool(arg), (yyvsp[-2].ival) ,(yyvsp[-1].exp)); }
#line 3314 "src/parser.c"
    break;

  case 250:
#line 530 "src/gwion.y"
    { (yyval.exp) = new_prim_unpack( mpool(arg), insert_symbol("auto"), (yyvsp[-1].id_list), GET_LOC(&(yyloc))); }
#line 3320 "src/parser.c"
    break;

  case 251:
#line 531 "src/gwion.y"
    { (yyval.exp) = new_prim_tuple(mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3326 "src/parser.c"
    break;

  case 252:
#line 532 "src/gwion.y"
    { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3332 "src/parser.c"
    break;

  case 253:
#line 533 "src/gwion.y"
    { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3338 "src/parser.c"
    break;

  case 254:
#line 534 "src/gwion.y"
    { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3344 "src/parser.c"
    break;

  case 255:
#line 535 "src/gwion.y"
    { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3350 "src/parser.c"
    break;


#line 3354 "src/parser.c"

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
#line 537 "src/gwion.y"

