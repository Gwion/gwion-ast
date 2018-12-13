/* A Bison parser, made by GNU Bison 3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.2"

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
#line 5 "ly/gwion.y" /* yacc.c:338  */

#include <stdio.h> // strlen in paste operation
#include <string.h> // strlen in paste operation
#include <math.h>
#include "defs.h"
#include "err_msg.h"
#include "vector.h"
#include "map.h"
#include "symbol.h"
#include "absyn.h"
#include "hash.h"
#include "macro.h"
#include "scanner.h"
#include "parser.h"
#include "lexer.h"
#define YYMALLOC xmalloc
#define scan arg->scanner
#define CHECK_FLAG(a,b,c) if(GET_FLAG(b, c)) { gwion_error(a, "flag set twice");  ; } SET_FLAG(b, c);
#define OP_SYM(a) insert_symbol(op2str(a))
ANN uint get_pos(const Scanner*);
ANN void gwion_error(const Scanner*, const m_str s);
m_str op2str(const Operator op);

#line 99 "src/parser.c" /* yacc.c:338  */
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
    CHUCK = 259,
    COMMA = 260,
    DIVIDE = 261,
    TIMES = 262,
    PERCENT = 263,
    L_HACK = 264,
    R_HACK = 265,
    LPAREN = 266,
    RPAREN = 267,
    LBRACK = 268,
    RBRACK = 269,
    LBRACE = 270,
    RBRACE = 271,
    PLUSCHUCK = 272,
    MINUSCHUCK = 273,
    TIMESCHUCK = 274,
    DIVIDECHUCK = 275,
    MODULOCHUCK = 276,
    ATCHUCK = 277,
    UNCHUCK = 278,
    TRIG = 279,
    UNTRIG = 280,
    PERCENTPAREN = 281,
    SHARPPAREN = 282,
    ATSYM = 283,
    FUNCTION = 284,
    DOLLAR = 285,
    TILDA = 286,
    QUESTION = 287,
    COLON = 288,
    EXCLAMATION = 289,
    IF = 290,
    ELSE = 291,
    WHILE = 292,
    DO = 293,
    UNTIL = 294,
    LOOP = 295,
    FOR = 296,
    GOTO = 297,
    SWITCH = 298,
    CASE = 299,
    ENUM = 300,
    RETURN = 301,
    BREAK = 302,
    CONTINUE = 303,
    PLUSPLUS = 304,
    MINUSMINUS = 305,
    NEW = 306,
    SPORK = 307,
    CLASS = 308,
    STATIC = 309,
    GLOBAL = 310,
    PRIVATE = 311,
    PROTECT = 312,
    EXTENDS = 313,
    DOT = 314,
    COLONCOLON = 315,
    AND = 316,
    EQ = 317,
    GE = 318,
    GT = 319,
    LE = 320,
    LT = 321,
    MINUS = 322,
    PLUS = 323,
    NEQ = 324,
    SHIFT_LEFT = 325,
    SHIFT_RIGHT = 326,
    S_AND = 327,
    S_OR = 328,
    S_XOR = 329,
    OR = 330,
    AST_DTOR = 331,
    OPERATOR = 332,
    TYPEDEF = 333,
    RSL = 334,
    RSR = 335,
    RSAND = 336,
    RSOR = 337,
    RSXOR = 338,
    TEMPLATE = 339,
    NOELSE = 340,
    LTB = 341,
    GTB = 342,
    UNION = 343,
    ATPAREN = 344,
    TYPEOF = 345,
    CONST = 346,
    AUTO = 347,
    PASTE = 348,
    ELLIPSE = 349,
    NUM = 350,
    FLOAT = 351,
    ID = 352,
    STRING_LIT = 353,
    CHAR_LIT = 354,
    PP_COMMENT = 355,
    PP_INCLUDE = 356,
    PP_DEFINE = 357,
    PP_UNDEF = 358,
    PP_IFDEF = 359,
    PP_IFNDEF = 360,
    PP_ELSE = 361,
    PP_ENDIF = 362,
    PP_NL = 363
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define CHUCK 259
#define COMMA 260
#define DIVIDE 261
#define TIMES 262
#define PERCENT 263
#define L_HACK 264
#define R_HACK 265
#define LPAREN 266
#define RPAREN 267
#define LBRACK 268
#define RBRACK 269
#define LBRACE 270
#define RBRACE 271
#define PLUSCHUCK 272
#define MINUSCHUCK 273
#define TIMESCHUCK 274
#define DIVIDECHUCK 275
#define MODULOCHUCK 276
#define ATCHUCK 277
#define UNCHUCK 278
#define TRIG 279
#define UNTRIG 280
#define PERCENTPAREN 281
#define SHARPPAREN 282
#define ATSYM 283
#define FUNCTION 284
#define DOLLAR 285
#define TILDA 286
#define QUESTION 287
#define COLON 288
#define EXCLAMATION 289
#define IF 290
#define ELSE 291
#define WHILE 292
#define DO 293
#define UNTIL 294
#define LOOP 295
#define FOR 296
#define GOTO 297
#define SWITCH 298
#define CASE 299
#define ENUM 300
#define RETURN 301
#define BREAK 302
#define CONTINUE 303
#define PLUSPLUS 304
#define MINUSMINUS 305
#define NEW 306
#define SPORK 307
#define CLASS 308
#define STATIC 309
#define GLOBAL 310
#define PRIVATE 311
#define PROTECT 312
#define EXTENDS 313
#define DOT 314
#define COLONCOLON 315
#define AND 316
#define EQ 317
#define GE 318
#define GT 319
#define LE 320
#define LT 321
#define MINUS 322
#define PLUS 323
#define NEQ 324
#define SHIFT_LEFT 325
#define SHIFT_RIGHT 326
#define S_AND 327
#define S_OR 328
#define S_XOR 329
#define OR 330
#define AST_DTOR 331
#define OPERATOR 332
#define TYPEDEF 333
#define RSL 334
#define RSR 335
#define RSAND 336
#define RSOR 337
#define RSXOR 338
#define TEMPLATE 339
#define NOELSE 340
#define LTB 341
#define GTB 342
#define UNION 343
#define ATPAREN 344
#define TYPEOF 345
#define CONST 346
#define AUTO 347
#define PASTE 348
#define ELLIPSE 349
#define NUM 350
#define FLOAT 351
#define ID 352
#define STRING_LIT 353
#define CHAR_LIT 354
#define PP_COMMENT 355
#define PP_INCLUDE 356
#define PP_DEFINE 357
#define PP_UNDEF 358
#define PP_IFDEF 359
#define PP_IFNDEF 360
#define PP_ELSE 361
#define PP_ENDIF 362
#define PP_NL 363

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "ly/gwion.y" /* yacc.c:353  */

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
  ID_List class_ext;
  Class_Def class_def;
  Ast ast;

#line 385 "src/parser.c" /* yacc.c:353  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
#define YYFINAL  177
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1760

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  221
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  380

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   363

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
     105,   106,   107,   108
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   109,   113,   114,   115,   119,   125,   125,
     127,   127,   130,   131,   134,   134,   135,   135,   137,   137,
     139,   140,   143,   144,   145,   149,   150,   154,   155,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   177,   178,   185,   185,   188,   191,   193,   196,
     197,   198,   201,   204,   206,   208,   210,   212,   214,   216,
     218,   223,   225,   230,   231,   232,   233,   237,   238,   241,
     241,   243,   243,   245,   245,   247,   247,   247,   248,   248,
     249,   249,   250,   250,   251,   251,   252,   252,   252,   253,
     253,   257,   258,   259,   263,   264,   265,   268,   268,   269,
     271,   271,   274,   274,   275,   275,   277,   277,   279,   280,
     281,   282,   283,   286,   286,   287,   287,   288,   288,   291,
     299,   299,   299,   299,   299,   299,   301,   302,   304,   306,
     311,   311,   314,   315,   316,   318,   320,   321,   325,   326,
     330,   336,   344,   345,   349,   350,   351,   354,   354,   355,
     355,   355,   355,   356,   356,   357,   357,   358,   358,   358,
     359,   359,   362,   362,   363,   363,   364,   364,   365,   365,
     366,   366,   367,   367,   368,   368,   369,   369,   370,   370,
     371,   371,   373,   373,   376,   376,   377,   378,   378,   378,
     381,   381,   382,   391,   395,   395,   399,   400,   403,   403,
     405,   405,   407,   408,   408,   410,   413,   414,   417,   418,
     419,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "CHUCK", "COMMA", "DIVIDE",
  "TIMES", "PERCENT", "L_HACK", "R_HACK", "LPAREN", "RPAREN", "LBRACK",
  "RBRACK", "LBRACE", "RBRACE", "PLUSCHUCK", "MINUSCHUCK", "TIMESCHUCK",
  "DIVIDECHUCK", "MODULOCHUCK", "ATCHUCK", "UNCHUCK", "TRIG", "UNTRIG",
  "PERCENTPAREN", "SHARPPAREN", "ATSYM", "FUNCTION", "DOLLAR", "TILDA",
  "QUESTION", "COLON", "EXCLAMATION", "IF", "ELSE", "WHILE", "DO", "UNTIL",
  "LOOP", "FOR", "GOTO", "SWITCH", "CASE", "ENUM", "RETURN", "BREAK",
  "CONTINUE", "PLUSPLUS", "MINUSMINUS", "NEW", "SPORK", "CLASS", "STATIC",
  "GLOBAL", "PRIVATE", "PROTECT", "EXTENDS", "DOT", "COLONCOLON", "AND",
  "EQ", "GE", "GT", "LE", "LT", "MINUS", "PLUS", "NEQ", "SHIFT_LEFT",
  "SHIFT_RIGHT", "S_AND", "S_OR", "S_XOR", "OR", "AST_DTOR", "OPERATOR",
  "TYPEDEF", "RSL", "RSR", "RSAND", "RSOR", "RSXOR", "TEMPLATE", "NOELSE",
  "LTB", "GTB", "UNION", "ATPAREN", "TYPEOF", "CONST", "AUTO", "PASTE",
  "ELLIPSE", "NUM", "FLOAT", "ID", "STRING_LIT", "CHAR_LIT", "PP_COMMENT",
  "PP_INCLUDE", "PP_DEFINE", "PP_UNDEF", "PP_IFDEF", "PP_IFNDEF",
  "PP_ELSE", "PP_ENDIF", "PP_NL", "$accept", "ast", "section", "class_def",
  "class_ext", "class_body", "class_body2", "id_list", "id_dot",
  "stmt_list", "func_type", "stmt_type", "type_decl_array", "arg_list",
  "code_stmt", "stmt", "id", "opt_id", "enum_stmt", "label_stmt",
  "goto_stmt", "case_stmt", "switch_stmt", "loop_stmt", "selection_stmt",
  "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template", "op",
  "array_exp", "array_empty", "decl_exp2", "decl_exp", "decl_exp3",
  "func_args", "arg_type", "decl_template", "flag", "func_flag",
  "type_flag", "opt_flag", "func_def_base", "op_op", "func_def", "atsym",
  "type_decl", "decl_list", "union_stmt", "var_decl_list", "var_decl",
  "eq_op", "rel_op", "shift_op", "add_op", "mul_op", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "cast_exp",
  "unary_op", "unary_exp", "dur_exp", "type_list", "call_paren", "post_op",
  "dot_exp", "post_exp", "vec_type", "primary_exp", YY_NULLPTR
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
     355,   356,   357,   358,   359,   360,   361,   362,   363
};
# endif

#define YYPACT_NINF -305

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-305)))

#define YYTABLE_NINF -131

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     678,  -305,  -305,  1451,  1145,  1196,   775,  -305,  -305,  -305,
    -305,    18,    22,   872,    25,    52,    72,   -24,  1451,    88,
      62,  1020,   105,   107,  -305,  -305,    70,    98,  -305,  -305,
    -305,  -305,   -24,  -305,    98,  1605,    62,    35,    70,    62,
    -305,   124,    70,  -305,  -305,    46,  -305,  -305,   140,   387,
    -305,  -305,  -305,  -305,  -305,   872,   -12,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,   139,  1553,  -305,   130,
    -305,  -305,  -305,    -7,   251,    70,  -305,  -305,   -24,  -305,
    -305,    -9,    86,    79,    77,    81,   -38,     5,    59,    65,
     117,   132,  1502,  -305,    94,  -305,  -305,   109,  1451,  -305,
      15,   155,  1554,  -305,   154,  -305,   158,  -305,   153,  1451,
    1451,    40,  1451,  1451,   946,   172,    98,   145,  -305,   147,
      78,   148,    62,   167,  -305,   185,  -305,  -305,  -305,   166,
     183,  -305,   150,   159,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,    70,  -305,  -305,  -305,  -305,  -305,    62,
     -24,   199,   125,   -24,   -24,  -305,   -24,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  1451,  1451,  1247,  -305,    62,    62,
      70,  -305,    62,   -24,   183,  -305,   216,  1451,  1554,  1554,
    1554,  1554,  1554,  -305,  -305,  1554,  1554,  1554,  1554,  1554,
      70,    70,  -305,   921,  1451,   -24,    70,   212,  -305,  -305,
     213,  -305,  -305,   211,  -305,   214,   215,  1451,  1451,   217,
     218,   166,  1094,  -305,  -305,  -305,  -305,  -305,   -24,  -305,
    -305,   130,   166,   -24,   223,   141,   230,    70,   -39,  -305,
     222,   227,  -305,  -305,  -305,  -305,    62,   -24,   -24,    48,
    -305,   130,   -24,   207,    86,    79,    77,    81,   -38,     5,
      59,    65,   117,   132,  -305,   223,   109,  -305,   157,  1298,
    -305,  -305,  1349,  -305,   872,   872,   238,   239,   872,   872,
     -24,  1400,   229,  -305,  -305,    70,   237,  -305,   -24,  -305,
     -24,   166,    14,   166,   194,   223,  -305,     2,  -305,  1554,
     241,  -305,  -305,   242,  -305,   224,  -305,  -305,  -305,  -305,
    -305,   228,   872,   253,   -24,  -305,   -24,    98,  -305,   204,
    -305,   254,   266,   255,  -305,    70,   260,     2,  -305,   264,
    -305,  -305,    98,  -305,   872,  1451,  -305,   872,   276,   275,
    -305,   166,   -24,    70,   -24,  -305,   484,    98,  -305,  -305,
    -305,  1677,  -305,  -305,    70,  -305,   278,  -305,   280,   581,
     270,  -305,  -305,   872,  -305,  -305,  -305,  -305,  -305,  -305
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     107,    68,   185,     0,     0,     0,     0,   209,   208,   189,
     187,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   200,   201,     0,   188,   109,   110,
     111,   112,     0,   184,     0,     0,   115,     0,     0,   117,
     210,     0,     0,   212,   213,    42,   214,   215,     0,   107,
       6,     4,    39,    40,    32,    18,   211,    37,    33,    34,
      36,    35,    30,    31,    38,    29,     0,    69,   216,   217,
      71,   100,    98,     0,     0,     0,   126,     5,     0,    41,
      97,   160,   162,   164,   166,   168,   170,   172,   174,   176,
     178,   180,     0,   182,   190,   186,   207,   194,     0,   203,
     211,     0,     0,   221,     0,    94,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   211,   207,
      74,   203,   118,     0,    63,     0,    65,    66,   192,   130,
      22,   193,     0,    16,   129,    75,   158,   157,   159,    79,
      80,    81,    82,    83,    78,    76,    84,    85,    77,   152,
     150,   151,   149,   156,   155,   153,   154,    86,    87,    88,
      89,    90,   120,     0,   123,   121,   125,   124,   122,   116,
       0,   196,     0,    45,     0,   137,     0,     1,     3,    19,
     131,    47,   132,    67,     0,     0,     0,    96,   113,   117,
       0,   101,   108,     0,   144,    99,   142,     0,     0,     0,
       0,     0,     0,   147,   148,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,     0,     0,     0,   204,   206,
       0,   219,   220,    91,    28,     0,     0,     0,     0,     0,
       0,   130,     0,    48,    52,    51,    50,    49,     0,    64,
      24,    23,   130,     0,     0,     0,    14,     0,     0,    44,
       0,     0,    43,    70,    72,    95,   114,     0,     0,     0,
     145,   146,     0,     0,   163,   165,   167,   169,   171,   173,
     175,   177,   179,   181,   183,     0,   195,   202,     0,     0,
     205,   218,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,    17,   103,     0,   106,     0,   197,
       0,   130,     0,   130,     9,     0,    21,     0,   143,     0,
       0,    73,   199,     0,    93,    61,    53,    54,    59,    58,
      60,     0,     0,     0,    45,   102,     0,     0,    15,     0,
     134,     0,     0,     0,   136,     0,     0,     0,   105,     0,
      20,   161,     0,   198,     0,     0,    55,     0,     0,    25,
     127,   130,    45,   138,    45,     8,   107,     0,   104,   128,
      62,     0,    56,    46,     0,   135,     0,   139,     0,   107,
       0,    10,   119,     0,    26,   141,   140,    13,     7,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -305,   243,  -304,  -305,  -305,  -305,   -82,  -210,  -162,    12,
    -305,  -305,   -19,   -73,   -23,   -11,     0,  -290,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -106,    36,   -52,  -305,
     259,   -44,  -110,   111,   -71,  -305,  -215,   -40,  -305,    67,
    -305,  -305,   -34,  -305,  -305,  -305,  -194,    56,   -54,  -305,
      39,   -16,  -305,   277,   279,   285,   286,     4,  -305,   127,
     129,   131,   128,   136,   134,   126,   123,   135,   137,     1,
     -57,  -305,  -186,  -305,   -25,   321,   -10,  -305,   326
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    48,    49,    50,   336,   370,   371,   245,   132,    51,
      52,    53,   171,   325,    54,    55,   100,   250,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   217,
     185,    68,    69,    70,    71,    72,   296,   340,    73,    74,
     190,    75,   123,    76,   163,    77,   182,    78,   333,    79,
     195,   196,   205,   206,   207,   208,   209,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,   102,
      93,    94,   172,   280,    95,    96,    97,    98,    99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    92,   111,   191,   131,   173,    56,   128,   232,   120,
     168,   134,   251,    56,   338,   331,   180,   115,   108,   118,
     241,   181,   188,   197,   203,   187,   129,   300,   292,   109,
     278,   204,   133,   110,   348,   212,   112,   290,   129,   101,
     104,   106,   129,   180,   307,   212,   189,   304,   293,    56,
      92,   306,   369,   218,   116,    56,   193,   125,    45,   295,
     310,   299,   366,   113,   368,   369,   198,   179,   149,   150,
     151,   152,   219,    45,   129,   129,   218,   227,   194,   228,
      32,   294,   130,   114,   261,  -130,   240,   122,   328,   117,
     337,   214,   118,   234,   130,   219,   339,     3,   175,     4,
      38,     5,   118,   169,    41,    42,   122,   330,   126,   334,
     127,    45,  -130,     6,     7,     8,    28,    29,    30,    31,
     -74,   170,   214,   136,   137,   138,   291,    24,    25,   155,
     156,   130,   153,   154,   220,   174,    32,   215,   329,   176,
     177,   192,   183,   186,   244,   225,   226,   199,   229,   230,
     260,   201,   200,   202,   213,   257,    38,   365,    24,    25,
      41,    42,   210,   129,   216,   221,   222,    45,   215,   224,
     246,   258,   223,   249,   133,   233,   252,    40,   235,   283,
     236,   237,   238,    43,    44,    45,    46,    47,   239,   192,
     129,   274,   275,   259,   180,   216,     5,   187,   118,   118,
     118,   118,   118,   276,   247,   118,   118,   118,   118,   118,
     129,   129,   248,   118,   242,   277,   129,   187,   243,   130,
     253,   262,   106,   279,   282,   281,   284,   285,   297,   288,
     289,   332,   218,   263,   295,   298,   192,   302,   246,   303,
     309,   317,   318,   133,   311,   324,   130,   129,   301,   327,
     106,   219,   335,   342,   343,   256,   122,   246,   305,   192,
     344,   345,   194,   286,   287,   347,   130,   130,   351,   353,
     352,   354,   130,   315,   316,   356,   358,   319,   320,   363,
     364,   375,   332,   376,    56,    56,   378,   377,    56,    56,
     321,   374,   178,   361,   162,   129,   254,   357,   246,   367,
     133,   308,   129,   130,   350,    28,    29,    30,    31,   118,
     349,   346,   164,   341,   165,   313,   355,    32,   106,   359,
     166,   167,    56,   192,   249,   264,   194,   323,   265,   267,
     271,   266,   270,   360,   372,   129,   362,    38,   268,   269,
     119,    41,    42,   272,    56,   121,   273,    56,    45,     0,
       0,   326,   249,   129,   249,     0,    56,    92,     0,     0,
       0,     0,   379,     0,   129,     0,     0,     0,     0,    56,
      92,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -2,     0,     0,
       1,   130,     0,     0,     2,     0,     3,     0,     4,     0,
       5,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     0,     0,     9,     0,
     326,    10,    11,     0,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,    30,    31,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,     0,     0,     0,     0,
       0,    37,     0,    38,     0,    39,    40,    41,    42,     0,
       0,     0,    43,    44,    45,    46,    47,     1,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     6,
     -11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,     0,    10,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,     0,     0,     0,     0,     0,    37,     0,
      38,     0,    39,    40,    41,    42,     0,     0,     0,    43,
      44,    45,    46,    47,     1,     0,     0,     0,     2,     0,
       3,     0,     4,     0,     5,     0,     6,   -12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,     9,     0,     0,    10,    11,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,    28,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
       0,     0,     0,     0,     0,    37,     0,    38,     0,    39,
      40,    41,    42,     0,     0,     0,    43,    44,    45,    46,
      47,     1,     0,     0,     0,     2,     0,     3,     0,     4,
       0,     5,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
       0,     0,    10,    11,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,     0,     0,     0,
       0,     0,    37,     0,    38,     0,    39,    40,    41,    42,
       0,     0,     0,    43,    44,    45,    46,    47,     1,     0,
       0,     0,     2,     0,     3,     0,     4,     0,     5,     0,
       6,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,     9,     0,     0,    10,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,     0,     0,     0,
      43,    44,    45,    46,    47,     1,     0,     0,     0,     2,
       0,     3,     0,     4,     0,     5,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,     0,     0,    10,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
       3,     0,     4,     0,     5,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     1,
      36,     0,     0,     2,     0,     3,     0,     4,    38,     5,
      39,    40,    41,    42,     0,     0,     0,    43,    44,    45,
      46,    47,     7,     8,     0,     0,     0,     9,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
      40,     0,    32,    33,     0,     0,    43,    44,    45,    46,
      47,     0,     0,   124,     0,     0,     0,     2,     0,     3,
       0,     4,    38,     5,     0,    40,    41,    42,   231,     0,
       0,    43,    44,    45,    46,    47,     7,     8,     0,     0,
       0,     9,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     2,     0,     3,     0,     4,    38,     5,     0,    40,
      41,    42,     0,     0,     0,    43,    44,    45,    46,    47,
       7,     8,     0,     0,     0,     9,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     2,     0,     3,     0,     4,   103,     5,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,     9,     0,     0,    10,
      38,     0,     0,    40,    41,    42,     0,     0,     0,    43,
      44,    45,    46,    47,    24,    25,    26,    27,     0,    28,
      29,    30,    31,     2,     0,     3,     0,     4,     0,     5,
     105,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     9,     0,     0,
      10,    38,     0,     0,    40,    41,    42,     0,     0,     0,
      43,    44,    45,    46,    47,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     2,     0,     3,     0,     4,     0,
       5,   255,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     0,     0,     9,     0,
       0,    10,    38,     0,     0,    40,    41,    42,     0,     0,
       0,    43,    44,    45,    46,    47,    24,    25,    26,    27,
       0,    28,    29,    30,    31,     2,     0,     3,     0,     4,
     312,     5,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
       0,     0,    10,    38,     0,     0,    40,    41,    42,     0,
       0,     0,    43,    44,    45,    46,    47,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     2,     0,     3,     0,
       4,     0,     5,   314,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
       9,     0,     0,    10,    38,     0,     0,    40,    41,    42,
       0,     0,     0,    43,    44,    45,    46,    47,    24,    25,
      26,    27,     0,    28,    29,    30,    31,     2,     0,     3,
       0,     4,   322,     5,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,     0,     0,    10,    38,     0,     0,    40,    41,
      42,     0,     0,     0,    43,    44,    45,    46,    47,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     2,     0,
       3,     0,     4,     0,     5,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,     9,     0,     0,    10,    38,     0,     0,    40,
      41,    42,     0,     0,     0,    43,    44,    45,    46,    47,
      24,    25,    26,    27,     0,    28,    29,    30,    31,     2,
       0,     3,     0,     4,     0,     5,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,     0,     0,    10,    38,     0,     0,
      40,    41,    42,     0,     0,     0,    43,    44,    45,    46,
      47,    24,    25,    26,    27,     0,     0,   135,   184,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,    33,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   211,
       7,     8,     0,     0,     0,     9,     0,     0,    10,     0,
       0,    40,     0,     0,     0,     0,     0,    43,    44,    45,
      46,    47,     0,    24,    25,    26,    27,     0,     0,   135,
       0,   136,   137,   138,     0,   148,     0,     0,     0,     0,
       0,    33,   139,   140,   141,   142,   143,   144,   145,   146,
     147,     0,   157,   158,   159,   160,   161,     0,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,    43,
      44,    45,    46,    47,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   148,   149,   150,
     151,   152,   153,   154,     0,   155,   156,     0,     0,     0,
       0,   135,     0,     0,   157,   158,   159,   160,   161,   373,
       0,     0,     0,     0,   139,   140,   141,   142,   143,   144,
     145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,   158,   159,   160,
     161
};

static const yytype_int16 yycheck[] =
{
       0,     0,    13,    74,    27,    39,     6,    26,   114,    19,
      35,    34,   174,    13,    12,     1,    28,    17,     6,    19,
     130,    33,    29,    32,    62,    69,    26,    66,   238,    11,
     216,    69,    32,    11,   324,    92,    11,   231,    38,     3,
       4,     5,    42,    28,   259,   102,    53,   257,   242,    49,
      49,     3,   356,    97,    18,    55,    75,    21,    97,    11,
     275,   247,   352,    11,   354,   369,    75,    55,    63,    64,
      65,    66,    97,    97,    74,    75,   120,    37,    78,    39,
      66,   243,    26,    11,   194,    97,   130,    20,   298,     1,
     305,    13,    92,   116,    38,   120,    94,     9,    42,    11,
      86,    13,   102,    36,    90,    91,    39,   301,     3,   303,
       3,    97,    97,    15,    26,    27,    54,    55,    56,    57,
      11,    86,    13,     6,     7,     8,   232,    49,    50,    70,
      71,    75,    67,    68,    98,    11,    66,    59,   300,    93,
       0,    74,     3,    13,   163,   109,   110,    61,   112,   113,
     194,    74,    73,    72,    60,   189,    86,   351,    49,    50,
      90,    91,    30,   163,    86,    10,    12,    97,    59,    16,
     170,   190,    14,   173,   174,     3,   176,    89,    33,   223,
      33,    33,    15,    95,    96,    97,    98,    99,     3,   122,
     190,   210,   211,   193,    28,    86,    13,   241,   198,   199,
     200,   201,   202,   213,     5,   205,   206,   207,   208,   209,
     210,   211,    87,   213,    64,   215,   216,   261,    59,   163,
     184,     5,   186,    11,    13,    12,    12,    12,    87,    12,
      12,   302,   276,   197,    11,     5,   169,    15,   238,    12,
      33,     3,     3,   243,    87,    16,   190,   247,   248,    12,
     214,   276,    58,    12,    12,   188,   189,   257,   258,   192,
      36,    33,   262,   227,   228,    12,   210,   211,    64,     3,
      16,    16,   216,   284,   285,    15,    12,   288,   289,     3,
       5,     3,   353,     3,   284,   285,    16,   369,   288,   289,
     290,   364,    49,   345,    35,   295,   185,   337,   298,   353,
     300,   262,   302,   247,   327,    54,    55,    56,    57,   309,
     326,   322,    35,   309,    35,   279,   335,    66,   282,   342,
      35,    35,   322,   256,   324,   198,   326,   291,   199,   201,
     207,   200,   206,   344,   357,   335,   347,    86,   202,   205,
      19,    90,    91,   208,   344,    19,   209,   347,    97,    -1,
      -1,   295,   352,   353,   354,    -1,   356,   356,    -1,    -1,
      -1,    -1,   373,    -1,   364,    -1,    -1,    -1,    -1,   369,
     369,    -1,    -1,   373,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,    -1,
       3,   335,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,
     364,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    -1,    88,    89,    90,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    99,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      86,    -1,    88,    89,    90,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    99,     3,    -1,    -1,    -1,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    88,
      89,    90,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      99,     3,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    -1,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    99,     3,    -1,
      -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    99,     3,    -1,    -1,    -1,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
       9,    -1,    11,    -1,    13,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,     3,
      78,    -1,    -1,     7,    -1,     9,    -1,    11,    86,    13,
      88,    89,    90,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    99,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    66,    67,    -1,    -1,    95,    96,    97,    98,
      99,    -1,    -1,     3,    -1,    -1,    -1,     7,    -1,     9,
      -1,    11,    86,    13,    -1,    89,    90,    91,    92,    -1,
      -1,    95,    96,    97,    98,    99,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    86,    13,    -1,    89,
      90,    91,    -1,    -1,    -1,    95,    96,    97,    98,    99,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,     7,    -1,     9,    -1,    11,    12,    13,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      86,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    99,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,     7,    -1,     9,    -1,    11,    -1,    13,
      14,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    86,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    99,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,     7,    -1,     9,    -1,    11,    -1,
      13,    14,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,
      -1,    34,    86,    -1,    -1,    89,    90,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    99,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,     7,    -1,     9,    -1,    11,
      12,    13,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    86,    -1,    -1,    89,    90,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    99,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    -1,    -1,    34,    86,    -1,    -1,    89,    90,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    99,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,     7,    -1,     9,
      -1,    11,    12,    13,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    86,    -1,    -1,    89,    90,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    99,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    86,    -1,    -1,    89,
      90,    91,    -1,    -1,    -1,    95,    96,    97,    98,    99,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    86,    -1,    -1,
      89,    90,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      99,    49,    50,    51,    52,    -1,    -1,     4,     5,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    67,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    77,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,    -1,    49,    50,    51,    52,    -1,    -1,     4,
      -1,     6,     7,     8,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    67,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    79,    80,    81,    82,    83,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     9,    11,    13,    15,    26,    27,    31,
      34,    35,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    54,    55,
      56,    57,    66,    67,    76,    77,    78,    84,    86,    88,
      89,    90,    91,    95,    96,    97,    98,    99,   110,   111,
     112,   118,   119,   120,   123,   124,   125,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   140,   141,
     142,   143,   144,   147,   148,   150,   152,   154,   156,   158,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   183,   184,   185,   186,   187,
     125,   136,   178,    12,   136,    14,   136,    16,   118,    11,
      11,   124,    11,    11,    11,   125,   136,     1,   125,   184,
     185,   187,   148,   151,     3,   136,     3,     3,   121,   125,
     156,   123,   117,   125,   123,     4,     6,     7,     8,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    62,    63,
      64,    65,    66,    67,    68,    70,    71,    79,    80,    81,
      82,    83,   139,   153,   162,   163,   164,   165,   183,   148,
      86,   121,   181,   151,    11,   156,    93,     0,   110,   118,
      28,    33,   155,     3,     5,   139,    13,   140,    29,    53,
     149,   143,   148,   121,   125,   159,   160,    32,    75,    61,
      73,    74,    72,    62,    69,   161,   162,   163,   164,   165,
      30,    77,   179,    60,    13,    59,    86,   138,   140,   183,
     136,    10,    12,    14,    16,   136,   136,    37,    39,   136,
     136,    92,   135,     3,   123,    33,    33,    33,    15,     3,
     140,   141,    64,    59,   121,   116,   125,     5,    87,   125,
     126,   117,   125,   136,   142,    14,   148,   151,   121,   125,
     140,   141,     5,   136,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   121,   121,   185,   125,   181,    11,
     182,    12,    13,   140,    12,    12,   136,   136,    12,    12,
     155,   135,   116,   155,   117,    11,   145,    87,     5,   181,
      66,   125,    15,    12,   116,   125,     3,   145,   159,    33,
     145,    87,    12,   136,    14,   124,   124,     3,     3,   124,
     124,   125,    12,   136,    16,   122,   156,    12,   116,   117,
     155,     1,   143,   157,   155,    58,   113,   145,    12,    94,
     146,   166,    12,    12,    36,    33,   124,    12,   126,   160,
     123,    64,    16,     3,    16,   121,    15,   146,    12,   123,
     124,   137,   124,     3,     5,   155,   126,   157,   126,   111,
     114,   115,   123,    12,   122,     3,     3,   115,    16,   124
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   111,   111,   111,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   120,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   125,   126,   126,   127,   128,   129,   130,
     130,   130,   131,   132,   132,   132,   132,   132,   132,   132,
     132,   133,   133,   134,   134,   134,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   140,   140,   140,   141,   141,   141,   142,   142,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     148,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     153,   153,   153,   153,   153,   153,   154,   154,   154,   154,
     155,   155,   156,   156,   156,   156,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   160,   160,   161,   161,   162,
     162,   162,   162,   163,   163,   164,   164,   165,   165,   165,
     166,   166,   167,   167,   168,   168,   169,   169,   170,   170,
     171,   171,   172,   172,   173,   173,   174,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   178,   178,   178,   178,
     179,   179,   179,   179,   180,   180,   181,   181,   182,   182,
     183,   183,   184,   185,   185,   185,   185,   185,   186,   186,
     186,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     8,     2,     0,
       1,     0,     1,     2,     1,     3,     1,     3,     1,     2,
       5,     4,     1,     2,     2,     2,     4,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     0,     7,     2,     3,     3,
       3,     3,     3,     5,     5,     6,     7,     9,     5,     5,
       5,     5,     7,     2,     3,     2,     2,     2,     1,     1,
       3,     1,     3,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     5,     2,     3,     2,     1,     1,     2,
       1,     2,     2,     1,     2,     1,     4,     0,     2,     1,
       1,     1,     1,     1,     2,     1,     2,     0,     1,     7,
       1,     1,     1,     1,     1,     1,     1,     6,     6,     2,
       0,     1,     2,     4,     5,     7,     5,     2,     2,     3,
       8,     8,     1,     3,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     3,     1,     3,     3,     2,
       1,     1,     3,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (arg, YY_("syntax error: cannot back up")); \
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
                  Type, Value, arg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, Scanner* arg)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
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
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, Scanner* arg)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep, arg);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, Scanner* arg)
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , arg);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, arg); \
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
            /* Fall through.  */
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return GW_OK;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Scanner* arg)
{
  YYUSE (yyvaluep);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 119: /* func_type  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1797 "src/parser.c" /* yacc.c:1254  */
        break;

    case 120: /* stmt_type  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1803 "src/parser.c" /* yacc.c:1254  */
        break;

    case 123: /* code_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1809 "src/parser.c" /* yacc.c:1254  */
        break;

    case 124: /* stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1815 "src/parser.c" /* yacc.c:1254  */
        break;

    case 127: /* enum_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1821 "src/parser.c" /* yacc.c:1254  */
        break;

    case 128: /* label_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1827 "src/parser.c" /* yacc.c:1254  */
        break;

    case 129: /* goto_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1833 "src/parser.c" /* yacc.c:1254  */
        break;

    case 130: /* case_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1839 "src/parser.c" /* yacc.c:1254  */
        break;

    case 131: /* switch_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1845 "src/parser.c" /* yacc.c:1254  */
        break;

    case 132: /* loop_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1851 "src/parser.c" /* yacc.c:1254  */
        break;

    case 133: /* selection_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1857 "src/parser.c" /* yacc.c:1254  */
        break;

    case 134: /* jump_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1863 "src/parser.c" /* yacc.c:1254  */
        break;

    case 135: /* exp_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1869 "src/parser.c" /* yacc.c:1254  */
        break;

    case 136: /* exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1875 "src/parser.c" /* yacc.c:1254  */
        break;

    case 137: /* binary_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1881 "src/parser.c" /* yacc.c:1254  */
        break;

    case 142: /* decl_exp2  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1887 "src/parser.c" /* yacc.c:1254  */
        break;

    case 143: /* decl_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1893 "src/parser.c" /* yacc.c:1254  */
        break;

    case 144: /* decl_exp3  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1899 "src/parser.c" /* yacc.c:1254  */
        break;

    case 158: /* union_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1905 "src/parser.c" /* yacc.c:1254  */
        break;

    case 166: /* con_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1911 "src/parser.c" /* yacc.c:1254  */
        break;

    case 167: /* log_or_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1917 "src/parser.c" /* yacc.c:1254  */
        break;

    case 168: /* log_and_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1923 "src/parser.c" /* yacc.c:1254  */
        break;

    case 169: /* inc_or_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1929 "src/parser.c" /* yacc.c:1254  */
        break;

    case 170: /* exc_or_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1935 "src/parser.c" /* yacc.c:1254  */
        break;

    case 171: /* and_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1941 "src/parser.c" /* yacc.c:1254  */
        break;

    case 172: /* eq_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1947 "src/parser.c" /* yacc.c:1254  */
        break;

    case 173: /* rel_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1953 "src/parser.c" /* yacc.c:1254  */
        break;

    case 174: /* shift_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1959 "src/parser.c" /* yacc.c:1254  */
        break;

    case 175: /* add_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1965 "src/parser.c" /* yacc.c:1254  */
        break;

    case 176: /* mul_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1971 "src/parser.c" /* yacc.c:1254  */
        break;

    case 177: /* cast_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1977 "src/parser.c" /* yacc.c:1254  */
        break;

    case 179: /* unary_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1983 "src/parser.c" /* yacc.c:1254  */
        break;

    case 180: /* dur_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1989 "src/parser.c" /* yacc.c:1254  */
        break;

    case 182: /* call_paren  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1995 "src/parser.c" /* yacc.c:1254  */
        break;

    case 184: /* dot_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2001 "src/parser.c" /* yacc.c:1254  */
        break;

    case 185: /* post_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2007 "src/parser.c" /* yacc.c:1254  */
        break;

    case 187: /* primary_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2013 "src/parser.c" /* yacc.c:1254  */
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

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

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
      yychar = yylex (&yylval, scan);
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
| yyreduce -- Do a reduction.  |
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
#line 108 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = (yyval.ast) = new_ast((yyvsp[0].section), NULL);  }
#line 2280 "src/parser.c" /* yacc.c:1645  */
    break;

  case 3:
#line 109 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = (yyval.ast) = new_ast((yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2286 "src/parser.c" /* yacc.c:1645  */
    break;

  case 4:
#line 113 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_stmt_list((yyvsp[0].stmt_list)); }
#line 2292 "src/parser.c" /* yacc.c:1645  */
    break;

  case 5:
#line 114 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_func_def ((yyvsp[0].func_def)); }
#line 2298 "src/parser.c" /* yacc.c:1645  */
    break;

  case 6:
#line 115 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_class_def((yyvsp[0].class_def)); }
#line 2304 "src/parser.c" /* yacc.c:1645  */
    break;

  case 7:
#line 120 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_def) = new_class_def((yyvsp[-5].flag), (yyvsp[-4].id_list), (yyvsp[-3].type_decl), (yyvsp[-1].class_body));
      if((yyvsp[-7].id_list))
        (yyval.class_def)->tmpl = new_tmpl_class((yyvsp[-7].id_list), -1);
  }
#line 2313 "src/parser.c" /* yacc.c:1645  */
    break;

  case 8:
#line 125 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2319 "src/parser.c" /* yacc.c:1645  */
    break;

  case 9:
#line 125 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = NULL; }
#line 2325 "src/parser.c" /* yacc.c:1645  */
    break;

  case 11:
#line 127 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = NULL; }
#line 2331 "src/parser.c" /* yacc.c:1645  */
    break;

  case 12:
#line 130 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = new_class_body((yyvsp[0].section), NULL); }
#line 2337 "src/parser.c" /* yacc.c:1645  */
    break;

  case 13:
#line 131 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = new_class_body((yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2343 "src/parser.c" /* yacc.c:1645  */
    break;

  case 14:
#line 134 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2349 "src/parser.c" /* yacc.c:1645  */
    break;

  case 15:
#line 134 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2355 "src/parser.c" /* yacc.c:1645  */
    break;

  case 16:
#line 135 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2361 "src/parser.c" /* yacc.c:1645  */
    break;

  case 17:
#line 135 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2367 "src/parser.c" /* yacc.c:1645  */
    break;

  case 18:
#line 137 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[0].stmt), NULL);}
#line 2373 "src/parser.c" /* yacc.c:1645  */
    break;

  case 19:
#line 137 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2379 "src/parser.c" /* yacc.c:1645  */
    break;

  case 20:
#line 139 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_fptr((yyvsp[-2].sym), (yyvsp[-3].type_decl), (yyvsp[-1].arg_list), (yyvsp[0].flag)); (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag); }
#line 2385 "src/parser.c" /* yacc.c:1645  */
    break;

  case 21:
#line 140 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_type((yyvsp[-2].type_decl), (yyvsp[-1].sym)); (yyvsp[-2].type_decl)->flag |= (yyvsp[-3].flag); }
#line 2391 "src/parser.c" /* yacc.c:1645  */
    break;

  case 23:
#line 144 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2397 "src/parser.c" /* yacc.c:1645  */
    break;

  case 24:
#line 145 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2403 "src/parser.c" /* yacc.c:1645  */
    break;

  case 25:
#line 149 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = new_arg_list((yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2409 "src/parser.c" /* yacc.c:1645  */
    break;

  case 26:
#line 150 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = new_arg_list((yyvsp[-3].type_decl), (yyvsp[-2].var_decl), (yyvsp[0].arg_list)); }
#line 2415 "src/parser.c" /* yacc.c:1645  */
    break;

  case 27:
#line 154 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_code, get_pos(arg)); }
#line 2421 "src/parser.c" /* yacc.c:1645  */
    break;

  case 28:
#line 155 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_code((yyvsp[-1].stmt_list)); }
#line 2427 "src/parser.c" /* yacc.c:1645  */
    break;

  case 42:
#line 177 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2433 "src/parser.c" /* yacc.c:1645  */
    break;

  case 43:
#line 178 "ly/gwion.y" /* yacc.c:1645  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2443 "src/parser.c" /* yacc.c:1645  */
    break;

  case 45:
#line 185 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.sym) = NULL; }
#line 2449 "src/parser.c" /* yacc.c:1645  */
    break;

  case 46:
#line 188 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_enum((yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2456 "src/parser.c" /* yacc.c:1645  */
    break;

  case 47:
#line 191 "ly/gwion.y" /* yacc.c:1645  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 1, get_pos(arg)); }
#line 2462 "src/parser.c" /* yacc.c:1645  */
    break;

  case 48:
#line 193 "ly/gwion.y" /* yacc.c:1645  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 0, get_pos(arg)); }
#line 2468 "src/parser.c" /* yacc.c:1645  */
    break;

  case 49:
#line 196 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2474 "src/parser.c" /* yacc.c:1645  */
    break;

  case 50:
#line 197 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2480 "src/parser.c" /* yacc.c:1645  */
    break;

  case 51:
#line 198 "ly/gwion.y" /* yacc.c:1645  */
    { gw_err("unhandled expression type in case statement.\n"); (yyval.stmt)=NULL;YYERROR ; }
#line 2486 "src/parser.c" /* yacc.c:1645  */
    break;

  case 52:
#line 201 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_switch((yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2492 "src/parser.c" /* yacc.c:1645  */
    break;

  case 53:
#line 205 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2498 "src/parser.c" /* yacc.c:1645  */
    break;

  case 54:
#line 207 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2504 "src/parser.c" /* yacc.c:1645  */
    break;

  case 55:
#line 209 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2510 "src/parser.c" /* yacc.c:1645  */
    break;

  case 56:
#line 211 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2516 "src/parser.c" /* yacc.c:1645  */
    break;

  case 57:
#line 213 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_auto((yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2522 "src/parser.c" /* yacc.c:1645  */
    break;

  case 58:
#line 215 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2528 "src/parser.c" /* yacc.c:1645  */
    break;

  case 59:
#line 217 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2534 "src/parser.c" /* yacc.c:1645  */
    break;

  case 60:
#line 219 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_loop((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2540 "src/parser.c" /* yacc.c:1645  */
    break;

  case 61:
#line 224 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2546 "src/parser.c" /* yacc.c:1645  */
    break;

  case 62:
#line 226 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2552 "src/parser.c" /* yacc.c:1645  */
    break;

  case 63:
#line 230 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_return, get_pos(arg)); (yyval.stmt)->d.stmt_exp.self = (yyval.stmt); }
#line 2558 "src/parser.c" /* yacc.c:1645  */
    break;

  case 64:
#line 231 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_return, (yyvsp[-1].exp)); }
#line 2564 "src/parser.c" /* yacc.c:1645  */
    break;

  case 65:
#line 232 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_break, get_pos(arg)); }
#line 2570 "src/parser.c" /* yacc.c:1645  */
    break;

  case 66:
#line 233 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_continue, get_pos(arg)); }
#line 2576 "src/parser.c" /* yacc.c:1645  */
    break;

  case 67:
#line 237 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2582 "src/parser.c" /* yacc.c:1645  */
    break;

  case 68:
#line 238 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_exp, get_pos(arg)); }
#line 2588 "src/parser.c" /* yacc.c:1645  */
    break;

  case 70:
#line 241 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2594 "src/parser.c" /* yacc.c:1645  */
    break;

  case 72:
#line 243 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 2600 "src/parser.c" /* yacc.c:1645  */
    break;

  case 73:
#line 245 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2606 "src/parser.c" /* yacc.c:1645  */
    break;

  case 74:
#line 245 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = NULL; }
#line 2612 "src/parser.c" /* yacc.c:1645  */
    break;

  case 75:
#line 247 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_chuck; }
#line 2618 "src/parser.c" /* yacc.c:1645  */
    break;

  case 76:
#line 247 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_unchuck; }
#line 2624 "src/parser.c" /* yacc.c:1645  */
    break;

  case 77:
#line 247 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_eq; }
#line 2630 "src/parser.c" /* yacc.c:1645  */
    break;

  case 78:
#line 248 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ref; }
#line 2636 "src/parser.c" /* yacc.c:1645  */
    break;

  case 79:
#line 248 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_radd; }
#line 2642 "src/parser.c" /* yacc.c:1645  */
    break;

  case 80:
#line 249 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsub; }
#line 2648 "src/parser.c" /* yacc.c:1645  */
    break;

  case 81:
#line 249 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rmul; }
#line 2654 "src/parser.c" /* yacc.c:1645  */
    break;

  case 82:
#line 250 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rdiv; }
#line 2660 "src/parser.c" /* yacc.c:1645  */
    break;

  case 83:
#line 250 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rmod; }
#line 2666 "src/parser.c" /* yacc.c:1645  */
    break;

  case 84:
#line 251 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_trig; }
#line 2672 "src/parser.c" /* yacc.c:1645  */
    break;

  case 85:
#line 251 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_untrig; }
#line 2678 "src/parser.c" /* yacc.c:1645  */
    break;

  case 86:
#line 252 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsl; }
#line 2684 "src/parser.c" /* yacc.c:1645  */
    break;

  case 87:
#line 252 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsr; }
#line 2690 "src/parser.c" /* yacc.c:1645  */
    break;

  case 88:
#line 252 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsand; }
#line 2696 "src/parser.c" /* yacc.c:1645  */
    break;

  case 89:
#line 253 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsor; }
#line 2702 "src/parser.c" /* yacc.c:1645  */
    break;

  case 90:
#line 253 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsxor; }
#line 2708 "src/parser.c" /* yacc.c:1645  */
    break;

  case 91:
#line 257 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = new_array_sub((yyvsp[-1].exp)); }
#line 2714 "src/parser.c" /* yacc.c:1645  */
    break;

  case 92:
#line 258 "ly/gwion.y" /* yacc.c:1645  */
    { if((yyvsp[-2].exp)->next){ gwion_error(arg, "invalid format for array init [...][...]..."); free_exp((yyvsp[-2].exp)); free_array_sub((yyvsp[0].array_sub)); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2720 "src/parser.c" /* yacc.c:1645  */
    break;

  case 93:
#line 259 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "partially empty array init [...][]..."); free_exp((yyvsp[-3].exp)); YYERROR; }
#line 2726 "src/parser.c" /* yacc.c:1645  */
    break;

  case 94:
#line 263 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = new_array_sub(NULL); }
#line 2732 "src/parser.c" /* yacc.c:1645  */
    break;

  case 95:
#line 264 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2738 "src/parser.c" /* yacc.c:1645  */
    break;

  case 96:
#line 265 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "partially empty array init [][...]"); free_array_sub((yyvsp[-1].array_sub)); free_array_sub((yyvsp[0].array_sub)); YYERROR; }
#line 2744 "src/parser.c" /* yacc.c:1645  */
    break;

  case 99:
#line 269 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp)= new_exp_decl((yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2750 "src/parser.c" /* yacc.c:1645  */
    break;

  case 101:
#line 271 "ly/gwion.y" /* yacc.c:1645  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2756 "src/parser.c" /* yacc.c:1645  */
    break;

  case 102:
#line 274 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2762 "src/parser.c" /* yacc.c:1645  */
    break;

  case 103:
#line 274 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = NULL; }
#line 2768 "src/parser.c" /* yacc.c:1645  */
    break;

  case 104:
#line 275 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2774 "src/parser.c" /* yacc.c:1645  */
    break;

  case 105:
#line 275 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2780 "src/parser.c" /* yacc.c:1645  */
    break;

  case 106:
#line 277 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2786 "src/parser.c" /* yacc.c:1645  */
    break;

  case 107:
#line 277 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = NULL; }
#line 2792 "src/parser.c" /* yacc.c:1645  */
    break;

  case 108:
#line 279 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2798 "src/parser.c" /* yacc.c:1645  */
    break;

  case 109:
#line 280 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_static; }
#line 2804 "src/parser.c" /* yacc.c:1645  */
    break;

  case 110:
#line 281 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_global; }
#line 2810 "src/parser.c" /* yacc.c:1645  */
    break;

  case 111:
#line 282 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_private; }
#line 2816 "src/parser.c" /* yacc.c:1645  */
    break;

  case 112:
#line 283 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_protect; }
#line 2822 "src/parser.c" /* yacc.c:1645  */
    break;

  case 113:
#line 286 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2828 "src/parser.c" /* yacc.c:1645  */
    break;

  case 114:
#line 286 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2834 "src/parser.c" /* yacc.c:1645  */
    break;

  case 115:
#line 287 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2840 "src/parser.c" /* yacc.c:1645  */
    break;

  case 116:
#line 287 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2846 "src/parser.c" /* yacc.c:1645  */
    break;

  case 117:
#line 288 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2852 "src/parser.c" /* yacc.c:1645  */
    break;

  case 118:
#line 288 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2858 "src/parser.c" /* yacc.c:1645  */
    break;

  case 119:
#line 292 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[0].stmt), (yyvsp[-5].flag) | (yyvsp[-1].flag));
    if((yyvsp[-6].id_list)) {
      SET_FLAG((yyval.func_def), template);
      (yyval.func_def)->tmpl = new_tmpl_list((yyvsp[-6].id_list), -1);
    }
  }
#line 2869 "src/parser.c" /* yacc.c:1645  */
    break;

  case 127:
#line 303 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-3].type_decl), OP_SYM((yyvsp[-4].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op); }
#line 2875 "src/parser.c" /* yacc.c:1645  */
    break;

  case 128:
#line 305 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-3].type_decl), OP_SYM((yyvsp[-5].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary); }
#line 2881 "src/parser.c" /* yacc.c:1645  */
    break;

  case 129:
#line 307 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def(new_type_decl(new_id_list(insert_symbol("void"), get_pos(arg)), 0),
       insert_symbol("dtor"), NULL, (yyvsp[0].stmt), ae_flag_dtor); }
#line 2888 "src/parser.c" /* yacc.c:1645  */
    break;

  case 130:
#line 311 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = 0; }
#line 2894 "src/parser.c" /* yacc.c:1645  */
    break;

  case 131:
#line 311 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_flag_ref; }
#line 2900 "src/parser.c" /* yacc.c:1645  */
    break;

  case 132:
#line 314 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl(new_id_list((yyvsp[-1].sym), get_pos(arg)), (yyvsp[0].ival)); }
#line 2906 "src/parser.c" /* yacc.c:1645  */
    break;

  case 133:
#line 315 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-2].id_list), (yyvsp[0].ival)); }
#line 2912 "src/parser.c" /* yacc.c:1645  */
    break;

  case 134:
#line 316 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl(new_id_list((yyvsp[-1].sym), get_pos(arg)),
      (yyvsp[0].ival)); (yyval.type_decl)->types = (yyvsp[-3].type_list); }
#line 2919 "src/parser.c" /* yacc.c:1645  */
    break;

  case 135:
#line 318 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-2].id_list), (yyvsp[0].ival));
      (yyval.type_decl)->types = (yyvsp[-5].type_list); }
#line 2926 "src/parser.c" /* yacc.c:1645  */
    break;

  case 136:
#line 320 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl2((yyvsp[-2].id_list), (yyvsp[0].ival)); }
#line 2932 "src/parser.c" /* yacc.c:1645  */
    break;

  case 137:
#line 321 "ly/gwion.y" /* yacc.c:1645  */
    { CHECK_FLAG(arg, (yyvsp[0].type_decl), const); (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2938 "src/parser.c" /* yacc.c:1645  */
    break;

  case 138:
#line 325 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-1].exp), NULL); }
#line 2944 "src/parser.c" /* yacc.c:1645  */
    break;

  case 139:
#line 326 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2950 "src/parser.c" /* yacc.c:1645  */
    break;

  case 140:
#line 330 "ly/gwion.y" /* yacc.c:1645  */
    {
      (yyval.stmt) = new_stmt_union((yyvsp[-3].decl_list), get_pos(arg));
      (yyval.stmt)->d.stmt_union.type_xid = (yyvsp[-5].sym);
      (yyval.stmt)->d.stmt_union.xid = (yyvsp[-1].sym);
      (yyval.stmt)->d.stmt_union.flag = (yyvsp[-6].flag);
    }
#line 2961 "src/parser.c" /* yacc.c:1645  */
    break;

  case 141:
#line 336 "ly/gwion.y" /* yacc.c:1645  */
    {
    err_msg(get_pos(arg), "Unions should only contain declarations.");
    (yyval.stmt)=NULL;
    YYERROR;
    }
#line 2971 "src/parser.c" /* yacc.c:1645  */
    break;

  case 142:
#line 344 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[0].var_decl), NULL); }
#line 2977 "src/parser.c" /* yacc.c:1645  */
    break;

  case 143:
#line 345 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2983 "src/parser.c" /* yacc.c:1645  */
    break;

  case 144:
#line 349 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2989 "src/parser.c" /* yacc.c:1645  */
    break;

  case 145:
#line 350 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2995 "src/parser.c" /* yacc.c:1645  */
    break;

  case 146:
#line 351 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 3001 "src/parser.c" /* yacc.c:1645  */
    break;

  case 147:
#line 354 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_eq; }
#line 3007 "src/parser.c" /* yacc.c:1645  */
    break;

  case 148:
#line 354 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ne; }
#line 3013 "src/parser.c" /* yacc.c:1645  */
    break;

  case 149:
#line 355 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_lt; }
#line 3019 "src/parser.c" /* yacc.c:1645  */
    break;

  case 150:
#line 355 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_gt; }
#line 3025 "src/parser.c" /* yacc.c:1645  */
    break;

  case 151:
#line 355 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_le; }
#line 3031 "src/parser.c" /* yacc.c:1645  */
    break;

  case 152:
#line 355 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ge; }
#line 3037 "src/parser.c" /* yacc.c:1645  */
    break;

  case 153:
#line 356 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_shl; }
#line 3043 "src/parser.c" /* yacc.c:1645  */
    break;

  case 154:
#line 356 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_shr; }
#line 3049 "src/parser.c" /* yacc.c:1645  */
    break;

  case 155:
#line 357 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_add; }
#line 3055 "src/parser.c" /* yacc.c:1645  */
    break;

  case 156:
#line 357 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_sub; }
#line 3061 "src/parser.c" /* yacc.c:1645  */
    break;

  case 157:
#line 358 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mul; }
#line 3067 "src/parser.c" /* yacc.c:1645  */
    break;

  case 158:
#line 358 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_div; }
#line 3073 "src/parser.c" /* yacc.c:1645  */
    break;

  case 159:
#line 358 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mod; }
#line 3079 "src/parser.c" /* yacc.c:1645  */
    break;

  case 161:
#line 360 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_if((yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3085 "src/parser.c" /* yacc.c:1645  */
    break;

  case 163:
#line 362 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_or, (yyvsp[0].exp)); }
#line 3091 "src/parser.c" /* yacc.c:1645  */
    break;

  case 165:
#line 363 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_and, (yyvsp[0].exp)); }
#line 3097 "src/parser.c" /* yacc.c:1645  */
    break;

  case 167:
#line 364 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sor, (yyvsp[0].exp)); }
#line 3103 "src/parser.c" /* yacc.c:1645  */
    break;

  case 169:
#line 365 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sxor, (yyvsp[0].exp)); }
#line 3109 "src/parser.c" /* yacc.c:1645  */
    break;

  case 171:
#line 366 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sand, (yyvsp[0].exp)); }
#line 3115 "src/parser.c" /* yacc.c:1645  */
    break;

  case 173:
#line 367 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3121 "src/parser.c" /* yacc.c:1645  */
    break;

  case 175:
#line 368 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3127 "src/parser.c" /* yacc.c:1645  */
    break;

  case 177:
#line 369 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3133 "src/parser.c" /* yacc.c:1645  */
    break;

  case 179:
#line 370 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3139 "src/parser.c" /* yacc.c:1645  */
    break;

  case 181:
#line 371 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3145 "src/parser.c" /* yacc.c:1645  */
    break;

  case 183:
#line 374 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_cast((yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3151 "src/parser.c" /* yacc.c:1645  */
    break;

  case 184:
#line 376 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_sub; }
#line 3157 "src/parser.c" /* yacc.c:1645  */
    break;

  case 185:
#line 376 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mul; }
#line 3163 "src/parser.c" /* yacc.c:1645  */
    break;

  case 187:
#line 378 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_not; }
#line 3169 "src/parser.c" /* yacc.c:1645  */
    break;

  case 188:
#line 378 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_spork; }
#line 3175 "src/parser.c" /* yacc.c:1645  */
    break;

  case 189:
#line 378 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_cmp; }
#line 3181 "src/parser.c" /* yacc.c:1645  */
    break;

  case 191:
#line 381 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_unary((yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3187 "src/parser.c" /* yacc.c:1645  */
    break;

  case 192:
#line 383 "ly/gwion.y" /* yacc.c:1645  */
    {
      if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp) {
        free_type_decl((yyvsp[0].type_decl));
        gwion_error(arg, "can't use empty '[]' in 'new' expression");
        YYERROR;
      }
      (yyval.exp) = new_exp_unary2(op_new, (yyvsp[0].type_decl));
    }
#line 3200 "src/parser.c" /* yacc.c:1645  */
    break;

  case 193:
#line 392 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_unary3(op_spork, (yyvsp[0].stmt)); }
#line 3206 "src/parser.c" /* yacc.c:1645  */
    break;

  case 195:
#line 396 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_dur((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3212 "src/parser.c" /* yacc.c:1645  */
    break;

  case 196:
#line 399 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = new_type_list((yyvsp[0].type_decl), NULL); }
#line 3218 "src/parser.c" /* yacc.c:1645  */
    break;

  case 197:
#line 400 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = new_type_list((yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3224 "src/parser.c" /* yacc.c:1645  */
    break;

  case 198:
#line 403 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3230 "src/parser.c" /* yacc.c:1645  */
    break;

  case 199:
#line 403 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = NULL; }
#line 3236 "src/parser.c" /* yacc.c:1645  */
    break;

  case 200:
#line 405 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_inc; }
#line 3242 "src/parser.c" /* yacc.c:1645  */
    break;

  case 201:
#line 405 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_dec; }
#line 3248 "src/parser.c" /* yacc.c:1645  */
    break;

  case 202:
#line 407 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_dot((yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3254 "src/parser.c" /* yacc.c:1645  */
    break;

  case 204:
#line 409 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_array((yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3260 "src/parser.c" /* yacc.c:1645  */
    break;

  case 205:
#line 411 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_call((yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call((yyvsp[-1].type_list)); }
#line 3267 "src/parser.c" /* yacc.c:1645  */
    break;

  case 206:
#line 414 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_post((yyvsp[-1].exp), (yyvsp[0].ival)); }
#line 3273 "src/parser.c" /* yacc.c:1645  */
    break;

  case 207:
#line 414 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3279 "src/parser.c" /* yacc.c:1645  */
    break;

  case 208:
#line 417 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_complex; }
#line 3285 "src/parser.c" /* yacc.c:1645  */
    break;

  case 209:
#line 418 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3291 "src/parser.c" /* yacc.c:1645  */
    break;

  case 210:
#line 419 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3297 "src/parser.c" /* yacc.c:1645  */
    break;

  case 211:
#line 422 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_id(     (yyvsp[0].sym), get_pos(arg)); }
#line 3303 "src/parser.c" /* yacc.c:1645  */
    break;

  case 212:
#line 423 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_int(    (yyvsp[0].lval), get_pos(arg)); }
#line 3309 "src/parser.c" /* yacc.c:1645  */
    break;

  case 213:
#line 424 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_float(  (yyvsp[0].fval), get_pos(arg)); }
#line 3315 "src/parser.c" /* yacc.c:1645  */
    break;

  case 214:
#line 425 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_string( (yyvsp[0].sval), get_pos(arg)); }
#line 3321 "src/parser.c" /* yacc.c:1645  */
    break;

  case 215:
#line 426 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_char(   (yyvsp[0].sval), get_pos(arg)); }
#line 3327 "src/parser.c" /* yacc.c:1645  */
    break;

  case 216:
#line 427 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_array(  (yyvsp[0].array_sub), get_pos(arg)); }
#line 3333 "src/parser.c" /* yacc.c:1645  */
    break;

  case 217:
#line 428 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_array(  (yyvsp[0].array_sub), get_pos(arg)); }
#line 3339 "src/parser.c" /* yacc.c:1645  */
    break;

  case 218:
#line 429 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_vec((yyvsp[-2].ival), (yyvsp[-1].exp)); }
#line 3345 "src/parser.c" /* yacc.c:1645  */
    break;

  case 219:
#line 430 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_hack(   (yyvsp[-1].exp)); }
#line 3351 "src/parser.c" /* yacc.c:1645  */
    break;

  case 220:
#line 431 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) =                      (yyvsp[-1].exp);                }
#line 3357 "src/parser.c" /* yacc.c:1645  */
    break;

  case 221:
#line 432 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_nil(        get_pos(arg)); }
#line 3363 "src/parser.c" /* yacc.c:1645  */
    break;


#line 3367 "src/parser.c" /* yacc.c:1645  */
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
      yyerror (arg, YY_("syntax error"));
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
        yyerror (arg, yymsgp);
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
                      yytoken, &yylval, arg);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[yystate], yyvsp, arg);
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
  yyerror (arg, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, arg);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, arg);
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
#line 434 "ly/gwion.y" /* yacc.c:1903  */

