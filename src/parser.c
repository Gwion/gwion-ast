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
    STATIC = 284,
    GLOBAL = 285,
    PRIVATE = 286,
    PROTECT = 287,
    EXTENDS = 288,
    DOT = 289,
    OPERATOR = 290,
    TYPEDEF = 291,
    NOELSE = 292,
    UNION = 293,
    CONSTT = 294,
    AUTO = 295,
    PASTE = 296,
    ELLIPSE = 297,
    VARLOOP = 298,
    RARROW = 299,
    BACKSLASH = 300,
    BACKTICK = 301,
    OPID = 302,
    REF = 303,
    NONNULL = 304,
    NUM = 305,
    FLOATT = 306,
    ID = 307,
    STRING_LIT = 308,
    CHAR_LIT = 309,
    INTERP_LIT = 310,
    INTERP_EXP = 311,
    PP_COMMENT = 312,
    PP_INCLUDE = 313,
    PP_DEFINE = 314,
    PP_PRAGMA = 315,
    PP_UNDEF = 316,
    PP_IFDEF = 317,
    PP_IFNDEF = 318,
    PP_ELSE = 319,
    PP_ENDIF = 320,
    PP_NL = 321,
    PLUS = 323,
    PLUSPLUS = 324,
    MINUS = 325,
    MINUSMINUS = 326,
    TIMES = 327,
    DIVIDE = 328,
    PERCENT = 329,
    DOLLAR = 330,
    QUESTION = 331,
    COLON = 332,
    COLONCOLON = 333,
    QUESTIONCOLON = 334,
    NEW = 335,
    SPORK = 336,
    FORK = 337,
    TYPEOF = 338,
    L_HACK = 339,
    R_HACK = 340,
    AND = 341,
    EQ = 342,
    GE = 343,
    GT = 344,
    LE = 345,
    LT = 346,
    NEQ = 347,
    SHIFT_LEFT = 348,
    SHIFT_RIGHT = 349,
    S_AND = 350,
    S_OR = 351,
    S_XOR = 352,
    OR = 353,
    LTMPL = 354,
    RTMPL = 355,
    TILDA = 356,
    EXCLAMATION = 357,
    DYNOP = 358,
    UMINUS = 359,
    UTIMES = 360
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
#define STATIC 284
#define GLOBAL 285
#define PRIVATE 286
#define PROTECT 287
#define EXTENDS 288
#define DOT 289
#define OPERATOR 290
#define TYPEDEF 291
#define NOELSE 292
#define UNION 293
#define CONSTT 294
#define AUTO 295
#define PASTE 296
#define ELLIPSE 297
#define VARLOOP 298
#define RARROW 299
#define BACKSLASH 300
#define BACKTICK 301
#define OPID 302
#define REF 303
#define NONNULL 304
#define NUM 305
#define FLOATT 306
#define ID 307
#define STRING_LIT 308
#define CHAR_LIT 309
#define INTERP_LIT 310
#define INTERP_EXP 311
#define PP_COMMENT 312
#define PP_INCLUDE 313
#define PP_DEFINE 314
#define PP_PRAGMA 315
#define PP_UNDEF 316
#define PP_IFDEF 317
#define PP_IFNDEF 318
#define PP_ELSE 319
#define PP_ENDIF 320
#define PP_NL 321
#define PLUS 323
#define PLUSPLUS 324
#define MINUS 325
#define MINUSMINUS 326
#define TIMES 327
#define DIVIDE 328
#define PERCENT 329
#define DOLLAR 330
#define QUESTION 331
#define COLON 332
#define COLONCOLON 333
#define QUESTIONCOLON 334
#define NEW 335
#define SPORK 336
#define FORK 337
#define TYPEOF 338
#define L_HACK 339
#define R_HACK 340
#define AND 341
#define EQ 342
#define GE 343
#define GT 344
#define LE 345
#define LT 346
#define NEQ 347
#define SHIFT_LEFT 348
#define SHIFT_RIGHT 349
#define S_AND 350
#define S_OR 351
#define S_XOR 352
#define OR 353
#define LTMPL 354
#define RTMPL 355
#define TILDA 356
#define EXCLAMATION 357
#define DYNOP 358
#define UMINUS 359
#define UTIMES 360

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

#line 383 "src/parser.c"

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
#define YYLAST   1753

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  264
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  436

#define YYUNDEFTOK  2
#define YYMAXUTOK   361


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
     105,   106
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   141,   144,   145,   149,   150,   151,   152,
     153,   154,   155,   159,   165,   165,   167,   167,   170,   171,
     174,   174,   175,   175,   177,   177,   179,   181,   184,   191,
     198,   198,   200,   204,   208,   209,   209,   210,   211,   211,
     218,   219,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   249,   250,   257,   257,   260,   263,   265,   267,
     267,   270,   278,   279,   281,   281,   283,   291,   292,   295,
     297,   299,   301,   303,   305,   309,   312,   314,   319,   320,
     321,   324,   325,   329,   330,   333,   333,   335,   335,   337,
     337,   339,   339,   339,   342,   343,   344,   348,   349,   350,
     354,   355,   356,   359,   359,   360,   360,   361,   363,   364,
     365,   365,   367,   367,   368,   368,   369,   369,   371,   371,
     373,   374,   377,   378,   381,   382,   383,   386,   386,   389,
     392,   392,   392,   392,   392,   395,   396,   398,   400,   402,
     407,   407,   408,   408,   411,   412,   416,   417,   421,   424,
     425,   426,   428,   429,   432,   452,   453,   456,   457,   459,
     460,   461,   462,   463,   464,   466,   466,   467,   467,   467,
     467,   468,   468,   469,   469,   470,   470,   470,   472,   472,
     473,   474,   476,   479,   479,   480,   480,   481,   481,   482,
     482,   483,   483,   484,   484,   485,   485,   486,   486,   487,
     487,   488,   488,   489,   489,   491,   492,   492,   494,   494,
     497,   497,   497,   498,   498,   498,   498,   501,   501,   502,
     503,   504,   507,   508,   509,   509,   512,   513,   516,   516,
     518,   518,   520,   521,   522,   524,   526,   529,   530,   533,
     534,   536,   545,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559
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
  "\"return\"", "\"break\"", "\"continue\"", "\"class\"", "\"static\"",
  "\"global\"", "\"private\"", "\"protect\"", "\"extends\"", "\".\"",
  "\"operator\"", "\"typedef\"", "NOELSE", "\"union\"", "\"const\"",
  "\"auto\"", "\"##\"", "\"...\"", "\"varloop\"", "\"->\"", "\"\\\\\"",
  "\"`\"", "OPID", "\"ref\"", "\"nonnull\"", "\"<integer>\"", "FLOATT",
  "\"<identifier>\"", "\"<litteral string>\"", "\"<litteral char>\"",
  "\"<interp string>\"", "INTERP_EXP", "\"<comment>\"", "\"#include\"",
  "\"#define\"", "\"#pragma\"", "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"",
  "\"#else\"", "\"#if\"", "\"\\n\"", "\"@<operator id>\"", "\"+\"",
  "\"++\"", "\"-\"", "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"",
  "\":\"", "\"::\"", "\"?:\"", "\"new\"", "\"spork\"", "\"fork\"",
  "\"typeof\"", "\"<<<\"", "\">>>\"", "\"&&\"", "\"==\"", "\">=\"",
  "\">\"", "\"<=\"", "\"<\"", "\"!=\"", "\"<<\"", "\">>\"", "\"&\"",
  "\"|\"", "\"^\"", "\"||\"", "\"<~\"", "\"~>\"", "\"~\"", "\"!\"",
  "\"<dynamic_operator>\"", "UMINUS", "UTIMES", "\"=\"", "$accept", "prg",
  "ast", "section", "class_def", "class_ext", "class_body", "class_body2",
  "id_list", "dot_decl", "stmt_list", "fptr_base", "fdef_base", "fptr_def",
  "type_def", "type_decl_array", "type_decl_exp", "type_decl_empty", "arg",
  "arg_list", "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt",
  "id", "opt_id", "enum_def", "label_stmt", "goto_stmt", "when_exp",
  "match_case_stmt", "match_list", "where_stmt", "match_stmt", "flow",
  "loop_stmt", "varloop_stmt", "selection_stmt", "breaks", "jump_stmt",
  "exp_stmt", "exp", "binary_exp", "call_template", "op", "array_exp",
  "array_empty", "range", "array", "decl_exp2", "decl_exp", "union_exp",
  "decl_exp3", "func_args", "fptr_args", "arg_type", "decl_template",
  "storage_flag", "access_flag", "flag", "opt_flag", "func_def_base",
  "op_op", "func_def", "ref", "decl_flag", "type_decl000", "type_decl00",
  "type_decl0", "type_decl", "decl_list", "union_def", "var_decl_list",
  "var_decl", "arg_decl", "fptr_arg_decl", "eq_op", "rel_op", "shift_op",
  "add_op", "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
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
     355,   356,   357,   358,   359,   360,   361
};
# endif

#define YYPACT_NINF (-333)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-156)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     640,  -333,  1087,  1029,   740,   124,    53,  -333,   831,  -333,
      84,    93,    58,  1551,   124,  1551,  -333,  -333,   -53,  -333,
    -333,  -333,  -333,   535,   124,   124,    -9,    16,  1551,    58,
    1145,    -9,  -333,  -333,    64,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,     1,   105,   105,   127,  1551,     1,  -333,  -333,   137,
    -333,   640,  -333,  -333,  -333,  -333,  -333,  -333,  -333,   831,
      75,  -333,  -333,  -333,  -333,   133,  -333,  -333,  -333,   140,
    -333,  -333,   144,    15,  -333,   141,  -333,  -333,  -333,  -333,
    -333,    50,  -333,     1,  -333,  -333,  -333,    16,  -333,    58,
    -333,  -333,   -31,    73,    65,    67,    82,   -30,    79,    41,
      24,    99,   100,    39,  -333,   104,   493,  -333,   105,  -333,
    -333,    37,  -333,  -333,    97,   156,  1651,  -333,  1551,    20,
    -333,   170,  -333,     1,  1551,    87,  1551,   913,   178,   173,
     175,   182,    58,   124,     1,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,
       1,  -333,  -333,  -333,  -333,     1,     1,   -53,   143,  -333,
    -333,  -333,  -333,  -333,    58,    25,    58,  -333,  -333,   132,
    -333,  1145,  -333,    58,  -333,  -333,   184,  -333,  -333,  1551,
     109,  -333,   185,    92,  -333,  -333,  -333,    58,  -333,  1551,
    -333,  -333,  1551,  1551,  1203,  -333,  -333,  -333,  -333,   184,
    -333,   189,  1551,  1609,  1609,  1609,  1609,  1609,  1609,  -333,
    -333,  1609,  1609,  1609,  1609,  1609,  1651,     1,     1,  -333,
    -333,  -333,  1261,    58,     1,   190,  -333,  -333,  -333,  -333,
     188,   184,  1319,  -333,    35,    58,   192,  1551,   193,    16,
     971,  -333,   179,    58,  -333,   101,   198,    58,   199,   200,
     201,    35,    58,    58,  -333,  -333,  -333,  -333,  -333,  -333,
    1377,  -333,   197,  -333,     1,    -3,  -333,   202,  -333,  -333,
    -333,   203,  -333,    58,  -333,   130,  -333,  -333,    73,    65,
      67,    82,   -30,    79,    41,    24,    99,   100,   104,  -333,
     204,  -333,   110,  1435,  -333,  -333,  -333,   141,  -333,   211,
    -333,   206,   105,   -53,   831,   217,   831,    58,  1493,  1551,
     179,   219,   220,  -333,    58,   205,     1,   225,     1,     1,
    -333,   -53,  -333,   223,  -333,  -333,  -333,   831,  -333,  1609,
       1,  -333,  -333,   229,  -333,  -333,  -333,   199,   224,  -333,
    -333,   159,   831,   233,   221,  -333,   218,    58,  -333,     1,
     235,   238,  -333,    58,   105,   242,   241,   108,    -9,  -333,
    -333,   243,  -333,  -333,   831,  1551,  -333,   831,  1551,   171,
     831,  -333,   247,  -333,   640,     1,   184,  -333,  -333,     1,
     105,  -333,     1,  -333,   252,    58,   246,   105,  -333,    17,
    -333,  -333,   831,  -333,  -333,   640,   248,  -333,  -333,  -333,
     141,   254,  -333,   257,  -333,    58,    -9,  -333,    58,  -333,
     831,  -333,  -333,  -333,   105,     1,   184,  -333,  -333,   261,
    -333,  -333,  -333,  -333,   141,  -333
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    94,     0,     0,     0,   137,     0,    77,     0,    78,
       0,     0,     0,     0,   137,    88,    89,    90,   129,   130,
     131,   132,   133,     0,   137,   137,     0,   150,     0,   235,
       0,     0,   254,   255,    62,   256,   257,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,   240,   220,   241,
     221,     0,   224,   225,     0,     0,     0,   226,   223,     0,
       2,     4,     8,   154,     6,    11,    12,    55,    60,    24,
     253,     9,    56,    57,    58,     0,    53,    61,    54,     0,
      59,    52,     0,    95,   113,   114,   259,   258,    97,   120,
     116,   135,   134,     0,   145,     7,   156,   150,   159,     0,
      10,   115,   190,   193,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   217,   213,   216,     0,   218,     0,   222,
     248,   227,   243,   263,   253,     0,     0,   107,     0,     0,
      40,     0,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   137,     0,   183,   184,   185,   186,   187,
     101,   180,   178,   179,   177,   102,   181,   182,   103,   140,
       0,   142,   141,   144,   143,     0,     0,   129,    22,   160,
     155,   151,   152,   153,     0,     0,   232,   234,   249,     0,
     252,   264,   161,     0,    32,   229,    30,   230,   231,     0,
       0,    33,   236,     0,     1,     5,    25,     0,    67,     0,
      92,    93,     0,     0,     0,   109,   136,   121,   158,   167,
     118,   165,   189,     0,     0,     0,     0,     0,     0,   175,
     176,     0,     0,     0,     0,     0,     0,     0,     0,   253,
     228,   262,     0,     0,     0,     0,   244,   245,   247,   261,
       0,   104,     0,    41,     0,     0,     0,     0,     0,   150,
       0,    68,     0,     0,    91,     0,    20,     0,     0,     0,
       0,     0,     0,    65,   117,    85,   233,   250,   251,    63,
       0,    31,     0,   260,     0,     0,    23,     0,    96,    98,
     108,     0,   168,     0,   188,     0,   192,   217,   194,   196,
     198,   200,   202,   204,   206,   208,   210,   212,   214,   219,
       0,   242,     0,     0,   246,   112,   105,   106,   111,     0,
     127,     0,     0,   129,     0,     0,     0,     0,     0,     0,
      72,     0,     0,   128,     0,    15,   123,     0,     0,     0,
      28,   129,    64,     0,   215,   237,   157,     0,   166,     0,
       0,    99,   239,     0,   110,   126,   139,     0,    86,    80,
      84,     0,     0,     0,    70,    73,    75,    65,    21,     0,
       0,    35,   122,     0,     0,     0,     0,     0,     0,    79,
     191,     0,   238,    27,     0,     0,    81,     0,     0,     0,
       0,    76,     0,    14,    17,     0,   169,    34,   149,     0,
       0,    29,   125,    26,     0,     0,     0,     0,    87,     0,
      82,    69,     0,    74,    66,    18,     0,    16,    36,   171,
     170,     0,   147,    38,   124,    65,   162,   119,    65,   148,
       0,    71,    19,    13,     0,     0,   172,    37,   163,     0,
      83,   146,    39,   174,   173,   164
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -333,  -333,   207,  -329,  -333,  -333,  -333,  -140,  -229,    72,
      -1,  -333,  -333,  -333,  -333,   -36,   -89,  -106,  -293,  -114,
    -333,  -149,   -46,  -333,    -7,     0,  -332,  -333,  -333,  -333,
    -333,  -333,   -43,  -333,  -333,   145,  -333,  -333,  -333,  -333,
    -333,  -119,   283,   -19,  -333,   255,   -55,  -236,   160,  -134,
      85,   194,  -333,  -333,   -65,  -333,    28,  -156,  -333,   208,
       8,    -4,  -333,  -333,  -333,    42,   195,    18,  -331,    47,
     107,  -126,  -333,  -158,  -333,  -101,  -333,  -333,   272,   274,
     277,   278,  -333,  -199,  -333,    88,    89,    90,    86,    94,
      98,    83,   102,    91,    95,   228,  -333,    96,     2,   -56,
     134,  -333,  -195,  -333,    -6,  -333,  -333,   146,  -333,  -333
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,    60,    61,    62,   360,   406,   407,   255,    63,
      64,   261,   244,    65,    66,   191,   185,   192,   361,   362,
     413,   414,    67,    68,    69,   124,   333,    71,    72,    73,
     379,   320,   321,   381,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   235,   203,    84,    85,    86,    87,
      88,    89,   394,    90,   327,   393,   312,   143,    91,    92,
      93,   133,    94,   160,    95,   173,   174,    96,    97,    98,
      99,   396,   100,   210,   211,   387,   427,   221,   222,   223,
     224,   225,   285,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   126,   117,
     177,   118,   193,   304,   119,   120,   121,   180,   181,   122
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,   135,   116,   131,    70,   307,   187,   188,    70,   175,
     140,   263,   138,   132,   286,   184,   264,   165,   250,   202,
     166,   167,   132,   420,   322,   382,   168,   245,   241,   176,
     205,   168,   132,   132,     4,   365,   366,   395,   258,   302,
      26,   310,  -100,    34,   232,   212,   142,   371,   213,    34,
      31,   168,   271,    34,   259,   405,   168,   219,   134,   260,
     230,    70,   220,   116,   171,   172,   236,   214,   196,    70,
     230,   233,   231,   169,    54,   282,   405,   311,   182,   335,
      54,    21,    22,   426,    54,   395,   429,  -155,  -155,   136,
      56,  -155,   145,   168,   146,   358,   411,   242,   137,   209,
      56,     7,   150,     9,   150,   183,    47,   155,    49,   155,
      34,   391,   150,   392,     4,   238,   229,   155,   158,   197,
     158,   299,   300,   -22,   -22,   338,   229,   -22,   158,   265,
     262,   318,   189,   168,   156,   157,   234,   194,   199,   257,
     370,   197,   256,   200,   168,   -22,   -22,   201,   204,   -22,
     410,   132,   198,    19,    20,    21,    22,   347,   186,   215,
     168,   216,   239,   186,   217,   168,   168,   151,   152,   153,
     154,   147,   148,   149,   209,   367,   176,   218,   226,   227,
     243,   251,   252,   269,   253,   254,   306,   197,   267,   274,
     434,   270,   275,   283,   273,   303,   305,   168,   314,   316,
     319,   323,   324,   334,   326,   328,   329,   339,   337,   340,
     341,   241,   345,   229,   229,   229,   229,   229,   229,   344,
     349,   229,   229,   229,   229,   229,   229,   168,   168,   356,
     357,   364,   368,   301,   168,   372,   375,   374,   359,   377,
     186,   380,   385,   378,   384,   313,   389,   390,   402,   397,
     404,   186,   205,   256,   170,   416,   418,   325,   423,   170,
     424,   425,   331,   332,   435,   422,   346,   186,   195,   276,
     383,   408,   186,   186,   168,   168,   432,   355,   159,   170,
     247,   237,   373,   209,   170,   125,   129,   207,   279,   330,
     428,   317,   208,   336,   417,   161,   139,   162,   141,   206,
     163,   164,   288,   291,   289,   294,   290,   348,     0,   350,
     266,     0,   292,   179,    70,   296,    70,   351,   388,   293,
     297,   170,   298,   184,   256,   295,   168,   268,   168,   168,
     369,   409,     0,     0,   186,   186,     0,    70,   190,   229,
     168,   186,     0,     0,   412,   376,     0,     0,     0,     0,
       0,   419,    70,     0,     0,   205,   399,   332,     0,   168,
       0,   170,     0,   386,     0,     0,     0,   398,   168,     0,
     400,   433,   170,   403,    70,     0,     0,    70,   431,   205,
      70,   186,     0,     0,    70,   168,   116,     0,   170,   168,
       0,     0,   168,   170,   170,   386,     0,     0,     0,     0,
       0,   421,    70,     0,     0,    70,     0,   116,     0,     0,
       0,   240,     0,   430,     0,   332,   168,   246,   332,   248,
      70,     0,     0,     0,     0,   168,     0,     0,     0,     0,
       0,     0,     0,   363,     0,   363,   363,     0,     0,     0,
       0,   287,   287,   287,   287,   287,   287,   363,     0,   287,
     287,   287,   287,   287,     0,   170,   170,     0,     0,     0,
       0,     0,   170,     0,   179,     0,   186,     0,     0,     0,
       0,     0,   272,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   277,     0,     0,   278,     0,   281,     0,     0,
       0,     0,   363,     0,     0,   284,   363,     0,     2,   415,
       3,     0,   170,   170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   309,     0,     0,   228,     0,
     315,     0,   415,     0,     0,     0,     0,     0,    29,    30,
       0,     0,     0,    32,    33,    34,    35,    36,     0,     0,
       0,     0,     0,   281,   170,     0,   170,   170,     0,     0,
       0,     0,    47,    48,    49,    50,     0,   287,   170,     0,
       0,     0,     0,    51,    52,    53,     0,    55,     0,     0,
       0,     0,   144,     0,     0,     0,   343,   170,     0,     0,
       0,     0,     0,     0,    57,    58,   170,     0,     0,     0,
       0,   353,   354,   145,    47,   146,    49,   147,   148,   149,
       0,     0,     0,   170,     0,     0,     0,   170,     0,     0,
     170,     0,   150,   151,   152,   153,   154,   155,   156,   157,
       0,     0,     0,     0,     0,     0,     0,     0,   158,     0,
       0,     0,     0,     1,   170,     2,     0,     3,     0,     4,
       0,     5,     6,   170,     7,     8,     9,    10,    11,    12,
      13,   401,     0,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,    23,    24,     0,    25,    26,
      27,     0,     0,    28,     0,    29,    30,     0,     0,    31,
      32,    33,    34,    35,    36,     0,     0,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,     0,     0,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,    57,    58,     1,     0,     2,     0,     3,     0,     4,
     130,     0,     6,     0,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,    15,    16,    17,     0,    19,
      20,    21,    22,     0,     0,     0,     0,     0,     0,    26,
      27,     0,     0,    28,     0,    29,    30,     0,     0,    31,
      32,    33,    34,    35,    36,     0,     0,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,     0,     0,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     2,     0,     3,    56,
       4,    57,    58,     6,     0,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,    15,    16,    17,     0,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
      26,    27,     0,     0,    28,     0,    29,    30,     0,     0,
      31,    32,    33,    34,    35,    36,     0,     0,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,     0,     0,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,     1,     0,     2,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,     0,    57,    58,     0,     0,     0,     0,     0,     0,
       0,     0,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,    26,   249,     0,     0,     0,     0,    29,    30,
       0,     0,    31,    32,    33,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     1,     0,     2,     0,     3,     0,
       0,     0,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,     0,     0,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
      26,    27,    56,     0,    57,    58,    29,    30,     0,     0,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,   127,     0,     0,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,     0,     0,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,    26,    27,
      56,     0,    57,    58,    29,    30,     0,     0,    31,    32,
      33,    34,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     2,   123,     3,     0,     0,     0,    47,    48,
      49,    50,     0,     0,     0,     0,   128,     0,     0,    51,
      52,    53,    54,    55,     0,     0,    19,    20,    21,    22,
       0,     0,     0,     0,     0,     0,    26,    27,    56,     0,
      57,    58,    29,    30,     0,     0,    31,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     0,     0,     0,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,     0,     0,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,    26,    27,    56,     0,    57,    58,
      29,    30,     0,     0,    31,    32,    33,    34,    35,    36,
     178,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,   280,     0,     0,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,    55,
       0,     0,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,    26,    27,    56,     0,    57,    58,    29,    30,
       0,     0,    31,    32,    33,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,     0,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,     0,     0,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
      26,    27,    56,     0,    57,    58,    29,    30,     0,     0,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,   308,     0,     0,
      47,    48,    49,    50,     0,     0,     0,     0,   128,     0,
       0,    51,    52,    53,    54,    55,     0,     0,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,    26,    27,
      56,     0,    57,    58,    29,    30,     0,     0,    31,    32,
      33,    34,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,   127,     0,     0,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,    51,
      52,    53,    54,    55,     0,     0,    19,    20,    21,    22,
       0,     0,     0,     0,     0,     0,    26,    27,    56,     0,
      57,    58,    29,    30,     0,     0,    31,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       2,   342,     3,     0,     0,     0,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,     0,     0,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,    26,    27,    56,     0,    57,    58,
      29,    30,     0,     0,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     2,   352,
       3,     0,     0,     0,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,    55,
       0,     0,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,    26,    27,    56,     0,    57,    58,    29,    30,
       0,     0,    31,    32,    33,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,     0,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,     0,     0,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
      26,    27,    56,     0,    57,    58,    29,    30,     0,     0,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,     0,     0,     0,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,     0,    57,    58,    29,    30,     2,     0,     3,    32,
      33,    34,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,    51,
      52,    53,    54,    55,     0,     0,    29,    30,     0,     0,
       0,    32,    33,    34,    35,    36,     0,     0,     0,     0,
      57,    58,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    58
};

static const yytype_int16 yycheck[] =
{
       0,     8,     0,     4,     4,   241,    52,    53,     8,    28,
      14,   167,    12,     5,   213,    51,   174,    23,   137,     4,
      24,    25,    14,     6,   253,   357,    26,   133,     8,    29,
      85,    31,    24,    25,     9,   328,   329,   368,   144,   234,
      39,     6,     5,    52,     7,    76,    99,   340,    79,    52,
      49,    51,   186,    52,   160,   384,    56,    87,     5,   165,
     116,    61,    92,    61,    48,    49,   121,    98,    69,    69,
     126,    34,   118,    26,    83,   209,   405,    42,    31,   274,
      83,    31,    32,   415,    83,   416,   418,    48,    49,     5,
      99,    52,    68,    93,    70,   324,   389,    77,     5,    99,
      99,    14,    87,    16,    87,    41,    69,    92,    71,    92,
      52,     3,    87,     5,     9,   121,   116,    92,   103,    44,
     103,   227,   228,    48,    49,   283,   126,    52,   103,   175,
     166,   250,     5,   133,    93,    94,    99,     0,     5,   143,
     339,    44,   142,     3,   144,    48,    49,     3,     7,    52,
     386,   143,    77,    29,    30,    31,    32,   313,    51,    86,
     160,    96,     6,    56,    97,   165,   166,    88,    89,    90,
      91,    72,    73,    74,   174,   331,   176,    95,    78,    75,
      10,     3,     9,   183,     9,     3,   241,    44,    56,     4,
     426,     7,   100,     4,    85,     5,     8,   197,     6,     6,
      21,   100,     4,     6,     5,     5,     5,    77,     6,     5,
     100,     8,     6,   213,   214,   215,   216,   217,   218,     8,
       3,   221,   222,   223,   224,   225,   226,   227,   228,    10,
      10,     6,     9,   233,   234,     6,    77,    13,    33,     6,
     133,    23,     4,    22,     9,   245,     4,     6,    77,     6,
       3,   144,   307,   253,    26,     3,    10,   257,    10,    31,
       6,     4,   262,   263,     3,   405,   312,   160,    61,   197,
     359,   385,   165,   166,   274,   275,   425,   320,    23,    51,
     135,   121,   347,   283,    56,     2,     3,    93,   203,   261,
     416,   249,    97,   275,   395,    23,    13,    23,    15,    91,
      23,    23,   214,   217,   215,   222,   216,   314,    -1,   316,
     176,    -1,   218,    30,   314,   224,   316,   317,   364,   221,
     225,    93,   226,   359,   324,   223,   326,   181,   328,   329,
     337,   386,    -1,    -1,   227,   228,    -1,   337,    55,   339,
     340,   234,    -1,    -1,   390,   352,    -1,    -1,    -1,    -1,
      -1,   397,   352,    -1,    -1,   410,   375,   357,    -1,   359,
      -1,   133,    -1,   363,    -1,    -1,    -1,   374,   368,    -1,
     377,   426,   144,   380,   374,    -1,    -1,   377,   424,   434,
     380,   274,    -1,    -1,   384,   385,   384,    -1,   160,   389,
      -1,    -1,   392,   165,   166,   395,    -1,    -1,    -1,    -1,
      -1,   402,   402,    -1,    -1,   405,    -1,   405,    -1,    -1,
      -1,   128,    -1,   420,    -1,   415,   416,   134,   418,   136,
     420,    -1,    -1,    -1,    -1,   425,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   326,    -1,   328,   329,    -1,    -1,    -1,
      -1,   213,   214,   215,   216,   217,   218,   340,    -1,   221,
     222,   223,   224,   225,    -1,   227,   228,    -1,    -1,    -1,
      -1,    -1,   234,    -1,   181,    -1,   359,    -1,    -1,    -1,
      -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   199,    -1,    -1,   202,    -1,   204,    -1,    -1,
      -1,    -1,   385,    -1,    -1,   212,   389,    -1,     5,   392,
       7,    -1,   274,   275,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    35,    -1,
     247,    -1,   425,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,   270,   326,    -1,   328,   329,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    -1,   339,   340,    -1,
      -1,    -1,    -1,    80,    81,    82,    -1,    84,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,   303,   359,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,   368,    -1,    -1,    -1,
      -1,   318,   319,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,   385,    -1,    -1,    -1,   389,    -1,    -1,
     392,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,     3,   416,     5,    -1,     7,    -1,     9,
      -1,    11,    12,   425,    14,    15,    16,    17,    18,    19,
      20,   378,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    -1,    38,    39,
      40,    -1,    -1,    43,    -1,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,   101,   102,     3,    -1,     5,    -1,     7,    -1,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    -1,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    43,    -1,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,    99,
       9,   101,   102,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    -1,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    43,    -1,    45,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,     3,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,
      -1,    -1,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    99,    -1,   101,   102,    45,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    -1,    -1,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      99,    -1,   101,   102,    45,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    -1,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    82,    83,    84,    -1,    -1,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    99,    -1,
     101,   102,    45,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    -1,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    -1,    -1,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    99,    -1,   101,   102,
      45,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      -1,    -1,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    99,    -1,   101,   102,    45,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    99,    -1,   101,   102,    45,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    82,    83,    84,    -1,    -1,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      99,    -1,   101,   102,    45,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,     8,    -1,    -1,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    -1,    -1,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    99,    -1,
     101,   102,    45,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    -1,    -1,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    99,    -1,   101,   102,
      45,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      -1,    -1,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    99,    -1,   101,   102,    45,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    -1,    -1,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    99,    -1,   101,   102,    45,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,   101,   102,    45,    46,     5,    -1,     7,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
     101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    35,    36,    38,    39,    40,    43,    45,
      46,    49,    50,    51,    52,    53,    54,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    69,    70,    71,
      72,    80,    81,    82,    83,    84,    99,   101,   102,   108,
     109,   110,   111,   116,   117,   120,   121,   129,   130,   131,
     132,   134,   135,   136,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   153,   154,   155,   156,   157,   158,
     160,   165,   166,   167,   169,   171,   174,   175,   176,   177,
     179,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   208,   211,
     212,   213,   216,     6,   132,   149,   205,     8,    77,   149,
      10,   117,   167,   168,     5,   131,     5,     5,   132,   149,
     168,   149,    99,   164,    47,    68,    70,    72,    73,    74,
      87,    88,    89,    90,    91,    92,    93,    94,   103,   152,
     170,   185,   186,   187,   188,   211,   168,   168,   132,   176,
     202,    48,    49,   172,   173,   150,   132,   207,    55,   149,
     214,   215,   176,    41,   122,   123,   177,   129,   129,     5,
     149,   122,   124,   209,     0,   109,   117,    44,    77,     5,
       3,     3,     4,   152,     7,   153,   166,   158,   173,   132,
     180,   181,    76,    79,    98,    86,    96,    97,    95,    87,
      92,   184,   185,   186,   187,   188,    78,    75,    35,   132,
     206,   129,     7,    34,    99,   151,   153,   155,   211,     6,
     149,     8,    77,    10,   119,   124,   149,   142,   149,    40,
     148,     3,     9,     9,     3,   115,   132,   168,   124,   124,
     124,   118,   122,   164,   180,   129,   207,    56,   214,   132,
       7,   156,   149,    85,     4,   100,   116,   149,   149,   157,
       8,   149,   156,     4,   149,   189,   190,   202,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   204,   124,
     124,   132,   209,     5,   210,     8,   153,   154,     8,   149,
       6,    42,   163,   132,     6,   149,     6,   172,   148,    21,
     138,   139,   115,   100,     4,   132,     5,   161,     5,     5,
     163,   132,   132,   133,     6,   209,   174,     6,   180,    77,
       5,   100,     6,   149,     8,     6,   129,   164,   131,     3,
     131,   132,     6,   149,   149,   139,    10,    10,   115,    33,
     112,   125,   126,   177,     6,   125,   125,   164,     9,   131,
     190,   125,     6,   161,    13,    77,   131,     6,    22,   137,
      23,   140,   133,   123,     9,     4,   132,   182,   129,     4,
       6,     3,     5,   162,   159,   175,   178,     6,   131,   150,
     131,   149,    77,   131,     3,   110,   113,   114,   126,   153,
     154,   125,   129,   127,   128,   177,     3,   182,    10,   129,
       6,   117,   114,    10,     6,     4,   133,   183,   178,   133,
     131,   129,   128,   153,   154,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   111,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   118,   119,   120,   121,
     122,   122,   123,   124,   125,   126,   126,   127,   128,   128,
     129,   129,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   132,   132,   133,   133,   134,   135,   136,   137,
     137,   138,   139,   139,   140,   140,   141,   142,   142,   143,
     143,   143,   143,   143,   143,   144,   145,   145,   146,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   150,   151,
     151,   152,   152,   152,   153,   153,   153,   154,   154,   154,
     155,   155,   155,   156,   156,   157,   157,   157,   158,   159,
     160,   160,   161,   161,   162,   162,   163,   163,   164,   164,
     165,   165,   166,   166,   167,   167,   167,   168,   168,   169,
     170,   170,   170,   170,   170,   171,   171,   171,   171,   171,
     172,   172,   173,   173,   174,   174,   175,   175,   176,   177,
     177,   177,   178,   178,   179,   180,   180,   181,   181,   182,
     182,   182,   183,   183,   183,   184,   184,   185,   185,   185,
     185,   186,   186,   187,   187,   188,   188,   188,   189,   189,
     190,   190,   190,   191,   191,   192,   192,   193,   193,   194,
     194,   195,   195,   196,   196,   197,   197,   198,   198,   199,
     199,   200,   200,   201,   201,   202,   203,   203,   204,   204,
     205,   205,   205,   205,   205,   205,   205,   206,   206,   206,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   213,   213,   213,   213,   213,   213,   214,
     214,   215,   215,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     8,     2,     0,     1,     0,     1,     2,
       1,     3,     1,     3,     1,     2,     4,     4,     4,     6,
       1,     2,     1,     1,     2,     1,     3,     2,     1,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     0,     7,     2,     3,     2,
       0,     5,     1,     2,     2,     0,     6,     1,     1,     5,
       5,     6,     7,     9,     5,     3,     5,     7,     1,     1,
       1,     3,     2,     2,     1,     1,     3,     1,     3,     3,
       0,     1,     1,     1,     3,     4,     4,     2,     3,     2,
       5,     4,     4,     1,     1,     1,     1,     3,     2,     2,
       1,     2,     2,     1,     2,     1,     2,     1,     3,     0,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     5,
       1,     1,     1,     1,     1,     1,     9,     7,     7,     6,
       0,     1,     1,     1,     1,     1,     1,     4,     2,     1,
       2,     2,     2,     3,     9,     1,     3,     1,     2,     1,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     5,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     4,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     2,     2,     1,     1,     3,     3,     2,
       1,     1,     3,     1,     2,     2,     3,     2,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     2,     2
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
    case 109: /* ast  */
#line 137 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 2007 "src/parser.c"
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
#line 2309 "src/parser.c"
    break;

  case 3:
#line 141 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty.\n"); YYERROR; }
#line 2315 "src/parser.c"
    break;

  case 4:
#line 144 "src/gwion.y"
            { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2321 "src/parser.c"
    break;

  case 5:
#line 145 "src/gwion.y"
                { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2327 "src/parser.c"
    break;

  case 6:
#line 149 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2333 "src/parser.c"
    break;

  case 7:
#line 150 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2339 "src/parser.c"
    break;

  case 8:
#line 151 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2345 "src/parser.c"
    break;

  case 9:
#line 152 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2351 "src/parser.c"
    break;

  case 10:
#line 153 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2357 "src/parser.c"
    break;

  case 11:
#line 154 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2363 "src/parser.c"
    break;

  case 12:
#line 155 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2369 "src/parser.c"
    break;

  case 13:
#line 160 "src/gwion.y"
    { (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-6].id_list));
  }
#line 2378 "src/parser.c"
    break;

  case 14:
#line 165 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2384 "src/parser.c"
    break;

  case 15:
#line 165 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2390 "src/parser.c"
    break;

  case 17:
#line 167 "src/gwion.y"
                           { (yyval.ast) = NULL; }
#line 2396 "src/parser.c"
    break;

  case 18:
#line 170 "src/gwion.y"
                        { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2402 "src/parser.c"
    break;

  case 19:
#line 171 "src/gwion.y"
                        { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2408 "src/parser.c"
    break;

  case 20:
#line 174 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2414 "src/parser.c"
    break;

  case 21:
#line 174 "src/gwion.y"
                                                                                    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2420 "src/parser.c"
    break;

  case 22:
#line 175 "src/gwion.y"
               { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yylsp[0]))); }
#line 2426 "src/parser.c"
    break;

  case 23:
#line 175 "src/gwion.y"
                                                                                                        { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2432 "src/parser.c"
    break;

  case 24:
#line 177 "src/gwion.y"
                { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2438 "src/parser.c"
    break;

  case 25:
#line 177 "src/gwion.y"
                                                                              { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2444 "src/parser.c"
    break;

  case 26:
#line 179 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2451 "src/parser.c"
    break;

  case 27:
#line 181 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2458 "src/parser.c"
    break;

  case 28:
#line 184 "src/gwion.y"
                                              {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag));
}
#line 2470 "src/parser.c"
    break;

  case 29:
#line 191 "src/gwion.y"
                                                                      {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2481 "src/parser.c"
    break;

  case 31:
#line 198 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2487 "src/parser.c"
    break;

  case 32:
#line 200 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2495 "src/parser.c"
    break;

  case 33:
#line 204 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2503 "src/parser.c"
    break;

  case 34:
#line 208 "src/gwion.y"
                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2509 "src/parser.c"
    break;

  case 35:
#line 209 "src/gwion.y"
              { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2515 "src/parser.c"
    break;

  case 36:
#line 209 "src/gwion.y"
                                                { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2521 "src/parser.c"
    break;

  case 37:
#line 210 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2527 "src/parser.c"
    break;

  case 38:
#line 211 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2533 "src/parser.c"
    break;

  case 39:
#line 211 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2543 "src/parser.c"
    break;

  case 40:
#line 218 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2549 "src/parser.c"
    break;

  case 41:
#line 219 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2555 "src/parser.c"
    break;

  case 42:
#line 223 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2561 "src/parser.c"
    break;

  case 43:
#line 224 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2567 "src/parser.c"
    break;

  case 44:
#line 225 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2573 "src/parser.c"
    break;

  case 45:
#line 226 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2579 "src/parser.c"
    break;

  case 46:
#line 227 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2585 "src/parser.c"
    break;

  case 47:
#line 228 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2591 "src/parser.c"
    break;

  case 48:
#line 229 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2597 "src/parser.c"
    break;

  case 49:
#line 230 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2603 "src/parser.c"
    break;

  case 50:
#line 231 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2609 "src/parser.c"
    break;

  case 51:
#line 232 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2615 "src/parser.c"
    break;

  case 62:
#line 249 "src/gwion.y"
       { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2621 "src/parser.c"
    break;

  case 63:
#line 250 "src/gwion.y"
                {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2631 "src/parser.c"
    break;

  case 65:
#line 257 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2637 "src/parser.c"
    break;

  case 66:
#line 260 "src/gwion.y"
                                                            { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-5].flag); }
#line 2644 "src/parser.c"
    break;

  case 67:
#line 263 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2650 "src/parser.c"
    break;

  case 68:
#line 265 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2656 "src/parser.c"
    break;

  case 69:
#line 267 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2662 "src/parser.c"
    break;

  case 70:
#line 267 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2668 "src/parser.c"
    break;

  case 71:
#line 270 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2679 "src/parser.c"
    break;

  case 72:
#line 278 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2685 "src/parser.c"
    break;

  case 73:
#line 279 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2691 "src/parser.c"
    break;

  case 74:
#line 281 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2697 "src/parser.c"
    break;

  case 75:
#line 281 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2703 "src/parser.c"
    break;

  case 76:
#line 283 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2714 "src/parser.c"
    break;

  case 77:
#line 291 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2720 "src/parser.c"
    break;

  case 78:
#line 292 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2726 "src/parser.c"
    break;

  case 79:
#line 296 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2732 "src/parser.c"
    break;

  case 80:
#line 298 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2738 "src/parser.c"
    break;

  case 81:
#line 300 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2744 "src/parser.c"
    break;

  case 82:
#line 302 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2750 "src/parser.c"
    break;

  case 83:
#line 304 "src/gwion.y"
      { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2756 "src/parser.c"
    break;

  case 84:
#line 306 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2762 "src/parser.c"
    break;

  case 85:
#line 309 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt)); }
#line 2768 "src/parser.c"
    break;

  case 86:
#line 313 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2774 "src/parser.c"
    break;

  case 87:
#line 315 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2780 "src/parser.c"
    break;

  case 88:
#line 319 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2786 "src/parser.c"
    break;

  case 89:
#line 320 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2792 "src/parser.c"
    break;

  case 90:
#line 321 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2798 "src/parser.c"
    break;

  case 91:
#line 324 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2804 "src/parser.c"
    break;

  case 92:
#line 325 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2810 "src/parser.c"
    break;

  case 93:
#line 329 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2816 "src/parser.c"
    break;

  case 94:
#line 330 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2822 "src/parser.c"
    break;

  case 96:
#line 333 "src/gwion.y"
                                        { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2828 "src/parser.c"
    break;

  case 98:
#line 335 "src/gwion.y"
                                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2834 "src/parser.c"
    break;

  case 99:
#line 337 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2840 "src/parser.c"
    break;

  case 100:
#line 337 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2846 "src/parser.c"
    break;

  case 104:
#line 342 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2852 "src/parser.c"
    break;

  case 105:
#line 343 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2858 "src/parser.c"
    break;

  case 106:
#line 344 "src/gwion.y"
                                  { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2864 "src/parser.c"
    break;

  case 107:
#line 348 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2870 "src/parser.c"
    break;

  case 108:
#line 349 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2876 "src/parser.c"
    break;

  case 109:
#line 350 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2882 "src/parser.c"
    break;

  case 110:
#line 354 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2888 "src/parser.c"
    break;

  case 111:
#line 355 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2894 "src/parser.c"
    break;

  case 112:
#line 356 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2900 "src/parser.c"
    break;

  case 117:
#line 361 "src/gwion.y"
                                 { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), GET_LOC(&(yyloc)))), (yyvsp[0].var_decl_list)); }
#line 2907 "src/parser.c"
    break;

  case 118:
#line 363 "src/gwion.y"
                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2913 "src/parser.c"
    break;

  case 119:
#line 364 "src/gwion.y"
                                { (yyvsp[-1].type_decl)->flag |= ae_flag_ref | ae_flag_nonnull; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2919 "src/parser.c"
    break;

  case 121:
#line 365 "src/gwion.y"
                                    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2925 "src/parser.c"
    break;

  case 122:
#line 367 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2931 "src/parser.c"
    break;

  case 123:
#line 367 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2937 "src/parser.c"
    break;

  case 124:
#line 368 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2943 "src/parser.c"
    break;

  case 125:
#line 368 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2949 "src/parser.c"
    break;

  case 126:
#line 369 "src/gwion.y"
                         { (yyval.flag) = ae_flag_variadic; }
#line 2955 "src/parser.c"
    break;

  case 127:
#line 369 "src/gwion.y"
                                                            { (yyval.flag) = 0; }
#line 2961 "src/parser.c"
    break;

  case 128:
#line 371 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2967 "src/parser.c"
    break;

  case 129:
#line 371 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2973 "src/parser.c"
    break;

  case 130:
#line 373 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2979 "src/parser.c"
    break;

  case 131:
#line 374 "src/gwion.y"
           { (yyval.flag) = ae_flag_global; }
#line 2985 "src/parser.c"
    break;

  case 132:
#line 377 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2991 "src/parser.c"
    break;

  case 133:
#line 378 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2997 "src/parser.c"
    break;

  case 134:
#line 381 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3003 "src/parser.c"
    break;

  case 135:
#line 382 "src/gwion.y"
                 { (yyval.flag) = (yyvsp[0].flag); }
#line 3009 "src/parser.c"
    break;

  case 136:
#line 383 "src/gwion.y"
                             { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3015 "src/parser.c"
    break;

  case 137:
#line 386 "src/gwion.y"
           { (yyval.flag) = 0; }
#line 3021 "src/parser.c"
    break;

  case 138:
#line 386 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[0].flag); }
#line 3027 "src/parser.c"
    break;

  case 139:
#line 390 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 3033 "src/parser.c"
    break;

  case 146:
#line 397 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 3039 "src/parser.c"
    break;

  case 147:
#line 399 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 3045 "src/parser.c"
    break;

  case 148:
#line 401 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 3051 "src/parser.c"
    break;

  case 149:
#line 403 "src/gwion.y"
    {
 (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_typedef, GET_LOC(&(yyloc)));
    }
#line 3059 "src/parser.c"
    break;

  case 150:
#line 407 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 3065 "src/parser.c"
    break;

  case 151:
#line 407 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 3071 "src/parser.c"
    break;

  case 152:
#line 408 "src/gwion.y"
                   { (yyval.ival) = ae_flag_nonnull; }
#line 3077 "src/parser.c"
    break;

  case 154:
#line 411 "src/gwion.y"
             { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].id_list)); }
#line 3083 "src/parser.c"
    break;

  case 155:
#line 412 "src/gwion.y"
                { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp)); }
#line 3089 "src/parser.c"
    break;

  case 156:
#line 416 "src/gwion.y"
                 { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3095 "src/parser.c"
    break;

  case 157:
#line 417 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 3101 "src/parser.c"
    break;

  case 158:
#line 421 "src/gwion.y"
                          { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 3107 "src/parser.c"
    break;

  case 159:
#line 424 "src/gwion.y"
                      { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3113 "src/parser.c"
    break;

  case 160:
#line 425 "src/gwion.y"
                      { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 3119 "src/parser.c"
    break;

  case 161:
#line 426 "src/gwion.y"
                       { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), nonnull); }
#line 3125 "src/parser.c"
    break;

  case 162:
#line 428 "src/gwion.y"
                               { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 3131 "src/parser.c"
    break;

  case 163:
#line 429 "src/gwion.y"
                                  { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 3137 "src/parser.c"
    break;

  case 164:
#line 432 "src/gwion.y"
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
#line 3159 "src/parser.c"
    break;

  case 165:
#line 452 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3165 "src/parser.c"
    break;

  case 166:
#line 453 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3171 "src/parser.c"
    break;

  case 167:
#line 456 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3177 "src/parser.c"
    break;

  case 168:
#line 457 "src/gwion.y"
                { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3183 "src/parser.c"
    break;

  case 169:
#line 459 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3189 "src/parser.c"
    break;

  case 170:
#line 460 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3195 "src/parser.c"
    break;

  case 171:
#line 461 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3201 "src/parser.c"
    break;

  case 172:
#line 462 "src/gwion.y"
                      { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3207 "src/parser.c"
    break;

  case 173:
#line 463 "src/gwion.y"
                       { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3213 "src/parser.c"
    break;

  case 174:
#line 464 "src/gwion.y"
                     { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3219 "src/parser.c"
    break;

  case 189:
#line 472 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 3225 "src/parser.c"
    break;

  case 191:
#line 475 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3231 "src/parser.c"
    break;

  case 192:
#line 477 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 3237 "src/parser.c"
    break;

  case 194:
#line 479 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3243 "src/parser.c"
    break;

  case 196:
#line 480 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3249 "src/parser.c"
    break;

  case 198:
#line 481 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3255 "src/parser.c"
    break;

  case 200:
#line 482 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3261 "src/parser.c"
    break;

  case 202:
#line 483 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3267 "src/parser.c"
    break;

  case 204:
#line 484 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3273 "src/parser.c"
    break;

  case 206:
#line 485 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3279 "src/parser.c"
    break;

  case 208:
#line 486 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3285 "src/parser.c"
    break;

  case 210:
#line 487 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3291 "src/parser.c"
    break;

  case 212:
#line 488 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3297 "src/parser.c"
    break;

  case 214:
#line 489 "src/gwion.y"
                                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3303 "src/parser.c"
    break;

  case 215:
#line 491 "src/gwion.y"
                                      { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3309 "src/parser.c"
    break;

  case 219:
#line 495 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3315 "src/parser.c"
    break;

  case 228:
#line 501 "src/gwion.y"
                                          { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3321 "src/parser.c"
    break;

  case 229:
#line 502 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3327 "src/parser.c"
    break;

  case 230:
#line 503 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3333 "src/parser.c"
    break;

  case 231:
#line 504 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3339 "src/parser.c"
    break;

  case 232:
#line 507 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3345 "src/parser.c"
    break;

  case 233:
#line 508 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3351 "src/parser.c"
    break;

  case 234:
#line 509 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3357 "src/parser.c"
    break;

  case 235:
#line 509 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3363 "src/parser.c"
    break;

  case 236:
#line 512 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3369 "src/parser.c"
    break;

  case 237:
#line 513 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3375 "src/parser.c"
    break;

  case 238:
#line 516 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3381 "src/parser.c"
    break;

  case 239:
#line 516 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3387 "src/parser.c"
    break;

  case 242:
#line 520 "src/gwion.y"
                         { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3393 "src/parser.c"
    break;

  case 244:
#line 523 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3399 "src/parser.c"
    break;

  case 245:
#line 525 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range)); }
#line 3405 "src/parser.c"
    break;

  case 246:
#line 527 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3412 "src/parser.c"
    break;

  case 247:
#line 530 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3418 "src/parser.c"
    break;

  case 248:
#line 530 "src/gwion.y"
                                                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3424 "src/parser.c"
    break;

  case 249:
#line 533 "src/gwion.y"
                       { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3430 "src/parser.c"
    break;

  case 250:
#line 534 "src/gwion.y"
                       { (yyval.exp) = (yyvsp[-1].exp); }
#line 3436 "src/parser.c"
    break;

  case 251:
#line 537 "src/gwion.y"
{
  Exp next = (yyvsp[-1].exp);
  while(next->next) {
    if(!next->next)
      break;
  next = next->next; }
  next->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-1].exp);
}
#line 3449 "src/parser.c"
    break;

  case 252:
#line 545 "src/gwion.y"
                 { (yyval.exp) = (yyvsp[0].exp); }
#line 3455 "src/parser.c"
    break;

  case 253:
#line 548 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3461 "src/parser.c"
    break;

  case 254:
#line 549 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3467 "src/parser.c"
    break;

  case 255:
#line 550 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3473 "src/parser.c"
    break;

  case 256:
#line 551 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3479 "src/parser.c"
    break;

  case 257:
#line 552 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3485 "src/parser.c"
    break;

  case 258:
#line 553 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3491 "src/parser.c"
    break;

  case 259:
#line 554 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3497 "src/parser.c"
    break;

  case 260:
#line 555 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3503 "src/parser.c"
    break;

  case 261:
#line 556 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3509 "src/parser.c"
    break;

  case 262:
#line 557 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3515 "src/parser.c"
    break;

  case 263:
#line 558 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3521 "src/parser.c"
    break;

  case 264:
#line 559 "src/gwion.y"
                          { (yyval.exp) = new_exp_interp(mpool(arg),     (yyvsp[0].exp)); }
#line 3527 "src/parser.c"
    break;


#line 3531 "src/parser.c"

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
#line 561 "src/gwion.y"

