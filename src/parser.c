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

ANN uint get_pos(const Scanner*);
ANN void gwion_error(const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);
m_str op2str(const Operator op);

#line 99 "src/parser.c" /* yacc.c:337  */
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

#line 390 "src/parser.c" /* yacc.c:352  */
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
#define YYFINAL  195
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1668

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  248
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  427

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
     148,   148,   150,   150,   152,   153,   155,   159,   161,   161,
     163,   167,   171,   172,   172,   173,   174,   174,   177,   178,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   200,   201,   208,   208,   211,   214,   216,
     219,   220,   221,   224,   227,   229,   231,   233,   235,   237,
     239,   241,   246,   248,   253,   254,   255,   256,   260,   261,
     264,   264,   266,   266,   268,   268,   270,   270,   270,   271,
     271,   272,   272,   273,   273,   274,   274,   275,   275,   275,
     276,   276,   276,   280,   281,   282,   286,   287,   288,   291,
     291,   292,   292,   293,   295,   296,   297,   297,   299,   299,
     300,   300,   301,   301,   303,   303,   305,   306,   309,   310,
     313,   314,   315,   318,   318,   321,   329,   329,   329,   329,
     329,   331,   332,   334,   336,   338,   345,   345,   348,   349,
     351,   352,   356,   357,   359,   360,   363,   369,   377,   378,
     381,   382,   384,   385,   386,   387,   388,   389,   391,   391,
     392,   392,   392,   392,   393,   393,   394,   394,   395,   395,
     395,   396,   396,   399,   399,   400,   400,   401,   401,   402,
     402,   403,   403,   404,   404,   405,   405,   406,   406,   407,
     407,   408,   408,   410,   410,   412,   412,   415,   415,   416,
     417,   417,   417,   417,   420,   420,   421,   422,   423,   426,
     427,   428,   428,   431,   432,   435,   435,   437,   437,   439,
     440,   440,   442,   445,   446,   449,   450,   451,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464
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
  "\"::\"", "\"&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"", "\"<\"",
  "\"-\"", "\"+\"", "\"!=\"", "SHIFT_LEFT", "SHIFT_RIGHT", "S_AND",
  "\"|\"", "\"^\"", "\"||\"", "\"dtor\"", "\"operator\"", "\"typedef\"",
  "\"<<\"", "\">>\"", "\"&=>\"", "\"|=>\"", "\"^=>\"", "\"<~\"", "\"~>\"",
  "NOELSE", "\"union\"", "\"@(\"", "\"typeof\"", "\"const\"", "\"auto\"",
  "\"##\"", "\"...\"", "\"->\"", "\"\\\\\"", "NUM", "FLOATT",
  "\"<identifier>\"", "STRING_LIT", "CHAR_LIT", "PP_COMMENT", "PP_INCLUDE",
  "PP_DEFINE", "PP_UNDEF", "PP_IFDEF", "PP_IFNDEF", "PP_ELSE", "PP_ENDIF",
  "PP_NL", "$accept", "prg", "ast", "section", "class_def", "class_ext",
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

#define YYPACT_NINF -363

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-363)))

#define YYTABLE_NINF -86

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     505,  -363,  -363,  1372,  1054,  1107,   605,  -363,  -363,   -59,
      21,  -363,    54,    71,   704,    75,    92,    96,    17,  1372,
      46,    93,   803,   120,   124,  -363,  -363,    39,   146,   146,
     -59,  -363,  -363,  -363,  -363,  -363,   146,  1584,    93,    39,
      93,  -363,   153,    40,   138,    17,  -363,  -363,    74,  -363,
    -363,   168,  -363,   505,  -363,   138,  -363,  -363,  -363,  -363,
     704,   -11,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,   167,   414,  -363,   158,  -363,  -363,  -363,  -363,   102,
    -363,    39,  -363,  -363,  -363,    17,  -363,  -363,     4,   111,
     100,   103,   107,    31,    88,    24,    94,   150,  -363,   154,
    1425,  -363,   146,  -363,  -363,    27,  1372,  -363,     7,   166,
    1531,  -363,   173,  -363,   172,  -363,   174,    17,    93,  1372,
    1372,  1372,    25,  1372,  1372,   902,   185,   146,   156,  -363,
     160,    29,   162,  -363,   181,  -363,   195,  -363,  -363,    21,
    -363,  -363,   106,   189,  -363,  -363,    93,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,    39,  -363,  -363,
    -363,  -363,    39,    39,  -363,   199,   121,    17,  1372,  -363,
    -363,    17,    17,  -363,    17,  -363,  -363,  -363,  -363,  -363,
      17,  -363,  1372,  1372,  1160,  -363,  -363,  -363,   189,  -363,
     201,  1372,  1478,  1478,  1478,  1478,  1478,  -363,  -363,  1478,
    1478,  1478,  1478,  1531,    39,  -363,    39,  -363,  -363,  1372,
      17,    39,   197,  -363,  -363,   198,  -363,  -363,   196,  -363,
     125,   212,    39,   187,   213,   215,  1372,  1372,   216,   217,
     138,  1001,  -363,  -363,  -363,  -363,  -363,    17,  -363,  -363,
      17,   221,   222,    -3,    17,    39,    -6,  -363,   219,   223,
    -363,  -363,  -363,  -363,   176,  -363,  -363,  -363,  -363,    17,
     204,   111,   100,   103,   107,    31,    88,    24,    94,   150,
     154,  -363,   227,  -363,   155,  1213,  -363,  -363,  1266,  -363,
    -363,    17,    -3,    17,   208,   704,   704,   237,   240,   704,
     704,    17,  1319,   228,   186,    39,    39,  -363,   234,  -363,
      30,  -363,   218,   138,    20,  -363,    17,  -363,  1478,    39,
    -363,  -363,   235,  -363,  -363,   146,   239,   138,   220,  -363,
    -363,  -363,  -363,  -363,    41,   704,   236,    17,    39,   238,
     246,    17,   242,  -363,  -363,    35,  -363,    17,  1372,  -363,
     243,   249,    17,   245,  -363,  -363,   250,  -363,  -363,    39,
    -363,  -363,   704,  1372,  -363,   704,   252,  -363,   505,    39,
     189,  -363,   146,   253,  -363,   189,  -363,   232,    17,    39,
    -363,    17,   146,   262,  -363,  -363,   858,  -363,  -363,   505,
     254,  -363,   256,  -363,   158,  -363,    39,  -363,   158,   241,
     266,  -363,   268,  -363,    39,   704,  -363,  -363,   146,  -363,
     138,  -363,  -363,  -363,  -363,  -363,  -363
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    79,   208,     0,     0,     0,     0,   236,   235,   125,
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
       0,   248,     0,   106,     0,    38,     0,     0,   133,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   238,
     234,    85,   230,   134,     0,    74,     0,    76,    77,     0,
      30,   216,    20,    28,   217,   218,   133,   145,    86,   179,
     178,   180,    90,    91,    92,    93,    94,    89,    87,    95,
      96,   102,    88,   173,   171,   172,   170,   177,   176,   174,
     175,    97,    98,    99,   100,   101,   136,     0,   138,   137,
     140,   139,     0,     0,    31,   223,     0,    56,     0,   153,
     147,     0,   219,   221,     0,     1,     5,   148,    23,    58,
       0,    78,     0,     0,     0,   108,   132,   117,   160,   114,
     158,     0,     0,     0,     0,     0,     0,   168,   169,     0,
       0,     0,     0,     0,     0,   213,     0,   215,   247,     0,
       0,     0,     0,   231,   233,     0,   245,   246,   103,    39,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
     146,     0,    59,    63,    62,    61,    60,     0,    75,    29,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
     113,   220,    54,    21,    18,    81,    83,   107,   161,     0,
       0,   184,   186,   188,   190,   192,   194,   196,   198,   200,
     202,   206,     0,   229,     0,     0,   232,   244,     0,   104,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,   123,     0,    26,
       0,   224,     0,   146,     0,   204,     0,   159,     0,     0,
      84,   226,     0,   105,    17,     0,     0,   146,    72,    64,
      65,    70,    69,    71,   160,     0,     0,    56,     0,     0,
       0,     0,     0,   122,    27,   121,    24,    56,     0,   149,
       0,     0,     0,     0,    19,   182,     0,   225,   135,   119,
      25,   150,     0,     0,    66,     0,     0,    10,    13,     0,
     162,    32,     0,    36,   120,   165,    35,     0,    56,   154,
     115,    56,     0,    33,   118,    73,     0,    67,    57,    14,
       0,    12,     0,   164,   163,   143,     0,   167,   166,     0,
       0,   155,     0,   144,     0,     0,    15,     9,     0,    37,
     146,   157,   156,    34,    68,   142,   151
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -363,  -363,   224,  -362,  -363,  -363,  -363,  -126,  -209,   -52,
       9,    38,  -363,  -363,  -363,  -363,   -14,   -63,   -45,  -266,
    -339,   -69,  -363,    -5,   -12,     0,  -216,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -118,   277,   -86,  -363,   251,
     -73,  -281,  -139,    86,   210,  -363,  -363,  -363,    -7,   270,
    -363,   225,   -10,   -28,  -363,  -363,  -363,   -47,   259,   101,
     -97,  -363,   -80,  -363,   -54,  -363,  -363,   276,   280,   281,
     282,     8,  -363,   109,   110,   108,    99,   122,   118,   119,
     123,   127,  -363,   117,     3,   -81,   149,  -363,  -197,  -363,
     -22,   322,   326,  -363,   330
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    51,    52,    53,    54,   349,   400,   401,   240,   273,
      55,    56,   263,   302,    57,    58,   184,   141,   185,   393,
     394,   356,   384,    59,    60,   108,   268,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,   232,   203,
      73,    74,    75,    76,    77,   361,    78,   370,   319,   118,
      79,    80,    81,   134,    82,   177,    83,   191,    84,    85,
     363,    86,   270,   210,   381,   386,   219,   220,   221,   222,
     223,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   110,   101,   193,   102,   186,   296,
     103,   104,   105,   106,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,   205,   122,   100,   259,   209,    61,   251,   197,   317,
     183,   133,   187,   140,    61,   182,   399,   -20,   126,   227,
     129,   360,   199,   144,   145,   322,   117,   142,   133,   227,
     133,   147,   233,   354,   294,   -20,   211,   399,   -85,   142,
     229,   355,   229,   142,   116,   192,   355,   128,   313,   350,
     352,   139,   119,    61,     5,     3,   100,     4,   233,     5,
      61,   139,   246,   366,   247,   120,   139,   419,   321,   278,
     139,   139,     7,     8,   373,   423,    25,    26,    25,    26,
     212,   142,   121,   234,   200,   208,   123,   230,   -20,   230,
     242,   318,   334,    48,   217,   169,   170,   228,   198,   404,
     129,   218,   200,   124,   408,    39,   -20,   125,   133,   234,
     129,    43,   231,   402,   231,    39,    48,   241,   260,    48,
      39,    43,   253,   137,    39,    39,    43,   138,   143,    48,
      43,   376,   261,   312,    48,    41,   133,   262,    48,    48,
     143,   385,    45,    46,    47,    48,    49,    50,    31,    32,
      33,    34,   163,   164,   165,   166,   149,   150,   151,    33,
      34,     6,   167,   168,   188,   299,   190,   194,   195,   264,
     201,   204,   410,   213,   214,   412,   236,   142,   215,   291,
     216,   292,   142,   142,   224,   237,   238,   267,   252,   254,
     239,   208,   192,   255,   272,   256,   257,   303,   258,   327,
     274,   200,     5,   311,   265,   278,   279,   266,   295,   298,
     297,   300,   129,   129,   129,   129,   129,   301,   304,   129,
     129,   129,   129,   129,   142,   305,   142,   306,   309,   310,
     293,   142,   315,   316,   324,   325,   326,   328,   329,   337,
     340,   330,   142,   341,   347,   348,   353,   367,   375,   358,
     369,   379,   389,   378,   382,   398,   372,   241,   406,   388,
     314,   391,   392,   409,   320,   142,   142,   414,   418,   421,
     417,   422,   420,   416,   364,   323,   359,   196,   143,   208,
     109,   112,   114,   143,   143,   377,   383,   396,   176,   276,
     371,   207,   411,   338,   339,   335,   127,   342,   343,   136,
     146,   241,   189,   336,   206,    61,    61,   403,   390,    61,
      61,   344,   407,   178,   284,   142,   142,   179,   180,   181,
     142,   281,   283,   282,   142,   143,   274,   143,   129,   142,
     368,   205,   143,   374,   140,   205,   365,   286,   285,   287,
     290,   271,   130,   143,   288,    61,   131,   267,   142,   289,
     132,   380,     0,     0,     0,   142,     0,   267,     0,     0,
     395,     0,   380,   397,     0,     0,   143,     0,     0,   142,
       0,     0,    61,   426,     0,    61,     0,   405,    61,   142,
       0,   100,     0,   235,     0,     0,     0,   413,   267,   142,
       0,   267,     0,     0,     0,     0,   243,   244,   245,    61,
     248,   249,   100,   424,     0,     0,   142,     0,     0,     0,
       0,     0,     0,   425,   142,    61,   351,   351,   148,   202,
       0,   357,     0,     0,     0,   362,     0,     0,     0,     0,
     351,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,     0,     0,   357,     0,     0,     0,
       0,     0,     0,     0,     0,   269,     0,     0,     0,     0,
     351,     0,     0,     0,     0,   161,     0,   162,     0,   275,
     351,   114,     0,     0,     0,     0,     0,     0,   280,     0,
     362,     0,     0,     0,   171,   172,   173,   174,   175,     0,
       0,     0,     0,     0,     0,     0,   114,   351,     1,     0,
       0,     0,     2,     0,     3,   351,     4,     0,     5,     0,
       6,     0,     0,   307,   308,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     9,     0,    10,     0,     0,    11,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     0,     0,     0,     0,     0,     0,
       0,     0,   332,    35,     0,   114,     0,     0,     0,     0,
       0,     0,    36,    37,    38,     0,     0,     0,     0,   346,
      39,     0,     0,    40,    41,    42,    43,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,     0,     1,     0,
       0,     0,     2,     0,     3,     0,     4,     0,     5,     0,
       6,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,   387,    10,     0,     0,    11,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      31,    32,    33,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
      39,     0,     0,    40,    41,    42,    43,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,     1,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,    10,     0,     0,    11,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,    31,
      32,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,    39,
       0,     0,    40,    41,    42,    43,    44,     0,     0,     0,
      45,    46,    47,    48,    49,    50,   135,     0,     0,     0,
       2,     0,     3,     0,     4,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,    10,     0,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,    27,    28,    29,     0,    31,    32,
      33,    34,   148,     0,     0,     0,     0,     0,     0,     0,
     415,    35,     0,     0,     0,   152,   153,   154,   155,   156,
     157,   158,   159,   160,     0,     0,     0,     0,    39,     0,
       0,     0,    41,    42,    43,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     1,     0,     0,     0,     2,
       0,     3,     0,     4,     0,     5,     0,     0,     0,   161,
       0,   162,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,    10,     0,     0,    11,     0,   171,   172,
     173,   174,   175,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,    27,    28,    29,     0,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
       0,    41,    42,    43,   250,     0,     0,     0,    45,    46,
      47,    48,    49,    50,     1,     0,     0,     0,     2,     0,
       3,     0,     4,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,    10,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    26,    27,    28,    29,     0,    31,    32,    33,    34,
       0,     2,     0,     3,     0,     4,   111,     5,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,    10,    39,     0,    11,     0,
      41,    42,    43,    44,     0,     0,     0,    45,    46,    47,
      48,    49,    50,    25,    26,    27,    28,    29,     0,    31,
      32,    33,    34,     0,     2,     0,     3,     0,     4,     0,
       5,   113,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     0,     0,    10,    39,
       0,    11,     0,    41,    42,    43,    44,     0,     0,     0,
      45,    46,    47,    48,    49,    50,    25,    26,    27,    28,
      29,     0,    31,    32,    33,    34,     0,     2,     0,     3,
       0,     4,     0,     5,   277,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,    10,    39,     0,    11,     0,    41,    42,    43,    44,
       0,     0,     0,    45,    46,    47,    48,    49,    50,    25,
      26,    27,    28,    29,     0,    31,    32,    33,    34,     0,
       2,     0,     3,     0,     4,   331,     5,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,    10,    39,     0,    11,     0,    41,
      42,    43,    44,     0,     0,     0,    45,    46,    47,    48,
      49,    50,    25,    26,    27,    28,    29,     0,    31,    32,
      33,    34,     0,     2,     0,     3,     0,     4,     0,     5,
     333,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,    10,    39,     0,
      11,     0,    41,    42,    43,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,    25,    26,    27,    28,    29,
       0,    31,    32,    33,    34,     0,     2,     0,     3,     0,
       4,   345,     5,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
      10,    39,     0,    11,     0,    41,    42,    43,    44,     0,
       0,     0,    45,    46,    47,    48,    49,    50,    25,    26,
      27,    28,    29,     0,    31,    32,    33,    34,     0,     2,
       0,     3,     0,     4,     0,     5,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,    10,    39,     0,    11,     0,    41,    42,
      43,    44,     0,     0,     0,    45,    46,    47,    48,    49,
      50,    25,    26,    27,    28,    29,     0,    31,    32,    33,
      34,     0,     2,     0,     3,     0,     4,     0,     5,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,   225,    39,     0,    11,
       0,    41,    42,    43,    44,     0,     0,     0,    45,    46,
      47,    48,    49,    50,    25,    26,    27,    28,    29,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     4,
       0,     5,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,     7,     8,     0,     0,     0,   225,
       0,     0,    11,     0,    41,     0,     0,     0,     0,     0,
       0,    45,    46,    47,    48,    49,    50,    25,    26,    27,
      28,    29,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     4,     0,     5,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,   225,     0,     0,    11,     0,    41,    42,     0,
       0,     0,     0,     0,    45,    46,    47,    48,    49,    50,
      25,    26,    27,    28,    29,     0,     0,     0,   148,     0,
     149,   150,   151,     0,     0,     0,     0,     0,     0,    35,
       0,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,    45,    46,    47,
      48,    49,    50,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,     0,   162,   163,   164,
     165,   166,   167,   168,     0,   169,   170,     0,     0,     0,
       0,     0,     0,     0,   171,   172,   173,   174,   175
};

static const yytype_int16 yycheck[] =
{
       0,    74,    14,     0,   143,    85,     6,   125,    55,    12,
      38,    21,    40,    27,    14,    37,   378,    28,    18,   100,
      20,     1,    33,    28,    29,    31,    85,    27,    38,   110,
      40,    36,   105,     3,   231,    28,    32,   399,    11,    39,
      13,    11,    13,    43,     6,    45,    11,     1,   257,   315,
     316,    31,    31,    53,    13,     9,    53,    11,   131,    13,
      60,    31,    37,   329,    39,    11,    31,   406,   265,   208,
      31,    31,    26,    27,    33,   414,    49,    50,    49,    50,
      76,    81,    11,   105,    95,    85,    11,    60,    99,    60,
     118,    94,   301,    99,    63,    71,    72,   102,    60,   380,
     100,    70,    95,    11,   385,    85,    99,    11,   118,   131,
     110,    91,    85,   379,    85,    85,    99,   117,   146,    99,
      85,    91,   127,     3,    85,    85,    91,     3,    27,    99,
      91,   347,   177,   251,    99,    89,   146,   182,    99,    99,
      39,   357,    96,    97,    98,    99,   100,   101,    55,    56,
      57,    58,    64,    65,    66,    67,     6,     7,     8,    57,
      58,    15,    68,    69,    11,   238,    28,    93,     0,   183,
       3,    13,   388,    62,    74,   391,    10,   177,    75,   224,
      73,   226,   182,   183,    30,    12,    14,   187,     3,    33,
      16,   191,   192,    33,   194,    33,    15,   242,     3,   279,
     200,    95,    13,   250,     5,   344,     5,    86,    11,    13,
      12,    86,   212,   213,   214,   215,   216,     5,    31,   219,
     220,   221,   222,   223,   224,    12,   226,    12,    12,    12,
     230,   231,    11,    11,    15,    12,    60,    33,    11,    31,
       3,    86,   242,     3,    16,    59,    12,    12,    12,    31,
      11,     5,     3,    15,    12,     3,    36,   257,     5,    16,
     260,    16,    12,    31,   264,   265,   266,     5,    12,     3,
      16,     3,    31,   399,   326,   266,   323,    53,   177,   279,
       3,     4,     5,   182,   183,   348,   355,   373,    37,   203,
     337,    81,   389,   305,   306,   302,    19,   309,   310,    22,
      30,   301,    43,   303,    79,   305,   306,   380,   362,   309,
     310,   311,   385,    37,   215,   315,   316,    37,    37,    37,
     320,   212,   214,   213,   324,   224,   326,   226,   328,   329,
     335,   404,   231,   345,   348,   408,   328,   219,   216,   220,
     223,   192,    20,   242,   221,   345,    20,   347,   348,   222,
      20,   351,    -1,    -1,    -1,   355,    -1,   357,    -1,    -1,
     372,    -1,   362,   375,    -1,    -1,   265,    -1,    -1,   369,
      -1,    -1,   372,   420,    -1,   375,    -1,   382,   378,   379,
      -1,   378,    -1,   106,    -1,    -1,    -1,   392,   388,   389,
      -1,   391,    -1,    -1,    -1,    -1,   119,   120,   121,   399,
     123,   124,   399,   415,    -1,    -1,   406,    -1,    -1,    -1,
      -1,    -1,    -1,   418,   414,   415,   315,   316,     4,     5,
      -1,   320,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,
     329,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,
      -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,
     369,    -1,    -1,    -1,    -1,    61,    -1,    63,    -1,   202,
     379,   204,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,
     389,    -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   229,   406,     3,    -1,
      -1,    -1,     7,    -1,     9,   414,    11,    -1,    13,    -1,
      15,    -1,    -1,   246,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    29,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   295,    68,    -1,   298,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    -1,    -1,    -1,    -1,   312,
      85,    -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,     3,    -1,
      -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,   358,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,     3,    -1,    -1,    -1,
       7,    -1,     9,    -1,    11,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    68,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    89,    90,    91,    92,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,     3,    -1,    -1,    -1,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    -1,    -1,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    89,    90,    91,    92,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,     3,    -1,    -1,    -1,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      -1,     7,    -1,     9,    -1,    11,    12,    13,    -1,    68,
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
      -1,    11,    -1,    13,    14,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    85,    -1,    34,    -1,    89,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    -1,
       7,    -1,     9,    -1,    11,    12,    13,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    85,    -1,    34,    -1,    89,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,     7,    -1,     9,    -1,    11,    -1,    13,
      14,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    85,    -1,
      34,    -1,    89,    90,    91,    92,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,     7,    -1,     9,    -1,
      11,    12,    13,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    85,    -1,    34,    -1,    89,    90,    91,    92,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    -1,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    85,    -1,    34,    -1,    89,    90,
      91,    92,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    85,    -1,    34,
      -1,    89,    90,    91,    92,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    89,    90,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      49,    50,    51,    52,    53,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84
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
     195,    12,   147,    14,   147,    16,   122,    85,   160,    31,
      11,    11,   135,    11,    11,    11,   136,   147,     1,   136,
     202,   203,   205,   163,   164,     3,   147,     3,     3,    31,
     127,   128,   136,   170,   134,   134,   160,   134,     4,     6,
       7,     8,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    61,    63,    64,    65,    66,    67,    68,    69,    71,
      72,    80,    81,    82,    83,    84,   150,   166,   178,   179,
     180,   181,   201,   164,   127,   129,   199,   164,    11,   169,
      28,   168,   136,   197,    93,     0,   113,   168,   122,    33,
      95,     3,     5,   150,    13,   151,   162,   155,   136,   173,
     174,    32,    76,    62,    74,    75,    73,    63,    70,   177,
     178,   179,   180,   181,    30,    31,    78,   196,   134,    13,
      60,    85,   149,   151,   201,   147,    10,    12,    14,    16,
     119,   136,   164,   147,   147,   147,    37,    39,   147,   147,
      92,   146,     3,   134,    33,    33,    33,    15,     3,   153,
     164,   129,   129,   123,   127,     5,    86,   136,   137,   147,
     173,   197,   136,   120,   136,   147,   154,    14,   153,     5,
     147,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     194,   129,   129,   136,   199,    11,   200,    12,    13,   151,
      86,     5,   124,   129,    31,    12,    12,   147,   147,    12,
      12,   168,   146,   119,   136,    11,    11,    12,    94,   159,
     136,   199,    31,   121,    15,    12,    60,   173,    33,    11,
      86,    12,   147,    14,   119,   159,   136,    31,   135,   135,
       3,     3,   135,   135,   136,    12,   147,    16,    59,   116,
     130,   170,   130,    12,     3,    11,   132,   170,    31,   168,
       1,   156,   170,   171,   120,   182,   130,    12,   134,    11,
     158,   168,    36,    33,   135,    12,   137,   128,    15,     5,
     136,   175,    12,   132,   133,   137,   176,   147,    16,     3,
     175,    16,    12,   130,   131,   135,   148,   135,     3,   114,
     117,   118,   130,   151,   152,   134,     5,   151,   152,    31,
     137,   171,   137,   134,     5,    12,   118,    16,    12,   131,
      31,     3,     3,   131,   135,   134,   168
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
       1,     3,     1,     2,     3,     3,     4,     5,     1,     2,
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
       1,     1,     2,     0,     1,     6,     1,     1,     1,     1,
       1,     1,     9,     7,     7,     2,     0,     1,     2,     5,
       6,     9,     1,     2,     2,     3,     8,     8,     1,     3,
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
#line 116 "ly/gwion.y" /* yacc.c:1652  */
    { arg->ast = (yyvsp[0].ast); }
#line 2079 "src/parser.c" /* yacc.c:1652  */
    break;

  case 3:
#line 117 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "file is empty.\n"); YYERROR; }
#line 2085 "src/parser.c" /* yacc.c:1652  */
    break;

  case 4:
#line 120 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2091 "src/parser.c" /* yacc.c:1652  */
    break;

  case 5:
#line 121 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2097 "src/parser.c" /* yacc.c:1652  */
    break;

  case 6:
#line 125 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2103 "src/parser.c" /* yacc.c:1652  */
    break;

  case 7:
#line 126 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2109 "src/parser.c" /* yacc.c:1652  */
    break;

  case 8:
#line 127 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2115 "src/parser.c" /* yacc.c:1652  */
    break;

  case 9:
#line 132 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].class_body), get_pos(arg));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->tmpl = new_tmpl_class(mpool(arg), (yyvsp[-6].id_list), -1);
  }
#line 2124 "src/parser.c" /* yacc.c:1652  */
    break;

  case 10:
#line 137 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2130 "src/parser.c" /* yacc.c:1652  */
    break;

  case 11:
#line 137 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = NULL; }
#line 2136 "src/parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 139 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = NULL; }
#line 2142 "src/parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 142 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[0].section), NULL); }
#line 2148 "src/parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 143 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2154 "src/parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 146 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), get_pos(arg)); }
#line 2160 "src/parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 146 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2166 "src/parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 147 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), get_pos(arg)); }
#line 2172 "src/parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 147 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2178 "src/parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 148 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), get_pos(arg)); }
#line 2184 "src/parser.c" /* yacc.c:1652  */
    break;

  case 21:
#line 148 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2190 "src/parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 150 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2196 "src/parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 150 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2202 "src/parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 152 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].arg_list)); }
#line 2208 "src/parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 153 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].arg_list)); }
#line 2214 "src/parser.c" /* yacc.c:1652  */
    break;

  case 26:
#line 155 "ly/gwion.y" /* yacc.c:1652  */
    {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp)
    { gwion_error(arg, "type must be defined with empty []'s"); YYERROR;}
(yyval.stmt) = new_stmt_fptr(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag)); }
#line 2223 "src/parser.c" /* yacc.c:1652  */
    break;

  case 27:
#line 159 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_type(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym)); (yyvsp[-2].type_decl)->flag |= (yyvsp[-3].flag); }
#line 2229 "src/parser.c" /* yacc.c:1652  */
    break;

  case 29:
#line 161 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2235 "src/parser.c" /* yacc.c:1652  */
    break;

  case 30:
#line 163 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2243 "src/parser.c" /* yacc.c:1652  */
    break;

  case 31:
#line 167 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2251 "src/parser.c" /* yacc.c:1652  */
    break;

  case 32:
#line 171 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2257 "src/parser.c" /* yacc.c:1652  */
    break;

  case 33:
#line 172 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2263 "src/parser.c" /* yacc.c:1652  */
    break;

  case 34:
#line 172 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2269 "src/parser.c" /* yacc.c:1652  */
    break;

  case 35:
#line 173 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2275 "src/parser.c" /* yacc.c:1652  */
    break;

  case 36:
#line 174 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2281 "src/parser.c" /* yacc.c:1652  */
    break;

  case 37:
#line 174 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2287 "src/parser.c" /* yacc.c:1652  */
    break;

  case 38:
#line 177 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, get_pos(arg)); }
#line 2293 "src/parser.c" /* yacc.c:1652  */
    break;

  case 39:
#line 178 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2299 "src/parser.c" /* yacc.c:1652  */
    break;

  case 53:
#line 200 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2305 "src/parser.c" /* yacc.c:1652  */
    break;

  case 54:
#line 201 "ly/gwion.y" /* yacc.c:1652  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2315 "src/parser.c" /* yacc.c:1652  */
    break;

  case 56:
#line 208 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = NULL; }
#line 2321 "src/parser.c" /* yacc.c:1652  */
    break;

  case 57:
#line 211 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_enum(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2328 "src/parser.c" /* yacc.c:1652  */
    break;

  case 58:
#line 214 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, get_pos(arg)); }
#line 2334 "src/parser.c" /* yacc.c:1652  */
    break;

  case 59:
#line 216 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, get_pos(arg)); }
#line 2340 "src/parser.c" /* yacc.c:1652  */
    break;

  case 60:
#line 219 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2346 "src/parser.c" /* yacc.c:1652  */
    break;

  case 61:
#line 220 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2352 "src/parser.c" /* yacc.c:1652  */
    break;

  case 62:
#line 221 "ly/gwion.y" /* yacc.c:1652  */
    { gw_err("unhandled expression type in case statement.\n"); YYERROR; }
#line 2358 "src/parser.c" /* yacc.c:1652  */
    break;

  case 63:
#line 224 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_switch(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2364 "src/parser.c" /* yacc.c:1652  */
    break;

  case 64:
#line 228 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), ae_stmt_while, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2370 "src/parser.c" /* yacc.c:1652  */
    break;

  case 65:
#line 230 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), ae_stmt_while, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2376 "src/parser.c" /* yacc.c:1652  */
    break;

  case 66:
#line 232 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2382 "src/parser.c" /* yacc.c:1652  */
    break;

  case 67:
#line 234 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2388 "src/parser.c" /* yacc.c:1652  */
    break;

  case 68:
#line 236 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2394 "src/parser.c" /* yacc.c:1652  */
    break;

  case 69:
#line 238 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), ae_stmt_until, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2400 "src/parser.c" /* yacc.c:1652  */
    break;

  case 70:
#line 240 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), ae_stmt_until, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2406 "src/parser.c" /* yacc.c:1652  */
    break;

  case 71:
#line 242 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2412 "src/parser.c" /* yacc.c:1652  */
    break;

  case 72:
#line 247 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2418 "src/parser.c" /* yacc.c:1652  */
    break;

  case 73:
#line 249 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2424 "src/parser.c" /* yacc.c:1652  */
    break;

  case 74:
#line 253 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, get_pos(arg)); }
#line 2430 "src/parser.c" /* yacc.c:1652  */
    break;

  case 75:
#line 254 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2436 "src/parser.c" /* yacc.c:1652  */
    break;

  case 76:
#line 255 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_break, get_pos(arg)); }
#line 2442 "src/parser.c" /* yacc.c:1652  */
    break;

  case 77:
#line 256 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_continue, get_pos(arg)); }
#line 2448 "src/parser.c" /* yacc.c:1652  */
    break;

  case 78:
#line 260 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2454 "src/parser.c" /* yacc.c:1652  */
    break;

  case 79:
#line 261 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, get_pos(arg)); }
#line 2460 "src/parser.c" /* yacc.c:1652  */
    break;

  case 81:
#line 264 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2466 "src/parser.c" /* yacc.c:1652  */
    break;

  case 83:
#line 266 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 2472 "src/parser.c" /* yacc.c:1652  */
    break;

  case 84:
#line 268 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2478 "src/parser.c" /* yacc.c:1652  */
    break;

  case 85:
#line 268 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = NULL; }
#line 2484 "src/parser.c" /* yacc.c:1652  */
    break;

  case 86:
#line 270 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_chuck; }
#line 2490 "src/parser.c" /* yacc.c:1652  */
    break;

  case 87:
#line 270 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_unchuck; }
#line 2496 "src/parser.c" /* yacc.c:1652  */
    break;

  case 88:
#line 270 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_eq; }
#line 2502 "src/parser.c" /* yacc.c:1652  */
    break;

  case 89:
#line 271 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_ref; }
#line 2508 "src/parser.c" /* yacc.c:1652  */
    break;

  case 90:
#line 271 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_radd; }
#line 2514 "src/parser.c" /* yacc.c:1652  */
    break;

  case 91:
#line 272 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsub; }
#line 2520 "src/parser.c" /* yacc.c:1652  */
    break;

  case 92:
#line 272 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rmul; }
#line 2526 "src/parser.c" /* yacc.c:1652  */
    break;

  case 93:
#line 273 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rdiv; }
#line 2532 "src/parser.c" /* yacc.c:1652  */
    break;

  case 94:
#line 273 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rmod; }
#line 2538 "src/parser.c" /* yacc.c:1652  */
    break;

  case 95:
#line 274 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_trig; }
#line 2544 "src/parser.c" /* yacc.c:1652  */
    break;

  case 96:
#line 274 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_untrig; }
#line 2550 "src/parser.c" /* yacc.c:1652  */
    break;

  case 97:
#line 275 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsl; }
#line 2556 "src/parser.c" /* yacc.c:1652  */
    break;

  case 98:
#line 275 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsr; }
#line 2562 "src/parser.c" /* yacc.c:1652  */
    break;

  case 99:
#line 275 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsand; }
#line 2568 "src/parser.c" /* yacc.c:1652  */
    break;

  case 100:
#line 276 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsor; }
#line 2574 "src/parser.c" /* yacc.c:1652  */
    break;

  case 101:
#line 276 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsxor; }
#line 2580 "src/parser.c" /* yacc.c:1652  */
    break;

  case 102:
#line 276 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_coloncolon; }
#line 2586 "src/parser.c" /* yacc.c:1652  */
    break;

  case 103:
#line 280 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2592 "src/parser.c" /* yacc.c:1652  */
    break;

  case 104:
#line 281 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[-2].exp)->next){ gwion_error(arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2598 "src/parser.c" /* yacc.c:1652  */
    break;

  case 105:
#line 282 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "partially empty array init [...][]..."); YYERROR; }
#line 2604 "src/parser.c" /* yacc.c:1652  */
    break;

  case 106:
#line 286 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2610 "src/parser.c" /* yacc.c:1652  */
    break;

  case 107:
#line 287 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2616 "src/parser.c" /* yacc.c:1652  */
    break;

  case 108:
#line 288 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "partially empty array init [][...]"); YYERROR; }
#line 2622 "src/parser.c" /* yacc.c:1652  */
    break;

  case 113:
#line 293 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), get_pos(arg)), 0), (yyvsp[0].var_decl_list)); }
#line 2629 "src/parser.c" /* yacc.c:1652  */
    break;

  case 114:
#line 295 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2635 "src/parser.c" /* yacc.c:1652  */
    break;

  case 115:
#line 296 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2641 "src/parser.c" /* yacc.c:1652  */
    break;

  case 117:
#line 297 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2647 "src/parser.c" /* yacc.c:1652  */
    break;

  case 118:
#line 299 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2653 "src/parser.c" /* yacc.c:1652  */
    break;

  case 119:
#line 299 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2659 "src/parser.c" /* yacc.c:1652  */
    break;

  case 120:
#line 300 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2665 "src/parser.c" /* yacc.c:1652  */
    break;

  case 121:
#line 300 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2671 "src/parser.c" /* yacc.c:1652  */
    break;

  case 122:
#line 301 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2677 "src/parser.c" /* yacc.c:1652  */
    break;

  case 123:
#line 301 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2683 "src/parser.c" /* yacc.c:1652  */
    break;

  case 124:
#line 303 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2689 "src/parser.c" /* yacc.c:1652  */
    break;

  case 125:
#line 303 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = NULL; }
#line 2695 "src/parser.c" /* yacc.c:1652  */
    break;

  case 126:
#line 305 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_static; }
#line 2701 "src/parser.c" /* yacc.c:1652  */
    break;

  case 127:
#line 306 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_global; }
#line 2707 "src/parser.c" /* yacc.c:1652  */
    break;

  case 128:
#line 309 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_private; }
#line 2713 "src/parser.c" /* yacc.c:1652  */
    break;

  case 129:
#line 310 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_protect; }
#line 2719 "src/parser.c" /* yacc.c:1652  */
    break;

  case 130:
#line 313 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2725 "src/parser.c" /* yacc.c:1652  */
    break;

  case 131:
#line 314 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2731 "src/parser.c" /* yacc.c:1652  */
    break;

  case 132:
#line 315 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2737 "src/parser.c" /* yacc.c:1652  */
    break;

  case 133:
#line 318 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2743 "src/parser.c" /* yacc.c:1652  */
    break;

  case 134:
#line 318 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2749 "src/parser.c" /* yacc.c:1652  */
    break;

  case 135:
#line 322 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), get_pos(arg));
    if((yyvsp[-4].id_list)) {
      SET_FLAG((yyval.func_def), template);
      (yyval.func_def)->tmpl = new_tmpl_list(mpool(arg), (yyvsp[-4].id_list), -1);
    }
  }
#line 2760 "src/parser.c" /* yacc.c:1652  */
    break;

  case 142:
#line 333 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), OP_SYM((yyvsp[-7].ival)), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, get_pos(arg)); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2766 "src/parser.c" /* yacc.c:1652  */
    break;

  case 143:
#line 335 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), OP_SYM((yyvsp[-5].ival)), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, get_pos(arg)); }
#line 2772 "src/parser.c" /* yacc.c:1652  */
    break;

  case 144:
#line 337 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), OP_SYM((yyvsp[-6].ival)), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, get_pos(arg)); }
#line 2778 "src/parser.c" /* yacc.c:1652  */
    break;

  case 145:
#line 339 "ly/gwion.y" /* yacc.c:1652  */
    {
ID_List l = new_id_list(mpool(arg), insert_symbol("void"), get_pos(arg));
(yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), new_type_decl(mpool(arg), l, get_pos(arg)),
       insert_symbol("dtor"), NULL), (yyvsp[0].stmt), ae_flag_dtor, get_pos(arg)); }
#line 2787 "src/parser.c" /* yacc.c:1652  */
    break;

  case 146:
#line 345 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = 0; }
#line 2793 "src/parser.c" /* yacc.c:1652  */
    break;

  case 147:
#line 345 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_flag_ref; }
#line 2799 "src/parser.c" /* yacc.c:1652  */
    break;

  case 148:
#line 348 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].id_list), (yyvsp[0].ival)); }
#line 2805 "src/parser.c" /* yacc.c:1652  */
    break;

  case 149:
#line 349 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].id_list), (yyvsp[0].ival));
      (yyval.type_decl)->types = (yyvsp[-3].type_list); }
#line 2812 "src/parser.c" /* yacc.c:1652  */
    break;

  case 150:
#line 351 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[-3].exp), (yyvsp[0].ival)); }
#line 2818 "src/parser.c" /* yacc.c:1652  */
    break;

  case 151:
#line 353 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[-3].exp), (yyvsp[0].ival)); (yyval.type_decl)->types = (yyvsp[-7].type_list); }
#line 2824 "src/parser.c" /* yacc.c:1652  */
    break;

  case 152:
#line 356 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2830 "src/parser.c" /* yacc.c:1652  */
    break;

  case 153:
#line 357 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 2836 "src/parser.c" /* yacc.c:1652  */
    break;

  case 154:
#line 359 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2842 "src/parser.c" /* yacc.c:1652  */
    break;

  case 155:
#line 360 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2848 "src/parser.c" /* yacc.c:1652  */
    break;

  case 156:
#line 363 "ly/gwion.y" /* yacc.c:1652  */
    {
      (yyval.stmt) = new_stmt_union(mpool(arg), (yyvsp[-3].decl_list), get_pos(arg));
      (yyval.stmt)->d.stmt_union.type_xid = (yyvsp[-5].sym);
      (yyval.stmt)->d.stmt_union.xid = (yyvsp[-1].sym);
      (yyval.stmt)->d.stmt_union.flag = (yyvsp[-6].flag);
    }
#line 2859 "src/parser.c" /* yacc.c:1652  */
    break;

  case 157:
#line 369 "ly/gwion.y" /* yacc.c:1652  */
    {
//    gwion_error(arg, "Unions should only contain declarations.");
    gw_err("Unions should only contain declarations.\n");
    YYERROR;
    }
#line 2869 "src/parser.c" /* yacc.c:1652  */
    break;

  case 158:
#line 377 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2875 "src/parser.c" /* yacc.c:1652  */
    break;

  case 159:
#line 378 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2881 "src/parser.c" /* yacc.c:1652  */
    break;

  case 160:
#line 381 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2887 "src/parser.c" /* yacc.c:1652  */
    break;

  case 161:
#line 382 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2893 "src/parser.c" /* yacc.c:1652  */
    break;

  case 162:
#line 384 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2899 "src/parser.c" /* yacc.c:1652  */
    break;

  case 163:
#line 385 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2905 "src/parser.c" /* yacc.c:1652  */
    break;

  case 164:
#line 386 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2911 "src/parser.c" /* yacc.c:1652  */
    break;

  case 165:
#line 387 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2917 "src/parser.c" /* yacc.c:1652  */
    break;

  case 166:
#line 388 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2923 "src/parser.c" /* yacc.c:1652  */
    break;

  case 167:
#line 389 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2929 "src/parser.c" /* yacc.c:1652  */
    break;

  case 168:
#line 391 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_eq; }
#line 2935 "src/parser.c" /* yacc.c:1652  */
    break;

  case 169:
#line 391 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_ne; }
#line 2941 "src/parser.c" /* yacc.c:1652  */
    break;

  case 170:
#line 392 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_lt; }
#line 2947 "src/parser.c" /* yacc.c:1652  */
    break;

  case 171:
#line 392 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_gt; }
#line 2953 "src/parser.c" /* yacc.c:1652  */
    break;

  case 172:
#line 392 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_le; }
#line 2959 "src/parser.c" /* yacc.c:1652  */
    break;

  case 173:
#line 392 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_ge; }
#line 2965 "src/parser.c" /* yacc.c:1652  */
    break;

  case 174:
#line 393 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_shl; }
#line 2971 "src/parser.c" /* yacc.c:1652  */
    break;

  case 175:
#line 393 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_shr; }
#line 2977 "src/parser.c" /* yacc.c:1652  */
    break;

  case 176:
#line 394 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_add; }
#line 2983 "src/parser.c" /* yacc.c:1652  */
    break;

  case 177:
#line 394 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_sub; }
#line 2989 "src/parser.c" /* yacc.c:1652  */
    break;

  case 178:
#line 395 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_mul; }
#line 2995 "src/parser.c" /* yacc.c:1652  */
    break;

  case 179:
#line 395 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_div; }
#line 3001 "src/parser.c" /* yacc.c:1652  */
    break;

  case 180:
#line 395 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_mod; }
#line 3007 "src/parser.c" /* yacc.c:1652  */
    break;

  case 182:
#line 397 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3013 "src/parser.c" /* yacc.c:1652  */
    break;

  case 184:
#line 399 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_or, (yyvsp[0].exp)); }
#line 3019 "src/parser.c" /* yacc.c:1652  */
    break;

  case 186:
#line 400 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_and, (yyvsp[0].exp)); }
#line 3025 "src/parser.c" /* yacc.c:1652  */
    break;

  case 188:
#line 401 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_sor, (yyvsp[0].exp)); }
#line 3031 "src/parser.c" /* yacc.c:1652  */
    break;

  case 190:
#line 402 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_sxor, (yyvsp[0].exp)); }
#line 3037 "src/parser.c" /* yacc.c:1652  */
    break;

  case 192:
#line 403 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_sand, (yyvsp[0].exp)); }
#line 3043 "src/parser.c" /* yacc.c:1652  */
    break;

  case 194:
#line 404 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3049 "src/parser.c" /* yacc.c:1652  */
    break;

  case 196:
#line 405 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3055 "src/parser.c" /* yacc.c:1652  */
    break;

  case 198:
#line 406 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3061 "src/parser.c" /* yacc.c:1652  */
    break;

  case 200:
#line 407 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3067 "src/parser.c" /* yacc.c:1652  */
    break;

  case 202:
#line 408 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3073 "src/parser.c" /* yacc.c:1652  */
    break;

  case 204:
#line 410 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3079 "src/parser.c" /* yacc.c:1652  */
    break;

  case 206:
#line 413 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3085 "src/parser.c" /* yacc.c:1652  */
    break;

  case 207:
#line 415 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_sub; }
#line 3091 "src/parser.c" /* yacc.c:1652  */
    break;

  case 208:
#line 415 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_mul; }
#line 3097 "src/parser.c" /* yacc.c:1652  */
    break;

  case 210:
#line 417 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_not; }
#line 3103 "src/parser.c" /* yacc.c:1652  */
    break;

  case 211:
#line 417 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_spork; }
#line 3109 "src/parser.c" /* yacc.c:1652  */
    break;

  case 212:
#line 417 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_fork; }
#line 3115 "src/parser.c" /* yacc.c:1652  */
    break;

  case 213:
#line 417 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_cmp; }
#line 3121 "src/parser.c" /* yacc.c:1652  */
    break;

  case 215:
#line 420 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3127 "src/parser.c" /* yacc.c:1652  */
    break;

  case 216:
#line 421 "ly/gwion.y" /* yacc.c:1652  */
    {(yyval.exp) = new_exp_unary2(mpool(arg), op_new, (yyvsp[0].type_decl)); }
#line 3133 "src/parser.c" /* yacc.c:1652  */
    break;

  case 217:
#line 422 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(mpool(arg), op_spork, (yyvsp[0].stmt)); }
#line 3139 "src/parser.c" /* yacc.c:1652  */
    break;

  case 218:
#line 423 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(mpool(arg), op_fork, (yyvsp[0].stmt)); }
#line 3145 "src/parser.c" /* yacc.c:1652  */
    break;

  case 219:
#line 426 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, get_pos(arg)), NULL); }
#line 3151 "src/parser.c" /* yacc.c:1652  */
    break;

  case 220:
#line 427 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, get_pos(arg)), (yyvsp[0].arg_list)); }
#line 3157 "src/parser.c" /* yacc.c:1652  */
    break;

  case 221:
#line 428 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3163 "src/parser.c" /* yacc.c:1652  */
    break;

  case 222:
#line 428 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 3169 "src/parser.c" /* yacc.c:1652  */
    break;

  case 223:
#line 431 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3175 "src/parser.c" /* yacc.c:1652  */
    break;

  case 224:
#line 432 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3181 "src/parser.c" /* yacc.c:1652  */
    break;

  case 225:
#line 435 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3187 "src/parser.c" /* yacc.c:1652  */
    break;

  case 226:
#line 435 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = NULL; }
#line 3193 "src/parser.c" /* yacc.c:1652  */
    break;

  case 227:
#line 437 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_inc; }
#line 3199 "src/parser.c" /* yacc.c:1652  */
    break;

  case 228:
#line 437 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_dec; }
#line 3205 "src/parser.c" /* yacc.c:1652  */
    break;

  case 229:
#line 439 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3211 "src/parser.c" /* yacc.c:1652  */
    break;

  case 231:
#line 441 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3217 "src/parser.c" /* yacc.c:1652  */
    break;

  case 232:
#line 443 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3224 "src/parser.c" /* yacc.c:1652  */
    break;

  case 233:
#line 446 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].ival)); }
#line 3230 "src/parser.c" /* yacc.c:1652  */
    break;

  case 234:
#line 446 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3236 "src/parser.c" /* yacc.c:1652  */
    break;

  case 235:
#line 449 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_complex; }
#line 3242 "src/parser.c" /* yacc.c:1652  */
    break;

  case 236:
#line 450 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3248 "src/parser.c" /* yacc.c:1652  */
    break;

  case 237:
#line 451 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3254 "src/parser.c" /* yacc.c:1652  */
    break;

  case 238:
#line 454 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_id(     mpool(arg), (yyvsp[0].sym), get_pos(arg)); }
#line 3260 "src/parser.c" /* yacc.c:1652  */
    break;

  case 239:
#line 455 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_int(    mpool(arg), (yyvsp[0].lval), get_pos(arg)); }
#line 3266 "src/parser.c" /* yacc.c:1652  */
    break;

  case 240:
#line 456 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_float(  mpool(arg), (yyvsp[0].fval), get_pos(arg)); }
#line 3272 "src/parser.c" /* yacc.c:1652  */
    break;

  case 241:
#line 457 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_string( mpool(arg), (yyvsp[0].sval), get_pos(arg)); }
#line 3278 "src/parser.c" /* yacc.c:1652  */
    break;

  case 242:
#line 458 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_char(   mpool(arg), (yyvsp[0].sval), get_pos(arg)); }
#line 3284 "src/parser.c" /* yacc.c:1652  */
    break;

  case 243:
#line 459 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_array(  mpool(arg), (yyvsp[0].array_sub), get_pos(arg)); }
#line 3290 "src/parser.c" /* yacc.c:1652  */
    break;

  case 244:
#line 460 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_vec(    mpool(arg), (yyvsp[-2].ival) ,(yyvsp[-1].exp)); }
#line 3296 "src/parser.c" /* yacc.c:1652  */
    break;

  case 245:
#line 461 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3302 "src/parser.c" /* yacc.c:1652  */
    break;

  case 246:
#line 462 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3308 "src/parser.c" /* yacc.c:1652  */
    break;

  case 247:
#line 463 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3314 "src/parser.c" /* yacc.c:1652  */
    break;

  case 248:
#line 464 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_nil(    mpool(arg),     get_pos(arg)); }
#line 3320 "src/parser.c" /* yacc.c:1652  */
    break;


#line 3324 "src/parser.c" /* yacc.c:1652  */
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
#line 466 "ly/gwion.y" /* yacc.c:1918  */

