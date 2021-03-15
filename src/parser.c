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
#define gwion_error(a,b,c) parser_error(a,b,c, 0200)
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

ANN static int parser_error(loc_t*, Scanner*const, const char *, const uint);
ANN Symbol lambda_name(const Scanner*);

#line 106 "src/parser.c"

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
  YYSYMBOL_typedef_when = 129,             /* typedef_when  */
  YYSYMBOL_type_def_type = 130,            /* type_def_type  */
  YYSYMBOL_type_def = 131,                 /* type_def  */
  YYSYMBOL_type_decl_array = 132,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 133,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 134,          /* type_decl_empty  */
  YYSYMBOL_arg = 135,                      /* arg  */
  YYSYMBOL_arg_list = 136,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 137,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 138,                /* fptr_list  */
  YYSYMBOL_code_stmt = 139,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 140,                  /* stmt_pp  */
  YYSYMBOL_stmt = 141,                     /* stmt  */
  YYSYMBOL_opt_id = 142,                   /* opt_id  */
  YYSYMBOL_enum_def = 143,                 /* enum_def  */
  YYSYMBOL_when_exp = 144,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 145,          /* match_case_stmt  */
  YYSYMBOL_match_list = 146,               /* match_list  */
  YYSYMBOL_where_stmt = 147,               /* where_stmt  */
  YYSYMBOL_match_stmt = 148,               /* match_stmt  */
  YYSYMBOL_flow = 149,                     /* flow  */
  YYSYMBOL_loop_stmt = 150,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 151,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 152,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 153,           /* selection_stmt  */
  YYSYMBOL_breaks = 154,                   /* breaks  */
  YYSYMBOL_jump_stmt = 155,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 156,                 /* exp_stmt  */
  YYSYMBOL_exp = 157,                      /* exp  */
  YYSYMBOL_binary_exp = 158,               /* binary_exp  */
  YYSYMBOL_call_template = 159,            /* call_template  */
  YYSYMBOL_op = 160,                       /* op  */
  YYSYMBOL_array_exp = 161,                /* array_exp  */
  YYSYMBOL_array_empty = 162,              /* array_empty  */
  YYSYMBOL_range = 163,                    /* range  */
  YYSYMBOL_array = 164,                    /* array  */
  YYSYMBOL_decl_exp = 165,                 /* decl_exp  */
  YYSYMBOL_func_args = 166,                /* func_args  */
  YYSYMBOL_fptr_args = 167,                /* fptr_args  */
  YYSYMBOL_arg_type = 168,                 /* arg_type  */
  YYSYMBOL_decl_template = 169,            /* decl_template  */
  YYSYMBOL_global = 170,                   /* global  */
  YYSYMBOL_storage_flag = 171,             /* storage_flag  */
  YYSYMBOL_access_flag = 172,              /* access_flag  */
  YYSYMBOL_flag = 173,                     /* flag  */
  YYSYMBOL_final = 174,                    /* final  */
  YYSYMBOL_modifier = 175,                 /* modifier  */
  YYSYMBOL_func_def_base = 176,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 177,            /* abstract_fdef  */
  YYSYMBOL_op_op = 178,                    /* op_op  */
  YYSYMBOL_op_base = 179,                  /* op_base  */
  YYSYMBOL_operator = 180,                 /* operator  */
  YYSYMBOL_op_def = 181,                   /* op_def  */
  YYSYMBOL_func_def = 182,                 /* func_def  */
  YYSYMBOL_type_decl_tmpl = 183,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 184,         /* type_decl_noflag  */
  YYSYMBOL_option = 185,                   /* option  */
  YYSYMBOL_type_decl_opt = 186,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 187,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 188,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 189,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 190,               /* union_decl  */
  YYSYMBOL_union_list = 191,               /* union_list  */
  YYSYMBOL_union_def = 192,                /* union_def  */
  YYSYMBOL_var_decl_list = 193,            /* var_decl_list  */
  YYSYMBOL_var_decl = 194,                 /* var_decl  */
  YYSYMBOL_arg_decl = 195,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 196,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 197,                    /* eq_op  */
  YYSYMBOL_rel_op = 198,                   /* rel_op  */
  YYSYMBOL_shift_op = 199,                 /* shift_op  */
  YYSYMBOL_add_op = 200,                   /* add_op  */
  YYSYMBOL_mul_op = 201,                   /* mul_op  */
  YYSYMBOL_opt_exp = 202,                  /* opt_exp  */
  YYSYMBOL_con_exp = 203,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 204,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 205,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 206,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 207,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 208,                  /* and_exp  */
  YYSYMBOL_eq_exp = 209,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 210,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 211,                /* shift_exp  */
  YYSYMBOL_add_exp = 212,                  /* add_exp  */
  YYSYMBOL_mul_exp = 213,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 214,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 215,                 /* cast_exp  */
  YYSYMBOL_unary_op = 216,                 /* unary_op  */
  YYSYMBOL_unary_exp = 217,                /* unary_exp  */
  YYSYMBOL_lambda_list = 218,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 219,               /* lambda_arg  */
  YYSYMBOL_type_list = 220,                /* type_list  */
  YYSYMBOL_call_paren = 221,               /* call_paren  */
  YYSYMBOL_post_op = 222,                  /* post_op  */
  YYSYMBOL_dot_exp = 223,                  /* dot_exp  */
  YYSYMBOL_post_exp = 224,                 /* post_exp  */
  YYSYMBOL_interp_exp = 225,               /* interp_exp  */
  YYSYMBOL_interp = 226,                   /* interp  */
  YYSYMBOL_prim_exp = 227                  /* prim_exp  */
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
#define YYFINAL  170
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1649

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  116
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  112
/* YYNRULES -- Number of rules.  */
#define YYNRULES  278
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  463

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
       0,   164,   164,   165,   168,   169,   173,   174,   175,   176,
     177,   178,   179,   182,   182,   184,   195,   195,   197,   197,
     199,   200,   202,   203,   205,   208,   211,   218,   218,   219,
     219,   220,   229,   229,   231,   235,   240,   241,   243,   244,
     250,   251,   251,   254,   255,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   284,   284,   287,   293,   293,
     296,   306,   307,   309,   309,   311,   321,   322,   325,   327,
     329,   331,   333,   335,   337,   341,   343,   346,   348,   352,
     352,   354,   355,   356,   357,   361,   362,   366,   367,   370,
     371,   372,   373,   376,   376,   378,   378,   378,   378,   381,
     382,   386,   390,   391,   392,   396,   397,   398,   401,   401,
     403,   404,   406,   406,   407,   407,   408,   408,   410,   410,
     412,   414,   414,   416,   417,   420,   421,   422,   423,   426,
     426,   428,   428,   431,   438,   447,   447,   447,   447,   447,
     449,   451,   453,   458,   464,   464,   465,   468,   468,   468,
     471,   472,   476,   477,   480,   480,   480,   481,   482,   482,
     485,   486,   488,   488,   491,   495,   497,   498,   501,   511,
     512,   515,   516,   518,   519,   520,   521,   521,   523,   523,
     524,   524,   524,   524,   525,   525,   526,   526,   527,   527,
     527,   529,   529,   530,   531,   533,   536,   536,   537,   537,
     538,   538,   539,   539,   540,   540,   541,   541,   542,   542,
     543,   543,   544,   544,   545,   545,   546,   546,   548,   548,
     551,   551,   551,   552,   552,   552,   552,   555,   556,   557,
     558,   559,   560,   561,   564,   565,   566,   566,   569,   570,
     574,   574,   576,   576,   578,   587,   588,   590,   592,   595,
     597,   599,   603,   604,   605,   607,   608,   620,   621,   622,
     623,   624,   625,   626,   627,   628,   629,   630,   631
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
  "func_base", "fptr_def", "typedef_when", "type_def_type", "type_def",
  "type_decl_array", "type_decl_exp", "type_decl_empty", "arg", "arg_list",
  "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt", "opt_id",
  "enum_def", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "defer_stmt",
  "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "range", "array",
  "decl_exp", "func_args", "fptr_args", "arg_type", "decl_template",
  "global", "storage_flag", "access_flag", "flag", "final", "modifier",
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

#define YYPACT_NINF (-309)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-105)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     414,  -309,   983,   923,   520,   127,  -309,    47,  -309,   723,
    -309,    53,    56,    94,  1463,   127,   803,  -309,  -309,  -309,
    -309,     6,  -309,  -309,   127,   127,  -309,  1463,   723,     7,
    1523,  -309,  -309,  -309,  -309,  -309,   194,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,    15,    15,    97,    97,  1463,  -309,  -309,
     120,   414,  -309,   127,  -309,   723,  -309,   127,  -309,  -309,
    -309,  -309,  -309,  -309,   118,  -309,  -309,  -309,  -309,    37,
    -309,  -309,    89,   -21,  -309,   130,  -309,  -309,  -309,  -309,
    -309,   188,  -309,  -309,  -309,   127,  -309,  -309,    -8,    58,
      82,    68,    92,   -26,    69,    31,    36,    60,   106,   122,
    1523,  -309,    97,  -309,  -309,    32,   143,  -309,  -309,   140,
    -309,  1463,    27,  -309,   626,  -309,  -309,  -309,  -309,   203,
    -309,  -309,   123,   133,  1463,   164,  1463,   863,   142,    46,
     145,  -309,   185,  -309,   216,    15,   149,    21,  -309,     7,
    -309,  -309,   194,  -309,    28,  -309,   108,   155,  -309,  -309,
     192,   134,  -309,   224,   -25,  -309,  -309,  -309,  -309,    24,
    -309,  -309,   189,  -309,    15,  1463,  -309,   231,  -309,  1463,
    1463,  1463,  1463,  1043,  -309,  -309,  -309,  1540,    97,    15,
      15,  1463,  1523,  1523,  1523,  1523,  1523,  1523,  -309,  -309,
    1523,  -309,  -309,  -309,  -309,  1523,  -309,  -309,  1523,  -309,
    -309,  1523,  -309,  -309,  -309,  1523,  1523,    15,  -309,  -309,
    1103,   161,  -309,    15,   232,  -309,  -309,  -309,   194,  -309,
      76,   229,  1163,  -309,    15,    45,  -309,    15,  -309,    15,
     176,  1463,   180,   863,    17,   220,  -309,   235,  -309,    15,
      45,   179,   132,  -309,  -309,  -309,   194,  -309,   108,   -25,
    -309,  -309,  -309,  1223,  -309,  -309,  -309,  -309,  -309,   181,
     183,   199,  -309,   -21,  -309,  -309,  -309,  -309,    78,   203,
    -309,  -309,  -309,  -309,  -309,   253,  -309,  -309,  -309,  -309,
     254,  -309,   255,   187,   265,   190,  -309,    58,    82,    68,
      92,   -26,    69,    31,    36,    60,   106,   122,  -309,  -309,
     270,   271,  1283,  -309,  -309,  -309,  1343,  -309,  -309,    90,
     206,  -309,   277,  -309,   280,    97,   214,   215,   723,   223,
     723,  1403,   218,  1463,  1463,  -309,    43,   219,   206,  -309,
     290,   294,   132,   219,   289,  -309,  -309,  -309,   132,   132,
     723,   293,    15,    15,    15,   224,  -309,   296,  1523,    15,
    -309,  -309,   205,  -309,  -309,   224,   226,    15,  -309,  -309,
     132,   132,   295,  -309,  -309,   723,   209,   228,    16,    39,
     279,  -309,  -309,    44,  -309,  -309,    15,  -309,  -309,   125,
      33,   267,   285,  -309,  -309,   310,   309,   311,  -309,   187,
    -309,  -309,  -309,  -309,   130,  1463,  -309,   216,  -309,   723,
    -309,   723,  1463,   723,  1463,   233,   723,  -309,   248,  -309,
    -309,  -309,    20,   249,    33,   314,    15,   319,  1463,   326,
      15,  -309,  -309,  -309,   -21,    45,  -309,  -309,    19,  -309,
     265,   723,  -309,  -309,  -309,   330,  -309,  -309,  -309,   414,
     -21,  -309,   329,   333,   723,   723,  -309,   414,   327,  -309,
    -309,  -309,  -309
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    96,     0,     0,     0,   138,   172,     0,    76,     0,
      77,     0,     0,     0,     0,   138,     0,    89,    90,    13,
      14,   154,    29,    30,   138,   138,   171,     0,     0,   247,
       0,   170,   268,   269,   271,   272,     0,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,   267,   252,
     230,   253,   231,     0,     0,   234,   235,     0,   236,   233,
       0,     2,     4,   138,     8,     6,    11,   138,    12,    59,
      62,    22,     9,    60,     0,    57,    63,    64,    58,     0,
      61,    56,     0,    97,   118,   119,   274,   273,    99,   157,
     158,     0,   159,     7,   173,   138,    10,   120,   203,   206,
     208,   210,   212,   214,   216,   218,   220,   222,   224,   226,
       0,   228,     0,   232,   261,   237,   270,   255,   278,     0,
     112,     0,     0,    43,     0,   131,   130,   133,   134,     0,
     132,   136,   135,   140,     0,     0,     0,     0,     0,     0,
      66,    92,     0,   155,     0,     0,     0,     0,    86,   244,
     246,   239,     0,   262,     0,   265,   104,     0,    35,   243,
     162,   166,   168,    33,     0,    34,   240,   241,   242,     0,
       1,     5,   140,    23,     0,     0,    94,     0,    95,     0,
       0,     0,     0,     0,   114,   234,   235,     0,     0,     0,
       0,   202,     0,     0,     0,     0,     0,     0,   188,   189,
       0,   193,   191,   192,   190,     0,   194,   195,     0,   196,
     197,     0,   198,   199,   200,     0,     0,     0,   238,   277,
       0,     0,   260,     0,     0,   256,   257,   259,     0,   276,
       0,   109,     0,    44,   123,     0,   137,     0,   139,     0,
       0,     0,     0,     0,     0,     0,    65,     0,    91,   125,
       0,     0,   129,    85,   245,   263,     0,   160,   104,     0,
     164,   165,   167,     0,    32,   169,   275,   141,   142,     0,
       0,     0,    93,    98,   100,   102,   101,   113,     0,     0,
     108,   105,   106,   107,   145,     0,   147,   146,   149,   148,
       0,   156,     0,     0,   201,     0,   205,   207,   209,   211,
     213,   215,   217,   219,   221,   223,   225,   227,   229,   254,
     248,     0,     0,   258,   266,   117,     0,   110,   116,     0,
       0,    38,   122,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,   187,    41,
     124,     0,   129,     0,     0,   264,   161,   163,   129,   129,
       0,     0,     0,     0,     0,   181,   121,   180,     0,     0,
     103,   251,     0,   111,   115,   183,    37,     0,   126,   143,
     129,   129,    87,    79,    84,     0,     0,     0,     0,    69,
      74,    72,    20,     0,   186,    40,     0,    26,    24,     0,
       0,    17,    27,    78,   153,     0,     0,     0,   182,     0,
     204,   249,   250,   185,   184,     0,    39,     0,    25,     0,
      80,     0,     0,     0,     0,     0,     0,    75,     0,    67,
      42,   128,   104,     0,   176,     0,     0,     0,     0,     0,
       0,   151,   152,   179,    36,     0,    88,    81,     0,    82,
      68,     0,    73,    21,   174,     0,   177,   178,    16,    19,
      28,    31,     0,     0,     0,    70,   175,    18,     0,   150,
     144,    83,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -309,  -309,  -111,   -56,  -309,  -309,  -309,  -309,    -1,    -3,
    -309,  -309,  -309,  -309,  -309,  -309,   -47,   -83,   -44,  -308,
    -309,   -42,  -309,   -38,  -309,    -9,  -309,  -309,  -309,    11,
    -309,  -309,  -309,   210,  -309,  -309,  -309,  -309,  -309,  -309,
    -124,     0,   -23,  -105,  -309,   -74,   -17,   234,  -157,    -4,
      71,   -55,  -238,  -200,   332,   222,  -309,     9,   184,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,    96,  -309,
     193,  -309,   -27,  -309,  -309,   -66,  -309,   -48,  -309,    22,
    -309,  -309,   174,   175,   177,   178,  -309,  -184,  -309,   182,
     173,   186,   172,   191,   169,   165,   163,   162,   157,   158,
     286,   -15,   227,  -309,    25,  -309,   -73,  -309,  -309,  -132,
    -309,  -309
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    60,    61,    62,    63,    64,   427,   458,   383,    65,
     144,   129,    66,   429,    67,    68,   158,   166,   310,   321,
     322,   339,   340,    69,    70,    71,   247,    72,   415,   335,
     336,   417,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   257,   284,    84,    85,    86,    87,    88,
     235,   250,   325,   344,   130,   131,   132,   133,   239,   269,
      89,    90,   285,   188,    91,    92,    93,   160,   161,   262,
     162,   163,    94,    95,   424,   425,    96,   356,   357,   366,
     385,   200,   205,   208,   211,   215,   295,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   150,   112,   311,   313,   113,   114,   115,   155,
     116,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     135,   124,   119,   122,   147,   171,   264,   165,   296,   159,
     224,   184,   341,   243,   139,   151,   142,   167,   168,   148,
     255,   332,   413,   444,   140,   454,   164,   164,   179,   180,
       4,   179,   179,   145,   146,   231,   154,  -104,   126,   220,
     176,   225,   227,   179,   395,   396,   397,   187,   418,   156,
     179,   323,   134,   380,   419,   245,   173,   169,   136,   406,
      26,   137,   414,   181,   164,   334,   180,    31,   198,   180,
     221,   180,   172,   199,   219,   191,   174,   157,    26,   192,
     179,   149,   179,   222,   315,    31,   231,   256,   182,   156,
     177,   324,   178,   179,   179,   218,   314,   193,   364,   138,
     181,   251,   333,   181,   190,   181,     4,   422,    49,   253,
      51,   209,   232,   210,   290,   173,   266,   157,   164,   331,
     170,   230,   452,   175,   345,   182,   223,   270,   182,   418,
     182,   206,   207,   421,   240,   157,   242,   183,   223,   212,
     213,   214,   388,   293,   179,   292,   229,   164,   391,   392,
     291,   194,   154,   346,   125,   126,   273,   317,   125,   126,
     127,   128,   164,   164,   201,   202,   203,   204,   237,   238,
     407,   408,   196,   308,   400,   271,   274,   275,   276,     8,
     179,    10,   328,   278,   179,   195,   330,   320,   248,   179,
     164,   294,   216,   326,   197,   327,   164,   453,   398,     2,
     228,     3,   338,   179,   217,   350,     6,   164,   234,   179,
     164,   402,   164,   179,   223,   411,   244,   260,   261,   246,
     122,   249,   164,   252,   267,   238,   373,   179,   154,   258,
     259,   263,   319,    26,   272,   309,   316,   312,   343,    26,
      31,   329,   334,    29,   337,    30,    31,    32,    33,    34,
      35,    36,   152,   342,   153,   348,   154,   349,   352,   353,
     354,   355,   156,   278,    49,    50,    51,    52,    48,   179,
      49,    50,    51,    52,   359,   358,    53,   185,   186,   360,
     365,   367,    54,    55,    56,    57,   368,   369,   370,   371,
     157,   403,   377,   382,   386,    58,    59,   387,   390,   394,
     399,    58,    59,   416,   426,   320,   320,   320,   428,   409,
     378,   405,   362,   412,   430,   431,   278,   432,   441,   372,
     320,   374,   443,   445,   447,   164,   164,   164,   449,   451,
     184,   376,   164,   456,   379,   459,   460,   462,   457,   338,
     164,   393,   389,   448,   420,   241,   423,   381,   404,   226,
     351,   433,   435,   143,   236,   347,   268,   265,   446,   164,
     384,   286,   287,   164,   288,   289,   410,   298,   300,   302,
     303,   304,   306,   305,   307,   297,   254,   189,     0,   165,
     423,   299,   434,   320,   401,     0,     0,     0,   301,   438,
       0,     0,     0,     0,     0,     0,     0,   164,     0,   164,
     436,   171,   437,   164,   439,   450,     0,   442,     0,     0,
       0,     0,     0,     0,   440,     0,     0,     1,     0,     2,
       0,     3,     0,     4,     0,     5,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,   455,    15,
      16,    17,    18,    19,    20,   461,   173,     0,     0,     0,
       0,     0,     0,    21,    22,    23,    24,     0,    25,    26,
       0,    27,    28,    29,     0,    30,    31,    32,    33,    34,
      35,    36,     0,     0,     0,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,     0,     0,    48,     0,
      49,    50,    51,    52,     0,     0,    53,     0,     0,     0,
       0,     0,    54,    55,    56,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,    59,     1,     0,     2,     0,     3,     0,     4,
     123,     0,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,    28,    29,
       0,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     0,     0,    48,     0,    49,    50,    51,    52,
       0,     0,    53,     0,     0,     0,     0,     0,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,    59,     1,
       0,     2,     0,     3,     0,     4,   233,     0,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,    28,    29,     0,    30,    31,    32,
      33,    34,    35,    36,     0,     0,     0,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     0,     0,
      48,     0,    49,    50,    51,    52,     0,     0,    53,     0,
       0,     0,     0,     0,    54,    55,    56,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     2,     0,
       3,     0,     4,    58,    59,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,    28,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     0,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,   141,     0,     2,     0,
       3,    54,    55,    56,    57,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     1,     0,     2,     0,
       3,     0,     0,     0,     0,     6,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,     0,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      58,    59,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,   120,     0,     0,     0,     6,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,     0,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      58,    59,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     2,   118,
       3,     0,     0,     0,     0,     6,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,   121,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      58,    59,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,   277,     0,     0,     0,     6,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,     0,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      58,    59,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,     0,     0,     6,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,     0,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      58,    59,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,   318,     0,     0,     0,     6,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,   121,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      58,    59,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,   120,     0,     0,     0,     6,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,     0,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      58,    59,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     2,   361,
       3,     0,     0,     0,     0,     6,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,     0,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      58,    59,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,   363,     0,     0,     0,     6,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,     0,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      58,    59,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     2,   375,
       3,     0,     0,     0,     0,     6,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,     0,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      58,    59,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,     0,     0,     6,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,     0,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      58,    59,    29,     0,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,     0,     0,     0,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,     0,     0,
       0,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    59,    29,     0,    30,     0,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     279,     0,     0,     0,     0,     0,     0,    48,     0,    49,
      50,    51,    52,     0,     0,    53,     0,     0,     0,     0,
       0,    54,    55,    56,    57,   209,    49,   210,    51,   212,
     213,   214,     0,     0,   280,     0,     0,     0,     0,     0,
      58,    59,     0,     0,   281,   201,   202,   203,   204,   282,
     206,   207,     0,     0,     0,     0,     0,     0,     0,   283
};

static const yytype_int16 yycheck[] =
{
       9,     4,     2,     3,    27,    61,   163,    54,   192,    53,
     115,    85,   250,   137,    14,    30,    16,    55,    56,    28,
     152,     4,     6,     3,    15,     6,    53,    54,     4,    50,
       9,     4,     4,    24,    25,     8,    36,     5,    32,     7,
       3,   115,   115,     4,   352,   353,   354,    91,     4,    74,
       4,     6,     5,    10,    10,     9,    65,    57,     5,   367,
      45,     5,    23,    84,    91,    22,    50,    52,    94,    50,
      38,    50,    63,    99,   112,    83,    67,   102,    45,    87,
       4,    74,     4,    51,     8,    52,     8,    59,   109,    74,
      53,    46,     3,     4,     4,   110,   228,   105,     8,     5,
      84,   145,    85,    84,    95,    84,     9,    74,    76,   147,
      78,    75,    85,    77,   187,   124,    92,   102,   145,   243,
       0,   121,   430,     5,   256,   109,   106,   174,   109,     4,
     109,   100,   101,     8,   134,   102,   136,     7,   106,    79,
      80,    81,   342,   190,     4,   189,     6,   174,   348,   349,
     188,    93,   152,   258,    31,    32,   179,   231,    31,    32,
      33,    34,   189,   190,    95,    96,    97,    98,    35,    36,
     370,   371,   104,   217,   358,   175,   180,   181,   182,    15,
       4,    17,     6,   183,     4,   103,     6,   234,     3,     4,
     217,   191,    86,   237,   102,   239,   223,   435,   355,     5,
      57,     7,   249,     4,    82,     6,    12,   234,     5,     4,
     237,     6,   239,     4,   106,     6,    74,    83,    84,    74,
     220,     5,   249,    74,    35,    36,     3,     4,   228,    74,
      38,     7,   232,    45,     3,    74,     7,     5,   106,    45,
      52,   241,    22,    49,     9,    51,    52,    53,    54,    55,
      56,    57,    58,    74,    60,    74,   256,    74,     5,     5,
       5,    74,    74,   263,    76,    77,    78,    79,    74,     4,
      76,    77,    78,    79,     4,    85,    82,    89,    90,     8,
      74,     4,    88,    89,    90,    91,     6,   325,    74,    74,
     102,   365,    74,    74,     4,   107,   108,     3,     9,     6,
       4,   107,   108,    24,    37,   352,   353,   354,    23,    14,
     333,    85,   312,    85,     4,     6,   316,     6,    85,   328,
     367,   330,    74,    74,    10,   352,   353,   354,     9,     3,
     404,   331,   359,     3,   334,     6,     3,    10,   449,   386,
     367,   350,   343,   426,   386,   135,   390,   336,   365,   115,
     279,   399,   407,    21,   132,   259,   172,   164,   424,   386,
     338,   187,   187,   390,   187,   187,   375,   194,   196,   200,
     205,   208,   215,   211,   216,   193,   149,    91,    -1,   426,
     424,   195,   405,   430,   359,    -1,    -1,    -1,   197,   412,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,    -1,   426,
     409,   457,   411,   430,   413,   428,    -1,   416,    -1,    -1,
      -1,    -1,    -1,    -1,   414,    -1,    -1,     3,    -1,     5,
      -1,     7,    -1,     9,    -1,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,   441,    25,
      26,    27,    28,    29,    30,   454,   455,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    -1,    44,    45,
      -1,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    74,    -1,
      76,    77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,   108,     3,    -1,     5,    -1,     7,    -1,     9,
      10,    -1,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    74,    -1,    76,    77,    78,    79,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,     3,
      -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      74,    -1,    76,    77,    78,    79,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
       7,    -1,     9,   107,   108,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,     3,    -1,     5,    -1,
       7,    88,    89,    90,    91,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
     107,   108,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
     107,   108,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
     107,   108,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
     107,   108,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
     107,   108,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    85,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
     107,   108,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
     107,   108,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
     107,   108,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
     107,   108,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
     107,   108,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
     107,   108,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,   108,    49,    -1,    51,    -1,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    75,    76,    77,    78,    79,
      80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
     107,   108,    -1,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109
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
     117,   118,   119,   120,   121,   125,   128,   130,   131,   139,
     140,   141,   143,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   161,   162,   163,   164,   165,   176,
     177,   180,   181,   182,   188,   189,   192,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   219,   222,   223,   224,   226,   227,     6,   157,
       8,    85,   157,    10,   125,    31,    32,    33,    34,   127,
     170,   171,   172,   173,     5,   141,     5,     5,     5,   157,
     173,     3,   157,   170,   126,   173,   173,   158,   141,    74,
     218,   217,    58,    60,   157,   225,    74,   102,   132,   134,
     183,   184,   186,   187,   188,   132,   133,   139,   139,   157,
       0,   119,   173,   141,   173,     5,     3,    53,     3,     4,
      50,    84,   109,     7,   161,    89,    90,   134,   179,   216,
     173,    83,    87,   105,    93,   103,   104,   102,    94,    99,
     197,    95,    96,    97,    98,   198,   100,   101,   199,    75,
      77,   200,    79,    80,    81,   201,    86,    82,   217,   139,
       7,    38,    51,   106,   159,   161,   163,   222,    57,     6,
     157,     8,    85,    10,     5,   166,   171,    35,    36,   174,
     157,   149,   157,   156,    74,     9,    74,   142,     3,     5,
     167,   134,    74,   139,   218,   225,    59,   159,    74,    38,
      83,    84,   185,     7,   164,   186,    92,    35,   174,   175,
     132,   157,     3,   158,   165,   165,   165,     8,   157,    50,
      84,    94,    99,   109,   160,   178,   198,   199,   200,   201,
     222,   139,   134,   132,   157,   202,   203,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   134,    74,
     134,   220,     5,   221,   225,     8,     7,   161,     8,   157,
     132,   135,   136,     6,    46,   168,   134,   134,     6,   157,
       6,   156,     4,    85,    22,   145,   146,     9,   132,   137,
     138,   168,    74,   106,   169,   225,   159,   184,    74,    74,
       6,   166,     5,     5,     5,    74,   193,   194,    85,     4,
       8,     6,   157,     8,     8,    74,   195,     4,     6,   139,
      74,    74,   141,     3,   141,     6,   157,    74,   158,   157,
      10,   145,    74,   124,   195,   196,     4,     3,   169,   124,
       9,   169,   169,   141,     6,   135,   135,   135,   164,     4,
     203,   220,     6,   161,   162,    85,   135,   169,   169,    14,
     141,     6,    85,     6,    23,   144,    24,   147,     4,    10,
     137,     8,    74,   134,   190,   191,    37,   122,    23,   129,
       4,     6,     6,   193,   158,   167,   141,   141,   158,   141,
     157,    85,   141,    74,     3,    74,   191,    10,   133,     9,
     158,     3,   135,   168,     6,   125,     3,   118,   123,     6,
       3,   141,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   116,   117,   117,   118,   118,   119,   119,   119,   119,
     119,   119,   119,   120,   120,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   127,   128,   129,   129,   130,
     130,   131,   132,   132,   133,   134,   135,   135,   136,   136,
     137,   138,   138,   139,   139,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   142,   142,   143,   144,   144,
     145,   146,   146,   147,   147,   148,   149,   149,   150,   150,
     150,   150,   150,   150,   150,   151,   152,   153,   153,   154,
     154,   155,   155,   155,   155,   156,   156,   157,   157,   158,
     158,   158,   158,   159,   159,   160,   160,   160,   160,   161,
     161,   161,   162,   162,   162,   163,   163,   163,   164,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   169,   169,
     170,   171,   171,   172,   172,   173,   173,   173,   173,   174,
     174,   175,   175,   176,   177,   178,   178,   178,   178,   178,
     179,   179,   179,   179,   180,   180,   181,   182,   182,   182,
     183,   183,   184,   184,   185,   185,   185,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   191,   191,   192,   193,
     193,   194,   194,   195,   195,   195,   196,   196,   197,   197,
     198,   198,   198,   198,   199,   199,   200,   200,   201,   201,
     201,   202,   202,   203,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   212,   213,   213,   214,   214,   215,   215,
     216,   216,   216,   216,   216,   216,   216,   217,   217,   217,
     217,   217,   217,   217,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   222,   223,   224,   224,   224,   224,   224,
     224,   224,   225,   225,   225,   226,   226,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     9,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     5,     5,     0,     2,     1,
       1,     7,     2,     1,     1,     1,     4,     2,     1,     3,
       2,     1,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     6,     2,     0,
       5,     1,     2,     2,     0,     6,     1,     1,     5,     5,
       6,     7,     7,     9,     5,     3,     2,     5,     7,     1,
       1,     3,     2,     3,     2,     2,     1,     1,     3,     1,
       3,     3,     3,     3,     0,     1,     1,     1,     1,     3,
       4,     5,     2,     3,     2,     5,     4,     4,     1,     1,
       1,     4,     2,     1,     2,     1,     2,     1,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     1,
       0,     1,     1,     5,     9,     1,     1,     1,     1,     1,
       7,     5,     5,     4,     1,     2,     3,     1,     1,     1,
       2,     3,     1,     3,     1,     1,     0,     2,     1,     2,
       1,     1,     1,     1,     2,     3,     1,     2,     7,     3,
       1,     1,     2,     1,     2,     2,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     5,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     1,     1,     3,
       3,     2,     1,     1,     3,     1,     2,     2,     3,     2,
       2,     1,     1,     2,     3,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     2,     2
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
#line 161 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1966 "src/parser.c"
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
#line 164 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2270 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 165 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2276 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 168 "src/gwion.y"
            { (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2282 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 169 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2288 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 173 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2294 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 174 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2300 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 175 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2306 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 176 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2312 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 177 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2318 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 178 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2324 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 179 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2330 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 182 "src/gwion.y"
                  { (yyval.cflag) = cflag_none; }
#line 2336 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 182 "src/gwion.y"
                                                { (yyval.cflag) = cflag_struct; }
#line 2342 "src/parser.c"
    break;

  case 15: /* class_def: class_type flag modifier "<identifier>" decl_template class_ext "{" class_body "}"  */
#line 185 "src/gwion.y"
    {
      if((yyvsp[-8].cflag) == cflag_struct && (yyvsp[-3].type_decl))
        { parser_error(&(yylsp[-8]), arg, "'struct' can't from inherit other types", 202); YYERROR; }
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-8].cflag) | (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      if((yyvsp[-8].cflag))
        (yyval.class_def)->cflag |= cflag_struct;
  }
#line 2356 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 195 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2362 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 195 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2368 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 197 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2374 "src/parser.c"
    break;

  case 20: /* id_list: "<identifier>"  */
#line 199 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2380 "src/parser.c"
    break;

  case 21: /* id_list: id_list "," "<identifier>"  */
#line 200 "src/gwion.y"
                           { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2386 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 202 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2392 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt_list stmt  */
#line 203 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2398 "src/parser.c"
    break;

  case 24: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 205 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2405 "src/parser.c"
    break;

  case 25: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 208 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2412 "src/parser.c"
    break;

  case 26: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 211 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2422 "src/parser.c"
    break;

  case 27: /* typedef_when: %empty  */
#line 218 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2428 "src/parser.c"
    break;

  case 28: /* typedef_when: "when" binary_exp  */
#line 218 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2434 "src/parser.c"
    break;

  case 29: /* type_def_type: "typedef"  */
#line 219 "src/gwion.y"
                         { (yyval.ival) = 0; }
#line 2440 "src/parser.c"
    break;

  case 30: /* type_def_type: "distinct"  */
#line 219 "src/gwion.y"
                                                  { (yyval.ival) = 1; }
#line 2446 "src/parser.c"
    break;

  case 31: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 220 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].id_list));
  (yyval.type_def)->distinct = (yyvsp[-6].ival);
}
#line 2459 "src/parser.c"
    break;

  case 32: /* type_decl_array: type_decl array  */
#line 229 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2465 "src/parser.c"
    break;

  case 34: /* type_decl_exp: type_decl_array  */
#line 231 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty '[]'", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2473 "src/parser.c"
    break;

  case 35: /* type_decl_empty: type_decl_array  */
#line 235 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2481 "src/parser.c"
    break;

  case 36: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 240 "src/gwion.y"
                                            { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2487 "src/parser.c"
    break;

  case 37: /* arg: type_decl_array arg_decl  */
#line 241 "src/gwion.y"
                             { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2493 "src/parser.c"
    break;

  case 38: /* arg_list: arg  */
#line 243 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2499 "src/parser.c"
    break;

  case 39: /* arg_list: arg_list "," arg  */
#line 244 "src/gwion.y"
                        {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
   }
#line 2509 "src/parser.c"
    break;

  case 40: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 250 "src/gwion.y"
                                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2515 "src/parser.c"
    break;

  case 41: /* fptr_list: fptr_arg  */
#line 251 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2521 "src/parser.c"
    break;

  case 42: /* fptr_list: fptr_list "," fptr_arg  */
#line 251 "src/gwion.y"
                                                                           { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2527 "src/parser.c"
    break;

  case 43: /* code_stmt: "{" "}"  */
#line 254 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2533 "src/parser.c"
    break;

  case 44: /* code_stmt: "{" stmt_list "}"  */
#line 255 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2539 "src/parser.c"
    break;

  case 45: /* stmt_pp: "<comment>"  */
#line 259 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2545 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#include"  */
#line 260 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2551 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#define"  */
#line 261 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2557 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#pragma"  */
#line 262 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2563 "src/parser.c"
    break;

  case 49: /* stmt_pp: "#undef"  */
#line 263 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2569 "src/parser.c"
    break;

  case 50: /* stmt_pp: "#ifdef"  */
#line 264 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2575 "src/parser.c"
    break;

  case 51: /* stmt_pp: "#ifndef"  */
#line 265 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2581 "src/parser.c"
    break;

  case 52: /* stmt_pp: "#else"  */
#line 266 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2587 "src/parser.c"
    break;

  case 53: /* stmt_pp: "#if"  */
#line 267 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2593 "src/parser.c"
    break;

  case 54: /* stmt_pp: "\n"  */
#line 268 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2599 "src/parser.c"
    break;

  case 55: /* stmt_pp: "require"  */
#line 269 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), (yyloc)); }
#line 2605 "src/parser.c"
    break;

  case 66: /* opt_id: %empty  */
#line 284 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2611 "src/parser.c"
    break;

  case 67: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 287 "src/gwion.y"
                                           {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2621 "src/parser.c"
    break;

  case 68: /* when_exp: "when" exp  */
#line 293 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2627 "src/parser.c"
    break;

  case 69: /* when_exp: %empty  */
#line 293 "src/gwion.y"
                                               { (yyval.exp) = NULL; }
#line 2633 "src/parser.c"
    break;

  case 70: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 296 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 2646 "src/parser.c"
    break;

  case 71: /* match_list: match_case_stmt  */
#line 306 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2652 "src/parser.c"
    break;

  case 72: /* match_list: match_list match_case_stmt  */
#line 307 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2658 "src/parser.c"
    break;

  case 73: /* where_stmt: "where" stmt  */
#line 309 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2664 "src/parser.c"
    break;

  case 74: /* where_stmt: %empty  */
#line 309 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2670 "src/parser.c"
    break;

  case 75: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 311 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 2683 "src/parser.c"
    break;

  case 76: /* flow: "while"  */
#line 321 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2689 "src/parser.c"
    break;

  case 77: /* flow: "until"  */
#line 322 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2695 "src/parser.c"
    break;

  case 78: /* loop_stmt: flow "(" exp ")" stmt  */
#line 326 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2701 "src/parser.c"
    break;

  case 79: /* loop_stmt: "do" stmt flow exp ";"  */
#line 328 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1, (yyloc)); LIST_REM((yyvsp[-2].ival)) }
#line 2707 "src/parser.c"
    break;

  case 80: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 330 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 2713 "src/parser.c"
    break;

  case 81: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 332 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2719 "src/parser.c"
    break;

  case 82: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 334 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2725 "src/parser.c"
    break;

  case 83: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" binary_exp ")" stmt  */
#line 336 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); (yyval.stmt)->d.stmt_each.idx = (yyvsp[-6].sym); }
#line 2731 "src/parser.c"
    break;

  case 84: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 338 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2737 "src/parser.c"
    break;

  case 85: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 341 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2743 "src/parser.c"
    break;

  case 86: /* defer_stmt: "defer" stmt  */
#line 343 "src/gwion.y"
                         { (yyval.stmt) = new_stmt_defer(mpool(arg), (yyvsp[0].stmt), (yyloc)); }
#line 2749 "src/parser.c"
    break;

  case 87: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 347 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2755 "src/parser.c"
    break;

  case 88: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 349 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 2761 "src/parser.c"
    break;

  case 89: /* breaks: "break"  */
#line 352 "src/gwion.y"
                  { (yyval.ival) = ae_stmt_break; }
#line 2767 "src/parser.c"
    break;

  case 90: /* breaks: "continue"  */
#line 352 "src/gwion.y"
                                                      { (yyval.ival) = ae_stmt_continue; }
#line 2773 "src/parser.c"
    break;

  case 91: /* jump_stmt: "return" exp ";"  */
#line 354 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2779 "src/parser.c"
    break;

  case 92: /* jump_stmt: "return" ";"  */
#line 355 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 2785 "src/parser.c"
    break;

  case 93: /* jump_stmt: breaks "<integer>" ";"  */
#line 356 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 2791 "src/parser.c"
    break;

  case 94: /* jump_stmt: breaks ";"  */
#line 357 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 2797 "src/parser.c"
    break;

  case 95: /* exp_stmt: exp ";"  */
#line 361 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2803 "src/parser.c"
    break;

  case 96: /* exp_stmt: ";"  */
#line 362 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 2809 "src/parser.c"
    break;

  case 97: /* exp: binary_exp  */
#line 366 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 2815 "src/parser.c"
    break;

  case 98: /* exp: exp "," binary_exp  */
#line 367 "src/gwion.y"
                         { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 2821 "src/parser.c"
    break;

  case 100: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 371 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2827 "src/parser.c"
    break;

  case 101: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 372 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2833 "src/parser.c"
    break;

  case 102: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 373 "src/gwion.y"
                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2839 "src/parser.c"
    break;

  case 103: /* call_template: ":[" type_list "]"  */
#line 376 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2845 "src/parser.c"
    break;

  case 104: /* call_template: %empty  */
#line 376 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2851 "src/parser.c"
    break;

  case 109: /* array_exp: "[" exp "]"  */
#line 381 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 2857 "src/parser.c"
    break;

  case 110: /* array_exp: "[" exp "]" array_exp  */
#line 382 "src/gwion.y"
                                {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0207); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 2866 "src/parser.c"
    break;

  case 111: /* array_exp: "[" exp "]" "[" "]"  */
#line 386 "src/gwion.y"
                                     { LIST_REM(2) parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0208); YYERROR; }
#line 2872 "src/parser.c"
    break;

  case 112: /* array_empty: "[" "]"  */
#line 390 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2878 "src/parser.c"
    break;

  case 113: /* array_empty: array_empty "[" "]"  */
#line 391 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2884 "src/parser.c"
    break;

  case 114: /* array_empty: array_empty array_exp  */
#line 392 "src/gwion.y"
                              { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0209); YYERROR; }
#line 2890 "src/parser.c"
    break;

  case 115: /* range: "[" exp ":" exp "]"  */
#line 396 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM(2) LIST_REM((yyvsp[-1].exp)) }
#line 2896 "src/parser.c"
    break;

  case 116: /* range: "[" exp ":" "]"  */
#line 397 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 2902 "src/parser.c"
    break;

  case 117: /* range: "[" ":" exp "]"  */
#line 398 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 2908 "src/parser.c"
    break;

  case 121: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 404 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2914 "src/parser.c"
    break;

  case 122: /* func_args: "(" arg_list  */
#line 406 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 2920 "src/parser.c"
    break;

  case 123: /* func_args: "("  */
#line 406 "src/gwion.y"
                                                                { (yyval.arg_list) = NULL; }
#line 2926 "src/parser.c"
    break;

  case 124: /* fptr_args: "(" fptr_list  */
#line 407 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 2932 "src/parser.c"
    break;

  case 125: /* fptr_args: "("  */
#line 407 "src/gwion.y"
                                                               { (yyval.arg_list) = NULL; }
#line 2938 "src/parser.c"
    break;

  case 126: /* arg_type: "..." ")"  */
#line 408 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 2944 "src/parser.c"
    break;

  case 127: /* arg_type: ")"  */
#line 408 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 2950 "src/parser.c"
    break;

  case 128: /* decl_template: ":[" id_list "]"  */
#line 410 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); LIST_REM(2) }
#line 2956 "src/parser.c"
    break;

  case 129: /* decl_template: %empty  */
#line 410 "src/gwion.y"
                                                              { (yyval.id_list) = NULL; }
#line 2962 "src/parser.c"
    break;

  case 130: /* global: "global"  */
#line 412 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = 1; }
#line 2968 "src/parser.c"
    break;

  case 131: /* storage_flag: "static"  */
#line 414 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2974 "src/parser.c"
    break;

  case 133: /* access_flag: "private"  */
#line 416 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2980 "src/parser.c"
    break;

  case 134: /* access_flag: "protect"  */
#line 417 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2986 "src/parser.c"
    break;

  case 135: /* flag: access_flag  */
#line 420 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2992 "src/parser.c"
    break;

  case 136: /* flag: storage_flag  */
#line 421 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2998 "src/parser.c"
    break;

  case 137: /* flag: access_flag storage_flag  */
#line 422 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3004 "src/parser.c"
    break;

  case 138: /* flag: %empty  */
#line 423 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3010 "src/parser.c"
    break;

  case 139: /* final: "final"  */
#line 426 "src/gwion.y"
             { (yyval.flag) = ae_flag_final; }
#line 3016 "src/parser.c"
    break;

  case 140: /* final: %empty  */
#line 426 "src/gwion.y"
                                       { (yyval.flag) = ae_flag_none; }
#line 3022 "src/parser.c"
    break;

  case 141: /* modifier: "abstract"  */
#line 428 "src/gwion.y"
                   { (yyval.flag) = ae_flag_abstract; }
#line 3028 "src/parser.c"
    break;

  case 143: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 431 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt));
  }
#line 3038 "src/parser.c"
    break;

  case 144: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 439 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3050 "src/parser.c"
    break;

  case 150: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 450 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none, (yylsp[-5])); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 3056 "src/parser.c"
    break;

  case 151: /* op_base: type_decl_empty post_op "(" arg ")"  */
#line 452 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-3])); }
#line 3062 "src/parser.c"
    break;

  case 152: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 454 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-4]));
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 3071 "src/parser.c"
    break;

  case 153: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 459 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3080 "src/parser.c"
    break;

  case 154: /* operator: "operator"  */
#line 464 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 3086 "src/parser.c"
    break;

  case 155: /* operator: "operator" global  */
#line 464 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 3092 "src/parser.c"
    break;

  case 156: /* op_def: operator op_base code_stmt  */
#line 466 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3098 "src/parser.c"
    break;

  case 159: /* func_def: op_def  */
#line 468 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 3104 "src/parser.c"
    break;

  case 160: /* type_decl_tmpl: "<identifier>" call_template  */
#line 471 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3110 "src/parser.c"
    break;

  case 161: /* type_decl_tmpl: "&" "<identifier>" call_template  */
#line 472 "src/gwion.y"
                         { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->ref = 1; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3116 "src/parser.c"
    break;

  case 163: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 477 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3122 "src/parser.c"
    break;

  case 164: /* option: "?"  */
#line 480 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3128 "src/parser.c"
    break;

  case 165: /* option: OPTIONS  */
#line 480 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3134 "src/parser.c"
    break;

  case 166: /* option: %empty  */
#line 480 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3140 "src/parser.c"
    break;

  case 167: /* type_decl_opt: type_decl_noflag option  */
#line 481 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option |= (yyvsp[0].uval); }
#line 3146 "src/parser.c"
    break;

  case 169: /* type_decl: type_decl_flag type_decl_opt  */
#line 482 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3152 "src/parser.c"
    break;

  case 170: /* type_decl_flag: "LATE"  */
#line 485 "src/gwion.y"
         { (yyval.flag) = ae_flag_late; }
#line 3158 "src/parser.c"
    break;

  case 171: /* type_decl_flag: "const"  */
#line 486 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 3164 "src/parser.c"
    break;

  case 172: /* type_decl_flag2: "var"  */
#line 488 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3170 "src/parser.c"
    break;

  case 174: /* union_decl: "<identifier>" ";"  */
#line 491 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yylsp[-1]));
}
#line 3179 "src/parser.c"
    break;

  case 175: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 495 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 3185 "src/parser.c"
    break;

  case 177: /* union_list: union_decl union_list  */
#line 498 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 3191 "src/parser.c"
    break;

  case 178: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 501 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 3203 "src/parser.c"
    break;

  case 179: /* var_decl_list: var_decl "," var_decl_list  */
#line 511 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3209 "src/parser.c"
    break;

  case 180: /* var_decl_list: var_decl  */
#line 512 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3215 "src/parser.c"
    break;

  case 181: /* var_decl: "<identifier>"  */
#line 515 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yylsp[0])); }
#line 3221 "src/parser.c"
    break;

  case 182: /* var_decl: "<identifier>" array  */
#line 516 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3227 "src/parser.c"
    break;

  case 183: /* arg_decl: "<identifier>"  */
#line 518 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3233 "src/parser.c"
    break;

  case 184: /* arg_decl: "<identifier>" array_empty  */
#line 519 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3239 "src/parser.c"
    break;

  case 185: /* arg_decl: "<identifier>" array_exp  */
#line 520 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 3245 "src/parser.c"
    break;

  case 187: /* fptr_arg_decl: %empty  */
#line 521 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3251 "src/parser.c"
    break;

  case 201: /* opt_exp: exp  */
#line 529 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3257 "src/parser.c"
    break;

  case 202: /* opt_exp: %empty  */
#line 529 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3263 "src/parser.c"
    break;

  case 204: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 532 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3269 "src/parser.c"
    break;

  case 205: /* con_exp: log_or_exp "?:" con_exp  */
#line 534 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3275 "src/parser.c"
    break;

  case 207: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 536 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3281 "src/parser.c"
    break;

  case 209: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 537 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3287 "src/parser.c"
    break;

  case 211: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 538 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3293 "src/parser.c"
    break;

  case 213: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 539 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3299 "src/parser.c"
    break;

  case 215: /* and_exp: and_exp "&" eq_exp  */
#line 540 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3305 "src/parser.c"
    break;

  case 217: /* eq_exp: eq_exp eq_op rel_exp  */
#line 541 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3311 "src/parser.c"
    break;

  case 219: /* rel_exp: rel_exp rel_op shift_exp  */
#line 542 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3317 "src/parser.c"
    break;

  case 221: /* shift_exp: shift_exp shift_op add_exp  */
#line 543 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3323 "src/parser.c"
    break;

  case 223: /* add_exp: add_exp add_op mul_exp  */
#line 544 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3329 "src/parser.c"
    break;

  case 225: /* mul_exp: mul_exp mul_op dur_exp  */
#line 545 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3335 "src/parser.c"
    break;

  case 227: /* dur_exp: dur_exp "::" cast_exp  */
#line 546 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3341 "src/parser.c"
    break;

  case 229: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 549 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3347 "src/parser.c"
    break;

  case 238: /* unary_exp: unary_op unary_exp  */
#line 556 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3353 "src/parser.c"
    break;

  case 239: /* unary_exp: OPID_E unary_exp  */
#line 557 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3359 "src/parser.c"
    break;

  case 240: /* unary_exp: "new" type_decl_exp  */
#line 558 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), (yyloc)); }
#line 3365 "src/parser.c"
    break;

  case 241: /* unary_exp: "spork" code_stmt  */
#line 559 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3371 "src/parser.c"
    break;

  case 242: /* unary_exp: "fork" code_stmt  */
#line 560 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3377 "src/parser.c"
    break;

  case 243: /* unary_exp: "$" type_decl_empty  */
#line 561 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yyloc)); }
#line 3383 "src/parser.c"
    break;

  case 244: /* lambda_list: "<identifier>"  */
#line 564 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)), NULL); }
#line 3389 "src/parser.c"
    break;

  case 245: /* lambda_list: "<identifier>" lambda_list  */
#line 565 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yyloc)), (yyvsp[0].arg_list)); }
#line 3395 "src/parser.c"
    break;

  case 246: /* lambda_arg: "\\" lambda_list  */
#line 566 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3401 "src/parser.c"
    break;

  case 247: /* lambda_arg: "\\"  */
#line 566 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3407 "src/parser.c"
    break;

  case 248: /* type_list: type_decl_empty  */
#line 569 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3413 "src/parser.c"
    break;

  case 249: /* type_list: type_decl_empty "," type_list  */
#line 570 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3419 "src/parser.c"
    break;

  case 250: /* call_paren: "(" exp ")"  */
#line 574 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3425 "src/parser.c"
    break;

  case 251: /* call_paren: "(" ")"  */
#line 574 "src/gwion.y"
                                                                         { (yyval.exp) = NULL; }
#line 3431 "src/parser.c"
    break;

  case 254: /* dot_exp: post_exp "." "<identifier>"  */
#line 578 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3444 "src/parser.c"
    break;

  case 256: /* post_exp: post_exp array_exp  */
#line 589 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3450 "src/parser.c"
    break;

  case 257: /* post_exp: post_exp range  */
#line 591 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3456 "src/parser.c"
    break;

  case 258: /* post_exp: post_exp call_template call_paren  */
#line 593 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3463 "src/parser.c"
    break;

  case 259: /* post_exp: post_exp post_op  */
#line 596 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3469 "src/parser.c"
    break;

  case 260: /* post_exp: post_exp OPID_E  */
#line 598 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3475 "src/parser.c"
    break;

  case 261: /* post_exp: dot_exp  */
#line 599 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3481 "src/parser.c"
    break;

  case 262: /* interp_exp: "<interp string>`"  */
#line 603 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3487 "src/parser.c"
    break;

  case 263: /* interp_exp: "<interp string>" interp_exp  */
#line 604 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3493 "src/parser.c"
    break;

  case 264: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 605 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3499 "src/parser.c"
    break;

  case 265: /* interp: "`" interp_exp  */
#line 607 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3505 "src/parser.c"
    break;

  case 266: /* interp: interp "`" interp_exp  */
#line 608 "src/gwion.y"
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
#line 3520 "src/parser.c"
    break;

  case 267: /* prim_exp: "<identifier>"  */
#line 620 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3526 "src/parser.c"
    break;

  case 268: /* prim_exp: "<integer>"  */
#line 621 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 3532 "src/parser.c"
    break;

  case 269: /* prim_exp: FLOATT  */
#line 622 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 3538 "src/parser.c"
    break;

  case 270: /* prim_exp: interp  */
#line 623 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 3544 "src/parser.c"
    break;

  case 271: /* prim_exp: "<litteral string>"  */
#line 624 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3550 "src/parser.c"
    break;

  case 272: /* prim_exp: "<litteral char>"  */
#line 625 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3556 "src/parser.c"
    break;

  case 273: /* prim_exp: array  */
#line 626 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 3562 "src/parser.c"
    break;

  case 274: /* prim_exp: range  */
#line 627 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 3568 "src/parser.c"
    break;

  case 275: /* prim_exp: "<<<" exp ">>>"  */
#line 628 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 3574 "src/parser.c"
    break;

  case 276: /* prim_exp: "(" exp ")"  */
#line 629 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3580 "src/parser.c"
    break;

  case 277: /* prim_exp: lambda_arg code_stmt  */
#line 630 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yyloc)); }
#line 3586 "src/parser.c"
    break;

  case 278: /* prim_exp: "(" ")"  */
#line 631 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 3592 "src/parser.c"
    break;


#line 3596 "src/parser.c"

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

#line 633 "src/gwion.y"

#undef scan
ANN static int parser_error(loc_t *loc, Scanner *const scan, const char* diagnostic, const uint error_code) {
  char main[strlen(diagnostic) + 1];
  strcpy(main, diagnostic);
  char *explain = strchr(main, ','),
       *fix = NULL;
  if(explain) {
    main[explain-main] = '\0';
    explain += 2;
    fix = strchr(explain, ',');
    if(fix) {
      explain[fix-explain] = '\0';
      fix += 2;
    }
  }
  scanner_error(scan, main, explain, fix, *loc, error_code);
  return 0;
}
