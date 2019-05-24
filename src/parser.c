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
#define OP_SYM(a) insert_symbol(op2str(a))

ANN void gwion_error(YYLTYPE*, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);
m_str op2str(const Operator op);

#line 98 "src/parser.c" /* yacc.c:337  */
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
    FORK = 308,
    CLASS = 309,
    STATIC = 310,
    GLOBAL = 311,
    PRIVATE = 312,
    PROTECT = 313,
    EXTENDS = 314,
    DOT = 315,
    COLONCOLON = 316,
    AND = 317,
    EQ = 318,
    GE = 319,
    GT = 320,
    LE = 321,
    LT = 322,
    MINUS = 323,
    PLUS = 324,
    NEQ = 325,
    SHIFT_LEFT = 326,
    SHIFT_RIGHT = 327,
    S_AND = 328,
    S_OR = 329,
    S_XOR = 330,
    OR = 331,
    AST_DTOR = 332,
    OPERATOR = 333,
    TYPEDEF = 334,
    RSL = 335,
    RSR = 336,
    RSAND = 337,
    RSOR = 338,
    RSXOR = 339,
    LTMPL = 340,
    RTMPL = 341,
    NOELSE = 342,
    UNION = 343,
    ATPAREN = 344,
    TYPEOF = 345,
    CONSTT = 346,
    AUTO = 347,
    PASTE = 348,
    ELLIPSE = 349,
    RARROW = 350,
    BACKSLASH = 351,
    NUM = 352,
    FLOATT = 353,
    ID = 354,
    STRING_LIT = 355,
    CHAR_LIT = 356,
    PP_COMMENT = 357,
    PP_INCLUDE = 358,
    PP_DEFINE = 359,
    PP_UNDEF = 360,
    PP_IFDEF = 361,
    PP_IFNDEF = 362,
    PP_ELSE = 363,
    PP_ENDIF = 364,
    PP_NL = 365
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
#define FORK 308
#define CLASS 309
#define STATIC 310
#define GLOBAL 311
#define PRIVATE 312
#define PROTECT 313
#define EXTENDS 314
#define DOT 315
#define COLONCOLON 316
#define AND 317
#define EQ 318
#define GE 319
#define GT 320
#define LE 321
#define LT 322
#define MINUS 323
#define PLUS 324
#define NEQ 325
#define SHIFT_LEFT 326
#define SHIFT_RIGHT 327
#define S_AND 328
#define S_OR 329
#define S_XOR 330
#define OR 331
#define AST_DTOR 332
#define OPERATOR 333
#define TYPEDEF 334
#define RSL 335
#define RSR 336
#define RSAND 337
#define RSOR 338
#define RSXOR 339
#define LTMPL 340
#define RTMPL 341
#define NOELSE 342
#define UNION 343
#define ATPAREN 344
#define TYPEOF 345
#define CONSTT 346
#define AUTO 347
#define PASTE 348
#define ELLIPSE 349
#define RARROW 350
#define BACKSLASH 351
#define NUM 352
#define FLOATT 353
#define ID 354
#define STRING_LIT 355
#define CHAR_LIT 356
#define PP_COMMENT 357
#define PP_INCLUDE 358
#define PP_DEFINE 359
#define PP_UNDEF 360
#define PP_IFDEF 361
#define PP_IFNDEF 362
#define PP_ELSE 363
#define PP_ENDIF 364
#define PP_NL 365

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "ly/gwion.y" /* yacc.c:352  */

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

#line 389 "src/parser.c" /* yacc.c:352  */
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
#define YYFINAL  195
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1705

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  248
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  429

#define YYUNDEFTOK  2
#define YYMAXUTOK   365

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
     105,   106,   107,   108,   109,   110
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   116,   116,   117,   120,   121,   125,   126,   127,   131,
     137,   137,   139,   139,   142,   143,   146,   146,   147,   147,
     148,   148,   150,   150,   152,   154,   157,   164,   171,   171,
     173,   177,   181,   182,   182,   183,   184,   184,   187,   188,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   210,   211,   218,   218,   221,   224,   226,
     229,   230,   231,   234,   237,   239,   241,   243,   245,   247,
     249,   251,   256,   258,   263,   264,   265,   266,   270,   271,
     274,   274,   276,   276,   278,   278,   280,   280,   280,   281,
     281,   282,   282,   283,   283,   284,   284,   285,   285,   285,
     286,   286,   286,   290,   291,   292,   296,   297,   298,   301,
     301,   302,   302,   303,   305,   306,   307,   307,   309,   309,
     310,   310,   311,   311,   313,   313,   315,   316,   319,   320,
     323,   324,   325,   328,   328,   331,   339,   339,   339,   339,
     339,   341,   342,   344,   346,   348,   354,   354,   357,   358,
     360,   361,   365,   366,   368,   369,   372,   389,   396,   397,
     400,   401,   403,   404,   405,   406,   407,   408,   410,   410,
     411,   411,   411,   411,   412,   412,   413,   413,   414,   414,
     414,   415,   415,   418,   418,   419,   419,   420,   420,   421,
     421,   422,   422,   423,   423,   424,   424,   425,   425,   426,
     426,   427,   427,   429,   429,   431,   431,   434,   434,   435,
     436,   436,   436,   436,   439,   439,   440,   441,   442,   445,
     446,   447,   447,   450,   451,   454,   454,   456,   456,   458,
     459,   459,   461,   464,   465,   468,   469,   470,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\";\"", "\"=>\"", "\",\"", "\"/\"",
  "\"*\"", "\"%\"", "\"<<<\"", "\">>>\"", "\"(\"", "\")\"", "\"[\"",
  "\"]\"", "\"{\"", "\"}\"", "\"+=>\"", "\"-=>\"", "\"*=>\"", "\"/=>\"",
  "\"%=>\"", "\"@=>\"", "\"@=<\"", "\"]=>\"", "\"[=<\"", "\"%(\"",
  "\"#(\"", "\"@\"", "\"fun\"", "\"$\"", "\"~\"", "\"?\"", "\":\"",
  "\"!\"", "\"if\"", "\"else\"", "\"while\"", "\"do\"", "\"until\"",
  "\"repeat\"", "\"for\"", "\"goto\"", "\"switch\"", "\"case\"",
  "\"enum\"", "\"return\"", "\"break\"", "\"continue\"", "\"++\"",
  "\"--\"", "\"new\"", "\"spork\"", "\"fork\"", "\"class\"", "\"static\"",
  "\"global\"", "\"private\"", "\"protect\"", "\"extends\"", "\".\"",
  "\"::\"", "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"", "\"<\"",
  "\"-\"", "\"+\"", "\"!=\"", "\"<<\"", "\">>\"", "\"&\"", "\"|\"",
  "\"^\"", "\"||\"", "\"dtor\"", "\"operator\"", "\"typedef\"", "\"<<=>\"",
  "\">>=>\"", "\"&=>\"", "\"|=>\"", "\"^=>\"", "\"<~\"", "\"~>\"",
  "NOELSE", "\"union\"", "\"@(\"", "\"typeof\"", "\"const\"", "\"auto\"",
  "\"##\"", "\"...\"", "\"->\"", "\"\\\\\"", "\"<integer>\"", "FLOATT",
  "\"<identifier>\"", "\"<litteral string>\"", "\"<litteral char>\"",
  "\"<comment>\"", "\"#include\"", "\"#define>\"", "\"#undef\"",
  "\"#ifdef\"", "\"#ifndef\"", "\"#else\"", "\"#if\"", "\"\\n\"",
  "$accept", "prg", "ast", "section", "class_def", "class_ext",
  "class_body", "class_body2", "id_list", "id_dot", "dot_decl",
  "stmt_list", "fptr_base", "fdef_base", "func_type", "stmt_type",
  "type_decl_array", "type_decl_exp", "type_decl_empty", "arg", "arg_list",
  "fptr_arg", "fptr_list", "code_stmt", "stmt", "id", "opt_id",
  "enum_stmt", "label_stmt", "goto_stmt", "case_stmt", "switch_stmt",
  "loop_stmt", "selection_stmt", "jump_stmt", "exp_stmt", "exp",
  "binary_exp", "call_template", "op", "array_exp", "array_empty", "array",
  "decl_exp2", "decl_exp", "union_exp", "decl_exp3", "func_args",
  "arg_type", "decl_template", "storage_flag", "access_flag", "flag",
  "opt_flag", "func_def_base", "op_op", "func_def", "atsym", "type_decl0",
  "type_decl", "decl_list", "union_stmt", "var_decl_list", "var_decl",
  "arg_decl", "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op",
  "mul_op", "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp",
  "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp",
  "mul_exp", "typeof_exp", "cast_exp", "unary_op", "unary_exp",
  "lambda_list", "lambda_arg", "type_list", "call_paren", "post_op",
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365
};
# endif

#define YYPACT_NINF -341

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-341)))

#define YYTABLE_NINF -86

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     543,  -341,  -341,  1409,  1091,  1144,   642,  -341,  -341,    96,
       9,  -341,    39,    44,   741,    56,    61,    68,    12,  1409,
     108,    96,   840,    86,    99,  -341,  -341,    64,   110,   110,
      59,  -341,  -341,  -341,  -341,  -341,   110,  1621,    96,    64,
      96,  -341,   137,    16,   128,    12,  -341,  -341,    65,  -341,
    -341,   160,  -341,   543,  -341,   128,  -341,  -341,  -341,  -341,
     741,    33,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,   158,   444,  -341,   149,  -341,  -341,  -341,  -341,   -22,
    -341,    64,  -341,  -341,  -341,    12,  -341,  -341,    -3,   102,
      91,    97,    98,     7,   103,    27,    78,    57,  -341,   143,
    1462,  -341,   110,  -341,  -341,    81,  1409,  -341,    43,   164,
    1568,  -341,   163,  -341,   162,  -341,   165,  -341,    64,  1409,
    1409,  1409,    51,  1409,  1409,   939,   175,   110,   146,  -341,
     147,     8,   152,   171,  -341,   185,  -341,  -341,     9,  -341,
    -341,    94,   177,  -341,  -341,    12,    96,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,    64,  -341,  -341,
    -341,  -341,    64,    64,  -341,   188,   112,    59,  1409,  -341,
    -341,    12,    12,  -341,    12,  -341,  -341,  -341,  -341,  -341,
      12,  -341,  1409,  1409,  1197,  -341,  -341,  -341,   177,  -341,
     191,  1409,  1515,  1515,  1515,  1515,  1515,  -341,  -341,  1515,
    1515,  1515,  1515,  1568,    64,  -341,    64,  -341,  -341,  1409,
      12,    64,   199,  -341,  -341,   187,  -341,  -341,   189,  -341,
      14,    12,   186,   206,   213,  1409,  1409,   215,   216,   128,
    1038,  -341,  -341,  -341,  -341,  -341,    12,  -341,  -341,   148,
     224,    12,   221,   222,    14,    12,    64,    15,    12,   223,
    -341,  -341,  -341,  -341,   176,  -341,  -341,  -341,  -341,    12,
     204,   102,    91,    97,    98,     7,   103,    27,    78,    57,
     143,  -341,   227,  -341,   153,  1250,  -341,  -341,  1303,  -341,
    -341,   230,   110,    59,   212,   741,   741,   241,   242,   741,
     741,    12,  1356,   231,  -341,    12,   190,    64,    64,  -341,
      59,  -341,   217,   128,  -341,   235,  -341,    12,  -341,  1515,
      64,  -341,  -341,   234,  -341,  -341,  -341,   240,   128,   219,
    -341,  -341,  -341,  -341,  -341,    18,   741,   245,    12,  -341,
      64,   237,   248,    12,   246,    38,  1409,  -341,    21,  -341,
    -341,   250,  -341,    64,  -341,  -341,   741,  1409,  -341,   741,
     260,  -341,   543,    64,   177,  -341,   110,  -341,     6,  -341,
      12,   233,   253,   267,    12,   255,   110,   268,  -341,  -341,
     895,  -341,  -341,   543,   256,  -341,   262,  -341,   149,  -341,
     271,  -341,   177,  -341,   249,    12,    64,  -341,    12,  -341,
      64,   741,  -341,  -341,   110,     6,  -341,   149,   128,   274,
    -341,   278,  -341,  -341,  -341,  -341,  -341,  -341,  -341
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    79,   208,     0,     0,     0,     0,   236,   235,   133,
     213,   210,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,     0,   227,   228,     0,   211,   212,
     125,   126,   127,   128,   129,   207,     0,     0,   133,     0,
     133,   237,     0,     0,   146,   222,   239,   240,    53,   241,
     242,     0,     2,     4,     8,   146,     6,    50,    51,    43,
      22,   238,    48,    44,    45,    47,    46,    41,    42,    49,
      40,     0,    80,   109,   110,   243,    82,   116,   112,   131,
     130,     0,   141,     7,   152,     0,    52,   111,   181,   183,
     185,   187,   189,   191,   193,   195,   197,   199,   201,   203,
       0,   205,     0,   209,   234,   214,     0,   230,   238,     0,
       0,   248,     0,   106,     0,    38,     0,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   238,
     234,    85,   230,     0,    74,     0,    76,    77,     0,    30,
     216,    20,    28,   217,   218,     0,   133,   145,    86,   179,
     178,   180,    90,    91,    92,    93,    94,    89,    87,    95,
      96,   102,    88,   173,   171,   172,   170,   177,   176,   174,
     175,    97,    98,    99,   100,   101,   136,     0,   138,   137,
     140,   139,     0,     0,    31,   223,     0,   125,     0,   153,
     147,     0,   219,   221,     0,     1,     5,   148,    23,    58,
       0,    78,     0,     0,     0,   108,   132,   117,   160,   114,
     158,     0,     0,     0,     0,     0,     0,   168,   169,     0,
       0,     0,     0,     0,     0,   213,     0,   215,   247,     0,
       0,     0,     0,   231,   233,     0,   245,   246,   103,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
       0,    59,    63,    62,    61,    60,     0,    75,    29,     0,
      16,     0,     0,     0,     0,     0,     0,     0,    56,     0,
     113,   220,    54,    21,    18,    81,    83,   107,   161,     0,
       0,   184,   186,   188,   190,   192,   194,   196,   198,   200,
     202,   206,     0,   229,     0,     0,   232,   244,     0,   104,
     123,     0,     0,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,    11,     0,     0,    26,
     125,   224,     0,   146,    55,     0,   204,     0,   159,     0,
       0,    84,   226,     0,   105,   122,   135,     0,   146,    72,
      64,    65,    70,    69,    71,   160,     0,     0,    56,    17,
       0,     0,     0,     0,     0,     0,     0,   149,     0,    19,
     182,     0,   225,   119,    25,   150,     0,     0,    66,     0,
       0,    10,    13,     0,   162,    32,     0,    27,   121,    24,
      56,     0,     0,     0,     0,     0,     0,    33,   118,    73,
       0,    67,    57,    14,     0,    12,     0,   164,   163,   143,
      36,   120,   165,    35,     0,    56,   154,   115,    56,   144,
       0,     0,    15,     9,     0,     0,   167,   166,   146,     0,
     155,     0,    34,    68,   142,    37,   151,   157,   156
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -341,  -341,   229,  -339,  -341,  -341,  -341,  -109,  -233,   -44,
      19,    26,  -341,  -341,  -341,  -341,   -26,   -65,  -102,  -234,
    -123,   -67,  -126,   -24,   -12,     0,  -221,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -110,   318,   -75,  -341,   254,
       2,  -340,  -134,    92,   218,  -341,  -341,  -341,    32,  -177,
    -341,   225,     4,   -10,  -341,  -341,  -341,   -48,   257,    77,
    -104,  -341,   -76,  -341,   -77,  -341,  -341,   275,   276,   277,
     279,    -9,  -341,   107,   113,   111,   116,   117,   109,   115,
     118,   114,  -341,   119,     3,   -62,   140,  -341,  -207,  -341,
     -18,   321,   324,  -341,   325
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    51,    52,    53,    54,   351,   394,   395,   259,   273,
      55,    56,   264,   240,    57,    58,   184,   140,   185,   387,
     388,   400,   401,    59,    60,   108,   325,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,   232,   203,
      73,    74,    75,    76,    77,   383,    78,   364,   302,   146,
      79,    80,    81,   118,    82,   177,    83,   191,    84,    85,
     385,    86,   270,   210,   375,   403,   219,   220,   221,   222,
     223,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   110,   101,   193,   102,   186,   296,
     103,   104,   105,   106,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,   139,   122,   100,   143,   144,    61,   197,   258,   209,
     268,   133,   147,   117,    61,   250,   241,   378,   126,   182,
     129,   229,   382,   313,   294,   117,   300,   141,   183,   211,
     187,     5,   116,   393,   398,    33,    34,   138,   227,   141,
     119,   377,   117,   141,   117,   192,   322,   138,   227,   378,
     120,   367,   138,    61,   393,   121,   100,    25,    26,   321,
      61,   -20,   417,   149,   150,   151,   199,   123,   230,   138,
     217,   -20,   124,   212,   278,   262,   205,   218,   228,   125,
     263,   141,   349,   352,   354,   208,   198,   234,   245,   136,
     246,    39,   -85,   231,   229,   138,   361,    43,   169,   170,
     129,    39,   137,   252,   142,    48,    39,   233,   301,   128,
     129,    48,    43,   234,    48,    48,   142,     3,   141,     4,
      48,     5,   291,    39,   292,     6,   337,   370,   200,    43,
      25,    26,   -20,   233,     7,     8,   261,    48,   200,   396,
     312,   230,   -20,   355,   145,   260,   167,   168,   188,    39,
     117,    31,    32,    33,    34,    43,   190,   265,   194,   402,
     195,   201,   204,    48,   213,   214,   231,   163,   164,   165,
     166,   216,   215,   224,   236,   237,   238,   141,   251,   253,
     254,   239,   141,   141,   419,   255,   256,   421,   257,   200,
       5,   208,   192,   266,   272,   142,   279,    41,   267,   297,
     274,   311,   298,   328,    45,    46,    47,    48,    49,    50,
     295,   278,   129,   129,   129,   129,   129,   304,   305,   129,
     129,   129,   129,   129,   141,   306,   141,   309,   310,   315,
     293,   141,   317,   318,   314,   326,   327,   329,   330,   331,
     299,   303,   335,   338,   341,   342,   362,   348,   356,   350,
     358,   363,   372,   373,   142,   366,   260,   369,   376,   142,
     142,   316,   386,   392,   404,   320,   141,   141,   324,   405,
     406,   408,   413,   410,   414,   357,   415,   427,   336,   208,
     418,   428,   196,   359,   412,   371,   323,   422,   379,   425,
     365,   176,   390,   339,   340,   276,   319,   343,   344,   207,
     189,   142,   420,   142,   206,    61,    61,   407,   142,    61,
      61,   345,   178,   179,   180,   260,   181,   141,   141,   281,
     360,   109,   112,   114,   139,   283,   282,   274,   286,   129,
     141,   284,   271,   285,   368,   287,   289,   127,     0,   288,
     135,   130,   290,   142,   131,   132,    61,     0,   324,     0,
     141,     0,   399,   374,   389,   141,     0,   391,   141,     0,
       0,     0,   409,   141,     0,     0,    61,     0,     0,    61,
     426,     0,    61,   141,     0,   100,   397,     0,   141,     0,
     324,     0,     0,     0,   374,     0,     0,     0,     0,     0,
     424,     0,     0,    61,   353,   353,   100,     0,     0,   423,
     205,     0,     0,     0,   416,   324,   141,   353,   324,     0,
     141,    61,     0,     0,     0,   141,     0,     0,     0,   205,
       0,     0,     0,     0,   235,     0,     0,   142,     0,     0,
       0,     0,   380,     0,     0,   384,     0,   242,   243,   244,
     353,   247,   248,     0,     0,     0,     0,     0,   148,   202,
     353,     0,     0,     0,     0,   380,     0,     0,     0,     0,
       0,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   384,     0,     0,     0,   353,     0,     0,
       0,     0,   380,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,   269,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     275,     0,   114,     0,   171,   172,   173,   174,   175,   280,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,   114,     0,     0,
       2,     0,     3,     0,     4,     0,     5,     0,     6,     0,
       0,     0,     0,   307,   308,     0,     0,     0,     0,     7,
       8,     0,     9,     0,    10,     0,     0,    11,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,     0,   333,     0,     0,   114,     0,     0,     0,
      36,    37,    38,     0,     0,     0,     0,     0,    39,     0,
     347,    40,    41,    42,    43,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     1,     0,     0,     0,     2,
       0,     3,     0,     4,     0,     5,     0,     6,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,    10,   381,     0,    11,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,    39,     0,     0,
      40,    41,    42,    43,    44,     0,     0,     0,    45,    46,
      47,    48,    49,    50,     1,     0,     0,     0,     2,     0,
       3,     0,     4,     0,     5,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,    10,     0,     0,    11,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    31,    32,    33,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,    39,     0,     0,    40,
      41,    42,    43,    44,     0,     0,     0,    45,    46,    47,
      48,    49,    50,   134,     0,     0,     0,     2,     0,     3,
       0,     4,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,    10,     0,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,    27,    28,    29,     0,    31,    32,    33,    34,   148,
       0,     0,     0,     0,     0,     0,     0,   411,    35,     0,
       0,     0,   152,   153,   154,   155,   156,   157,   158,   159,
     160,     0,     0,     0,     0,    39,     0,     0,     0,    41,
      42,    43,    44,     0,     0,     0,    45,    46,    47,    48,
      49,    50,     1,     0,     0,     0,     2,     0,     3,     0,
       4,     0,     5,     0,     0,     0,   161,     0,   162,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
      10,     0,     0,    11,     0,   171,   172,   173,   174,   175,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
      27,    28,    29,     0,    31,    32,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,    41,    42,
      43,   249,     0,     0,     0,    45,    46,    47,    48,    49,
      50,     1,     0,     0,     0,     2,     0,     3,     0,     4,
       0,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,    10,
       0,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,    27,
      28,    29,     0,    31,    32,    33,    34,     0,     2,     0,
       3,     0,     4,   111,     5,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,    10,    39,     0,    11,     0,    41,    42,    43,
      44,     0,     0,     0,    45,    46,    47,    48,    49,    50,
      25,    26,    27,    28,    29,     0,    31,    32,    33,    34,
       0,     2,     0,     3,     0,     4,     0,     5,   113,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,    10,    39,     0,    11,     0,
      41,    42,    43,    44,     0,     0,     0,    45,    46,    47,
      48,    49,    50,    25,    26,    27,    28,    29,     0,    31,
      32,    33,    34,     0,     2,     0,     3,     0,     4,     0,
       5,   277,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     0,     0,    10,    39,
       0,    11,     0,    41,    42,    43,    44,     0,     0,     0,
      45,    46,    47,    48,    49,    50,    25,    26,    27,    28,
      29,     0,    31,    32,    33,    34,     0,     2,     0,     3,
       0,     4,   332,     5,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,    10,    39,     0,    11,     0,    41,    42,    43,    44,
       0,     0,     0,    45,    46,    47,    48,    49,    50,    25,
      26,    27,    28,    29,     0,    31,    32,    33,    34,     0,
       2,     0,     3,     0,     4,     0,     5,   334,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,    10,    39,     0,    11,     0,    41,
      42,    43,    44,     0,     0,     0,    45,    46,    47,    48,
      49,    50,    25,    26,    27,    28,    29,     0,    31,    32,
      33,    34,     0,     2,     0,     3,     0,     4,   346,     5,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,    10,    39,     0,
      11,     0,    41,    42,    43,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,    25,    26,    27,    28,    29,
       0,    31,    32,    33,    34,     0,     2,     0,     3,     0,
       4,     0,     5,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
      10,    39,     0,    11,     0,    41,    42,    43,    44,     0,
       0,     0,    45,    46,    47,    48,    49,    50,    25,    26,
      27,    28,    29,     0,    31,    32,    33,    34,     0,     2,
       0,     3,     0,     4,     0,     5,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,   225,    39,     0,    11,     0,    41,    42,
      43,    44,     0,     0,     0,    45,    46,    47,    48,    49,
      50,    25,    26,    27,    28,    29,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     0,     4,     0,     5,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     226,     7,     8,     0,     0,     0,   225,     0,     0,    11,
       0,    41,     0,     0,     0,     0,     0,     0,    45,    46,
      47,    48,    49,    50,    25,    26,    27,    28,    29,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     4,
       0,     5,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,   225,
       0,     0,    11,     0,    41,    42,     0,     0,     0,     0,
       0,    45,    46,    47,    48,    49,    50,    25,    26,    27,
      28,    29,     0,     0,     0,   148,     0,   149,   150,   151,
       0,     0,     0,     0,     0,     0,    35,     0,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,    45,    46,    47,    48,    49,    50,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,     0,   162,   163,   164,   165,   166,   167,
     168,     0,   169,   170,     0,     0,     0,     0,     0,     0,
       0,   171,   172,   173,   174,   175
};

static const yytype_int16 yycheck[] =
{
       0,    27,    14,     0,    28,    29,     6,    55,   142,    85,
     187,    21,    36,     9,    14,   125,   118,    11,    18,    37,
      20,    13,     1,   256,   231,    21,    12,    27,    38,    32,
      40,    13,     6,   372,   374,    57,    58,    31,   100,    39,
      31,     3,    38,    43,    40,    45,    31,    31,   110,    11,
      11,    33,    31,    53,   393,    11,    53,    49,    50,   266,
      60,    28,   402,     6,     7,     8,    33,    11,    60,    31,
      63,    28,    11,    76,   208,   177,    74,    70,   102,    11,
     182,    81,   315,   317,   318,    85,    60,   105,    37,     3,
      39,    85,    11,    85,    13,    31,   330,    91,    71,    72,
     100,    85,     3,   127,    27,    99,    85,   105,    94,     1,
     110,    99,    91,   131,    99,    99,    39,     9,   118,    11,
      99,    13,   224,    85,   226,    15,   303,   348,    95,    91,
      49,    50,    99,   131,    26,    27,   146,    99,    95,   373,
     250,    60,    99,   320,    85,   145,    68,    69,    11,    85,
     146,    55,    56,    57,    58,    91,    28,   183,    93,   380,
       0,     3,    13,    99,    62,    74,    85,    64,    65,    66,
      67,    73,    75,    30,    10,    12,    14,   177,     3,    33,
      33,    16,   182,   183,   405,    33,    15,   408,     3,    95,
      13,   191,   192,     5,   194,   118,     5,    89,    86,    12,
     200,   249,    13,   279,    96,    97,    98,    99,   100,   101,
      11,   345,   212,   213,   214,   215,   216,    31,    12,   219,
     220,   221,   222,   223,   224,    12,   226,    12,    12,     5,
     230,   231,    11,    11,    86,    12,    60,    33,    11,    86,
     238,   241,    12,    31,     3,     3,    12,    16,    31,    59,
      15,    11,    15,     5,   177,    36,   256,    12,    12,   182,
     183,   261,    12,     3,    31,   265,   266,   267,   268,    16,
       3,    16,    16,     5,    12,   323,     5,     3,   302,   279,
      31,     3,    53,   327,   393,   350,   267,   410,   355,   415,
     338,    37,   367,   305,   306,   203,   264,   309,   310,    81,
      43,   224,   406,   226,    79,   305,   306,   384,   231,   309,
     310,   311,    37,    37,    37,   315,    37,   317,   318,   212,
     329,     3,     4,     5,   350,   214,   213,   327,   219,   329,
     330,   215,   192,   216,   346,   220,   222,    19,    -1,   221,
      22,    20,   223,   266,    20,    20,   346,    -1,   348,    -1,
     350,    -1,   376,   353,   366,   355,    -1,   369,   358,    -1,
      -1,    -1,   386,   363,    -1,    -1,   366,    -1,    -1,   369,
     418,    -1,   372,   373,    -1,   372,   374,    -1,   378,    -1,
     380,    -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,
     414,    -1,    -1,   393,   317,   318,   393,    -1,    -1,   411,
     398,    -1,    -1,    -1,   402,   405,   406,   330,   408,    -1,
     410,   411,    -1,    -1,    -1,   415,    -1,    -1,    -1,   417,
      -1,    -1,    -1,    -1,   106,    -1,    -1,   350,    -1,    -1,
      -1,    -1,   355,    -1,    -1,   358,    -1,   119,   120,   121,
     363,   123,   124,    -1,    -1,    -1,    -1,    -1,     4,     5,
     373,    -1,    -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   406,    -1,    -1,    -1,   410,    -1,    -1,
      -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,   188,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    -1,   204,    -1,    80,    81,    82,    83,    84,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,   229,    -1,    -1,
       7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,    -1,
      -1,    -1,    -1,   245,   246,    -1,    -1,    -1,    -1,    26,
      27,    -1,    29,    -1,    31,    -1,    -1,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,   295,    -1,    -1,   298,    -1,    -1,    -1,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,    85,    -1,
     312,    88,    89,    90,    91,    92,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,     3,    -1,    -1,    -1,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,   356,    -1,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,     3,    -1,    -1,    -1,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,     3,    -1,    -1,    -1,     7,    -1,     9,
      -1,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    68,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,     3,    -1,    -1,    -1,     7,    -1,     9,    -1,
      11,    -1,    13,    -1,    -1,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    80,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,    90,
      91,    92,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,     3,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,     7,    -1,
       9,    -1,    11,    12,    13,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    85,    -1,    34,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    14,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    85,    -1,    34,    -1,
      89,    90,    91,    92,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,     7,    -1,     9,    -1,    11,    -1,
      13,    14,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    85,
      -1,    34,    -1,    89,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    -1,     7,    -1,     9,
      -1,    11,    12,    13,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    85,    -1,    34,    -1,    89,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    -1,
       7,    -1,     9,    -1,    11,    -1,    13,    14,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    85,    -1,    34,    -1,    89,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,     7,    -1,     9,    -1,    11,    12,    13,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    85,    -1,
      34,    -1,    89,    90,    91,    92,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,     7,    -1,     9,    -1,
      11,    -1,    13,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    85,    -1,    34,    -1,    89,    90,    91,    92,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    -1,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    85,    -1,    34,    -1,    89,    90,
      91,    92,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    89,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    49,    50,    51,
      52,    53,    -1,    -1,    -1,     4,    -1,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    63,    64,    65,    66,    67,    68,
      69,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     9,    11,    13,    15,    26,    27,    29,
      31,    34,    35,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    68,    77,    78,    79,    85,
      88,    89,    90,    91,    92,    96,    97,    98,    99,   100,
     101,   112,   113,   114,   115,   121,   122,   125,   126,   134,
     135,   136,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   151,   152,   153,   154,   155,   157,   161,
     162,   163,   165,   167,   169,   170,   172,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   198,   201,   202,   203,   204,   205,   136,   147,
     195,    12,   147,    14,   147,    16,   122,   163,   164,    31,
      11,    11,   135,    11,    11,    11,   136,   147,     1,   136,
     202,   203,   205,   164,     3,   147,     3,     3,    31,   127,
     128,   136,   170,   134,   134,    85,   160,   134,     4,     6,
       7,     8,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    61,    63,    64,    65,    66,    67,    68,    69,    71,
      72,    80,    81,    82,    83,    84,   150,   166,   178,   179,
     180,   181,   201,   164,   127,   129,   199,   164,    11,   169,
      28,   168,   136,   197,    93,     0,   113,   168,   122,    33,
      95,     3,     5,   150,    13,   151,   162,   155,   136,   173,
     174,    32,    76,    62,    74,    75,    73,    63,    70,   177,
     178,   179,   180,   181,    30,    31,    78,   196,   134,    13,
      60,    85,   149,   151,   201,   147,    10,    12,    14,    16,
     124,   129,   147,   147,   147,    37,    39,   147,   147,    92,
     146,     3,   134,    33,    33,    33,    15,     3,   153,   119,
     136,   164,   129,   129,   123,   127,     5,    86,   160,   147,
     173,   197,   136,   120,   136,   147,   154,    14,   153,     5,
     147,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     194,   129,   129,   136,   199,    11,   200,    12,    13,   151,
      12,    94,   159,   136,    31,    12,    12,   147,   147,    12,
      12,   168,   146,   119,    86,     5,   136,    11,    11,   159,
     136,   199,    31,   121,   136,   137,    12,    60,   173,    33,
      11,    86,    12,   147,    14,    12,   134,   160,    31,   135,
     135,     3,     3,   135,   135,   136,    12,   147,    16,   119,
      59,   116,   130,   170,   130,   160,    31,   168,    15,   120,
     182,   130,    12,    11,   158,   168,    36,    33,   135,    12,
     137,   128,    15,     5,   136,   175,    12,     3,    11,   132,
     170,   147,     1,   156,   170,   171,    12,   130,   131,   135,
     148,   135,     3,   114,   117,   118,   130,   151,   152,   134,
     132,   133,   137,   176,    31,    16,     3,   175,    16,   134,
       5,    12,   118,    16,    12,     5,   151,   152,    31,   137,
     171,   137,   131,   135,   134,   133,   168,     3,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   113,   114,   114,   114,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   124,   125,   126,   127,   127,
     128,   129,   130,   131,   131,   132,   133,   133,   134,   134,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   137,   137,   138,   139,   140,
     141,   141,   141,   142,   143,   143,   143,   143,   143,   143,
     143,   143,   144,   144,   145,   145,   145,   145,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   151,   151,   151,   152,   152,   152,   153,
     153,   154,   154,   154,   155,   156,   157,   157,   158,   158,
     132,   132,   159,   159,   160,   160,   161,   161,   162,   162,
     163,   163,   163,   164,   164,   165,   166,   166,   166,   166,
     166,   167,   167,   167,   167,   167,   168,   168,   169,   169,
     169,   169,   170,   170,   171,   171,   172,   172,   173,   173,
     174,   174,   175,   175,   175,   176,   176,   176,   177,   177,
     178,   178,   178,   178,   179,   179,   180,   180,   181,   181,
     181,   182,   182,   183,   183,   184,   184,   185,   185,   186,
     186,   187,   187,   188,   188,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   195,
     195,   195,   195,   195,   196,   196,   196,   196,   196,   197,
     197,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     203,   203,   203,   203,   203,   204,   204,   204,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     8,
       2,     0,     1,     0,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     2,     4,     4,     4,     6,     1,     2,
       1,     1,     2,     1,     3,     2,     1,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     0,     7,     2,     3,
       3,     3,     3,     3,     5,     5,     6,     7,     9,     5,
       5,     5,     5,     7,     2,     3,     2,     2,     2,     1,
       1,     3,     1,     3,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     5,     2,     3,     2,     1,
       1,     1,     1,     3,     2,     2,     1,     2,     2,     1,
       2,     1,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     5,     1,     1,     1,     1,
       1,     1,     9,     7,     7,     2,     0,     1,     2,     5,
       6,     9,     1,     2,     2,     3,     9,     9,     1,     3,
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
#line 116 "ly/gwion.y" /* yacc.c:1652  */
    { arg->ast = (yyvsp[0].ast); }
#line 2199 "src/parser.c" /* yacc.c:1652  */
    break;

  case 3:
#line 117 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "file is empty.\n"); YYERROR; }
#line 2205 "src/parser.c" /* yacc.c:1652  */
    break;

  case 4:
#line 120 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2211 "src/parser.c" /* yacc.c:1652  */
    break;

  case 5:
#line 121 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2217 "src/parser.c" /* yacc.c:1652  */
    break;

  case 6:
#line 125 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2223 "src/parser.c" /* yacc.c:1652  */
    break;

  case 7:
#line 126 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2229 "src/parser.c" /* yacc.c:1652  */
    break;

  case 8:
#line 127 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2235 "src/parser.c" /* yacc.c:1652  */
    break;

  case 9:
#line 132 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].class_body), loc_cpy(mpool(arg), &(yyloc)));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-6].id_list), -1);
  }
#line 2244 "src/parser.c" /* yacc.c:1652  */
    break;

  case 10:
#line 137 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2250 "src/parser.c" /* yacc.c:1652  */
    break;

  case 11:
#line 137 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = NULL; }
#line 2256 "src/parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 139 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = NULL; }
#line 2262 "src/parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 142 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[0].section), NULL); }
#line 2268 "src/parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 143 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2274 "src/parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 146 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yyloc))); }
#line 2280 "src/parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 146 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2286 "src/parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 147 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yylsp[0]))); }
#line 2292 "src/parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 147 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2298 "src/parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 148 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yylsp[0]))); }
#line 2304 "src/parser.c" /* yacc.c:1652  */
    break;

  case 21:
#line 148 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2310 "src/parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 150 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2316 "src/parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 150 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2322 "src/parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 152 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if(3) (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1); }
#line 2329 "src/parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 154 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1); }
#line 2336 "src/parser.c" /* yacc.c:1652  */
    break;

  case 26:
#line 157 "ly/gwion.y" /* yacc.c:1652  */
    {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.stmt) = new_stmt_fptr(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag));
}
#line 2348 "src/parser.c" /* yacc.c:1652  */
    break;

  case 27:
#line 164 "ly/gwion.y" /* yacc.c:1652  */
    {
  (yyval.stmt) = new_stmt_type(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.stmt)->d.stmt_type.tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1);
}
#line 2359 "src/parser.c" /* yacc.c:1652  */
    break;

  case 29:
#line 171 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2365 "src/parser.c" /* yacc.c:1652  */
    break;

  case 30:
#line 173 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2373 "src/parser.c" /* yacc.c:1652  */
    break;

  case 31:
#line 177 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2381 "src/parser.c" /* yacc.c:1652  */
    break;

  case 32:
#line 181 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2387 "src/parser.c" /* yacc.c:1652  */
    break;

  case 33:
#line 182 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2393 "src/parser.c" /* yacc.c:1652  */
    break;

  case 34:
#line 182 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2399 "src/parser.c" /* yacc.c:1652  */
    break;

  case 35:
#line 183 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2405 "src/parser.c" /* yacc.c:1652  */
    break;

  case 36:
#line 184 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2411 "src/parser.c" /* yacc.c:1652  */
    break;

  case 37:
#line 184 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2417 "src/parser.c" /* yacc.c:1652  */
    break;

  case 38:
#line 187 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, loc_cpy(mpool(arg), &(yyloc))); }
#line 2423 "src/parser.c" /* yacc.c:1652  */
    break;

  case 39:
#line 188 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2429 "src/parser.c" /* yacc.c:1652  */
    break;

  case 53:
#line 210 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2435 "src/parser.c" /* yacc.c:1652  */
    break;

  case 54:
#line 211 "ly/gwion.y" /* yacc.c:1652  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2445 "src/parser.c" /* yacc.c:1652  */
    break;

  case 56:
#line 218 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = NULL; }
#line 2451 "src/parser.c" /* yacc.c:1652  */
    break;

  case 57:
#line 221 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_enum(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2458 "src/parser.c" /* yacc.c:1652  */
    break;

  case 58:
#line 224 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, loc_cpy(mpool(arg), &(yyloc))); }
#line 2464 "src/parser.c" /* yacc.c:1652  */
    break;

  case 59:
#line 226 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, loc_cpy(mpool(arg), &(yyloc))); }
#line 2470 "src/parser.c" /* yacc.c:1652  */
    break;

  case 60:
#line 229 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2476 "src/parser.c" /* yacc.c:1652  */
    break;

  case 61:
#line 230 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2482 "src/parser.c" /* yacc.c:1652  */
    break;

  case 62:
#line 231 "ly/gwion.y" /* yacc.c:1652  */
    { gw_err("unhandled expression type in case statement.\n"); YYERROR; }
#line 2488 "src/parser.c" /* yacc.c:1652  */
    break;

  case 63:
#line 234 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_switch(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2494 "src/parser.c" /* yacc.c:1652  */
    break;

  case 64:
#line 238 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), ae_stmt_while, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2500 "src/parser.c" /* yacc.c:1652  */
    break;

  case 65:
#line 240 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), ae_stmt_while, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2506 "src/parser.c" /* yacc.c:1652  */
    break;

  case 66:
#line 242 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2512 "src/parser.c" /* yacc.c:1652  */
    break;

  case 67:
#line 244 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2518 "src/parser.c" /* yacc.c:1652  */
    break;

  case 68:
#line 246 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2524 "src/parser.c" /* yacc.c:1652  */
    break;

  case 69:
#line 248 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), ae_stmt_until, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2530 "src/parser.c" /* yacc.c:1652  */
    break;

  case 70:
#line 250 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), ae_stmt_until, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2536 "src/parser.c" /* yacc.c:1652  */
    break;

  case 71:
#line 252 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2542 "src/parser.c" /* yacc.c:1652  */
    break;

  case 72:
#line 257 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2548 "src/parser.c" /* yacc.c:1652  */
    break;

  case 73:
#line 259 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2554 "src/parser.c" /* yacc.c:1652  */
    break;

  case 74:
#line 263 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, loc_cpy(mpool(arg), &(yyloc))); }
#line 2560 "src/parser.c" /* yacc.c:1652  */
    break;

  case 75:
#line 264 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2566 "src/parser.c" /* yacc.c:1652  */
    break;

  case 76:
#line 265 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_break, loc_cpy(mpool(arg), &(yyloc))); }
#line 2572 "src/parser.c" /* yacc.c:1652  */
    break;

  case 77:
#line 266 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_continue, loc_cpy(mpool(arg), &(yyloc))); }
#line 2578 "src/parser.c" /* yacc.c:1652  */
    break;

  case 78:
#line 270 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2584 "src/parser.c" /* yacc.c:1652  */
    break;

  case 79:
#line 271 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, loc_cpy(mpool(arg), &(yyloc))); }
#line 2590 "src/parser.c" /* yacc.c:1652  */
    break;

  case 81:
#line 274 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2596 "src/parser.c" /* yacc.c:1652  */
    break;

  case 83:
#line 276 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 2602 "src/parser.c" /* yacc.c:1652  */
    break;

  case 84:
#line 278 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2608 "src/parser.c" /* yacc.c:1652  */
    break;

  case 85:
#line 278 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = NULL; }
#line 2614 "src/parser.c" /* yacc.c:1652  */
    break;

  case 86:
#line 280 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_chuck; }
#line 2620 "src/parser.c" /* yacc.c:1652  */
    break;

  case 87:
#line 280 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_unchuck; }
#line 2626 "src/parser.c" /* yacc.c:1652  */
    break;

  case 88:
#line 280 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_eq; }
#line 2632 "src/parser.c" /* yacc.c:1652  */
    break;

  case 89:
#line 281 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_ref; }
#line 2638 "src/parser.c" /* yacc.c:1652  */
    break;

  case 90:
#line 281 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_radd; }
#line 2644 "src/parser.c" /* yacc.c:1652  */
    break;

  case 91:
#line 282 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsub; }
#line 2650 "src/parser.c" /* yacc.c:1652  */
    break;

  case 92:
#line 282 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rmul; }
#line 2656 "src/parser.c" /* yacc.c:1652  */
    break;

  case 93:
#line 283 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rdiv; }
#line 2662 "src/parser.c" /* yacc.c:1652  */
    break;

  case 94:
#line 283 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rmod; }
#line 2668 "src/parser.c" /* yacc.c:1652  */
    break;

  case 95:
#line 284 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_trig; }
#line 2674 "src/parser.c" /* yacc.c:1652  */
    break;

  case 96:
#line 284 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_untrig; }
#line 2680 "src/parser.c" /* yacc.c:1652  */
    break;

  case 97:
#line 285 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsl; }
#line 2686 "src/parser.c" /* yacc.c:1652  */
    break;

  case 98:
#line 285 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsr; }
#line 2692 "src/parser.c" /* yacc.c:1652  */
    break;

  case 99:
#line 285 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsand; }
#line 2698 "src/parser.c" /* yacc.c:1652  */
    break;

  case 100:
#line 286 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsor; }
#line 2704 "src/parser.c" /* yacc.c:1652  */
    break;

  case 101:
#line 286 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsxor; }
#line 2710 "src/parser.c" /* yacc.c:1652  */
    break;

  case 102:
#line 286 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_coloncolon; }
#line 2716 "src/parser.c" /* yacc.c:1652  */
    break;

  case 103:
#line 290 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2722 "src/parser.c" /* yacc.c:1652  */
    break;

  case 104:
#line 291 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2728 "src/parser.c" /* yacc.c:1652  */
    break;

  case 105:
#line 292 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2734 "src/parser.c" /* yacc.c:1652  */
    break;

  case 106:
#line 296 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2740 "src/parser.c" /* yacc.c:1652  */
    break;

  case 107:
#line 297 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2746 "src/parser.c" /* yacc.c:1652  */
    break;

  case 108:
#line 298 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2752 "src/parser.c" /* yacc.c:1652  */
    break;

  case 113:
#line 303 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), loc_cpy(mpool(arg), &(yyloc))), 0), (yyvsp[0].var_decl_list)); }
#line 2759 "src/parser.c" /* yacc.c:1652  */
    break;

  case 114:
#line 305 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2765 "src/parser.c" /* yacc.c:1652  */
    break;

  case 115:
#line 306 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2771 "src/parser.c" /* yacc.c:1652  */
    break;

  case 117:
#line 307 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2777 "src/parser.c" /* yacc.c:1652  */
    break;

  case 118:
#line 309 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2783 "src/parser.c" /* yacc.c:1652  */
    break;

  case 119:
#line 309 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2789 "src/parser.c" /* yacc.c:1652  */
    break;

  case 120:
#line 310 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2795 "src/parser.c" /* yacc.c:1652  */
    break;

  case 121:
#line 310 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2801 "src/parser.c" /* yacc.c:1652  */
    break;

  case 122:
#line 311 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2807 "src/parser.c" /* yacc.c:1652  */
    break;

  case 123:
#line 311 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2813 "src/parser.c" /* yacc.c:1652  */
    break;

  case 124:
#line 313 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2819 "src/parser.c" /* yacc.c:1652  */
    break;

  case 125:
#line 313 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = NULL; }
#line 2825 "src/parser.c" /* yacc.c:1652  */
    break;

  case 126:
#line 315 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_static; }
#line 2831 "src/parser.c" /* yacc.c:1652  */
    break;

  case 127:
#line 316 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_global; }
#line 2837 "src/parser.c" /* yacc.c:1652  */
    break;

  case 128:
#line 319 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_private; }
#line 2843 "src/parser.c" /* yacc.c:1652  */
    break;

  case 129:
#line 320 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_protect; }
#line 2849 "src/parser.c" /* yacc.c:1652  */
    break;

  case 130:
#line 323 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2855 "src/parser.c" /* yacc.c:1652  */
    break;

  case 131:
#line 324 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2861 "src/parser.c" /* yacc.c:1652  */
    break;

  case 132:
#line 325 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2867 "src/parser.c" /* yacc.c:1652  */
    break;

  case 133:
#line 328 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2873 "src/parser.c" /* yacc.c:1652  */
    break;

  case 134:
#line 328 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2879 "src/parser.c" /* yacc.c:1652  */
    break;

  case 135:
#line 332 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), loc_cpy(mpool(arg), &(yyloc)));
//    if($1) {
//      SET_FLAG($$, template);
//      $$->base->tmpl = new_tmpl(mpool(arg), $1, -1);
//    }
  }
#line 2890 "src/parser.c" /* yacc.c:1652  */
    break;

  case 142:
#line 343 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), OP_SYM((yyvsp[-7].ival)), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, loc_cpy(mpool(arg), &(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2896 "src/parser.c" /* yacc.c:1652  */
    break;

  case 143:
#line 345 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), OP_SYM((yyvsp[-5].ival)), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, loc_cpy(mpool(arg), &(yyloc))); }
#line 2902 "src/parser.c" /* yacc.c:1652  */
    break;

  case 144:
#line 347 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), OP_SYM((yyvsp[-6].ival)), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, loc_cpy(mpool(arg), &(yyloc))); }
#line 2908 "src/parser.c" /* yacc.c:1652  */
    break;

  case 145:
#line 349 "ly/gwion.y" /* yacc.c:1652  */
    {
ID_List l = new_id_list(mpool(arg), insert_symbol("void"), loc_cpy(mpool(arg), &(yyloc)));
(yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), new_type_decl(mpool(arg), l, 0),
       insert_symbol("dtor"), NULL), (yyvsp[0].stmt), ae_flag_dtor, loc_cpy(mpool(arg), &(yyloc))); }
#line 2917 "src/parser.c" /* yacc.c:1652  */
    break;

  case 146:
#line 354 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = 0; }
#line 2923 "src/parser.c" /* yacc.c:1652  */
    break;

  case 147:
#line 354 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_flag_ref; }
#line 2929 "src/parser.c" /* yacc.c:1652  */
    break;

  case 148:
#line 357 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].id_list), (yyvsp[0].ival)); }
#line 2935 "src/parser.c" /* yacc.c:1652  */
    break;

  case 149:
#line 358 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].id_list), (yyvsp[0].ival));
      (yyval.type_decl)->types = (yyvsp[-3].type_list); }
#line 2942 "src/parser.c" /* yacc.c:1652  */
    break;

  case 150:
#line 360 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[-3].exp), (yyvsp[0].ival)); }
#line 2948 "src/parser.c" /* yacc.c:1652  */
    break;

  case 151:
#line 362 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[-3].exp), (yyvsp[0].ival)); (yyval.type_decl)->types = (yyvsp[-7].type_list); }
#line 2954 "src/parser.c" /* yacc.c:1652  */
    break;

  case 152:
#line 365 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2960 "src/parser.c" /* yacc.c:1652  */
    break;

  case 153:
#line 366 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 2966 "src/parser.c" /* yacc.c:1652  */
    break;

  case 154:
#line 368 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2972 "src/parser.c" /* yacc.c:1652  */
    break;

  case 155:
#line 369 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2978 "src/parser.c" /* yacc.c:1652  */
    break;

  case 156:
#line 372 "ly/gwion.y" /* yacc.c:1652  */
    {
      (yyval.stmt) = new_stmt_union(mpool(arg), (yyvsp[-3].decl_list), loc_cpy(mpool(arg), &(yyloc)));
      (yyval.stmt)->d.stmt_union.type_xid = (yyvsp[-5].sym);
      (yyval.stmt)->d.stmt_union.xid = (yyvsp[-1].sym);
      (yyval.stmt)->d.stmt_union.flag = (yyvsp[-7].flag);
      if((yyvsp[-6].id_list)) {
        if(!(yyvsp[-5].sym)) {
          gw_err("Template unions requires type name\n");
          YYERROR;
        }
        if((yyvsp[-1].sym)) {
          gw_err("Can't instantiate template union types at declaration site.\n");
          YYERROR;
        }
        (yyval.stmt)->d.stmt_union.tmpl = new_tmpl(mpool(arg), (yyvsp[-6].id_list), -1);
      }
    }
#line 3000 "src/parser.c" /* yacc.c:1652  */
    break;

  case 157:
#line 389 "ly/gwion.y" /* yacc.c:1652  */
    {
    gw_err("Unions should only contain declarations.\n");
    YYERROR;
    }
#line 3009 "src/parser.c" /* yacc.c:1652  */
    break;

  case 158:
#line 396 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3015 "src/parser.c" /* yacc.c:1652  */
    break;

  case 159:
#line 397 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3021 "src/parser.c" /* yacc.c:1652  */
    break;

  case 160:
#line 400 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, loc_cpy(mpool(arg), &(yyloc))); }
#line 3027 "src/parser.c" /* yacc.c:1652  */
    break;

  case 161:
#line 401 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), loc_cpy(mpool(arg), &(yyloc))); }
#line 3033 "src/parser.c" /* yacc.c:1652  */
    break;

  case 162:
#line 403 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, loc_cpy(mpool(arg), &(yyloc))); }
#line 3039 "src/parser.c" /* yacc.c:1652  */
    break;

  case 163:
#line 404 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), loc_cpy(mpool(arg), &(yyloc))); }
#line 3045 "src/parser.c" /* yacc.c:1652  */
    break;

  case 164:
#line 405 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3051 "src/parser.c" /* yacc.c:1652  */
    break;

  case 165:
#line 406 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, loc_cpy(mpool(arg), &(yyloc))); }
#line 3057 "src/parser.c" /* yacc.c:1652  */
    break;

  case 166:
#line 407 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), loc_cpy(mpool(arg), &(yyloc))); }
#line 3063 "src/parser.c" /* yacc.c:1652  */
    break;

  case 167:
#line 408 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3069 "src/parser.c" /* yacc.c:1652  */
    break;

  case 168:
#line 410 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_eq; }
#line 3075 "src/parser.c" /* yacc.c:1652  */
    break;

  case 169:
#line 410 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_ne; }
#line 3081 "src/parser.c" /* yacc.c:1652  */
    break;

  case 170:
#line 411 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_lt; }
#line 3087 "src/parser.c" /* yacc.c:1652  */
    break;

  case 171:
#line 411 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_gt; }
#line 3093 "src/parser.c" /* yacc.c:1652  */
    break;

  case 172:
#line 411 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_le; }
#line 3099 "src/parser.c" /* yacc.c:1652  */
    break;

  case 173:
#line 411 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_ge; }
#line 3105 "src/parser.c" /* yacc.c:1652  */
    break;

  case 174:
#line 412 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_shl; }
#line 3111 "src/parser.c" /* yacc.c:1652  */
    break;

  case 175:
#line 412 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_shr; }
#line 3117 "src/parser.c" /* yacc.c:1652  */
    break;

  case 176:
#line 413 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_add; }
#line 3123 "src/parser.c" /* yacc.c:1652  */
    break;

  case 177:
#line 413 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_sub; }
#line 3129 "src/parser.c" /* yacc.c:1652  */
    break;

  case 178:
#line 414 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_mul; }
#line 3135 "src/parser.c" /* yacc.c:1652  */
    break;

  case 179:
#line 414 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_div; }
#line 3141 "src/parser.c" /* yacc.c:1652  */
    break;

  case 180:
#line 414 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_mod; }
#line 3147 "src/parser.c" /* yacc.c:1652  */
    break;

  case 182:
#line 416 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3153 "src/parser.c" /* yacc.c:1652  */
    break;

  case 184:
#line 418 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_or, (yyvsp[0].exp)); }
#line 3159 "src/parser.c" /* yacc.c:1652  */
    break;

  case 186:
#line 419 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_and, (yyvsp[0].exp)); }
#line 3165 "src/parser.c" /* yacc.c:1652  */
    break;

  case 188:
#line 420 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_sor, (yyvsp[0].exp)); }
#line 3171 "src/parser.c" /* yacc.c:1652  */
    break;

  case 190:
#line 421 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_sxor, (yyvsp[0].exp)); }
#line 3177 "src/parser.c" /* yacc.c:1652  */
    break;

  case 192:
#line 422 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_sand, (yyvsp[0].exp)); }
#line 3183 "src/parser.c" /* yacc.c:1652  */
    break;

  case 194:
#line 423 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3189 "src/parser.c" /* yacc.c:1652  */
    break;

  case 196:
#line 424 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3195 "src/parser.c" /* yacc.c:1652  */
    break;

  case 198:
#line 425 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3201 "src/parser.c" /* yacc.c:1652  */
    break;

  case 200:
#line 426 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3207 "src/parser.c" /* yacc.c:1652  */
    break;

  case 202:
#line 427 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3213 "src/parser.c" /* yacc.c:1652  */
    break;

  case 204:
#line 429 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3219 "src/parser.c" /* yacc.c:1652  */
    break;

  case 206:
#line 432 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3225 "src/parser.c" /* yacc.c:1652  */
    break;

  case 207:
#line 434 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_sub; }
#line 3231 "src/parser.c" /* yacc.c:1652  */
    break;

  case 208:
#line 434 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_mul; }
#line 3237 "src/parser.c" /* yacc.c:1652  */
    break;

  case 210:
#line 436 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_not; }
#line 3243 "src/parser.c" /* yacc.c:1652  */
    break;

  case 211:
#line 436 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_spork; }
#line 3249 "src/parser.c" /* yacc.c:1652  */
    break;

  case 212:
#line 436 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_fork; }
#line 3255 "src/parser.c" /* yacc.c:1652  */
    break;

  case 213:
#line 436 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_cmp; }
#line 3261 "src/parser.c" /* yacc.c:1652  */
    break;

  case 215:
#line 439 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3267 "src/parser.c" /* yacc.c:1652  */
    break;

  case 216:
#line 440 "ly/gwion.y" /* yacc.c:1652  */
    {(yyval.exp) = new_exp_unary2(mpool(arg), op_new, (yyvsp[0].type_decl)); }
#line 3273 "src/parser.c" /* yacc.c:1652  */
    break;

  case 217:
#line 441 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(mpool(arg), op_spork, (yyvsp[0].stmt)); }
#line 3279 "src/parser.c" /* yacc.c:1652  */
    break;

  case 218:
#line 442 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(mpool(arg), op_fork, (yyvsp[0].stmt)); }
#line 3285 "src/parser.c" /* yacc.c:1652  */
    break;

  case 219:
#line 445 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, loc_cpy(mpool(arg), &(yyloc))), NULL); }
#line 3291 "src/parser.c" /* yacc.c:1652  */
    break;

  case 220:
#line 446 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, loc_cpy(mpool(arg), &(yyloc))), (yyvsp[0].arg_list)); }
#line 3297 "src/parser.c" /* yacc.c:1652  */
    break;

  case 221:
#line 447 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3303 "src/parser.c" /* yacc.c:1652  */
    break;

  case 222:
#line 447 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 3309 "src/parser.c" /* yacc.c:1652  */
    break;

  case 223:
#line 450 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3315 "src/parser.c" /* yacc.c:1652  */
    break;

  case 224:
#line 451 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3321 "src/parser.c" /* yacc.c:1652  */
    break;

  case 225:
#line 454 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3327 "src/parser.c" /* yacc.c:1652  */
    break;

  case 226:
#line 454 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = NULL; }
#line 3333 "src/parser.c" /* yacc.c:1652  */
    break;

  case 227:
#line 456 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_inc; }
#line 3339 "src/parser.c" /* yacc.c:1652  */
    break;

  case 228:
#line 456 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_dec; }
#line 3345 "src/parser.c" /* yacc.c:1652  */
    break;

  case 229:
#line 458 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3351 "src/parser.c" /* yacc.c:1652  */
    break;

  case 231:
#line 460 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3357 "src/parser.c" /* yacc.c:1652  */
    break;

  case 232:
#line 462 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3364 "src/parser.c" /* yacc.c:1652  */
    break;

  case 233:
#line 465 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].ival)); }
#line 3370 "src/parser.c" /* yacc.c:1652  */
    break;

  case 234:
#line 465 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3376 "src/parser.c" /* yacc.c:1652  */
    break;

  case 235:
#line 468 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_complex; }
#line 3382 "src/parser.c" /* yacc.c:1652  */
    break;

  case 236:
#line 469 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3388 "src/parser.c" /* yacc.c:1652  */
    break;

  case 237:
#line 470 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3394 "src/parser.c" /* yacc.c:1652  */
    break;

  case 238:
#line 473 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_id(     mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yyloc))); }
#line 3400 "src/parser.c" /* yacc.c:1652  */
    break;

  case 239:
#line 474 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_int(    mpool(arg), (yyvsp[0].lval), loc_cpy(mpool(arg), &(yyloc))); }
#line 3406 "src/parser.c" /* yacc.c:1652  */
    break;

  case 240:
#line 475 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_float(  mpool(arg), (yyvsp[0].fval), loc_cpy(mpool(arg), &(yyloc))); }
#line 3412 "src/parser.c" /* yacc.c:1652  */
    break;

  case 241:
#line 476 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_string( mpool(arg), (yyvsp[0].sval), loc_cpy(mpool(arg), &(yyloc))); }
#line 3418 "src/parser.c" /* yacc.c:1652  */
    break;

  case 242:
#line 477 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_char(   mpool(arg), (yyvsp[0].sval), loc_cpy(mpool(arg), &(yyloc))); }
#line 3424 "src/parser.c" /* yacc.c:1652  */
    break;

  case 243:
#line 478 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_array(  mpool(arg), (yyvsp[0].array_sub), loc_cpy(mpool(arg), &(yyloc))); }
#line 3430 "src/parser.c" /* yacc.c:1652  */
    break;

  case 244:
#line 479 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_vec(    mpool(arg), (yyvsp[-2].ival) ,(yyvsp[-1].exp)); }
#line 3436 "src/parser.c" /* yacc.c:1652  */
    break;

  case 245:
#line 480 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3442 "src/parser.c" /* yacc.c:1652  */
    break;

  case 246:
#line 481 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3448 "src/parser.c" /* yacc.c:1652  */
    break;

  case 247:
#line 482 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3454 "src/parser.c" /* yacc.c:1652  */
    break;

  case 248:
#line 483 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_nil(    mpool(arg),     loc_cpy(mpool(arg), &(yyloc))); }
#line 3460 "src/parser.c" /* yacc.c:1652  */
    break;


#line 3464 "src/parser.c" /* yacc.c:1652  */
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

