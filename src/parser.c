/* A Bison parser, made by GNU Bison 3.5.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
#define YYBISON_VERSION "3.5.2"

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

#line 93 "src/parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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
    FUNCTION = 266,
    IF = 267,
    ELSE = 268,
    WHILE = 269,
    DO = 270,
    UNTIL = 271,
    LOOP = 272,
    FOR = 273,
    GOTO = 274,
    MATCH = 275,
    CASE = 276,
    WHEN = 277,
    WHERE = 278,
    ENUM = 279,
    TRETURN = 280,
    BREAK = 281,
    CONTINUE = 282,
    CLASS = 283,
    STRUCT = 284,
    STATIC = 285,
    GLOBAL = 286,
    PRIVATE = 287,
    PROTECT = 288,
    EXTENDS = 289,
    DOT = 290,
    OPERATOR = 291,
    TYPEDEF = 292,
    NOELSE = 293,
    UNION = 294,
    CONSTT = 295,
    AUTO = 296,
    PASTE = 297,
    ELLIPSE = 298,
    VARLOOP = 299,
    RARROW = 300,
    BACKSLASH = 301,
    BACKTICK = 302,
    OPID = 303,
    REF = 304,
    NONNULL = 305,
    NUM = 306,
    FLOATT = 307,
    ID = 308,
    STRING_LIT = 309,
    CHAR_LIT = 310,
    INTERP_LIT = 311,
    INTERP_EXP = 312,
    PP_COMMENT = 313,
    PP_INCLUDE = 314,
    PP_DEFINE = 315,
    PP_PRAGMA = 316,
    PP_UNDEF = 317,
    PP_IFDEF = 318,
    PP_IFNDEF = 319,
    PP_ELSE = 320,
    PP_ENDIF = 321,
    PP_NL = 322,
    PLUS = 324,
    PLUSPLUS = 325,
    MINUS = 326,
    MINUSMINUS = 327,
    TIMES = 328,
    DIVIDE = 329,
    PERCENT = 330,
    DOLLAR = 331,
    QUESTION = 332,
    COLON = 333,
    COLONCOLON = 334,
    QUESTIONCOLON = 335,
    NEW = 336,
    SPORK = 337,
    FORK = 338,
    TYPEOF = 339,
    L_HACK = 340,
    R_HACK = 341,
    AND = 342,
    EQ = 343,
    GE = 344,
    GT = 345,
    LE = 346,
    LT = 347,
    NEQ = 348,
    SHIFT_LEFT = 349,
    SHIFT_RIGHT = 350,
    S_AND = 351,
    S_OR = 352,
    S_XOR = 353,
    OR = 354,
    LTMPL = 355,
    RTMPL = 356,
    TILDA = 357,
    EXCLAMATION = 358,
    DYNOP = 359,
    UMINUS = 360,
    UTIMES = 361
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
#define FUNCTION 266
#define IF 267
#define ELSE 268
#define WHILE 269
#define DO 270
#define UNTIL 271
#define LOOP 272
#define FOR 273
#define GOTO 274
#define MATCH 275
#define CASE 276
#define WHEN 277
#define WHERE 278
#define ENUM 279
#define TRETURN 280
#define BREAK 281
#define CONTINUE 282
#define CLASS 283
#define STRUCT 284
#define STATIC 285
#define GLOBAL 286
#define PRIVATE 287
#define PROTECT 288
#define EXTENDS 289
#define DOT 290
#define OPERATOR 291
#define TYPEDEF 292
#define NOELSE 293
#define UNION 294
#define CONSTT 295
#define AUTO 296
#define PASTE 297
#define ELLIPSE 298
#define VARLOOP 299
#define RARROW 300
#define BACKSLASH 301
#define BACKTICK 302
#define OPID 303
#define REF 304
#define NONNULL 305
#define NUM 306
#define FLOATT 307
#define ID 308
#define STRING_LIT 309
#define CHAR_LIT 310
#define INTERP_LIT 311
#define INTERP_EXP 312
#define PP_COMMENT 313
#define PP_INCLUDE 314
#define PP_DEFINE 315
#define PP_PRAGMA 316
#define PP_UNDEF 317
#define PP_IFDEF 318
#define PP_IFNDEF 319
#define PP_ELSE 320
#define PP_ENDIF 321
#define PP_NL 322
#define PLUS 324
#define PLUSPLUS 325
#define MINUS 326
#define MINUSMINUS 327
#define TIMES 328
#define DIVIDE 329
#define PERCENT 330
#define DOLLAR 331
#define QUESTION 332
#define COLON 333
#define COLONCOLON 334
#define QUESTIONCOLON 335
#define NEW 336
#define SPORK 337
#define FORK 338
#define TYPEOF 339
#define L_HACK 340
#define R_HACK 341
#define AND 342
#define EQ 343
#define GE 344
#define GT 345
#define LE 346
#define LT 347
#define NEQ 348
#define SHIFT_LEFT 349
#define SHIFT_RIGHT 350
#define S_AND 351
#define S_OR 352
#define S_XOR 353
#define OR 354
#define LTMPL 355
#define RTMPL 356
#define TILDA 357
#define EXCLAMATION 358
#define DYNOP 359
#define UMINUS 360
#define UTIMES 361

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
  Range* range;
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

#line 385 "src/parser.c"

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

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   1673

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  266
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  438

#define YYUNDEFTOK  2
#define YYMAXUTOK   362


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   141,   144,   145,   149,   150,   151,   152,
     153,   154,   155,   158,   158,   160,   169,   169,   171,   171,
     174,   175,   178,   178,   179,   179,   181,   181,   183,   185,
     188,   195,   202,   202,   204,   208,   212,   213,   213,   214,
     215,   215,   222,   223,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   253,   254,   261,   261,   264,   267,
     269,   271,   271,   274,   282,   283,   285,   285,   287,   295,
     296,   299,   301,   303,   305,   307,   309,   313,   316,   318,
     323,   324,   325,   328,   329,   333,   334,   337,   337,   339,
     339,   341,   341,   343,   343,   343,   346,   347,   348,   352,
     353,   354,   358,   359,   360,   363,   363,   364,   364,   365,
     367,   368,   369,   369,   371,   371,   372,   372,   373,   373,
     375,   375,   377,   378,   381,   382,   385,   386,   387,   390,
     390,   393,   396,   396,   396,   396,   396,   399,   400,   402,
     404,   406,   411,   411,   412,   412,   415,   416,   420,   421,
     425,   428,   429,   430,   432,   433,   436,   456,   457,   460,
     461,   463,   464,   465,   466,   467,   468,   470,   470,   471,
     471,   471,   471,   472,   472,   473,   473,   474,   474,   474,
     476,   476,   477,   478,   480,   483,   483,   484,   484,   485,
     485,   486,   486,   487,   487,   488,   488,   489,   489,   490,
     490,   491,   491,   492,   492,   493,   493,   495,   496,   496,
     498,   498,   501,   501,   501,   502,   502,   502,   502,   505,
     505,   506,   507,   508,   511,   512,   513,   513,   516,   517,
     520,   520,   522,   522,   524,   525,   526,   528,   530,   533,
     534,   537,   538,   540,   549,   552,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\";\"", "\",\"", "\"(\"", "\")\"",
  "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"fun\"", "\"if\"", "\"else\"",
  "\"while\"", "\"do\"", "\"until\"", "\"repeat\"", "\"for\"", "\"goto\"",
  "\"match\"", "\"case\"", "\"when\"", "\"where\"", "\"enum\"",
  "\"return\"", "\"break\"", "\"continue\"", "\"class\"", "\"struct\"",
  "\"static\"", "\"global\"", "\"private\"", "\"protect\"", "\"extends\"",
  "\".\"", "\"operator\"", "\"typedef\"", "NOELSE", "\"union\"",
  "\"const\"", "\"auto\"", "\"##\"", "\"...\"", "\"varloop\"", "\"->\"",
  "\"\\\\\"", "\"`\"", "OPID", "\"ref\"", "\"nonnull\"", "\"<integer>\"",
  "FLOATT", "\"<identifier>\"", "\"<litteral string>\"",
  "\"<litteral char>\"", "\"<interp string>\"", "INTERP_EXP",
  "\"<comment>\"", "\"#include\"", "\"#define\"", "\"#pragma\"",
  "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"", "\"#if\"",
  "\"\\n\"", "\"@<operator id>\"", "\"+\"", "\"++\"", "\"-\"", "\"--\"",
  "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"", "\"::\"", "\"?:\"",
  "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"", "\"<<<\"", "\">>>\"",
  "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"", "\"<\"", "\"!=\"",
  "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"", "\"||\"", "\"<~\"",
  "\"~>\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"", "UMINUS", "UTIMES",
  "\"=\"", "$accept", "prg", "ast", "section", "class_type", "class_def",
  "class_ext", "class_body", "class_body2", "id_list", "dot_decl",
  "stmt_list", "fptr_base", "fdef_base", "fptr_def", "type_def",
  "type_decl_array", "type_decl_exp", "type_decl_empty", "arg", "arg_list",
  "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt", "id", "opt_id",
  "enum_def", "label_stmt", "goto_stmt", "when_exp", "match_case_stmt",
  "match_list", "where_stmt", "match_stmt", "flow", "loop_stmt",
  "varloop_stmt", "selection_stmt", "breaks", "jump_stmt", "exp_stmt",
  "exp", "binary_exp", "call_template", "op", "array_exp", "array_empty",
  "range", "array", "decl_exp2", "decl_exp", "union_exp", "decl_exp3",
  "func_args", "fptr_args", "arg_type", "decl_template", "storage_flag",
  "access_flag", "flag", "opt_flag", "func_def_base", "op_op", "func_def",
  "ref", "decl_flag", "type_decl000", "type_decl00", "type_decl0",
  "type_decl", "decl_list", "union_def", "var_decl_list", "var_decl",
  "arg_decl", "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op",
  "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
  "inc_or_exp", "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp",
  "add_exp", "mul_exp", "dur_exp", "_typeof_exp", "typeof_exp", "cast_exp",
  "unary_op", "unary_exp", "lambda_list", "lambda_arg", "type_list",
  "call_paren", "post_op", "dot_exp", "post_exp", "interp_exp", "interp",
  "prim_exp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
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

#define YYPACT_NINF (-339)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-158)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     714,  -339,  1106,  1048,   815,   154,    46,  -339,   907,  -339,
      53,    65,    79,  1570,   154,  1570,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,   397,   154,   154,   -28,    98,  1570,
      79,  1164,   -28,  -339,  -339,    97,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,   -11,   171,   171,   102,  1570,   -11,  -339,  -339,
     163,  -339,   714,    81,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,   907,   101,  -339,  -339,  -339,  -339,   186,  -339,  -339,
    -339,   190,  -339,  -339,   191,    12,  -339,   188,  -339,  -339,
    -339,  -339,  -339,   125,  -339,   -11,  -339,  -339,  -339,    98,
    -339,    79,  -339,  -339,    56,   111,   103,   105,   114,   -53,
     117,    83,    54,     7,   132,   120,  -339,   136,    39,  -339,
     171,  -339,  -339,    43,  -339,  -339,   122,   195,   592,  -339,
    1570,    18,  -339,   203,  -339,   -11,  1570,   124,  1570,   506,
     211,   212,   213,   228,   -11,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
     -11,  -339,  -339,  -339,  -339,   -11,   -11,    81,   187,  -339,
    -339,  -339,  -339,  -339,    79,    10,    79,  -339,  -339,   177,
    -339,  1164,  -339,    79,  -339,  -339,   230,  -339,  -339,  1570,
     152,  -339,   235,   139,  -339,  -339,    79,   154,  -339,    79,
    -339,  1570,  -339,  -339,  1570,  1570,  1222,  -339,  -339,  -339,
    -339,   230,  -339,   238,  1570,   197,   197,   197,   197,   197,
     197,  -339,  -339,   197,   197,   197,   197,   197,   592,   -11,
     -11,  -339,  -339,  -339,  1280,    79,   -11,   240,  -339,  -339,
    -339,  -339,   246,   230,  1338,  -339,    17,    79,   251,  1570,
     253,    98,   990,  -339,   225,    79,  -339,   255,   259,   260,
      17,    79,    79,  -339,  -339,  -339,  -339,  -339,  -339,  1396,
    -339,   265,  -339,   -11,   -25,   174,   268,    79,  -339,   270,
    -339,  -339,  -339,   275,  -339,    79,  -339,   206,  -339,  -339,
     111,   103,   105,   114,   -53,   117,    83,    54,     7,   132,
     136,  -339,   282,  -339,   189,  1454,  -339,  -339,  -339,   188,
    -339,   280,  -339,   283,   171,    81,   907,   288,   907,    79,
    1512,  1570,   225,   284,   285,   -11,   286,   -11,   -11,  -339,
      81,  -339,   293,  -339,  -339,  -339,  -339,    79,   263,   907,
    -339,   197,   -11,  -339,  -339,   287,  -339,  -339,  -339,   255,
     290,  -339,  -339,   226,   907,   300,   289,  -339,   301,    79,
     303,  -339,    79,   171,   304,   306,   159,   -28,  -339,   -11,
     296,  -339,  -339,   307,  -339,  -339,   907,  1570,  -339,   907,
    1570,   231,   907,  -339,   311,   -11,   230,  -339,  -339,   -11,
     171,  -339,   -11,  -339,   319,    79,   313,  -339,   714,   171,
    -339,    41,  -339,  -339,   907,  -339,  -339,  -339,  -339,   188,
     323,  -339,   326,  -339,    79,   -28,  -339,    79,   714,   322,
    -339,  -339,   907,  -339,   171,   -11,   230,  -339,  -339,   330,
    -339,  -339,  -339,  -339,  -339,  -339,   188,  -339
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    96,     0,     0,     0,   139,     0,    79,     0,    80,
       0,     0,     0,     0,   139,    90,    91,    92,    13,    14,
     132,   133,   134,   135,     0,   139,   139,     0,   152,     0,
     237,     0,     0,   256,   257,    64,   258,   259,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   242,   222,
     243,   223,     0,   226,   227,     0,     0,     0,   228,   225,
       0,     2,     4,   131,     8,   156,     6,    11,    12,    57,
      62,    26,   255,     9,    58,    59,    60,     0,    55,    63,
      56,     0,    61,    54,     0,    97,   115,   116,   261,   260,
      99,   122,   118,   137,   136,     0,   147,     7,   158,   152,
     161,     0,    10,   117,   192,   195,   197,   199,   201,   203,
     205,   207,   209,   211,   213,   219,   215,   218,     0,   220,
       0,   224,   250,   229,   245,   265,   255,     0,     0,   109,
       0,     0,    42,     0,   140,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   185,   186,   187,   188,   189,
     103,   182,   180,   181,   179,   104,   183,   184,   105,   142,
       0,   144,   143,   146,   145,     0,     0,   131,    24,   162,
     157,   153,   154,   155,     0,     0,   234,   236,   251,     0,
     254,   266,   163,     0,    34,   231,    32,   232,   233,     0,
       0,    35,   238,     0,     1,     5,     0,   139,    27,     0,
      69,     0,    94,    95,     0,     0,     0,   111,   138,   123,
     160,   169,   120,   167,   191,     0,     0,     0,     0,     0,
       0,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,   255,   230,   264,     0,     0,     0,     0,   246,   247,
     249,   263,     0,   106,     0,    43,     0,     0,     0,     0,
       0,   152,     0,    70,     0,     0,    93,     0,     0,     0,
       0,     0,    67,   119,    87,   235,   252,   253,    65,     0,
      33,     0,   262,     0,     0,     0,    22,     0,    25,     0,
      98,   100,   110,     0,   170,     0,   190,     0,   194,   219,
     196,   198,   200,   202,   204,   206,   208,   210,   212,   214,
     216,   221,     0,   244,     0,     0,   248,   114,   107,   108,
     113,     0,   129,     0,     0,   131,     0,     0,     0,     0,
       0,     0,    74,     0,     0,   125,     0,     0,     0,    30,
     131,    66,     0,   217,   239,   159,   130,     0,    17,     0,
     168,     0,     0,   101,   241,     0,   112,   128,   141,     0,
      88,    82,    86,     0,     0,     0,    72,    75,    77,    67,
      37,   124,     0,     0,     0,     0,     0,     0,    23,     0,
       0,    81,   193,     0,   240,    29,     0,     0,    83,     0,
       0,     0,     0,    78,     0,     0,   171,    36,   151,     0,
       0,    31,   127,    28,     0,     0,     0,    16,    19,     0,
      89,     0,    84,    71,     0,    76,    68,    38,   173,   172,
       0,   149,    40,   126,    67,   164,   121,    67,    20,     0,
      18,   150,     0,    73,     0,     0,   174,    39,   165,     0,
      21,    15,    85,   148,    41,   176,   175,   166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -339,  -339,   248,  -334,  -339,  -339,  -339,  -339,   -84,  -231,
     137,    -2,  -339,  -339,  -339,  -339,   -49,   -34,   -99,  -240,
     -41,  -339,   -80,   -16,  -339,    -1,     0,  -338,  -339,  -339,
    -339,  -339,  -339,    24,  -339,  -339,   215,  -339,  -339,  -339,
    -339,  -339,  -125,    52,   -19,  -339,   325,   -46,  -234,   227,
    -112,   150,   266,  -339,  -339,    11,  -339,   104,  -162,  -339,
     272,     8,    -8,  -339,  -339,  -339,   115,   269,    96,  -318,
     129,   291,   -44,  -339,  -159,  -339,   -18,  -339,  -339,   360,
     362,   363,   364,  -339,  -204,  -339,   175,   176,   178,   181,
     183,   182,   173,   184,   180,   185,   299,  -339,   179,     1,
     -75,   234,  -339,  -205,  -339,    -4,  -339,  -339,   220,  -339,
    -339
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    60,    61,    62,    63,    64,   370,   419,   420,   275,
      65,    66,   260,   246,    67,    68,   191,   185,   192,   360,
     361,   412,   413,    69,    70,    71,   126,   332,    73,    74,
      75,   381,   322,   323,   383,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,   237,   205,    86,    87,    88,
      89,    90,    91,   394,    92,   326,   393,   314,   197,    93,
      94,    95,   135,    96,   160,    97,   173,   174,    98,    99,
     100,   101,   396,   102,   212,   213,   387,   427,   223,   224,
     225,   226,   227,   287,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   128,
     119,   177,   120,   193,   306,   121,   122,   123,   180,   181,
     124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,   118,   133,   184,    72,   262,   142,   137,    72,   309,
     175,   288,   140,   134,   252,   263,   204,   166,   167,     4,
     165,   384,   134,   312,   324,    35,   243,   168,    35,    27,
     176,   304,   168,   134,   134,   221,   247,   187,   188,    32,
     222,   207,    35,   232,     2,   257,     3,   422,  -102,   395,
     234,   136,   168,   232,   127,   131,    55,   168,   138,    55,
     313,   258,    72,   118,   418,   141,   259,   143,   334,   198,
     139,    72,    57,    55,   270,   230,   426,   238,   235,   429,
     147,   148,   149,   179,   418,    30,    31,   364,   365,    57,
      33,    34,    35,    36,    37,   168,   244,   395,   150,   284,
     150,   211,   373,   155,   233,   155,   368,   189,   190,    48,
      49,    50,    51,    48,   158,    50,   158,   261,   231,   240,
      52,    53,    54,   145,    56,   146,   340,   320,   231,   150,
     301,   302,    35,   214,   155,   168,   215,   372,     7,   183,
       9,    58,    59,   236,   168,   158,   199,   171,   172,   410,
     -24,   -24,   409,   349,   -24,   216,   169,    22,    23,   264,
     168,   182,   391,   194,   392,   168,   168,   199,   366,  -157,
    -157,   -24,   -24,  -157,   211,   -24,   176,   156,   157,   200,
       4,   196,   242,   268,    20,    21,    22,    23,   248,   277,
     250,   201,   436,   202,   203,   206,   276,   308,   217,   168,
     218,   241,     2,   219,     3,   134,   151,   152,   153,   154,
     220,   228,   229,   245,   253,   231,   231,   231,   231,   231,
     231,   254,   255,   231,   231,   231,   231,   231,   231,   168,
     168,   256,   199,   179,   266,   303,   168,   269,   272,   273,
     274,   271,   285,    30,    31,   305,   321,   315,    33,    34,
      35,    36,    37,   279,   307,   276,   280,   316,   283,   318,
     325,   330,   331,   207,   327,   328,   286,    48,    49,    50,
      51,   333,   337,   168,   168,   336,   339,   338,    52,    53,
      54,    55,    56,   243,   341,   211,   131,   342,   346,   347,
     343,   351,   363,   374,   358,   359,   311,   369,   348,    58,
      59,   317,   367,   376,   377,   398,   379,   385,   389,   404,
     195,   380,   390,   399,   406,   350,    72,   352,    72,   353,
     184,   283,   415,   417,   382,   168,   170,   168,   168,   424,
     425,   170,   431,   437,   430,   397,   278,   276,   371,    72,
     408,   231,   168,   186,   407,   434,   357,   388,   186,   159,
     239,   170,   249,   378,    72,   281,   170,   345,   401,   331,
     375,   209,   386,   207,   329,   208,   319,   168,   210,   168,
     335,   428,   355,   356,   411,   400,    72,   416,   402,    72,
     435,   405,    72,   421,   161,   168,   162,   163,   164,   168,
     207,   290,   168,   291,   170,   386,   292,   296,    72,   118,
     293,   267,   423,   294,    72,   295,   298,   300,   433,   297,
     265,     0,   299,     0,   331,   168,     0,   331,    72,   118,
       0,   432,    72,     0,     0,   168,   186,     0,     0,     0,
       0,     0,   403,     0,   170,   186,     0,     0,     0,     0,
       0,     0,     0,   170,     0,   144,     0,     0,     0,     0,
       0,   186,     0,     0,     0,     0,   186,   186,     0,   170,
       0,     0,     0,     0,   170,   170,   145,    48,   146,    50,
     147,   148,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   150,   151,   152,   153,   154,
     155,   156,   157,     0,     0,     0,     0,     0,     0,     0,
       0,   158,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     0,     3,   289,   289,   289,   289,   289,   289,
     186,   186,   289,   289,   289,   289,   289,   186,   170,   170,
       0,     0,     0,     0,     0,   170,    20,    21,    22,    23,
       0,     0,     0,     0,     0,     0,    27,   251,     0,     0,
       0,     0,    30,    31,     0,     0,    32,    33,    34,    35,
      36,    37,     0,     0,   186,     0,     0,     0,     0,     0,
       0,     0,   170,   170,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     0,     0,    57,     0,    58,    59,
       0,     0,     0,     0,     0,     0,   362,     0,   362,   362,
       0,     0,     0,     0,   170,     0,   170,   170,     0,     0,
       0,     0,     0,   362,     0,     0,     0,     0,    30,    31,
     289,   170,     0,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     186,     0,    48,    49,    50,    51,   170,     0,   170,     0,
       0,     0,     0,    52,    53,    54,   362,    56,     0,     0,
     362,     0,     0,   414,   170,     0,     0,     0,   170,     0,
       0,   170,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,     0,   414,     1,     0,     2,
       0,     3,     0,     4,   170,     5,     6,     0,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
      24,    25,     0,    26,    27,    28,     0,     0,    29,     0,
      30,    31,     0,     0,    32,    33,    34,    35,    36,    37,
       0,     0,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     0,     0,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,    58,    59,     1,     0,
       2,     0,     3,     0,     4,   132,     0,     6,     0,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,     0,
      15,    16,    17,     0,     0,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,    27,    28,     0,     0,    29,
       0,    30,    31,     0,     0,    32,    33,    34,    35,    36,
      37,     0,     0,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     0,     0,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,    57,     4,    58,    59,     6,
       0,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,    15,    16,    17,     0,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    27,    28,     0,
       0,    29,     0,    30,    31,     0,     0,    32,    33,    34,
      35,    36,    37,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     0,     0,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,     1,     0,     2,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
      27,    28,     0,     0,     0,     0,    30,    31,     0,     0,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,   129,     0,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,    27,    28,
      57,     0,    58,    59,    30,    31,     0,     0,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     2,   125,     3,     0,     0,     0,     0,    48,    49,
      50,    51,     0,     0,     0,     0,   130,     0,     0,    52,
      53,    54,    55,    56,     0,     0,    20,    21,    22,    23,
       0,     0,     0,     0,     0,     0,    27,    28,    57,     0,
      58,    59,    30,    31,     0,     0,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     0,     0,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    27,    28,    57,     0,    58,    59,
      30,    31,     0,     0,    32,    33,    34,    35,    36,    37,
     178,     0,     0,     0,     0,     0,     0,     2,     0,     3,
     282,     0,     0,     0,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,    27,    28,    57,     0,    58,    59,    30,    31,
       0,     0,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
       0,     0,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     0,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
      27,    28,    57,     0,    58,    59,    30,    31,     0,     0,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,   310,     0,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,   130,     0,
       0,    52,    53,    54,    55,    56,     0,     0,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,    27,    28,
      57,     0,    58,    59,    30,    31,     0,     0,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,   129,     0,     0,     0,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,     0,     0,    20,    21,    22,    23,
       0,     0,     0,     0,     0,     0,    27,    28,    57,     0,
      58,    59,    30,    31,     0,     0,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     2,
     344,     3,     0,     0,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    27,    28,    57,     0,    58,    59,
      30,    31,     0,     0,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     2,   354,     3,
       0,     0,     0,     0,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,    27,    28,    57,     0,    58,    59,    30,    31,
       0,     0,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
       0,     0,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     0,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
      27,    28,    57,     0,    58,    59,    30,    31,     0,     0,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,    58,    59
};

static const yytype_int16 yycheck[] =
{
       0,     0,     4,    52,     4,   167,    14,     8,     8,   243,
      29,   215,    12,     5,   139,   174,     4,    25,    26,     9,
      24,   359,    14,     6,   255,    53,     8,    27,    53,    40,
      30,   236,    32,    25,    26,    88,   135,    53,    54,    50,
      93,    87,    53,   118,     5,   144,     7,     6,     5,   367,
       7,     5,    52,   128,     2,     3,    84,    57,     5,    84,
      43,   160,    62,    62,   398,    13,   165,    15,   273,    71,
       5,    71,   100,    84,   186,    36,   414,   123,    35,   417,
      73,    74,    75,    31,   418,    46,    47,   327,   328,   100,
      51,    52,    53,    54,    55,    95,    78,   415,    88,   211,
      88,   101,   342,    93,   120,    93,   337,     5,    56,    70,
      71,    72,    73,    70,   104,    72,   104,   166,   118,   123,
      81,    82,    83,    69,    85,    71,   285,   252,   128,    88,
     229,   230,    53,    77,    93,   135,    80,   341,    14,    42,
      16,   102,   103,   100,   144,   104,    45,    49,    50,   389,
      49,    50,   386,   315,    53,    99,    27,    32,    33,   175,
     160,    32,     3,     0,     5,   165,   166,    45,   330,    49,
      50,    49,    50,    53,   174,    53,   176,    94,    95,    78,
       9,   100,   130,   183,    30,    31,    32,    33,   136,   197,
     138,     5,   426,     3,     3,     7,   196,   243,    87,   199,
      97,     6,     5,    98,     7,   197,    89,    90,    91,    92,
      96,    79,    76,    10,     3,   215,   216,   217,   218,   219,
     220,     9,     9,   223,   224,   225,   226,   227,   228,   229,
     230,     3,    45,   181,    57,   235,   236,     7,    86,     4,
     101,   189,     4,    46,    47,     5,    21,   247,    51,    52,
      53,    54,    55,   201,     8,   255,   204,     6,   206,     6,
       5,   261,   262,   309,     5,     5,   214,    70,    71,    72,
      73,     6,     4,   273,   274,   101,     6,   277,    81,    82,
      83,    84,    85,     8,    78,   285,   234,     5,     8,     6,
     101,     3,     6,     6,    10,    10,   244,    34,   314,   102,
     103,   249,     9,    13,    78,     9,     6,     4,     4,    78,
      62,    22,     6,     6,     3,   316,   316,   318,   318,   319,
     369,   269,     3,    10,    23,   325,    27,   327,   328,     6,
       4,    32,    10,     3,   418,   369,   199,   337,   339,   339,
     386,   341,   342,    52,   385,   425,   322,   363,    57,    24,
     123,    52,   137,   354,   354,   205,    57,   305,   377,   359,
     349,    95,   362,   409,   260,    93,   251,   367,    99,   369,
     274,   415,   320,   321,   390,   376,   376,   395,   379,   379,
     426,   382,   382,   399,    24,   385,    24,    24,    24,   389,
     436,   216,   392,   217,    95,   395,   218,   224,   398,   398,
     219,   181,   404,   220,   404,   223,   226,   228,   424,   225,
     176,    -1,   227,    -1,   414,   415,    -1,   417,   418,   418,
      -1,   422,   422,    -1,    -1,   425,   135,    -1,    -1,    -1,
      -1,    -1,   380,    -1,   135,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,    -1,    48,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,   165,   166,    -1,   160,
      -1,    -1,    -1,    -1,   165,   166,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,   215,   216,   217,   218,   219,   220,
     229,   230,   223,   224,   225,   226,   227,   236,   229,   230,
      -1,    -1,    -1,    -1,    -1,   236,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    50,    51,    52,    53,
      54,    55,    -1,    -1,   273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   273,   274,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,   327,   328,
      -1,    -1,    -1,    -1,   325,    -1,   327,   328,    -1,    -1,
      -1,    -1,    -1,   342,    -1,    -1,    -1,    -1,    46,    47,
     341,   342,    -1,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     369,    -1,    70,    71,    72,    73,   367,    -1,   369,    -1,
      -1,    -1,    -1,    81,    82,    83,   385,    85,    -1,    -1,
     389,    -1,    -1,   392,   385,    -1,    -1,    -1,   389,    -1,
      -1,   392,    -1,    -1,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   415,    -1,   425,     3,    -1,     5,
      -1,     7,    -1,     9,   425,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      36,    37,    -1,    39,    40,    41,    -1,    -1,    44,    -1,
      46,    47,    -1,    -1,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,   102,   103,     3,    -1,
       5,    -1,     7,    -1,     9,    10,    -1,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    44,
      -1,    46,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,   100,     9,   102,   103,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    44,    -1,    46,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,     3,    -1,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    -1,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
     100,    -1,   102,   103,    46,    47,    -1,    -1,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,   100,    -1,
     102,   103,    46,    47,    -1,    -1,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    -1,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,   100,    -1,   102,   103,
      46,    47,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,   100,    -1,   102,   103,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,   100,    -1,   102,   103,    46,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    -1,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
     100,    -1,   102,   103,    46,    47,    -1,    -1,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,     8,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,   100,    -1,
     102,   103,    46,    47,    -1,    -1,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    -1,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,   100,    -1,   102,   103,
      46,    47,    -1,    -1,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,   100,    -1,   102,   103,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,   100,    -1,   102,   103,    46,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,   102,   103
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    36,    37,    39,    40,    41,    44,
      46,    47,    50,    51,    52,    53,    54,    55,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    70,    71,
      72,    73,    81,    82,    83,    84,    85,   100,   102,   103,
     109,   110,   111,   112,   113,   118,   119,   122,   123,   131,
     132,   133,   134,   136,   137,   138,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   155,   156,   157,   158,
     159,   160,   162,   167,   168,   169,   171,   173,   176,   177,
     178,   179,   181,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     210,   213,   214,   215,   218,     6,   134,   151,   207,     8,
      78,   151,    10,   119,   169,   170,     5,   133,     5,     5,
     134,   151,   170,   151,    48,    69,    71,    73,    74,    75,
      88,    89,    90,    91,    92,    93,    94,    95,   104,   154,
     172,   187,   188,   189,   190,   213,   170,   170,   134,   178,
     204,    49,    50,   174,   175,   152,   134,   209,    56,   151,
     216,   217,   178,    42,   124,   125,   179,   131,   131,     5,
     151,   124,   126,   211,     0,   110,   100,   166,   119,    45,
      78,     5,     3,     3,     4,   154,     7,   155,   168,   160,
     175,   134,   182,   183,    77,    80,    99,    87,    97,    98,
      96,    88,    93,   186,   187,   188,   189,   190,    79,    76,
      36,   134,   208,   131,     7,    35,   100,   153,   155,   157,
     213,     6,   151,     8,    78,    10,   121,   126,   151,   144,
     151,    41,   150,     3,     9,     9,     3,   126,   126,   126,
     120,   124,   166,   182,   131,   209,    57,   216,   134,     7,
     158,   151,    86,     4,   101,   117,   134,   170,   118,   151,
     151,   159,     8,   151,   158,     4,   151,   191,   192,   204,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     206,   126,   126,   134,   211,     5,   212,     8,   155,   156,
       8,   151,     6,    43,   165,   134,     6,   151,     6,   174,
     150,    21,   140,   141,   117,     5,   163,     5,     5,   165,
     134,   134,   135,     6,   211,   176,   101,     4,   134,     6,
     182,    78,     5,   101,     6,   151,     8,     6,   131,   166,
     133,     3,   133,   134,     6,   151,   151,   141,    10,    10,
     127,   128,   179,     6,   127,   127,   166,     9,   117,    34,
     114,   133,   192,   127,     6,   163,    13,    78,   133,     6,
      22,   139,    23,   142,   135,     4,   134,   184,   131,     4,
       6,     3,     5,   164,   161,   177,   180,   125,     9,     6,
     133,   152,   133,   151,    78,   133,     3,   128,   155,   156,
     127,   131,   129,   130,   179,     3,   184,    10,   111,   115,
     116,   131,     6,   119,     6,     4,   135,   185,   180,   135,
     116,    10,   133,   131,   130,   155,   156,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   121,
     122,   123,   124,   124,   125,   126,   127,   128,   128,   129,
     130,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   134,   134,   135,   135,   136,   137,
     138,   139,   139,   140,   141,   141,   142,   142,   143,   144,
     144,   145,   145,   145,   145,   145,   145,   146,   147,   147,
     148,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     152,   153,   153,   154,   154,   154,   155,   155,   155,   156,
     156,   156,   157,   157,   157,   158,   158,   159,   159,   159,
     160,   161,   162,   162,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   169,   169,   169,   170,
     170,   171,   172,   172,   172,   172,   172,   173,   173,   173,
     173,   173,   174,   174,   175,   175,   176,   176,   177,   177,
     178,   179,   179,   179,   180,   180,   181,   182,   182,   183,
     183,   184,   184,   184,   185,   185,   185,   186,   186,   187,
     187,   187,   187,   188,   188,   189,   189,   190,   190,   190,
     191,   191,   192,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   198,   198,   199,   199,   200,
     200,   201,   201,   202,   202,   203,   203,   204,   205,   205,
     206,   206,   207,   207,   207,   207,   207,   207,   207,   208,
     208,   208,   208,   208,   209,   209,   210,   210,   211,   211,
     212,   212,   213,   213,   214,   215,   215,   215,   215,   215,
     215,   216,   216,   217,   217,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     2,     0,     1,     0,
       1,     2,     1,     3,     1,     3,     1,     2,     4,     4,
       4,     6,     1,     2,     1,     1,     2,     1,     3,     2,
       1,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     0,     7,     2,
       3,     2,     0,     5,     1,     2,     2,     0,     6,     1,
       1,     5,     5,     6,     7,     9,     5,     3,     5,     7,
       1,     1,     1,     3,     2,     2,     1,     1,     3,     1,
       3,     3,     0,     1,     1,     1,     3,     4,     4,     2,
       3,     2,     5,     4,     4,     1,     1,     1,     1,     3,
       2,     2,     1,     2,     2,     1,     2,     1,     2,     1,
       3,     0,     1,     1,     1,     1,     1,     1,     2,     0,
       1,     5,     1,     1,     1,     1,     1,     1,     9,     7,
       7,     6,     0,     1,     1,     1,     1,     1,     1,     4,
       2,     1,     2,     2,     2,     3,     9,     1,     3,     1,
       2,     1,     2,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     5,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     4,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     2,     2,     1,     1,     3,
       3,     2,     1,     1,     3,     1,     2,     2,     3,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     2,     2
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
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, Scanner* arg)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
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
          ++yyp;
          ++yyformat;
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
  switch (yytype)
    {
    case 110: /* ast  */
#line 137 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1996 "src/parser.c"
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

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

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

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
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
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
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

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
#line 140 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2298 "src/parser.c"
    break;

  case 3:
#line 141 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty.\n"); YYERROR; }
#line 2304 "src/parser.c"
    break;

  case 4:
#line 144 "src/gwion.y"
            { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2310 "src/parser.c"
    break;

  case 5:
#line 145 "src/gwion.y"
                { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2316 "src/parser.c"
    break;

  case 6:
#line 149 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2322 "src/parser.c"
    break;

  case 7:
#line 150 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2328 "src/parser.c"
    break;

  case 8:
#line 151 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2334 "src/parser.c"
    break;

  case 9:
#line 152 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2340 "src/parser.c"
    break;

  case 10:
#line 153 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2346 "src/parser.c"
    break;

  case 11:
#line 154 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2352 "src/parser.c"
    break;

  case 12:
#line 155 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2358 "src/parser.c"
    break;

  case 13:
#line 158 "src/gwion.y"
                  { (yyval.flag) = ae_flag_none; }
#line 2364 "src/parser.c"
    break;

  case 14:
#line 158 "src/gwion.y"
                                                  { (yyval.flag) = ae_flag_struct; }
#line 2370 "src/parser.c"
    break;

  case 15:
#line 161 "src/gwion.y"
    {
      if((yyvsp[-7].flag) == ae_flag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-7].flag) | (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-6].id_list));
  }
#line 2382 "src/parser.c"
    break;

  case 16:
#line 169 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2388 "src/parser.c"
    break;

  case 17:
#line 169 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2394 "src/parser.c"
    break;

  case 19:
#line 171 "src/gwion.y"
                           { (yyval.ast) = NULL; }
#line 2400 "src/parser.c"
    break;

  case 20:
#line 174 "src/gwion.y"
                        { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2406 "src/parser.c"
    break;

  case 21:
#line 175 "src/gwion.y"
                        { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2412 "src/parser.c"
    break;

  case 22:
#line 178 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2418 "src/parser.c"
    break;

  case 23:
#line 178 "src/gwion.y"
                                                                                    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2424 "src/parser.c"
    break;

  case 24:
#line 179 "src/gwion.y"
               { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yylsp[0]))); }
#line 2430 "src/parser.c"
    break;

  case 25:
#line 179 "src/gwion.y"
                                                                                                        { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2436 "src/parser.c"
    break;

  case 26:
#line 181 "src/gwion.y"
                { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2442 "src/parser.c"
    break;

  case 27:
#line 181 "src/gwion.y"
                                                                              { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2448 "src/parser.c"
    break;

  case 28:
#line 183 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2455 "src/parser.c"
    break;

  case 29:
#line 185 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2462 "src/parser.c"
    break;

  case 30:
#line 188 "src/gwion.y"
                                              {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag));
}
#line 2474 "src/parser.c"
    break;

  case 31:
#line 195 "src/gwion.y"
                                                                      {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2485 "src/parser.c"
    break;

  case 33:
#line 202 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2491 "src/parser.c"
    break;

  case 34:
#line 204 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2499 "src/parser.c"
    break;

  case 35:
#line 208 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2507 "src/parser.c"
    break;

  case 36:
#line 212 "src/gwion.y"
                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2513 "src/parser.c"
    break;

  case 37:
#line 213 "src/gwion.y"
              { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2519 "src/parser.c"
    break;

  case 38:
#line 213 "src/gwion.y"
                                                { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2525 "src/parser.c"
    break;

  case 39:
#line 214 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2531 "src/parser.c"
    break;

  case 40:
#line 215 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2537 "src/parser.c"
    break;

  case 41:
#line 215 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2547 "src/parser.c"
    break;

  case 42:
#line 222 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2553 "src/parser.c"
    break;

  case 43:
#line 223 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2559 "src/parser.c"
    break;

  case 44:
#line 227 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2565 "src/parser.c"
    break;

  case 45:
#line 228 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2571 "src/parser.c"
    break;

  case 46:
#line 229 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2577 "src/parser.c"
    break;

  case 47:
#line 230 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2583 "src/parser.c"
    break;

  case 48:
#line 231 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2589 "src/parser.c"
    break;

  case 49:
#line 232 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2595 "src/parser.c"
    break;

  case 50:
#line 233 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2601 "src/parser.c"
    break;

  case 51:
#line 234 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2607 "src/parser.c"
    break;

  case 52:
#line 235 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2613 "src/parser.c"
    break;

  case 53:
#line 236 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2619 "src/parser.c"
    break;

  case 64:
#line 253 "src/gwion.y"
       { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2625 "src/parser.c"
    break;

  case 65:
#line 254 "src/gwion.y"
                {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2635 "src/parser.c"
    break;

  case 67:
#line 261 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2641 "src/parser.c"
    break;

  case 68:
#line 264 "src/gwion.y"
                                                            { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-5].flag); }
#line 2648 "src/parser.c"
    break;

  case 69:
#line 267 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2654 "src/parser.c"
    break;

  case 70:
#line 269 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2660 "src/parser.c"
    break;

  case 71:
#line 271 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2666 "src/parser.c"
    break;

  case 72:
#line 271 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2672 "src/parser.c"
    break;

  case 73:
#line 274 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2683 "src/parser.c"
    break;

  case 74:
#line 282 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2689 "src/parser.c"
    break;

  case 75:
#line 283 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2695 "src/parser.c"
    break;

  case 76:
#line 285 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2701 "src/parser.c"
    break;

  case 77:
#line 285 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2707 "src/parser.c"
    break;

  case 78:
#line 287 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2718 "src/parser.c"
    break;

  case 79:
#line 295 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2724 "src/parser.c"
    break;

  case 80:
#line 296 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2730 "src/parser.c"
    break;

  case 81:
#line 300 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2736 "src/parser.c"
    break;

  case 82:
#line 302 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2742 "src/parser.c"
    break;

  case 83:
#line 304 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2748 "src/parser.c"
    break;

  case 84:
#line 306 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2754 "src/parser.c"
    break;

  case 85:
#line 308 "src/gwion.y"
      { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2760 "src/parser.c"
    break;

  case 86:
#line 310 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2766 "src/parser.c"
    break;

  case 87:
#line 313 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt)); }
#line 2772 "src/parser.c"
    break;

  case 88:
#line 317 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2778 "src/parser.c"
    break;

  case 89:
#line 319 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2784 "src/parser.c"
    break;

  case 90:
#line 323 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2790 "src/parser.c"
    break;

  case 91:
#line 324 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2796 "src/parser.c"
    break;

  case 92:
#line 325 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2802 "src/parser.c"
    break;

  case 93:
#line 328 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2808 "src/parser.c"
    break;

  case 94:
#line 329 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2814 "src/parser.c"
    break;

  case 95:
#line 333 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2820 "src/parser.c"
    break;

  case 96:
#line 334 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2826 "src/parser.c"
    break;

  case 98:
#line 337 "src/gwion.y"
                                        { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2832 "src/parser.c"
    break;

  case 100:
#line 339 "src/gwion.y"
                                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2838 "src/parser.c"
    break;

  case 101:
#line 341 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2844 "src/parser.c"
    break;

  case 102:
#line 341 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2850 "src/parser.c"
    break;

  case 106:
#line 346 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2856 "src/parser.c"
    break;

  case 107:
#line 347 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2862 "src/parser.c"
    break;

  case 108:
#line 348 "src/gwion.y"
                                  { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2868 "src/parser.c"
    break;

  case 109:
#line 352 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2874 "src/parser.c"
    break;

  case 110:
#line 353 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2880 "src/parser.c"
    break;

  case 111:
#line 354 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2886 "src/parser.c"
    break;

  case 112:
#line 358 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2892 "src/parser.c"
    break;

  case 113:
#line 359 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2898 "src/parser.c"
    break;

  case 114:
#line 360 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2904 "src/parser.c"
    break;

  case 119:
#line 365 "src/gwion.y"
                                 { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), GET_LOC(&(yyloc)))), (yyvsp[0].var_decl_list)); }
#line 2911 "src/parser.c"
    break;

  case 120:
#line 367 "src/gwion.y"
                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2917 "src/parser.c"
    break;

  case 121:
#line 368 "src/gwion.y"
                                { (yyvsp[-1].type_decl)->flag |= ae_flag_ref | ae_flag_nonnull; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2923 "src/parser.c"
    break;

  case 123:
#line 369 "src/gwion.y"
                                    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2929 "src/parser.c"
    break;

  case 124:
#line 371 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2935 "src/parser.c"
    break;

  case 125:
#line 371 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2941 "src/parser.c"
    break;

  case 126:
#line 372 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2947 "src/parser.c"
    break;

  case 127:
#line 372 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2953 "src/parser.c"
    break;

  case 128:
#line 373 "src/gwion.y"
                         { (yyval.flag) = ae_flag_variadic; }
#line 2959 "src/parser.c"
    break;

  case 129:
#line 373 "src/gwion.y"
                                                            { (yyval.flag) = 0; }
#line 2965 "src/parser.c"
    break;

  case 130:
#line 375 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2971 "src/parser.c"
    break;

  case 131:
#line 375 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2977 "src/parser.c"
    break;

  case 132:
#line 377 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2983 "src/parser.c"
    break;

  case 133:
#line 378 "src/gwion.y"
           { (yyval.flag) = ae_flag_global; }
#line 2989 "src/parser.c"
    break;

  case 134:
#line 381 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2995 "src/parser.c"
    break;

  case 135:
#line 382 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3001 "src/parser.c"
    break;

  case 136:
#line 385 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3007 "src/parser.c"
    break;

  case 137:
#line 386 "src/gwion.y"
                 { (yyval.flag) = (yyvsp[0].flag); }
#line 3013 "src/parser.c"
    break;

  case 138:
#line 387 "src/gwion.y"
                             { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3019 "src/parser.c"
    break;

  case 139:
#line 390 "src/gwion.y"
           { (yyval.flag) = 0; }
#line 3025 "src/parser.c"
    break;

  case 140:
#line 390 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[0].flag); }
#line 3031 "src/parser.c"
    break;

  case 141:
#line 394 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 3037 "src/parser.c"
    break;

  case 148:
#line 401 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 3043 "src/parser.c"
    break;

  case 149:
#line 403 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 3049 "src/parser.c"
    break;

  case 150:
#line 405 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 3055 "src/parser.c"
    break;

  case 151:
#line 407 "src/gwion.y"
    {
 (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_typedef, GET_LOC(&(yyloc)));
    }
#line 3063 "src/parser.c"
    break;

  case 152:
#line 411 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 3069 "src/parser.c"
    break;

  case 153:
#line 411 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 3075 "src/parser.c"
    break;

  case 154:
#line 412 "src/gwion.y"
                   { (yyval.ival) = ae_flag_nonnull; }
#line 3081 "src/parser.c"
    break;

  case 156:
#line 415 "src/gwion.y"
             { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].id_list)); }
#line 3087 "src/parser.c"
    break;

  case 157:
#line 416 "src/gwion.y"
                { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp)); }
#line 3093 "src/parser.c"
    break;

  case 158:
#line 420 "src/gwion.y"
                 { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3099 "src/parser.c"
    break;

  case 159:
#line 421 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 3105 "src/parser.c"
    break;

  case 160:
#line 425 "src/gwion.y"
                          { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 3111 "src/parser.c"
    break;

  case 161:
#line 428 "src/gwion.y"
                      { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3117 "src/parser.c"
    break;

  case 162:
#line 429 "src/gwion.y"
                      { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 3123 "src/parser.c"
    break;

  case 163:
#line 430 "src/gwion.y"
                       { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), nonnull); }
#line 3129 "src/parser.c"
    break;

  case 164:
#line 432 "src/gwion.y"
                               { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 3135 "src/parser.c"
    break;

  case 165:
#line 433 "src/gwion.y"
                                  { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 3141 "src/parser.c"
    break;

  case 166:
#line 436 "src/gwion.y"
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
#line 3163 "src/parser.c"
    break;

  case 167:
#line 456 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3169 "src/parser.c"
    break;

  case 168:
#line 457 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3175 "src/parser.c"
    break;

  case 169:
#line 460 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3181 "src/parser.c"
    break;

  case 170:
#line 461 "src/gwion.y"
                { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3187 "src/parser.c"
    break;

  case 171:
#line 463 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3193 "src/parser.c"
    break;

  case 172:
#line 464 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3199 "src/parser.c"
    break;

  case 173:
#line 465 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3205 "src/parser.c"
    break;

  case 174:
#line 466 "src/gwion.y"
                      { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3211 "src/parser.c"
    break;

  case 175:
#line 467 "src/gwion.y"
                       { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3217 "src/parser.c"
    break;

  case 176:
#line 468 "src/gwion.y"
                     { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3223 "src/parser.c"
    break;

  case 191:
#line 476 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 3229 "src/parser.c"
    break;

  case 193:
#line 479 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3235 "src/parser.c"
    break;

  case 194:
#line 481 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 3241 "src/parser.c"
    break;

  case 196:
#line 483 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3247 "src/parser.c"
    break;

  case 198:
#line 484 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3253 "src/parser.c"
    break;

  case 200:
#line 485 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3259 "src/parser.c"
    break;

  case 202:
#line 486 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3265 "src/parser.c"
    break;

  case 204:
#line 487 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3271 "src/parser.c"
    break;

  case 206:
#line 488 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3277 "src/parser.c"
    break;

  case 208:
#line 489 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3283 "src/parser.c"
    break;

  case 210:
#line 490 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3289 "src/parser.c"
    break;

  case 212:
#line 491 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3295 "src/parser.c"
    break;

  case 214:
#line 492 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3301 "src/parser.c"
    break;

  case 216:
#line 493 "src/gwion.y"
                                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3307 "src/parser.c"
    break;

  case 217:
#line 495 "src/gwion.y"
                                      { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3313 "src/parser.c"
    break;

  case 221:
#line 499 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3319 "src/parser.c"
    break;

  case 230:
#line 505 "src/gwion.y"
                                          { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3325 "src/parser.c"
    break;

  case 231:
#line 506 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3331 "src/parser.c"
    break;

  case 232:
#line 507 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3337 "src/parser.c"
    break;

  case 233:
#line 508 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3343 "src/parser.c"
    break;

  case 234:
#line 511 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3349 "src/parser.c"
    break;

  case 235:
#line 512 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3355 "src/parser.c"
    break;

  case 236:
#line 513 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3361 "src/parser.c"
    break;

  case 237:
#line 513 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3367 "src/parser.c"
    break;

  case 238:
#line 516 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3373 "src/parser.c"
    break;

  case 239:
#line 517 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3379 "src/parser.c"
    break;

  case 240:
#line 520 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3385 "src/parser.c"
    break;

  case 241:
#line 520 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3391 "src/parser.c"
    break;

  case 244:
#line 524 "src/gwion.y"
                         { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3397 "src/parser.c"
    break;

  case 246:
#line 527 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3403 "src/parser.c"
    break;

  case 247:
#line 529 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range)); }
#line 3409 "src/parser.c"
    break;

  case 248:
#line 531 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3416 "src/parser.c"
    break;

  case 249:
#line 534 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3422 "src/parser.c"
    break;

  case 250:
#line 534 "src/gwion.y"
                                                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3428 "src/parser.c"
    break;

  case 251:
#line 537 "src/gwion.y"
                       { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3434 "src/parser.c"
    break;

  case 252:
#line 538 "src/gwion.y"
                       { (yyval.exp) = (yyvsp[-1].exp); }
#line 3440 "src/parser.c"
    break;

  case 253:
#line 541 "src/gwion.y"
{
  Exp next = (yyvsp[-1].exp);
  while(next->next) {
    if(!next->next)
      break;
  next = next->next; }
  next->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-1].exp);
}
#line 3453 "src/parser.c"
    break;

  case 254:
#line 549 "src/gwion.y"
                 { (yyval.exp) = (yyvsp[0].exp); }
#line 3459 "src/parser.c"
    break;

  case 255:
#line 552 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3465 "src/parser.c"
    break;

  case 256:
#line 553 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3471 "src/parser.c"
    break;

  case 257:
#line 554 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3477 "src/parser.c"
    break;

  case 258:
#line 555 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3483 "src/parser.c"
    break;

  case 259:
#line 556 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3489 "src/parser.c"
    break;

  case 260:
#line 557 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3495 "src/parser.c"
    break;

  case 261:
#line 558 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3501 "src/parser.c"
    break;

  case 262:
#line 559 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3507 "src/parser.c"
    break;

  case 263:
#line 560 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3513 "src/parser.c"
    break;

  case 264:
#line 561 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3519 "src/parser.c"
    break;

  case 265:
#line 562 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3525 "src/parser.c"
    break;

  case 266:
#line 563 "src/gwion.y"
                          { (yyval.exp) = new_exp_interp(mpool(arg),     (yyvsp[0].exp)); }
#line 3531 "src/parser.c"
    break;


#line 3535 "src/parser.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
                  yystos[+*yyssp], yyvsp, yylsp, arg);
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
#line 565 "src/gwion.y"

