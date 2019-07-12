/* A Bison parser, made by GNU Bison 3.3.2.  */

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
#define YYBISON_VERSION "3.3.2"

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
#line 6 "ly/gwion.y" /* yacc.c:337  */

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

#line 96 "src/parser.c" /* yacc.c:337  */
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

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
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
    ATSYM = 318,
    NEW = 319,
    SPORK = 320,
    FORK = 321,
    TYPEOF = 322,
    L_HACK = 323,
    R_HACK = 324,
    AND = 325,
    EQ = 326,
    GE = 327,
    GT = 328,
    LE = 329,
    LT = 330,
    NEQ = 331,
    SHIFT_LEFT = 332,
    SHIFT_RIGHT = 333,
    S_AND = 334,
    S_OR = 335,
    S_XOR = 336,
    OR = 337,
    LTMPL = 338,
    RTMPL = 339,
    TILDA = 340,
    EXCLAMATION = 341,
    DYNOP = 342,
    PP_COMMENT = 343,
    PP_INCLUDE = 344,
    PP_DEFINE = 345,
    PP_UNDEF = 346,
    PP_IFDEF = 347,
    PP_IFNDEF = 348,
    PP_ELSE = 349,
    PP_ENDIF = 350,
    PP_NL = 351
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
#define ATSYM 318
#define NEW 319
#define SPORK 320
#define FORK 321
#define TYPEOF 322
#define L_HACK 323
#define R_HACK 324
#define AND 325
#define EQ 326
#define GE 327
#define GT 328
#define LE 329
#define LT 330
#define NEQ 331
#define SHIFT_LEFT 332
#define SHIFT_RIGHT 333
#define S_AND 334
#define S_OR 335
#define S_XOR 336
#define OR 337
#define LTMPL 338
#define RTMPL 339
#define TILDA 340
#define EXCLAMATION 341
#define DYNOP 342
#define PP_COMMENT 343
#define PP_INCLUDE 344
#define PP_DEFINE 345
#define PP_UNDEF 346
#define PP_IFDEF 347
#define PP_IFNDEF 348
#define PP_ELSE 349
#define PP_ENDIF 350
#define PP_NL 351

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "ly/gwion.y" /* yacc.c:352  */

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
  Stmt_Fptr func_type;
  Stmt stmt;
  Stmt_List stmt_list;
  Arg_List arg_list;
  Decl_List decl_list;
  Func_Def func_def;
  Section* section;
  ID_List id_list;
  Type_List type_list;
  Class_Body class_body;
//  ID_List class_ext;
  Class_Def class_def;
  Ast ast;

#line 359 "src/parser.c" /* yacc.c:352  */
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
#define YYFINAL  182
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1443

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  399

#define YYUNDEFTOK  2
#define YYMAXUTOK   351

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
      95,    96
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   122,   125,   126,   130,   131,   132,   136,
     142,   142,   144,   144,   147,   148,   151,   151,   152,   152,
     154,   154,   156,   158,   161,   168,   175,   175,   177,   181,
     185,   186,   186,   187,   188,   188,   191,   192,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   214,   215,   222,   222,   225,   228,   230,   233,   234,
     235,   238,   241,   242,   245,   247,   249,   251,   253,   255,
     260,   262,   267,   268,   269,   272,   273,   277,   278,   281,
     281,   283,   283,   285,   285,   287,   287,   287,   290,   291,
     292,   296,   297,   298,   301,   301,   302,   302,   303,   305,
     306,   307,   307,   309,   309,   310,   310,   311,   311,   313,
     313,   315,   316,   319,   320,   323,   324,   325,   328,   328,
     331,   334,   334,   334,   334,   334,   336,   337,   339,   341,
     343,   349,   349,   350,   350,   353,   354,   358,   359,   363,
     366,   367,   369,   370,   373,   390,   397,   398,   401,   402,
     404,   405,   406,   407,   408,   409,   411,   411,   412,   412,
     412,   412,   413,   413,   414,   414,   415,   415,   415,   416,
     416,   419,   419,   420,   420,   421,   421,   422,   422,   423,
     423,   424,   424,   425,   425,   426,   426,   427,   427,   428,
     428,   430,   430,   432,   432,   435,   435,   435,   436,   436,
     436,   436,   439,   439,   440,   441,   442,   445,   446,   447,
     447,   450,   451,   454,   454,   456,   456,   458,   459,   459,
     461,   464,   465,   468,   469,   470,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483
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
  "\"@\"", "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"", "\"<<<\"",
  "\">>>\"", "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"", "\"<\"",
  "\"!=\"", "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"", "\"||\"",
  "\"<~\"", "\"~>\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"",
  "\"<comment>\"", "\"#include\"", "\"#define>\"", "\"#undef\"",
  "\"#ifdef\"", "\"#ifndef\"", "\"#else\"", "\"#if\"", "\"\\n\"",
  "$accept", "prg", "ast", "section", "class_def", "class_ext",
  "class_body", "class_body2", "id_list", "dot_decl", "stmt_list",
  "fptr_base", "fdef_base", "func_type", "stmt_type", "type_decl_array",
  "type_decl_exp", "type_decl_empty", "arg", "arg_list", "fptr_arg",
  "fptr_list", "code_stmt", "stmt", "id", "opt_id", "enum_stmt",
  "label_stmt", "goto_stmt", "case_stmt", "switch_stmt", "flow",
  "loop_stmt", "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp",
  "binary_exp", "call_template", "op", "array_exp", "array_empty", "array",
  "decl_exp2", "decl_exp", "union_exp", "decl_exp3", "func_args",
  "arg_type", "decl_template", "storage_flag", "access_flag", "flag",
  "opt_flag", "func_def_base", "op_op", "func_def", "atsym", "decl_flag",
  "type_decl000", "type_decl00", "type_decl0", "type_decl", "decl_list",
  "union_stmt", "var_decl_list", "var_decl", "arg_decl", "fptr_arg_decl",
  "eq_op", "rel_op", "shift_op", "add_op", "mul_op", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "typeof_exp",
  "cast_exp", "unary_op", "unary_exp", "lambda_list", "lambda_arg",
  "type_list", "call_paren", "post_op", "dot_exp", "post_exp", "vec_type",
  "primary_exp", YY_NULLPTR
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
     345,   346,   347,   348,   349,   350,   351
};
# endif

#define YYPACT_NINF -304

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-304)))

#define YYTABLE_NINF -85

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     441,  -304,   805,   869,   525,  -304,  -304,  -304,   133,    45,
    -304,   609,  -304,    51,    55,   -12,  1189,   383,   133,  1189,
    -304,  -304,    -2,  -304,  -304,  -304,  -304,    94,  1356,   133,
     133,    68,    59,   -12,  1189,  -304,  -304,    71,  -304,  -304,
    -304,  -304,  -304,  -304,    29,    94,    94,   116,  1189,    29,
    -304,  -304,   148,  -304,   441,  -304,  -304,  -304,  -304,  -304,
    -304,   609,    90,  -304,  -304,  -304,  -304,  -304,   149,  -304,
    -304,   169,  -304,  -304,   185,    23,  -304,   187,  -304,  -304,
    -304,  -304,   137,  -304,    29,  -304,  -304,  -304,    59,  -304,
     -12,  -304,  -304,   -19,   126,   117,   118,   119,   -30,   111,
     103,    79,   100,  -304,   146,  1253,  -304,    94,  -304,  -304,
     139,  1189,  -304,  -304,    93,   201,  1340,  -304,   205,  -304,
     206,  -304,    29,  1189,   130,  1189,   675,   212,    94,   159,
    -304,   161,   106,   162,   216,   223,   -12,   133,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,    29,  -304,  -304,  -304,  -304,    29,
      29,    -2,   184,  -304,  -304,   168,  -304,   -12,   -12,  -304,
     188,   -12,  -304,  -304,   225,  -304,  -304,  1189,   165,  -304,
     232,   154,  -304,  -304,  -304,   -12,  -304,  1189,  -304,  -304,
    1189,  1189,   933,  -304,  -304,  -304,  -304,   225,  -304,   237,
    1189,  1276,  1276,  1276,  1276,  1276,  -304,  -304,  1276,  1276,
    1276,  1276,  1340,    29,    29,  -304,  -304,  1189,   -12,    29,
     239,  -304,  -304,   240,  -304,   238,  -304,    33,   -12,   243,
    1189,   245,    59,   741,  -304,  -304,  -304,  -304,  -304,   -12,
    -304,   170,   248,   -12,   250,   251,    33,   -12,   -12,  -304,
    -304,  -304,  -304,  -304,  -304,   247,  -304,    29,    -3,  -304,
     252,  -304,  -304,  -304,  -304,   -12,   195,   126,   117,   118,
     119,   -30,   111,   103,    79,   100,   146,  -304,   254,  -304,
     176,   997,  -304,  -304,  1061,  -304,  -304,   255,    94,    -2,
     609,   259,   609,   -12,  1125,   253,  -304,   -12,   230,    29,
      29,  -304,    -2,  -304,   260,  -304,  -304,  -304,   609,  -304,
    1276,    29,  -304,  -304,   262,  -304,  -304,  -304,   265,   256,
    -304,  -304,   209,   609,   269,   -12,  -304,    29,   267,   273,
     -12,   276,    46,    17,  -304,  -304,   277,  -304,    29,  -304,
     609,  1189,  -304,   609,   283,  -304,   441,    29,   225,  -304,
      94,  -304,    24,  -304,   -12,   278,   286,   -12,   285,    94,
     292,  -304,  -304,    15,  -304,  -304,   441,   288,  -304,   293,
    -304,   187,  -304,   296,  -304,   225,  -304,   -12,    29,  -304,
     -12,  -304,    29,   609,  -304,  -304,    94,    24,  -304,   187,
     299,  -304,   301,  -304,  -304,  -304,  -304,  -304,  -304
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    78,     0,     0,     0,   224,   223,   225,   118,     0,
      62,     0,    63,     0,     0,     0,     0,     0,   118,    72,
      73,    74,   110,   111,   112,   113,   114,     0,     0,   118,
     118,     0,   131,   210,     0,   227,   228,    51,   229,   230,
     215,   195,   216,   196,     0,   199,   200,     0,     0,     0,
     201,   198,     0,     2,     4,     8,   135,     6,    48,    49,
      41,    20,   226,    46,    42,    43,    45,    44,     0,    39,
      40,     0,    47,    38,     0,    79,    94,    95,   231,    81,
     101,    97,   116,   115,     0,   126,     7,   137,   131,   140,
       0,    50,    96,   169,   171,   173,   175,   177,   179,   181,
     183,   185,   187,   189,   191,     0,   193,     0,   197,   222,
     202,     0,   218,   236,   226,     0,     0,    91,     0,    36,
       0,   119,     0,     0,     0,     0,     0,     0,     0,     0,
     226,   222,    84,   218,     0,     0,     0,   118,   130,   164,
     165,   166,   167,   168,    85,   161,   159,   160,   158,    86,
     162,   163,    87,   121,     0,   123,   122,   125,   124,     0,
       0,   110,    18,   141,   132,   131,   134,     0,   207,   209,
       0,     0,    28,   204,    26,   205,   206,     0,     0,    29,
     211,     0,     1,     5,    21,     0,    56,     0,    76,    77,
       0,     0,     0,    93,   117,   102,   139,   148,    99,   146,
       0,     0,     0,     0,     0,     0,   156,   157,     0,     0,
       0,     0,     0,     0,     0,   203,   235,     0,     0,     0,
       0,   219,   221,     0,   234,    88,    37,     0,     0,     0,
       0,     0,   131,     0,    57,    61,    60,    59,    58,     0,
      75,     0,    16,     0,     0,     0,     0,     0,    54,   133,
      98,   208,   136,    52,    27,     0,   233,     0,     0,    19,
       0,    80,    82,    92,   149,     0,     0,   172,   174,   176,
     178,   180,   182,   184,   186,   188,   190,   194,     0,   217,
       0,     0,   220,   232,     0,    89,   108,     0,     0,   110,
       0,     0,     0,     0,     0,     0,   109,     0,    11,     0,
       0,    24,   110,    53,     0,   192,   212,   138,     0,   147,
       0,     0,    83,   214,     0,    90,   107,   120,     0,    70,
      65,    69,     0,     0,     0,    54,    17,     0,     0,     0,
       0,     0,     0,     0,    64,   170,     0,   213,   104,    23,
       0,     0,    66,     0,     0,    10,    13,     0,   150,    30,
       0,    25,   106,    22,    54,     0,     0,     0,     0,     0,
      31,   103,    71,     0,    67,    55,    14,     0,    12,     0,
     152,   151,   128,    34,   105,   153,    33,    54,   142,   100,
      54,   129,     0,     0,    15,     9,     0,     0,   155,   154,
       0,   143,     0,    32,    68,   127,    35,   145,   144
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -304,  -304,   257,  -258,  -304,  -304,  -304,   -60,  -196,   122,
      31,  -304,  -304,  -304,  -304,   -36,   -18,   -86,  -169,   -69,
     -20,   -73,   -22,    -5,     0,  -297,  -304,  -304,  -304,  -304,
    -304,   191,  -304,  -304,  -304,  -304,  -114,    50,   -25,  -304,
     294,   -70,  -303,  -115,   129,   242,  -304,  -304,  -304,    75,
    -152,  -304,   263,     2,    -4,  -304,  -304,  -304,  -135,   236,
      69,  -304,   298,    60,   -46,  -304,  -145,  -304,   -24,  -304,
    -304,   308,   311,   314,   320,    39,  -304,   150,   151,   147,
     152,   153,   144,   156,   145,   157,  -304,   158,     1,   -27,
     193,  -304,  -182,  -304,   -15,   345,   346,  -304,   352
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    52,    53,    54,    55,   328,   367,   368,   241,    56,
      57,   246,   227,    58,    59,   179,   173,   180,   360,   361,
     373,   374,    60,    61,   162,   304,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   220,
     191,    76,    77,    78,    79,    80,   356,    81,   339,   288,
     137,    82,    83,    84,   122,    85,   154,    86,   166,   167,
      87,    88,    89,    90,   358,    91,   198,   199,   349,   376,
     208,   209,   210,   211,   212,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   116,   106,
     169,   107,   181,   282,   108,   109,   110,   111,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   105,   114,   114,    62,   138,   124,   193,   172,   248,
     121,    62,   233,   159,   134,   127,   114,   130,   355,   114,
     121,   383,   250,   175,   176,   160,   161,   190,   344,   352,
     249,   121,   121,   168,   114,   120,   228,   280,    37,   286,
     221,   206,   200,   295,    34,   371,   207,    37,   114,   351,
     123,   352,   115,   118,    62,   105,   125,   375,    31,   254,
     126,    62,   221,   201,    34,    31,   128,    37,   244,   135,
      31,    34,   389,   245,    37,   306,    34,   287,   215,    37,
     390,   136,   264,   392,   170,   216,   144,    31,   366,   215,
     197,   149,   184,    34,   144,   222,    37,   293,   178,   149,
      49,   326,   152,     4,   174,   130,   235,    49,   366,   174,
     152,   114,    49,   217,   171,    34,   130,   222,    37,   294,
     309,   177,   164,   114,   247,   114,   114,   277,   278,    49,
     329,   331,   139,   243,   140,   185,   242,   318,   185,   121,
     -18,   218,   336,   -18,   -84,   165,   217,    10,   182,    12,
     332,    49,   186,   -18,   187,   285,   -18,   141,   142,   143,
      40,   223,    42,    23,    24,    25,    26,   197,   168,    25,
      26,   253,   188,   229,   218,   231,   -18,   114,   369,   -18,
     150,   151,   174,   145,   146,   147,   148,   114,   189,   219,
     114,   114,   114,    40,   192,    42,   202,   203,   205,   204,
     114,   130,   130,   130,   130,   130,   213,   224,   130,   130,
     130,   130,   130,   225,   174,   234,   226,   114,   279,   174,
     174,   236,   219,   237,   238,   239,   240,   255,   289,   185,
     114,   164,     3,   114,   256,   252,   257,   260,   258,   242,
     261,   265,   118,   298,   281,   284,   283,   302,   303,   290,
     266,   292,   297,   305,   296,   299,   300,   310,   308,   311,
     312,   316,   320,   325,   327,   197,   317,   118,   337,   333,
     338,   341,   340,   174,   174,   343,   346,   347,   370,   174,
     291,   114,   350,   359,   114,   319,   365,   321,   377,   378,
      62,   172,    62,   322,   114,   380,   382,   242,   385,   386,
     387,   193,   397,   334,   398,   388,   384,   259,    62,   345,
     130,   183,   353,   393,   396,   230,   363,   174,   342,   193,
     262,   301,   153,    62,   196,   303,   195,   307,   372,   163,
     348,   314,   391,   379,   118,   362,   155,   381,   364,   156,
      62,   114,   157,    62,   324,   194,    62,   105,   158,   335,
     269,   267,   272,   268,   303,   274,   270,   348,   271,   330,
     330,   251,   131,   132,   395,   273,    62,   105,   275,   133,
     276,   330,     0,     0,     0,     0,     0,   303,   394,     0,
     303,     0,     0,    62,   129,     0,     0,   174,     2,     0,
       3,     0,   354,   357,     5,     6,     7,     0,   330,     0,
       0,     0,     0,     0,     0,     0,     0,   330,     0,     0,
       0,     0,   354,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,    35,    36,    37,    38,    39,     0,     0,   357,     0,
       0,     0,   330,     0,     1,     0,     2,   354,     3,     0,
       4,    48,     5,     6,     7,     8,     9,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,    27,    28,    29,
       0,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,    44,    45,    46,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,    50,    51,     1,     0,
       2,     0,     3,     0,     4,   119,     5,     6,     7,     0,
       9,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,    23,    24,    25,    26,     0,
       0,     0,     0,    29,     0,    30,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,    44,
      45,    46,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
      50,    51,     1,     0,     2,     0,     3,     0,     4,     0,
       5,     6,     7,     0,     9,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,    23,
      24,    25,    26,     0,     0,     0,     0,    29,     0,    30,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,     1,     0,
       2,     0,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,    49,     0,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,    31,   232,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,    44,
      45,    46,    47,    48,     1,     0,     2,     0,     3,     0,
       0,     0,     5,     6,     7,     0,     0,     0,    49,     0,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,    44,    45,    46,    47,    48,
       2,   113,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,     0,    49,     0,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,    44,
      45,    46,    47,    48,     2,     0,     3,   117,     0,     0,
       5,     6,     7,     0,     0,     0,     0,     0,    49,     0,
      50,    51,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,     2,     0,
       3,   263,     0,     0,     5,     6,     7,     0,     0,     0,
       0,     0,    49,     0,    50,    51,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,    44,    45,    46,
      47,    48,     2,   313,     3,     0,     0,     0,     5,     6,
       7,     0,     0,     0,     0,     0,    49,     0,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,    44,    45,    46,    47,    48,     2,     0,     3,   315,
       0,     0,     5,     6,     7,     0,     0,     0,     0,     0,
      49,     0,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,    44,    45,    46,    47,    48,
       2,   323,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,     0,    49,     0,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,    44,
      45,    46,    47,    48,     2,     0,     3,     0,     0,     0,
       5,     6,     7,     0,     0,     0,     0,     0,    49,     0,
      50,    51,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,     2,     0,
       3,     0,     0,     0,     5,     6,     7,     0,     0,     0,
       0,     0,    49,     0,    50,    51,     0,     0,     0,     0,
       0,     2,     0,     3,     0,     0,     0,     5,     6,     7,
     214,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,    35,    36,    37,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,    44,    45,    46,
       0,    48,    33,     0,    35,    36,    37,    38,    39,     0,
      40,    41,    42,    43,     0,     0,     0,     0,    50,    51,
      44,    45,    46,    47,    48,     2,     0,     3,     0,     0,
       0,     5,     6,     7,     0,     0,     0,     0,     0,     0,
       0,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,    35,    36,
      37,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,    44,    45,    46,     0,    48,   139,
      40,   140,    42,   141,   142,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,   144,   145,   146,
     147,   148,   149,   150,   151,     0,     0,     0,     0,     0,
       0,     0,     0,   152
};

static const yytype_int16 yycheck[] =
{
       0,     0,     2,     3,     4,    27,    11,    77,    44,   161,
       8,    11,   126,    28,    18,    15,    16,    17,     1,    19,
      18,     6,   167,    45,    46,    29,    30,     4,   325,     5,
     165,    29,    30,    33,    34,     4,   122,   219,    50,     6,
     110,    71,    61,   239,    47,   348,    76,    50,    48,     3,
       5,     5,     2,     3,    54,    54,     5,   354,    41,   174,
       5,    61,   132,    82,    47,    41,    16,    50,   154,    19,
      41,    47,   375,   159,    50,   257,    47,    44,   105,    50,
     377,    83,   197,   380,    34,   107,    71,    41,   346,   116,
      90,    76,    61,    47,    71,   110,    50,   232,    48,    76,
      83,   297,    87,     9,    44,   105,   128,    83,   366,    49,
      87,   111,    83,     7,    43,    47,   116,   132,    50,   233,
     265,     5,    63,   123,   160,   125,   126,   213,   214,    83,
     299,   300,    53,   137,    55,    45,   136,   289,    45,   137,
      50,    35,   311,    50,     5,    86,     7,    17,     0,    19,
     302,    83,    62,    63,     5,   225,    63,    57,    58,    59,
      54,   111,    56,    30,    31,    32,    33,   167,   168,    32,
      33,   171,     3,   123,    35,   125,    86,   177,   347,    86,
      77,    78,   122,    72,    73,    74,    75,   187,     3,    83,
     190,   191,   192,    54,     7,    56,    70,    80,    79,    81,
     200,   201,   202,   203,   204,   205,    60,     6,   208,   209,
     210,   211,   212,     8,   154,     3,    10,   217,   218,   159,
     160,    62,    83,    62,    62,     9,     3,   177,   228,    45,
     230,    63,     7,   233,    69,    47,     4,   187,    84,   239,
     190,     4,   192,   243,     5,     7,     6,   247,   248,     6,
     200,     6,     4,     6,    84,     5,     5,    62,     6,     5,
      84,     6,     3,    10,    34,   265,   288,   217,     6,     9,
       5,    62,    16,   213,   214,     6,     9,     4,   348,   219,
     230,   281,     6,     6,   284,   290,     3,   292,    10,     3,
     290,   327,   292,   293,   294,    10,     4,   297,    10,     6,
       4,   371,     3,   308,     3,   375,   366,   185,   308,   327,
     310,    54,   332,   382,   387,   124,   341,   257,   323,   389,
     191,   246,    28,   323,    88,   325,    84,   258,   350,    31,
     330,   281,   378,   357,   284,   340,    28,   359,   343,    28,
     340,   341,    28,   343,   294,    82,   346,   346,    28,   310,
     203,   201,   208,   202,   354,   210,   204,   357,   205,   299,
     300,   168,    17,    17,   386,   209,   366,   366,   211,    17,
     212,   311,    -1,    -1,    -1,    -1,    -1,   377,   383,    -1,
     380,    -1,    -1,   383,     1,    -1,    -1,   327,     5,    -1,
       7,    -1,   332,   333,    11,    12,    13,    -1,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   347,    -1,    -1,
      -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    52,    -1,    -1,   378,    -1,
      -1,    -1,   382,    -1,     3,    -1,     5,   387,     7,    -1,
       9,    68,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      -1,    40,    41,    42,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,     3,    -1,
       5,    -1,     7,    -1,     9,    10,    11,    12,    13,    -1,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    38,    -1,    40,    41,    42,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,     3,    -1,     5,    -1,     7,    -1,     9,    -1,
      11,    12,    13,    -1,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,    40,
      41,    42,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,     3,    -1,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    83,    -1,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,     3,    -1,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    -1,    83,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,     5,    -1,     7,     8,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,     5,    -1,
       7,     8,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,     5,    -1,     7,     8,
      -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    68,    46,    -1,    48,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    85,    86,
      64,    65,    66,    67,    68,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    -1,    68,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    36,    37,    38,
      40,    41,    42,    46,    47,    48,    49,    50,    51,    52,
      54,    55,    56,    57,    64,    65,    66,    67,    68,    83,
      85,    86,    98,    99,   100,   101,   106,   107,   110,   111,
     119,   120,   121,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   138,   139,   140,   141,
     142,   144,   148,   149,   150,   152,   154,   157,   158,   159,
     160,   162,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   188,   191,   192,
     193,   194,   195,     6,   121,   134,   185,     8,   134,    10,
     107,   150,   151,     5,   120,     5,     5,   121,   134,     1,
     121,   192,   193,   195,   151,   134,    83,   147,   119,    53,
      55,    57,    58,    59,    71,    72,    73,    74,    75,    76,
      77,    78,    87,   137,   153,   168,   169,   170,   171,   191,
     151,   151,   121,   159,    63,    86,   155,   156,   121,   187,
     134,    43,   112,   113,   160,   119,   119,     5,   134,   112,
     114,   189,     0,    99,   107,    45,    62,     5,     3,     3,
       4,   137,     7,   138,   149,   142,   156,   121,   163,   164,
      61,    82,    70,    80,    81,    79,    71,    76,   167,   168,
     169,   170,   171,    60,    37,   186,   119,     7,    35,    83,
     136,   138,   191,   134,     6,     8,    10,   109,   114,   134,
     128,   134,    42,   133,     3,   119,    62,    62,    62,     9,
       3,   105,   121,   151,   114,   114,   108,   112,   147,   155,
     163,   187,    47,   121,   140,   134,    69,     4,    84,   106,
     134,   134,   141,     8,   140,     4,   134,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   184,   114,   114,   121,
     189,     5,   190,     6,     7,   138,     6,    44,   146,   121,
       6,   134,     6,   155,   133,   105,    84,     4,   121,     5,
       5,   146,   121,   121,   122,     6,   189,   157,     6,   163,
      62,     5,    84,     6,   134,     8,     6,   119,   147,   120,
       3,   120,   121,     6,   134,    10,   105,    34,   102,   115,
     160,   115,   147,     9,   120,   172,   115,     6,     5,   145,
      16,    62,   120,     6,   122,   113,     9,     4,   121,   165,
       6,     3,     5,   117,   160,     1,   143,   160,   161,     6,
     115,   116,   120,   135,   120,     3,   100,   103,   104,   115,
     138,   139,   119,   117,   118,   122,   166,    10,     3,   165,
      10,   119,     4,     6,   104,    10,     6,     4,   138,   139,
     122,   161,   122,   116,   120,   119,   118,     3,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    98,    99,    99,   100,   100,   100,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   109,   110,   111,   112,   112,   113,   114,
     115,   116,   116,   117,   118,   118,   119,   119,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   121,   121,   122,   122,   123,   124,   125,   126,   126,
     126,   127,   128,   128,   129,   129,   129,   129,   129,   129,
     130,   130,   131,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   136,   137,   137,   137,   138,   138,
     138,   139,   139,   139,   140,   140,   141,   141,   141,   142,
     143,   144,   144,   145,   145,   117,   117,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   150,   151,   151,
     152,   153,   153,   153,   153,   153,   154,   154,   154,   154,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   159,
     160,   160,   161,   161,   162,   162,   163,   163,   164,   164,
     165,   165,   165,   166,   166,   166,   167,   167,   168,   168,
     168,   168,   169,   169,   170,   170,   171,   171,   171,   172,
     172,   173,   173,   174,   174,   175,   175,   176,   176,   177,
     177,   178,   178,   179,   179,   180,   180,   181,   181,   182,
     182,   183,   183,   184,   184,   185,   185,   185,   185,   185,
     185,   185,   186,   186,   186,   186,   186,   187,   187,   188,
     188,   189,   189,   190,   190,   191,   191,   192,   193,   193,
     193,   193,   193,   194,   194,   194,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     8,
       2,     0,     1,     0,     1,     2,     1,     3,     1,     3,
       1,     2,     4,     4,     4,     6,     1,     2,     1,     1,
       2,     1,     3,     2,     1,     3,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     7,     2,     3,     3,     3,
       3,     3,     1,     1,     5,     5,     6,     7,     9,     5,
       5,     7,     1,     1,     1,     3,     2,     2,     1,     1,
       3,     1,     3,     3,     0,     1,     1,     1,     3,     4,
       5,     2,     3,     2,     1,     1,     1,     1,     3,     2,
       2,     1,     2,     2,     1,     2,     1,     2,     1,     3,
       0,     1,     1,     1,     1,     1,     1,     2,     0,     1,
       5,     1,     1,     1,     1,     1,     1,     9,     7,     7,
       2,     0,     1,     2,     1,     1,     3,     1,     4,     2,
       1,     2,     2,     3,     9,     9,     1,     3,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     2,     2,
       1,     1,     3,     3,     2,     1,     1,     3,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     2,     2
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

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
#line 121 "ly/gwion.y" /* yacc.c:1652  */
    { arg->ast = (yyvsp[0].ast); }
#line 2101 "src/parser.c" /* yacc.c:1652  */
    break;

  case 3:
#line 122 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "file is empty.\n"); YYERROR; }
#line 2107 "src/parser.c" /* yacc.c:1652  */
    break;

  case 4:
#line 125 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2113 "src/parser.c" /* yacc.c:1652  */
    break;

  case 5:
#line 126 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2119 "src/parser.c" /* yacc.c:1652  */
    break;

  case 6:
#line 130 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2125 "src/parser.c" /* yacc.c:1652  */
    break;

  case 7:
#line 131 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2131 "src/parser.c" /* yacc.c:1652  */
    break;

  case 8:
#line 132 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2137 "src/parser.c" /* yacc.c:1652  */
    break;

  case 9:
#line 137 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].class_body), GET_LOC(&(yyloc)));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-6].id_list), -1);
  }
#line 2146 "src/parser.c" /* yacc.c:1652  */
    break;

  case 10:
#line 142 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2152 "src/parser.c" /* yacc.c:1652  */
    break;

  case 11:
#line 142 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = NULL; }
#line 2158 "src/parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 144 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = NULL; }
#line 2164 "src/parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 147 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[0].section), NULL); }
#line 2170 "src/parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 148 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2176 "src/parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 151 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2182 "src/parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 151 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2188 "src/parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 152 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yylsp[0]))); }
#line 2194 "src/parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 152 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2200 "src/parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 154 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2206 "src/parser.c" /* yacc.c:1652  */
    break;

  case 21:
#line 154 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2212 "src/parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 156 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1); }
#line 2219 "src/parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 158 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1); }
#line 2226 "src/parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 161 "ly/gwion.y" /* yacc.c:1652  */
    {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.stmt) = new_stmt_fptr(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag));
}
#line 2238 "src/parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 168 "ly/gwion.y" /* yacc.c:1652  */
    {
  (yyval.stmt) = new_stmt_type(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.stmt)->d.stmt_type.tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1);
}
#line 2249 "src/parser.c" /* yacc.c:1652  */
    break;

  case 27:
#line 175 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2255 "src/parser.c" /* yacc.c:1652  */
    break;

  case 28:
#line 177 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2263 "src/parser.c" /* yacc.c:1652  */
    break;

  case 29:
#line 181 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2271 "src/parser.c" /* yacc.c:1652  */
    break;

  case 30:
#line 185 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2277 "src/parser.c" /* yacc.c:1652  */
    break;

  case 31:
#line 186 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2283 "src/parser.c" /* yacc.c:1652  */
    break;

  case 32:
#line 186 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2289 "src/parser.c" /* yacc.c:1652  */
    break;

  case 33:
#line 187 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2295 "src/parser.c" /* yacc.c:1652  */
    break;

  case 34:
#line 188 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2301 "src/parser.c" /* yacc.c:1652  */
    break;

  case 35:
#line 188 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2307 "src/parser.c" /* yacc.c:1652  */
    break;

  case 36:
#line 191 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2313 "src/parser.c" /* yacc.c:1652  */
    break;

  case 37:
#line 192 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2319 "src/parser.c" /* yacc.c:1652  */
    break;

  case 51:
#line 214 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2325 "src/parser.c" /* yacc.c:1652  */
    break;

  case 52:
#line 215 "ly/gwion.y" /* yacc.c:1652  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2335 "src/parser.c" /* yacc.c:1652  */
    break;

  case 54:
#line 222 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = NULL; }
#line 2341 "src/parser.c" /* yacc.c:1652  */
    break;

  case 55:
#line 225 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_enum(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2348 "src/parser.c" /* yacc.c:1652  */
    break;

  case 56:
#line 228 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2354 "src/parser.c" /* yacc.c:1652  */
    break;

  case 57:
#line 230 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2360 "src/parser.c" /* yacc.c:1652  */
    break;

  case 58:
#line 233 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2366 "src/parser.c" /* yacc.c:1652  */
    break;

  case 59:
#line 234 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2372 "src/parser.c" /* yacc.c:1652  */
    break;

  case 60:
#line 235 "ly/gwion.y" /* yacc.c:1652  */
    { gw_err(_("unhandled expression type in case statement.\n")); YYERROR; }
#line 2378 "src/parser.c" /* yacc.c:1652  */
    break;

  case 61:
#line 238 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_switch(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2384 "src/parser.c" /* yacc.c:1652  */
    break;

  case 62:
#line 241 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_while; }
#line 2390 "src/parser.c" /* yacc.c:1652  */
    break;

  case 63:
#line 242 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_until; }
#line 2396 "src/parser.c" /* yacc.c:1652  */
    break;

  case 64:
#line 246 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2402 "src/parser.c" /* yacc.c:1652  */
    break;

  case 65:
#line 248 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2408 "src/parser.c" /* yacc.c:1652  */
    break;

  case 66:
#line 250 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2414 "src/parser.c" /* yacc.c:1652  */
    break;

  case 67:
#line 252 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2420 "src/parser.c" /* yacc.c:1652  */
    break;

  case 68:
#line 254 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2426 "src/parser.c" /* yacc.c:1652  */
    break;

  case 69:
#line 256 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2432 "src/parser.c" /* yacc.c:1652  */
    break;

  case 70:
#line 261 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2438 "src/parser.c" /* yacc.c:1652  */
    break;

  case 71:
#line 263 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2444 "src/parser.c" /* yacc.c:1652  */
    break;

  case 72:
#line 267 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_return; }
#line 2450 "src/parser.c" /* yacc.c:1652  */
    break;

  case 73:
#line 268 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_break; }
#line 2456 "src/parser.c" /* yacc.c:1652  */
    break;

  case 74:
#line 269 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_continue; }
#line 2462 "src/parser.c" /* yacc.c:1652  */
    break;

  case 75:
#line 272 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2468 "src/parser.c" /* yacc.c:1652  */
    break;

  case 76:
#line 273 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2474 "src/parser.c" /* yacc.c:1652  */
    break;

  case 77:
#line 277 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2480 "src/parser.c" /* yacc.c:1652  */
    break;

  case 78:
#line 278 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2486 "src/parser.c" /* yacc.c:1652  */
    break;

  case 80:
#line 281 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2492 "src/parser.c" /* yacc.c:1652  */
    break;

  case 82:
#line 283 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2498 "src/parser.c" /* yacc.c:1652  */
    break;

  case 83:
#line 285 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2504 "src/parser.c" /* yacc.c:1652  */
    break;

  case 84:
#line 285 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = NULL; }
#line 2510 "src/parser.c" /* yacc.c:1652  */
    break;

  case 88:
#line 290 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2516 "src/parser.c" /* yacc.c:1652  */
    break;

  case 89:
#line 291 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2522 "src/parser.c" /* yacc.c:1652  */
    break;

  case 90:
#line 292 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2528 "src/parser.c" /* yacc.c:1652  */
    break;

  case 91:
#line 296 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2534 "src/parser.c" /* yacc.c:1652  */
    break;

  case 92:
#line 297 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2540 "src/parser.c" /* yacc.c:1652  */
    break;

  case 93:
#line 298 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2546 "src/parser.c" /* yacc.c:1652  */
    break;

  case 98:
#line 303 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), GET_LOC(&(yyloc)))), (yyvsp[0].var_decl_list)); }
#line 2553 "src/parser.c" /* yacc.c:1652  */
    break;

  case 99:
#line 305 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2559 "src/parser.c" /* yacc.c:1652  */
    break;

  case 100:
#line 306 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2565 "src/parser.c" /* yacc.c:1652  */
    break;

  case 102:
#line 307 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2571 "src/parser.c" /* yacc.c:1652  */
    break;

  case 103:
#line 309 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2577 "src/parser.c" /* yacc.c:1652  */
    break;

  case 104:
#line 309 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2583 "src/parser.c" /* yacc.c:1652  */
    break;

  case 105:
#line 310 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2589 "src/parser.c" /* yacc.c:1652  */
    break;

  case 106:
#line 310 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2595 "src/parser.c" /* yacc.c:1652  */
    break;

  case 107:
#line 311 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2601 "src/parser.c" /* yacc.c:1652  */
    break;

  case 108:
#line 311 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2607 "src/parser.c" /* yacc.c:1652  */
    break;

  case 109:
#line 313 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2613 "src/parser.c" /* yacc.c:1652  */
    break;

  case 110:
#line 313 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = NULL; }
#line 2619 "src/parser.c" /* yacc.c:1652  */
    break;

  case 111:
#line 315 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_static; }
#line 2625 "src/parser.c" /* yacc.c:1652  */
    break;

  case 112:
#line 316 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_global; }
#line 2631 "src/parser.c" /* yacc.c:1652  */
    break;

  case 113:
#line 319 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_private; }
#line 2637 "src/parser.c" /* yacc.c:1652  */
    break;

  case 114:
#line 320 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_protect; }
#line 2643 "src/parser.c" /* yacc.c:1652  */
    break;

  case 115:
#line 323 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2649 "src/parser.c" /* yacc.c:1652  */
    break;

  case 116:
#line 324 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2655 "src/parser.c" /* yacc.c:1652  */
    break;

  case 117:
#line 325 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2661 "src/parser.c" /* yacc.c:1652  */
    break;

  case 118:
#line 328 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2667 "src/parser.c" /* yacc.c:1652  */
    break;

  case 119:
#line 328 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2673 "src/parser.c" /* yacc.c:1652  */
    break;

  case 120:
#line 332 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 2679 "src/parser.c" /* yacc.c:1652  */
    break;

  case 127:
#line 338 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2685 "src/parser.c" /* yacc.c:1652  */
    break;

  case 128:
#line 340 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 2691 "src/parser.c" /* yacc.c:1652  */
    break;

  case 129:
#line 342 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 2697 "src/parser.c" /* yacc.c:1652  */
    break;

  case 130:
#line 344 "ly/gwion.y" /* yacc.c:1652  */
    {
ID_List l = new_id_list(mpool(arg), insert_symbol("void"), GET_LOC(&(yyloc)));
(yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), new_type_decl(mpool(arg), l),
       insert_symbol("dtor"), NULL), (yyvsp[0].stmt), ae_flag_dtor, GET_LOC(&(yyloc))); }
#line 2706 "src/parser.c" /* yacc.c:1652  */
    break;

  case 131:
#line 349 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = 0; }
#line 2712 "src/parser.c" /* yacc.c:1652  */
    break;

  case 132:
#line 349 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_flag_ref; }
#line 2718 "src/parser.c" /* yacc.c:1652  */
    break;

  case 133:
#line 350 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_flag_nonnull | (yyvsp[0].ival); }
#line 2724 "src/parser.c" /* yacc.c:1652  */
    break;

  case 135:
#line 353 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].id_list)); }
#line 2730 "src/parser.c" /* yacc.c:1652  */
    break;

  case 136:
#line 354 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[-1].exp)); }
#line 2736 "src/parser.c" /* yacc.c:1652  */
    break;

  case 137:
#line 358 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2742 "src/parser.c" /* yacc.c:1652  */
    break;

  case 138:
#line 359 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 2748 "src/parser.c" /* yacc.c:1652  */
    break;

  case 139:
#line 363 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 2754 "src/parser.c" /* yacc.c:1652  */
    break;

  case 140:
#line 366 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2760 "src/parser.c" /* yacc.c:1652  */
    break;

  case 141:
#line 367 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 2766 "src/parser.c" /* yacc.c:1652  */
    break;

  case 142:
#line 369 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2772 "src/parser.c" /* yacc.c:1652  */
    break;

  case 143:
#line 370 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2778 "src/parser.c" /* yacc.c:1652  */
    break;

  case 144:
#line 373 "ly/gwion.y" /* yacc.c:1652  */
    {
      (yyval.stmt) = new_stmt_union(mpool(arg), (yyvsp[-3].decl_list), GET_LOC(&(yyloc)));
      (yyval.stmt)->d.stmt_union.type_xid = (yyvsp[-5].sym);
      (yyval.stmt)->d.stmt_union.xid = (yyvsp[-1].sym);
      (yyval.stmt)->d.stmt_union.flag = (yyvsp[-7].flag);
      if((yyvsp[-6].id_list)) {
        if(!(yyvsp[-5].sym)) {
          gw_err(_("Template unions requires type name\n"));
          YYERROR;
        }
        if((yyvsp[-1].sym)) {
          gw_err(_("Can't instantiate template union types at declaration site.\n"));
          YYERROR;
        }
        (yyval.stmt)->d.stmt_union.tmpl = new_tmpl(mpool(arg), (yyvsp[-6].id_list), -1);
      }
    }
#line 2800 "src/parser.c" /* yacc.c:1652  */
    break;

  case 145:
#line 390 "ly/gwion.y" /* yacc.c:1652  */
    {
    gw_err(_("Unions should only contain declarations.\n"));
    YYERROR;
    }
#line 2809 "src/parser.c" /* yacc.c:1652  */
    break;

  case 146:
#line 397 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2815 "src/parser.c" /* yacc.c:1652  */
    break;

  case 147:
#line 398 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2821 "src/parser.c" /* yacc.c:1652  */
    break;

  case 148:
#line 401 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2827 "src/parser.c" /* yacc.c:1652  */
    break;

  case 149:
#line 402 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2833 "src/parser.c" /* yacc.c:1652  */
    break;

  case 150:
#line 404 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2839 "src/parser.c" /* yacc.c:1652  */
    break;

  case 151:
#line 405 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2845 "src/parser.c" /* yacc.c:1652  */
    break;

  case 152:
#line 406 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2851 "src/parser.c" /* yacc.c:1652  */
    break;

  case 153:
#line 407 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2857 "src/parser.c" /* yacc.c:1652  */
    break;

  case 154:
#line 408 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2863 "src/parser.c" /* yacc.c:1652  */
    break;

  case 155:
#line 409 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2869 "src/parser.c" /* yacc.c:1652  */
    break;

  case 170:
#line 417 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2875 "src/parser.c" /* yacc.c:1652  */
    break;

  case 172:
#line 419 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2881 "src/parser.c" /* yacc.c:1652  */
    break;

  case 174:
#line 420 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2887 "src/parser.c" /* yacc.c:1652  */
    break;

  case 176:
#line 421 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2893 "src/parser.c" /* yacc.c:1652  */
    break;

  case 178:
#line 422 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2899 "src/parser.c" /* yacc.c:1652  */
    break;

  case 180:
#line 423 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2905 "src/parser.c" /* yacc.c:1652  */
    break;

  case 182:
#line 424 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2911 "src/parser.c" /* yacc.c:1652  */
    break;

  case 184:
#line 425 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2917 "src/parser.c" /* yacc.c:1652  */
    break;

  case 186:
#line 426 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2923 "src/parser.c" /* yacc.c:1652  */
    break;

  case 188:
#line 427 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2929 "src/parser.c" /* yacc.c:1652  */
    break;

  case 190:
#line 428 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2935 "src/parser.c" /* yacc.c:1652  */
    break;

  case 192:
#line 430 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 2941 "src/parser.c" /* yacc.c:1652  */
    break;

  case 194:
#line 433 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 2947 "src/parser.c" /* yacc.c:1652  */
    break;

  case 203:
#line 439 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2953 "src/parser.c" /* yacc.c:1652  */
    break;

  case 204:
#line 440 "ly/gwion.y" /* yacc.c:1652  */
    {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 2959 "src/parser.c" /* yacc.c:1652  */
    break;

  case 205:
#line 441 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 2965 "src/parser.c" /* yacc.c:1652  */
    break;

  case 206:
#line 442 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 2971 "src/parser.c" /* yacc.c:1652  */
    break;

  case 207:
#line 445 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 2977 "src/parser.c" /* yacc.c:1652  */
    break;

  case 208:
#line 446 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 2983 "src/parser.c" /* yacc.c:1652  */
    break;

  case 209:
#line 447 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2989 "src/parser.c" /* yacc.c:1652  */
    break;

  case 210:
#line 447 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2995 "src/parser.c" /* yacc.c:1652  */
    break;

  case 211:
#line 450 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3001 "src/parser.c" /* yacc.c:1652  */
    break;

  case 212:
#line 451 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3007 "src/parser.c" /* yacc.c:1652  */
    break;

  case 213:
#line 454 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3013 "src/parser.c" /* yacc.c:1652  */
    break;

  case 214:
#line 454 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = NULL; }
#line 3019 "src/parser.c" /* yacc.c:1652  */
    break;

  case 217:
#line 458 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3025 "src/parser.c" /* yacc.c:1652  */
    break;

  case 219:
#line 460 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3031 "src/parser.c" /* yacc.c:1652  */
    break;

  case 220:
#line 462 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3038 "src/parser.c" /* yacc.c:1652  */
    break;

  case 221:
#line 465 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3044 "src/parser.c" /* yacc.c:1652  */
    break;

  case 222:
#line 465 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3050 "src/parser.c" /* yacc.c:1652  */
    break;

  case 223:
#line 468 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_complex; }
#line 3056 "src/parser.c" /* yacc.c:1652  */
    break;

  case 224:
#line 469 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3062 "src/parser.c" /* yacc.c:1652  */
    break;

  case 225:
#line 470 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3068 "src/parser.c" /* yacc.c:1652  */
    break;

  case 226:
#line 473 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3074 "src/parser.c" /* yacc.c:1652  */
    break;

  case 227:
#line 474 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3080 "src/parser.c" /* yacc.c:1652  */
    break;

  case 228:
#line 475 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3086 "src/parser.c" /* yacc.c:1652  */
    break;

  case 229:
#line 476 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3092 "src/parser.c" /* yacc.c:1652  */
    break;

  case 230:
#line 477 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3098 "src/parser.c" /* yacc.c:1652  */
    break;

  case 231:
#line 478 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3104 "src/parser.c" /* yacc.c:1652  */
    break;

  case 232:
#line 479 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_vec(    mpool(arg), (yyvsp[-2].ival) ,(yyvsp[-1].exp)); }
#line 3110 "src/parser.c" /* yacc.c:1652  */
    break;

  case 233:
#line 480 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3116 "src/parser.c" /* yacc.c:1652  */
    break;

  case 234:
#line 481 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3122 "src/parser.c" /* yacc.c:1652  */
    break;

  case 235:
#line 482 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3128 "src/parser.c" /* yacc.c:1652  */
    break;

  case 236:
#line 483 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3134 "src/parser.c" /* yacc.c:1652  */
    break;


#line 3138 "src/parser.c" /* yacc.c:1652  */
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
#line 485 "ly/gwion.y" /* yacc.c:1918  */

