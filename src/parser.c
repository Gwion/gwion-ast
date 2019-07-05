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
#define OP_SYM(a) (a) // TODO: remove
#define GET_LOC(a) loc_cpy(mpool(arg), a)
ANN void gwion_error(YYLTYPE*, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);

#line 97 "src/parser.c" /* yacc.c:337  */
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
    CHUCK = 325,
    PLUSCHUCK = 326,
    MINUSCHUCK = 327,
    TIMESCHUCK = 328,
    DIVIDECHUCK = 329,
    MODULOCHUCK = 330,
    ATCHUCK = 331,
    UNCHUCK = 332,
    TRIG = 333,
    UNTRIG = 334,
    COLONCOLON = 335,
    AND = 336,
    EQ = 337,
    GE = 338,
    GT = 339,
    LE = 340,
    LT = 341,
    NEQ = 342,
    SHIFT_LEFT = 343,
    SHIFT_RIGHT = 344,
    S_AND = 345,
    S_OR = 346,
    S_XOR = 347,
    OR = 348,
    RSL = 349,
    RSR = 350,
    RSAND = 351,
    RSOR = 352,
    RSXOR = 353,
    LTMPL = 354,
    RTMPL = 355,
    TILDA = 356,
    EXCLAMATION = 357,
    PP_COMMENT = 358,
    PP_INCLUDE = 359,
    PP_DEFINE = 360,
    PP_UNDEF = 361,
    PP_IFDEF = 362,
    PP_IFNDEF = 363,
    PP_ELSE = 364,
    PP_ENDIF = 365,
    PP_NL = 366
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
#define CHUCK 325
#define PLUSCHUCK 326
#define MINUSCHUCK 327
#define TIMESCHUCK 328
#define DIVIDECHUCK 329
#define MODULOCHUCK 330
#define ATCHUCK 331
#define UNCHUCK 332
#define TRIG 333
#define UNTRIG 334
#define COLONCOLON 335
#define AND 336
#define EQ 337
#define GE 338
#define GT 339
#define LE 340
#define LT 341
#define NEQ 342
#define SHIFT_LEFT 343
#define SHIFT_RIGHT 344
#define S_AND 345
#define S_OR 346
#define S_XOR 347
#define OR 348
#define RSL 349
#define RSR 350
#define RSAND 351
#define RSOR 352
#define RSXOR 353
#define LTMPL 354
#define RTMPL 355
#define TILDA 356
#define EXCLAMATION 357
#define PP_COMMENT 358
#define PP_INCLUDE 359
#define PP_DEFINE 360
#define PP_UNDEF 361
#define PP_IFDEF 362
#define PP_IFNDEF 363
#define PP_ELSE 364
#define PP_ENDIF 365
#define PP_NL 366

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "ly/gwion.y" /* yacc.c:352  */

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

#line 390 "src/parser.c" /* yacc.c:352  */
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
#define YYFINAL  194
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1605

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  248
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  411

#define YYUNDEFTOK  2
#define YYMAXUTOK   366

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
     105,   106,   107,   108,   109,   110,   111
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   126,   126,   127,   130,   131,   135,   136,   137,   141,
     147,   147,   149,   149,   152,   153,   156,   156,   157,   157,
     159,   159,   161,   163,   166,   173,   180,   180,   182,   186,
     190,   191,   191,   192,   193,   193,   196,   197,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   219,   220,   227,   227,   230,   233,   235,   238,   239,
     240,   243,   246,   247,   250,   252,   254,   256,   258,   260,
     265,   267,   272,   273,   274,   277,   278,   282,   283,   286,
     286,   288,   288,   290,   290,   292,   292,   292,   292,   293,
     293,   294,   294,   295,   295,   296,   296,   297,   297,   298,
     298,   298,   302,   303,   304,   308,   309,   310,   313,   313,
     314,   314,   315,   317,   318,   319,   319,   321,   321,   322,
     322,   323,   323,   325,   325,   327,   328,   331,   332,   335,
     336,   337,   340,   340,   343,   346,   346,   346,   346,   346,
     348,   349,   351,   353,   355,   361,   361,   364,   365,   369,
     370,   374,   377,   378,   380,   381,   384,   401,   408,   409,
     412,   413,   415,   416,   417,   418,   419,   420,   422,   422,
     423,   423,   423,   423,   424,   424,   425,   425,   426,   426,
     426,   427,   427,   430,   430,   431,   431,   432,   432,   433,
     433,   434,   434,   435,   435,   436,   436,   437,   437,   438,
     438,   439,   439,   441,   441,   443,   443,   446,   446,   446,
     447,   447,   447,   447,   450,   450,   451,   452,   453,   456,
     457,   458,   458,   461,   462,   465,   465,   467,   467,   469,
     470,   470,   472,   475,   476,   479,   480,   481,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494
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
  "\">>>\"", "\"=>\"", "\"+=>\"", "\"-=>\"", "\"*=>\"", "\"/=>\"",
  "\"%=>\"", "\"@=>\"", "\"@=<\"", "\"]=>\"", "\"[=<\"", "\"::\"",
  "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"", "\"<\"", "\"!=\"",
  "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"", "\"||\"", "\"<<=>\"",
  "\">>=>\"", "\"&=>\"", "\"|=>\"", "\"^=>\"", "\"<~\"", "\"~>\"", "\"~\"",
  "\"!\"", "\"<comment>\"", "\"#include\"", "\"#define>\"", "\"#undef\"",
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
  "opt_flag", "func_def_base", "op_op", "func_def", "atsym",
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366
};
# endif

#define YYPACT_NINF -311

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-311)))

#define YYTABLE_NINF -85

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     452,  -311,   862,   926,   552,  -311,  -311,  -311,   123,    40,
    -311,   652,  -311,    53,    89,    63,  1246,  1506,   123,  1246,
    -311,  -311,   -48,  -311,  -311,  -311,  -311,   109,  1507,   123,
     123,    21,    64,    63,  1246,  -311,  -311,    85,  -311,  -311,
    -311,  -311,  -311,  -311,    46,   109,   109,   128,  1246,    46,
    -311,  -311,   143,  -311,   452,  -311,  -311,  -311,  -311,  -311,
    -311,   652,    96,  -311,  -311,  -311,  -311,  -311,   146,  -311,
    -311,   154,  -311,  -311,   157,  1349,  -311,   156,  -311,  -311,
    -311,  -311,    77,  -311,    46,  -311,  -311,  -311,    64,  -311,
      63,  -311,  -311,   -18,    93,    91,    92,    97,   -38,    86,
      78,     4,   119,  -311,   126,  1312,  -311,   109,  -311,  -311,
      65,  1246,  -311,  -311,    72,   182,  1404,  -311,   183,  -311,
     180,  -311,    46,  1246,   131,  1246,   725,   189,   109,   133,
    -311,   134,    25,   135,   184,   195,    63,   123,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,   104,  -311,  -311,  -311,    46,  -311,
    -311,  -311,  -311,    46,    46,   -48,   160,  -311,  -311,    63,
      63,  -311,   159,    63,  -311,  -311,   194,  -311,  -311,  1246,
     138,  -311,   204,   110,  -311,  -311,  -311,    63,  -311,  1246,
    -311,  -311,  1246,  1246,   990,  -311,  -311,  -311,  -311,   194,
    -311,   205,  1246,  1339,  1339,  1339,  1339,  1339,  -311,  -311,
    1339,  1339,  1339,  1339,  1404,    46,    46,  -311,  -311,  1246,
      63,    46,   206,  -311,  -311,   212,  -311,   218,  -311,    20,
      63,   213,  1246,   220,    64,   798,  -311,  -311,  -311,  -311,
    -311,    63,  -311,   136,   224,    63,  -311,   226,   229,    20,
      63,    63,  -311,  -311,  -311,  -311,  -311,   231,  -311,    46,
      57,  -311,   232,  -311,  -311,  -311,  -311,    63,   173,    93,
      91,    92,    97,   -38,    86,    78,     4,   119,   126,  -311,
     236,  -311,   144,  1054,  -311,  -311,  1118,  -311,  -311,   237,
     109,   -48,   652,   243,   652,    63,  1182,   238,  -311,    63,
     216,    46,    46,  -311,   -48,  -311,   244,  -311,  -311,  -311,
     652,  -311,  1339,    46,  -311,  -311,   241,  -311,  -311,  -311,
     251,   242,  -311,  -311,    39,   652,   253,    63,  -311,    46,
     248,   259,    63,   258,    33,    41,  -311,  -311,   260,  -311,
      46,  -311,   652,  1246,  -311,   652,   262,  -311,   452,    46,
     194,  -311,   109,  -311,    15,  -311,    63,   257,   265,    63,
     261,   109,   266,  -311,  -311,  1406,  -311,  -311,   452,   263,
    -311,   268,  -311,   156,  -311,   271,  -311,   194,  -311,    63,
      46,  -311,    63,  -311,    46,   652,  -311,  -311,   109,    15,
    -311,   156,   269,  -311,   273,  -311,  -311,  -311,  -311,  -311,
    -311
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    78,     0,     0,     0,   236,   235,   237,   132,     0,
      62,     0,    63,     0,     0,     0,     0,     0,   132,    72,
      73,    74,   124,   125,   126,   127,   128,     0,     0,   132,
     132,     0,   145,   222,     0,   239,   240,    51,   241,   242,
     227,   207,   228,   208,     0,   211,   212,     0,     0,     0,
     213,   210,     0,     2,     4,     8,   147,     6,    48,    49,
      41,    20,   238,    46,    42,    43,    45,    44,     0,    39,
      40,     0,    47,    38,     0,    79,   108,   109,   243,    81,
     115,   111,   130,   129,     0,   140,     7,   149,   145,   152,
       0,    50,   110,   181,   183,   185,   187,   189,   191,   193,
     195,   197,   199,   201,   203,     0,   205,     0,   209,   234,
     214,     0,   230,   248,   238,     0,     0,   105,     0,    36,
       0,   133,     0,     0,     0,     0,     0,     0,     0,     0,
     238,   234,    84,   230,     0,     0,     0,   132,   144,   176,
     177,   178,   179,   180,    85,    90,    91,    92,    93,    94,
      89,    86,    95,    96,   101,    87,   173,   171,   172,   170,
      88,   174,   175,    97,     0,    99,   100,   135,     0,   137,
     136,   139,   138,     0,     0,   124,    18,   153,   146,     0,
     219,   221,     0,     0,    28,   216,    26,   217,   218,     0,
       0,    29,   223,     0,     1,     5,    21,     0,    56,     0,
      76,    77,     0,     0,     0,   107,   131,   116,   151,   160,
     113,   158,     0,     0,     0,     0,     0,     0,   168,   169,
       0,     0,     0,     0,     0,     0,     0,   215,   247,     0,
       0,     0,     0,   231,   233,     0,   246,   102,    37,     0,
       0,     0,     0,     0,   145,     0,    57,    61,    60,    59,
      58,     0,    75,     0,    16,     0,    98,     0,     0,     0,
       0,    54,   112,   220,   148,    52,    27,     0,   245,     0,
       0,    19,     0,    80,    82,   106,   161,     0,     0,   184,
     186,   188,   190,   192,   194,   196,   198,   200,   202,   206,
       0,   229,     0,     0,   232,   244,     0,   103,   122,     0,
       0,   124,     0,     0,     0,     0,     0,     0,   123,     0,
      11,     0,     0,    24,   124,    53,     0,   204,   224,   150,
       0,   159,     0,     0,    83,   226,     0,   104,   121,   134,
       0,    70,    65,    69,   160,     0,     0,    54,    17,     0,
       0,     0,     0,     0,     0,     0,    64,   182,     0,   225,
     118,    23,     0,     0,    66,     0,     0,    10,    13,     0,
     162,    30,     0,    25,   120,    22,    54,     0,     0,     0,
       0,     0,    31,   117,    71,     0,    67,    55,    14,     0,
      12,     0,   164,   163,   142,    34,   119,   165,    33,    54,
     154,   114,    54,   143,     0,     0,    15,     9,     0,     0,
     167,   166,     0,   155,     0,    32,    68,   141,    35,   157,
     156
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -311,  -311,   215,  -263,  -311,  -311,  -311,   -98,  -220,    84,
      31,  -311,  -311,  -311,  -311,   -32,   -57,   -95,  -174,  -111,
     -58,  -112,   -22,    -5,     0,  -290,  -311,  -311,  -311,  -311,
    -311,   164,  -311,  -311,  -311,  -311,  -101,    50,   -64,  -311,
     267,   -69,  -310,  -172,    95,   210,  -311,  -311,  -311,    42,
    -162,  -311,   221,    10,    -8,  -311,  -311,  -311,   -79,    30,
    -311,   277,    59,   -80,  -311,   -83,  -311,   -56,  -311,  -311,
     283,   284,   288,   289,    -3,  -311,   108,   111,   112,   107,
     114,   106,   103,   116,   113,  -311,   105,     1,   -19,   153,
    -311,  -202,  -311,     2,   317,   322,  -311,   324
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    52,    53,    54,    55,   340,   379,   380,   253,    56,
      57,   259,   239,    58,    59,   191,   185,   192,   372,   373,
     385,   386,    60,    61,   176,   316,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   232,
     203,    76,    77,    78,    79,    80,   368,    81,   351,   300,
     137,    82,    83,    84,   122,    85,   168,    86,   179,    87,
      88,    89,    90,   370,    91,   262,   211,   361,   388,   220,
     221,   222,   223,   224,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   116,   106,   181,
     107,   193,   294,   108,   109,   110,   111,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   105,   114,   114,    62,   138,   124,   210,   205,   208,
     134,    62,   184,   261,   266,   127,   114,   130,   121,   114,
     364,   174,   175,   187,   188,   245,   298,   240,   121,   292,
     173,   307,   229,   180,   114,   120,   363,   276,   364,   121,
     121,   233,   367,   212,   218,   123,     3,   356,   114,   219,
     383,   136,   115,   118,    62,   105,    31,   139,   125,   140,
     230,    62,    34,   233,   299,    37,   128,   318,    34,   135,
     -84,    37,   229,   257,    31,   213,   387,   401,   258,    40,
      34,    42,    31,    37,   182,   228,   227,    31,    34,   338,
     209,    37,   196,    34,   126,   378,    37,   227,   190,   402,
     230,   353,   404,   186,    34,   130,   247,    37,   186,    25,
      26,   114,   234,    37,    49,   378,   130,   197,     4,    40,
      49,    42,   -18,   114,   231,   114,   114,   178,   183,   255,
     289,   290,    49,   189,   234,   -18,   254,   341,   343,   330,
      49,   197,   260,   194,   306,    49,   -18,   121,    10,   348,
      12,   199,   344,    23,    24,    25,    26,   200,   198,   -18,
     201,   235,   276,   204,   231,   305,   161,   162,   297,   156,
     157,   158,   159,   241,   214,   243,   141,   142,   143,   209,
     180,   186,   215,   265,   216,   381,   225,   217,   236,   114,
     238,   237,   246,   251,   321,   248,   249,   250,   252,   114,
     256,     3,   114,   114,   114,   197,   264,   268,   269,   277,
     270,   293,   114,   130,   130,   130,   130,   130,   295,   302,
     130,   130,   130,   130,   130,   296,   304,   186,   309,   114,
     291,   311,   186,   186,   312,   322,   308,   317,   320,   267,
     301,   323,   114,   328,   324,   114,   332,   349,   337,   272,
     339,   254,   273,   345,   118,   310,   350,   358,   352,   355,
     314,   315,   278,   359,   362,   377,   371,   389,   390,   195,
     394,   392,   409,   397,   398,   399,   410,   209,   329,   118,
     396,   271,   357,   405,   186,   186,   365,   408,   242,   375,
     186,   382,   303,   114,   207,   167,   114,   331,   274,   333,
     319,   313,    62,   206,    62,   334,   114,   184,   177,   254,
     403,   169,   170,   391,   205,   346,   171,   172,   400,   347,
      62,   279,   130,   282,   285,   280,   284,   281,   186,   288,
     354,   283,   205,   263,   131,    62,   287,   315,   286,   132,
     384,   133,   360,   326,     0,     0,   118,   374,     0,   393,
     376,     0,    62,   114,     0,    62,   336,     0,    62,   105,
       0,     0,     0,     0,     0,     0,   315,     0,     0,   360,
     342,   342,     0,     0,     0,     0,   407,     0,    62,   105,
       0,     0,   342,     0,     0,     0,     0,     0,     0,   315,
     406,     0,   315,     0,     0,    62,     0,     0,   186,     0,
       0,     0,     0,   366,   369,     0,     0,     0,     0,   342,
       0,     0,     0,     0,     0,     0,     0,     0,   342,     0,
       0,     0,     0,   366,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,     0,     0,   342,     0,     1,     0,     2,   366,     3,
       0,     4,     0,     5,     6,     7,     8,     9,     0,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,    28,
      29,     0,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,    44,    45,    46,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,    50,    51,     1,     0,     2,     0,     3,
       0,     4,   119,     5,     6,     7,     0,     9,     0,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    23,    24,    25,    26,     0,     0,     0,     0,
      29,     0,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,    44,    45,    46,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,    50,    51,     1,     0,     2,     0,     3,
       0,     4,     0,     5,     6,     7,     0,     9,     0,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    23,    24,    25,    26,     0,     0,     0,     0,
      29,     0,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,    44,    45,    46,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,    50,    51,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,    31,   244,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,    44,
      45,    46,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,     0,     0,     0,     5,
       6,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,    50,    51,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,    44,    45,    46,    47,    48,     2,   113,     3,
       0,     0,     0,     5,     6,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,     0,    49,     0,    50,
      51,     0,     0,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,    44,    45,    46,    47,
      48,     2,     0,     3,   117,     0,     0,     5,     6,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
       0,    49,     0,    50,    51,     0,     0,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,     0,
      40,    41,    42,    43,     0,     0,     0,     0,     0,     0,
      44,    45,    46,    47,    48,     2,     0,     3,   275,     0,
       0,     5,     6,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,     0,    49,     0,    50,    51,     0,
       0,    31,    32,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,    44,    45,    46,    47,    48,     2,
     325,     3,     0,     0,     0,     5,     6,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,     0,    49,
       0,    50,    51,     0,     0,    31,    32,     0,     0,     0,
      33,    34,    35,    36,    37,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,     0,    44,    45,
      46,    47,    48,     2,     0,     3,   327,     0,     0,     5,
       6,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,     0,    49,     0,    50,    51,     0,     0,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,    44,    45,    46,    47,    48,     2,   335,     3,
       0,     0,     0,     5,     6,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,     0,    49,     0,    50,
      51,     0,     0,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    37,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,    44,    45,    46,    47,
      48,     2,     0,     3,     0,     0,     0,     5,     6,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
       0,    49,     0,    50,    51,     0,     0,    31,    32,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,     0,
      40,    41,    42,    43,     0,     0,     0,     0,     0,     0,
      44,    45,    46,    47,    48,     0,     0,     2,     0,     3,
       0,     0,     0,     5,     6,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,    49,     3,    50,    51,   226,
       5,     6,     7,   202,     0,     0,     0,     0,    33,     0,
      35,    36,    37,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,    44,    45,    46,     0,
      48,     0,     0,     0,     0,    33,     0,    35,    36,    37,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,     0,     2,
       0,     3,   395,    50,    51,     5,     6,     7,     0,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
       0,   155,     0,     0,     0,     0,   160,     0,     0,     0,
      50,    51,     0,   163,   164,     0,   165,   166,     0,     0,
      33,     0,    35,    36,    37,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,     0,    44,    45,
      46,     0,    48,     0,     0,     0,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     0,   155,     0,
       0,     0,     0,   160,     0,     0,     0,     0,     0,     0,
     163,   164,     0,   165,   166,    50,    51,   129,     0,     0,
       0,     2,     0,     3,     0,     0,     0,     5,     6,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,    35,    36,    37,    38,    39,     0,
     139,    40,   140,    42,   141,   142,   143,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,     0,   155,
     156,   157,   158,   159,   160,   161,   162,     0,     0,     0,
       0,   163,   164,     0,   165,   166
};

static const yytype_int16 yycheck[] =
{
       0,     0,     2,     3,     4,    27,    11,    90,    77,    88,
      18,    11,    44,   175,   186,    15,    16,    17,     8,    19,
       5,    29,    30,    45,    46,   126,     6,   122,    18,   231,
      28,   251,     7,    33,    34,     4,     3,   209,     5,    29,
      30,   110,     1,    61,    82,     5,     7,   337,    48,    87,
     360,    99,     2,     3,    54,    54,    41,    53,     5,    55,
      35,    61,    47,   132,    44,    50,    16,   269,    47,    19,
       5,    50,     7,   168,    41,    93,   366,   387,   173,    54,
      47,    56,    41,    50,    34,   107,   105,    41,    47,   309,
      90,    50,    61,    47,     5,   358,    50,   116,    48,   389,
      35,    62,   392,    44,    47,   105,   128,    50,    49,    32,
      33,   111,   110,    50,    99,   378,   116,    45,     9,    54,
      99,    56,    50,   123,    99,   125,   126,    63,    43,   137,
     225,   226,    99,     5,   132,    63,   136,   311,   312,   301,
      99,    45,   174,     0,   245,    99,    50,   137,    17,   323,
      19,     5,   314,    30,    31,    32,    33,     3,    62,    63,
       3,   111,   334,     7,    99,   244,    88,    89,   237,    83,
      84,    85,    86,   123,    81,   125,    57,    58,    59,   179,
     180,   122,    91,   183,    92,   359,    60,    90,     6,   189,
      10,     8,     3,     9,   277,    62,    62,    62,     3,   199,
      96,     7,   202,   203,   204,    45,    47,    69,     4,     4,
     100,     5,   212,   213,   214,   215,   216,   217,     6,     6,
     220,   221,   222,   223,   224,     7,     6,   168,     4,   229,
     230,     5,   173,   174,     5,    62,   100,     6,     6,   189,
     240,     5,   242,     6,   100,   245,     3,     6,    10,   199,
      34,   251,   202,     9,   204,   255,     5,     9,    16,     6,
     260,   261,   212,     4,     6,     3,     6,    10,     3,    54,
       4,    10,     3,    10,     6,     4,     3,   277,   300,   229,
     378,   197,   339,   394,   225,   226,   344,   399,   124,   353,
     231,   360,   242,   293,    84,    28,   296,   302,   203,   304,
     270,   259,   302,    82,   304,   305,   306,   339,    31,   309,
     390,    28,    28,   369,   383,   320,    28,    28,   387,   322,
     320,   213,   322,   216,   221,   214,   220,   215,   269,   224,
     335,   217,   401,   180,    17,   335,   223,   337,   222,    17,
     362,    17,   342,   293,    -1,    -1,   296,   352,    -1,   371,
     355,    -1,   352,   353,    -1,   355,   306,    -1,   358,   358,
      -1,    -1,    -1,    -1,    -1,    -1,   366,    -1,    -1,   369,
     311,   312,    -1,    -1,    -1,    -1,   398,    -1,   378,   378,
      -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,   389,
     395,    -1,   392,    -1,    -1,   395,    -1,    -1,   339,    -1,
      -1,    -1,    -1,   344,   345,    -1,    -1,    -1,    -1,   350,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   359,    -1,
      -1,    -1,    -1,   364,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   390,
      -1,    -1,    -1,   394,    -1,     3,    -1,     5,   399,     7,
      -1,     9,    -1,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    -1,    40,    41,    42,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,   101,   102,     3,    -1,     5,    -1,     7,
      -1,     9,    10,    11,    12,    13,    -1,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      38,    -1,    40,    41,    42,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,   101,   102,     3,    -1,     5,    -1,     7,
      -1,     9,    -1,    11,    12,    13,    -1,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      38,    -1,    40,    41,    42,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,   101,   102,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,   101,   102,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    -1,    99,    -1,   101,
     102,    -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,     5,    -1,     7,     8,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      -1,    99,    -1,   101,   102,    -1,    -1,    41,    42,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,     5,    -1,     7,     8,    -1,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    -1,    99,    -1,   101,   102,    -1,
      -1,    41,    42,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,     5,
       6,     7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,    99,
      -1,   101,   102,    -1,    -1,    41,    42,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,     5,    -1,     7,     8,    -1,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    -1,    99,    -1,   101,   102,    -1,    -1,    41,
      42,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    -1,    99,    -1,   101,
     102,    -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,     5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      -1,    99,    -1,   101,   102,    -1,    -1,    41,    42,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    99,     7,   101,   102,    37,
      11,    12,    13,     4,    -1,    -1,    -1,    -1,    46,    -1,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,
      68,    -1,    -1,    -1,    -1,    46,    -1,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    -1,     5,
      -1,     7,     6,   101,   102,    11,    12,    13,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
     101,   102,    -1,    94,    95,    -1,    97,    98,    -1,    -1,
      46,    -1,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    -1,    68,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    -1,    97,    98,   101,   102,     1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    48,    49,    50,    51,    52,    -1,
      53,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    94,    95,    -1,    97,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    36,    37,    38,
      40,    41,    42,    46,    47,    48,    49,    50,    51,    52,
      54,    55,    56,    57,    64,    65,    66,    67,    68,    99,
     101,   102,   113,   114,   115,   116,   121,   122,   125,   126,
     134,   135,   136,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   153,   154,   155,   156,
     157,   159,   163,   164,   165,   167,   169,   171,   172,   173,
     174,   176,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   202,   205,   206,
     207,   208,   209,     6,   136,   149,   199,     8,   149,    10,
     122,   165,   166,     5,   135,     5,     5,   136,   149,     1,
     136,   206,   207,   209,   166,   149,    99,   162,   134,    53,
      55,    57,    58,    59,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    82,    83,    84,    85,    86,
      87,    88,    89,    94,    95,    97,    98,   152,   168,   182,
     183,   184,   185,   205,   166,   166,   136,   173,    63,   170,
     136,   201,   149,    43,   127,   128,   174,   134,   134,     5,
     149,   127,   129,   203,     0,   114,   122,    45,    62,     5,
       3,     3,     4,   152,     7,   153,   164,   157,   170,   136,
     177,   178,    61,    93,    81,    91,    92,    90,    82,    87,
     181,   182,   183,   184,   185,    60,    37,   200,   134,     7,
      35,    99,   151,   153,   205,   149,     6,     8,    10,   124,
     129,   149,   143,   149,    42,   148,     3,   134,    62,    62,
      62,     9,     3,   120,   136,   166,    96,   129,   129,   123,
     127,   162,   177,   201,    47,   136,   155,   149,    69,     4,
     100,   121,   149,   149,   156,     8,   155,     4,   149,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   198,   129,
     129,   136,   203,     5,   204,     6,     7,   153,     6,    44,
     161,   136,     6,   149,     6,   170,   148,   120,   100,     4,
     136,     5,     5,   161,   136,   136,   137,     6,   203,   171,
       6,   177,    62,     5,   100,     6,   149,     8,     6,   134,
     162,   135,     3,   135,   136,     6,   149,    10,   120,    34,
     117,   130,   174,   130,   162,     9,   135,   186,   130,     6,
       5,   160,    16,    62,   135,     6,   137,   128,     9,     4,
     136,   179,     6,     3,     5,   132,   174,     1,   158,   174,
     175,     6,   130,   131,   135,   150,   135,     3,   115,   118,
     119,   130,   153,   154,   134,   132,   133,   137,   180,    10,
       3,   179,    10,   134,     4,     6,   119,    10,     6,     4,
     153,   154,   137,   175,   137,   131,   135,   134,   133,     3,
       3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   113,   114,   114,   115,   115,   115,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   123,   124,   125,   126,   127,   127,   128,   129,
     130,   131,   131,   132,   133,   133,   134,   134,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   136,   136,   137,   137,   138,   139,   140,   141,   141,
     141,   142,   143,   143,   144,   144,   144,   144,   144,   144,
     145,   145,   146,   146,   146,   147,   147,   148,   148,   149,
     149,   150,   150,   151,   151,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   153,   153,   153,   154,   154,   154,   155,   155,
     156,   156,   156,   157,   158,   159,   159,   160,   160,   132,
     132,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     165,   165,   166,   166,   167,   168,   168,   168,   168,   168,
     169,   169,   169,   169,   169,   170,   170,   171,   171,   172,
     172,   173,   174,   174,   175,   175,   176,   176,   177,   177,
     178,   178,   179,   179,   179,   180,   180,   180,   181,   181,
     182,   182,   182,   182,   183,   183,   184,   184,   185,   185,
     185,   186,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   198,   198,   199,   199,   199,
     199,   199,   199,   199,   200,   200,   200,   200,   200,   201,
     201,   202,   202,   203,   203,   204,   204,   205,   205,   206,
     207,   207,   207,   207,   207,   208,   208,   208,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209
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
       3,     1,     3,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     3,     4,     5,     2,     3,     2,     1,     1,
       1,     1,     3,     2,     2,     1,     2,     2,     1,     2,
       1,     2,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     2,     0,     1,     5,     1,     1,     1,     1,     1,
       1,     9,     7,     7,     2,     0,     1,     1,     3,     1,
       4,     2,     1,     2,     2,     3,     9,     9,     1,     3,
       1,     2,     1,     2,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       2,     2,     1,     1,     3,     3,     2,     1,     1,     3,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     2,     2
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
#line 126 "ly/gwion.y" /* yacc.c:1652  */
    { arg->ast = (yyvsp[0].ast); }
#line 2178 "src/parser.c" /* yacc.c:1652  */
    break;

  case 3:
#line 127 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "file is empty.\n"); YYERROR; }
#line 2184 "src/parser.c" /* yacc.c:1652  */
    break;

  case 4:
#line 130 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2190 "src/parser.c" /* yacc.c:1652  */
    break;

  case 5:
#line 131 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2196 "src/parser.c" /* yacc.c:1652  */
    break;

  case 6:
#line 135 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2202 "src/parser.c" /* yacc.c:1652  */
    break;

  case 7:
#line 136 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2208 "src/parser.c" /* yacc.c:1652  */
    break;

  case 8:
#line 137 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2214 "src/parser.c" /* yacc.c:1652  */
    break;

  case 9:
#line 142 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].class_body), GET_LOC(&(yyloc)));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-6].id_list), -1);
  }
#line 2223 "src/parser.c" /* yacc.c:1652  */
    break;

  case 10:
#line 147 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2229 "src/parser.c" /* yacc.c:1652  */
    break;

  case 11:
#line 147 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = NULL; }
#line 2235 "src/parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 149 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = NULL; }
#line 2241 "src/parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 152 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[0].section), NULL); }
#line 2247 "src/parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 153 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2253 "src/parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 156 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2259 "src/parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 156 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2265 "src/parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 157 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yylsp[0]))); }
#line 2271 "src/parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 157 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2277 "src/parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 159 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2283 "src/parser.c" /* yacc.c:1652  */
    break;

  case 21:
#line 159 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2289 "src/parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 161 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1); }
#line 2296 "src/parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 163 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1); }
#line 2303 "src/parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 166 "ly/gwion.y" /* yacc.c:1652  */
    {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.stmt) = new_stmt_fptr(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag));
}
#line 2315 "src/parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 173 "ly/gwion.y" /* yacc.c:1652  */
    {
  (yyval.stmt) = new_stmt_type(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.stmt)->d.stmt_type.tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1);
}
#line 2326 "src/parser.c" /* yacc.c:1652  */
    break;

  case 27:
#line 180 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2332 "src/parser.c" /* yacc.c:1652  */
    break;

  case 28:
#line 182 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2340 "src/parser.c" /* yacc.c:1652  */
    break;

  case 29:
#line 186 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2348 "src/parser.c" /* yacc.c:1652  */
    break;

  case 30:
#line 190 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2354 "src/parser.c" /* yacc.c:1652  */
    break;

  case 31:
#line 191 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2360 "src/parser.c" /* yacc.c:1652  */
    break;

  case 32:
#line 191 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2366 "src/parser.c" /* yacc.c:1652  */
    break;

  case 33:
#line 192 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2372 "src/parser.c" /* yacc.c:1652  */
    break;

  case 34:
#line 193 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2378 "src/parser.c" /* yacc.c:1652  */
    break;

  case 35:
#line 193 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2384 "src/parser.c" /* yacc.c:1652  */
    break;

  case 36:
#line 196 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2390 "src/parser.c" /* yacc.c:1652  */
    break;

  case 37:
#line 197 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2396 "src/parser.c" /* yacc.c:1652  */
    break;

  case 51:
#line 219 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2402 "src/parser.c" /* yacc.c:1652  */
    break;

  case 52:
#line 220 "ly/gwion.y" /* yacc.c:1652  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2412 "src/parser.c" /* yacc.c:1652  */
    break;

  case 54:
#line 227 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = NULL; }
#line 2418 "src/parser.c" /* yacc.c:1652  */
    break;

  case 55:
#line 230 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_enum(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2425 "src/parser.c" /* yacc.c:1652  */
    break;

  case 56:
#line 233 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2431 "src/parser.c" /* yacc.c:1652  */
    break;

  case 57:
#line 235 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2437 "src/parser.c" /* yacc.c:1652  */
    break;

  case 58:
#line 238 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2443 "src/parser.c" /* yacc.c:1652  */
    break;

  case 59:
#line 239 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2449 "src/parser.c" /* yacc.c:1652  */
    break;

  case 60:
#line 240 "ly/gwion.y" /* yacc.c:1652  */
    { gw_err(_("unhandled expression type in case statement.\n")); YYERROR; }
#line 2455 "src/parser.c" /* yacc.c:1652  */
    break;

  case 61:
#line 243 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_switch(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2461 "src/parser.c" /* yacc.c:1652  */
    break;

  case 62:
#line 246 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_while; }
#line 2467 "src/parser.c" /* yacc.c:1652  */
    break;

  case 63:
#line 247 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_until; }
#line 2473 "src/parser.c" /* yacc.c:1652  */
    break;

  case 64:
#line 251 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2479 "src/parser.c" /* yacc.c:1652  */
    break;

  case 65:
#line 253 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2485 "src/parser.c" /* yacc.c:1652  */
    break;

  case 66:
#line 255 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2491 "src/parser.c" /* yacc.c:1652  */
    break;

  case 67:
#line 257 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2497 "src/parser.c" /* yacc.c:1652  */
    break;

  case 68:
#line 259 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2503 "src/parser.c" /* yacc.c:1652  */
    break;

  case 69:
#line 261 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2509 "src/parser.c" /* yacc.c:1652  */
    break;

  case 70:
#line 266 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2515 "src/parser.c" /* yacc.c:1652  */
    break;

  case 71:
#line 268 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2521 "src/parser.c" /* yacc.c:1652  */
    break;

  case 72:
#line 272 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_return; }
#line 2527 "src/parser.c" /* yacc.c:1652  */
    break;

  case 73:
#line 273 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_break; }
#line 2533 "src/parser.c" /* yacc.c:1652  */
    break;

  case 74:
#line 274 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_continue; }
#line 2539 "src/parser.c" /* yacc.c:1652  */
    break;

  case 75:
#line 277 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2545 "src/parser.c" /* yacc.c:1652  */
    break;

  case 76:
#line 278 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2551 "src/parser.c" /* yacc.c:1652  */
    break;

  case 77:
#line 282 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2557 "src/parser.c" /* yacc.c:1652  */
    break;

  case 78:
#line 283 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2563 "src/parser.c" /* yacc.c:1652  */
    break;

  case 80:
#line 286 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2569 "src/parser.c" /* yacc.c:1652  */
    break;

  case 82:
#line 288 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2575 "src/parser.c" /* yacc.c:1652  */
    break;

  case 83:
#line 290 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2581 "src/parser.c" /* yacc.c:1652  */
    break;

  case 84:
#line 290 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = NULL; }
#line 2587 "src/parser.c" /* yacc.c:1652  */
    break;

  case 102:
#line 302 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2593 "src/parser.c" /* yacc.c:1652  */
    break;

  case 103:
#line 303 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2599 "src/parser.c" /* yacc.c:1652  */
    break;

  case 104:
#line 304 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2605 "src/parser.c" /* yacc.c:1652  */
    break;

  case 105:
#line 308 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2611 "src/parser.c" /* yacc.c:1652  */
    break;

  case 106:
#line 309 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2617 "src/parser.c" /* yacc.c:1652  */
    break;

  case 107:
#line 310 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2623 "src/parser.c" /* yacc.c:1652  */
    break;

  case 112:
#line 315 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), GET_LOC(&(yyloc)))), (yyvsp[0].var_decl_list)); }
#line 2630 "src/parser.c" /* yacc.c:1652  */
    break;

  case 113:
#line 317 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2636 "src/parser.c" /* yacc.c:1652  */
    break;

  case 114:
#line 318 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2642 "src/parser.c" /* yacc.c:1652  */
    break;

  case 116:
#line 319 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2648 "src/parser.c" /* yacc.c:1652  */
    break;

  case 117:
#line 321 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2654 "src/parser.c" /* yacc.c:1652  */
    break;

  case 118:
#line 321 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2660 "src/parser.c" /* yacc.c:1652  */
    break;

  case 119:
#line 322 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2666 "src/parser.c" /* yacc.c:1652  */
    break;

  case 120:
#line 322 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2672 "src/parser.c" /* yacc.c:1652  */
    break;

  case 121:
#line 323 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2678 "src/parser.c" /* yacc.c:1652  */
    break;

  case 122:
#line 323 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2684 "src/parser.c" /* yacc.c:1652  */
    break;

  case 123:
#line 325 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2690 "src/parser.c" /* yacc.c:1652  */
    break;

  case 124:
#line 325 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = NULL; }
#line 2696 "src/parser.c" /* yacc.c:1652  */
    break;

  case 125:
#line 327 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_static; }
#line 2702 "src/parser.c" /* yacc.c:1652  */
    break;

  case 126:
#line 328 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_global; }
#line 2708 "src/parser.c" /* yacc.c:1652  */
    break;

  case 127:
#line 331 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_private; }
#line 2714 "src/parser.c" /* yacc.c:1652  */
    break;

  case 128:
#line 332 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_protect; }
#line 2720 "src/parser.c" /* yacc.c:1652  */
    break;

  case 129:
#line 335 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2726 "src/parser.c" /* yacc.c:1652  */
    break;

  case 130:
#line 336 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2732 "src/parser.c" /* yacc.c:1652  */
    break;

  case 131:
#line 337 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2738 "src/parser.c" /* yacc.c:1652  */
    break;

  case 132:
#line 340 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2744 "src/parser.c" /* yacc.c:1652  */
    break;

  case 133:
#line 340 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2750 "src/parser.c" /* yacc.c:1652  */
    break;

  case 134:
#line 344 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 2756 "src/parser.c" /* yacc.c:1652  */
    break;

  case 141:
#line 350 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), OP_SYM((yyvsp[-7].sym)), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2762 "src/parser.c" /* yacc.c:1652  */
    break;

  case 142:
#line 352 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), OP_SYM((yyvsp[-5].sym)), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 2768 "src/parser.c" /* yacc.c:1652  */
    break;

  case 143:
#line 354 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), OP_SYM((yyvsp[-6].sym)), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 2774 "src/parser.c" /* yacc.c:1652  */
    break;

  case 144:
#line 356 "ly/gwion.y" /* yacc.c:1652  */
    {
ID_List l = new_id_list(mpool(arg), insert_symbol("void"), GET_LOC(&(yyloc)));
(yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), new_type_decl(mpool(arg), l),
       insert_symbol("dtor"), NULL), (yyvsp[0].stmt), ae_flag_dtor, GET_LOC(&(yyloc))); }
#line 2783 "src/parser.c" /* yacc.c:1652  */
    break;

  case 145:
#line 361 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = 0; }
#line 2789 "src/parser.c" /* yacc.c:1652  */
    break;

  case 146:
#line 361 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_flag_ref; }
#line 2795 "src/parser.c" /* yacc.c:1652  */
    break;

  case 147:
#line 364 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].id_list)); }
#line 2801 "src/parser.c" /* yacc.c:1652  */
    break;

  case 148:
#line 365 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[-1].exp)); }
#line 2807 "src/parser.c" /* yacc.c:1652  */
    break;

  case 149:
#line 369 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2813 "src/parser.c" /* yacc.c:1652  */
    break;

  case 150:
#line 370 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 2819 "src/parser.c" /* yacc.c:1652  */
    break;

  case 151:
#line 374 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 2825 "src/parser.c" /* yacc.c:1652  */
    break;

  case 152:
#line 377 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2831 "src/parser.c" /* yacc.c:1652  */
    break;

  case 153:
#line 378 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 2837 "src/parser.c" /* yacc.c:1652  */
    break;

  case 154:
#line 380 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2843 "src/parser.c" /* yacc.c:1652  */
    break;

  case 155:
#line 381 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2849 "src/parser.c" /* yacc.c:1652  */
    break;

  case 156:
#line 384 "ly/gwion.y" /* yacc.c:1652  */
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
#line 2871 "src/parser.c" /* yacc.c:1652  */
    break;

  case 157:
#line 401 "ly/gwion.y" /* yacc.c:1652  */
    {
    gw_err(_("Unions should only contain declarations.\n"));
    YYERROR;
    }
#line 2880 "src/parser.c" /* yacc.c:1652  */
    break;

  case 158:
#line 408 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2886 "src/parser.c" /* yacc.c:1652  */
    break;

  case 159:
#line 409 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2892 "src/parser.c" /* yacc.c:1652  */
    break;

  case 160:
#line 412 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2898 "src/parser.c" /* yacc.c:1652  */
    break;

  case 161:
#line 413 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2904 "src/parser.c" /* yacc.c:1652  */
    break;

  case 162:
#line 415 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2910 "src/parser.c" /* yacc.c:1652  */
    break;

  case 163:
#line 416 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2916 "src/parser.c" /* yacc.c:1652  */
    break;

  case 164:
#line 417 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2922 "src/parser.c" /* yacc.c:1652  */
    break;

  case 165:
#line 418 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2928 "src/parser.c" /* yacc.c:1652  */
    break;

  case 166:
#line 419 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2934 "src/parser.c" /* yacc.c:1652  */
    break;

  case 167:
#line 420 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2940 "src/parser.c" /* yacc.c:1652  */
    break;

  case 182:
#line 428 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2946 "src/parser.c" /* yacc.c:1652  */
    break;

  case 184:
#line 430 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2952 "src/parser.c" /* yacc.c:1652  */
    break;

  case 186:
#line 431 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2958 "src/parser.c" /* yacc.c:1652  */
    break;

  case 188:
#line 432 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2964 "src/parser.c" /* yacc.c:1652  */
    break;

  case 190:
#line 433 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2970 "src/parser.c" /* yacc.c:1652  */
    break;

  case 192:
#line 434 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2976 "src/parser.c" /* yacc.c:1652  */
    break;

  case 194:
#line 435 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2982 "src/parser.c" /* yacc.c:1652  */
    break;

  case 196:
#line 436 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2988 "src/parser.c" /* yacc.c:1652  */
    break;

  case 198:
#line 437 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2994 "src/parser.c" /* yacc.c:1652  */
    break;

  case 200:
#line 438 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3000 "src/parser.c" /* yacc.c:1652  */
    break;

  case 202:
#line 439 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3006 "src/parser.c" /* yacc.c:1652  */
    break;

  case 204:
#line 441 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3012 "src/parser.c" /* yacc.c:1652  */
    break;

  case 206:
#line 444 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3018 "src/parser.c" /* yacc.c:1652  */
    break;

  case 215:
#line 450 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3024 "src/parser.c" /* yacc.c:1652  */
    break;

  case 216:
#line 451 "ly/gwion.y" /* yacc.c:1652  */
    {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3030 "src/parser.c" /* yacc.c:1652  */
    break;

  case 217:
#line 452 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3036 "src/parser.c" /* yacc.c:1652  */
    break;

  case 218:
#line 453 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3042 "src/parser.c" /* yacc.c:1652  */
    break;

  case 219:
#line 456 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3048 "src/parser.c" /* yacc.c:1652  */
    break;

  case 220:
#line 457 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3054 "src/parser.c" /* yacc.c:1652  */
    break;

  case 221:
#line 458 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3060 "src/parser.c" /* yacc.c:1652  */
    break;

  case 222:
#line 458 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 3066 "src/parser.c" /* yacc.c:1652  */
    break;

  case 223:
#line 461 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3072 "src/parser.c" /* yacc.c:1652  */
    break;

  case 224:
#line 462 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3078 "src/parser.c" /* yacc.c:1652  */
    break;

  case 225:
#line 465 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3084 "src/parser.c" /* yacc.c:1652  */
    break;

  case 226:
#line 465 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = NULL; }
#line 3090 "src/parser.c" /* yacc.c:1652  */
    break;

  case 229:
#line 469 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3096 "src/parser.c" /* yacc.c:1652  */
    break;

  case 231:
#line 471 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3102 "src/parser.c" /* yacc.c:1652  */
    break;

  case 232:
#line 473 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3109 "src/parser.c" /* yacc.c:1652  */
    break;

  case 233:
#line 476 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3115 "src/parser.c" /* yacc.c:1652  */
    break;

  case 234:
#line 476 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3121 "src/parser.c" /* yacc.c:1652  */
    break;

  case 235:
#line 479 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_complex; }
#line 3127 "src/parser.c" /* yacc.c:1652  */
    break;

  case 236:
#line 480 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3133 "src/parser.c" /* yacc.c:1652  */
    break;

  case 237:
#line 481 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3139 "src/parser.c" /* yacc.c:1652  */
    break;

  case 238:
#line 484 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3145 "src/parser.c" /* yacc.c:1652  */
    break;

  case 239:
#line 485 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3151 "src/parser.c" /* yacc.c:1652  */
    break;

  case 240:
#line 486 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3157 "src/parser.c" /* yacc.c:1652  */
    break;

  case 241:
#line 487 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3163 "src/parser.c" /* yacc.c:1652  */
    break;

  case 242:
#line 488 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3169 "src/parser.c" /* yacc.c:1652  */
    break;

  case 243:
#line 489 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3175 "src/parser.c" /* yacc.c:1652  */
    break;

  case 244:
#line 490 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_vec(    mpool(arg), (yyvsp[-2].ival) ,(yyvsp[-1].exp)); }
#line 3181 "src/parser.c" /* yacc.c:1652  */
    break;

  case 245:
#line 491 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3187 "src/parser.c" /* yacc.c:1652  */
    break;

  case 246:
#line 492 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3193 "src/parser.c" /* yacc.c:1652  */
    break;

  case 247:
#line 493 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3199 "src/parser.c" /* yacc.c:1652  */
    break;

  case 248:
#line 494 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3205 "src/parser.c" /* yacc.c:1652  */
    break;


#line 3209 "src/parser.c" /* yacc.c:1652  */
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
#line 496 "ly/gwion.y" /* yacc.c:1918  */

