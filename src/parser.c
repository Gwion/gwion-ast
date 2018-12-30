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
#define OP_SYM(a) insert_symbol(op2str(a))
ANN uint get_pos(const Scanner*);
ANN void gwion_error(const Scanner*, const m_str s);
m_str op2str(const Operator op);

#line 98 "src/parser.c" /* yacc.c:338  */
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
    UNION = 341,
    ATPAREN = 342,
    TYPEOF = 343,
    CONST = 344,
    AUTO = 345,
    PASTE = 346,
    ELLIPSE = 347,
    RARROW = 348,
    NUM = 349,
    FLOAT = 350,
    ID = 351,
    STRING_LIT = 352,
    CHAR_LIT = 353,
    PP_COMMENT = 354,
    PP_INCLUDE = 355,
    PP_DEFINE = 356,
    PP_UNDEF = 357,
    PP_IFDEF = 358,
    PP_IFNDEF = 359,
    PP_ELSE = 360,
    PP_ENDIF = 361,
    PP_NL = 362
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
#define UNION 341
#define ATPAREN 342
#define TYPEOF 343
#define CONST 344
#define AUTO 345
#define PASTE 346
#define ELLIPSE 347
#define RARROW 348
#define NUM 349
#define FLOAT 350
#define ID 351
#define STRING_LIT 352
#define CHAR_LIT 353
#define PP_COMMENT 354
#define PP_INCLUDE 355
#define PP_DEFINE 356
#define PP_UNDEF 357
#define PP_IFDEF 358
#define PP_IFNDEF 359
#define PP_ELSE 360
#define PP_ENDIF 361
#define PP_NL 362

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "ly/gwion.y" /* yacc.c:353  */

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

#line 382 "src/parser.c" /* yacc.c:353  */
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
#define YYFINAL  181
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1804

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  232
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  397

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   362

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
     105,   106,   107
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   108,   111,   112,   116,   117,   118,   122,
     128,   128,   130,   130,   133,   134,   137,   137,   138,   138,
     139,   139,   141,   141,   143,   144,   147,   148,   151,   152,
     153,   156,   157,   157,   160,   161,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   183,
     184,   191,   191,   194,   197,   199,   202,   203,   204,   207,
     210,   212,   214,   216,   218,   220,   222,   224,   229,   231,
     236,   237,   238,   239,   243,   244,   247,   247,   249,   249,
     251,   251,   253,   253,   253,   254,   254,   255,   255,   256,
     256,   257,   257,   258,   258,   258,   259,   259,   263,   264,
     265,   269,   270,   271,   274,   274,   275,   275,   276,   277,
     278,   278,   280,   280,   281,   281,   283,   283,   285,   286,
     289,   290,   293,   294,   295,   298,   298,   299,   300,   301,
     304,   312,   312,   312,   312,   312,   314,   315,   317,   319,
     321,   326,   326,   329,   330,   332,   335,   336,   338,   339,
     342,   348,   356,   357,   360,   361,   363,   364,   365,   367,
     367,   368,   368,   368,   368,   369,   369,   370,   370,   371,
     371,   371,   372,   372,   375,   375,   376,   376,   377,   377,
     378,   378,   379,   379,   380,   380,   381,   381,   382,   382,
     383,   383,   384,   384,   386,   386,   389,   389,   390,   391,
     391,   391,   394,   394,   395,   396,   398,   398,   402,   403,
     406,   406,   408,   408,   410,   411,   411,   413,   416,   417,
     420,   421,   422,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434
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
  "UNION", "ATPAREN", "TYPEOF", "CONST", "AUTO", "PASTE", "ELLIPSE",
  "RARROW", "NUM", "FLOAT", "ID", "STRING_LIT", "CHAR_LIT", "PP_COMMENT",
  "PP_INCLUDE", "PP_DEFINE", "PP_UNDEF", "PP_IFDEF", "PP_IFNDEF",
  "PP_ELSE", "PP_ENDIF", "PP_NL", "$accept", "prg", "ast", "section",
  "class_def", "class_ext", "class_body", "class_body2", "id_list",
  "id_dot", "dot_decl", "stmt_list", "func_type", "stmt_type",
  "type_decl_array", "type_decl_exp", "arg", "arg_list", "code_stmt",
  "stmt", "id", "opt_id", "enum_stmt", "label_stmt", "goto_stmt",
  "case_stmt", "switch_stmt", "loop_stmt", "selection_stmt", "jump_stmt",
  "exp_stmt", "exp", "binary_exp", "call_template", "op", "array_exp",
  "array_empty", "array", "decl_exp2", "decl_exp", "union_exp",
  "decl_exp3", "func_args", "arg_type", "decl_template", "storage_flag",
  "access_flag", "flag", "opt_flag", "func_flag", "type_flag",
  "class_flag", "func_def_base", "op_op", "func_def", "atsym",
  "type_decl0", "type_decl", "decl_list", "union_stmt", "var_decl_list",
  "var_decl", "arg_decl", "eq_op", "rel_op", "shift_op", "add_op",
  "mul_op", "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp",
  "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp",
  "mul_exp", "cast_exp", "unary_op", "unary_exp", "dur_exp", "type_list",
  "call_paren", "post_op", "dot_exp", "post_exp", "vec_type",
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
     355,   356,   357,   358,   359,   360,   361,   362
};
# endif

#define YYPACT_NINF -310

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-310)))

#define YYTABLE_NINF -82

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     440,  -310,  -310,  1531,  1225,  1276,   836,  -310,  -310,  -310,
    -310,    31,    37,   932,    43,    52,    69,     6,  1531,    24,
      58,  1101,   107,   125,  -310,  -310,   -14,    91,  -310,  -310,
    -310,  -310,   -14,  -310,    91,  1685,    58,    65,    58,  -310,
     128,     2,  -310,  -310,    50,  -310,  -310,   148,  -310,   548,
    -310,   122,  -310,  -310,  -310,  -310,   932,    12,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,   150,   379,  -310,
     151,  -310,  -310,  -310,  -310,     7,   103,  -310,   -14,   -14,
    -310,  -310,  -310,     6,  -310,  -310,    -5,   100,   106,    99,
     109,     3,    72,    97,   104,   137,   153,  1582,  -310,   124,
    -310,  -310,   116,  1531,  -310,    -4,   179,  1634,  -310,   178,
    -310,   177,  -310,   176,  1531,  1531,    86,  1531,  1531,  1028,
     190,    91,   161,  -310,   164,    83,   165,  -310,   185,  -310,
     198,  -310,  -310,  -310,   110,   189,  -310,   205,   189,   154,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,   -14,
    -310,  -310,  -310,  -310,   -14,  -310,     6,     6,     6,  -310,
       6,  -310,  -310,  -310,  -310,  -310,  -310,     6,  -310,  1531,
    1531,  1327,  -310,    58,    58,   -14,     6,  -310,  -310,     6,
     189,  -310,   215,  1531,  1634,  1634,  1634,  1634,  1634,  -310,
    -310,  1634,  1634,  1634,  1634,  1634,   -14,   -14,  -310,    60,
    1531,     6,   -14,   212,  -310,  -310,   214,  -310,  -310,   211,
    -310,   216,   218,  1531,  1531,   219,   220,   122,  1174,  -310,
    -310,  -310,  -310,  -310,     6,  -310,  -310,   151,   -14,  -310,
       6,   222,   223,   163,   230,  -310,   224,   225,   181,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,     6,   180,    56,  -310,
       6,   209,   100,   106,    99,   109,     3,    72,    97,   104,
     137,   153,  -310,   232,   116,  -310,   182,  1378,  -310,  -310,
    1429,  -310,   932,   932,   242,   244,   932,   932,     6,  1480,
     233,  -310,   122,   -14,   -14,  -310,     6,    28,   122,     6,
     240,   -14,   237,  -310,   -14,     9,  -310,  1634,   -14,  -310,
    -310,   241,  -310,   221,  -310,  -310,  -310,  -310,  -310,   227,
     932,   243,     6,  -310,   249,     6,   246,  -310,   245,   253,
       6,   247,  -310,  -310,     9,  -310,   644,   259,  -310,  -310,
     255,  -310,  -310,   256,  -310,   932,  1531,  -310,   932,   262,
     -14,   189,  -310,    91,     6,   -14,  -310,     6,    91,   740,
     257,  -310,   -14,  -310,    91,  -310,  1721,  -310,  -310,   260,
    -310,   151,  -310,   266,  -310,   268,  -310,  -310,  -310,  -310,
    -310,   932,    91,  -310,  -310,  -310,  -310
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     117,    75,   197,     0,     0,     0,     0,   221,   220,   201,
     199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,     0,   212,   213,     0,   200,   118,   119,
     120,   121,     0,   196,     0,     0,   125,     0,   125,   222,
       0,     0,   224,   225,    49,   226,   227,     0,     2,   117,
       8,   141,     6,    46,    47,    39,    22,   223,    44,    40,
      41,    43,    42,    37,    38,    45,    36,     0,    76,   104,
     105,   228,    78,   110,   107,     0,   123,   122,     0,     0,
     136,     7,   146,     0,    48,   106,   172,   174,   176,   178,
     180,   182,   184,   186,   188,   190,   192,     0,   194,   202,
     198,   219,   206,     0,   215,   223,     0,     0,   232,     0,
     101,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,   219,    81,   215,   126,     0,    70,
       0,    72,    73,   204,    20,    28,   205,   208,    26,     0,
     140,    82,   170,   169,   171,    86,    87,    88,    89,    90,
      85,    83,    91,    92,    84,   164,   162,   163,   161,   168,
     167,   165,   166,    93,    94,    95,    96,    97,   131,     0,
     133,   132,   135,   134,     0,   128,     0,    52,     0,   147,
       0,     1,     5,   142,   143,    23,    54,     0,    74,     0,
       0,     0,   103,   125,   125,     0,     0,   124,   111,     0,
     154,   108,   152,     0,     0,     0,     0,     0,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,   203,     0,
       0,     0,     0,     0,   216,   218,     0,   230,   231,    98,
      35,     0,     0,     0,     0,     0,     0,   141,     0,    55,
      59,    58,    57,    56,     0,    71,    29,    30,     0,    27,
       0,     0,     0,     0,    16,    51,     0,     0,    18,    50,
      21,    77,    79,   102,   127,   129,     0,    11,     0,   155,
       0,     0,   175,   177,   179,   181,   183,   185,   187,   189,
     191,   193,   195,     0,   207,   214,     0,     0,   217,   229,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   209,   141,     0,     0,   116,     0,     0,   141,     0,
       0,     0,     0,    25,   113,     0,   153,     0,     0,    80,
     211,     0,   100,    68,    60,    61,    66,    65,    67,     0,
       0,     0,    52,   144,     0,     0,     0,    17,     0,     0,
       0,     0,   145,    19,     0,    10,   117,    32,   112,   115,
       0,    24,   173,     0,   210,     0,     0,    62,     0,     0,
       0,   156,    31,     0,    52,   148,   109,    52,     0,   117,
       0,    12,     0,   114,     0,    69,     0,    63,    53,     0,
     158,   157,   138,     0,   149,     0,   130,    15,     9,    33,
     139,     0,     0,   151,   150,    64,   137
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -310,  -310,   226,  -307,  -310,  -310,  -310,   -95,  -180,  -169,
    -310,    32,  -310,  -310,   -65,   -35,  -257,   -94,   -26,   -11,
       0,  -309,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -104,   320,   -79,  -310,   252,   -59,  -132,  -116,    89,   202,
    -310,  -310,   -22,   -54,  -310,  -310,   229,    -8,   -31,  -310,
    -310,  -310,  -310,  -310,  -310,  -217,   250,    67,   -71,  -310,
      25,  -310,   -41,  -310,   265,   273,   275,   277,   -16,  -310,
     112,   108,   114,   119,   113,   117,   115,   118,   120,   121,
       4,   -63,  -310,  -191,  -310,   -25,   310,   -10,  -310,   314
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    47,    48,    49,    50,   312,   370,   371,   253,   257,
      51,    52,    53,    54,   137,   133,   347,   348,    55,    56,
     105,   256,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   223,   190,    69,    70,    71,    72,    73,
     339,    74,   315,   351,    75,    76,    77,    78,   128,   195,
      79,   196,    80,   169,    81,   184,    82,    83,   341,    84,
     201,   202,   362,   211,   212,   213,   214,   215,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
     107,    98,    99,   139,   288,   100,   101,   102,   103,   104
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   136,   116,   247,    97,   175,    57,   177,   140,   125,
     174,   192,   127,    57,   199,   238,   267,   120,   260,   123,
     298,   349,   249,   359,   -20,   122,   134,   203,   127,   338,
     127,   286,   134,     3,   218,     4,   193,     5,   113,   369,
     -20,   134,   114,   224,   218,   186,   334,   336,   115,    57,
       7,     8,    32,    97,   117,   383,    57,   301,   385,   313,
     194,   353,   369,   118,   300,   209,   224,   314,    32,     3,
     204,     4,   210,     5,    40,    41,   246,   225,   134,   134,
     119,   302,    44,   200,   269,   333,     7,     8,   185,   187,
      40,   342,   -20,   135,    32,   240,   220,   123,    44,   138,
     225,   350,    44,   379,   251,   187,     6,   123,   -20,   252,
     131,    39,    28,    29,    30,    31,    40,    41,    42,    43,
      44,    45,    46,   233,    44,   234,   337,   -81,   132,   220,
     266,   176,    24,    25,   299,   155,   156,   157,   158,   178,
     343,   180,   221,   142,   143,   144,   138,    39,   181,   222,
     183,   282,   283,   188,    42,    43,    44,    45,    46,    30,
      31,   205,   264,   265,   191,    24,    25,   161,   162,   134,
     291,   159,   160,   207,   134,   221,   254,   255,   258,   206,
     259,   208,   222,   216,   219,   127,   127,   258,   192,   227,
     228,   229,   230,   239,   241,   134,   254,   242,   243,   268,
     244,   245,     5,   187,   123,   123,   123,   123,   123,   284,
     248,   123,   123,   123,   123,   123,   134,   134,   250,   123,
     270,   285,   134,   287,   290,   224,   289,   305,   292,   381,
     293,   296,   297,   303,   304,   306,   138,   308,   311,   307,
     309,   138,   317,   318,   254,   325,   319,   326,   134,   332,
     258,   314,   346,   354,   360,   358,   365,   355,   363,   225,
     356,   364,   138,   367,   372,   378,   310,   373,   374,   393,
     200,   394,   392,   388,   387,   182,   345,   376,   389,   262,
     198,   323,   324,   138,   138,   327,   328,   168,   344,   138,
     368,   179,    57,    57,   384,   316,    57,    57,   329,   366,
     170,   352,   380,   134,   134,   197,   254,   134,   171,   258,
     172,   134,   173,   273,   134,   138,   272,   123,   134,   357,
     274,   276,   192,   106,   109,   111,   275,   278,   277,   124,
      57,   279,   255,   126,   280,   361,   281,   382,   121,     0,
     361,   130,   386,     0,   375,     0,    57,   377,   390,     0,
      97,     0,     0,     0,     0,    57,     0,     0,    57,     0,
     134,     0,     0,     0,   255,   134,   396,   255,     0,    57,
     335,   335,   134,    97,   340,     0,     0,     0,   135,     0,
     395,   335,     0,   141,   189,   335,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,     0,     0,     0,   335,     0,     0,
       0,     0,   340,     0,   231,   232,     0,   235,   236,   335,
      -3,   154,     0,     1,     0,     0,     0,     2,     0,     3,
       0,     4,     0,     5,     0,     6,     0,     0,   163,   164,
     165,   166,   167,     0,     0,     0,     7,     8,     0,     0,
       0,     9,     0,     0,    10,    11,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,     0,   261,
       0,   111,     0,     0,     0,     0,    34,    35,    36,     0,
       0,     0,     0,   271,    37,     0,    38,    39,    40,    41,
       0,     0,     0,     0,    42,    43,    44,    45,    46,     0,
     111,     0,     0,     0,     0,     0,     0,     0,    -4,     0,
       0,     1,     0,   294,   295,     2,     0,     3,     0,     4,
       0,     5,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
       0,     0,    10,    11,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,   321,     0,     0,
     111,     0,     0,     0,    32,    33,     0,     0,     0,   331,
       0,     0,     0,     0,    34,    35,    36,     0,     0,     0,
       0,     0,    37,     0,    38,    39,    40,    41,     0,     0,
       0,     0,    42,    43,    44,    45,    46,     1,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     6,
     -13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,     0,    10,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,     0,     0,     0,     0,     0,    37,     0,
      38,    39,    40,    41,     0,     0,     0,     0,    42,    43,
      44,    45,    46,     1,     0,     0,     0,     2,     0,     3,
       0,     4,     0,     5,     0,     6,   -14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,     0,     0,    10,    11,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,     0,
       0,     0,     0,     0,    37,     0,    38,    39,    40,    41,
       0,     0,     0,     0,    42,    43,    44,    45,    46,     1,
       0,     0,     0,     2,     0,     3,     0,     4,     0,     5,
       0,     6,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     9,     0,     0,
      10,    11,     0,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,    38,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     1,     0,     0,     0,     2,
       0,     3,     0,     4,     0,     5,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,     0,     0,    10,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,    38,    39,
      40,    41,     0,     0,     0,     0,    42,    43,    44,    45,
      46,     1,     0,     0,     0,     2,     0,     3,     0,     4,
       0,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,   129,     0,     0,     0,     2,     0,
       3,     0,     4,     0,     5,    39,    40,    41,   237,     0,
       0,     0,    42,    43,    44,    45,    46,     7,     8,     0,
       0,     0,     9,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,    26,    27,     0,    28,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,    39,    40,
      41,     0,     0,     0,     0,    42,    43,    44,    45,    46,
       7,     8,     0,     0,     0,     9,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     2,     0,     3,     0,     4,   108,     5,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,     9,     0,     0,    10,
       0,    39,    40,    41,     0,     0,     0,     0,    42,    43,
      44,    45,    46,     0,    24,    25,    26,    27,     0,    28,
      29,    30,    31,     2,     0,     3,     0,     4,     0,     5,
     110,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     9,     0,     0,
      10,     0,    39,    40,    41,     0,     0,     0,     0,    42,
      43,    44,    45,    46,     0,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     2,     0,     3,     0,     4,     0,
       5,   263,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     0,     0,     9,     0,
       0,    10,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     0,    24,    25,    26,    27,
       0,    28,    29,    30,    31,     2,     0,     3,     0,     4,
     320,     5,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
       0,     0,    10,     0,    39,    40,    41,     0,     0,     0,
       0,    42,    43,    44,    45,    46,     0,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     2,     0,     3,     0,
       4,     0,     5,   322,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
       9,     0,     0,    10,     0,    39,    40,    41,     0,     0,
       0,     0,    42,    43,    44,    45,    46,     0,    24,    25,
      26,    27,     0,    28,    29,    30,    31,     2,     0,     3,
       0,     4,   330,     5,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,     0,     0,    10,     0,    39,    40,    41,     0,
       0,     0,     0,    42,    43,    44,    45,    46,     0,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     2,     0,
       3,     0,     4,     0,     5,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,     9,     0,     0,    10,     0,    39,    40,    41,
       0,     0,     0,     0,    42,    43,    44,    45,    46,     0,
      24,    25,    26,    27,     0,    28,    29,    30,    31,     2,
       0,     3,     0,     4,     0,     5,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,     0,     0,    10,     0,    39,    40,
      41,     0,     0,     0,     0,    42,    43,    44,    45,    46,
       0,    24,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       7,     8,     0,     0,     0,     9,     0,     0,    10,    39,
       0,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,     0,     0,    24,    25,    26,    27,     0,     0,   141,
       0,   142,   143,   144,     0,     0,     0,     0,     0,     0,
       0,    33,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,   141,     0,     0,    42,    43,
      44,    45,    46,   391,    24,    25,     0,     0,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,     0,   161,   162,     0,     0,     0,
       0,     0,     0,     0,   163,   164,   165,   166,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   154,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     163,   164,   165,   166,   167
};

static const yytype_int16 yycheck[] =
{
       0,    27,    13,   135,     0,    36,     6,    38,    34,    19,
      35,    70,    20,    13,    79,   119,   196,    17,   187,    19,
     237,    12,   138,   332,    28,     1,    26,    32,    36,     1,
      38,   222,    32,     9,    97,    11,    29,    13,     6,   346,
      28,    41,    11,   102,   107,    33,   303,   304,    11,    49,
      26,    27,    66,    49,    11,   364,    56,   248,   367,     3,
      53,   318,   369,    11,   244,    62,   125,    11,    66,     9,
      75,    11,    69,    13,    88,    89,   135,   102,    78,    79,
      11,   250,    96,    83,   200,   302,    26,    27,    56,    93,
      88,   308,    96,    26,    66,   121,    13,    97,    96,    32,
     125,    92,    96,   360,   169,    93,    15,   107,    96,   174,
       3,    87,    54,    55,    56,    57,    88,    89,    94,    95,
      96,    97,    98,    37,    96,    39,   306,    11,     3,    13,
     195,    66,    49,    50,   238,    63,    64,    65,    66,    11,
     309,    91,    59,     6,     7,     8,    79,    87,     0,    66,
      28,   216,   217,     3,    94,    95,    96,    97,    98,    56,
      57,    61,   193,   194,    13,    49,    50,    70,    71,   169,
     229,    67,    68,    74,   174,    59,   176,   177,   178,    73,
     180,    72,    66,    30,    60,   193,   194,   187,   247,    10,
      12,    14,    16,     3,    33,   195,   196,    33,    33,   199,
      15,     3,    13,    93,   204,   205,   206,   207,   208,   219,
       5,   211,   212,   213,   214,   215,   216,   217,    64,   219,
       5,   221,   222,    11,    13,   284,    12,    64,    12,   361,
      12,    12,    12,    11,    11,     5,   169,    12,    58,    15,
      59,   174,    33,    11,   244,     3,    64,     3,   248,    16,
     250,    11,    15,    12,     5,    12,     3,    36,    12,   284,
      33,    16,   195,    16,     5,     3,   266,    12,    12,     3,
     270,     3,    12,    16,   369,    49,   311,   356,   372,   190,
      78,   292,   293,   216,   217,   296,   297,    35,   310,   222,
     344,    41,   292,   293,   365,   270,   296,   297,   298,   340,
      35,   317,   361,   303,   304,    76,   306,   307,    35,   309,
      35,   311,    35,   205,   314,   248,   204,   317,   318,   330,
     206,   208,   381,     3,     4,     5,   207,   212,   211,    19,
     330,   213,   332,    19,   214,   335,   215,   363,    18,    -1,
     340,    21,   368,    -1,   355,    -1,   346,   358,   374,    -1,
     346,    -1,    -1,    -1,    -1,   355,    -1,    -1,   358,    -1,
     360,    -1,    -1,    -1,   364,   365,   392,   367,    -1,   369,
     303,   304,   372,   369,   307,    -1,    -1,    -1,   311,    -1,
     391,   314,    -1,     4,     5,   318,    -1,    -1,    -1,    -1,
      -1,   391,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,   360,    -1,    -1,
      -1,    -1,   365,    -1,   114,   115,    -1,   117,   118,   372,
       0,    62,    -1,     3,    -1,    -1,    -1,     7,    -1,     9,
      -1,    11,    -1,    13,    -1,    15,    -1,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,   189,
      -1,   191,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,
      -1,    -1,    -1,   203,    84,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,    -1,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,
      -1,     3,    -1,   233,   234,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,   287,    -1,    -1,
     290,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,   299,
      -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,     3,    -1,    -1,    -1,     7,    -1,     9,
      -1,    11,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,     3,
      -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,     3,    -1,    -1,    -1,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,     3,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,     7,    -1,
       9,    -1,    11,    -1,    13,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    87,    88,
      89,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,     7,    -1,     9,    -1,    11,    12,    13,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      -1,    87,    88,    89,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    -1,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,     7,    -1,     9,    -1,    11,    -1,    13,
      14,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    87,    88,    89,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    -1,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,     7,    -1,     9,    -1,    11,    -1,
      13,    14,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,
      -1,    34,    -1,    87,    88,    89,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    -1,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,     7,    -1,     9,    -1,    11,
      12,    13,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    87,    88,    89,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    -1,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    87,    88,    89,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    -1,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,     7,    -1,     9,
      -1,    11,    12,    13,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    87,    88,    89,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    -1,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    87,    88,    89,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,    -1,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    87,    88,
      89,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    -1,    -1,    49,    50,    51,    52,    -1,    -1,     4,
      -1,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,     4,    -1,    -1,    94,    95,
      96,    97,    98,    12,    49,    50,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     9,    11,    13,    15,    26,    27,    31,
      34,    35,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    54,    55,
      56,    57,    66,    67,    76,    77,    78,    84,    86,    87,
      88,    89,    94,    95,    96,    97,    98,   109,   110,   111,
     112,   118,   119,   120,   121,   126,   127,   128,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   143,
     144,   145,   146,   147,   149,   152,   153,   154,   155,   158,
     160,   162,   164,   165,   167,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     193,   194,   195,   196,   197,   128,   139,   188,    12,   139,
      14,   139,    16,   119,    11,    11,   127,    11,    11,    11,
     128,   139,     1,   128,   194,   195,   197,   155,   156,     3,
     139,     3,     3,   123,   128,   165,   126,   122,   165,   191,
     126,     4,     6,     7,     8,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    62,    63,    64,    65,    66,    67,
      68,    70,    71,    79,    80,    81,    82,    83,   142,   161,
     172,   173,   174,   175,   193,   156,    66,   156,    11,   164,
      91,     0,   110,    28,   163,   119,    33,    93,     3,     5,
     142,    13,   143,    29,    53,   157,   159,   154,   147,   122,
     128,   168,   169,    32,    75,    61,    73,    74,    72,    62,
      69,   171,   172,   173,   174,   175,    30,    77,   189,    60,
      13,    59,    66,   141,   143,   193,   139,    10,    12,    14,
      16,   139,   139,    37,    39,   139,   139,    90,   138,     3,
     126,    33,    33,    33,    15,     3,   143,   144,     5,   145,
      64,   122,   122,   116,   128,   128,   129,   117,   128,   128,
     117,   139,   146,    14,   156,   156,   122,   116,   128,   145,
       5,   139,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   122,   122,   195,   128,   191,    11,   192,    12,
      13,   143,    12,    12,   139,   139,    12,    12,   163,   138,
     116,   191,   117,    11,    11,    64,     5,    15,    12,    59,
     128,    58,   113,     3,    11,   150,   168,    33,    11,    64,
      12,   139,    14,   127,   127,     3,     3,   127,   127,   128,
      12,   139,    16,   163,   124,   165,   124,   116,     1,   148,
     165,   166,   163,   117,   150,   123,    15,   124,   125,    12,
      92,   151,   176,   124,    12,    36,    33,   127,    12,   129,
       5,   128,   170,    12,    16,     3,   170,    16,   151,   111,
     114,   115,     5,    12,    12,   127,   140,   127,     3,   124,
     143,   144,   126,   129,   166,   129,   126,   115,    16,   125,
     126,    12,    12,     3,     3,   127,   126
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   110,   111,   111,   111,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   121,   122,   122,   123,   123,
     123,   124,   125,   125,   126,   126,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   128,
     128,   129,   129,   130,   131,   132,   133,   133,   133,   134,
     135,   135,   135,   135,   135,   135,   135,   135,   136,   136,
     137,   137,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   143,   143,
     143,   144,   144,   144,   145,   145,   146,   146,   147,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   155,   155,   155,   156,   156,   157,   158,   159,
     160,   161,   161,   161,   161,   161,   162,   162,   162,   162,
     162,   163,   163,   164,   164,   164,   165,   165,   166,   166,
     167,   167,   168,   168,   169,   169,   170,   170,   170,   171,
     171,   172,   172,   172,   172,   173,   173,   174,   174,   175,
     175,   175,   176,   176,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   181,   182,   182,   183,   183,   184,   184,
     185,   185,   186,   186,   187,   187,   188,   188,   188,   188,
     188,   188,   189,   189,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   193,   194,   195,   195,   195,   195,   195,
     196,   196,   196,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     7,
       2,     0,     1,     0,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     2,     5,     4,     1,     2,     1,     2,
       2,     2,     1,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     0,     7,     2,     3,     3,     3,     3,     3,
       5,     5,     6,     7,     9,     5,     5,     5,     5,     7,
       2,     3,     2,     2,     2,     1,     1,     3,     1,     3,
       3,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       5,     2,     3,     2,     1,     1,     1,     1,     2,     2,
       1,     2,     2,     1,     2,     1,     4,     0,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     2,     2,     2,
       7,     1,     1,     1,     1,     1,     1,     9,     7,     7,
       2,     0,     1,     2,     5,     5,     1,     2,     2,     3,
       8,     8,     1,     3,     1,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     3,     1,     3,
       3,     2,     1,     1,     3,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     2
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
  switch (yytype)
    {
          case 120: /* func_type  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1816 "src/parser.c" /* yacc.c:1254  */
        break;

    case 121: /* stmt_type  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1822 "src/parser.c" /* yacc.c:1254  */
        break;

    case 126: /* code_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1828 "src/parser.c" /* yacc.c:1254  */
        break;

    case 127: /* stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1834 "src/parser.c" /* yacc.c:1254  */
        break;

    case 130: /* enum_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1840 "src/parser.c" /* yacc.c:1254  */
        break;

    case 131: /* label_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1846 "src/parser.c" /* yacc.c:1254  */
        break;

    case 132: /* goto_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1852 "src/parser.c" /* yacc.c:1254  */
        break;

    case 133: /* case_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1858 "src/parser.c" /* yacc.c:1254  */
        break;

    case 134: /* switch_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1864 "src/parser.c" /* yacc.c:1254  */
        break;

    case 135: /* loop_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1870 "src/parser.c" /* yacc.c:1254  */
        break;

    case 136: /* selection_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1876 "src/parser.c" /* yacc.c:1254  */
        break;

    case 137: /* jump_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1882 "src/parser.c" /* yacc.c:1254  */
        break;

    case 138: /* exp_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1888 "src/parser.c" /* yacc.c:1254  */
        break;

    case 139: /* exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1894 "src/parser.c" /* yacc.c:1254  */
        break;

    case 140: /* binary_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1900 "src/parser.c" /* yacc.c:1254  */
        break;

    case 146: /* decl_exp2  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1906 "src/parser.c" /* yacc.c:1254  */
        break;

    case 147: /* decl_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1912 "src/parser.c" /* yacc.c:1254  */
        break;

    case 148: /* union_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1918 "src/parser.c" /* yacc.c:1254  */
        break;

    case 149: /* decl_exp3  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1924 "src/parser.c" /* yacc.c:1254  */
        break;

    case 167: /* union_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1930 "src/parser.c" /* yacc.c:1254  */
        break;

    case 176: /* con_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1936 "src/parser.c" /* yacc.c:1254  */
        break;

    case 177: /* log_or_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1942 "src/parser.c" /* yacc.c:1254  */
        break;

    case 178: /* log_and_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1948 "src/parser.c" /* yacc.c:1254  */
        break;

    case 179: /* inc_or_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1954 "src/parser.c" /* yacc.c:1254  */
        break;

    case 180: /* exc_or_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1960 "src/parser.c" /* yacc.c:1254  */
        break;

    case 181: /* and_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1966 "src/parser.c" /* yacc.c:1254  */
        break;

    case 182: /* eq_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1972 "src/parser.c" /* yacc.c:1254  */
        break;

    case 183: /* rel_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1978 "src/parser.c" /* yacc.c:1254  */
        break;

    case 184: /* shift_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1984 "src/parser.c" /* yacc.c:1254  */
        break;

    case 185: /* add_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1990 "src/parser.c" /* yacc.c:1254  */
        break;

    case 186: /* mul_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1996 "src/parser.c" /* yacc.c:1254  */
        break;

    case 187: /* cast_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2002 "src/parser.c" /* yacc.c:1254  */
        break;

    case 189: /* unary_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2008 "src/parser.c" /* yacc.c:1254  */
        break;

    case 190: /* dur_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2014 "src/parser.c" /* yacc.c:1254  */
        break;

    case 192: /* call_paren  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2020 "src/parser.c" /* yacc.c:1254  */
        break;

    case 194: /* dot_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2026 "src/parser.c" /* yacc.c:1254  */
        break;

    case 195: /* post_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2032 "src/parser.c" /* yacc.c:1254  */
        break;

    case 197: /* primary_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2038 "src/parser.c" /* yacc.c:1254  */
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
#line 107 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = (yyvsp[0].ast); }
#line 2305 "src/parser.c" /* yacc.c:1645  */
    break;

  case 3:
#line 108 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = NULL; gw_err("file is empty.\n");}
#line 2311 "src/parser.c" /* yacc.c:1645  */
    break;

  case 4:
#line 111 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = (yyval.ast) = new_ast((yyvsp[0].section), NULL); }
#line 2317 "src/parser.c" /* yacc.c:1645  */
    break;

  case 5:
#line 112 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = (yyval.ast) = new_ast((yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2323 "src/parser.c" /* yacc.c:1645  */
    break;

  case 6:
#line 116 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_stmt_list((yyvsp[0].stmt_list)); }
#line 2329 "src/parser.c" /* yacc.c:1645  */
    break;

  case 7:
#line 117 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_func_def ((yyvsp[0].func_def)); }
#line 2335 "src/parser.c" /* yacc.c:1645  */
    break;

  case 8:
#line 118 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_class_def((yyvsp[0].class_def)); }
#line 2341 "src/parser.c" /* yacc.c:1645  */
    break;

  case 9:
#line 123 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_def) = new_class_def((yyvsp[-5].flag), (yyvsp[-4].id_list), (yyvsp[-3].type_decl), (yyvsp[-1].class_body));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->tmpl = new_tmpl_class((yyvsp[-6].id_list), -1);
  }
#line 2350 "src/parser.c" /* yacc.c:1645  */
    break;

  case 10:
#line 128 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2356 "src/parser.c" /* yacc.c:1645  */
    break;

  case 11:
#line 128 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = NULL; }
#line 2362 "src/parser.c" /* yacc.c:1645  */
    break;

  case 13:
#line 130 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = NULL; }
#line 2368 "src/parser.c" /* yacc.c:1645  */
    break;

  case 14:
#line 133 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = new_class_body((yyvsp[0].section), NULL); }
#line 2374 "src/parser.c" /* yacc.c:1645  */
    break;

  case 15:
#line 134 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = new_class_body((yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2380 "src/parser.c" /* yacc.c:1645  */
    break;

  case 16:
#line 137 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2386 "src/parser.c" /* yacc.c:1645  */
    break;

  case 17:
#line 137 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2392 "src/parser.c" /* yacc.c:1645  */
    break;

  case 18:
#line 138 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2398 "src/parser.c" /* yacc.c:1645  */
    break;

  case 19:
#line 138 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2404 "src/parser.c" /* yacc.c:1645  */
    break;

  case 20:
#line 139 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2410 "src/parser.c" /* yacc.c:1645  */
    break;

  case 21:
#line 139 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2416 "src/parser.c" /* yacc.c:1645  */
    break;

  case 22:
#line 141 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[0].stmt), NULL);}
#line 2422 "src/parser.c" /* yacc.c:1645  */
    break;

  case 23:
#line 141 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2428 "src/parser.c" /* yacc.c:1645  */
    break;

  case 24:
#line 143 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_fptr((yyvsp[-2].sym), (yyvsp[-3].type_decl), (yyvsp[-1].arg_list), (yyvsp[0].flag)); (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag); }
#line 2434 "src/parser.c" /* yacc.c:1645  */
    break;

  case 25:
#line 144 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_type((yyvsp[-2].type_decl), (yyvsp[-1].sym)); (yyvsp[-2].type_decl)->flag |= (yyvsp[-3].flag); }
#line 2440 "src/parser.c" /* yacc.c:1645  */
    break;

  case 27:
#line 148 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2446 "src/parser.c" /* yacc.c:1645  */
    break;

  case 29:
#line 152 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2452 "src/parser.c" /* yacc.c:1645  */
    break;

  case 30:
#line 153 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "can't instantiate with empty '[]'"); YYERROR; }
#line 2458 "src/parser.c" /* yacc.c:1645  */
    break;

  case 31:
#line 156 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = new_arg_list((yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2464 "src/parser.c" /* yacc.c:1645  */
    break;

  case 32:
#line 157 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2470 "src/parser.c" /* yacc.c:1645  */
    break;

  case 33:
#line 157 "ly/gwion.y" /* yacc.c:1645  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2476 "src/parser.c" /* yacc.c:1645  */
    break;

  case 34:
#line 160 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_code, get_pos(arg)); }
#line 2482 "src/parser.c" /* yacc.c:1645  */
    break;

  case 35:
#line 161 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_code((yyvsp[-1].stmt_list)); }
#line 2488 "src/parser.c" /* yacc.c:1645  */
    break;

  case 49:
#line 183 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2494 "src/parser.c" /* yacc.c:1645  */
    break;

  case 50:
#line 184 "ly/gwion.y" /* yacc.c:1645  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2504 "src/parser.c" /* yacc.c:1645  */
    break;

  case 52:
#line 191 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.sym) = NULL; }
#line 2510 "src/parser.c" /* yacc.c:1645  */
    break;

  case 53:
#line 194 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_enum((yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2517 "src/parser.c" /* yacc.c:1645  */
    break;

  case 54:
#line 197 "ly/gwion.y" /* yacc.c:1645  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 1, get_pos(arg)); }
#line 2523 "src/parser.c" /* yacc.c:1645  */
    break;

  case 55:
#line 199 "ly/gwion.y" /* yacc.c:1645  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 0, get_pos(arg)); }
#line 2529 "src/parser.c" /* yacc.c:1645  */
    break;

  case 56:
#line 202 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2535 "src/parser.c" /* yacc.c:1645  */
    break;

  case 57:
#line 203 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2541 "src/parser.c" /* yacc.c:1645  */
    break;

  case 58:
#line 204 "ly/gwion.y" /* yacc.c:1645  */
    { gw_err("unhandled expression type in case statement.\n"); (yyval.stmt)=NULL;YYERROR ; }
#line 2547 "src/parser.c" /* yacc.c:1645  */
    break;

  case 59:
#line 207 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_switch((yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2553 "src/parser.c" /* yacc.c:1645  */
    break;

  case 60:
#line 211 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2559 "src/parser.c" /* yacc.c:1645  */
    break;

  case 61:
#line 213 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2565 "src/parser.c" /* yacc.c:1645  */
    break;

  case 62:
#line 215 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2571 "src/parser.c" /* yacc.c:1645  */
    break;

  case 63:
#line 217 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2577 "src/parser.c" /* yacc.c:1645  */
    break;

  case 64:
#line 219 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_auto((yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2583 "src/parser.c" /* yacc.c:1645  */
    break;

  case 65:
#line 221 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2589 "src/parser.c" /* yacc.c:1645  */
    break;

  case 66:
#line 223 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2595 "src/parser.c" /* yacc.c:1645  */
    break;

  case 67:
#line 225 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_loop((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2601 "src/parser.c" /* yacc.c:1645  */
    break;

  case 68:
#line 230 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2607 "src/parser.c" /* yacc.c:1645  */
    break;

  case 69:
#line 232 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2613 "src/parser.c" /* yacc.c:1645  */
    break;

  case 70:
#line 236 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_return, get_pos(arg)); (yyval.stmt)->d.stmt_exp.self = (yyval.stmt); }
#line 2619 "src/parser.c" /* yacc.c:1645  */
    break;

  case 71:
#line 237 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_return, (yyvsp[-1].exp)); }
#line 2625 "src/parser.c" /* yacc.c:1645  */
    break;

  case 72:
#line 238 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_break, get_pos(arg)); }
#line 2631 "src/parser.c" /* yacc.c:1645  */
    break;

  case 73:
#line 239 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_continue, get_pos(arg)); }
#line 2637 "src/parser.c" /* yacc.c:1645  */
    break;

  case 74:
#line 243 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2643 "src/parser.c" /* yacc.c:1645  */
    break;

  case 75:
#line 244 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_exp, get_pos(arg)); }
#line 2649 "src/parser.c" /* yacc.c:1645  */
    break;

  case 77:
#line 247 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2655 "src/parser.c" /* yacc.c:1645  */
    break;

  case 79:
#line 249 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 2661 "src/parser.c" /* yacc.c:1645  */
    break;

  case 80:
#line 251 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2667 "src/parser.c" /* yacc.c:1645  */
    break;

  case 81:
#line 251 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = NULL; }
#line 2673 "src/parser.c" /* yacc.c:1645  */
    break;

  case 82:
#line 253 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_chuck; }
#line 2679 "src/parser.c" /* yacc.c:1645  */
    break;

  case 83:
#line 253 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_unchuck; }
#line 2685 "src/parser.c" /* yacc.c:1645  */
    break;

  case 84:
#line 253 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_eq; }
#line 2691 "src/parser.c" /* yacc.c:1645  */
    break;

  case 85:
#line 254 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ref; }
#line 2697 "src/parser.c" /* yacc.c:1645  */
    break;

  case 86:
#line 254 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_radd; }
#line 2703 "src/parser.c" /* yacc.c:1645  */
    break;

  case 87:
#line 255 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsub; }
#line 2709 "src/parser.c" /* yacc.c:1645  */
    break;

  case 88:
#line 255 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rmul; }
#line 2715 "src/parser.c" /* yacc.c:1645  */
    break;

  case 89:
#line 256 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rdiv; }
#line 2721 "src/parser.c" /* yacc.c:1645  */
    break;

  case 90:
#line 256 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rmod; }
#line 2727 "src/parser.c" /* yacc.c:1645  */
    break;

  case 91:
#line 257 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_trig; }
#line 2733 "src/parser.c" /* yacc.c:1645  */
    break;

  case 92:
#line 257 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_untrig; }
#line 2739 "src/parser.c" /* yacc.c:1645  */
    break;

  case 93:
#line 258 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsl; }
#line 2745 "src/parser.c" /* yacc.c:1645  */
    break;

  case 94:
#line 258 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsr; }
#line 2751 "src/parser.c" /* yacc.c:1645  */
    break;

  case 95:
#line 258 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsand; }
#line 2757 "src/parser.c" /* yacc.c:1645  */
    break;

  case 96:
#line 259 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsor; }
#line 2763 "src/parser.c" /* yacc.c:1645  */
    break;

  case 97:
#line 259 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsxor; }
#line 2769 "src/parser.c" /* yacc.c:1645  */
    break;

  case 98:
#line 263 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = new_array_sub((yyvsp[-1].exp)); }
#line 2775 "src/parser.c" /* yacc.c:1645  */
    break;

  case 99:
#line 264 "ly/gwion.y" /* yacc.c:1645  */
    { if((yyvsp[-2].exp)->next){ gwion_error(arg, "invalid format for array init [...][...]..."); free_exp((yyvsp[-2].exp)); free_array_sub((yyvsp[0].array_sub)); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2781 "src/parser.c" /* yacc.c:1645  */
    break;

  case 100:
#line 265 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "partially empty array init [...][]..."); free_exp((yyvsp[-3].exp)); YYERROR; }
#line 2787 "src/parser.c" /* yacc.c:1645  */
    break;

  case 101:
#line 269 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = new_array_sub(NULL); }
#line 2793 "src/parser.c" /* yacc.c:1645  */
    break;

  case 102:
#line 270 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2799 "src/parser.c" /* yacc.c:1645  */
    break;

  case 103:
#line 271 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "partially empty array init [][...]"); free_array_sub((yyvsp[-1].array_sub)); free_array_sub((yyvsp[0].array_sub)); YYERROR; }
#line 2805 "src/parser.c" /* yacc.c:1645  */
    break;

  case 108:
#line 276 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp)= new_exp_decl((yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2811 "src/parser.c" /* yacc.c:1645  */
    break;

  case 109:
#line 277 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp)= new_exp_decl((yyvsp[-1].type_decl), new_var_decl_list((yyvsp[0].var_decl), NULL)); }
#line 2817 "src/parser.c" /* yacc.c:1645  */
    break;

  case 111:
#line 278 "ly/gwion.y" /* yacc.c:1645  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2823 "src/parser.c" /* yacc.c:1645  */
    break;

  case 112:
#line 280 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2829 "src/parser.c" /* yacc.c:1645  */
    break;

  case 113:
#line 280 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = NULL; }
#line 2835 "src/parser.c" /* yacc.c:1645  */
    break;

  case 114:
#line 281 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2841 "src/parser.c" /* yacc.c:1645  */
    break;

  case 115:
#line 281 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2847 "src/parser.c" /* yacc.c:1645  */
    break;

  case 116:
#line 283 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2853 "src/parser.c" /* yacc.c:1645  */
    break;

  case 117:
#line 283 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = NULL; }
#line 2859 "src/parser.c" /* yacc.c:1645  */
    break;

  case 118:
#line 285 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_static; }
#line 2865 "src/parser.c" /* yacc.c:1645  */
    break;

  case 119:
#line 286 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_global; }
#line 2871 "src/parser.c" /* yacc.c:1645  */
    break;

  case 120:
#line 289 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_private; }
#line 2877 "src/parser.c" /* yacc.c:1645  */
    break;

  case 121:
#line 290 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_protect; }
#line 2883 "src/parser.c" /* yacc.c:1645  */
    break;

  case 122:
#line 293 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2889 "src/parser.c" /* yacc.c:1645  */
    break;

  case 123:
#line 294 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2895 "src/parser.c" /* yacc.c:1645  */
    break;

  case 124:
#line 295 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2901 "src/parser.c" /* yacc.c:1645  */
    break;

  case 125:
#line 298 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2907 "src/parser.c" /* yacc.c:1645  */
    break;

  case 126:
#line 298 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2913 "src/parser.c" /* yacc.c:1645  */
    break;

  case 127:
#line 299 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2919 "src/parser.c" /* yacc.c:1645  */
    break;

  case 128:
#line 300 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2925 "src/parser.c" /* yacc.c:1645  */
    break;

  case 129:
#line 301 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2931 "src/parser.c" /* yacc.c:1645  */
    break;

  case 130:
#line 305 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[0].stmt), (yyvsp[-5].flag) | (yyvsp[-1].flag));
    if((yyvsp[-6].id_list)) {
      SET_FLAG((yyval.func_def), template);
      (yyval.func_def)->tmpl = new_tmpl_list((yyvsp[-6].id_list), -1);
    }
  }
#line 2942 "src/parser.c" /* yacc.c:1645  */
    break;

  case 137:
#line 316 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-6].type_decl), OP_SYM((yyvsp[-7].ival)), (yyvsp[-4].arg_list), (yyvsp[0].stmt), ae_flag_op); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2948 "src/parser.c" /* yacc.c:1645  */
    break;

  case 138:
#line 318 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), OP_SYM((yyvsp[-5].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op); }
#line 2954 "src/parser.c" /* yacc.c:1645  */
    break;

  case 139:
#line 320 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), OP_SYM((yyvsp[-6].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary); }
#line 2960 "src/parser.c" /* yacc.c:1645  */
    break;

  case 140:
#line 322 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def(new_type_decl(new_id_list(insert_symbol("void"), get_pos(arg)), 0),
       insert_symbol("dtor"), NULL, (yyvsp[0].stmt), ae_flag_dtor); }
#line 2967 "src/parser.c" /* yacc.c:1645  */
    break;

  case 141:
#line 326 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = 0; }
#line 2973 "src/parser.c" /* yacc.c:1645  */
    break;

  case 142:
#line 326 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_flag_ref; }
#line 2979 "src/parser.c" /* yacc.c:1645  */
    break;

  case 143:
#line 329 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-1].id_list), (yyvsp[0].ival)); }
#line 2985 "src/parser.c" /* yacc.c:1645  */
    break;

  case 144:
#line 330 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-1].id_list), (yyvsp[0].ival));
      (yyval.type_decl)->types = (yyvsp[-3].type_list); }
#line 2992 "src/parser.c" /* yacc.c:1645  */
    break;

  case 145:
#line 332 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl2((yyvsp[-2].id_list), (yyvsp[0].ival)); }
#line 2998 "src/parser.c" /* yacc.c:1645  */
    break;

  case 146:
#line 335 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3004 "src/parser.c" /* yacc.c:1645  */
    break;

  case 147:
#line 336 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 3010 "src/parser.c" /* yacc.c:1645  */
    break;

  case 148:
#line 338 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-1].exp), NULL); }
#line 3016 "src/parser.c" /* yacc.c:1645  */
    break;

  case 149:
#line 339 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 3022 "src/parser.c" /* yacc.c:1645  */
    break;

  case 150:
#line 342 "ly/gwion.y" /* yacc.c:1645  */
    {
      (yyval.stmt) = new_stmt_union((yyvsp[-3].decl_list), get_pos(arg));
      (yyval.stmt)->d.stmt_union.type_xid = (yyvsp[-5].sym);
      (yyval.stmt)->d.stmt_union.xid = (yyvsp[-1].sym);
      (yyval.stmt)->d.stmt_union.flag = (yyvsp[-6].flag);
    }
#line 3033 "src/parser.c" /* yacc.c:1645  */
    break;

  case 151:
#line 348 "ly/gwion.y" /* yacc.c:1645  */
    {
    err_msg(get_pos(arg), "Unions should only contain declarations.");
    (yyval.stmt)=NULL;
    YYERROR;
    }
#line 3043 "src/parser.c" /* yacc.c:1645  */
    break;

  case 152:
#line 356 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[0].var_decl), NULL); }
#line 3049 "src/parser.c" /* yacc.c:1645  */
    break;

  case 153:
#line 357 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3055 "src/parser.c" /* yacc.c:1645  */
    break;

  case 154:
#line 360 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 3061 "src/parser.c" /* yacc.c:1645  */
    break;

  case 155:
#line 361 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 3067 "src/parser.c" /* yacc.c:1645  */
    break;

  case 156:
#line 363 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 3073 "src/parser.c" /* yacc.c:1645  */
    break;

  case 157:
#line 364 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 3079 "src/parser.c" /* yacc.c:1645  */
    break;

  case 158:
#line 365 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3085 "src/parser.c" /* yacc.c:1645  */
    break;

  case 159:
#line 367 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_eq; }
#line 3091 "src/parser.c" /* yacc.c:1645  */
    break;

  case 160:
#line 367 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ne; }
#line 3097 "src/parser.c" /* yacc.c:1645  */
    break;

  case 161:
#line 368 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_lt; }
#line 3103 "src/parser.c" /* yacc.c:1645  */
    break;

  case 162:
#line 368 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_gt; }
#line 3109 "src/parser.c" /* yacc.c:1645  */
    break;

  case 163:
#line 368 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_le; }
#line 3115 "src/parser.c" /* yacc.c:1645  */
    break;

  case 164:
#line 368 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ge; }
#line 3121 "src/parser.c" /* yacc.c:1645  */
    break;

  case 165:
#line 369 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_shl; }
#line 3127 "src/parser.c" /* yacc.c:1645  */
    break;

  case 166:
#line 369 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_shr; }
#line 3133 "src/parser.c" /* yacc.c:1645  */
    break;

  case 167:
#line 370 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_add; }
#line 3139 "src/parser.c" /* yacc.c:1645  */
    break;

  case 168:
#line 370 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_sub; }
#line 3145 "src/parser.c" /* yacc.c:1645  */
    break;

  case 169:
#line 371 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mul; }
#line 3151 "src/parser.c" /* yacc.c:1645  */
    break;

  case 170:
#line 371 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_div; }
#line 3157 "src/parser.c" /* yacc.c:1645  */
    break;

  case 171:
#line 371 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mod; }
#line 3163 "src/parser.c" /* yacc.c:1645  */
    break;

  case 173:
#line 373 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_if((yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3169 "src/parser.c" /* yacc.c:1645  */
    break;

  case 175:
#line 375 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_or, (yyvsp[0].exp)); }
#line 3175 "src/parser.c" /* yacc.c:1645  */
    break;

  case 177:
#line 376 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_and, (yyvsp[0].exp)); }
#line 3181 "src/parser.c" /* yacc.c:1645  */
    break;

  case 179:
#line 377 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sor, (yyvsp[0].exp)); }
#line 3187 "src/parser.c" /* yacc.c:1645  */
    break;

  case 181:
#line 378 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sxor, (yyvsp[0].exp)); }
#line 3193 "src/parser.c" /* yacc.c:1645  */
    break;

  case 183:
#line 379 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sand, (yyvsp[0].exp)); }
#line 3199 "src/parser.c" /* yacc.c:1645  */
    break;

  case 185:
#line 380 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3205 "src/parser.c" /* yacc.c:1645  */
    break;

  case 187:
#line 381 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3211 "src/parser.c" /* yacc.c:1645  */
    break;

  case 189:
#line 382 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3217 "src/parser.c" /* yacc.c:1645  */
    break;

  case 191:
#line 383 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3223 "src/parser.c" /* yacc.c:1645  */
    break;

  case 193:
#line 384 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3229 "src/parser.c" /* yacc.c:1645  */
    break;

  case 195:
#line 387 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_cast((yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3235 "src/parser.c" /* yacc.c:1645  */
    break;

  case 196:
#line 389 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_sub; }
#line 3241 "src/parser.c" /* yacc.c:1645  */
    break;

  case 197:
#line 389 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mul; }
#line 3247 "src/parser.c" /* yacc.c:1645  */
    break;

  case 199:
#line 391 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_not; }
#line 3253 "src/parser.c" /* yacc.c:1645  */
    break;

  case 200:
#line 391 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_spork; }
#line 3259 "src/parser.c" /* yacc.c:1645  */
    break;

  case 201:
#line 391 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_cmp; }
#line 3265 "src/parser.c" /* yacc.c:1645  */
    break;

  case 203:
#line 394 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_unary((yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3271 "src/parser.c" /* yacc.c:1645  */
    break;

  case 204:
#line 395 "ly/gwion.y" /* yacc.c:1645  */
    {(yyval.exp) = new_exp_unary2(op_new, (yyvsp[0].type_decl)); }
#line 3277 "src/parser.c" /* yacc.c:1645  */
    break;

  case 205:
#line 396 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_unary3(op_spork, (yyvsp[0].stmt)); }
#line 3283 "src/parser.c" /* yacc.c:1645  */
    break;

  case 207:
#line 399 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_dur((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3289 "src/parser.c" /* yacc.c:1645  */
    break;

  case 208:
#line 402 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = new_type_list((yyvsp[0].type_decl), NULL); }
#line 3295 "src/parser.c" /* yacc.c:1645  */
    break;

  case 209:
#line 403 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = new_type_list((yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3301 "src/parser.c" /* yacc.c:1645  */
    break;

  case 210:
#line 406 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3307 "src/parser.c" /* yacc.c:1645  */
    break;

  case 211:
#line 406 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = NULL; }
#line 3313 "src/parser.c" /* yacc.c:1645  */
    break;

  case 212:
#line 408 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_inc; }
#line 3319 "src/parser.c" /* yacc.c:1645  */
    break;

  case 213:
#line 408 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_dec; }
#line 3325 "src/parser.c" /* yacc.c:1645  */
    break;

  case 214:
#line 410 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_dot((yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3331 "src/parser.c" /* yacc.c:1645  */
    break;

  case 216:
#line 412 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_array((yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3337 "src/parser.c" /* yacc.c:1645  */
    break;

  case 217:
#line 414 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_call((yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call((yyvsp[-1].type_list)); }
#line 3344 "src/parser.c" /* yacc.c:1645  */
    break;

  case 218:
#line 417 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_post((yyvsp[-1].exp), (yyvsp[0].ival)); }
#line 3350 "src/parser.c" /* yacc.c:1645  */
    break;

  case 219:
#line 417 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3356 "src/parser.c" /* yacc.c:1645  */
    break;

  case 220:
#line 420 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_complex; }
#line 3362 "src/parser.c" /* yacc.c:1645  */
    break;

  case 221:
#line 421 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3368 "src/parser.c" /* yacc.c:1645  */
    break;

  case 222:
#line 422 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3374 "src/parser.c" /* yacc.c:1645  */
    break;

  case 223:
#line 425 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_id(     (yyvsp[0].sym), get_pos(arg)); }
#line 3380 "src/parser.c" /* yacc.c:1645  */
    break;

  case 224:
#line 426 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_int(    (yyvsp[0].lval), get_pos(arg)); }
#line 3386 "src/parser.c" /* yacc.c:1645  */
    break;

  case 225:
#line 427 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_float(  (yyvsp[0].fval), get_pos(arg)); }
#line 3392 "src/parser.c" /* yacc.c:1645  */
    break;

  case 226:
#line 428 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_string( (yyvsp[0].sval), get_pos(arg)); }
#line 3398 "src/parser.c" /* yacc.c:1645  */
    break;

  case 227:
#line 429 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_char(   (yyvsp[0].sval), get_pos(arg)); }
#line 3404 "src/parser.c" /* yacc.c:1645  */
    break;

  case 228:
#line 430 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_array(  (yyvsp[0].array_sub), get_pos(arg)); }
#line 3410 "src/parser.c" /* yacc.c:1645  */
    break;

  case 229:
#line 431 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_vec((yyvsp[-2].ival), (yyvsp[-1].exp)); }
#line 3416 "src/parser.c" /* yacc.c:1645  */
    break;

  case 230:
#line 432 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_hack(   (yyvsp[-1].exp)); }
#line 3422 "src/parser.c" /* yacc.c:1645  */
    break;

  case 231:
#line 433 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) =                      (yyvsp[-1].exp);                }
#line 3428 "src/parser.c" /* yacc.c:1645  */
    break;

  case 232:
#line 434 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_nil(        get_pos(arg)); }
#line 3434 "src/parser.c" /* yacc.c:1645  */
    break;


#line 3438 "src/parser.c" /* yacc.c:1645  */
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
#line 436 "ly/gwion.y" /* yacc.c:1903  */

