/* A Bison parser, made by GNU Bison 3.7.2.51-de63.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2.51-de63"

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
#line 8 "src/gwion.y"

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

#define LIST_FIRST(a)  map_set(&arg->map, (m_uint)a, (m_uint)a);

#define LIST_NEXT(a, b, t, c)                      \
  a = b;                                           \
  const t next = c;                                \
  const t list = (t)map_get(&arg->map, (m_uint)a); \
  list->next = next;                               \
  map_set(&arg->map, (m_uint) a, (m_uint)next);    \

#define LIST_REM(a) map_remove(&arg->map, (m_uint)a);

ANN int gwion_error(loc_t*, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);

#line 105 "src/parser.c"

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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SEMICOLON = 3,                  /* ";"  */
  YYSYMBOL_COMMA = 4,                      /* ","  */
  YYSYMBOL_LPAREN = 5,                     /* "("  */
  YYSYMBOL_RPAREN = 6,                     /* ")"  */
  YYSYMBOL_LBRACK = 7,                     /* "["  */
  YYSYMBOL_RBRACK = 8,                     /* "]"  */
  YYSYMBOL_LBRACE = 9,                     /* "{"  */
  YYSYMBOL_RBRACE = 10,                    /* "}"  */
  YYSYMBOL_FUNCTION = 11,                  /* "fun"  */
  YYSYMBOL_VAR = 12,                       /* "var"  */
  YYSYMBOL_IF = 13,                        /* "if"  */
  YYSYMBOL_ELSE = 14,                      /* "else"  */
  YYSYMBOL_WHILE = 15,                     /* "while"  */
  YYSYMBOL_DO = 16,                        /* "do"  */
  YYSYMBOL_UNTIL = 17,                     /* "until"  */
  YYSYMBOL_LOOP = 18,                      /* "repeat"  */
  YYSYMBOL_FOR = 19,                       /* "for"  */
  YYSYMBOL_FOREACH = 20,                   /* "foreach"  */
  YYSYMBOL_MATCH = 21,                     /* "match"  */
  YYSYMBOL_CASE = 22,                      /* "case"  */
  YYSYMBOL_WHEN = 23,                      /* "when"  */
  YYSYMBOL_WHERE = 24,                     /* "where"  */
  YYSYMBOL_ENUM = 25,                      /* "enum"  */
  YYSYMBOL_TRETURN = 26,                   /* "return"  */
  YYSYMBOL_BREAK = 27,                     /* "break"  */
  YYSYMBOL_CONTINUE = 28,                  /* "continue"  */
  YYSYMBOL_CLASS = 29,                     /* "class"  */
  YYSYMBOL_STRUCT = 30,                    /* "struct"  */
  YYSYMBOL_STATIC = 31,                    /* "static"  */
  YYSYMBOL_GLOBAL = 32,                    /* "global"  */
  YYSYMBOL_PRIVATE = 33,                   /* "private"  */
  YYSYMBOL_PROTECT = 34,                   /* "protect"  */
  YYSYMBOL_ABSTRACT = 35,                  /* "abstract"  */
  YYSYMBOL_FINAL = 36,                     /* "final"  */
  YYSYMBOL_EXTENDS = 37,                   /* "extends"  */
  YYSYMBOL_DOT = 38,                       /* "."  */
  YYSYMBOL_OPERATOR = 39,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 40,                   /* "typedef"  */
  YYSYMBOL_DISTINCT = 41,                  /* "distinct"  */
  YYSYMBOL_FUNCDEF = 42,                   /* "funcdef"  */
  YYSYMBOL_NOELSE = 43,                    /* NOELSE  */
  YYSYMBOL_UNION = 44,                     /* "union"  */
  YYSYMBOL_CONSTT = 45,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 46,                   /* "..."  */
  YYSYMBOL_VARLOOP = 47,                   /* "varloop"  */
  YYSYMBOL_DEFER = 48,                     /* "defer"  */
  YYSYMBOL_BACKSLASH = 49,                 /* "\\"  */
  YYSYMBOL_OPID_A = 50,                    /* OPID_A  */
  YYSYMBOL_OPID_E = 51,                    /* OPID_E  */
  YYSYMBOL_LATE = 52,                      /* "LATE"  */
  YYSYMBOL_NUM = 53,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 54,                    /* FLOATT  */
  YYSYMBOL_STRING_LIT = 55,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 56,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 57,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 58,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 59,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 60,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 61,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 62,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 63,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 64,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 65,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 66,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 67,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 68,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 69,                  /* "#if"  */
  YYSYMBOL_PP_NL = 70,                     /* "\n"  */
  YYSYMBOL_PP_REQUIRE = 71,                /* "require"  */
  YYSYMBOL_72_operator_id_ = 72,           /* "@<operator id>"  */
  YYSYMBOL_73_operator_id_ = 73,           /* "&<operator id>"  */
  YYSYMBOL_ID = 74,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 75,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 76,                  /* "++"  */
  YYSYMBOL_MINUS = 77,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 78,                /* "--"  */
  YYSYMBOL_TIMES = 79,                     /* "*"  */
  YYSYMBOL_DIVIDE = 80,                    /* "/"  */
  YYSYMBOL_PERCENT = 81,                   /* "%"  */
  YYSYMBOL_DOLLAR = 82,                    /* "$"  */
  YYSYMBOL_QUESTION = 83,                  /* "?"  */
  YYSYMBOL_OPTIONS = 84,                   /* OPTIONS  */
  YYSYMBOL_COLON = 85,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 86,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 87,             /* "?:"  */
  YYSYMBOL_NEW = 88,                       /* "new"  */
  YYSYMBOL_SPORK = 89,                     /* "spork"  */
  YYSYMBOL_FORK = 90,                      /* "fork"  */
  YYSYMBOL_L_HACK = 91,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 92,                    /* ">>>"  */
  YYSYMBOL_AND = 93,                       /* "&&"  */
  YYSYMBOL_EQ = 94,                        /* "=="  */
  YYSYMBOL_GE = 95,                        /* ">="  */
  YYSYMBOL_GT = 96,                        /* ">"  */
  YYSYMBOL_LE = 97,                        /* "<="  */
  YYSYMBOL_LT = 98,                        /* "<"  */
  YYSYMBOL_NEQ = 99,                       /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 100,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 101,              /* ">>"  */
  YYSYMBOL_S_AND = 102,                    /* "&"  */
  YYSYMBOL_S_OR = 103,                     /* "|"  */
  YYSYMBOL_S_XOR = 104,                    /* "^"  */
  YYSYMBOL_OR = 105,                       /* "||"  */
  YYSYMBOL_TMPL = 106,                     /* ":["  */
  YYSYMBOL_TILDA = 107,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 108,              /* "!"  */
  YYSYMBOL_DYNOP = 109,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 110,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 111,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 112,                   /* UTIMES  */
  YYSYMBOL_113_ = 113,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 114,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 115,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 116,                 /* $accept  */
  YYSYMBOL_prg = 117,                      /* prg  */
  YYSYMBOL_ast = 118,                      /* ast  */
  YYSYMBOL_section = 119,                  /* section  */
  YYSYMBOL_class_type = 120,               /* class_type  */
  YYSYMBOL_class_def = 121,                /* class_def  */
  YYSYMBOL_class_ext = 122,                /* class_ext  */
  YYSYMBOL_class_body = 123,               /* class_body  */
  YYSYMBOL_id_list = 124,                  /* id_list  */
  YYSYMBOL_stmt_list = 125,                /* stmt_list  */
  YYSYMBOL_fptr_base = 126,                /* fptr_base  */
  YYSYMBOL_func_base = 127,                /* func_base  */
  YYSYMBOL_fptr_def = 128,                 /* fptr_def  */
  YYSYMBOL_type_def_type = 129,            /* type_def_type  */
  YYSYMBOL_type_def = 130,                 /* type_def  */
  YYSYMBOL_type_decl_array = 131,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 132,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 133,          /* type_decl_empty  */
  YYSYMBOL_arg = 134,                      /* arg  */
  YYSYMBOL_arg_list = 135,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 136,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 137,                /* fptr_list  */
  YYSYMBOL_code_stmt = 138,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 139,                  /* stmt_pp  */
  YYSYMBOL_stmt = 140,                     /* stmt  */
  YYSYMBOL_opt_id = 141,                   /* opt_id  */
  YYSYMBOL_enum_def = 142,                 /* enum_def  */
  YYSYMBOL_when_exp = 143,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 144,          /* match_case_stmt  */
  YYSYMBOL_match_list = 145,               /* match_list  */
  YYSYMBOL_where_stmt = 146,               /* where_stmt  */
  YYSYMBOL_match_stmt = 147,               /* match_stmt  */
  YYSYMBOL_flow = 148,                     /* flow  */
  YYSYMBOL_loop_stmt = 149,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 150,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 151,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 152,           /* selection_stmt  */
  YYSYMBOL_breaks = 153,                   /* breaks  */
  YYSYMBOL_jump_stmt = 154,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 155,                 /* exp_stmt  */
  YYSYMBOL_exp = 156,                      /* exp  */
  YYSYMBOL_binary_exp = 157,               /* binary_exp  */
  YYSYMBOL_call_template = 158,            /* call_template  */
  YYSYMBOL_op = 159,                       /* op  */
  YYSYMBOL_array_exp = 160,                /* array_exp  */
  YYSYMBOL_array_empty = 161,              /* array_empty  */
  YYSYMBOL_range = 162,                    /* range  */
  YYSYMBOL_array = 163,                    /* array  */
  YYSYMBOL_decl_exp = 164,                 /* decl_exp  */
  YYSYMBOL_func_args = 165,                /* func_args  */
  YYSYMBOL_fptr_args = 166,                /* fptr_args  */
  YYSYMBOL_arg_type = 167,                 /* arg_type  */
  YYSYMBOL_decl_template = 168,            /* decl_template  */
  YYSYMBOL_global = 169,                   /* global  */
  YYSYMBOL_storage_flag = 170,             /* storage_flag  */
  YYSYMBOL_access_flag = 171,              /* access_flag  */
  YYSYMBOL_flag = 172,                     /* flag  */
  YYSYMBOL_final = 173,                    /* final  */
  YYSYMBOL_modifier = 174,                 /* modifier  */
  YYSYMBOL_func_def_base = 175,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 176,            /* abstract_fdef  */
  YYSYMBOL_op_op = 177,                    /* op_op  */
  YYSYMBOL_op_base = 178,                  /* op_base  */
  YYSYMBOL_operator = 179,                 /* operator  */
  YYSYMBOL_op_def = 180,                   /* op_def  */
  YYSYMBOL_func_def = 181,                 /* func_def  */
  YYSYMBOL_type_decl_tmpl = 182,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 183,         /* type_decl_noflag  */
  YYSYMBOL_option = 184,                   /* option  */
  YYSYMBOL_type_decl_opt = 185,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 186,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 187,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 188,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 189,               /* union_decl  */
  YYSYMBOL_union_list = 190,               /* union_list  */
  YYSYMBOL_union_def = 191,                /* union_def  */
  YYSYMBOL_var_decl_list = 192,            /* var_decl_list  */
  YYSYMBOL_var_decl = 193,                 /* var_decl  */
  YYSYMBOL_arg_decl = 194,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 195,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 196,                    /* eq_op  */
  YYSYMBOL_rel_op = 197,                   /* rel_op  */
  YYSYMBOL_shift_op = 198,                 /* shift_op  */
  YYSYMBOL_add_op = 199,                   /* add_op  */
  YYSYMBOL_mul_op = 200,                   /* mul_op  */
  YYSYMBOL_opt_exp = 201,                  /* opt_exp  */
  YYSYMBOL_con_exp = 202,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 203,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 204,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 205,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 206,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 207,                  /* and_exp  */
  YYSYMBOL_eq_exp = 208,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 209,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 210,                /* shift_exp  */
  YYSYMBOL_add_exp = 211,                  /* add_exp  */
  YYSYMBOL_mul_exp = 212,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 213,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 214,                 /* cast_exp  */
  YYSYMBOL_unary_op = 215,                 /* unary_op  */
  YYSYMBOL_unary_exp = 216,                /* unary_exp  */
  YYSYMBOL_lambda_list = 217,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 218,               /* lambda_arg  */
  YYSYMBOL_type_list = 219,                /* type_list  */
  YYSYMBOL_call_paren = 220,               /* call_paren  */
  YYSYMBOL_post_op = 221,                  /* post_op  */
  YYSYMBOL_dot_exp = 222,                  /* dot_exp  */
  YYSYMBOL_post_exp = 223,                 /* post_exp  */
  YYSYMBOL_interp_exp = 224,               /* interp_exp  */
  YYSYMBOL_interp = 225,                   /* interp  */
  YYSYMBOL_prim_exp = 226                  /* prim_exp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  169
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1560

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  116
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  457

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   370


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   163,   163,   164,   167,   168,   172,   173,   174,   175,
     176,   177,   178,   181,   181,   183,   194,   194,   196,   196,
     198,   199,   201,   202,   204,   207,   210,   216,   216,   217,
     225,   225,   227,   231,   236,   237,   239,   240,   246,   247,
     247,   250,   251,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   280,   280,   283,   289,   289,   292,   302,
     303,   305,   305,   307,   317,   318,   321,   323,   325,   327,
     329,   331,   333,   337,   339,   342,   344,   348,   348,   350,
     351,   352,   353,   357,   358,   362,   363,   366,   367,   368,
     369,   372,   372,   374,   374,   374,   374,   377,   378,   382,
     386,   387,   388,   392,   393,   394,   397,   397,   399,   400,
     402,   402,   403,   403,   404,   404,   406,   406,   408,   410,
     410,   412,   413,   416,   417,   418,   419,   422,   422,   424,
     424,   427,   434,   443,   443,   443,   443,   443,   445,   447,
     449,   454,   460,   460,   461,   464,   464,   464,   467,   471,
     472,   475,   475,   475,   476,   477,   477,   480,   481,   483,
     483,   486,   490,   492,   493,   496,   506,   507,   510,   511,
     513,   514,   515,   516,   516,   518,   518,   519,   519,   519,
     519,   520,   520,   521,   521,   522,   522,   522,   524,   524,
     525,   526,   528,   531,   531,   532,   532,   533,   533,   534,
     534,   535,   535,   536,   536,   537,   537,   538,   538,   539,
     539,   540,   540,   541,   541,   543,   543,   546,   546,   546,
     547,   547,   547,   547,   550,   551,   552,   553,   554,   555,
     556,   559,   560,   561,   561,   564,   565,   569,   569,   571,
     571,   573,   582,   583,   585,   587,   590,   592,   594,   598,
     599,   600,   602,   603,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", ";", ",", "(", ")", "[", "]",
  "{", "}", "fun", "var", "if", "else", "while", "do", "until", "repeat",
  "for", "foreach", "match", "case", "when", "where", "enum", "return",
  "break", "continue", "class", "struct", "static", "global", "private",
  "protect", "abstract", "final", "extends", ".", "operator", "typedef",
  "distinct", "funcdef", "NOELSE", "union", "const", "...", "varloop",
  "defer", "\\", "OPID_A", "OPID_E", "LATE", "<integer>", "FLOATT",
  "<litteral string>", "<litteral char>", "`", "<interp string>",
  "INTERP_EXP", "<interp string>`", "<comment>", "#include", "#define",
  "#pragma", "#undef", "#ifdef", "#ifndef", "#else", "#if", "\n",
  "require", "@<operator id>", "&<operator id>", "<identifier>", "+", "++",
  "-", "--", "*", "/", "%", "$", "?", "OPTIONS", ":", "::", "?:", "new",
  "spork", "fork", "<<<", ">>>", "&&", "==", ">=", ">", "<=", "<", "!=",
  "<<", ">>", "&", "|", "^", "||", ":[", "~", "!", "<dynamic_operator>",
  "RANGE_EMPTY", "UMINUS", "UTIMES", "=", "STMT_ASSOC", "STMT_NOASSOC",
  "$accept", "prg", "ast", "section", "class_type", "class_def",
  "class_ext", "class_body", "id_list", "stmt_list", "fptr_base",
  "func_base", "fptr_def", "type_def_type", "type_def", "type_decl_array",
  "type_decl_exp", "type_decl_empty", "arg", "arg_list", "fptr_arg",
  "fptr_list", "code_stmt", "stmt_pp", "stmt", "opt_id", "enum_def",
  "when_exp", "match_case_stmt", "match_list", "where_stmt", "match_stmt",
  "flow", "loop_stmt", "varloop_stmt", "defer_stmt", "selection_stmt",
  "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template",
  "op", "array_exp", "array_empty", "range", "array", "decl_exp",
  "func_args", "fptr_args", "arg_type", "decl_template", "global",
  "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "type_decl_tmpl", "type_decl_noflag", "option",
  "type_decl_opt", "type_decl", "type_decl_flag", "type_decl_flag2",
  "union_decl", "union_list", "union_def", "var_decl_list", "var_decl",
  "arg_decl", "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op",
  "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
  "inc_or_exp", "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp",
  "add_exp", "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp",
  "lambda_list", "lambda_arg", "type_list", "call_paren", "post_op",
  "dot_exp", "post_exp", "interp_exp", "interp", "prim_exp", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#ifdef YYPRINT
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370
};
#endif

#define YYPACT_NINF (-300)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-103)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     403,  -300,   912,   852,   509,   133,  -300,    56,  -300,   712,
    -300,    76,    80,    85,  1392,   133,   156,  -300,  -300,  -300,
    -300,   107,  -300,  -300,   133,   133,  -300,  1392,   712,   -20,
    1452,  -300,  -300,  -300,  -300,  -300,    15,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,     3,     3,   142,   142,  1392,  -300,  -300,
     147,   403,  -300,   133,  -300,   712,  -300,   133,  -300,  -300,
    -300,  -300,  -300,  -300,   149,  -300,  -300,  -300,  -300,    30,
    -300,  -300,   127,   -25,  -300,   162,  -300,  -300,  -300,  -300,
    -300,   191,  -300,  -300,  -300,   133,  -300,  -300,   -42,    91,
      70,   102,   118,   -50,   119,   -71,    42,   179,   139,   170,
    1452,  -300,   142,  -300,  -300,   148,   196,  -300,  -300,   144,
    -300,  1392,    31,  -300,   615,  -300,  -300,  -300,  -300,   257,
    -300,  -300,   145,   152,  1392,   143,  1392,   792,   201,    49,
     203,  -300,   199,  -300,   261,     3,   208,    29,  -300,   -20,
    -300,  -300,    15,  -300,    27,  -300,   178,  -300,  -300,   248,
     158,  -300,   276,   213,  -300,  -300,  -300,  -300,    22,  -300,
    -300,   193,  -300,     3,  1392,  -300,   285,  -300,  1392,  1392,
    1392,  1392,   972,  -300,  -300,  -300,   272,   142,     3,     3,
    1392,  1452,  1452,  1452,  1452,  1452,  1452,  -300,  -300,  1452,
    -300,  -300,  -300,  -300,  1452,  -300,  -300,  1452,  -300,  -300,
    1452,  -300,  -300,  -300,  1452,  1452,     3,  -300,  -300,  1032,
     216,  -300,     3,   286,  -300,  -300,  -300,    15,  -300,    94,
     287,  1092,  -300,     3,    34,  -300,     3,  -300,     3,   177,
    1392,   192,   792,    33,   271,  -300,   283,  -300,     3,    34,
     221,   190,  -300,  -300,  -300,    15,  -300,   213,  -300,  -300,
    -300,  1152,  -300,  -300,  -300,  -300,  -300,   223,   226,   217,
    -300,   -25,  -300,  -300,  -300,  -300,   103,   257,  -300,  -300,
    -300,  -300,  -300,   299,  -300,  -300,  -300,  -300,   303,  -300,
     306,   239,   311,   236,  -300,    91,    70,   102,   118,   -50,
     119,   -71,    42,   179,   139,   170,  -300,  -300,   314,   315,
    1212,  -300,  -300,  -300,  1272,  -300,  -300,   124,   250,  -300,
     321,  -300,   320,   142,   253,   256,   712,   245,   712,  1332,
     259,  1392,  1392,  -300,    77,   260,   250,  -300,   327,   333,
     190,   260,   328,  -300,  -300,   190,   190,   712,   334,     3,
       3,     3,   276,  -300,   337,  1452,     3,  -300,  -300,   233,
    -300,  -300,   276,   269,     3,  -300,  -300,   190,   190,   330,
    -300,  -300,   712,   270,   273,    26,    39,   322,  -300,  -300,
      78,  -300,  -300,     3,  -300,  -300,   138,    88,   308,   352,
    -300,  -300,   353,   354,   355,  -300,   239,  -300,  -300,  -300,
    -300,   162,  1392,  -300,   261,  -300,   712,  -300,   712,  1392,
     712,  1392,   274,   712,  -300,   288,  -300,  -300,  -300,    20,
     290,    88,   364,     3,   356,  -300,     3,  -300,  -300,  -300,
     -25,    34,  -300,  -300,    28,  -300,   311,   712,  -300,  -300,
    -300,   380,  -300,  -300,  -300,   403,   378,   382,   712,   712,
    -300,   403,   376,  -300,  -300,  -300,  -300
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    94,     0,     0,     0,   136,   169,     0,    74,     0,
      75,     0,     0,     0,     0,   136,     0,    87,    88,    13,
      14,   152,    27,    28,   136,   136,   168,     0,     0,   244,
       0,   167,   265,   266,   268,   269,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   264,   249,
     227,   250,   228,     0,     0,   231,   232,     0,   233,   230,
       0,     2,     4,   136,     8,     6,    11,   136,    12,    57,
      60,    22,     9,    58,     0,    55,    61,    62,    56,     0,
      59,    54,     0,    95,   116,   117,   271,   270,    97,   155,
     156,     0,   157,     7,   170,   136,    10,   118,   200,   203,
     205,   207,   209,   211,   213,   215,   217,   219,   221,   223,
       0,   225,     0,   229,   258,   234,   267,   252,   275,     0,
     110,     0,     0,    41,     0,   129,   128,   131,   132,     0,
     130,   134,   133,   138,     0,     0,     0,     0,     0,     0,
      64,    90,     0,   153,     0,     0,     0,     0,    84,   241,
     243,   236,     0,   259,     0,   262,   102,    33,   240,   159,
     163,   165,    31,     0,    32,   237,   238,   239,     0,     1,
       5,   138,    23,     0,     0,    92,     0,    93,     0,     0,
       0,     0,     0,   112,   231,   232,     0,     0,     0,     0,
     199,     0,     0,     0,     0,     0,     0,   185,   186,     0,
     190,   188,   189,   187,     0,   191,   192,     0,   193,   194,
       0,   195,   196,   197,     0,     0,     0,   235,   274,     0,
       0,   257,     0,     0,   253,   254,   256,     0,   273,     0,
     107,     0,    42,   121,     0,   135,     0,   137,     0,     0,
       0,     0,     0,     0,     0,    63,     0,    89,   123,     0,
       0,   127,    83,   242,   260,     0,   158,     0,   161,   162,
     164,     0,    30,   166,   272,   139,   140,     0,     0,     0,
      91,    96,    98,   100,    99,   111,     0,     0,   106,   103,
     104,   105,   143,     0,   145,   144,   147,   146,     0,   154,
       0,     0,   198,     0,   202,   204,   206,   208,   210,   212,
     214,   216,   218,   220,   222,   224,   226,   251,   245,     0,
       0,   255,   263,   115,     0,   108,   114,     0,     0,    36,
     120,   125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,     0,     0,   184,    39,   122,     0,
     127,     0,     0,   261,   160,   127,   127,     0,     0,     0,
       0,     0,   178,   119,   177,     0,     0,   101,   248,     0,
     109,   113,   180,    35,     0,   124,   141,   127,   127,    85,
      77,    82,     0,     0,     0,     0,    67,    72,    70,    20,
       0,   183,    38,     0,    26,    24,     0,     0,    17,     0,
      76,   151,     0,     0,     0,   179,     0,   201,   246,   247,
     182,   181,     0,    37,     0,    25,     0,    78,     0,     0,
       0,     0,     0,     0,    73,     0,    65,    40,   126,   102,
       0,   173,     0,     0,     0,    29,     0,   149,   150,   176,
      34,     0,    86,    79,     0,    80,    66,     0,    71,    21,
     171,     0,   174,   175,    16,    19,     0,     0,     0,    68,
     172,    18,     0,   148,   142,    81,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -300,   -56,   -57,  -300,  -300,  -300,  -300,    47,    -3,
    -300,  -300,  -300,  -300,  -300,   -48,   -33,   -45,  -299,  -300,
       8,  -300,   -38,  -300,    -9,  -300,  -300,  -300,    58,  -300,
    -300,  -300,   258,  -300,  -300,  -300,  -300,  -300,  -300,  -122,
       0,   -22,   280,  -300,   -73,    36,   281,  -155,    92,   123,
      -1,  -236,   -89,   381,   275,  -300,   155,   234,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,   160,  -300,   246,
    -300,   -44,  -300,  -300,    -8,  -300,    40,  -300,    89,  -300,
    -300,   240,   241,   249,   251,  -300,  -180,  -300,   254,   268,
     244,   267,   279,   242,   282,   277,   243,   235,   263,   372,
      -2,   338,  -300,   120,  -300,   -91,  -300,  -300,  -131,  -300,
    -300
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    60,    61,    62,    63,    64,   424,   452,   380,    65,
     144,   129,    66,    67,    68,   157,   165,   308,   319,   320,
     337,   338,    69,    70,    71,   246,    72,   412,   333,   334,
     414,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,   256,   282,    84,    85,    86,    87,    88,   234,
     249,   323,   342,   130,   131,   132,   133,   238,   267,    89,
      90,   283,   187,    91,    92,    93,   159,   160,   260,   161,
     162,    94,    95,   421,   422,    96,   353,   354,   363,   382,
     199,   204,   207,   210,   214,   293,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   150,   112,   309,   311,   113,   114,   115,   155,   116,
     117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     135,   124,   119,   122,   170,   147,   164,   262,   158,   163,
     163,   294,   183,   339,   139,   242,   142,   166,   167,   148,
       2,   254,     3,   440,   226,   179,   178,     6,   151,   205,
     206,   178,   410,   175,   448,   178,   154,   330,     4,   230,
     321,   190,   224,   178,   197,   191,   186,   163,    26,   198,
     392,   393,   394,   178,   149,    31,   172,   168,   244,   180,
      26,   134,   411,   192,    29,   403,    30,    31,    32,    33,
      34,    35,    36,   152,   218,   153,   179,   156,   179,   179,
     322,   136,   415,   176,   181,   137,   255,   377,   416,    48,
     138,    49,    50,    51,    52,   288,   312,    53,   178,   332,
     250,   163,   313,    54,    55,    56,    57,   178,   217,   252,
     180,   230,   180,   180,   264,   172,   231,   208,   331,   209,
     329,   229,    58,    59,   343,   268,   222,   446,   178,   163,
     177,   178,   361,    26,   239,   181,   241,   181,   181,   126,
      31,   291,   415,   290,   163,   163,   418,   169,   178,   289,
     228,     4,   154,  -102,   174,   219,   271,   315,     8,   141,
      10,     2,   419,     3,   125,   126,   127,   128,     6,   182,
     140,   306,   163,   194,   269,   397,   125,   126,   163,   145,
     146,   178,   276,   326,   193,   318,   220,   236,   237,   163,
     292,   324,   163,   325,   163,   447,   178,   395,   328,   221,
     336,    26,   247,   178,   163,    29,   195,    30,    31,    32,
      33,    34,    35,    36,   200,   201,   202,   203,   171,   122,
     196,   178,   173,   347,    49,   215,    51,   154,   265,   237,
      48,   317,    49,    50,    51,    52,    26,   178,    53,   399,
     327,   258,   259,    31,    54,    55,    56,    57,   370,   178,
     189,   385,   216,   227,   222,   154,   388,   389,   211,   212,
     213,   276,   233,    58,    59,   156,   248,    49,    50,    51,
      52,   272,   273,   274,   178,   243,   408,   245,   404,   405,
     184,   185,   251,   261,   222,   366,   257,   156,   270,   400,
     307,   310,   335,   332,   314,   340,   341,   345,    58,    59,
     346,   318,   318,   318,   349,   163,   163,   163,   350,   375,
     359,   351,   163,   352,   276,   178,   318,   369,   356,   371,
     163,   355,   277,   357,   362,   364,   365,   367,   183,   373,
     368,   383,   376,   374,   379,   336,   384,   387,   390,   163,
     391,   396,   420,   163,   406,   423,   413,   208,    49,   209,
      51,   211,   212,   213,   402,   425,   278,   426,   409,   437,
     427,   428,   439,   407,   441,   445,   279,   200,   201,   202,
     203,   280,   205,   206,   443,   164,   420,   163,   318,   163,
     430,   281,   163,   450,   453,   454,   456,   434,   386,   451,
     444,   417,   378,   240,   170,   223,   225,   432,   401,   433,
     348,   435,   143,   431,   438,   266,     1,   235,     2,   263,
       3,   436,     4,   442,     5,     6,     7,   344,     8,     9,
      10,    11,    12,    13,    14,   381,   284,   285,    15,    16,
      17,    18,    19,    20,   449,   286,   429,   287,   297,   455,
     172,   300,    21,    22,    23,    24,   295,    25,    26,   304,
      27,    28,    29,   303,    30,    31,    32,    33,    34,    35,
      36,   296,   298,   188,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   299,   398,    48,   305,    49,
      50,    51,    52,     0,   302,    53,   301,   253,     0,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    59,     1,     0,     2,     0,     3,     0,     4,   123,
       0,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,    28,    29,     0,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     0,     0,    48,     0,    49,    50,    51,    52,     0,
       0,    53,     0,     0,     0,     0,     0,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,    59,     1,     0,
       2,     0,     3,     0,     4,   232,     0,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,    28,    29,     0,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     0,     0,    48,
       0,    49,    50,    51,    52,     0,     0,    53,     0,     0,
       0,     0,     0,    54,    55,    56,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
       0,     4,    58,    59,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
      28,    29,     0,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     0,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     1,     0,     2,     0,     3,
      54,    55,    56,    57,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
     120,     0,     0,     0,     6,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     0,     0,     0,     0,     0,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    58,
      59,    29,     0,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     2,   118,     3,
       0,     0,     0,     0,     6,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     0,     0,   121,     0,     0,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    58,
      59,    29,     0,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
     275,     0,     0,     0,     6,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     0,     0,     0,     0,     0,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    58,
      59,    29,     0,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     0,     0,     0,     0,     0,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    58,
      59,    29,     0,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
     316,     0,     0,     0,     6,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     0,     0,   121,     0,     0,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    58,
      59,    29,     0,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
     120,     0,     0,     0,     6,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     0,     0,     0,     0,     0,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    58,
      59,    29,     0,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     2,   358,     3,
       0,     0,     0,     0,     6,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     0,     0,     0,     0,     0,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    58,
      59,    29,     0,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
     360,     0,     0,     0,     6,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     0,     0,     0,     0,     0,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    58,
      59,    29,     0,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     2,   372,     3,
       0,     0,     0,     0,     6,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     0,     0,     0,     0,     0,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    58,
      59,    29,     0,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     0,     0,     0,     0,     0,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    58,
      59,    29,     0,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     0,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     0,     0,     0,     0,     0,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
      59,    29,     0,    30,     0,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,    49,    50,
      51,    52,     0,     0,    53,     0,     0,     0,     0,     0,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
      59
};

static const yytype_int16 yycheck[] =
{
       9,     4,     2,     3,    61,    27,    54,   162,    53,    53,
      54,   191,    85,   249,    14,   137,    16,    55,    56,    28,
       5,   152,     7,     3,   115,    50,     4,    12,    30,   100,
     101,     4,     6,     3,     6,     4,    36,     4,     9,     8,
       6,    83,   115,     4,    94,    87,    91,    91,    45,    99,
     349,   350,   351,     4,    74,    52,    65,    57,     9,    84,
      45,     5,    23,   105,    49,   364,    51,    52,    53,    54,
      55,    56,    57,    58,   112,    60,    50,    74,    50,    50,
      46,     5,     4,    53,   109,     5,    59,    10,    10,    74,
       5,    76,    77,    78,    79,   186,   227,    82,     4,    22,
     145,   145,     8,    88,    89,    90,    91,     4,   110,   147,
      84,     8,    84,    84,    92,   124,    85,    75,    85,    77,
     242,   121,   107,   108,   255,   173,   106,   426,     4,   173,
       3,     4,     8,    45,   134,   109,   136,   109,   109,    32,
      52,   189,     4,   188,   188,   189,     8,     0,     4,   187,
       6,     9,   152,     5,     5,     7,   178,   230,    15,     3,
      17,     5,    74,     7,    31,    32,    33,    34,    12,     7,
      15,   216,   216,   103,   174,   355,    31,    32,   222,    24,
      25,     4,   182,     6,    93,   233,    38,    35,    36,   233,
     190,   236,   236,   238,   238,   431,     4,   352,     6,    51,
     248,    45,     3,     4,   248,    49,   104,    51,    52,    53,
      54,    55,    56,    57,    95,    96,    97,    98,    63,   219,
     102,     4,    67,     6,    76,    86,    78,   227,    35,    36,
      74,   231,    76,    77,    78,    79,    45,     4,    82,     6,
     240,    83,    84,    52,    88,    89,    90,    91,     3,     4,
      95,   340,    82,    57,   106,   255,   345,   346,    79,    80,
      81,   261,     5,   107,   108,    74,     5,    76,    77,    78,
      79,   179,   180,   181,     4,    74,     6,    74,   367,   368,
      89,    90,    74,     7,   106,   323,    38,    74,     3,   362,
      74,     5,     9,    22,     7,    74,   106,    74,   107,   108,
      74,   349,   350,   351,     5,   349,   350,   351,     5,   331,
     310,     5,   356,    74,   314,     4,   364,   326,     4,   328,
     364,    85,    50,     8,    74,     4,     6,    74,   401,   329,
      74,     4,   332,    74,    74,   383,     3,     9,   347,   383,
       6,     4,   387,   387,    14,    37,    24,    75,    76,    77,
      78,    79,    80,    81,    85,     3,    84,     4,    85,    85,
       6,     6,    74,   372,    74,     9,    94,    95,    96,    97,
      98,    99,   100,   101,    10,   423,   421,   421,   426,   423,
     402,   109,   426,     3,     6,     3,    10,   409,   341,   445,
     423,   383,   334,   135,   451,   115,   115,   406,   362,   408,
     277,   410,    21,   404,   413,   171,     3,   132,     5,   163,
       7,   411,     9,   421,    11,    12,    13,   257,    15,    16,
      17,    18,    19,    20,    21,   336,   186,   186,    25,    26,
      27,    28,    29,    30,   437,   186,   396,   186,   194,   448,
     449,   199,    39,    40,    41,    42,   192,    44,    45,   214,
      47,    48,    49,   210,    51,    52,    53,    54,    55,    56,
      57,   193,   195,    91,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,   196,   356,    74,   215,    76,
      77,    78,    79,    -1,   207,    82,   204,   149,    -1,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,   108,     3,    -1,     5,    -1,     7,    -1,     9,    10,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    74,    -1,    76,    77,    78,    79,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,     3,    -1,
       5,    -1,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    74,
      -1,    76,    77,    78,    79,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
      -1,     9,   107,   108,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,     3,    -1,     5,    -1,     7,
      88,    89,    90,    91,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,   107,
     108,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,   107,
     108,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,   107,
     108,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,   107,
     108,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,   107,
     108,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,   107,
     108,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,   107,
     108,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,   107,
     108,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,   107,
     108,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,   107,
     108,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
     108,    49,    -1,    51,    -1,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
      78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
     108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    39,    40,    41,    42,    44,    45,    47,    48,    49,
      51,    52,    53,    54,    55,    56,    57,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    74,    76,
      77,    78,    79,    82,    88,    89,    90,    91,   107,   108,
     117,   118,   119,   120,   121,   125,   128,   129,   130,   138,
     139,   140,   142,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   160,   161,   162,   163,   164,   175,
     176,   179,   180,   181,   187,   188,   191,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   218,   221,   222,   223,   225,   226,     6,   156,
       8,    85,   156,    10,   125,    31,    32,    33,    34,   127,
     169,   170,   171,   172,     5,   140,     5,     5,     5,   156,
     172,     3,   156,   169,   126,   172,   172,   157,   140,    74,
     217,   216,    58,    60,   156,   224,    74,   131,   133,   182,
     183,   185,   186,   187,   131,   132,   138,   138,   156,     0,
     119,   172,   140,   172,     5,     3,    53,     3,     4,    50,
      84,   109,     7,   160,    89,    90,   133,   178,   215,   172,
      83,    87,   105,    93,   103,   104,   102,    94,    99,   196,
      95,    96,    97,    98,   197,   100,   101,   198,    75,    77,
     199,    79,    80,    81,   200,    86,    82,   216,   138,     7,
      38,    51,   106,   158,   160,   162,   221,    57,     6,   156,
       8,    85,    10,     5,   165,   170,    35,    36,   173,   156,
     148,   156,   155,    74,     9,    74,   141,     3,     5,   166,
     133,    74,   138,   217,   224,    59,   158,    38,    83,    84,
     184,     7,   163,   185,    92,    35,   173,   174,   131,   156,
       3,   157,   164,   164,   164,     8,   156,    50,    84,    94,
      99,   109,   159,   177,   197,   198,   199,   200,   221,   138,
     133,   131,   156,   201,   202,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   133,    74,   133,   219,
       5,   220,   224,     8,     7,   160,     8,   156,   131,   134,
     135,     6,    46,   167,   133,   133,     6,   156,     6,   155,
       4,    85,    22,   144,   145,     9,   131,   136,   137,   167,
      74,   106,   168,   224,   183,    74,    74,     6,   165,     5,
       5,     5,    74,   192,   193,    85,     4,     8,     6,   156,
       8,     8,    74,   194,     4,     6,   138,    74,    74,   140,
       3,   140,     6,   156,    74,   157,   156,    10,   144,    74,
     124,   194,   195,     4,     3,   168,   124,     9,   168,   168,
     140,     6,   134,   134,   134,   163,     4,   202,   219,     6,
     160,   161,    85,   134,   168,   168,    14,   140,     6,    85,
       6,    23,   143,    24,   146,     4,    10,   136,     8,    74,
     133,   189,   190,    37,   122,     3,     4,     6,     6,   192,
     157,   166,   140,   140,   157,   140,   156,    85,   140,    74,
       3,    74,   190,    10,   132,     9,   134,   167,     6,   125,
       3,   118,   123,     6,     3,   140,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   116,   117,   117,   118,   118,   119,   119,   119,   119,
     119,   119,   119,   120,   120,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   127,   128,   129,   129,   130,
     131,   131,   132,   133,   134,   134,   135,   135,   136,   137,
     137,   138,   138,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   141,   141,   142,   143,   143,   144,   145,
     145,   146,   146,   147,   148,   148,   149,   149,   149,   149,
     149,   149,   149,   150,   151,   152,   152,   153,   153,   154,
     154,   154,   154,   155,   155,   156,   156,   157,   157,   157,
     157,   158,   158,   159,   159,   159,   159,   160,   160,   160,
     161,   161,   161,   162,   162,   162,   163,   163,   164,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   169,   170,
     170,   171,   171,   172,   172,   172,   172,   173,   173,   174,
     174,   175,   176,   177,   177,   177,   177,   177,   178,   178,
     178,   178,   179,   179,   180,   181,   181,   181,   182,   183,
     183,   184,   184,   184,   185,   186,   186,   187,   187,   188,
     188,   189,   189,   190,   190,   191,   192,   192,   193,   193,
     194,   194,   194,   195,   195,   196,   196,   197,   197,   197,
     197,   198,   198,   199,   199,   200,   200,   200,   201,   201,
     202,   202,   202,   203,   203,   204,   204,   205,   205,   206,
     206,   207,   207,   208,   208,   209,   209,   210,   210,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   215,   215,
     215,   215,   215,   215,   216,   216,   216,   216,   216,   216,
     216,   217,   217,   218,   218,   219,   219,   220,   220,   221,
     221,   222,   223,   223,   223,   223,   223,   223,   223,   224,
     224,   224,   225,   225,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     9,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     5,     5,     1,     1,     6,
       2,     1,     1,     1,     4,     2,     1,     3,     2,     1,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     6,     2,     0,     5,     1,
       2,     2,     0,     6,     1,     1,     5,     5,     6,     7,
       7,     9,     5,     3,     2,     5,     7,     1,     1,     3,
       2,     3,     2,     2,     1,     1,     3,     1,     3,     3,
       3,     3,     0,     1,     1,     1,     1,     3,     4,     5,
       2,     3,     2,     5,     4,     4,     1,     1,     1,     4,
       2,     1,     2,     1,     2,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     0,     1,
       1,     5,     9,     1,     1,     1,     1,     1,     7,     5,
       5,     4,     1,     2,     3,     1,     1,     1,     2,     1,
       3,     1,     1,     0,     2,     1,     2,     1,     1,     1,
       1,     2,     3,     1,     2,     7,     3,     1,     1,     2,
       1,     2,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     5,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     1,     1,     3,     3,     2,     1,
       1,     3,     1,     2,     2,     3,     2,     2,     1,     1,
       2,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

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

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, arg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Scanner* arg)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Scanner* arg)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, arg);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, Scanner* arg)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), arg);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif



static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yystrlen (yysymbol_name (yyarg[yyi]));
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp = yystpcpy (yyp, yysymbol_name (yyarg[yyi++]));
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Scanner* arg)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_ast: /* ast  */
#line 160 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1945 "src/parser.c"
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
/* Lookahead token kind.  */
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
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scan);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  case 2: /* prg: ast  */
#line 163 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2249 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 164 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2255 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 167 "src/gwion.y"
            { (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2261 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 168 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2267 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 172 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2273 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 173 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2279 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 174 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2285 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 175 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2291 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 176 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2297 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 177 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2303 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 178 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2309 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 181 "src/gwion.y"
                  { (yyval.cflag) = cflag_none; }
#line 2315 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 181 "src/gwion.y"
                                                { (yyval.cflag) = cflag_struct; }
#line 2321 "src/parser.c"
    break;

  case 15: /* class_def: class_type flag modifier "<identifier>" decl_template class_ext "{" class_body "}"  */
#line 184 "src/gwion.y"
    {
      if((yyvsp[-8].cflag) == cflag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-8].cflag) | (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), (yyloc));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      if((yyvsp[-8].cflag))
        (yyval.class_def)->cflag |= cflag_struct;
  }
#line 2335 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 194 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2341 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 194 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2347 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 196 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2353 "src/parser.c"
    break;

  case 20: /* id_list: "<identifier>"  */
#line 198 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2359 "src/parser.c"
    break;

  case 21: /* id_list: id_list "," "<identifier>"  */
#line 199 "src/gwion.y"
                           { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2365 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 201 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2371 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt_list stmt  */
#line 202 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2377 "src/parser.c"
    break;

  case 24: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 204 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2384 "src/parser.c"
    break;

  case 25: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 207 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2391 "src/parser.c"
    break;

  case 26: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 210 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2401 "src/parser.c"
    break;

  case 27: /* type_def_type: "typedef"  */
#line 216 "src/gwion.y"
                         { (yyval.ival) = 0; }
#line 2407 "src/parser.c"
    break;

  case 28: /* type_def_type: "distinct"  */
#line 216 "src/gwion.y"
                                                  { (yyval.ival) = 1; }
#line 2413 "src/parser.c"
    break;

  case 29: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template ";"  */
#line 217 "src/gwion.y"
                                                                        {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
  (yyval.type_def)->distinct = (yyvsp[-5].ival);
}
#line 2425 "src/parser.c"
    break;

  case 30: /* type_decl_array: type_decl array  */
#line 225 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2431 "src/parser.c"
    break;

  case 32: /* type_decl_exp: type_decl_array  */
#line 227 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2439 "src/parser.c"
    break;

  case 33: /* type_decl_empty: type_decl_array  */
#line 231 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2447 "src/parser.c"
    break;

  case 34: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 236 "src/gwion.y"
                                            { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2453 "src/parser.c"
    break;

  case 35: /* arg: type_decl_array arg_decl  */
#line 237 "src/gwion.y"
                             { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2459 "src/parser.c"
    break;

  case 36: /* arg_list: arg  */
#line 239 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2465 "src/parser.c"
    break;

  case 37: /* arg_list: arg_list "," arg  */
#line 240 "src/gwion.y"
                        {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
   }
#line 2475 "src/parser.c"
    break;

  case 38: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 246 "src/gwion.y"
                                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2481 "src/parser.c"
    break;

  case 39: /* fptr_list: fptr_arg  */
#line 247 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2487 "src/parser.c"
    break;

  case 40: /* fptr_list: fptr_list "," fptr_arg  */
#line 247 "src/gwion.y"
                                                                           { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2493 "src/parser.c"
    break;

  case 41: /* code_stmt: "{" "}"  */
#line 250 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2499 "src/parser.c"
    break;

  case 42: /* code_stmt: "{" stmt_list "}"  */
#line 251 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2505 "src/parser.c"
    break;

  case 43: /* stmt_pp: "<comment>"  */
#line 255 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2511 "src/parser.c"
    break;

  case 44: /* stmt_pp: "#include"  */
#line 256 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2517 "src/parser.c"
    break;

  case 45: /* stmt_pp: "#define"  */
#line 257 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2523 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#pragma"  */
#line 258 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2529 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#undef"  */
#line 259 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2535 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#ifdef"  */
#line 260 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2541 "src/parser.c"
    break;

  case 49: /* stmt_pp: "#ifndef"  */
#line 261 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2547 "src/parser.c"
    break;

  case 50: /* stmt_pp: "#else"  */
#line 262 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2553 "src/parser.c"
    break;

  case 51: /* stmt_pp: "#if"  */
#line 263 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2559 "src/parser.c"
    break;

  case 52: /* stmt_pp: "\n"  */
#line 264 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2565 "src/parser.c"
    break;

  case 53: /* stmt_pp: "require"  */
#line 265 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), (yyloc)); }
#line 2571 "src/parser.c"
    break;

  case 64: /* opt_id: %empty  */
#line 280 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2577 "src/parser.c"
    break;

  case 65: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 283 "src/gwion.y"
                                           {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2587 "src/parser.c"
    break;

  case 66: /* when_exp: "when" exp  */
#line 289 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2593 "src/parser.c"
    break;

  case 67: /* when_exp: %empty  */
#line 289 "src/gwion.y"
                                               { (yyval.exp) = NULL; }
#line 2599 "src/parser.c"
    break;

  case 68: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 292 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 2612 "src/parser.c"
    break;

  case 69: /* match_list: match_case_stmt  */
#line 302 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2618 "src/parser.c"
    break;

  case 70: /* match_list: match_list match_case_stmt  */
#line 303 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2624 "src/parser.c"
    break;

  case 71: /* where_stmt: "where" stmt  */
#line 305 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2630 "src/parser.c"
    break;

  case 72: /* where_stmt: %empty  */
#line 305 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2636 "src/parser.c"
    break;

  case 73: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 307 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 2649 "src/parser.c"
    break;

  case 74: /* flow: "while"  */
#line 317 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2655 "src/parser.c"
    break;

  case 75: /* flow: "until"  */
#line 318 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2661 "src/parser.c"
    break;

  case 76: /* loop_stmt: flow "(" exp ")" stmt  */
#line 322 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2667 "src/parser.c"
    break;

  case 77: /* loop_stmt: "do" stmt flow exp ";"  */
#line 324 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1, (yyloc)); LIST_REM((yyvsp[-2].ival)) }
#line 2673 "src/parser.c"
    break;

  case 78: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 326 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 2679 "src/parser.c"
    break;

  case 79: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 328 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2685 "src/parser.c"
    break;

  case 80: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 330 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2691 "src/parser.c"
    break;

  case 81: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" binary_exp ")" stmt  */
#line 332 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); (yyval.stmt)->d.stmt_each.idx = (yyvsp[-6].sym); }
#line 2697 "src/parser.c"
    break;

  case 82: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 334 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2703 "src/parser.c"
    break;

  case 83: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 337 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2709 "src/parser.c"
    break;

  case 84: /* defer_stmt: "defer" stmt  */
#line 339 "src/gwion.y"
                         { (yyval.stmt) = new_stmt_defer(mpool(arg), (yyvsp[0].stmt), (yyloc)); }
#line 2715 "src/parser.c"
    break;

  case 85: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 343 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2721 "src/parser.c"
    break;

  case 86: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 345 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 2727 "src/parser.c"
    break;

  case 87: /* breaks: "break"  */
#line 348 "src/gwion.y"
                  { (yyval.ival) = ae_stmt_break; }
#line 2733 "src/parser.c"
    break;

  case 88: /* breaks: "continue"  */
#line 348 "src/gwion.y"
                                                      { (yyval.ival) = ae_stmt_continue; }
#line 2739 "src/parser.c"
    break;

  case 89: /* jump_stmt: "return" exp ";"  */
#line 350 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2745 "src/parser.c"
    break;

  case 90: /* jump_stmt: "return" ";"  */
#line 351 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 2751 "src/parser.c"
    break;

  case 91: /* jump_stmt: breaks "<integer>" ";"  */
#line 352 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 2757 "src/parser.c"
    break;

  case 92: /* jump_stmt: breaks ";"  */
#line 353 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 2763 "src/parser.c"
    break;

  case 93: /* exp_stmt: exp ";"  */
#line 357 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2769 "src/parser.c"
    break;

  case 94: /* exp_stmt: ";"  */
#line 358 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 2775 "src/parser.c"
    break;

  case 95: /* exp: binary_exp  */
#line 362 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 2781 "src/parser.c"
    break;

  case 96: /* exp: exp "," binary_exp  */
#line 363 "src/gwion.y"
                         { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 2787 "src/parser.c"
    break;

  case 98: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 367 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2793 "src/parser.c"
    break;

  case 99: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 368 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2799 "src/parser.c"
    break;

  case 100: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 369 "src/gwion.y"
                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2805 "src/parser.c"
    break;

  case 101: /* call_template: ":[" type_list "]"  */
#line 372 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2811 "src/parser.c"
    break;

  case 102: /* call_template: %empty  */
#line 372 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2817 "src/parser.c"
    break;

  case 107: /* array_exp: "[" exp "]"  */
#line 377 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 2823 "src/parser.c"
    break;

  case 108: /* array_exp: "[" exp "]" array_exp  */
#line 378 "src/gwion.y"
                                {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 2832 "src/parser.c"
    break;

  case 109: /* array_exp: "[" exp "]" "[" "]"  */
#line 382 "src/gwion.y"
                                     { LIST_REM(2) gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2838 "src/parser.c"
    break;

  case 110: /* array_empty: "[" "]"  */
#line 386 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2844 "src/parser.c"
    break;

  case 111: /* array_empty: array_empty "[" "]"  */
#line 387 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2850 "src/parser.c"
    break;

  case 112: /* array_empty: array_empty array_exp  */
#line 388 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2856 "src/parser.c"
    break;

  case 113: /* range: "[" exp ":" exp "]"  */
#line 392 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM(2) LIST_REM((yyvsp[-1].exp)) }
#line 2862 "src/parser.c"
    break;

  case 114: /* range: "[" exp ":" "]"  */
#line 393 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 2868 "src/parser.c"
    break;

  case 115: /* range: "[" ":" exp "]"  */
#line 394 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 2874 "src/parser.c"
    break;

  case 119: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 400 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2880 "src/parser.c"
    break;

  case 120: /* func_args: "(" arg_list  */
#line 402 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 2886 "src/parser.c"
    break;

  case 121: /* func_args: "("  */
#line 402 "src/gwion.y"
                                                                { (yyval.arg_list) = NULL; }
#line 2892 "src/parser.c"
    break;

  case 122: /* fptr_args: "(" fptr_list  */
#line 403 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 2898 "src/parser.c"
    break;

  case 123: /* fptr_args: "("  */
#line 403 "src/gwion.y"
                                                               { (yyval.arg_list) = NULL; }
#line 2904 "src/parser.c"
    break;

  case 124: /* arg_type: "..." ")"  */
#line 404 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 2910 "src/parser.c"
    break;

  case 125: /* arg_type: ")"  */
#line 404 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 2916 "src/parser.c"
    break;

  case 126: /* decl_template: ":[" id_list "]"  */
#line 406 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); LIST_REM(2) }
#line 2922 "src/parser.c"
    break;

  case 127: /* decl_template: %empty  */
#line 406 "src/gwion.y"
                                                              { (yyval.id_list) = NULL; }
#line 2928 "src/parser.c"
    break;

  case 128: /* global: "global"  */
#line 408 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = 1; }
#line 2934 "src/parser.c"
    break;

  case 129: /* storage_flag: "static"  */
#line 410 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2940 "src/parser.c"
    break;

  case 131: /* access_flag: "private"  */
#line 412 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2946 "src/parser.c"
    break;

  case 132: /* access_flag: "protect"  */
#line 413 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2952 "src/parser.c"
    break;

  case 133: /* flag: access_flag  */
#line 416 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2958 "src/parser.c"
    break;

  case 134: /* flag: storage_flag  */
#line 417 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2964 "src/parser.c"
    break;

  case 135: /* flag: access_flag storage_flag  */
#line 418 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2970 "src/parser.c"
    break;

  case 136: /* flag: %empty  */
#line 419 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 2976 "src/parser.c"
    break;

  case 137: /* final: "final"  */
#line 422 "src/gwion.y"
             { (yyval.flag) = ae_flag_final; }
#line 2982 "src/parser.c"
    break;

  case 138: /* final: %empty  */
#line 422 "src/gwion.y"
                                       { (yyval.flag) = ae_flag_none; }
#line 2988 "src/parser.c"
    break;

  case 139: /* modifier: "abstract"  */
#line 424 "src/gwion.y"
                   { (yyval.flag) = ae_flag_abstract; }
#line 2994 "src/parser.c"
    break;

  case 141: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 427 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), (yyloc));
  }
#line 3004 "src/parser.c"
    break;

  case 142: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 435 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract);
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL, (yyloc));
    }
#line 3016 "src/parser.c"
    break;

  case 148: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 446 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 3022 "src/parser.c"
    break;

  case 149: /* op_base: type_decl_empty post_op "(" arg ")"  */
#line 448 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-1].arg_list), ae_flag_none); }
#line 3028 "src/parser.c"
    break;

  case 150: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 450 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 3037 "src/parser.c"
    break;

  case 151: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 455 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3046 "src/parser.c"
    break;

  case 152: /* operator: "operator"  */
#line 460 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 3052 "src/parser.c"
    break;

  case 153: /* operator: "operator" global  */
#line 460 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 3058 "src/parser.c"
    break;

  case 154: /* op_def: operator op_base code_stmt  */
#line 462 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt), (yyloc)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3064 "src/parser.c"
    break;

  case 157: /* func_def: op_def  */
#line 464 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 3070 "src/parser.c"
    break;

  case 158: /* type_decl_tmpl: "<identifier>" call_template  */
#line 467 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3076 "src/parser.c"
    break;

  case 160: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 472 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3082 "src/parser.c"
    break;

  case 161: /* option: "?"  */
#line 475 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3088 "src/parser.c"
    break;

  case 162: /* option: OPTIONS  */
#line 475 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3094 "src/parser.c"
    break;

  case 163: /* option: %empty  */
#line 475 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3100 "src/parser.c"
    break;

  case 164: /* type_decl_opt: type_decl_noflag option  */
#line 476 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option |= (yyvsp[0].uval); }
#line 3106 "src/parser.c"
    break;

  case 166: /* type_decl: type_decl_flag type_decl_opt  */
#line 477 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3112 "src/parser.c"
    break;

  case 167: /* type_decl_flag: "LATE"  */
#line 480 "src/gwion.y"
         { (yyval.flag) = ae_flag_late; }
#line 3118 "src/parser.c"
    break;

  case 168: /* type_decl_flag: "const"  */
#line 481 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 3124 "src/parser.c"
    break;

  case 169: /* type_decl_flag2: "var"  */
#line 483 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3130 "src/parser.c"
    break;

  case 171: /* union_decl: "<identifier>" ";"  */
#line 486 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yyloc));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yyloc));
}
#line 3139 "src/parser.c"
    break;

  case 172: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 490 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 3145 "src/parser.c"
    break;

  case 174: /* union_list: union_decl union_list  */
#line 493 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 3151 "src/parser.c"
    break;

  case 175: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 496 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yyloc));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 3163 "src/parser.c"
    break;

  case 176: /* var_decl_list: var_decl "," var_decl_list  */
#line 506 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3169 "src/parser.c"
    break;

  case 177: /* var_decl_list: var_decl  */
#line 507 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3175 "src/parser.c"
    break;

  case 178: /* var_decl: "<identifier>"  */
#line 510 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3181 "src/parser.c"
    break;

  case 179: /* var_decl: "<identifier>" array  */
#line 511 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3187 "src/parser.c"
    break;

  case 180: /* arg_decl: "<identifier>"  */
#line 513 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3193 "src/parser.c"
    break;

  case 181: /* arg_decl: "<identifier>" array_empty  */
#line 514 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3199 "src/parser.c"
    break;

  case 182: /* arg_decl: "<identifier>" array_exp  */
#line 515 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3205 "src/parser.c"
    break;

  case 184: /* fptr_arg_decl: %empty  */
#line 516 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3211 "src/parser.c"
    break;

  case 198: /* opt_exp: exp  */
#line 524 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3217 "src/parser.c"
    break;

  case 199: /* opt_exp: %empty  */
#line 524 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3223 "src/parser.c"
    break;

  case 201: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 527 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3229 "src/parser.c"
    break;

  case 202: /* con_exp: log_or_exp "?:" con_exp  */
#line 529 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3235 "src/parser.c"
    break;

  case 204: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 531 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3241 "src/parser.c"
    break;

  case 206: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 532 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3247 "src/parser.c"
    break;

  case 208: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 533 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3253 "src/parser.c"
    break;

  case 210: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 534 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3259 "src/parser.c"
    break;

  case 212: /* and_exp: and_exp "&" eq_exp  */
#line 535 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3265 "src/parser.c"
    break;

  case 214: /* eq_exp: eq_exp eq_op rel_exp  */
#line 536 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3271 "src/parser.c"
    break;

  case 216: /* rel_exp: rel_exp rel_op shift_exp  */
#line 537 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3277 "src/parser.c"
    break;

  case 218: /* shift_exp: shift_exp shift_op add_exp  */
#line 538 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3283 "src/parser.c"
    break;

  case 220: /* add_exp: add_exp add_op mul_exp  */
#line 539 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3289 "src/parser.c"
    break;

  case 222: /* mul_exp: mul_exp mul_op dur_exp  */
#line 540 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3295 "src/parser.c"
    break;

  case 224: /* dur_exp: dur_exp "::" cast_exp  */
#line 541 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3301 "src/parser.c"
    break;

  case 226: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 544 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3307 "src/parser.c"
    break;

  case 235: /* unary_exp: unary_op unary_exp  */
#line 551 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3313 "src/parser.c"
    break;

  case 236: /* unary_exp: OPID_E unary_exp  */
#line 552 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3319 "src/parser.c"
    break;

  case 237: /* unary_exp: "new" type_decl_exp  */
#line 553 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), (yyloc)); }
#line 3325 "src/parser.c"
    break;

  case 238: /* unary_exp: "spork" code_stmt  */
#line 554 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3331 "src/parser.c"
    break;

  case 239: /* unary_exp: "fork" code_stmt  */
#line 555 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3337 "src/parser.c"
    break;

  case 240: /* unary_exp: "$" type_decl_empty  */
#line 556 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yyloc)); }
#line 3343 "src/parser.c"
    break;

  case 241: /* lambda_list: "<identifier>"  */
#line 559 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)), NULL); }
#line 3349 "src/parser.c"
    break;

  case 242: /* lambda_list: "<identifier>" lambda_list  */
#line 560 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yyloc)), (yyvsp[0].arg_list)); }
#line 3355 "src/parser.c"
    break;

  case 243: /* lambda_arg: "\\" lambda_list  */
#line 561 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3361 "src/parser.c"
    break;

  case 244: /* lambda_arg: "\\"  */
#line 561 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3367 "src/parser.c"
    break;

  case 245: /* type_list: type_decl_empty  */
#line 564 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3373 "src/parser.c"
    break;

  case 246: /* type_list: type_decl_empty "," type_list  */
#line 565 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3379 "src/parser.c"
    break;

  case 247: /* call_paren: "(" exp ")"  */
#line 569 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3385 "src/parser.c"
    break;

  case 248: /* call_paren: "(" ")"  */
#line 569 "src/gwion.y"
                                                                         { (yyval.exp) = NULL; }
#line 3391 "src/parser.c"
    break;

  case 251: /* dot_exp: post_exp "." "<identifier>"  */
#line 573 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    gwion_error(&(yyloc), arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3404 "src/parser.c"
    break;

  case 253: /* post_exp: post_exp array_exp  */
#line 584 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3410 "src/parser.c"
    break;

  case 254: /* post_exp: post_exp range  */
#line 586 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3416 "src/parser.c"
    break;

  case 255: /* post_exp: post_exp call_template call_paren  */
#line 588 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3423 "src/parser.c"
    break;

  case 256: /* post_exp: post_exp post_op  */
#line 591 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3429 "src/parser.c"
    break;

  case 257: /* post_exp: post_exp OPID_E  */
#line 593 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3435 "src/parser.c"
    break;

  case 258: /* post_exp: dot_exp  */
#line 594 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3441 "src/parser.c"
    break;

  case 259: /* interp_exp: "<interp string>`"  */
#line 598 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3447 "src/parser.c"
    break;

  case 260: /* interp_exp: "<interp string>" interp_exp  */
#line 599 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3453 "src/parser.c"
    break;

  case 261: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 600 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3459 "src/parser.c"
    break;

  case 262: /* interp: "`" interp_exp  */
#line 602 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3465 "src/parser.c"
    break;

  case 263: /* interp: interp "`" interp_exp  */
#line 603 "src/gwion.y"
                                 {
  if(!(yyvsp[0].exp)->next) {
    char c[strlen((yyvsp[-2].exp)->d.prim.d.str) + strlen((yyvsp[0].exp)->d.prim.d.str) + 1];
    sprintf(c, "%s%s\n", (yyvsp[-2].exp)->d.prim.d.str, (yyvsp[0].exp)->d.prim.d.str);
    (yyvsp[-2].exp)->d.prim.d.str = s_name(insert_symbol(c));
    (yyvsp[-2].exp)->pos.last = (yyvsp[0].exp)->pos.last;
    free_exp(mpool(arg), (yyvsp[0].exp));
  } else
  (yyvsp[-2].exp)->next = (yyvsp[0].exp);
}
#line 3480 "src/parser.c"
    break;

  case 264: /* prim_exp: "<identifier>"  */
#line 615 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3486 "src/parser.c"
    break;

  case 265: /* prim_exp: "<integer>"  */
#line 616 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 3492 "src/parser.c"
    break;

  case 266: /* prim_exp: FLOATT  */
#line 617 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 3498 "src/parser.c"
    break;

  case 267: /* prim_exp: interp  */
#line 618 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 3504 "src/parser.c"
    break;

  case 268: /* prim_exp: "<litteral string>"  */
#line 619 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3510 "src/parser.c"
    break;

  case 269: /* prim_exp: "<litteral char>"  */
#line 620 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3516 "src/parser.c"
    break;

  case 270: /* prim_exp: array  */
#line 621 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 3522 "src/parser.c"
    break;

  case 271: /* prim_exp: range  */
#line 622 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 3528 "src/parser.c"
    break;

  case 272: /* prim_exp: "<<<" exp ">>>"  */
#line 623 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 3534 "src/parser.c"
    break;

  case 273: /* prim_exp: "(" exp ")"  */
#line 624 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3540 "src/parser.c"
    break;

  case 274: /* prim_exp: lambda_arg code_stmt  */
#line 625 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yyloc)); }
#line 3546 "src/parser.c"
    break;

  case 275: /* prim_exp: "(" ")"  */
#line 626 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 3552 "src/parser.c"
    break;


#line 3556 "src/parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, arg, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, arg);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, arg, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, arg);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 628 "src/gwion.y"

