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
ANN Symbol sig_name(const Scanner*, const pos_t);

#line 107 "src/parser.c"

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
  YYSYMBOL_TRY = 29,                       /* "try"  */
  YYSYMBOL_PERFORM = 30,                   /* "perform"  */
  YYSYMBOL_HANDLET = 31,                   /* "handle"  */
  YYSYMBOL_RETRY = 32,                     /* "retry"  */
  YYSYMBOL_CLASS = 33,                     /* "class"  */
  YYSYMBOL_STRUCT = 34,                    /* "struct"  */
  YYSYMBOL_TRAIT = 35,                     /* "trait"  */
  YYSYMBOL_STATIC = 36,                    /* "static"  */
  YYSYMBOL_GLOBAL = 37,                    /* "global"  */
  YYSYMBOL_PRIVATE = 38,                   /* "private"  */
  YYSYMBOL_PROTECT = 39,                   /* "protect"  */
  YYSYMBOL_ABSTRACT = 40,                  /* "abstract"  */
  YYSYMBOL_FINAL = 41,                     /* "final"  */
  YYSYMBOL_EXTENDS = 42,                   /* "extends"  */
  YYSYMBOL_DOT = 43,                       /* "."  */
  YYSYMBOL_OPERATOR = 44,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 45,                   /* "typedef"  */
  YYSYMBOL_DISTINCT = 46,                  /* "distinct"  */
  YYSYMBOL_FUNPTR = 47,                    /* "funptr"  */
  YYSYMBOL_NOELSE = 48,                    /* NOELSE  */
  YYSYMBOL_UNION = 49,                     /* "union"  */
  YYSYMBOL_CONSTT = 50,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 51,                   /* "..."  */
  YYSYMBOL_VARLOOP = 52,                   /* "varloop"  */
  YYSYMBOL_DEFER = 53,                     /* "defer"  */
  YYSYMBOL_BACKSLASH = 54,                 /* "\\"  */
  YYSYMBOL_OPID_A = 55,                    /* OPID_A  */
  YYSYMBOL_OPID_E = 56,                    /* OPID_E  */
  YYSYMBOL_LATE = 57,                      /* "late"  */
  YYSYMBOL_NUM = 58,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 59,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 60,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 61,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 62,              /* "`"  */
  YYSYMBOL_INTERP_EXP = 63,                /* INTERP_EXP  */
  YYSYMBOL_PP_COMMENT = 64,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 65,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 66,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 67,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 68,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 69,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 70,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 71,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 72,                  /* "#if"  */
  YYSYMBOL_PP_NL = 73,                     /* "\n"  */
  YYSYMBOL_PP_IMPORT = 74,                 /* "import"  */
  YYSYMBOL_INTERP_LIT = 75,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 76,                /* "<interp string end>"  */
  YYSYMBOL_77_operator_id_ = 77,           /* "@<operator id>"  */
  YYSYMBOL_78_operator_id_ = 78,           /* "&<operator id>"  */
  YYSYMBOL_ID = 79,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 80,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 81,                  /* "++"  */
  YYSYMBOL_MINUS = 82,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 83,                /* "--"  */
  YYSYMBOL_TIMES = 84,                     /* "*"  */
  YYSYMBOL_DIVIDE = 85,                    /* "/"  */
  YYSYMBOL_PERCENT = 86,                   /* "%"  */
  YYSYMBOL_DOLLAR = 87,                    /* "$"  */
  YYSYMBOL_QUESTION = 88,                  /* "?"  */
  YYSYMBOL_OPTIONS = 89,                   /* OPTIONS  */
  YYSYMBOL_COLON = 90,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 91,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 92,             /* "?:"  */
  YYSYMBOL_NEW = 93,                       /* "new"  */
  YYSYMBOL_SPORK = 94,                     /* "spork"  */
  YYSYMBOL_FORK = 95,                      /* "fork"  */
  YYSYMBOL_L_HACK = 96,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 97,                    /* ">>>"  */
  YYSYMBOL_AND = 98,                       /* "&&"  */
  YYSYMBOL_EQ = 99,                        /* "=="  */
  YYSYMBOL_GE = 100,                       /* ">="  */
  YYSYMBOL_GT = 101,                       /* ">"  */
  YYSYMBOL_LE = 102,                       /* "<="  */
  YYSYMBOL_LT = 103,                       /* "<"  */
  YYSYMBOL_NEQ = 104,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 105,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 106,              /* ">>"  */
  YYSYMBOL_S_AND = 107,                    /* "&"  */
  YYSYMBOL_S_OR = 108,                     /* "|"  */
  YYSYMBOL_S_XOR = 109,                    /* "^"  */
  YYSYMBOL_OR = 110,                       /* "||"  */
  YYSYMBOL_TMPL = 111,                     /* ":["  */
  YYSYMBOL_TILDA = 112,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 113,              /* "!"  */
  YYSYMBOL_AROBASE = 114,                  /* "@"  */
  YYSYMBOL_DYNOP = 115,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 116,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 117,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 118,                   /* UTIMES  */
  YYSYMBOL_119_ = 119,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 120,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 121,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 122,                 /* $accept  */
  YYSYMBOL_prg = 123,                      /* prg  */
  YYSYMBOL_ast = 124,                      /* ast  */
  YYSYMBOL_section = 125,                  /* section  */
  YYSYMBOL_class_flag = 126,               /* class_flag  */
  YYSYMBOL_class_def = 127,                /* class_def  */
  YYSYMBOL_trait_stmt = 128,               /* trait_stmt  */
  YYSYMBOL_trait_stmt_list = 129,          /* trait_stmt_list  */
  YYSYMBOL_trait_section = 130,            /* trait_section  */
  YYSYMBOL_trait_ast = 131,                /* trait_ast  */
  YYSYMBOL_trait_body = 132,               /* trait_body  */
  YYSYMBOL_trait_def = 133,                /* trait_def  */
  YYSYMBOL_class_ext = 134,                /* class_ext  */
  YYSYMBOL_traits = 135,                   /* traits  */
  YYSYMBOL_extend_body = 136,              /* extend_body  */
  YYSYMBOL_extend_def = 137,               /* extend_def  */
  YYSYMBOL_class_body = 138,               /* class_body  */
  YYSYMBOL_id_list = 139,                  /* id_list  */
  YYSYMBOL_specialized_list = 140,         /* specialized_list  */
  YYSYMBOL_stmt_list = 141,                /* stmt_list  */
  YYSYMBOL_fptr_base = 142,                /* fptr_base  */
  YYSYMBOL__func_effects = 143,            /* _func_effects  */
  YYSYMBOL_func_effects = 144,             /* func_effects  */
  YYSYMBOL_func_base = 145,                /* func_base  */
  YYSYMBOL_fptr_def = 146,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 147,             /* typedef_when  */
  YYSYMBOL_type_def_type = 148,            /* type_def_type  */
  YYSYMBOL_type_def = 149,                 /* type_def  */
  YYSYMBOL_type_decl_array = 150,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 151,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 152,          /* type_decl_empty  */
  YYSYMBOL_arg = 153,                      /* arg  */
  YYSYMBOL_arg_list = 154,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 155,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 156,                /* fptr_list  */
  YYSYMBOL_code_stmt = 157,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 158,                  /* stmt_pp  */
  YYSYMBOL_stmt = 159,                     /* stmt  */
  YYSYMBOL_retry_stmt = 160,               /* retry_stmt  */
  YYSYMBOL_handler = 161,                  /* handler  */
  YYSYMBOL_162_1 = 162,                    /* $@1  */
  YYSYMBOL_handler_list = 163,             /* handler_list  */
  YYSYMBOL_try_stmt = 164,                 /* try_stmt  */
  YYSYMBOL_opt_id = 165,                   /* opt_id  */
  YYSYMBOL_enum_def = 166,                 /* enum_def  */
  YYSYMBOL_when_exp = 167,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 168,          /* match_case_stmt  */
  YYSYMBOL_match_list = 169,               /* match_list  */
  YYSYMBOL_where_stmt = 170,               /* where_stmt  */
  YYSYMBOL_match_stmt = 171,               /* match_stmt  */
  YYSYMBOL_flow = 172,                     /* flow  */
  YYSYMBOL_loop_stmt = 173,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 174,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 175,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 176,           /* selection_stmt  */
  YYSYMBOL_breaks = 177,                   /* breaks  */
  YYSYMBOL_jump_stmt = 178,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 179,                 /* exp_stmt  */
  YYSYMBOL_exp = 180,                      /* exp  */
  YYSYMBOL_binary_exp = 181,               /* binary_exp  */
  YYSYMBOL_call_template = 182,            /* call_template  */
  YYSYMBOL_op = 183,                       /* op  */
  YYSYMBOL_array_exp = 184,                /* array_exp  */
  YYSYMBOL_array_empty = 185,              /* array_empty  */
  YYSYMBOL_dict_list = 186,                /* dict_list  */
  YYSYMBOL_range = 187,                    /* range  */
  YYSYMBOL_array = 188,                    /* array  */
  YYSYMBOL_decl_exp = 189,                 /* decl_exp  */
  YYSYMBOL_func_args = 190,                /* func_args  */
  YYSYMBOL_fptr_args = 191,                /* fptr_args  */
  YYSYMBOL_arg_type = 192,                 /* arg_type  */
  YYSYMBOL_decl_template = 193,            /* decl_template  */
  YYSYMBOL_global = 194,                   /* global  */
  YYSYMBOL_storage_flag = 195,             /* storage_flag  */
  YYSYMBOL_access_flag = 196,              /* access_flag  */
  YYSYMBOL_flag = 197,                     /* flag  */
  YYSYMBOL_final = 198,                    /* final  */
  YYSYMBOL_modifier = 199,                 /* modifier  */
  YYSYMBOL_func_code = 200,                /* func_code  */
  YYSYMBOL_func_def_base = 201,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 202,            /* abstract_fdef  */
  YYSYMBOL_op_op = 203,                    /* op_op  */
  YYSYMBOL_op_base = 204,                  /* op_base  */
  YYSYMBOL_operator = 205,                 /* operator  */
  YYSYMBOL_op_def = 206,                   /* op_def  */
  YYSYMBOL_func_def = 207,                 /* func_def  */
  YYSYMBOL_type_decl_base = 208,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 209,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 210,         /* type_decl_noflag  */
  YYSYMBOL_option = 211,                   /* option  */
  YYSYMBOL_type_decl_opt = 212,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 213,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 214,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 215,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 216,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 217,               /* union_decl  */
  YYSYMBOL_union_list = 218,               /* union_list  */
  YYSYMBOL_union_def = 219,                /* union_def  */
  YYSYMBOL_var_decl_list = 220,            /* var_decl_list  */
  YYSYMBOL_var_decl = 221,                 /* var_decl  */
  YYSYMBOL_arg_decl = 222,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 223,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 224,                    /* eq_op  */
  YYSYMBOL_rel_op = 225,                   /* rel_op  */
  YYSYMBOL_shift_op = 226,                 /* shift_op  */
  YYSYMBOL_add_op = 227,                   /* add_op  */
  YYSYMBOL_mul_op = 228,                   /* mul_op  */
  YYSYMBOL_opt_exp = 229,                  /* opt_exp  */
  YYSYMBOL_con_exp = 230,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 231,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 232,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 233,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 234,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 235,                  /* and_exp  */
  YYSYMBOL_eq_exp = 236,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 237,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 238,                /* shift_exp  */
  YYSYMBOL_add_exp = 239,                  /* add_exp  */
  YYSYMBOL_mul_exp = 240,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 241,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 242,                 /* cast_exp  */
  YYSYMBOL_unary_op = 243,                 /* unary_op  */
  YYSYMBOL_unary_exp = 244,                /* unary_exp  */
  YYSYMBOL_lambda_list = 245,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 246,               /* lambda_arg  */
  YYSYMBOL_type_list = 247,                /* type_list  */
  YYSYMBOL_call_paren = 248,               /* call_paren  */
  YYSYMBOL_post_op = 249,                  /* post_op  */
  YYSYMBOL_dot_exp = 250,                  /* dot_exp  */
  YYSYMBOL_post_exp = 251,                 /* post_exp  */
  YYSYMBOL_interp_exp = 252,               /* interp_exp  */
  YYSYMBOL_interp = 253,                   /* interp  */
  YYSYMBOL_prim_exp = 254                  /* prim_exp  */
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
#define YYFINAL  214
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2115

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  122
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  133
/* YYNRULES -- Number of rules.  */
#define YYNRULES  330
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  580

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   376


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
     115,   116,   117,   118,   119,   120,   121
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   177,   177,   178,   181,   182,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   197,   199,   206,   215,   219,
     220,   221,   224,   225,   229,   230,   233,   233,   235,   245,
     245,   246,   246,   259,   263,   269,   275,   275,   277,   278,
     280,   281,   283,   284,   286,   289,   289,   290,   290,   292,
     295,   302,   302,   303,   303,   304,   313,   313,   315,   319,
     324,   325,   327,   328,   334,   335,   335,   338,   339,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   370,   375,   375,   376,   377,   389,   391,   391,   394,
     400,   400,   403,   413,   414,   416,   416,   418,   428,   429,
     433,   435,   437,   439,   441,   443,   451,   453,   463,   465,
     468,   470,   474,   474,   476,   477,   478,   479,   483,   484,
     488,   489,   500,   501,   502,   503,   504,   507,   507,   509,
     509,   509,   509,   509,   512,   513,   517,   521,   522,   523,
     527,   528,   531,   532,   533,   537,   537,   538,   539,   541,
     541,   542,   542,   543,   543,   545,   545,   547,   549,   549,
     551,   552,   555,   556,   557,   558,   561,   561,   563,   563,
     565,   565,   567,   578,   587,   587,   587,   587,   587,   589,
     593,   597,   603,   609,   609,   611,   613,   615,   618,   618,
     618,   619,   624,   629,   636,   637,   652,   653,   657,   658,
     661,   661,   661,   662,   663,   663,   666,   667,   669,   669,
     671,   671,   674,   678,   680,   681,   684,   694,   695,   698,
     699,   701,   702,   703,   704,   704,   706,   706,   707,   707,
     707,   707,   708,   708,   709,   709,   710,   710,   710,   712,
     712,   713,   714,   716,   719,   719,   720,   720,   721,   721,
     722,   722,   723,   723,   724,   724,   725,   725,   726,   726,
     727,   727,   728,   728,   729,   729,   731,   731,   734,   734,
     734,   735,   735,   735,   735,   738,   739,   740,   741,   744,
     745,   746,   747,   750,   751,   752,   752,   755,   756,   760,
     760,   762,   762,   764,   773,   774,   776,   778,   781,   783,
     785,   789,   790,   791,   793,   794,   806,   807,   808,   809,
     810,   811,   812,   813,   814,   815,   816,   817,   818,   819,
     820
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
  "break", "continue", "try", "perform", "handle", "retry", "class",
  "struct", "trait", "static", "global", "private", "protect", "abstract",
  "final", "extends", ".", "operator", "typedef", "distinct", "funptr",
  "NOELSE", "union", "const", "...", "varloop", "defer", "\\", "OPID_A",
  "OPID_E", "late", "<integer>", "<float>", "<litteral string>",
  "<litteral char>", "`", "INTERP_EXP", "<comment>", "#include", "#define",
  "#pragma", "#undef", "#ifdef", "#ifndef", "#else", "#if", "\n", "import",
  "<interp string lit>", "<interp string end>", "@<operator id>",
  "&<operator id>", "<identifier>", "+", "++", "-", "--", "*", "/", "%",
  "$", "?", "OPTIONS", ":", "::", "?:", "new", "spork", "fork", "<<<",
  ">>>", "&&", "==", ">=", ">", "<=", "<", "!=", "<<", ">>", "&", "|", "^",
  "||", ":[", "~", "!", "@", "<dynamic_operator>", "RANGE_EMPTY", "UMINUS",
  "UTIMES", "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg", "ast",
  "section", "class_flag", "class_def", "trait_stmt", "trait_stmt_list",
  "trait_section", "trait_ast", "trait_body", "trait_def", "class_ext",
  "traits", "extend_body", "extend_def", "class_body", "id_list",
  "specialized_list", "stmt_list", "fptr_base", "_func_effects",
  "func_effects", "func_base", "fptr_def", "typedef_when", "type_def_type",
  "type_def", "type_decl_array", "type_decl_exp", "type_decl_empty", "arg",
  "arg_list", "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt",
  "retry_stmt", "handler", "$@1", "handler_list", "try_stmt", "opt_id",
  "enum_def", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "defer_stmt",
  "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "dict_list", "range",
  "array", "decl_exp", "func_args", "fptr_args", "arg_type",
  "decl_template", "global", "storage_flag", "access_flag", "flag",
  "final", "modifier", "func_code", "func_def_base", "abstract_fdef",
  "op_op", "op_base", "operator", "op_def", "func_def", "type_decl_base",
  "type_decl_tmpl", "type_decl_noflag", "option", "type_decl_opt",
  "type_decl", "type_decl_flag", "opt_var", "type_decl_flag2",
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
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376
};
#endif

#define YYPACT_NINF (-410)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-247)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     544,  -410,   960,  1381,   655,   244,  -410,    63,  -410,   868,
    -410,    94,   101,   112,  1923,   244,  1261,  -410,  -410,   868,
      35,   127,   244,   244,   244,    53,   103,  -410,  -410,   244,
     244,  -410,  1923,   868,    68,   300,  -410,  -410,  -410,  -410,
    -410,  1442,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,    53,    53,
     149,   149,  1923,  -410,  -410,    59,   544,  -410,  -410,  -410,
    -410,   868,  -410,   244,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,   156,  -410,  -410,  -410,  -410,    54,  -410,  -410,
     235,   109,  -410,   186,  -410,  -410,  -410,  -410,  -410,   420,
    -410,  -410,  -410,   244,  -410,  -410,   -32,    97,    64,    96,
     120,   -29,   189,   138,    16,   163,   117,   132,   300,  -410,
     149,  -410,  -410,   185,   168,  -410,  -410,  1923,  -410,   229,
     248,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,   165,  -410,   264,  -410,  -410,  -410,
    -410,  -410,  1923,    29,  -410,   766,    88,   268,  -410,  -410,
    -410,  -410,   292,  -410,  -410,   227,   262,  1923,   252,  1983,
    1321,   207,   178,   238,  -410,   307,   275,  -410,  -410,   246,
     273,   247,   249,   244,  -410,    42,  -410,   218,   212,   284,
     231,  -410,   324,    41,  -410,   327,    53,   254,    86,  -410,
      68,  -410,  -410,  1442,  -410,    50,  -410,  -410,  -410,   329,
     655,  -410,  -410,    30,  -410,  -410,  -410,    53,  1923,  -410,
     332,  -410,  1923,  1923,  1923,  1923,  1923,  1502,  -410,   918,
     292,  -410,  -410,  2000,    76,    53,    53,  1923,   300,   300,
     300,   300,   300,   300,  -410,  -410,   300,   300,   300,  -410,
     300,  -410,   300,   300,    53,  -410,  -410,  1562,   257,  -410,
      53,   333,  -410,  -410,  -410,  1442,    88,  -410,  -410,   175,
     330,  1623,  -410,  1923,  -410,    53,    46,  -410,    53,  -410,
      53,   267,  1923,   335,    39,  1321,    49,   318,   334,  -410,
    -410,  -410,   275,   230,   301,  -410,  -410,   230,   218,    53,
     212,   266,   337,  -410,    41,  -410,  -410,  -410,  1683,  -410,
    -410,    53,    46,   270,   230,  -410,  -410,  -410,  1442,  1923,
    -410,   272,   271,  -410,   109,  -410,  -410,  -410,  -410,  -410,
     214,   292,   344,    46,   292,   230,   230,  -410,  -410,   230,
     274,   348,   278,  -410,    97,    64,    96,   120,   -29,   189,
     138,    16,   163,   117,   132,  -410,  -410,   353,   356,  1743,
    -410,  -410,  -410,  1803,  -410,  -410,   221,    22,   290,  -410,
     367,  -410,   366,    81,   294,   295,   868,   312,  1923,   868,
    1863,   297,   368,  1923,  -410,    83,   266,   299,  -410,   306,
     346,  -410,   218,   377,   230,  -410,  -410,   385,    56,  -410,
     290,  -410,   386,   361,   230,   383,  -410,   391,   230,   868,
      46,  -410,   122,   396,   399,   400,   403,   324,  -410,   407,
     300,    53,  -410,  -410,   281,  -410,  -410,  1923,   324,   325,
      53,  -410,  -410,  -410,  -410,   230,   230,   402,  -410,    74,
    -410,   868,   289,   328,  -410,  1923,    60,   390,  -410,   170,
    -410,   868,   218,   228,    53,   218,   408,  1073,   327,   340,
      71,  -410,  -410,  -410,    53,   341,   342,   425,  -410,   154,
    -410,   406,  -410,   430,  -410,  -410,  -410,    53,    53,    53,
    -410,   274,  -410,  -410,  -410,  -410,  -410,   186,  1923,  -410,
     327,  -410,   868,   868,  -410,   868,   368,    95,  1923,   345,
     868,  -410,  -410,  -410,  -410,   355,  -410,  -410,   427,   544,
    -410,  1167,  -410,  1073,   428,  -410,  -410,  -410,    46,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,   434,   360,   154,   433,
    1923,   437,  -410,   441,   442,   444,  -410,   109,    46,  -410,
    -410,  -410,  1923,   868,   348,   868,  -410,   218,   544,   544,
     443,  -410,  -410,  -410,   361,  -410,   448,  -410,  -410,   109,
    -410,    53,  -410,  -410,   449,   102,  -410,   868,  -410,   447,
    -410,   452,  -410,   453,  -410,   868,  -410,  -410,  -410,  -410
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   129,     0,     0,     0,   175,   220,     0,   108,     0,
     109,     0,     0,     0,     0,   175,     0,   122,   123,     0,
       0,     0,   175,   175,   175,     0,   193,    53,    54,   175,
     175,   217,     0,     0,   296,     0,   216,   317,   318,   320,
     321,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,   316,   301,   278,   302,   279,     0,     0,
     282,   283,     0,   284,   281,     0,     2,     4,     8,     9,
      10,     6,    13,   175,    14,    83,    86,    42,    90,    89,
      11,    84,     0,    81,    87,    88,    82,     0,    85,    80,
       0,   130,   155,   156,   324,   322,   132,   198,   199,     0,
     200,     7,   221,   175,    12,   157,   251,   254,   256,   258,
     260,   262,   264,   266,   268,   270,   272,   274,     0,   276,
       0,   280,   310,   285,   319,   304,   330,     0,   244,   278,
     279,   247,   248,   143,   139,   241,   239,   240,   238,   140,
     242,   243,   141,   142,     0,   184,     0,   186,   185,   188,
     187,   147,     0,     0,    67,     0,   130,     0,   168,   167,
     170,   171,     0,   169,   173,   172,   177,     0,     0,     0,
       0,     0,     0,     0,   125,     0,     0,   329,    91,     0,
     177,     0,     0,   175,   204,     0,    59,    31,   138,   208,
     212,   214,    57,     0,   194,     0,     0,     0,     0,   119,
     293,   295,   287,     0,   311,     0,   314,   292,    58,   289,
       0,   290,   291,     0,     1,     5,    43,     0,     0,   127,
       0,   128,     0,     0,     0,     0,     0,     0,   149,     0,
       0,   282,   283,     0,     0,     0,     0,   250,     0,     0,
       0,     0,     0,     0,   236,   237,     0,     0,     0,   245,
       0,   246,     0,     0,     0,   286,   327,     0,     0,   309,
       0,     0,   305,   306,   308,     0,     0,   326,   328,     0,
     144,     0,    68,     0,   323,   160,     0,   174,     0,   176,
       0,     0,     0,   316,     0,     0,     0,     0,     0,   124,
      92,    94,    96,   166,   177,   179,    15,   166,    31,     0,
     138,     0,     0,   206,     0,   210,   211,   213,     0,    56,
     215,   162,     0,     0,   166,   118,   294,   312,     0,   250,
     325,     0,     0,   126,   131,   133,   136,   134,   135,   148,
       0,     0,     0,     0,     0,   166,   166,   196,   195,   166,
       0,   249,     0,   253,   255,   257,   259,   261,   263,   265,
     267,   269,   271,   273,   275,   277,   303,   297,     0,     0,
     307,   315,   154,     0,   145,   153,     0,   150,     0,    62,
     159,   164,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   219,     0,   103,     0,     0,    98,    95,     0,
      30,   178,    31,     0,   166,   207,    38,    32,     0,   209,
     235,    65,   161,    47,   166,     0,   313,     0,   166,     0,
       0,   197,     0,     0,     0,     0,     0,   229,   158,   228,
       0,     0,   137,   300,     0,   146,   152,     0,   231,    61,
       0,   163,   181,   180,   182,   166,   166,   120,   111,     0,
     116,     0,     0,     0,   218,     0,   101,   106,   104,     0,
      97,     0,    31,     0,     0,    31,     0,    27,     0,     0,
       0,    33,   234,    64,     0,     0,    48,     0,    44,     0,
     288,    51,   110,     0,   202,   201,   192,     0,     0,     0,
     230,     0,   252,   298,   299,   151,   233,   232,     0,    63,
       0,    49,     0,     0,   112,     0,   219,     0,     0,     0,
       0,   107,    99,    93,    40,     0,   165,    29,     0,    37,
      20,    22,    24,    26,     0,    19,    18,    23,     0,    39,
      35,    34,    66,    45,    46,    50,   204,     0,   224,     0,
       0,     0,   203,     0,     0,     0,   227,    60,     0,   121,
     117,   113,     0,     0,   100,     0,   105,    31,    37,    36,
       0,    21,    25,    28,    47,   222,     0,   225,   226,    52,
      55,     0,   190,   191,     0,     0,   114,   102,    41,     0,
      17,     0,   223,     0,   183,     0,    16,   205,   189,   115
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -410,  -410,   461,   -60,   298,  -410,   -64,  -410,   -51,  -410,
    -410,  -410,  -410,  -285,  -410,  -410,   -85,    78,  -410,    -3,
    -410,  -410,   -89,  -410,  -410,  -410,  -410,  -410,   -55,    12,
     -20,  -405,  -410,     3,  -410,   -49,  -409,    -9,  -410,   176,
    -410,  -410,  -410,  -410,  -410,  -410,    84,  -410,  -410,  -410,
     303,  -410,  -410,  -410,  -410,  -410,  -410,  -163,    47,    -1,
    -165,  -410,   -84,    44,    48,   350,  -175,    75,  -179,  -403,
    -292,  -270,   450,   309,  -410,    13,  -161,  -410,  -410,  -410,
    -410,   245,   250,  -410,  -410,  -368,   296,  -410,   181,  -410,
     287,  -410,   -23,   -14,  -410,  -410,   -40,  -410,     9,  -410,
      92,  -410,  -410,  -104,   -99,   -98,   -93,   174,  -223,  -410,
     255,   256,   259,   253,   269,   251,   260,   261,   276,   258,
     263,   -78,     5,   311,  -410,    77,  -410,   -91,  -410,  -410,
    -174,  -410,  -410
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    65,   549,    67,   179,    68,   510,   511,   512,   513,
     514,    69,   455,   302,   460,    70,   550,   397,   453,    71,
     195,   466,   467,   162,    72,   531,    73,    74,   186,   209,
     233,   369,   370,   401,   402,    75,    76,    77,    78,   291,
     387,   292,    79,   451,    80,   499,   384,   385,   501,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
     261,   145,    92,    93,   157,    94,    95,    96,   276,   312,
     373,   390,   163,   164,   165,   180,   280,   296,   434,    97,
      98,   146,   234,    99,   100,   101,   188,   189,   190,   307,
     191,   192,   102,   445,   103,   528,   529,   104,   418,   419,
     429,   463,   246,   147,   148,   149,   150,   342,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   201,   120,   358,   360,   121,   122,   123,
     206,   124,   125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     168,   155,   193,   156,   208,   187,   215,   285,   247,   228,
     176,   211,   212,   393,   248,   343,   250,   309,   166,   295,
     403,   235,   252,   303,   199,   489,   427,   392,   173,   317,
     461,   198,   264,   222,   222,   193,   193,   270,   207,   262,
     202,   412,   196,   197,   405,   379,   183,   183,   515,   144,
     153,   333,   371,   381,   222,   518,   237,   219,   183,   214,
     238,   172,   216,   175,   222,   414,   415,     5,   167,   416,
     244,   256,   533,   534,   535,   245,   193,   223,   239,   337,
     493,   520,     5,   498,   432,   210,   217,   538,   205,   517,
     210,   361,   521,   447,   223,   210,   128,   372,   249,   169,
      26,   543,   515,    31,   515,   383,   170,   456,   575,   213,
      36,   224,   220,   318,   177,    26,   236,   171,   473,   271,
     184,   184,   380,   255,   458,   474,   266,   320,   224,   223,
     178,   210,   184,   391,   468,   395,   225,   226,   471,   382,
     159,   223,   336,   223,   406,   517,   216,   200,   185,   315,
     223,   235,   410,   225,   226,   413,   573,   223,   210,   183,
     185,   218,   321,   224,   223,   490,   491,   504,   284,   222,
     508,   267,   241,   193,   459,   224,   313,   224,   273,   222,
     502,   340,   222,   362,   224,   338,   364,   287,   225,   226,
    -138,   224,   257,   227,   193,   240,   299,   482,   224,   269,
     225,   226,   225,   226,    31,   242,   193,   155,   253,   225,
     226,    36,   193,   193,   281,   339,   225,   226,   222,   254,
     368,   324,   270,   225,   226,   222,   554,   243,   258,   426,
     265,   193,   505,   526,   355,  -245,   506,   193,   221,   222,
     357,   259,   480,   140,   141,   247,   564,   251,   131,   132,
     205,   248,   193,   250,  -246,   193,   400,   193,   374,   252,
     375,   185,   568,   158,   159,   322,    54,     8,    56,    10,
     268,   222,   367,   376,   330,   222,   193,   409,   274,   394,
     158,   159,   160,   161,   341,   222,   286,   484,   193,   135,
     136,   137,   138,   222,   516,   495,   260,   275,   325,   326,
     327,   328,   278,   279,   153,     2,   290,     3,   301,   127,
     289,   222,   205,   294,   279,   438,   222,   288,   366,   305,
     306,   181,   182,   260,   433,   293,   297,   304,   298,   377,
      20,   308,   311,   314,   319,   323,   356,   363,   359,   378,
     383,   389,   279,   386,   486,   396,   398,   411,   516,   404,
     516,   408,   222,   417,    34,   330,    35,   421,    37,    38,
      39,    40,    41,   475,   422,   205,   341,   437,   420,   428,
     440,   430,   431,   435,   436,   368,   443,   439,   450,    53,
     444,    54,    55,    56,    57,   452,   457,    58,   454,   459,
     464,   465,   469,    59,    60,    61,    62,   470,   193,   208,
     472,   357,   476,   228,   477,   478,   424,   193,   479,   400,
     330,   481,    63,    64,   500,   488,   492,   509,   496,   519,
     523,   524,   368,   368,   368,   183,   266,   442,   525,   530,
     446,   193,   494,   532,   547,   545,   548,   555,   553,   556,
     560,   193,   503,   558,   497,   561,   193,   551,   562,   527,
     563,   572,   574,   570,   193,   193,   193,   576,   577,   578,
     229,    66,   552,   569,   449,   571,   507,   522,   388,   448,
      31,   282,   487,   263,   277,   485,   194,    36,   335,   332,
     310,   300,   542,   539,   540,   399,   541,   537,   557,   215,
     536,   546,   462,   407,   344,   347,   345,   349,   483,   184,
     346,    54,    55,    56,    57,   193,   368,   350,   527,   351,
     353,   316,   348,   230,   231,   232,   354,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,   185,     0,   559,
       0,     0,    63,    64,   566,     0,     0,     0,   193,     0,
       0,   565,   567,     0,     0,   544,     0,     1,     0,     2,
       0,     3,     0,     4,     0,     5,     6,     7,   216,     8,
       9,    10,    11,    12,    13,    14,   579,     0,     0,    15,
      16,    17,    18,    19,    20,     0,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     0,    25,     0,    26,    27,
      28,    29,     0,    30,    31,     0,    32,    33,    34,     0,
      35,    36,    37,    38,    39,    40,    41,     0,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
       0,     0,     0,    53,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,     0,     0,     0,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    64,     1,     0,
       2,     0,     3,     0,     4,   154,     0,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    32,    33,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     0,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,     0,     0,    53,     0,    54,    55,    56,    57,
       0,     0,    58,     0,     0,     0,     0,     0,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    64,     1,
       0,     2,     0,     3,     0,     4,   272,     0,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,    16,    17,    18,    19,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    32,    33,
      34,     0,    35,    36,    37,    38,    39,    40,    41,     0,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,     0,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,     0,     4,    63,    64,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      32,    33,    34,   183,    35,    36,    37,    38,    39,    40,
      41,     0,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,     0,     0,
       0,    59,    60,    61,    62,     2,   126,     3,    31,   127,
       0,     0,     6,     0,     0,    36,     0,     0,     0,     0,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,   184,     0,    54,
      55,    56,    57,     0,     0,     0,     0,     0,     0,     0,
      31,   331,   231,   232,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,   185,     0,     0,     0,     0,
      63,    64,     0,     0,     0,     0,     0,     0,     0,    53,
     128,    54,   129,    56,   130,   131,   132,    58,     0,   133,
       0,     0,     0,    59,    60,    61,    62,     0,     0,   134,
     135,   136,   137,   138,   139,   140,   141,     0,     0,     0,
       0,     0,    63,    64,   142,   143,     1,     0,     2,     0,
       3,     0,   127,     0,     5,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,     0,     0,     0,    59,    60,    61,    62,
       1,     0,     2,     0,     3,     0,   127,     0,     0,     6,
       0,     0,     0,     0,     0,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    34,     0,    35,    36,    37,    38,    39,    40,    41,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,     0,     0,     0,    53,     0,    54,    55,
      56,    57,     0,     0,    58,     0,     0,     0,     0,     0,
      59,    60,    61,    62,   174,     0,     2,     0,     3,     0,
     127,     0,     0,     6,     0,     0,     0,     0,     0,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,    34,     0,    35,    36,    37,
      38,    39,    40,    41,     1,     0,     2,     0,     3,     0,
     127,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,    20,     0,     0,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,    63,    64,    34,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     2,     0,     3,   151,
     127,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,    20,     0,     0,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,    63,    64,    34,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     0,     2,     0,     3,
       0,   127,     0,     0,     6,     0,     0,     0,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,   152,    20,     0,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    63,    64,     0,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     2,     0,     3,
     329,   127,     0,     0,     6,     0,     0,   203,   204,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,    20,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    63,    64,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     2,     0,     3,
       0,   127,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,    20,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    63,    64,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     0,     2,     0,
       3,   365,   127,     0,     0,     6,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,   152,    20,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    63,    64,     0,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,     0,
       3,   151,   127,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,   423,
       3,     0,   127,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,     0,
       3,   425,   127,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,   441,
       3,     0,   127,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,     0,
       3,     0,   127,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,     0,
       3,     0,   127,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   334,     0,     0,     0,     0,
       0,     0,   283,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,     0,     0,     0,    59,    60,    61,    62,
     128,    54,   249,    56,   251,   131,   132,     0,     0,   133,
       0,     0,     0,     0,     0,    63,    64,     0,     0,   134,
     135,   136,   137,   138,   139,   140,   141,     0,     0,     0,
       0,     0,     0,     0,   142,   143
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,     4,    59,    25,    66,   170,   112,    93,
      19,    60,    61,   298,   113,   238,   114,   192,     5,   180,
     312,    99,   115,   188,    33,   430,     4,   297,    15,   203,
     398,    32,   123,     4,     4,    58,    59,     8,    58,   123,
      35,   333,    29,    30,   314,     6,     5,     5,   457,     2,
       3,   230,     6,     4,     4,   458,    88,     3,     5,     0,
      92,    14,    71,    16,     4,   335,   336,    11,     5,   339,
      99,   120,   477,   478,   479,   104,    99,    55,   110,     3,
       6,    10,    11,    23,     3,     9,    73,   490,    41,   457,
       9,   265,   460,    10,    55,     9,    80,    51,    82,     5,
      44,     6,   511,    50,   513,    22,     5,   392,     6,    62,
      57,    89,    58,    63,    79,    44,   103,     5,   410,    90,
      79,    79,   285,   118,   394,     3,   127,    97,    89,    55,
       3,     9,    79,   294,   404,   300,   114,   115,   408,    90,
      37,    55,   233,    55,   318,   513,   155,    79,   107,   198,
      55,   229,   331,   114,   115,   334,   561,    55,     9,     5,
     107,     5,   217,    89,    55,   435,   436,   452,   169,     4,
     455,     6,   108,   196,     4,    89,   196,    89,    90,     4,
      10,   236,     4,     8,    89,   234,   270,     9,   114,   115,
       5,    89,     7,     7,   217,    98,   183,   420,    89,   152,
     114,   115,   114,   115,    50,   109,   229,   210,    91,   114,
     115,    57,   235,   236,   167,   235,   114,   115,     4,    87,
     275,   222,     8,   114,   115,     4,   518,   107,    43,     8,
      62,   254,     4,    79,   254,     6,     8,   260,     3,     4,
     260,    56,   417,   105,   106,   349,   538,    84,    85,    86,
     203,   350,   275,   351,     6,   278,   311,   280,   278,   352,
     280,   107,   547,    36,    37,   218,    81,    15,    83,    17,
       6,     4,   273,     6,   227,     4,   299,     6,    10,   299,
      36,    37,    38,    39,   237,     4,    79,     6,   311,   100,
     101,   102,   103,     4,   457,     6,   111,     5,   223,   224,
     225,   226,    40,    41,   257,     5,    31,     7,    90,     9,
       3,     4,   265,    40,    41,     3,     4,    79,   271,    88,
      89,    23,    24,   111,   373,    79,    79,    43,    79,   282,
      30,     7,     5,    79,     5,     3,    79,     7,     5,     4,
      22,   111,    41,     9,   428,    79,     9,     3,   511,    79,
     513,    79,     4,    79,    54,   308,    56,     4,    58,    59,
      60,    61,    62,   412,     8,   318,   319,   376,    90,    79,
     379,     4,     6,    79,    79,   430,    79,   378,    79,    79,
      12,    81,    82,    83,    84,    79,     9,    87,    42,     4,
       4,    30,     9,    93,    94,    95,    96,     6,   421,   454,
     409,   421,     6,   487,     5,     5,   359,   430,     5,   464,
     363,     4,   112,   113,    24,    90,    14,     9,    90,    79,
      79,    79,   477,   478,   479,     5,   427,   380,     3,    23,
     383,   454,   441,     3,    79,    90,     9,     3,    10,    79,
       3,   464,   451,    10,   445,     4,   469,   511,     6,   469,
       6,     3,     3,    10,   477,   478,   479,    10,     6,     6,
      40,     0,   513,   548,   386,   554,   454,   464,   292,   385,
      50,   168,   428,   123,   165,   427,    26,    57,   233,   229,
     193,   185,   496,   492,   493,   304,   495,   488,   528,   549,
     481,   500,   400,   319,   239,   242,   240,   246,   421,    79,
     241,    81,    82,    83,    84,   528,   561,   247,   528,   248,
     252,   200,   243,    93,    94,    95,   253,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   250,   107,    -1,   530,
      -1,    -1,   112,   113,   543,    -1,    -1,    -1,   561,    -1,
      -1,   542,   545,    -1,    -1,   498,    -1,     3,    -1,     5,
      -1,     7,    -1,     9,    -1,    11,    12,    13,   567,    15,
      16,    17,    18,    19,    20,    21,   575,    -1,    -1,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,
      46,    47,    -1,    49,    50,    -1,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,     3,    -1,
       5,    -1,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,     3,
      -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,    -1,     9,   112,   113,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,     5,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,     5,     6,     7,    50,     9,
      -1,    -1,    12,    -1,    -1,    57,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    93,    94,    95,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,   107,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      -1,    -1,    -1,    93,    94,    95,    96,    -1,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
      -1,    -1,   112,   113,   114,   115,     3,    -1,     5,    -1,
       7,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
       3,    -1,     5,    -1,     7,    -1,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95,    96,     3,    -1,     5,    -1,     7,    -1,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,     3,    -1,     5,    -1,     7,    -1,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,   112,   113,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,     5,    -1,     7,     8,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,   112,   113,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,     5,    -1,     7,
      -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    90,    30,    -1,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,   112,   113,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,     5,    -1,     7,
       8,     9,    -1,    -1,    12,    -1,    -1,    75,    76,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,     5,    -1,     7,
      -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,     5,    -1,
       7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    90,    30,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,   112,   113,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,    -1,
       7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,     6,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,    -1,
       7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,     6,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,    -1,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,    -1,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
      80,    81,    82,    83,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    32,    33,    34,    35,    42,    44,    45,    46,    47,
      49,    50,    52,    53,    54,    56,    57,    58,    59,    60,
      61,    62,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    79,    81,    82,    83,    84,    87,    93,
      94,    95,    96,   112,   113,   123,   124,   125,   127,   133,
     137,   141,   146,   148,   149,   157,   158,   159,   160,   164,
     166,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   184,   185,   187,   188,   189,   201,   202,   205,
     206,   207,   214,   216,   219,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     246,   249,   250,   251,   253,   254,     6,     9,    80,    82,
      84,    85,    86,    89,    99,   100,   101,   102,   103,   104,
     105,   106,   114,   115,   180,   183,   203,   225,   226,   227,
     228,     8,    90,   180,    10,   141,   181,   186,    36,    37,
      38,    39,   145,   194,   195,   196,   197,     5,   159,     5,
       5,     5,   180,   197,     3,   180,   159,    79,     3,   126,
     197,   126,   126,     5,    79,   107,   150,   152,   208,   209,
     210,   212,   213,   214,   194,   142,   197,   197,   181,   159,
      79,   245,   244,    75,    76,   180,   252,   152,   150,   151,
       9,   157,   157,   180,     0,   125,   159,   197,     5,     3,
      58,     3,     4,    55,    89,   114,   115,     7,   184,    40,
      93,    94,    95,   152,   204,   243,   197,    88,    92,   110,
      98,   108,   109,   107,    99,   104,   224,   225,   226,    82,
     227,    84,   228,    91,    87,   244,   157,     7,    43,    56,
     111,   182,   184,   187,   249,    62,   181,     6,     6,   180,
       8,    90,    10,    90,    10,     5,   190,   195,    40,    41,
     198,   180,   172,    79,   181,   179,    79,     9,    79,     3,
      31,   161,   163,    79,    40,   198,   199,    79,    79,   197,
     208,    90,   135,   182,    43,    88,    89,   211,     7,   188,
     212,     5,   191,   152,    79,   157,   245,   252,    63,     5,
      97,   150,   180,     3,   181,   189,   189,   189,   189,     8,
     180,    93,   204,   190,    55,   203,   249,     3,   157,   152,
     150,   180,   229,   230,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   152,    79,   152,   247,     5,
     248,   252,     8,     7,   184,     8,   180,   181,   150,   153,
     154,     6,    51,   192,   152,   152,     6,   180,     4,     6,
     179,     4,    90,    22,   168,   169,     9,   162,   161,   111,
     193,   198,   193,   135,   152,   182,    79,   139,     9,   210,
     150,   155,   156,   192,    79,   193,   252,   229,    79,     6,
     190,     3,   192,   190,   193,   193,   193,    79,   220,   221,
      90,     4,     8,     6,   180,     8,     8,     4,    79,   222,
       4,     6,     3,   157,   200,    79,    79,   159,     3,   181,
     159,     6,   180,    79,    12,   215,   180,    10,   168,   139,
      79,   165,    79,   140,    42,   134,   135,     9,   193,     4,
     136,   207,   222,   223,     4,    30,   143,   144,   193,     9,
       6,   193,   159,   192,     3,   157,     6,     5,     5,     5,
     188,     4,   230,   247,     6,   186,   184,   185,    90,   153,
     193,   193,    14,     6,   159,     6,    90,   181,    23,   167,
      24,   170,    10,   159,   135,     4,     8,   151,   135,     9,
     128,   129,   130,   131,   132,   158,   179,   207,   191,    79,
      10,   207,   155,    79,    79,     3,    79,   152,   217,   218,
      23,   147,     3,   153,   153,   153,   220,   181,   191,   159,
     159,   159,   215,     6,   180,    90,   159,    79,     9,   124,
     138,   128,   130,    10,   192,     3,    79,   218,    10,   181,
       3,     4,     6,     6,   192,   181,   159,   141,   135,   138,
      10,   144,     3,   153,     3,     6,    10,     6,     6,   159
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   122,   123,   123,   124,   124,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   132,   133,   134,
     134,   135,   135,   136,   136,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   143,   143,   144,   144,   145,
     146,   147,   147,   148,   148,   149,   150,   150,   151,   152,
     153,   153,   154,   154,   155,   156,   156,   157,   157,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   160,   162,   161,   163,   163,   164,   165,   165,   166,
     167,   167,   168,   169,   169,   170,   170,   171,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   173,   174,   175,
     176,   176,   177,   177,   178,   178,   178,   178,   179,   179,
     180,   180,   181,   181,   181,   181,   181,   182,   182,   183,
     183,   183,   183,   183,   184,   184,   184,   185,   185,   185,
     186,   186,   187,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   194,   195,   195,
     196,   196,   197,   197,   197,   197,   198,   198,   199,   199,
     200,   200,   201,   202,   203,   203,   203,   203,   203,   204,
     204,   204,   204,   205,   205,   206,   206,   206,   207,   207,
     207,   207,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   211,   212,   213,   213,   214,   214,   215,   215,
     216,   216,   217,   217,   218,   218,   219,   220,   220,   221,
     221,   222,   222,   222,   223,   223,   224,   224,   225,   225,
     225,   225,   226,   226,   227,   227,   228,   228,   228,   229,
     229,   230,   230,   230,   231,   231,   232,   232,   233,   233,
     234,   234,   235,   235,   236,   236,   237,   237,   238,   238,
     239,   239,   240,   240,   241,   241,   242,   242,   243,   243,
     243,   243,   243,   243,   243,   244,   244,   244,   244,   244,
     244,   244,   244,   245,   245,   246,   246,   247,   247,   248,
     248,   249,   249,   250,   251,   251,   251,   251,   251,   251,
     251,   252,   252,   252,   253,   253,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     9,     8,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     0,     7,     2,
       0,     0,     2,     1,     2,     6,     1,     0,     1,     3,
       2,     4,     1,     2,     4,     2,     2,     0,     1,     5,
       6,     0,     2,     1,     1,     7,     2,     1,     1,     1,
       4,     2,     1,     3,     2,     1,     3,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     4,     1,     2,     3,     1,     0,     6,
       2,     0,     5,     1,     2,     2,     0,     6,     1,     1,
       5,     5,     6,     7,     8,    10,     5,     7,     3,     2,
       5,     7,     1,     1,     3,     2,     3,     2,     2,     1,
       1,     3,     1,     3,     3,     3,     3,     3,     0,     1,
       1,     1,     1,     1,     3,     4,     5,     2,     3,     2,
       3,     5,     5,     4,     4,     1,     1,     1,     4,     2,
       1,     2,     1,     2,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     0,     2,     1,
       1,     1,     5,     9,     1,     1,     1,     1,     1,     8,
       6,     6,     4,     1,     2,     3,     3,     4,     1,     1,
       1,     5,     5,     6,     1,     8,     2,     3,     1,     3,
       1,     1,     0,     2,     1,     2,     1,     1,     1,     0,
       1,     1,     2,     3,     1,     2,     7,     3,     1,     1,
       2,     1,     2,     2,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     5,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     5,     2,
       2,     2,     2,     1,     2,     2,     1,     1,     3,     3,
       2,     1,     1,     3,     1,     2,     2,     3,     2,     2,
       1,     1,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     2,     3,     2,
       2
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
  YYUSE (yykind);
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
#line 177 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2443 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 178 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2449 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 181 "src/gwion.y"
            { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2455 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 182 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2461 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 186 "src/gwion.y"
                 { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2467 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 187 "src/gwion.y"
                 { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2473 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 188 "src/gwion.y"
                 { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2479 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 189 "src/gwion.y"
                 { (yyval.section) = new_section_trait_def(mpool(arg), (yyvsp[0].trait_def)); }
#line 2485 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 190 "src/gwion.y"
                 { (yyval.section) = new_section_extend_def(mpool(arg), (yyvsp[0].extend_def)); }
#line 2491 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 191 "src/gwion.y"
                 { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2497 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 192 "src/gwion.y"
                 { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2503 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 193 "src/gwion.y"
                 { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2509 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 194 "src/gwion.y"
                 { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2515 "src/parser.c"
    break;

  case 15: /* class_flag: flag modifier  */
#line 197 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2521 "src/parser.c"
    break;

  case 16: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 200 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2532 "src/parser.c"
    break;

  case 17: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 207 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2544 "src/parser.c"
    break;

  case 18: /* trait_stmt: exp_stmt  */
#line 215 "src/gwion.y"
                     {
    if((yyvsp[0].stmt)->d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2554 "src/parser.c"
    break;

  case 20: /* trait_stmt_list: trait_stmt  */
#line 220 "src/gwion.y"
                             { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2560 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 221 "src/gwion.y"
                             { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2566 "src/parser.c"
    break;

  case 22: /* trait_section: trait_stmt_list  */
#line 224 "src/gwion.y"
                       { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2572 "src/parser.c"
    break;

  case 23: /* trait_section: func_def  */
#line 225 "src/gwion.y"
                 { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2578 "src/parser.c"
    break;

  case 24: /* trait_ast: trait_section  */
#line 229 "src/gwion.y"
                  { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2584 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_ast trait_section  */
#line 230 "src/gwion.y"
                            { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2590 "src/parser.c"
    break;

  case 27: /* trait_body: %empty  */
#line 233 "src/gwion.y"
                         { (yyval.ast) = NULL; }
#line 2596 "src/parser.c"
    break;

  case 28: /* trait_def: "trait" class_flag "<identifier>" traits "{" trait_body "}"  */
#line 236 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-1].ast), (yylsp[-4]));
      (yyval.trait_def)->traits = (yyvsp[-3].id_list);
      if(GET_FLAG((yyval.trait_def), abstract)) {
        { scanner_secondary(arg, "abstract should not be used on ${/+trait{0} declaration", (yylsp[-4])); }
        UNSET_FLAG((yyval.trait_def), abstract);
      }
    }
#line 2609 "src/parser.c"
    break;

  case 29: /* class_ext: "extends" type_decl_exp  */
#line 245 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2615 "src/parser.c"
    break;

  case 30: /* class_ext: %empty  */
#line 245 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2621 "src/parser.c"
    break;

  case 31: /* traits: %empty  */
#line 246 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2627 "src/parser.c"
    break;

  case 32: /* traits: ":" id_list  */
#line 246 "src/gwion.y"
                                     {
  ID_List base = (yyval.id_list) = (yyvsp[0].id_list);
  while(base) {
    ID_List curr = base->next;
    while(curr) {
      if(base->xid == curr->xid) // could use ID_List location
      { scanner_secondary(arg, "duplicated trait", (yylsp[0])); }
      curr = curr->next;
    }    
    base = base->next;
  }
}
#line 2644 "src/parser.c"
    break;

  case 33: /* extend_body: func_def  */
#line 259 "src/gwion.y"
             {
    Section * section= new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    (yyval.ast) = new_ast(mpool(arg), section, NULL); LIST_FIRST((yyval.ast))
  }
#line 2653 "src/parser.c"
    break;

  case 34: /* extend_body: extend_body func_def  */
#line 263 "src/gwion.y"
                         {
    Section * section = new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, new_ast(mpool(arg), section, NULL))
  }
#line 2662 "src/parser.c"
    break;

  case 35: /* extend_def: "extends" type_decl_empty traits "{" extend_body "}"  */
#line 269 "src/gwion.y"
                                                                 {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-1].ast));
  (yyval.extend_def)->traits = (yyvsp[-3].id_list);
}
#line 2671 "src/parser.c"
    break;

  case 37: /* class_body: %empty  */
#line 275 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2677 "src/parser.c"
    break;

  case 38: /* id_list: "<identifier>"  */
#line 277 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2683 "src/parser.c"
    break;

  case 39: /* id_list: id_list "," "<identifier>"  */
#line 278 "src/gwion.y"
                         { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2689 "src/parser.c"
    break;

  case 40: /* specialized_list: "<identifier>" traits  */
#line 280 "src/gwion.y"
                            { (yyval.specialized_list) = new_specialized_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].id_list), (yylsp[-1])); LIST_FIRST((yyval.specialized_list)) }
#line 2695 "src/parser.c"
    break;

  case 41: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 281 "src/gwion.y"
                                         { LIST_NEXT((yyval.specialized_list), (yyvsp[-3].specialized_list), Specialized_List, new_specialized_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].id_list), (yylsp[-1]))) }
#line 2701 "src/parser.c"
    break;

  case 42: /* stmt_list: stmt  */
#line 283 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2707 "src/parser.c"
    break;

  case 43: /* stmt_list: stmt_list stmt  */
#line 284 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2713 "src/parser.c"
    break;

  case 44: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 286 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2720 "src/parser.c"
    break;

  case 45: /* _func_effects: "perform" "<identifier>"  */
#line 289 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2726 "src/parser.c"
    break;

  case 46: /* _func_effects: _func_effects "<identifier>"  */
#line 289 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2732 "src/parser.c"
    break;

  case 47: /* func_effects: %empty  */
#line 290 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2738 "src/parser.c"
    break;

  case 48: /* func_effects: _func_effects  */
#line 290 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2744 "src/parser.c"
    break;

  case 49: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 292 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2751 "src/parser.c"
    break;

  case 50: /* fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";"  */
#line 295 "src/gwion.y"
                                                                 {
  (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
  (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-4].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2762 "src/parser.c"
    break;

  case 51: /* typedef_when: %empty  */
#line 302 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2768 "src/parser.c"
    break;

  case 52: /* typedef_when: "when" binary_exp  */
#line 302 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2774 "src/parser.c"
    break;

  case 53: /* type_def_type: "typedef"  */
#line 303 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2780 "src/parser.c"
    break;

  case 54: /* type_def_type: "distinct"  */
#line 303 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2786 "src/parser.c"
    break;

  case 55: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 304 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2799 "src/parser.c"
    break;

  case 56: /* type_decl_array: type_decl array  */
#line 313 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2805 "src/parser.c"
    break;

  case 58: /* type_decl_exp: type_decl_array  */
#line 315 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2813 "src/parser.c"
    break;

  case 59: /* type_decl_empty: type_decl_array  */
#line 319 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2821 "src/parser.c"
    break;

  case 60: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 324 "src/gwion.y"
                                            { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2827 "src/parser.c"
    break;

  case 61: /* arg: type_decl_array arg_decl  */
#line 325 "src/gwion.y"
                             { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2833 "src/parser.c"
    break;

  case 62: /* arg_list: arg  */
#line 327 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2839 "src/parser.c"
    break;

  case 63: /* arg_list: arg_list "," arg  */
#line 328 "src/gwion.y"
                      {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
   }
#line 2849 "src/parser.c"
    break;

  case 64: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 334 "src/gwion.y"
                                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2855 "src/parser.c"
    break;

  case 65: /* fptr_list: fptr_arg  */
#line 335 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2861 "src/parser.c"
    break;

  case 66: /* fptr_list: fptr_list "," fptr_arg  */
#line 335 "src/gwion.y"
                                                                         { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2867 "src/parser.c"
    break;

  case 67: /* code_stmt: "{" "}"  */
#line 338 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2873 "src/parser.c"
    break;

  case 68: /* code_stmt: "{" stmt_list "}"  */
#line 339 "src/gwion.y"
                      { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2879 "src/parser.c"
    break;

  case 69: /* stmt_pp: "<comment>"  */
#line 343 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2885 "src/parser.c"
    break;

  case 70: /* stmt_pp: "#include"  */
#line 344 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2891 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#define"  */
#line 345 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2897 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#pragma"  */
#line 346 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2903 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#undef"  */
#line 347 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2909 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#ifdef"  */
#line 348 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2915 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#ifndef"  */
#line 349 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2921 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#else"  */
#line 350 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2927 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#if"  */
#line 351 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2933 "src/parser.c"
    break;

  case 78: /* stmt_pp: "\n"  */
#line 352 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2939 "src/parser.c"
    break;

  case 79: /* stmt_pp: "import"  */
#line 353 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_import, (yyvsp[0].sval), (yyloc)); }
#line 2945 "src/parser.c"
    break;

  case 91: /* retry_stmt: "retry" ";"  */
#line 370 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_retry, (yylsp[-1]));
}
#line 2955 "src/parser.c"
    break;

  case 92: /* $@1: %empty  */
#line 375 "src/gwion.y"
                  { arg->handling = true; }
#line 2961 "src/parser.c"
    break;

  case 93: /* handler: "handle" $@1 opt_id stmt  */
#line 375 "src/gwion.y"
                                                        { (yyval.handler_list) = new_handler_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])); arg->handling = false; }
#line 2967 "src/parser.c"
    break;

  case 95: /* handler_list: handler_list handler  */
#line 377 "src/gwion.y"
                          {
        if(!(yyvsp[-1].handler_list)->xid)
        { parser_error(&(yylsp[0]), arg, "specific `handle` after a catch-all block", 0); YYERROR; }
        Handler_List list = (yyvsp[0].handler_list);
        while(list) {
          if(list->xid == (yyvsp[-1].handler_list)->xid)
          { parser_error(&(yylsp[0]), arg, "duplicated `handle`", 0); YYERROR; }
          list = list->next;
        }
        (yyval.handler_list) = (yyvsp[-1].handler_list);
        (yyvsp[-1].handler_list)->next = (yyvsp[0].handler_list);
  }
#line 2984 "src/parser.c"
    break;

  case 96: /* try_stmt: "try" stmt handler_list  */
#line 389 "src/gwion.y"
                                  { (yyval.stmt) = new_stmt_try(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].handler_list)); }
#line 2990 "src/parser.c"
    break;

  case 98: /* opt_id: %empty  */
#line 391 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2996 "src/parser.c"
    break;

  case 99: /* enum_def: "enum" flag "<identifier>" "{" id_list "}"  */
#line 394 "src/gwion.y"
                                   {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 3006 "src/parser.c"
    break;

  case 100: /* when_exp: "when" exp  */
#line 400 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3012 "src/parser.c"
    break;

  case 101: /* when_exp: %empty  */
#line 400 "src/gwion.y"
                                                 { (yyval.exp) = NULL; }
#line 3018 "src/parser.c"
    break;

  case 102: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 403 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 3031 "src/parser.c"
    break;

  case 103: /* match_list: match_case_stmt  */
#line 413 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 3037 "src/parser.c"
    break;

  case 104: /* match_list: match_list match_case_stmt  */
#line 414 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 3043 "src/parser.c"
    break;

  case 105: /* where_stmt: "where" stmt  */
#line 416 "src/gwion.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3049 "src/parser.c"
    break;

  case 106: /* where_stmt: %empty  */
#line 416 "src/gwion.y"
                                        { (yyval.stmt) = NULL; }
#line 3055 "src/parser.c"
    break;

  case 107: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 418 "src/gwion.y"
                                                      {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 3068 "src/parser.c"
    break;

  case 108: /* flow: "while"  */
#line 428 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3074 "src/parser.c"
    break;

  case 109: /* flow: "until"  */
#line 429 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3080 "src/parser.c"
    break;

  case 110: /* loop_stmt: flow "(" exp ")" stmt  */
#line 434 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].stmt_t), (yyvsp[-2].exp), (yyvsp[0].stmt), false, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 3086 "src/parser.c"
    break;

  case 111: /* loop_stmt: "do" stmt flow exp ";"  */
#line 436 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].stmt_t), (yyvsp[-1].exp), (yyvsp[-3].stmt), true, (yyloc)); LIST_REM((yyvsp[-2].stmt_t)) }
#line 3092 "src/parser.c"
    break;

  case 112: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 438 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 3098 "src/parser.c"
    break;

  case 113: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 440 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 3104 "src/parser.c"
    break;

  case 114: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 442 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-5].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 3110 "src/parser.c"
    break;

  case 115: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 444 "src/gwion.y"
      {
        (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-5].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc));
        (yyval.stmt)->d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
        (yyval.stmt)->d.stmt_each.idx->sym = (yyvsp[-7].sym);
        (yyval.stmt)->d.stmt_each.idx->pos = (yylsp[-7]);
        (yyval.stmt)->d.stmt_each.idx->is_var = (yyvsp[-3].yybool);
      }
#line 3122 "src/parser.c"
    break;

  case 116: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 452 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 3128 "src/parser.c"
    break;

  case 117: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 454 "src/gwion.y"
      {
        (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc));
        (yyval.stmt)->d.stmt_loop.idx = mp_malloc(mpool(arg), EachIdx);
        (yyval.stmt)->d.stmt_loop.idx->sym = (yyvsp[-4].sym);
        (yyval.stmt)->d.stmt_loop.idx->pos = (yylsp[-4]);
        LIST_REM((yyvsp[-2].exp))
      }
#line 3140 "src/parser.c"
    break;

  case 118: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 463 "src/gwion.y"
                                             { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 3146 "src/parser.c"
    break;

  case 119: /* defer_stmt: "defer" stmt  */
#line 465 "src/gwion.y"
                         { (yyval.stmt) = new_stmt_defer(mpool(arg), (yyvsp[0].stmt), (yyloc)); }
#line 3152 "src/parser.c"
    break;

  case 120: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 469 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 3158 "src/parser.c"
    break;

  case 121: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 471 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 3164 "src/parser.c"
    break;

  case 122: /* breaks: "break"  */
#line 474 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3170 "src/parser.c"
    break;

  case 123: /* breaks: "continue"  */
#line 474 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3176 "src/parser.c"
    break;

  case 124: /* jump_stmt: "return" exp ";"  */
#line 476 "src/gwion.y"
                     { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 3182 "src/parser.c"
    break;

  case 125: /* jump_stmt: "return" ";"  */
#line 477 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 3188 "src/parser.c"
    break;

  case 126: /* jump_stmt: breaks "<integer>" ";"  */
#line 478 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].stmt_t), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 3194 "src/parser.c"
    break;

  case 127: /* jump_stmt: breaks ";"  */
#line 479 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].stmt_t), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 3200 "src/parser.c"
    break;

  case 128: /* exp_stmt: exp ";"  */
#line 483 "src/gwion.y"
            { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 3206 "src/parser.c"
    break;

  case 129: /* exp_stmt: ";"  */
#line 484 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 3212 "src/parser.c"
    break;

  case 130: /* exp: binary_exp  */
#line 488 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 3218 "src/parser.c"
    break;

  case 131: /* exp: exp "," binary_exp  */
#line 490 "src/gwion.y"
    {
      if((yyvsp[0].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp))
    }
#line 3230 "src/parser.c"
    break;

  case 133: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 501 "src/gwion.y"
                                 { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3236 "src/parser.c"
    break;

  case 134: /* binary_exp: binary_exp "@" decl_exp  */
#line 502 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3242 "src/parser.c"
    break;

  case 135: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 503 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3248 "src/parser.c"
    break;

  case 136: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 504 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3254 "src/parser.c"
    break;

  case 137: /* call_template: ":[" type_list "]"  */
#line 507 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3260 "src/parser.c"
    break;

  case 138: /* call_template: %empty  */
#line 507 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3266 "src/parser.c"
    break;

  case 144: /* array_exp: "[" exp "]"  */
#line 512 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 3272 "src/parser.c"
    break;

  case 145: /* array_exp: "[" exp "]" array_exp  */
#line 513 "src/gwion.y"
                          {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3281 "src/parser.c"
    break;

  case 146: /* array_exp: "[" exp "]" "[" "]"  */
#line 517 "src/gwion.y"
                         { LIST_REM(2) parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3287 "src/parser.c"
    break;

  case 147: /* array_empty: "[" "]"  */
#line 521 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3293 "src/parser.c"
    break;

  case 148: /* array_empty: array_empty "[" "]"  */
#line 522 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3299 "src/parser.c"
    break;

  case 149: /* array_empty: array_empty array_exp  */
#line 523 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3305 "src/parser.c"
    break;

  case 150: /* dict_list: binary_exp ":" binary_exp  */
#line 527 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3311 "src/parser.c"
    break;

  case 151: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 528 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3317 "src/parser.c"
    break;

  case 152: /* range: "[" exp ":" exp "]"  */
#line 531 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM((yyvsp[-3].exp)) LIST_REM((yyvsp[-1].exp)) }
#line 3323 "src/parser.c"
    break;

  case 153: /* range: "[" exp ":" "]"  */
#line 532 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 3329 "src/parser.c"
    break;

  case 154: /* range: "[" ":" exp "]"  */
#line 533 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 3335 "src/parser.c"
    break;

  case 158: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 539 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3341 "src/parser.c"
    break;

  case 159: /* func_args: "(" arg_list  */
#line 541 "src/gwion.y"
                          { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3347 "src/parser.c"
    break;

  case 160: /* func_args: "("  */
#line 541 "src/gwion.y"
                                                          { (yyval.arg_list) = NULL; }
#line 3353 "src/parser.c"
    break;

  case 161: /* fptr_args: "(" fptr_list  */
#line 542 "src/gwion.y"
                         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3359 "src/parser.c"
    break;

  case 162: /* fptr_args: "("  */
#line 542 "src/gwion.y"
                                                         { (yyval.arg_list) = NULL; }
#line 3365 "src/parser.c"
    break;

  case 163: /* arg_type: "..." ")"  */
#line 543 "src/gwion.y"
                    { (yyval.fbflag) = fbflag_variadic; }
#line 3371 "src/parser.c"
    break;

  case 164: /* arg_type: ")"  */
#line 543 "src/gwion.y"
                                                   { (yyval.fbflag) = 0; }
#line 3377 "src/parser.c"
    break;

  case 165: /* decl_template: ":[" specialized_list "]"  */
#line 545 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); LIST_REM(2) }
#line 3383 "src/parser.c"
    break;

  case 166: /* decl_template: %empty  */
#line 545 "src/gwion.y"
                                                                    { (yyval.specialized_list) = NULL; }
#line 3389 "src/parser.c"
    break;

  case 167: /* global: "global"  */
#line 547 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = true; }
#line 3395 "src/parser.c"
    break;

  case 168: /* storage_flag: "static"  */
#line 549 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3401 "src/parser.c"
    break;

  case 170: /* access_flag: "private"  */
#line 551 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3407 "src/parser.c"
    break;

  case 171: /* access_flag: "protect"  */
#line 552 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3413 "src/parser.c"
    break;

  case 172: /* flag: access_flag  */
#line 555 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3419 "src/parser.c"
    break;

  case 173: /* flag: storage_flag  */
#line 556 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3425 "src/parser.c"
    break;

  case 174: /* flag: access_flag storage_flag  */
#line 557 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3431 "src/parser.c"
    break;

  case 175: /* flag: %empty  */
#line 558 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3437 "src/parser.c"
    break;

  case 176: /* final: "final"  */
#line 561 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3443 "src/parser.c"
    break;

  case 177: /* final: %empty  */
#line 561 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3449 "src/parser.c"
    break;

  case 178: /* modifier: "abstract" final  */
#line 563 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3455 "src/parser.c"
    break;

  case 181: /* func_code: ";"  */
#line 565 "src/gwion.y"
                           { (yyval.stmt) = NULL; }
#line 3461 "src/parser.c"
    break;

  case 182: /* func_def_base: "fun" func_base func_args arg_type func_code  */
#line 567 "src/gwion.y"
                                                 {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt));
//    $$->trait = $5;
    if(!(yyvsp[0].stmt)) {
      SET_FLAG((yyvsp[-3].func_base), abstract);
    }
  }
#line 3475 "src/parser.c"
    break;

  case 183: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 579 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3487 "src/parser.c"
    break;

  case 189: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 590 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), (yyvsp[-3].arg_list), ae_flag_none, (yylsp[-6])); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3495 "src/parser.c"
    break;

  case 190: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 594 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3503 "src/parser.c"
    break;

  case 191: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 598 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3513 "src/parser.c"
    break;

  case 192: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 604 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3522 "src/parser.c"
    break;

  case 193: /* operator: "operator"  */
#line 609 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3528 "src/parser.c"
    break;

  case 194: /* operator: "operator" global  */
#line 609 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3534 "src/parser.c"
    break;

  case 195: /* op_def: operator op_base code_stmt  */
#line 612 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3540 "src/parser.c"
    break;

  case 196: /* op_def: operator op_base ";"  */
#line 614 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3546 "src/parser.c"
    break;

  case 197: /* op_def: operator "abstract" op_base ";"  */
#line 616 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3552 "src/parser.c"
    break;

  case 200: /* func_def: op_def  */
#line 618 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 3558 "src/parser.c"
    break;

  case 201: /* func_def: operator "new" func_args arg_type code_stmt  */
#line 620 "src/gwion.y"
    { Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[-4].flag), (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt));
    }
#line 3567 "src/parser.c"
    break;

  case 202: /* func_def: operator "new" func_args arg_type ";"  */
#line 625 "src/gwion.y"
    { Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3576 "src/parser.c"
    break;

  case 203: /* func_def: operator "abstract" "new" func_args arg_type ";"  */
#line 630 "src/gwion.y"
    { Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[-5].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3585 "src/parser.c"
    break;

  case 204: /* type_decl_base: "<identifier>"  */
#line 636 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3591 "src/parser.c"
    break;

  case 205: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args arg_type func_effects ")"  */
#line 637 "src/gwion.y"
                                                                               {
      const Symbol name = sig_name(arg, (yylsp[-5]).first);
      (yyval.type_decl) = new_type_decl(mpool(arg), name, (yylsp[-7]));
      Func_Base *fb = new_func_base(mpool(arg), (yyvsp[-5].type_decl), name, NULL, (yyvsp[-6].flag), (yylsp[-7]));
      if((yyvsp[-4].specialized_list))
        fb->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].specialized_list));
      fb->args = (yyvsp[-3].arg_list);
      fb->fbflag |= (yyvsp[-2].fbflag);
      const Fptr_Def fptr = new_fptr_def(mpool(arg), fb);
      fptr->base->effects.ptr = (yyvsp[-1].vector).ptr;
      (yyval.type_decl)->fptr = fptr;
  }
#line 3608 "src/parser.c"
    break;

  case 206: /* type_decl_tmpl: type_decl_base call_template  */
#line 652 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3614 "src/parser.c"
    break;

  case 207: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 653 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3620 "src/parser.c"
    break;

  case 209: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 658 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3626 "src/parser.c"
    break;

  case 210: /* option: "?"  */
#line 661 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3632 "src/parser.c"
    break;

  case 211: /* option: OPTIONS  */
#line 661 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3638 "src/parser.c"
    break;

  case 212: /* option: %empty  */
#line 661 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3644 "src/parser.c"
    break;

  case 213: /* type_decl_opt: type_decl_noflag option  */
#line 662 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3650 "src/parser.c"
    break;

  case 215: /* type_decl: type_decl_flag type_decl_opt  */
#line 663 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3656 "src/parser.c"
    break;

  case 216: /* type_decl_flag: "late"  */
#line 666 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3662 "src/parser.c"
    break;

  case 217: /* type_decl_flag: "const"  */
#line 667 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3668 "src/parser.c"
    break;

  case 218: /* opt_var: "var"  */
#line 669 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 3674 "src/parser.c"
    break;

  case 219: /* opt_var: %empty  */
#line 669 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 3680 "src/parser.c"
    break;

  case 220: /* type_decl_flag2: "var"  */
#line 671 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3686 "src/parser.c"
    break;

  case 222: /* union_decl: "<identifier>" ";"  */
#line 674 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yylsp[-1]));
}
#line 3695 "src/parser.c"
    break;

  case 223: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 678 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 3701 "src/parser.c"
    break;

  case 225: /* union_list: union_decl union_list  */
#line 681 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 3707 "src/parser.c"
    break;

  case 226: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 684 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3719 "src/parser.c"
    break;

  case 227: /* var_decl_list: var_decl "," var_decl_list  */
#line 694 "src/gwion.y"
                               { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3725 "src/parser.c"
    break;

  case 228: /* var_decl_list: var_decl  */
#line 695 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3731 "src/parser.c"
    break;

  case 229: /* var_decl: "<identifier>"  */
#line 698 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yylsp[0])); }
#line 3737 "src/parser.c"
    break;

  case 230: /* var_decl: "<identifier>" array  */
#line 699 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3743 "src/parser.c"
    break;

  case 231: /* arg_decl: "<identifier>"  */
#line 701 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3749 "src/parser.c"
    break;

  case 232: /* arg_decl: "<identifier>" array_empty  */
#line 702 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3755 "src/parser.c"
    break;

  case 233: /* arg_decl: "<identifier>" array_exp  */
#line 703 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 3761 "src/parser.c"
    break;

  case 235: /* fptr_arg_decl: %empty  */
#line 704 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3767 "src/parser.c"
    break;

  case 249: /* opt_exp: exp  */
#line 712 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3773 "src/parser.c"
    break;

  case 250: /* opt_exp: %empty  */
#line 712 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3779 "src/parser.c"
    break;

  case 252: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 715 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3785 "src/parser.c"
    break;

  case 253: /* con_exp: log_or_exp "?:" con_exp  */
#line 717 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3791 "src/parser.c"
    break;

  case 255: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 719 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3797 "src/parser.c"
    break;

  case 257: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 720 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3803 "src/parser.c"
    break;

  case 259: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 721 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3809 "src/parser.c"
    break;

  case 261: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 722 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3815 "src/parser.c"
    break;

  case 263: /* and_exp: and_exp "&" eq_exp  */
#line 723 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3821 "src/parser.c"
    break;

  case 265: /* eq_exp: eq_exp eq_op rel_exp  */
#line 724 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3827 "src/parser.c"
    break;

  case 267: /* rel_exp: rel_exp rel_op shift_exp  */
#line 725 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3833 "src/parser.c"
    break;

  case 269: /* shift_exp: shift_exp shift_op add_exp  */
#line 726 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3839 "src/parser.c"
    break;

  case 271: /* add_exp: add_exp add_op mul_exp  */
#line 727 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3845 "src/parser.c"
    break;

  case 273: /* mul_exp: mul_exp mul_op dur_exp  */
#line 728 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3851 "src/parser.c"
    break;

  case 275: /* dur_exp: dur_exp "::" cast_exp  */
#line 729 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3857 "src/parser.c"
    break;

  case 277: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 732 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3863 "src/parser.c"
    break;

  case 286: /* unary_exp: unary_op unary_exp  */
#line 739 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3869 "src/parser.c"
    break;

  case 287: /* unary_exp: OPID_E unary_exp  */
#line 740 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3875 "src/parser.c"
    break;

  case 288: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 741 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 3883 "src/parser.c"
    break;

  case 289: /* unary_exp: "new" type_decl_exp  */
#line 744 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 3889 "src/parser.c"
    break;

  case 290: /* unary_exp: "spork" code_stmt  */
#line 745 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3895 "src/parser.c"
    break;

  case 291: /* unary_exp: "fork" code_stmt  */
#line 746 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3901 "src/parser.c"
    break;

  case 292: /* unary_exp: "$" type_decl_empty  */
#line 747 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 3907 "src/parser.c"
    break;

  case 293: /* lambda_list: "<identifier>"  */
#line 750 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yylsp[0])), NULL); }
#line 3913 "src/parser.c"
    break;

  case 294: /* lambda_list: "<identifier>" lambda_list  */
#line 751 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yylsp[-1])), (yyvsp[0].arg_list)); }
#line 3919 "src/parser.c"
    break;

  case 295: /* lambda_arg: "\\" lambda_list  */
#line 752 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3925 "src/parser.c"
    break;

  case 296: /* lambda_arg: "\\"  */
#line 752 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 3931 "src/parser.c"
    break;

  case 297: /* type_list: type_decl_empty  */
#line 755 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3937 "src/parser.c"
    break;

  case 298: /* type_list: type_decl_empty "," type_list  */
#line 756 "src/gwion.y"
                                  { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3943 "src/parser.c"
    break;

  case 299: /* call_paren: "(" exp ")"  */
#line 760 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3949 "src/parser.c"
    break;

  case 300: /* call_paren: "(" ")"  */
#line 760 "src/gwion.y"
                                                             { (yyval.exp) = NULL; }
#line 3955 "src/parser.c"
    break;

  case 303: /* dot_exp: post_exp "." "<identifier>"  */
#line 764 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3968 "src/parser.c"
    break;

  case 305: /* post_exp: post_exp array_exp  */
#line 775 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3974 "src/parser.c"
    break;

  case 306: /* post_exp: post_exp range  */
#line 777 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3980 "src/parser.c"
    break;

  case 307: /* post_exp: post_exp call_template call_paren  */
#line 779 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3987 "src/parser.c"
    break;

  case 308: /* post_exp: post_exp post_op  */
#line 782 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3993 "src/parser.c"
    break;

  case 309: /* post_exp: post_exp OPID_E  */
#line 784 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3999 "src/parser.c"
    break;

  case 310: /* post_exp: dot_exp  */
#line 785 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4005 "src/parser.c"
    break;

  case 311: /* interp_exp: "<interp string end>"  */
#line 789 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4011 "src/parser.c"
    break;

  case 312: /* interp_exp: "<interp string lit>" interp_exp  */
#line 790 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4017 "src/parser.c"
    break;

  case 313: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 791 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 4023 "src/parser.c"
    break;

  case 314: /* interp: "`" interp_exp  */
#line 793 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4029 "src/parser.c"
    break;

  case 315: /* interp: interp "`" interp_exp  */
#line 794 "src/gwion.y"
                                 {
  if(!(yyvsp[0].exp)->next) {
    char c[strlen((yyvsp[-2].exp)->d.prim.d.string.data) + strlen((yyvsp[0].exp)->d.prim.d.string.data) + 1];
    sprintf(c, "%s%s\n", (yyvsp[-2].exp)->d.prim.d.string.data, (yyvsp[0].exp)->d.prim.d.string.data);
    (yyvsp[-2].exp)->d.prim.d.string.data = s_name(insert_symbol(c));
    (yyvsp[-2].exp)->pos.last = (yyvsp[0].exp)->pos.last;
    free_exp(mpool(arg), (yyvsp[0].exp));
  } else
  (yyvsp[-2].exp)->next = (yyvsp[0].exp);
}
#line 4044 "src/parser.c"
    break;

  case 316: /* prim_exp: "<identifier>"  */
#line 806 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4050 "src/parser.c"
    break;

  case 317: /* prim_exp: "<integer>"  */
#line 807 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 4056 "src/parser.c"
    break;

  case 318: /* prim_exp: "<float>"  */
#line 808 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4062 "src/parser.c"
    break;

  case 319: /* prim_exp: interp  */
#line 809 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4068 "src/parser.c"
    break;

  case 320: /* prim_exp: "<litteral string>"  */
#line 810 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4074 "src/parser.c"
    break;

  case 321: /* prim_exp: "<litteral char>"  */
#line 811 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4080 "src/parser.c"
    break;

  case 322: /* prim_exp: array  */
#line 812 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 4086 "src/parser.c"
    break;

  case 323: /* prim_exp: "{" dict_list "}"  */
#line 813 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4092 "src/parser.c"
    break;

  case 324: /* prim_exp: range  */
#line 814 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4098 "src/parser.c"
    break;

  case 325: /* prim_exp: "<<<" exp ">>>"  */
#line 815 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 4104 "src/parser.c"
    break;

  case 326: /* prim_exp: "(" exp ")"  */
#line 816 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 4110 "src/parser.c"
    break;

  case 327: /* prim_exp: lambda_arg code_stmt  */
#line 817 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yylsp[-1])); }
#line 4116 "src/parser.c"
    break;

  case 328: /* prim_exp: "(" op_op ")"  */
#line 818 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 4122 "src/parser.c"
    break;

  case 329: /* prim_exp: "perform" "<identifier>"  */
#line 819 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4128 "src/parser.c"
    break;

  case 330: /* prim_exp: "(" ")"  */
#line 820 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4134 "src/parser.c"
    break;


#line 4138 "src/parser.c"

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

#line 822 "src/gwion.y"

#undef scan
ANN static int parser_error(loc_t *loc, Scanner *const scan, const char* diagnostic, const uint error_code) {
  char _main[strlen(diagnostic) + 1];
  strcpy(_main, diagnostic);
  char *_explain = strchr(_main, ','),
       *_fix = NULL;
  if(_explain) {
    _main[_explain - _main] = '\0';
    _explain += 2;
    _fix = strchr(_explain, ',');
    if(_fix) {
      _explain[_fix - _explain] = '\0';
      _fix += 2;
    }
  }
  scanner_error(scan, _main, _explain, _fix, *loc, error_code);
  return 0;
}
