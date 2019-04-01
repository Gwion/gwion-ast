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
#line 5 "ly/gwion.y" /* yacc.c:337  */

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
#define insert_symbol(a) insert_symbol(arg->st, (a))
#define OP_SYM(a) insert_symbol(op2str(a))
ANN uint get_pos(const Scanner*);
ANN void gwion_error(const Scanner*, const m_str s);
ANN Symbol lambda_name(const Scanner*);
m_str op2str(const Operator op);

#line 101 "src/parser.c" /* yacc.c:337  */
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
    TEMPLATE = 340,
    LTMPL = 341,
    RTMPL = 342,
    NOELSE = 343,
    UNION = 344,
    ATPAREN = 345,
    TYPEOF = 346,
    CONSTT = 347,
    AUTO = 348,
    PASTE = 349,
    ELLIPSE = 350,
    RARROW = 351,
    BACKSLASH = 352,
    NUM = 353,
    FLOATT = 354,
    ID = 355,
    STRING_LIT = 356,
    CHAR_LIT = 357,
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
#define TEMPLATE 340
#define LTMPL 341
#define RTMPL 342
#define NOELSE 343
#define UNION 344
#define ATPAREN 345
#define TYPEOF 346
#define CONSTT 347
#define AUTO 348
#define PASTE 349
#define ELLIPSE 350
#define RARROW 351
#define BACKSLASH 352
#define NUM 353
#define FLOATT 354
#define ID 355
#define STRING_LIT 356
#define CHAR_LIT 357
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
#line 30 "ly/gwion.y" /* yacc.c:352  */

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
//  ID_List class_ext;
  Class_Def class_def;
  Ast ast;

#line 393 "src/parser.c" /* yacc.c:352  */
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
#define YYFINAL  187
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1917

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  242
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  409

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
       0,   107,   107,   108,   111,   112,   116,   117,   118,   122,
     128,   128,   130,   130,   133,   134,   137,   137,   138,   138,
     139,   139,   141,   141,   143,   147,   149,   149,   151,   155,
     159,   160,   160,   161,   162,   162,   165,   166,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   188,   189,   196,   196,   199,   202,   204,   207,   208,
     209,   212,   215,   217,   219,   221,   223,   225,   227,   229,
     234,   236,   241,   242,   243,   244,   248,   249,   252,   252,
     254,   254,   256,   256,   258,   258,   258,   259,   259,   260,
     260,   261,   261,   262,   262,   263,   263,   263,   264,   264,
     264,   268,   269,   270,   274,   275,   276,   279,   279,   280,
     280,   281,   282,   283,   283,   285,   285,   286,   286,   287,
     287,   289,   289,   291,   292,   295,   296,   299,   300,   301,
     304,   304,   307,   315,   315,   315,   315,   315,   317,   318,
     320,   322,   324,   329,   329,   332,   333,   335,   338,   339,
     341,   342,   345,   351,   358,   359,   362,   363,   365,   366,
     367,   368,   369,   370,   372,   372,   373,   373,   373,   373,
     374,   374,   375,   375,   376,   376,   376,   377,   377,   380,
     380,   381,   381,   382,   382,   383,   383,   384,   384,   385,
     385,   386,   386,   387,   387,   388,   388,   389,   389,   391,
     391,   394,   394,   395,   396,   396,   396,   396,   399,   399,
     400,   401,   402,   405,   406,   407,   407,   410,   411,   414,
     414,   416,   416,   418,   419,   419,   421,   424,   425,   428,
     429,   430,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443
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
  "CONTINUE", "PLUSPLUS", "MINUSMINUS", "NEW", "SPORK", "FORK", "CLASS",
  "STATIC", "GLOBAL", "PRIVATE", "PROTECT", "EXTENDS", "DOT", "COLONCOLON",
  "AND", "EQ", "GE", "GT", "LE", "LT", "MINUS", "PLUS", "NEQ",
  "SHIFT_LEFT", "SHIFT_RIGHT", "S_AND", "S_OR", "S_XOR", "OR", "AST_DTOR",
  "OPERATOR", "TYPEDEF", "RSL", "RSR", "RSAND", "RSOR", "RSXOR",
  "TEMPLATE", "LTMPL", "RTMPL", "NOELSE", "UNION", "ATPAREN", "TYPEOF",
  "CONSTT", "AUTO", "PASTE", "ELLIPSE", "RARROW", "BACKSLASH", "NUM",
  "FLOATT", "ID", "STRING_LIT", "CHAR_LIT", "PP_COMMENT", "PP_INCLUDE",
  "PP_DEFINE", "PP_UNDEF", "PP_IFDEF", "PP_IFNDEF", "PP_ELSE", "PP_ENDIF",
  "PP_NL", "$accept", "prg", "ast", "section", "class_def", "class_ext",
  "class_body", "class_body2", "id_list", "id_dot", "dot_decl",
  "stmt_list", "func_type", "stmt_type", "type_decl_array",
  "type_decl_exp", "type_decl_empty", "arg", "arg_list", "fptr_arg",
  "fptr_list", "code_stmt", "stmt", "id", "opt_id", "enum_stmt",
  "label_stmt", "goto_stmt", "case_stmt", "switch_stmt", "loop_stmt",
  "selection_stmt", "jump_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "array", "decl_exp2",
  "decl_exp", "union_exp", "decl_exp3", "func_args", "arg_type",
  "decl_template", "storage_flag", "access_flag", "flag", "opt_flag",
  "func_def_base", "op_op", "func_def", "atsym", "type_decl0", "type_decl",
  "decl_list", "union_stmt", "var_decl_list", "var_decl", "arg_decl",
  "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op", "mul_op",
  "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp",
  "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp",
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

#define YYPACT_NINF -335

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-335)))

#define YYTABLE_NINF -84

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     531,  -335,  -335,  1598,  1250,  1312,   934,  -335,  -335,  -335,
    -335,    28,    50,  1034,    64,   114,   130,   -50,  1598,    33,
     101,  1134,    85,   103,  -335,  -335,    63,   128,   128,  -335,
    -335,  -335,  -335,  -335,   128,  1760,   101,    62,    63,   101,
    -335,   153,   -29,   -50,  -335,  -335,    74,  -335,  -335,   174,
    -335,   634,  -335,   152,  -335,  -335,  -335,  -335,  1034,     5,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,   180,
    1310,  -335,   172,  -335,  -335,  -335,  -335,    18,   104,  -335,
      63,  -335,  -335,  -335,   -50,  -335,  -335,    23,   125,   115,
     113,   119,    77,   106,    95,   110,   144,   164,  1652,  -335,
     128,  -335,  -335,    43,  1598,  -335,    46,   188,  1706,  -335,
     187,  -335,   186,  -335,   185,  1598,  1598,    39,  1598,  1598,
     392,   199,   128,   170,  -335,   171,    40,   179,  -335,   190,
    -335,   210,  -335,  -335,  -335,  -335,   123,   207,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
      63,  -335,  -335,  -335,  -335,    63,    63,   -50,  -335,   216,
     135,   -50,   -50,  -335,   -50,  -335,   -50,  -335,  -335,  -335,
    -335,  -335,  -335,   -50,  -335,  1598,  1598,  1374,  -335,   101,
     101,  -335,  -335,   207,  -335,   220,  1598,  1706,  1706,  1706,
    1706,  1706,  -335,  -335,  1706,  1706,  1706,  1706,  1706,    63,
      63,  -335,  -335,  1598,   -50,    63,   215,  -335,  -335,   217,
    -335,  -335,   218,  -335,   222,   223,  1598,  1598,   226,   227,
     152,  1196,  -335,  -335,  -335,  -335,  -335,   -50,  -335,  -335,
     219,   229,   -50,   141,   237,    63,   -50,  -335,   228,   232,
     189,  -335,  -335,  -335,  -335,  -335,  -335,    63,   -50,  -335,
     -50,   212,   125,   115,   113,   119,    77,   106,    95,   110,
     144,   164,  -335,   235,  -335,   161,  1428,  -335,  -335,  1490,
    -335,  1034,  1034,   247,   248,  1034,  1034,   -50,  1544,   238,
      63,    63,    21,  -335,   -50,  -335,   152,    36,   152,   -50,
     -50,   194,  -335,  1706,    63,  -335,  -335,   243,  -335,   221,
    -335,  -335,  -335,  -335,  -335,   225,  1034,   249,   -50,   254,
     -50,   250,  -335,    53,    14,   -50,  -335,  -335,   244,   260,
     -50,   251,  -335,  -335,   253,    63,   256,  -335,   257,  -335,
    1034,  1598,  -335,  1034,   262,    63,   207,  -335,   128,   261,
    -335,  -335,   263,  -335,   207,  -335,   -50,    63,  -335,   -50,
      63,    14,  -335,   734,   128,  -335,  1833,  -335,  -335,   266,
    -335,   172,  -335,    63,  -335,  -335,   172,   269,  -335,   270,
     274,  -335,   128,   834,   258,  -335,  -335,  1034,   128,  -335,
    -335,  -335,    63,  -335,  -335,  -335,  -335,  -335,  -335
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     122,    77,   202,     0,     0,     0,     0,   230,   229,   207,
     204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,     0,     0,   221,   222,     0,   205,   206,   123,
     124,   125,   126,   201,     0,     0,   130,     0,     0,   130,
     231,     0,     0,   216,   233,   234,    51,   235,   236,     0,
       2,   122,     8,   143,     6,    48,    49,    41,    22,   232,
      46,    42,    43,    45,    44,    39,    40,    47,    38,     0,
      78,   107,   108,   237,    80,   113,   110,     0,   128,   127,
       0,   138,     7,   148,     0,    50,   109,   177,   179,   181,
     183,   185,   187,   189,   191,   193,   195,   197,     0,   199,
       0,   203,   228,   208,     0,   224,   232,     0,     0,   242,
       0,   104,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   232,   228,    83,   224,   131,     0,
      72,     0,    74,    75,    28,   210,    20,    26,   211,   212,
     142,    84,   175,   174,   176,    88,    89,    90,    91,    92,
      87,    85,    93,    94,   100,    86,   169,   167,   168,   166,
     173,   172,   170,   171,    95,    96,    97,    98,    99,   133,
       0,   135,   134,   137,   136,     0,     0,     0,    29,   217,
       0,    54,     0,   149,   213,   215,     0,     1,     5,   144,
     145,    23,    56,     0,    76,     0,     0,     0,   106,   130,
     130,   129,   114,   156,   111,   154,     0,     0,     0,     0,
       0,     0,   164,   165,     0,     0,     0,     0,     0,     0,
       0,   209,   241,     0,     0,     0,     0,   225,   227,     0,
     239,   240,   101,    37,     0,     0,     0,     0,     0,     0,
     143,     0,    57,    61,    60,    59,    58,     0,    73,    27,
       0,     0,     0,     0,    16,     0,     0,    53,     0,     0,
      18,   214,    52,    21,    79,    81,   105,     0,     0,   157,
       0,     0,   180,   182,   184,   186,   188,   190,   192,   194,
     196,   198,   200,     0,   223,     0,     0,   226,   238,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,   218,   143,     0,   143,     0,
       0,    11,   155,     0,     0,    82,   220,     0,   103,    70,
      62,    63,    68,    67,    69,     0,     0,     0,    54,     0,
       0,     0,    25,   118,     0,    54,    17,   146,     0,     0,
       0,     0,   147,    19,     0,     0,     0,   178,     0,   219,
       0,     0,    64,     0,     0,     0,   158,    30,     0,    34,
     117,   120,     0,    24,   161,    33,    54,   150,   112,    54,
     116,     0,    10,   122,     0,    71,     0,    65,    55,     0,
     160,   159,   140,     0,   119,   163,   162,     0,   151,     0,
      31,   115,     0,   122,     0,    12,   141,     0,     0,    35,
     153,   152,     0,   132,    15,     9,    66,   139,    32
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -335,  -335,   236,  -328,  -335,  -335,  -335,  -110,  -218,  -171,
    -335,    29,  -335,  -335,   -16,   -57,  -150,  -190,  -334,   -43,
    -335,   -20,   -11,     0,  -287,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -104,   316,   -52,  -335,   259,   -63,  -283,
    -106,   107,   231,  -335,  -335,  -335,   -71,  -335,  -335,   224,
      -9,   -24,  -335,  -335,  -335,  -212,   264,    57,   -62,  -335,
      37,  -335,   -32,  -335,  -335,   279,   281,   282,   287,    12,
    -335,   120,   124,   122,   126,   132,   127,   118,   129,   131,
     134,     1,   -31,   160,  -335,  -189,  -335,   -12,   327,   328,
    -335,   330
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    49,    50,    51,    52,   346,   394,   395,   253,   259,
      53,    54,    55,    56,   178,   135,   179,   390,   391,   334,
     360,    57,    58,   136,   258,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,   226,   196,    71,    72,
      73,    74,    75,   339,    76,   371,   363,    77,    78,    79,
      80,   129,    81,   170,    82,   190,    83,    84,   341,    85,
     204,   205,   357,   365,   214,   215,   216,   217,   218,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   108,    99,   185,   100,   180,   287,   101,   102,   103,
     104,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,    98,   117,   106,   106,   106,    59,   138,   139,   198,
     134,   128,   176,    59,   140,   181,   241,   121,   106,   124,
     250,   106,   263,   175,   332,   251,   361,   128,   297,   299,
     128,   249,   333,   -20,   123,   114,   285,   338,   192,   115,
     227,   354,     3,   184,     4,   393,     5,   199,   364,   399,
      46,    59,    98,   223,   -83,   206,   223,    38,    59,     7,
       8,   116,    41,   227,   333,   393,   305,   221,   408,   282,
     283,    46,   200,   381,   -20,   118,   236,   221,   237,   387,
     222,   386,   389,   137,   203,   306,   336,   191,   132,    24,
      25,   228,    24,    25,   337,   137,   342,   269,   124,   207,
     224,   193,   243,   224,   106,   -20,   133,    38,   124,   362,
     329,   331,    41,    42,   228,   106,   106,   310,   106,   106,
     106,    46,    38,    40,   348,   119,   225,    41,    42,   225,
      43,    44,    45,    46,    47,    48,    46,   298,   343,    38,
     212,   120,   193,     6,    41,    42,   -20,   213,   177,    38,
     142,   143,   144,    46,    41,    42,    29,    30,    31,    32,
     252,    31,    32,    46,   182,   379,   162,   163,   186,   290,
     156,   157,   158,   159,   187,   267,   268,   254,   160,   161,
     189,   257,   260,   194,   184,   197,   262,   208,   210,   209,
     128,   128,   211,   260,   219,   106,   106,   106,   230,   231,
     232,   233,   242,   244,   245,   247,   106,   124,   124,   124,
     124,   124,   246,   248,   124,   124,   124,   124,   124,   193,
       5,   255,   256,   106,   284,   270,   286,   137,   303,   288,
     300,   289,   137,   137,   291,   292,   106,   106,   295,   296,
     301,   106,   304,   307,   308,   313,   314,   254,   315,   309,
     321,   322,   302,   345,   328,   349,   260,   350,   351,   355,
     366,   353,   358,   367,   370,   378,   383,   369,   311,   374,
     203,   373,   400,   401,   405,   384,   137,   137,   398,   402,
     319,   320,   137,   404,   323,   324,   106,   188,   372,   106,
     359,    59,    59,   380,   169,    59,    59,   325,   106,   376,
     392,   385,   201,   265,   254,   388,   183,   312,   368,   260,
     344,   202,   137,   124,   171,   352,   172,   173,   198,   107,
     110,   112,   174,   198,   137,   347,    59,   272,   257,   134,
     356,   274,   273,   278,   122,   257,   275,   131,   382,   375,
     356,   277,   377,   276,   261,   279,   125,   126,   280,   127,
      59,   106,   281,    59,   396,     0,     0,   330,   330,   335,
       0,     0,     0,     0,   340,     0,   257,     0,     0,   257,
       0,   330,   403,    59,    98,     0,     0,     0,   407,     0,
       0,     0,     0,     0,     0,     0,   406,     0,     0,     0,
     335,     0,     0,    59,    98,     1,     0,    59,     0,     2,
       0,     3,   137,     4,     0,     5,     0,     0,     0,     0,
       0,     0,   330,     0,     0,     0,     0,     0,     7,     8,
     229,     0,     0,     9,   340,     0,    10,   330,     0,     0,
       0,   234,   235,     0,   238,   239,     0,     0,     0,     0,
     330,    24,    25,    26,    27,    28,     0,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,   330,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,    40,    41,    42,   240,     0,     0,     0,    43,
      44,    45,    46,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   264,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,   271,     0,     0,     0,     0,     0,     0,     0,
       0,    -3,     0,     0,     1,     0,     0,     0,     2,   112,
       3,     0,     4,     0,     5,     0,     6,     0,     0,     0,
       0,     0,   293,   294,     0,     0,     0,     7,     8,     0,
       0,     0,     9,     0,     0,    10,    11,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,   317,     0,     0,   112,     0,     0,    34,    35,
      36,     0,     0,     0,   327,     0,    37,    38,     0,     0,
      39,    40,    41,    42,     0,     0,     0,     0,    43,    44,
      45,    46,    47,    48,    -4,     0,     0,     1,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,     0,    10,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,     0,     0,     0,     0,     0,    37,
      38,     0,     0,    39,    40,    41,    42,     0,     0,     0,
       0,    43,    44,    45,    46,    47,    48,     1,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     6,
     -13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,     0,    10,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,     0,     0,     0,     0,     0,    37,
      38,     0,     0,    39,    40,    41,    42,     0,     0,     0,
       0,    43,    44,    45,    46,    47,    48,     1,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     6,
     -14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,     0,    10,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,     0,     0,     0,     0,     0,    37,
      38,     0,     0,    39,    40,    41,    42,     0,     0,     0,
       0,    43,    44,    45,    46,    47,    48,     1,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     6,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,     0,    10,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
      38,     0,     0,    39,    40,    41,    42,     0,     0,     0,
       0,    43,    44,    45,    46,    47,    48,     1,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,     0,    10,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
      38,     0,     0,    39,    40,    41,    42,     0,     0,     0,
       0,    43,    44,    45,    46,    47,    48,   130,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,    28,     0,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     1,
       0,     0,    33,     2,     0,     3,     0,     4,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     7,     8,    40,    41,    42,     9,     0,     0,
      10,    43,    44,    45,    46,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,    28,
       0,    29,    30,    31,    32,     0,     0,     2,     0,     3,
       0,     4,   109,     5,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,    38,     0,    10,     0,    40,    41,    42,     0,
       0,     0,     0,    43,    44,    45,    46,    47,    48,    24,
      25,    26,    27,    28,     0,    29,    30,    31,    32,     0,
       0,     0,     0,     0,   141,   195,     0,     0,    33,     2,
       0,     3,     0,     4,     0,     5,   111,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    38,     0,     7,     8,
      40,    41,    42,     9,     0,     0,    10,    43,    44,    45,
      46,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,     0,    29,    30,    31,
      32,   154,     0,   155,     0,     0,     0,     0,     0,     0,
      33,     2,     0,     3,     0,     4,     0,     5,   266,     0,
     164,   165,   166,   167,   168,     0,     0,     0,    38,     0,
       7,     8,    40,    41,    42,     9,     0,     0,    10,    43,
      44,    45,    46,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,    28,     0,    29,
      30,    31,    32,     0,     0,     2,     0,     3,     0,     4,
     316,     5,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
      38,     0,    10,     0,    40,    41,    42,     0,     0,     0,
       0,    43,    44,    45,    46,    47,    48,    24,    25,    26,
      27,    28,     0,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     2,     0,     3,
       0,     4,     0,     5,   318,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     7,     8,    40,    41,
      42,     9,     0,     0,    10,    43,    44,    45,    46,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,     0,    29,    30,    31,    32,     0,
       0,     2,     0,     3,     0,     4,   326,     5,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,    38,     0,    10,     0,
      40,    41,    42,     0,     0,     0,     0,    43,    44,    45,
      46,    47,    48,    24,    25,    26,    27,    28,     0,    29,
      30,    31,    32,     0,     0,     2,     0,     3,     0,     4,
       0,     5,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
      38,     0,    10,     0,    40,    41,    42,     0,     0,     0,
       0,    43,    44,    45,    46,    47,    48,    24,    25,    26,
      27,    28,     0,    29,    30,    31,    32,     0,     0,     2,
       0,     3,     0,     4,     0,     5,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,    38,     0,    10,     0,    40,    41,
      42,     0,     0,     0,     0,    43,    44,    45,    46,    47,
      48,    24,    25,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     4,     0,     5,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     220,     0,     7,     8,     0,     0,     0,     9,     0,     0,
      10,     0,    40,     0,     0,     0,     0,     0,     0,    43,
      44,    45,    46,    47,    48,    24,    25,    26,    27,    28,
       0,     0,     0,     0,   141,     0,   142,   143,   144,     0,
       0,     0,     0,     0,    33,     0,     0,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     0,     0,
       0,     0,     0,    43,    44,    45,    46,    47,    48,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   154,     0,   155,   156,   157,   158,   159,   160,   161,
       0,   162,   163,     0,     0,     0,     0,   141,     0,     0,
     164,   165,   166,   167,   168,   397,     0,     0,     0,     0,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   154,     0,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,   165,   166,   167,   168
};

static const yytype_int16 yycheck[] =
{
       0,     0,    13,     3,     4,     5,     6,    27,    28,    72,
      26,    20,    36,    13,    34,    39,   120,    17,    18,    19,
     170,    21,   193,    35,     3,   175,    12,    36,   240,   247,
      39,   137,    11,    28,     1,     6,   225,     1,    33,    11,
     103,   328,     9,    43,    11,   373,    13,    29,   335,   383,
     100,    51,    51,    13,    11,    32,    13,    86,    58,    26,
      27,    11,    91,   126,    11,   393,   255,    98,   402,   219,
     220,   100,    54,   356,    28,    11,    37,   108,    39,   366,
     100,   364,   369,    26,    84,   256,   304,    58,     3,    49,
      50,   103,    49,    50,   306,    38,   308,   203,    98,    76,
      60,    96,   122,    60,   104,   100,     3,    86,   108,    95,
     300,   301,    91,    92,   126,   115,   116,   267,   118,   119,
     120,   100,    86,    90,   314,    11,    86,    91,    92,    86,
      97,    98,    99,   100,   101,   102,   100,   241,   309,    86,
      63,    11,    96,    15,    91,    92,   100,    70,    86,    86,
       6,     7,     8,   100,    91,    92,    55,    56,    57,    58,
     176,    57,    58,   100,    11,   355,    71,    72,    94,   232,
      64,    65,    66,    67,     0,   199,   200,   177,    68,    69,
      28,   181,   182,     3,   184,    13,   186,    62,    75,    74,
     199,   200,    73,   193,    30,   195,   196,   197,    10,    12,
      14,    16,     3,    33,    33,    15,   206,   207,   208,   209,
     210,   211,    33,     3,   214,   215,   216,   217,   218,    96,
      13,     5,    87,   223,   224,     5,    11,   170,    87,    12,
      11,    13,   175,   176,    12,    12,   236,   237,    12,    12,
      11,   241,     5,    15,    12,    33,    11,   247,    87,    60,
       3,     3,   252,    59,    16,    12,   256,    36,    33,     5,
      16,    12,    12,     3,    11,     3,     5,    16,   268,    12,
     270,    15,     3,     3,    16,    12,   219,   220,    12,     5,
     291,   292,   225,   393,   295,   296,   286,    51,   345,   289,
     333,   291,   292,   356,    35,   295,   296,   297,   298,   351,
     371,   364,    78,   196,   304,   367,    42,   270,   340,   309,
     310,    80,   255,   313,    35,   326,    35,    35,   381,     3,
       4,     5,    35,   386,   267,   313,   326,   207,   328,   345,
     330,   209,   208,   215,    18,   335,   210,    21,   358,   350,
     340,   214,   353,   211,   184,   216,    19,    19,   217,    19,
     350,   351,   218,   353,   374,    -1,    -1,   300,   301,   302,
      -1,    -1,    -1,    -1,   307,    -1,   366,    -1,    -1,   369,
      -1,   314,   392,   373,   373,    -1,    -1,    -1,   398,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   397,    -1,    -1,    -1,
     333,    -1,    -1,   393,   393,     3,    -1,   397,    -1,     7,
      -1,     9,   345,    11,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,   355,    -1,    -1,    -1,    -1,    -1,    26,    27,
     104,    -1,    -1,    31,   367,    -1,    34,   370,    -1,    -1,
      -1,   115,   116,    -1,   118,   119,    -1,    -1,    -1,    -1,
     383,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   402,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   195,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     0,    -1,    -1,     3,    -1,    -1,    -1,     7,   223,
       9,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,   236,   237,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,   286,    -1,    -1,   289,    -1,    -1,    77,    78,
      79,    -1,    -1,    -1,   298,    -1,    85,    86,    -1,    -1,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,   101,   102,     0,    -1,    -1,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    68,     7,    -1,     9,    -1,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    26,    27,    90,    91,    92,    31,    -1,    -1,
      34,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    -1,     7,    -1,     9,
      -1,    11,    12,    13,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    86,    -1,    34,    -1,    90,    91,    92,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,   101,   102,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,     4,     5,    -1,    -1,    68,     7,
      -1,     9,    -1,    11,    -1,    13,    14,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    86,    -1,    26,    27,
      90,    91,    92,    31,    -1,    -1,    34,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      68,     7,    -1,     9,    -1,    11,    -1,    13,    14,    -1,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    86,    -1,
      26,    27,    90,    91,    92,    31,    -1,    -1,    34,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    -1,     7,    -1,     9,    -1,    11,
      12,    13,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      86,    -1,    34,    -1,    90,    91,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,     7,    -1,     9,
      -1,    11,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    26,    27,    90,    91,
      92,    31,    -1,    -1,    34,    97,    98,    99,   100,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    -1,
      -1,     7,    -1,     9,    -1,    11,    12,    13,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    86,    -1,    34,    -1,
      90,    91,    92,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,   101,   102,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      86,    -1,    34,    -1,    90,    91,    92,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    -1,     7,
      -1,     9,    -1,    11,    -1,    13,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    86,    -1,    34,    -1,    90,    91,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,   100,   101,
     102,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,   101,   102,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    63,    64,    65,    66,    67,    68,    69,
      -1,    71,    72,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      80,    81,    82,    83,    84,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     9,    11,    13,    15,    26,    27,    31,
      34,    35,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    55,
      56,    57,    58,    68,    77,    78,    79,    85,    86,    89,
      90,    91,    92,    97,    98,    99,   100,   101,   102,   113,
     114,   115,   116,   122,   123,   124,   125,   133,   134,   135,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   150,   151,   152,   153,   154,   156,   159,   160,   161,
     162,   164,   166,   168,   169,   171,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     196,   199,   200,   201,   202,   203,   135,   146,   193,    12,
     146,    14,   146,    16,   123,    11,    11,   134,    11,    11,
      11,   135,   146,     1,   135,   200,   201,   203,   162,   163,
       3,   146,     3,     3,   126,   127,   135,   169,   133,   133,
     133,     4,     6,     7,     8,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    61,    63,    64,    65,    66,    67,
      68,    69,    71,    72,    80,    81,    82,    83,    84,   149,
     165,   177,   178,   179,   180,   199,   163,    86,   126,   128,
     197,   163,    11,   168,   135,   195,    94,     0,   114,    28,
     167,   123,    33,    96,     3,     5,   149,    13,   150,    29,
      54,   161,   154,   135,   172,   173,    32,    76,    62,    74,
      75,    73,    63,    70,   176,   177,   178,   179,   180,    30,
      78,   194,   133,    13,    60,    86,   148,   150,   199,   146,
      10,    12,    14,    16,   146,   146,    37,    39,   146,   146,
      93,   145,     3,   133,    33,    33,    33,    15,     3,   152,
     128,   128,   126,   120,   135,     5,    87,   135,   136,   121,
     135,   195,   135,   121,   146,   153,    14,   163,   163,   152,
       5,   146,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   128,   128,   135,   197,    11,   198,    12,    13,
     150,    12,    12,   146,   146,    12,    12,   167,   145,   120,
      11,    11,   135,    87,     5,   197,   121,    15,    12,    60,
     128,   135,   172,    33,    11,    87,    12,   146,    14,   134,
     134,     3,     3,   134,   134,   135,    12,   146,    16,   129,
     169,   129,     3,    11,   131,   169,   120,   167,     1,   155,
     169,   170,   167,   121,   135,    59,   117,   181,   129,    12,
      36,    33,   134,    12,   136,     5,   135,   174,    12,   131,
     132,    12,    95,   158,   136,   175,    16,     3,   174,    16,
      11,   157,   127,    15,    12,   134,   147,   134,     3,   129,
     150,   151,   133,     5,    12,   150,   151,   136,   170,   136,
     129,   130,   158,   115,   118,   119,   133,    12,    12,   130,
       3,     3,     5,   133,   119,    16,   134,   133,   130
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   113,   114,   114,   115,   115,   115,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   123,   123,   124,   125,   126,   126,   127,   128,
     129,   130,   130,   131,   132,   132,   133,   133,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   135,   135,   136,   136,   137,   138,   139,   140,   140,
     140,   141,   142,   142,   142,   142,   142,   142,   142,   142,
     143,   143,   144,   144,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   151,   151,   151,   152,   152,   153,
     153,   154,   155,   156,   156,   157,   157,   131,   131,   158,
     158,   159,   159,   160,   160,   161,   161,   162,   162,   162,
     163,   163,   164,   165,   165,   165,   165,   165,   166,   166,
     166,   166,   166,   167,   167,   168,   168,   168,   169,   169,
     170,   170,   171,   171,   172,   172,   173,   173,   174,   174,
     174,   175,   175,   175,   176,   176,   177,   177,   177,   177,
     178,   178,   179,   179,   180,   180,   180,   181,   181,   182,
     182,   183,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   189,   189,   190,   190,   191,   191,   192,
     192,   193,   193,   193,   193,   193,   193,   193,   194,   194,
     194,   194,   194,   195,   195,   196,   196,   197,   197,   198,
     198,   199,   199,   200,   201,   201,   201,   201,   201,   202,
     202,   202,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     8,
       2,     0,     1,     0,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     2,     6,     5,     1,     2,     1,     1,
       2,     1,     3,     2,     1,     3,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     7,     2,     3,     3,     3,
       3,     3,     5,     5,     6,     7,     9,     5,     5,     5,
       5,     7,     2,     3,     2,     2,     2,     1,     1,     3,
       1,     3,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     5,     2,     3,     2,     1,     1,     1,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     2,
       1,     4,     0,     1,     1,     1,     1,     1,     1,     2,
       0,     1,     8,     1,     1,     1,     1,     1,     1,     9,
       7,     7,     2,     0,     1,     2,     5,     5,     1,     2,
       2,     3,     8,     8,     1,     3,     1,     2,     1,     2,
       2,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     2,     2,     1,     1,     3,     3,
       2,     1,     1,     3,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     2,     2
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Scanner* arg)
{
  YYUSE (yyvaluep);
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
#line 107 "ly/gwion.y" /* yacc.c:1652  */
    { arg->ast = (yyvsp[0].ast); }
#line 2124 "src/parser.c" /* yacc.c:1652  */
    break;

  case 3:
#line 108 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "file is empty.\n"); YYERROR; }
#line 2130 "src/parser.c" /* yacc.c:1652  */
    break;

  case 4:
#line 111 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast((yyvsp[0].section), NULL); }
#line 2136 "src/parser.c" /* yacc.c:1652  */
    break;

  case 5:
#line 112 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast((yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2142 "src/parser.c" /* yacc.c:1652  */
    break;

  case 6:
#line 116 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_stmt_list((yyvsp[0].stmt_list)); }
#line 2148 "src/parser.c" /* yacc.c:1652  */
    break;

  case 7:
#line 117 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_func_def ((yyvsp[0].func_def)); }
#line 2154 "src/parser.c" /* yacc.c:1652  */
    break;

  case 8:
#line 118 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_class_def((yyvsp[0].class_def)); }
#line 2160 "src/parser.c" /* yacc.c:1652  */
    break;

  case 9:
#line 123 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_def) = new_class_def((yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].class_body));
      if((yyvsp[-7].id_list))
        (yyval.class_def)->tmpl = new_tmpl_class((yyvsp[-7].id_list), -1);
  }
#line 2169 "src/parser.c" /* yacc.c:1652  */
    break;

  case 10:
#line 128 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2175 "src/parser.c" /* yacc.c:1652  */
    break;

  case 11:
#line 128 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = NULL; }
#line 2181 "src/parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 130 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = NULL; }
#line 2187 "src/parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 133 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body((yyvsp[0].section), NULL); }
#line 2193 "src/parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 134 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body((yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2199 "src/parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 137 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2205 "src/parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 137 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2211 "src/parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 138 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2217 "src/parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 138 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2223 "src/parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 139 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2229 "src/parser.c" /* yacc.c:1652  */
    break;

  case 21:
#line 139 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2235 "src/parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 141 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[0].stmt), NULL);}
#line 2241 "src/parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 141 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2247 "src/parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 143 "ly/gwion.y" /* yacc.c:1652  */
    {
  if((yyvsp[-3].type_decl)->array && !(yyvsp[-3].type_decl)->array->exp)
    { gwion_error(arg, "type must be defined with empty []'s"); YYERROR;}
(yyval.stmt) = new_stmt_fptr((yyvsp[-2].sym), (yyvsp[-3].type_decl), (yyvsp[-1].arg_list), (yyvsp[0].flag)); (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag); }
#line 2256 "src/parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 147 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_type((yyvsp[-2].type_decl), (yyvsp[-1].sym)); (yyvsp[-2].type_decl)->flag |= (yyvsp[-3].flag); }
#line 2262 "src/parser.c" /* yacc.c:1652  */
    break;

  case 27:
#line 149 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2268 "src/parser.c" /* yacc.c:1652  */
    break;

  case 28:
#line 151 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2276 "src/parser.c" /* yacc.c:1652  */
    break;

  case 29:
#line 155 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2284 "src/parser.c" /* yacc.c:1652  */
    break;

  case 30:
#line 159 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list((yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2290 "src/parser.c" /* yacc.c:1652  */
    break;

  case 31:
#line 160 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2296 "src/parser.c" /* yacc.c:1652  */
    break;

  case 32:
#line 160 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2302 "src/parser.c" /* yacc.c:1652  */
    break;

  case 33:
#line 161 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list((yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2308 "src/parser.c" /* yacc.c:1652  */
    break;

  case 34:
#line 162 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2314 "src/parser.c" /* yacc.c:1652  */
    break;

  case 35:
#line 162 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2320 "src/parser.c" /* yacc.c:1652  */
    break;

  case 36:
#line 165 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(ae_stmt_code, get_pos(arg)); }
#line 2326 "src/parser.c" /* yacc.c:1652  */
    break;

  case 37:
#line 166 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_code((yyvsp[-1].stmt_list)); }
#line 2332 "src/parser.c" /* yacc.c:1652  */
    break;

  case 51:
#line 188 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2338 "src/parser.c" /* yacc.c:1652  */
    break;

  case 52:
#line 189 "ly/gwion.y" /* yacc.c:1652  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2348 "src/parser.c" /* yacc.c:1652  */
    break;

  case 54:
#line 196 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = NULL; }
#line 2354 "src/parser.c" /* yacc.c:1652  */
    break;

  case 55:
#line 199 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_enum((yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2361 "src/parser.c" /* yacc.c:1652  */
    break;

  case 56:
#line 202 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 1, get_pos(arg)); }
#line 2367 "src/parser.c" /* yacc.c:1652  */
    break;

  case 57:
#line 204 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 0, get_pos(arg)); }
#line 2373 "src/parser.c" /* yacc.c:1652  */
    break;

  case 58:
#line 207 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2379 "src/parser.c" /* yacc.c:1652  */
    break;

  case 59:
#line 208 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2385 "src/parser.c" /* yacc.c:1652  */
    break;

  case 60:
#line 209 "ly/gwion.y" /* yacc.c:1652  */
    { gw_err("unhandled expression type in case statement.\n"); YYERROR; }
#line 2391 "src/parser.c" /* yacc.c:1652  */
    break;

  case 61:
#line 212 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_switch((yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2397 "src/parser.c" /* yacc.c:1652  */
    break;

  case 62:
#line 216 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2403 "src/parser.c" /* yacc.c:1652  */
    break;

  case 63:
#line 218 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2409 "src/parser.c" /* yacc.c:1652  */
    break;

  case 64:
#line 220 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2415 "src/parser.c" /* yacc.c:1652  */
    break;

  case 65:
#line 222 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2421 "src/parser.c" /* yacc.c:1652  */
    break;

  case 66:
#line 224 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_auto((yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2427 "src/parser.c" /* yacc.c:1652  */
    break;

  case 67:
#line 226 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2433 "src/parser.c" /* yacc.c:1652  */
    break;

  case 68:
#line 228 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2439 "src/parser.c" /* yacc.c:1652  */
    break;

  case 69:
#line 230 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_loop((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2445 "src/parser.c" /* yacc.c:1652  */
    break;

  case 70:
#line 235 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2451 "src/parser.c" /* yacc.c:1652  */
    break;

  case 71:
#line 237 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2457 "src/parser.c" /* yacc.c:1652  */
    break;

  case 72:
#line 241 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(ae_stmt_return, get_pos(arg)); (yyval.stmt)->d.stmt_exp.self = (yyval.stmt); }
#line 2463 "src/parser.c" /* yacc.c:1652  */
    break;

  case 73:
#line 242 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_return, (yyvsp[-1].exp)); }
#line 2469 "src/parser.c" /* yacc.c:1652  */
    break;

  case 74:
#line 243 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(ae_stmt_break, get_pos(arg)); }
#line 2475 "src/parser.c" /* yacc.c:1652  */
    break;

  case 75:
#line 244 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(ae_stmt_continue, get_pos(arg)); }
#line 2481 "src/parser.c" /* yacc.c:1652  */
    break;

  case 76:
#line 248 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2487 "src/parser.c" /* yacc.c:1652  */
    break;

  case 77:
#line 249 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(ae_stmt_exp, get_pos(arg)); }
#line 2493 "src/parser.c" /* yacc.c:1652  */
    break;

  case 79:
#line 252 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2499 "src/parser.c" /* yacc.c:1652  */
    break;

  case 81:
#line 254 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 2505 "src/parser.c" /* yacc.c:1652  */
    break;

  case 82:
#line 256 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2511 "src/parser.c" /* yacc.c:1652  */
    break;

  case 83:
#line 256 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = NULL; }
#line 2517 "src/parser.c" /* yacc.c:1652  */
    break;

  case 84:
#line 258 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_chuck; }
#line 2523 "src/parser.c" /* yacc.c:1652  */
    break;

  case 85:
#line 258 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_unchuck; }
#line 2529 "src/parser.c" /* yacc.c:1652  */
    break;

  case 86:
#line 258 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_eq; }
#line 2535 "src/parser.c" /* yacc.c:1652  */
    break;

  case 87:
#line 259 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_ref; }
#line 2541 "src/parser.c" /* yacc.c:1652  */
    break;

  case 88:
#line 259 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_radd; }
#line 2547 "src/parser.c" /* yacc.c:1652  */
    break;

  case 89:
#line 260 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsub; }
#line 2553 "src/parser.c" /* yacc.c:1652  */
    break;

  case 90:
#line 260 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rmul; }
#line 2559 "src/parser.c" /* yacc.c:1652  */
    break;

  case 91:
#line 261 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rdiv; }
#line 2565 "src/parser.c" /* yacc.c:1652  */
    break;

  case 92:
#line 261 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rmod; }
#line 2571 "src/parser.c" /* yacc.c:1652  */
    break;

  case 93:
#line 262 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_trig; }
#line 2577 "src/parser.c" /* yacc.c:1652  */
    break;

  case 94:
#line 262 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_untrig; }
#line 2583 "src/parser.c" /* yacc.c:1652  */
    break;

  case 95:
#line 263 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsl; }
#line 2589 "src/parser.c" /* yacc.c:1652  */
    break;

  case 96:
#line 263 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsr; }
#line 2595 "src/parser.c" /* yacc.c:1652  */
    break;

  case 97:
#line 263 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsand; }
#line 2601 "src/parser.c" /* yacc.c:1652  */
    break;

  case 98:
#line 264 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsor; }
#line 2607 "src/parser.c" /* yacc.c:1652  */
    break;

  case 99:
#line 264 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsxor; }
#line 2613 "src/parser.c" /* yacc.c:1652  */
    break;

  case 100:
#line 264 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_coloncolon; }
#line 2619 "src/parser.c" /* yacc.c:1652  */
    break;

  case 101:
#line 268 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub((yyvsp[-1].exp)); }
#line 2625 "src/parser.c" /* yacc.c:1652  */
    break;

  case 102:
#line 269 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[-2].exp)->next){ gwion_error(arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2631 "src/parser.c" /* yacc.c:1652  */
    break;

  case 103:
#line 270 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "partially empty array init [...][]..."); YYERROR; }
#line 2637 "src/parser.c" /* yacc.c:1652  */
    break;

  case 104:
#line 274 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(NULL); }
#line 2643 "src/parser.c" /* yacc.c:1652  */
    break;

  case 105:
#line 275 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2649 "src/parser.c" /* yacc.c:1652  */
    break;

  case 106:
#line 276 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "partially empty array init [][...]"); YYERROR; }
#line 2655 "src/parser.c" /* yacc.c:1652  */
    break;

  case 111:
#line 281 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl((yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2661 "src/parser.c" /* yacc.c:1652  */
    break;

  case 112:
#line 282 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl((yyvsp[-1].type_decl), new_var_decl_list((yyvsp[0].var_decl), NULL)); }
#line 2667 "src/parser.c" /* yacc.c:1652  */
    break;

  case 114:
#line 283 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2673 "src/parser.c" /* yacc.c:1652  */
    break;

  case 115:
#line 285 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2679 "src/parser.c" /* yacc.c:1652  */
    break;

  case 116:
#line 285 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2685 "src/parser.c" /* yacc.c:1652  */
    break;

  case 117:
#line 286 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2691 "src/parser.c" /* yacc.c:1652  */
    break;

  case 118:
#line 286 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2697 "src/parser.c" /* yacc.c:1652  */
    break;

  case 119:
#line 287 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2703 "src/parser.c" /* yacc.c:1652  */
    break;

  case 120:
#line 287 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2709 "src/parser.c" /* yacc.c:1652  */
    break;

  case 121:
#line 289 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2715 "src/parser.c" /* yacc.c:1652  */
    break;

  case 122:
#line 289 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = NULL; }
#line 2721 "src/parser.c" /* yacc.c:1652  */
    break;

  case 123:
#line 291 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_static; }
#line 2727 "src/parser.c" /* yacc.c:1652  */
    break;

  case 124:
#line 292 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_global; }
#line 2733 "src/parser.c" /* yacc.c:1652  */
    break;

  case 125:
#line 295 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_private; }
#line 2739 "src/parser.c" /* yacc.c:1652  */
    break;

  case 126:
#line 296 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_protect; }
#line 2745 "src/parser.c" /* yacc.c:1652  */
    break;

  case 127:
#line 299 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2751 "src/parser.c" /* yacc.c:1652  */
    break;

  case 128:
#line 300 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2757 "src/parser.c" /* yacc.c:1652  */
    break;

  case 129:
#line 301 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2763 "src/parser.c" /* yacc.c:1652  */
    break;

  case 130:
#line 304 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2769 "src/parser.c" /* yacc.c:1652  */
    break;

  case 131:
#line 304 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2775 "src/parser.c" /* yacc.c:1652  */
    break;

  case 132:
#line 308 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[0].stmt), (yyvsp[-5].flag) | (yyvsp[-1].flag));
    if((yyvsp[-7].id_list)) {
      SET_FLAG((yyval.func_def), template);
      (yyval.func_def)->tmpl = new_tmpl_list((yyvsp[-7].id_list), -1);
    }
  }
#line 2786 "src/parser.c" /* yacc.c:1652  */
    break;

  case 139:
#line 319 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def((yyvsp[-6].type_decl), OP_SYM((yyvsp[-7].ival)), (yyvsp[-4].arg_list), (yyvsp[0].stmt), ae_flag_op); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2792 "src/parser.c" /* yacc.c:1652  */
    break;

  case 140:
#line 321 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), OP_SYM((yyvsp[-5].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op); }
#line 2798 "src/parser.c" /* yacc.c:1652  */
    break;

  case 141:
#line 323 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), OP_SYM((yyvsp[-6].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary); }
#line 2804 "src/parser.c" /* yacc.c:1652  */
    break;

  case 142:
#line 325 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(new_type_decl(new_id_list(insert_symbol("void"), get_pos(arg)), 0),
       insert_symbol("dtor"), NULL, (yyvsp[0].stmt), ae_flag_dtor); }
#line 2811 "src/parser.c" /* yacc.c:1652  */
    break;

  case 143:
#line 329 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = 0; }
#line 2817 "src/parser.c" /* yacc.c:1652  */
    break;

  case 144:
#line 329 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_flag_ref; }
#line 2823 "src/parser.c" /* yacc.c:1652  */
    break;

  case 145:
#line 332 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-1].id_list), (yyvsp[0].ival)); }
#line 2829 "src/parser.c" /* yacc.c:1652  */
    break;

  case 146:
#line 333 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-1].id_list), (yyvsp[0].ival));
      (yyval.type_decl)->types = (yyvsp[-3].type_list); }
#line 2836 "src/parser.c" /* yacc.c:1652  */
    break;

  case 147:
#line 335 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-2].id_list), (yyvsp[0].ival)); (yyval.type_decl)->xid->ref = 1; }
#line 2842 "src/parser.c" /* yacc.c:1652  */
    break;

  case 148:
#line 338 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2848 "src/parser.c" /* yacc.c:1652  */
    break;

  case 149:
#line 339 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 2854 "src/parser.c" /* yacc.c:1652  */
    break;

  case 150:
#line 341 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-1].exp), NULL); }
#line 2860 "src/parser.c" /* yacc.c:1652  */
    break;

  case 151:
#line 342 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2866 "src/parser.c" /* yacc.c:1652  */
    break;

  case 152:
#line 345 "ly/gwion.y" /* yacc.c:1652  */
    {
      (yyval.stmt) = new_stmt_union((yyvsp[-3].decl_list), get_pos(arg));
      (yyval.stmt)->d.stmt_union.type_xid = (yyvsp[-5].sym);
      (yyval.stmt)->d.stmt_union.xid = (yyvsp[-1].sym);
      (yyval.stmt)->d.stmt_union.flag = (yyvsp[-6].flag);
    }
#line 2877 "src/parser.c" /* yacc.c:1652  */
    break;

  case 153:
#line 351 "ly/gwion.y" /* yacc.c:1652  */
    {
    gwion_error(arg, "Unions should only contain declarations.");
    YYERROR;
    }
#line 2886 "src/parser.c" /* yacc.c:1652  */
    break;

  case 154:
#line 358 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[0].var_decl), NULL); }
#line 2892 "src/parser.c" /* yacc.c:1652  */
    break;

  case 155:
#line 359 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2898 "src/parser.c" /* yacc.c:1652  */
    break;

  case 156:
#line 362 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2904 "src/parser.c" /* yacc.c:1652  */
    break;

  case 157:
#line 363 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2910 "src/parser.c" /* yacc.c:1652  */
    break;

  case 158:
#line 365 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2916 "src/parser.c" /* yacc.c:1652  */
    break;

  case 159:
#line 366 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2922 "src/parser.c" /* yacc.c:1652  */
    break;

  case 160:
#line 367 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2928 "src/parser.c" /* yacc.c:1652  */
    break;

  case 161:
#line 368 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2934 "src/parser.c" /* yacc.c:1652  */
    break;

  case 162:
#line 369 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2940 "src/parser.c" /* yacc.c:1652  */
    break;

  case 163:
#line 370 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2946 "src/parser.c" /* yacc.c:1652  */
    break;

  case 164:
#line 372 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_eq; }
#line 2952 "src/parser.c" /* yacc.c:1652  */
    break;

  case 165:
#line 372 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_ne; }
#line 2958 "src/parser.c" /* yacc.c:1652  */
    break;

  case 166:
#line 373 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_lt; }
#line 2964 "src/parser.c" /* yacc.c:1652  */
    break;

  case 167:
#line 373 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_gt; }
#line 2970 "src/parser.c" /* yacc.c:1652  */
    break;

  case 168:
#line 373 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_le; }
#line 2976 "src/parser.c" /* yacc.c:1652  */
    break;

  case 169:
#line 373 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_ge; }
#line 2982 "src/parser.c" /* yacc.c:1652  */
    break;

  case 170:
#line 374 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_shl; }
#line 2988 "src/parser.c" /* yacc.c:1652  */
    break;

  case 171:
#line 374 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_shr; }
#line 2994 "src/parser.c" /* yacc.c:1652  */
    break;

  case 172:
#line 375 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_add; }
#line 3000 "src/parser.c" /* yacc.c:1652  */
    break;

  case 173:
#line 375 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_sub; }
#line 3006 "src/parser.c" /* yacc.c:1652  */
    break;

  case 174:
#line 376 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_mul; }
#line 3012 "src/parser.c" /* yacc.c:1652  */
    break;

  case 175:
#line 376 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_div; }
#line 3018 "src/parser.c" /* yacc.c:1652  */
    break;

  case 176:
#line 376 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_mod; }
#line 3024 "src/parser.c" /* yacc.c:1652  */
    break;

  case 178:
#line 378 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_if((yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3030 "src/parser.c" /* yacc.c:1652  */
    break;

  case 180:
#line 380 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_or, (yyvsp[0].exp)); }
#line 3036 "src/parser.c" /* yacc.c:1652  */
    break;

  case 182:
#line 381 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_and, (yyvsp[0].exp)); }
#line 3042 "src/parser.c" /* yacc.c:1652  */
    break;

  case 184:
#line 382 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sor, (yyvsp[0].exp)); }
#line 3048 "src/parser.c" /* yacc.c:1652  */
    break;

  case 186:
#line 383 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sxor, (yyvsp[0].exp)); }
#line 3054 "src/parser.c" /* yacc.c:1652  */
    break;

  case 188:
#line 384 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sand, (yyvsp[0].exp)); }
#line 3060 "src/parser.c" /* yacc.c:1652  */
    break;

  case 190:
#line 385 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3066 "src/parser.c" /* yacc.c:1652  */
    break;

  case 192:
#line 386 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3072 "src/parser.c" /* yacc.c:1652  */
    break;

  case 194:
#line 387 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3078 "src/parser.c" /* yacc.c:1652  */
    break;

  case 196:
#line 388 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3084 "src/parser.c" /* yacc.c:1652  */
    break;

  case 198:
#line 389 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3090 "src/parser.c" /* yacc.c:1652  */
    break;

  case 200:
#line 392 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_cast((yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3096 "src/parser.c" /* yacc.c:1652  */
    break;

  case 201:
#line 394 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_sub; }
#line 3102 "src/parser.c" /* yacc.c:1652  */
    break;

  case 202:
#line 394 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_mul; }
#line 3108 "src/parser.c" /* yacc.c:1652  */
    break;

  case 204:
#line 396 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_not; }
#line 3114 "src/parser.c" /* yacc.c:1652  */
    break;

  case 205:
#line 396 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_spork; }
#line 3120 "src/parser.c" /* yacc.c:1652  */
    break;

  case 206:
#line 396 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_fork; }
#line 3126 "src/parser.c" /* yacc.c:1652  */
    break;

  case 207:
#line 396 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_cmp; }
#line 3132 "src/parser.c" /* yacc.c:1652  */
    break;

  case 209:
#line 399 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary((yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3138 "src/parser.c" /* yacc.c:1652  */
    break;

  case 210:
#line 400 "ly/gwion.y" /* yacc.c:1652  */
    {(yyval.exp) = new_exp_unary2(op_new, (yyvsp[0].type_decl)); }
#line 3144 "src/parser.c" /* yacc.c:1652  */
    break;

  case 211:
#line 401 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(op_spork, (yyvsp[0].stmt)); }
#line 3150 "src/parser.c" /* yacc.c:1652  */
    break;

  case 212:
#line 402 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(op_fork, (yyvsp[0].stmt)); }
#line 3156 "src/parser.c" /* yacc.c:1652  */
    break;

  case 213:
#line 405 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(NULL, new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)), NULL); }
#line 3162 "src/parser.c" /* yacc.c:1652  */
    break;

  case 214:
#line 406 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(NULL, new_var_decl((yyvsp[-1].sym), NULL, get_pos(arg)), (yyvsp[0].arg_list)); }
#line 3168 "src/parser.c" /* yacc.c:1652  */
    break;

  case 215:
#line 407 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3174 "src/parser.c" /* yacc.c:1652  */
    break;

  case 216:
#line 407 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 3180 "src/parser.c" /* yacc.c:1652  */
    break;

  case 217:
#line 410 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list((yyvsp[0].type_decl), NULL); }
#line 3186 "src/parser.c" /* yacc.c:1652  */
    break;

  case 218:
#line 411 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list((yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3192 "src/parser.c" /* yacc.c:1652  */
    break;

  case 219:
#line 414 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3198 "src/parser.c" /* yacc.c:1652  */
    break;

  case 220:
#line 414 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = NULL; }
#line 3204 "src/parser.c" /* yacc.c:1652  */
    break;

  case 221:
#line 416 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_inc; }
#line 3210 "src/parser.c" /* yacc.c:1652  */
    break;

  case 222:
#line 416 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_dec; }
#line 3216 "src/parser.c" /* yacc.c:1652  */
    break;

  case 223:
#line 418 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_dot((yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3222 "src/parser.c" /* yacc.c:1652  */
    break;

  case 225:
#line 420 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_array((yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3228 "src/parser.c" /* yacc.c:1652  */
    break;

  case 226:
#line 422 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_call((yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call((yyvsp[-1].type_list)); }
#line 3235 "src/parser.c" /* yacc.c:1652  */
    break;

  case 227:
#line 425 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_post((yyvsp[-1].exp), (yyvsp[0].ival)); }
#line 3241 "src/parser.c" /* yacc.c:1652  */
    break;

  case 228:
#line 425 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3247 "src/parser.c" /* yacc.c:1652  */
    break;

  case 229:
#line 428 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_complex; }
#line 3253 "src/parser.c" /* yacc.c:1652  */
    break;

  case 230:
#line 429 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3259 "src/parser.c" /* yacc.c:1652  */
    break;

  case 231:
#line 430 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3265 "src/parser.c" /* yacc.c:1652  */
    break;

  case 232:
#line 433 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_id(     (yyvsp[0].sym), get_pos(arg)); }
#line 3271 "src/parser.c" /* yacc.c:1652  */
    break;

  case 233:
#line 434 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_int(    (yyvsp[0].lval), get_pos(arg)); }
#line 3277 "src/parser.c" /* yacc.c:1652  */
    break;

  case 234:
#line 435 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_float(  (yyvsp[0].fval), get_pos(arg)); }
#line 3283 "src/parser.c" /* yacc.c:1652  */
    break;

  case 235:
#line 436 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_string( (yyvsp[0].sval), get_pos(arg)); }
#line 3289 "src/parser.c" /* yacc.c:1652  */
    break;

  case 236:
#line 437 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_char(   (yyvsp[0].sval), get_pos(arg)); }
#line 3295 "src/parser.c" /* yacc.c:1652  */
    break;

  case 237:
#line 438 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_array(  (yyvsp[0].array_sub), get_pos(arg)); }
#line 3301 "src/parser.c" /* yacc.c:1652  */
    break;

  case 238:
#line 439 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_vec((yyvsp[-2].ival), (yyvsp[-1].exp)); }
#line 3307 "src/parser.c" /* yacc.c:1652  */
    break;

  case 239:
#line 440 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_hack(   (yyvsp[-1].exp)); }
#line 3313 "src/parser.c" /* yacc.c:1652  */
    break;

  case 240:
#line 441 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) =                      (yyvsp[-1].exp);                }
#line 3319 "src/parser.c" /* yacc.c:1652  */
    break;

  case 241:
#line 442 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_lambda(lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3325 "src/parser.c" /* yacc.c:1652  */
    break;

  case 242:
#line 443 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_nil(        get_pos(arg)); }
#line 3331 "src/parser.c" /* yacc.c:1652  */
    break;


#line 3335 "src/parser.c" /* yacc.c:1652  */
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
#line 445 "ly/gwion.y" /* yacc.c:1918  */

