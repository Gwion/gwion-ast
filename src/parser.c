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

#define YYMALLOC xmalloc
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))
#define OP_SYM(a) insert_symbol(op2str(a))

ANN uint get_pos(const Scanner*);
ANN void gwion_error(const Scanner*, const m_str s);
ANN Symbol lambda_name(const Scanner*);
m_str op2str(const Operator op);

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

#line 388 "src/parser.c" /* yacc.c:352  */
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
#define YYFINAL  189
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1577

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  244
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  411

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
       0,   105,   105,   106,   109,   110,   114,   115,   116,   120,
     126,   126,   128,   128,   131,   132,   135,   135,   136,   136,
     137,   137,   139,   139,   141,   142,   144,   148,   150,   150,
     152,   156,   160,   161,   161,   162,   163,   163,   166,   167,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   189,   190,   197,   197,   200,   203,   205,
     208,   209,   210,   213,   216,   218,   220,   222,   224,   226,
     228,   230,   235,   237,   242,   243,   244,   245,   249,   250,
     253,   253,   255,   255,   257,   257,   259,   259,   259,   260,
     260,   261,   261,   262,   262,   263,   263,   264,   264,   264,
     265,   265,   265,   269,   270,   271,   275,   276,   277,   280,
     280,   281,   281,   282,   283,   284,   284,   286,   286,   287,
     287,   288,   288,   290,   290,   292,   293,   296,   297,   300,
     301,   302,   305,   305,   308,   316,   316,   316,   316,   316,
     318,   319,   321,   323,   325,   332,   332,   335,   336,   338,
     341,   342,   344,   345,   348,   354,   361,   362,   365,   366,
     368,   369,   370,   371,   372,   373,   375,   375,   376,   376,
     376,   376,   377,   377,   378,   378,   379,   379,   379,   380,
     380,   383,   383,   384,   384,   385,   385,   386,   386,   387,
     387,   388,   388,   389,   389,   390,   390,   391,   391,   392,
     392,   394,   394,   397,   397,   398,   399,   399,   399,   399,
     402,   402,   403,   404,   405,   408,   409,   410,   410,   413,
     414,   417,   417,   419,   419,   421,   422,   422,   424,   427,
     428,   431,   432,   433,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446
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
  "OPERATOR", "TYPEDEF", "RSL", "RSR", "RSAND", "RSOR", "RSXOR", "LTMPL",
  "RTMPL", "NOELSE", "UNION", "ATPAREN", "TYPEOF", "CONSTT", "AUTO",
  "PASTE", "ELLIPSE", "RARROW", "BACKSLASH", "NUM", "FLOATT", "ID",
  "STRING_LIT", "CHAR_LIT", "PP_COMMENT", "PP_INCLUDE", "PP_DEFINE",
  "PP_UNDEF", "PP_IFDEF", "PP_IFNDEF", "PP_ELSE", "PP_ENDIF", "PP_NL",
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
  "mul_exp", "cast_exp", "unary_op", "unary_exp", "lambda_list",
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365
};
# endif

#define YYPACT_NINF -326

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-326)))

#define YYTABLE_NINF -86

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     468,  -326,  -326,  1334,  1016,  1069,   567,  -326,  -326,   -53,
    -326,  -326,    36,    56,   666,    59,    61,    67,   -16,  1334,
      47,   118,   864,    83,    94,  -326,  -326,   -36,   108,   108,
     -53,  -326,  -326,  -326,  -326,  -326,   108,  1493,   118,   -36,
     118,  -326,    98,   -28,   -16,  -326,  -326,    19,  -326,  -326,
     140,  -326,   468,  -326,   135,  -326,  -326,  -326,  -326,   666,
      57,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
     165,   820,  -326,   157,  -326,  -326,  -326,  -326,    69,  -326,
     -36,  -326,  -326,  -326,   -16,  -326,  -326,     5,   109,   107,
     112,   116,   -25,   113,    87,    97,   147,   152,  1387,  -326,
     108,  -326,  -326,    82,  1334,  -326,    40,   180,  1440,  -326,
     179,  -326,   178,  -326,   177,   -16,   118,  1334,  1334,    27,
    1334,  1334,   765,   191,   108,   163,  -326,   167,   100,   169,
    -326,   188,  -326,   202,  -326,  -326,  -326,  -326,   117,   200,
    -326,  -326,   118,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,  -326,  -326,   -36,  -326,  -326,  -326,  -326,   -36,   -36,
    -326,   214,   134,   -16,   -16,  -326,   -16,  -326,   -16,  -326,
    -326,  -326,  -326,  -326,  -326,   -16,  -326,  1334,  1334,  1122,
    -326,  -326,  -326,   200,  -326,   216,  1334,  1440,  1440,  1440,
    1440,  1440,  -326,  -326,  1440,  1440,  1440,  1440,  1440,   -36,
     -36,  -326,  -326,  1334,   -16,   -36,   211,  -326,  -326,   213,
    -326,  -326,   215,  -326,   141,   221,   -36,   217,   218,  1334,
    1334,   219,   220,   135,   963,  -326,  -326,  -326,  -326,  -326,
     -16,  -326,  -326,   -16,   222,   223,    13,   -16,   -36,   -16,
    -326,   226,   224,   175,  -326,  -326,  -326,  -326,  -326,  -326,
    -326,   -16,   204,   109,   107,   112,   116,   -25,   113,    87,
      97,   147,   152,  -326,   227,  -326,   156,  1175,  -326,  -326,
    1228,  -326,  -326,   -16,    13,   -16,   666,   666,   240,   242,
     666,   666,   -16,  1281,   230,   189,   -36,   -36,  -326,   235,
    -326,    39,  -326,   135,    11,   135,   -16,  -326,  1440,   -36,
    -326,  -326,   237,  -326,  -326,   108,   241,   225,  -326,  -326,
    -326,  -326,  -326,   231,   666,   239,   -16,   -36,   243,   255,
     -16,   253,  -326,  -326,    15,  -326,   -16,  -326,   247,   263,
     -16,   256,  -326,  -326,  -326,   257,  -326,  -326,   -36,  -326,
     666,  1334,  -326,   666,   271,  -326,   468,   -36,   200,  -326,
     108,   270,  -326,   200,  -326,   -16,   -36,  -326,   -16,   108,
     272,  -326,  -326,   919,  -326,  -326,   468,   260,  -326,   266,
    -326,   157,  -326,   -36,  -326,   157,   276,  -326,   277,  -326,
     -36,   666,  -326,  -326,   108,  -326,  -326,  -326,  -326,  -326,
    -326
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    79,   204,     0,     0,     0,     0,   232,   231,   124,
     209,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,     0,     0,     0,   223,   224,     0,   207,   208,
     124,   125,   126,   127,   128,   203,     0,     0,   132,     0,
     132,   233,     0,     0,   218,   235,   236,    53,   237,   238,
       0,     2,     4,     8,   145,     6,    50,    51,    43,    22,
     234,    48,    44,    45,    47,    46,    41,    42,    49,    40,
       0,    80,   109,   110,   239,    82,   115,   112,   130,   129,
       0,   140,     7,   150,     0,    52,   111,   179,   181,   183,
     185,   187,   189,   191,   193,   195,   197,   199,     0,   201,
       0,   205,   230,   210,     0,   226,   234,     0,     0,   244,
       0,   106,     0,    38,     0,     0,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   234,   230,    85,   226,
     133,     0,    74,     0,    76,    77,    30,   212,    20,    28,
     213,   214,   132,   144,    86,   177,   176,   178,    90,    91,
      92,    93,    94,    89,    87,    95,    96,   102,    88,   171,
     169,   170,   168,   175,   174,   172,   173,    97,    98,    99,
     100,   101,   135,     0,   137,   136,   139,   138,     0,     0,
      31,   219,     0,    56,     0,   151,   215,   217,     0,     1,
       5,   146,   147,    23,    58,     0,    78,     0,     0,     0,
     108,   131,   116,   158,   113,   156,     0,     0,     0,     0,
       0,     0,   166,   167,     0,     0,     0,     0,     0,     0,
       0,   211,   243,     0,     0,     0,     0,   227,   229,     0,
     241,   242,   103,    39,     0,    16,     0,     0,     0,     0,
       0,     0,     0,   145,     0,    59,    63,    62,    61,    60,
       0,    75,    29,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,    18,   216,    54,    21,    81,    83,   107,
     159,     0,     0,   182,   184,   186,   188,   190,   192,   194,
     196,   198,   200,   202,     0,   225,     0,     0,   228,   240,
       0,   104,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,     0,   122,     0,
      26,     0,   220,   145,     0,   145,     0,   157,     0,     0,
      84,   222,     0,   105,    17,     0,     0,    72,    64,    65,
      70,    69,    71,     0,     0,     0,    56,     0,     0,     0,
       0,     0,   121,    27,   120,    24,    56,   148,     0,     0,
       0,     0,   149,    19,   180,     0,   221,   134,   118,    25,
       0,     0,    66,     0,     0,    10,    13,     0,   160,    32,
       0,    36,   119,   163,    35,    56,   152,   114,    56,     0,
      33,   117,    73,     0,    67,    57,    14,     0,    12,     0,
     162,   161,   142,     0,   165,   164,     0,   153,     0,   143,
       0,     0,    15,     9,     0,    37,   155,   154,    34,    68,
     141
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -326,  -326,   229,  -325,  -326,  -326,  -326,  -104,  -211,  -182,
    -326,    21,  -326,  -326,  -326,  -326,   -18,   -54,  -144,  -276,
    -236,   -58,  -326,   -21,   -12,     0,  -174,  -326,  -326,  -326,
    -326,  -326,  -326,  -326,  -326,  -111,   251,   -70,  -326,   261,
     -63,  -322,  -115,    96,   212,  -326,  -326,  -326,    12,   269,
    -326,   233,    -5,   -17,  -326,  -326,  -326,  -226,   264,    89,
     -64,  -326,    42,  -326,   -35,  -326,  -326,   280,   283,   284,
     286,     6,  -326,   119,   121,   122,   120,   124,   123,   126,
     111,   125,   115,     1,    43,   153,  -326,  -189,  -326,    -9,
     318,   323,  -326,   324
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    50,    51,    52,    53,   338,   387,   388,   234,   262,
      54,    55,   256,   294,    56,    57,   180,   137,   181,   380,
     381,   345,   372,    58,    59,   138,   261,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,   226,   198,
      72,    73,    74,    75,    76,   349,    77,   359,   310,   116,
      78,    79,    80,   131,    81,   173,    82,   192,    83,    84,
     351,    85,   204,   205,   369,   374,   214,   215,   216,   217,
     218,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   108,    99,   187,   100,   182,   288,   101,
     102,   103,   104,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    98,   119,   106,   106,   106,    60,   140,   141,   136,
     200,   244,   348,   266,    60,   143,   130,   302,   123,   106,
     126,   179,   106,   183,   252,   308,   344,   114,   178,   254,
     339,   341,   115,   130,   255,   130,   286,   206,   212,   304,
     227,   386,   343,   355,   186,   213,   391,   117,   125,    39,
     344,   395,    60,    98,    42,    43,     3,    39,     4,    60,
       5,   386,    42,    47,   239,   227,   240,   118,   -20,   312,
     120,    47,   121,     7,     8,   283,   284,   313,   122,   222,
     193,   207,   324,    47,   203,   -20,   134,   347,   270,   352,
     194,   389,   295,   -85,   228,   223,    39,   135,   126,   236,
      39,    42,    43,   246,   106,    42,    43,   309,   126,   184,
      47,   130,   188,   223,    47,   235,   139,   106,   106,   228,
     106,   106,   106,     6,    39,   253,    33,    34,   139,    42,
      43,    25,    26,   303,   353,   195,    41,   130,    47,   -20,
     189,   221,   224,    44,    45,    46,    47,    48,    49,    25,
      26,   221,   195,   145,   146,   147,   -20,   405,   165,   166,
     224,   257,   364,   191,   408,   163,   164,   225,   196,   291,
     199,   208,   373,    31,    32,    33,    34,   159,   160,   161,
     162,   209,   219,   260,   263,   225,   186,   210,   265,   211,
     230,   231,   232,   233,   245,   263,   247,   106,   106,   106,
     248,   396,   249,   250,   398,   251,   106,   126,   126,   126,
     126,   126,   195,     5,   126,   126,   126,   126,   126,   258,
     259,   271,   287,   106,   285,   289,   293,   292,   290,   296,
     297,   300,   301,   306,   307,   316,   315,   318,   319,   106,
     106,   314,   320,   329,   106,   330,   336,   342,   337,   356,
     235,   363,   358,   305,   107,   110,   112,   311,   366,   263,
     367,   360,   139,   375,   361,   370,   376,   139,   139,   379,
     124,   203,   378,   133,   385,   393,   403,   400,   404,   406,
     407,   190,   402,   365,   327,   328,   371,   106,   331,   332,
     106,   383,   202,   235,   268,   326,    60,    60,   172,   142,
      60,    60,   333,   106,   357,   390,   325,   185,   139,   139,
     394,   201,   397,   317,   139,   377,   263,   174,   126,   136,
     175,   176,   362,   177,   354,   139,   273,   280,   200,   274,
     276,   275,   200,   282,    60,   277,   260,   278,   127,   264,
     368,   279,   281,   128,   129,     0,   260,   139,   382,   392,
     368,   384,     0,     0,     0,   229,     0,     0,   399,     0,
      60,   106,     0,    60,     0,     0,    60,    98,   237,   238,
       0,   241,   242,     0,     0,   260,     0,     0,   260,     0,
       0,     0,     0,   410,     0,     0,    60,    98,     0,   409,
       0,     0,     0,     0,     0,   340,   340,     0,     0,     0,
     346,    60,     0,   350,     0,     0,     0,     0,   340,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,     0,     0,     0,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   340,   267,     0,
     112,     0,     0,     0,     0,     0,   340,   272,     0,     0,
       0,     0,     0,     0,     0,   350,     0,     0,     0,     0,
       0,     1,     0,     0,   112,     2,     0,     3,     0,     4,
       0,     5,   340,     6,     0,     0,     0,     0,     0,   340,
     298,   299,     0,     0,     7,     8,     0,     9,     0,    10,
       0,     0,    11,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,   322,     0,
       0,   112,     0,     0,     0,    36,    37,    38,     0,     0,
       0,     0,     0,    39,   335,     0,    40,    41,    42,    43,
       0,     0,     0,     0,    44,    45,    46,    47,    48,    49,
       1,     0,     0,     0,     2,     0,     3,     0,     4,     0,
       5,     0,     6,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     0,     0,    10,     0,
       0,    11,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    31,    32,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,    39,     0,     0,    40,    41,    42,    43,     0,
       0,     0,     0,    44,    45,    46,    47,    48,    49,     1,
       0,     0,     0,     2,     0,     3,     0,     4,     0,     5,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,    10,     0,     0,
      11,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,    31,    32,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,    39,     0,     0,    40,    41,    42,    43,     0,     0,
       0,     0,    44,    45,    46,    47,    48,    49,     1,     0,
       0,     0,     2,     0,     3,     0,     4,     0,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,    10,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    26,    27,    28,    29,     0,
      31,    32,    33,    34,   144,   197,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
      39,     0,     0,     0,    41,    42,    43,   243,     0,     0,
       0,    44,    45,    46,    47,    48,    49,   132,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     0,
       0,   157,     0,   158,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,    10,     0,     0,    11,     0,
     167,   168,   169,   170,   171,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,    27,    28,    29,     0,    31,
      32,    33,    34,   144,     0,     0,     0,     0,     0,     0,
       0,   401,    35,     0,     0,     0,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,     0,     0,    39,
       0,     0,     0,    41,    42,    43,     0,     0,     0,     0,
      44,    45,    46,    47,    48,    49,     1,     0,     0,     0,
       2,     0,     3,     0,     4,     0,     5,     0,     0,     0,
     157,     0,   158,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,    10,     0,     0,    11,     0,   167,
     168,   169,   170,   171,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,    27,    28,    29,     0,    31,    32,
      33,    34,     0,     2,     0,     3,     0,     4,   109,     5,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,    10,    39,     0,
      11,     0,    41,    42,    43,     0,     0,     0,     0,    44,
      45,    46,    47,    48,    49,    25,    26,    27,    28,    29,
       0,    31,    32,    33,    34,     0,     2,     0,     3,     0,
       4,     0,     5,   111,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
      10,    39,     0,    11,     0,    41,    42,    43,     0,     0,
       0,     0,    44,    45,    46,    47,    48,    49,    25,    26,
      27,    28,    29,     0,    31,    32,    33,    34,     0,     2,
       0,     3,     0,     4,     0,     5,   269,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,    10,    39,     0,    11,     0,    41,    42,
      43,     0,     0,     0,     0,    44,    45,    46,    47,    48,
      49,    25,    26,    27,    28,    29,     0,    31,    32,    33,
      34,     0,     2,     0,     3,     0,     4,   321,     5,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,    10,    39,     0,    11,
       0,    41,    42,    43,     0,     0,     0,     0,    44,    45,
      46,    47,    48,    49,    25,    26,    27,    28,    29,     0,
      31,    32,    33,    34,     0,     2,     0,     3,     0,     4,
       0,     5,   323,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,    10,
      39,     0,    11,     0,    41,    42,    43,     0,     0,     0,
       0,    44,    45,    46,    47,    48,    49,    25,    26,    27,
      28,    29,     0,    31,    32,    33,    34,     0,     2,     0,
       3,     0,     4,   334,     5,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,    10,    39,     0,    11,     0,    41,    42,    43,
       0,     0,     0,     0,    44,    45,    46,    47,    48,    49,
      25,    26,    27,    28,    29,     0,    31,    32,    33,    34,
       0,     2,     0,     3,     0,     4,     0,     5,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,    10,    39,     0,    11,     0,
      41,    42,    43,     0,     0,     0,     0,    44,    45,    46,
      47,    48,    49,    25,    26,    27,    28,    29,     0,    31,
      32,    33,    34,     0,     2,     0,     3,     0,     4,     0,
       5,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     0,     0,    10,    39,
       0,    11,     0,    41,    42,    43,     0,     0,     0,     0,
      44,    45,    46,    47,    48,    49,    25,    26,    27,    28,
      29,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     4,     0,     5,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,     7,     8,     0,     0,
       0,    10,     0,     0,    11,     0,    41,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,    49,    25,
      26,    27,    28,    29,     0,     0,     0,   144,     0,   145,
     146,   147,     0,     0,     0,     0,     0,     0,    35,     0,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,    44,    45,    46,    47,
      48,    49,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,     0,   158,   159,   160,   161,
     162,   163,   164,     0,   165,   166,     0,     0,     0,     0,
       0,     0,     0,   167,   168,   169,   170,   171
};

static const yytype_int16 yycheck[] =
{
       0,     0,    14,     3,     4,     5,     6,    28,    29,    27,
      73,   122,     1,   195,    14,    36,    21,   243,    18,    19,
      20,    38,    22,    40,   139,    12,    11,     6,    37,   173,
     306,   307,    85,    38,   178,    40,   225,    32,    63,   250,
     103,   366,     3,   319,    44,    70,   368,    11,     1,    85,
      11,   373,    52,    52,    90,    91,     9,    85,    11,    59,
      13,   386,    90,    99,    37,   128,    39,    11,    28,   258,
      11,    99,    11,    26,    27,   219,   220,   259,    11,   100,
      59,    76,   293,    99,    84,    28,     3,   313,   203,   315,
      33,   367,   236,    11,   103,    13,    85,     3,    98,   116,
      85,    90,    91,   124,   104,    90,    91,    94,   108,    11,
      99,   116,    93,    13,    99,   115,    27,   117,   118,   128,
     120,   121,   122,    15,    85,   142,    57,    58,    39,    90,
      91,    49,    50,   244,   316,    95,    89,   142,    99,    99,
       0,    98,    60,    96,    97,    98,    99,   100,   101,    49,
      50,   108,    95,     6,     7,     8,    99,   393,    71,    72,
      60,   179,   336,    28,   400,    68,    69,    85,     3,   232,
      13,    62,   346,    55,    56,    57,    58,    64,    65,    66,
      67,    74,    30,   183,   184,    85,   186,    75,   188,    73,
      10,    12,    14,    16,     3,   195,    33,   197,   198,   199,
      33,   375,    33,    15,   378,     3,   206,   207,   208,   209,
     210,   211,    95,    13,   214,   215,   216,   217,   218,     5,
      86,     5,    11,   223,   224,    12,     5,    86,    13,    12,
      12,    12,    12,    11,    11,    60,    12,    33,    11,   239,
     240,    15,    86,     3,   244,     3,    16,    12,    59,    12,
     250,    12,    11,   253,     3,     4,     5,   257,    15,   259,
       5,    36,   173,    16,    33,    12,     3,   178,   179,    12,
      19,   271,    16,    22,     3,     5,    16,     5,    12,     3,
       3,    52,   386,   337,   296,   297,   344,   287,   300,   301,
     290,   361,    80,   293,   198,   295,   296,   297,    37,    30,
     300,   301,   302,   303,   325,   368,   294,    43,   219,   220,
     373,    78,   376,   271,   225,   350,   316,    37,   318,   337,
      37,    37,   334,    37,   318,   236,   207,   216,   391,   208,
     210,   209,   395,   218,   334,   211,   336,   214,    20,   186,
     340,   215,   217,    20,    20,    -1,   346,   258,   360,   370,
     350,   363,    -1,    -1,    -1,   104,    -1,    -1,   379,    -1,
     360,   361,    -1,   363,    -1,    -1,   366,   366,   117,   118,
      -1,   120,   121,    -1,    -1,   375,    -1,    -1,   378,    -1,
      -1,    -1,    -1,   404,    -1,    -1,   386,   386,    -1,   401,
      -1,    -1,    -1,    -1,    -1,   306,   307,    -1,    -1,    -1,
     311,   401,    -1,   314,    -1,    -1,    -1,    -1,   319,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,    -1,
      -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,   197,    -1,
     199,    -1,    -1,    -1,    -1,    -1,   367,   206,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   376,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,   223,     7,    -1,     9,    -1,    11,
      -1,    13,   393,    15,    -1,    -1,    -1,    -1,    -1,   400,
     239,   240,    -1,    -1,    26,    27,    -1,    29,    -1,    31,
      -1,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,   287,    -1,
      -1,   290,    -1,    -1,    -1,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    85,   303,    -1,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
       3,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,
      13,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,
      -1,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,     3,
      -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,     3,    -1,
      -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    89,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    -1,
      -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    68,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,     3,    -1,    -1,    -1,
       7,    -1,     9,    -1,    11,    -1,    13,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    -1,     7,    -1,     9,    -1,    11,    12,    13,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    85,    -1,
      34,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    85,    -1,    34,    -1,    89,    90,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    -1,     7,
      -1,     9,    -1,    11,    -1,    13,    14,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    85,    -1,    34,    -1,    89,    90,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,     7,    -1,     9,    -1,    11,    12,    13,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    85,    -1,    34,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    14,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      85,    -1,    34,    -1,    89,    90,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,     7,    -1,
       9,    -1,    11,    12,    13,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    85,    -1,    34,    -1,    89,    90,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    85,    -1,    34,    -1,
      89,    90,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,     7,    -1,     9,    -1,    11,    -1,
      13,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    85,
      -1,    34,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,     9,
      -1,    11,    -1,    13,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    49,
      50,    51,    52,    53,    -1,    -1,    -1,     4,    -1,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     9,    11,    13,    15,    26,    27,    29,
      31,    34,    35,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    68,    77,    78,    79,    85,
      88,    89,    90,    91,    96,    97,    98,    99,   100,   101,
     112,   113,   114,   115,   121,   122,   125,   126,   134,   135,
     136,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   151,   152,   153,   154,   155,   157,   161,   162,
     163,   165,   167,   169,   170,   172,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     197,   200,   201,   202,   203,   204,   136,   147,   194,    12,
     147,    14,   147,    16,   122,    85,   160,    11,    11,   135,
      11,    11,    11,   136,   147,     1,   136,   201,   202,   204,
     163,   164,     3,   147,     3,     3,   127,   128,   136,   170,
     134,   134,   160,   134,     4,     6,     7,     8,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    61,    63,    64,
      65,    66,    67,    68,    69,    71,    72,    80,    81,    82,
      83,    84,   150,   166,   178,   179,   180,   181,   200,   164,
     127,   129,   198,   164,    11,   169,   136,   196,    93,     0,
     113,    28,   168,   122,    33,    95,     3,     5,   150,    13,
     151,   162,   155,   136,   173,   174,    32,    76,    62,    74,
      75,    73,    63,    70,   177,   178,   179,   180,   181,    30,
      78,   195,   134,    13,    60,    85,   149,   151,   200,   147,
      10,    12,    14,    16,   119,   136,   164,   147,   147,    37,
      39,   147,   147,    92,   146,     3,   134,    33,    33,    33,
      15,     3,   153,   164,   129,   129,   123,   127,     5,    86,
     136,   137,   120,   136,   196,   136,   120,   147,   154,    14,
     153,     5,   147,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   129,   129,   136,   198,    11,   199,    12,
      13,   151,    86,     5,   124,   129,    12,    12,   147,   147,
      12,    12,   168,   146,   119,   136,    11,    11,    12,    94,
     159,   136,   198,   120,    15,    12,    60,   173,    33,    11,
      86,    12,   147,    14,   119,   159,   136,   135,   135,     3,
       3,   135,   135,   136,    12,   147,    16,    59,   116,   130,
     170,   130,    12,     3,    11,   132,   170,   168,     1,   156,
     170,   171,   168,   120,   182,   130,    12,   134,    11,   158,
      36,    33,   135,    12,   137,   128,    15,     5,   136,   175,
      12,   132,   133,   137,   176,    16,     3,   175,    16,    12,
     130,   131,   135,   148,   135,     3,   114,   117,   118,   130,
     151,   152,   134,     5,   151,   152,   137,   171,   137,   134,
       5,    12,   118,    16,    12,   131,     3,     3,   131,   135,
     134
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
     153,   154,   154,   155,   156,   157,   157,   158,   158,   132,
     132,   159,   159,   160,   160,   161,   161,   162,   162,   163,
     163,   163,   164,   164,   165,   166,   166,   166,   166,   166,
     167,   167,   167,   167,   167,   168,   168,   169,   169,   169,
     170,   170,   171,   171,   172,   172,   173,   173,   174,   174,
     175,   175,   175,   176,   176,   176,   177,   177,   178,   178,
     178,   178,   179,   179,   180,   180,   181,   181,   181,   182,
     182,   183,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   189,   189,   190,   190,   191,   191,   192,
     192,   193,   193,   194,   194,   194,   194,   194,   194,   194,
     195,   195,   195,   195,   195,   196,   196,   197,   197,   198,
     198,   199,   199,   200,   200,   201,   202,   202,   202,   202,
     202,   203,   203,   203,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204
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
       1,     1,     1,     2,     2,     1,     2,     2,     1,     2,
       1,     2,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     2,     0,     1,     6,     1,     1,     1,     1,     1,
       1,     9,     7,     7,     2,     0,     1,     2,     5,     5,
       1,     2,     2,     3,     8,     8,     1,     3,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     2,     2,     1,     1,
       3,     3,     2,     1,     1,     3,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     2,     2
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
#line 105 "ly/gwion.y" /* yacc.c:1652  */
    { arg->ast = (yyvsp[0].ast); }
#line 2054 "src/parser.c" /* yacc.c:1652  */
    break;

  case 3:
#line 106 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "file is empty.\n"); YYERROR; }
#line 2060 "src/parser.c" /* yacc.c:1652  */
    break;

  case 4:
#line 109 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2066 "src/parser.c" /* yacc.c:1652  */
    break;

  case 5:
#line 110 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2072 "src/parser.c" /* yacc.c:1652  */
    break;

  case 6:
#line 114 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2078 "src/parser.c" /* yacc.c:1652  */
    break;

  case 7:
#line 115 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2084 "src/parser.c" /* yacc.c:1652  */
    break;

  case 8:
#line 116 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2090 "src/parser.c" /* yacc.c:1652  */
    break;

  case 9:
#line 121 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].class_body), get_pos(arg));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->tmpl = new_tmpl_class(mpool(arg), (yyvsp[-6].id_list), -1);
  }
#line 2099 "src/parser.c" /* yacc.c:1652  */
    break;

  case 10:
#line 126 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2105 "src/parser.c" /* yacc.c:1652  */
    break;

  case 11:
#line 126 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = NULL; }
#line 2111 "src/parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 128 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = NULL; }
#line 2117 "src/parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 131 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[0].section), NULL); }
#line 2123 "src/parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 132 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2129 "src/parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 135 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), get_pos(arg)); }
#line 2135 "src/parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 135 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2141 "src/parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 136 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), get_pos(arg)); }
#line 2147 "src/parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 136 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2153 "src/parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 137 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), get_pos(arg)); }
#line 2159 "src/parser.c" /* yacc.c:1652  */
    break;

  case 21:
#line 137 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2165 "src/parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 139 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2171 "src/parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 139 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2177 "src/parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 141 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].arg_list)); }
#line 2183 "src/parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 142 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].arg_list)); }
#line 2189 "src/parser.c" /* yacc.c:1652  */
    break;

  case 26:
#line 144 "ly/gwion.y" /* yacc.c:1652  */
    {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp)
    { gwion_error(arg, "type must be defined with empty []'s"); YYERROR;}
(yyval.stmt) = new_stmt_fptr(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag)); }
#line 2198 "src/parser.c" /* yacc.c:1652  */
    break;

  case 27:
#line 148 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_type(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym)); (yyvsp[-2].type_decl)->flag |= (yyvsp[-3].flag); }
#line 2204 "src/parser.c" /* yacc.c:1652  */
    break;

  case 29:
#line 150 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2210 "src/parser.c" /* yacc.c:1652  */
    break;

  case 30:
#line 152 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2218 "src/parser.c" /* yacc.c:1652  */
    break;

  case 31:
#line 156 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2226 "src/parser.c" /* yacc.c:1652  */
    break;

  case 32:
#line 160 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2232 "src/parser.c" /* yacc.c:1652  */
    break;

  case 33:
#line 161 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2238 "src/parser.c" /* yacc.c:1652  */
    break;

  case 34:
#line 161 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2244 "src/parser.c" /* yacc.c:1652  */
    break;

  case 35:
#line 162 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2250 "src/parser.c" /* yacc.c:1652  */
    break;

  case 36:
#line 163 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2256 "src/parser.c" /* yacc.c:1652  */
    break;

  case 37:
#line 163 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2262 "src/parser.c" /* yacc.c:1652  */
    break;

  case 38:
#line 166 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, get_pos(arg)); }
#line 2268 "src/parser.c" /* yacc.c:1652  */
    break;

  case 39:
#line 167 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2274 "src/parser.c" /* yacc.c:1652  */
    break;

  case 53:
#line 189 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2280 "src/parser.c" /* yacc.c:1652  */
    break;

  case 54:
#line 190 "ly/gwion.y" /* yacc.c:1652  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2290 "src/parser.c" /* yacc.c:1652  */
    break;

  case 56:
#line 197 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = NULL; }
#line 2296 "src/parser.c" /* yacc.c:1652  */
    break;

  case 57:
#line 200 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_enum(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2303 "src/parser.c" /* yacc.c:1652  */
    break;

  case 58:
#line 203 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, get_pos(arg)); }
#line 2309 "src/parser.c" /* yacc.c:1652  */
    break;

  case 59:
#line 205 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, get_pos(arg)); }
#line 2315 "src/parser.c" /* yacc.c:1652  */
    break;

  case 60:
#line 208 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2321 "src/parser.c" /* yacc.c:1652  */
    break;

  case 61:
#line 209 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2327 "src/parser.c" /* yacc.c:1652  */
    break;

  case 62:
#line 210 "ly/gwion.y" /* yacc.c:1652  */
    { gw_err("unhandled expression type in case statement.\n"); YYERROR; }
#line 2333 "src/parser.c" /* yacc.c:1652  */
    break;

  case 63:
#line 213 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_switch(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2339 "src/parser.c" /* yacc.c:1652  */
    break;

  case 64:
#line 217 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), ae_stmt_while, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2345 "src/parser.c" /* yacc.c:1652  */
    break;

  case 65:
#line 219 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), ae_stmt_while, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2351 "src/parser.c" /* yacc.c:1652  */
    break;

  case 66:
#line 221 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2357 "src/parser.c" /* yacc.c:1652  */
    break;

  case 67:
#line 223 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2363 "src/parser.c" /* yacc.c:1652  */
    break;

  case 68:
#line 225 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2369 "src/parser.c" /* yacc.c:1652  */
    break;

  case 69:
#line 227 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), ae_stmt_until, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2375 "src/parser.c" /* yacc.c:1652  */
    break;

  case 70:
#line 229 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), ae_stmt_until, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2381 "src/parser.c" /* yacc.c:1652  */
    break;

  case 71:
#line 231 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2387 "src/parser.c" /* yacc.c:1652  */
    break;

  case 72:
#line 236 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2393 "src/parser.c" /* yacc.c:1652  */
    break;

  case 73:
#line 238 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2399 "src/parser.c" /* yacc.c:1652  */
    break;

  case 74:
#line 242 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, get_pos(arg)); }
#line 2405 "src/parser.c" /* yacc.c:1652  */
    break;

  case 75:
#line 243 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2411 "src/parser.c" /* yacc.c:1652  */
    break;

  case 76:
#line 244 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_break, get_pos(arg)); }
#line 2417 "src/parser.c" /* yacc.c:1652  */
    break;

  case 77:
#line 245 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_continue, get_pos(arg)); }
#line 2423 "src/parser.c" /* yacc.c:1652  */
    break;

  case 78:
#line 249 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2429 "src/parser.c" /* yacc.c:1652  */
    break;

  case 79:
#line 250 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, get_pos(arg)); }
#line 2435 "src/parser.c" /* yacc.c:1652  */
    break;

  case 81:
#line 253 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2441 "src/parser.c" /* yacc.c:1652  */
    break;

  case 83:
#line 255 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 2447 "src/parser.c" /* yacc.c:1652  */
    break;

  case 84:
#line 257 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2453 "src/parser.c" /* yacc.c:1652  */
    break;

  case 85:
#line 257 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = NULL; }
#line 2459 "src/parser.c" /* yacc.c:1652  */
    break;

  case 86:
#line 259 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_chuck; }
#line 2465 "src/parser.c" /* yacc.c:1652  */
    break;

  case 87:
#line 259 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_unchuck; }
#line 2471 "src/parser.c" /* yacc.c:1652  */
    break;

  case 88:
#line 259 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_eq; }
#line 2477 "src/parser.c" /* yacc.c:1652  */
    break;

  case 89:
#line 260 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_ref; }
#line 2483 "src/parser.c" /* yacc.c:1652  */
    break;

  case 90:
#line 260 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_radd; }
#line 2489 "src/parser.c" /* yacc.c:1652  */
    break;

  case 91:
#line 261 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsub; }
#line 2495 "src/parser.c" /* yacc.c:1652  */
    break;

  case 92:
#line 261 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rmul; }
#line 2501 "src/parser.c" /* yacc.c:1652  */
    break;

  case 93:
#line 262 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rdiv; }
#line 2507 "src/parser.c" /* yacc.c:1652  */
    break;

  case 94:
#line 262 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rmod; }
#line 2513 "src/parser.c" /* yacc.c:1652  */
    break;

  case 95:
#line 263 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_trig; }
#line 2519 "src/parser.c" /* yacc.c:1652  */
    break;

  case 96:
#line 263 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_untrig; }
#line 2525 "src/parser.c" /* yacc.c:1652  */
    break;

  case 97:
#line 264 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsl; }
#line 2531 "src/parser.c" /* yacc.c:1652  */
    break;

  case 98:
#line 264 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsr; }
#line 2537 "src/parser.c" /* yacc.c:1652  */
    break;

  case 99:
#line 264 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsand; }
#line 2543 "src/parser.c" /* yacc.c:1652  */
    break;

  case 100:
#line 265 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsor; }
#line 2549 "src/parser.c" /* yacc.c:1652  */
    break;

  case 101:
#line 265 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_rsxor; }
#line 2555 "src/parser.c" /* yacc.c:1652  */
    break;

  case 102:
#line 265 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_coloncolon; }
#line 2561 "src/parser.c" /* yacc.c:1652  */
    break;

  case 103:
#line 269 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2567 "src/parser.c" /* yacc.c:1652  */
    break;

  case 104:
#line 270 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[-2].exp)->next){ gwion_error(arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2573 "src/parser.c" /* yacc.c:1652  */
    break;

  case 105:
#line 271 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "partially empty array init [...][]..."); YYERROR; }
#line 2579 "src/parser.c" /* yacc.c:1652  */
    break;

  case 106:
#line 275 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2585 "src/parser.c" /* yacc.c:1652  */
    break;

  case 107:
#line 276 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2591 "src/parser.c" /* yacc.c:1652  */
    break;

  case 108:
#line 277 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "partially empty array init [][...]"); YYERROR; }
#line 2597 "src/parser.c" /* yacc.c:1652  */
    break;

  case 113:
#line 282 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2603 "src/parser.c" /* yacc.c:1652  */
    break;

  case 114:
#line 283 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2609 "src/parser.c" /* yacc.c:1652  */
    break;

  case 116:
#line 284 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2615 "src/parser.c" /* yacc.c:1652  */
    break;

  case 117:
#line 286 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2621 "src/parser.c" /* yacc.c:1652  */
    break;

  case 118:
#line 286 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2627 "src/parser.c" /* yacc.c:1652  */
    break;

  case 119:
#line 287 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2633 "src/parser.c" /* yacc.c:1652  */
    break;

  case 120:
#line 287 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2639 "src/parser.c" /* yacc.c:1652  */
    break;

  case 121:
#line 288 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2645 "src/parser.c" /* yacc.c:1652  */
    break;

  case 122:
#line 288 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2651 "src/parser.c" /* yacc.c:1652  */
    break;

  case 123:
#line 290 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2657 "src/parser.c" /* yacc.c:1652  */
    break;

  case 124:
#line 290 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = NULL; }
#line 2663 "src/parser.c" /* yacc.c:1652  */
    break;

  case 125:
#line 292 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_static; }
#line 2669 "src/parser.c" /* yacc.c:1652  */
    break;

  case 126:
#line 293 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_global; }
#line 2675 "src/parser.c" /* yacc.c:1652  */
    break;

  case 127:
#line 296 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_private; }
#line 2681 "src/parser.c" /* yacc.c:1652  */
    break;

  case 128:
#line 297 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_protect; }
#line 2687 "src/parser.c" /* yacc.c:1652  */
    break;

  case 129:
#line 300 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2693 "src/parser.c" /* yacc.c:1652  */
    break;

  case 130:
#line 301 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2699 "src/parser.c" /* yacc.c:1652  */
    break;

  case 131:
#line 302 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2705 "src/parser.c" /* yacc.c:1652  */
    break;

  case 132:
#line 305 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2711 "src/parser.c" /* yacc.c:1652  */
    break;

  case 133:
#line 305 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2717 "src/parser.c" /* yacc.c:1652  */
    break;

  case 134:
#line 309 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag));
    if((yyvsp[-4].id_list)) {
      SET_FLAG((yyval.func_def), template);
      (yyval.func_def)->tmpl = new_tmpl_list(mpool(arg), (yyvsp[-4].id_list), -1);
    }
  }
#line 2728 "src/parser.c" /* yacc.c:1652  */
    break;

  case 141:
#line 320 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), OP_SYM((yyvsp[-7].ival)), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2734 "src/parser.c" /* yacc.c:1652  */
    break;

  case 142:
#line 322 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), OP_SYM((yyvsp[-5].ival)), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op); }
#line 2740 "src/parser.c" /* yacc.c:1652  */
    break;

  case 143:
#line 324 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), OP_SYM((yyvsp[-6].ival)), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary); }
#line 2746 "src/parser.c" /* yacc.c:1652  */
    break;

  case 144:
#line 326 "ly/gwion.y" /* yacc.c:1652  */
    {
ID_List l = new_id_list(mpool(arg), insert_symbol("void"), get_pos(arg));
(yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), new_type_decl(mpool(arg), l, 0),
       insert_symbol("dtor"), NULL), (yyvsp[0].stmt), ae_flag_dtor); }
#line 2755 "src/parser.c" /* yacc.c:1652  */
    break;

  case 145:
#line 332 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = 0; }
#line 2761 "src/parser.c" /* yacc.c:1652  */
    break;

  case 146:
#line 332 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_flag_ref; }
#line 2767 "src/parser.c" /* yacc.c:1652  */
    break;

  case 147:
#line 335 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].id_list), (yyvsp[0].ival)); }
#line 2773 "src/parser.c" /* yacc.c:1652  */
    break;

  case 148:
#line 336 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].id_list), (yyvsp[0].ival));
      (yyval.type_decl)->types = (yyvsp[-3].type_list); }
#line 2780 "src/parser.c" /* yacc.c:1652  */
    break;

  case 149:
#line 338 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-2].id_list), (yyvsp[0].ival)); (yyval.type_decl)->xid->ref = 1; }
#line 2786 "src/parser.c" /* yacc.c:1652  */
    break;

  case 150:
#line 341 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2792 "src/parser.c" /* yacc.c:1652  */
    break;

  case 151:
#line 342 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 2798 "src/parser.c" /* yacc.c:1652  */
    break;

  case 152:
#line 344 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2804 "src/parser.c" /* yacc.c:1652  */
    break;

  case 153:
#line 345 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2810 "src/parser.c" /* yacc.c:1652  */
    break;

  case 154:
#line 348 "ly/gwion.y" /* yacc.c:1652  */
    {
      (yyval.stmt) = new_stmt_union(mpool(arg), (yyvsp[-3].decl_list), get_pos(arg));
      (yyval.stmt)->d.stmt_union.type_xid = (yyvsp[-5].sym);
      (yyval.stmt)->d.stmt_union.xid = (yyvsp[-1].sym);
      (yyval.stmt)->d.stmt_union.flag = (yyvsp[-6].flag);
    }
#line 2821 "src/parser.c" /* yacc.c:1652  */
    break;

  case 155:
#line 354 "ly/gwion.y" /* yacc.c:1652  */
    {
    gwion_error(arg, "Unions should only contain declarations.");
    YYERROR;
    }
#line 2830 "src/parser.c" /* yacc.c:1652  */
    break;

  case 156:
#line 361 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2836 "src/parser.c" /* yacc.c:1652  */
    break;

  case 157:
#line 362 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2842 "src/parser.c" /* yacc.c:1652  */
    break;

  case 158:
#line 365 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2848 "src/parser.c" /* yacc.c:1652  */
    break;

  case 159:
#line 366 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2854 "src/parser.c" /* yacc.c:1652  */
    break;

  case 160:
#line 368 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2860 "src/parser.c" /* yacc.c:1652  */
    break;

  case 161:
#line 369 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2866 "src/parser.c" /* yacc.c:1652  */
    break;

  case 162:
#line 370 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2872 "src/parser.c" /* yacc.c:1652  */
    break;

  case 163:
#line 371 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2878 "src/parser.c" /* yacc.c:1652  */
    break;

  case 164:
#line 372 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2884 "src/parser.c" /* yacc.c:1652  */
    break;

  case 165:
#line 373 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2890 "src/parser.c" /* yacc.c:1652  */
    break;

  case 166:
#line 375 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_eq; }
#line 2896 "src/parser.c" /* yacc.c:1652  */
    break;

  case 167:
#line 375 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_ne; }
#line 2902 "src/parser.c" /* yacc.c:1652  */
    break;

  case 168:
#line 376 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_lt; }
#line 2908 "src/parser.c" /* yacc.c:1652  */
    break;

  case 169:
#line 376 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_gt; }
#line 2914 "src/parser.c" /* yacc.c:1652  */
    break;

  case 170:
#line 376 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_le; }
#line 2920 "src/parser.c" /* yacc.c:1652  */
    break;

  case 171:
#line 376 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_ge; }
#line 2926 "src/parser.c" /* yacc.c:1652  */
    break;

  case 172:
#line 377 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_shl; }
#line 2932 "src/parser.c" /* yacc.c:1652  */
    break;

  case 173:
#line 377 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_shr; }
#line 2938 "src/parser.c" /* yacc.c:1652  */
    break;

  case 174:
#line 378 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_add; }
#line 2944 "src/parser.c" /* yacc.c:1652  */
    break;

  case 175:
#line 378 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_sub; }
#line 2950 "src/parser.c" /* yacc.c:1652  */
    break;

  case 176:
#line 379 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_mul; }
#line 2956 "src/parser.c" /* yacc.c:1652  */
    break;

  case 177:
#line 379 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_div; }
#line 2962 "src/parser.c" /* yacc.c:1652  */
    break;

  case 178:
#line 379 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_mod; }
#line 2968 "src/parser.c" /* yacc.c:1652  */
    break;

  case 180:
#line 381 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2974 "src/parser.c" /* yacc.c:1652  */
    break;

  case 182:
#line 383 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_or, (yyvsp[0].exp)); }
#line 2980 "src/parser.c" /* yacc.c:1652  */
    break;

  case 184:
#line 384 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_and, (yyvsp[0].exp)); }
#line 2986 "src/parser.c" /* yacc.c:1652  */
    break;

  case 186:
#line 385 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_sor, (yyvsp[0].exp)); }
#line 2992 "src/parser.c" /* yacc.c:1652  */
    break;

  case 188:
#line 386 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_sxor, (yyvsp[0].exp)); }
#line 2998 "src/parser.c" /* yacc.c:1652  */
    break;

  case 190:
#line 387 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), op_sand, (yyvsp[0].exp)); }
#line 3004 "src/parser.c" /* yacc.c:1652  */
    break;

  case 192:
#line 388 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3010 "src/parser.c" /* yacc.c:1652  */
    break;

  case 194:
#line 389 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3016 "src/parser.c" /* yacc.c:1652  */
    break;

  case 196:
#line 390 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3022 "src/parser.c" /* yacc.c:1652  */
    break;

  case 198:
#line 391 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3028 "src/parser.c" /* yacc.c:1652  */
    break;

  case 200:
#line 392 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3034 "src/parser.c" /* yacc.c:1652  */
    break;

  case 202:
#line 395 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3040 "src/parser.c" /* yacc.c:1652  */
    break;

  case 203:
#line 397 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_sub; }
#line 3046 "src/parser.c" /* yacc.c:1652  */
    break;

  case 204:
#line 397 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_mul; }
#line 3052 "src/parser.c" /* yacc.c:1652  */
    break;

  case 206:
#line 399 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_not; }
#line 3058 "src/parser.c" /* yacc.c:1652  */
    break;

  case 207:
#line 399 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_spork; }
#line 3064 "src/parser.c" /* yacc.c:1652  */
    break;

  case 208:
#line 399 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_fork; }
#line 3070 "src/parser.c" /* yacc.c:1652  */
    break;

  case 209:
#line 399 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_cmp; }
#line 3076 "src/parser.c" /* yacc.c:1652  */
    break;

  case 211:
#line 402 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3082 "src/parser.c" /* yacc.c:1652  */
    break;

  case 212:
#line 403 "ly/gwion.y" /* yacc.c:1652  */
    {(yyval.exp) = new_exp_unary2(mpool(arg), op_new, (yyvsp[0].type_decl)); }
#line 3088 "src/parser.c" /* yacc.c:1652  */
    break;

  case 213:
#line 404 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(mpool(arg), op_spork, (yyvsp[0].stmt)); }
#line 3094 "src/parser.c" /* yacc.c:1652  */
    break;

  case 214:
#line 405 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(mpool(arg), op_fork, (yyvsp[0].stmt)); }
#line 3100 "src/parser.c" /* yacc.c:1652  */
    break;

  case 215:
#line 408 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, get_pos(arg)), NULL); }
#line 3106 "src/parser.c" /* yacc.c:1652  */
    break;

  case 216:
#line 409 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, get_pos(arg)), (yyvsp[0].arg_list)); }
#line 3112 "src/parser.c" /* yacc.c:1652  */
    break;

  case 217:
#line 410 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3118 "src/parser.c" /* yacc.c:1652  */
    break;

  case 218:
#line 410 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 3124 "src/parser.c" /* yacc.c:1652  */
    break;

  case 219:
#line 413 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3130 "src/parser.c" /* yacc.c:1652  */
    break;

  case 220:
#line 414 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3136 "src/parser.c" /* yacc.c:1652  */
    break;

  case 221:
#line 417 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3142 "src/parser.c" /* yacc.c:1652  */
    break;

  case 222:
#line 417 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = NULL; }
#line 3148 "src/parser.c" /* yacc.c:1652  */
    break;

  case 223:
#line 419 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_inc; }
#line 3154 "src/parser.c" /* yacc.c:1652  */
    break;

  case 224:
#line 419 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = op_dec; }
#line 3160 "src/parser.c" /* yacc.c:1652  */
    break;

  case 225:
#line 421 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3166 "src/parser.c" /* yacc.c:1652  */
    break;

  case 227:
#line 423 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3172 "src/parser.c" /* yacc.c:1652  */
    break;

  case 228:
#line 425 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3179 "src/parser.c" /* yacc.c:1652  */
    break;

  case 229:
#line 428 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].ival)); }
#line 3185 "src/parser.c" /* yacc.c:1652  */
    break;

  case 230:
#line 428 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3191 "src/parser.c" /* yacc.c:1652  */
    break;

  case 231:
#line 431 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_complex; }
#line 3197 "src/parser.c" /* yacc.c:1652  */
    break;

  case 232:
#line 432 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3203 "src/parser.c" /* yacc.c:1652  */
    break;

  case 233:
#line 433 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3209 "src/parser.c" /* yacc.c:1652  */
    break;

  case 234:
#line 436 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_id(     mpool(arg), (yyvsp[0].sym), get_pos(arg)); }
#line 3215 "src/parser.c" /* yacc.c:1652  */
    break;

  case 235:
#line 437 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_int(    mpool(arg), (yyvsp[0].lval), get_pos(arg)); }
#line 3221 "src/parser.c" /* yacc.c:1652  */
    break;

  case 236:
#line 438 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_float(  mpool(arg), (yyvsp[0].fval), get_pos(arg)); }
#line 3227 "src/parser.c" /* yacc.c:1652  */
    break;

  case 237:
#line 439 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_string( mpool(arg), (yyvsp[0].sval), get_pos(arg)); }
#line 3233 "src/parser.c" /* yacc.c:1652  */
    break;

  case 238:
#line 440 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_char(   mpool(arg), (yyvsp[0].sval), get_pos(arg)); }
#line 3239 "src/parser.c" /* yacc.c:1652  */
    break;

  case 239:
#line 441 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_array(  mpool(arg), (yyvsp[0].array_sub), get_pos(arg)); }
#line 3245 "src/parser.c" /* yacc.c:1652  */
    break;

  case 240:
#line 442 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_vec(    mpool(arg), (yyvsp[-2].ival) ,(yyvsp[-1].exp)); }
#line 3251 "src/parser.c" /* yacc.c:1652  */
    break;

  case 241:
#line 443 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3257 "src/parser.c" /* yacc.c:1652  */
    break;

  case 242:
#line 444 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3263 "src/parser.c" /* yacc.c:1652  */
    break;

  case 243:
#line 445 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3269 "src/parser.c" /* yacc.c:1652  */
    break;

  case 244:
#line 446 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_nil(    mpool(arg),     get_pos(arg)); }
#line 3275 "src/parser.c" /* yacc.c:1652  */
    break;


#line 3279 "src/parser.c" /* yacc.c:1652  */
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
#line 448 "ly/gwion.y" /* yacc.c:1918  */

