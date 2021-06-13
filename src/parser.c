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
  YYSYMBOL_FLOATT = 59,                    /* FLOATT  */
  YYSYMBOL_STRING_LIT = 60,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 61,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 62,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 63,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 64,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 65,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 66,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 67,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 68,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 69,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 70,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 71,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 72,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 73,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 74,                  /* "#if"  */
  YYSYMBOL_PP_NL = 75,                     /* "\n"  */
  YYSYMBOL_PP_IMPORT = 76,                 /* "import"  */
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
  YYSYMBOL_DYNOP = 114,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 115,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 116,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 117,                   /* UTIMES  */
  YYSYMBOL_118_ = 118,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 119,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 120,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 121,                 /* $accept  */
  YYSYMBOL_prg = 122,                      /* prg  */
  YYSYMBOL_ast = 123,                      /* ast  */
  YYSYMBOL_section = 124,                  /* section  */
  YYSYMBOL_class_flag = 125,               /* class_flag  */
  YYSYMBOL_class_def = 126,                /* class_def  */
  YYSYMBOL_trait_stmt = 127,               /* trait_stmt  */
  YYSYMBOL_trait_stmt_list = 128,          /* trait_stmt_list  */
  YYSYMBOL_trait_section = 129,            /* trait_section  */
  YYSYMBOL_trait_ast = 130,                /* trait_ast  */
  YYSYMBOL_trait_body = 131,               /* trait_body  */
  YYSYMBOL_trait_def = 132,                /* trait_def  */
  YYSYMBOL_class_ext = 133,                /* class_ext  */
  YYSYMBOL_traits = 134,                   /* traits  */
  YYSYMBOL_extend_body = 135,              /* extend_body  */
  YYSYMBOL_extend_def = 136,               /* extend_def  */
  YYSYMBOL_class_body = 137,               /* class_body  */
  YYSYMBOL_id_list = 138,                  /* id_list  */
  YYSYMBOL_specialized_list = 139,         /* specialized_list  */
  YYSYMBOL_stmt_list = 140,                /* stmt_list  */
  YYSYMBOL_fptr_base = 141,                /* fptr_base  */
  YYSYMBOL__func_effects = 142,            /* _func_effects  */
  YYSYMBOL_func_effects = 143,             /* func_effects  */
  YYSYMBOL_func_base = 144,                /* func_base  */
  YYSYMBOL_fptr_def = 145,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 146,             /* typedef_when  */
  YYSYMBOL_type_def_type = 147,            /* type_def_type  */
  YYSYMBOL_type_def = 148,                 /* type_def  */
  YYSYMBOL_type_decl_array = 149,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 150,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 151,          /* type_decl_empty  */
  YYSYMBOL_arg = 152,                      /* arg  */
  YYSYMBOL_arg_list = 153,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 154,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 155,                /* fptr_list  */
  YYSYMBOL_code_stmt = 156,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 157,                  /* stmt_pp  */
  YYSYMBOL_stmt = 158,                     /* stmt  */
  YYSYMBOL_retry_stmt = 159,               /* retry_stmt  */
  YYSYMBOL_handler = 160,                  /* handler  */
  YYSYMBOL_161_1 = 161,                    /* $@1  */
  YYSYMBOL_handler_list = 162,             /* handler_list  */
  YYSYMBOL_try_stmt = 163,                 /* try_stmt  */
  YYSYMBOL_opt_id = 164,                   /* opt_id  */
  YYSYMBOL_enum_def = 165,                 /* enum_def  */
  YYSYMBOL_when_exp = 166,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 167,          /* match_case_stmt  */
  YYSYMBOL_match_list = 168,               /* match_list  */
  YYSYMBOL_where_stmt = 169,               /* where_stmt  */
  YYSYMBOL_match_stmt = 170,               /* match_stmt  */
  YYSYMBOL_flow = 171,                     /* flow  */
  YYSYMBOL_loop_stmt = 172,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 173,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 174,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 175,           /* selection_stmt  */
  YYSYMBOL_breaks = 176,                   /* breaks  */
  YYSYMBOL_jump_stmt = 177,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 178,                 /* exp_stmt  */
  YYSYMBOL_exp = 179,                      /* exp  */
  YYSYMBOL_binary_exp = 180,               /* binary_exp  */
  YYSYMBOL_call_template = 181,            /* call_template  */
  YYSYMBOL_op = 182,                       /* op  */
  YYSYMBOL_array_exp = 183,                /* array_exp  */
  YYSYMBOL_array_empty = 184,              /* array_empty  */
  YYSYMBOL_range = 185,                    /* range  */
  YYSYMBOL_array = 186,                    /* array  */
  YYSYMBOL_decl_exp = 187,                 /* decl_exp  */
  YYSYMBOL_func_args = 188,                /* func_args  */
  YYSYMBOL_fptr_args = 189,                /* fptr_args  */
  YYSYMBOL_arg_type = 190,                 /* arg_type  */
  YYSYMBOL_decl_template = 191,            /* decl_template  */
  YYSYMBOL_global = 192,                   /* global  */
  YYSYMBOL_storage_flag = 193,             /* storage_flag  */
  YYSYMBOL_access_flag = 194,              /* access_flag  */
  YYSYMBOL_flag = 195,                     /* flag  */
  YYSYMBOL_final = 196,                    /* final  */
  YYSYMBOL_modifier = 197,                 /* modifier  */
  YYSYMBOL_func_code = 198,                /* func_code  */
  YYSYMBOL_func_def_base = 199,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 200,            /* abstract_fdef  */
  YYSYMBOL_op_op = 201,                    /* op_op  */
  YYSYMBOL_op_base = 202,                  /* op_base  */
  YYSYMBOL_operator = 203,                 /* operator  */
  YYSYMBOL_op_def = 204,                   /* op_def  */
  YYSYMBOL_func_def = 205,                 /* func_def  */
  YYSYMBOL_ref = 206,                      /* ref  */
  YYSYMBOL_type_decl_base = 207,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 208,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 209,         /* type_decl_noflag  */
  YYSYMBOL_option = 210,                   /* option  */
  YYSYMBOL_type_decl_opt = 211,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 212,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 213,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 214,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 215,               /* union_decl  */
  YYSYMBOL_union_list = 216,               /* union_list  */
  YYSYMBOL_union_def = 217,                /* union_def  */
  YYSYMBOL_var_decl_list = 218,            /* var_decl_list  */
  YYSYMBOL_var_decl = 219,                 /* var_decl  */
  YYSYMBOL_arg_decl = 220,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 221,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 222,                    /* eq_op  */
  YYSYMBOL_rel_op = 223,                   /* rel_op  */
  YYSYMBOL_shift_op = 224,                 /* shift_op  */
  YYSYMBOL_add_op = 225,                   /* add_op  */
  YYSYMBOL_mul_op = 226,                   /* mul_op  */
  YYSYMBOL_opt_exp = 227,                  /* opt_exp  */
  YYSYMBOL_con_exp = 228,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 229,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 230,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 231,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 232,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 233,                  /* and_exp  */
  YYSYMBOL_eq_exp = 234,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 235,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 236,                /* shift_exp  */
  YYSYMBOL_add_exp = 237,                  /* add_exp  */
  YYSYMBOL_mul_exp = 238,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 239,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 240,                 /* cast_exp  */
  YYSYMBOL_unary_op = 241,                 /* unary_op  */
  YYSYMBOL_unary_exp = 242,                /* unary_exp  */
  YYSYMBOL_lambda_list = 243,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 244,               /* lambda_arg  */
  YYSYMBOL_type_list = 245,                /* type_list  */
  YYSYMBOL_call_paren = 246,               /* call_paren  */
  YYSYMBOL_post_op = 247,                  /* post_op  */
  YYSYMBOL_dot_exp = 248,                  /* dot_exp  */
  YYSYMBOL_post_exp = 249,                 /* post_exp  */
  YYSYMBOL_interp_exp = 250,               /* interp_exp  */
  YYSYMBOL_interp = 251,                   /* interp  */
  YYSYMBOL_prim_exp = 252                  /* prim_exp  */
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
#define YYFINAL  210
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2009

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  132
/* YYNRULES -- Number of rules.  */
#define YYNRULES  319
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  546

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   375


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
     115,   116,   117,   118,   119,   120
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   171,   171,   172,   175,   176,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   191,   193,   200,   209,   213,
     214,   215,   218,   219,   223,   224,   227,   227,   229,   239,
     239,   240,   240,   242,   246,   252,   258,   258,   260,   261,
     263,   264,   266,   267,   269,   272,   272,   273,   273,   275,
     278,   285,   285,   286,   286,   287,   296,   296,   298,   302,
     307,   308,   310,   311,   317,   318,   318,   321,   322,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   353,   358,   358,   359,   360,   372,   374,   374,   377,
     383,   383,   386,   396,   397,   399,   399,   401,   411,   412,
     416,   418,   420,   422,   424,   426,   432,   434,   444,   446,
     449,   451,   455,   455,   457,   458,   459,   460,   464,   465,
     469,   470,   474,   475,   476,   477,   480,   480,   482,   482,
     482,   482,   485,   486,   490,   494,   495,   496,   500,   501,
     502,   505,   505,   506,   507,   509,   509,   510,   510,   511,
     511,   513,   513,   515,   517,   517,   519,   520,   523,   524,
     525,   526,   529,   529,   531,   531,   533,   533,   535,   546,
     555,   555,   555,   555,   555,   557,   559,   561,   566,   572,
     572,   573,   576,   576,   576,   578,   578,   581,   582,   597,
     598,   602,   603,   606,   606,   606,   607,   608,   608,   611,
     612,   614,   614,   617,   621,   623,   624,   627,   637,   638,
     641,   642,   644,   645,   646,   647,   647,   649,   649,   650,
     650,   650,   650,   651,   651,   652,   652,   653,   653,   653,
     655,   655,   656,   657,   659,   662,   662,   663,   663,   664,
     664,   665,   665,   666,   666,   667,   667,   668,   668,   669,
     669,   670,   670,   671,   671,   672,   672,   674,   674,   677,
     677,   677,   678,   678,   678,   678,   681,   682,   683,   684,
     685,   686,   687,   690,   691,   692,   692,   695,   696,   700,
     700,   702,   702,   704,   713,   714,   716,   718,   721,   723,
     725,   729,   730,   731,   733,   734,   746,   747,   748,   749,
     750,   751,   752,   753,   754,   755,   756,   757,   758,   759
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
  "OPID_E", "late", "<integer>", "FLOATT", "<litteral string>",
  "<litteral char>", "`", "<interp string>", "INTERP_EXP",
  "<interp string>`", "<comment>", "#include", "#define", "#pragma",
  "#undef", "#ifdef", "#ifndef", "#else", "#if", "\n", "import",
  "@<operator id>", "&<operator id>", "<identifier>", "+", "++", "-", "--",
  "*", "/", "%", "$", "?", "OPTIONS", ":", "::", "?:", "new", "spork",
  "fork", "<<<", ">>>", "&&", "==", ">=", ">", "<=", "<", "!=", "<<", ">>",
  "&", "|", "^", "||", ":[", "~", "!", "<dynamic_operator>", "RANGE_EMPTY",
  "UMINUS", "UTIMES", "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg",
  "ast", "section", "class_flag", "class_def", "trait_stmt",
  "trait_stmt_list", "trait_section", "trait_ast", "trait_body",
  "trait_def", "class_ext", "traits", "extend_body", "extend_def",
  "class_body", "id_list", "specialized_list", "stmt_list", "fptr_base",
  "_func_effects", "func_effects", "func_base", "fptr_def", "typedef_when",
  "type_def_type", "type_def", "type_decl_array", "type_decl_exp",
  "type_decl_empty", "arg", "arg_list", "fptr_arg", "fptr_list",
  "code_stmt", "stmt_pp", "stmt", "retry_stmt", "handler", "$@1",
  "handler_list", "try_stmt", "opt_id", "enum_def", "when_exp",
  "match_case_stmt", "match_list", "where_stmt", "match_stmt", "flow",
  "loop_stmt", "varloop_stmt", "defer_stmt", "selection_stmt", "breaks",
  "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template", "op",
  "array_exp", "array_empty", "range", "array", "decl_exp", "func_args",
  "fptr_args", "arg_type", "decl_template", "global", "storage_flag",
  "access_flag", "flag", "final", "modifier", "func_code", "func_def_base",
  "abstract_fdef", "op_op", "op_base", "operator", "op_def", "func_def",
  "ref", "type_decl_base", "type_decl_tmpl", "type_decl_noflag", "option",
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
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375
};
#endif

#define YYPACT_NINF (-379)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-238)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     524,  -379,  1232,  1293,   635,   161,  -379,    18,  -379,   848,
    -379,    68,    91,   116,  1836,   161,  1112,  -379,  -379,   848,
     -14,   207,   161,   161,   161,    61,   137,  -379,  -379,   161,
     161,  -379,  1836,   848,   138,   408,  -379,  -379,  -379,  -379,
    -379,  1354,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,    61,    61,
     225,   225,  1836,  -379,  -379,   238,   524,  -379,  -379,  -379,
    -379,   848,  -379,   161,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,   241,  -379,  -379,  -379,  -379,    52,  -379,  -379,
     248,    45,  -379,   236,  -379,  -379,  -379,  -379,  -379,    20,
    -379,  -379,  -379,   161,  -379,  -379,    70,   151,   147,   156,
     150,   -13,   113,   148,    83,   135,   192,   197,   408,  -379,
     225,  -379,  -379,    26,   209,  -379,  -379,  -379,   269,   273,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,   180,  -379,   279,  -379,  -379,  -379,  -379,  -379,
    1836,    60,  -379,   746,  -379,  -379,  -379,  -379,   281,  -379,
    -379,   223,   221,  1836,   178,  1896,  1172,   208,   152,   210,
    -379,   260,   257,  -379,  -379,   211,   228,   212,   213,   161,
    -379,   186,  -379,   205,    40,   185,   254,   184,  -379,   291,
      62,  -379,   294,    61,   224,    33,  -379,   138,  -379,  -379,
    1354,  -379,    28,  -379,  -379,  -379,  -379,  -379,  -379,    46,
    -379,  -379,  -379,    61,  1836,  -379,   297,  -379,  1836,  1836,
    1836,  1836,  1415,  -379,  -379,  -379,   964,   225,    61,    61,
    1836,   408,   408,   408,   408,   408,   408,  -379,  -379,   408,
     408,   408,  -379,   408,  -379,   408,   408,    61,  -379,  -379,
    1475,   226,  -379,    61,   296,  -379,  -379,  -379,  1354,  -379,
    -379,   168,   299,  1536,  -379,    61,    42,  -379,    61,  -379,
      61,   198,  1836,   300,    34,  1172,    30,   286,  -379,   301,
    -379,  -379,  -379,   257,   200,  -379,  -379,  -379,   200,   205,
      61,  -379,   230,   304,   185,  -379,    62,  -379,  -379,  -379,
    1596,  -379,  -379,    61,    42,   235,   200,  -379,  -379,  -379,
    1354,  -379,   239,   219,  -379,    45,  -379,  -379,  -379,  -379,
     171,   281,   310,   312,  -379,   314,   242,   316,   232,  -379,
     151,   147,   156,   150,   -13,   113,   148,    83,   135,   192,
     197,  -379,  -379,   320,   318,  1656,  -379,  -379,  -379,  1716,
    -379,  -379,   183,   249,  -379,   325,  -379,   324,    72,   252,
     253,   848,   274,  1836,   848,  1776,   256,  1836,  1836,  -379,
      39,   230,   210,  -379,   261,   295,   205,   327,   200,  -379,
     329,    69,  -379,  -379,   249,  -379,   335,   311,   200,   333,
    -379,   200,   848,   337,    61,    61,    61,   291,  -379,   341,
     408,    61,  -379,  -379,   222,  -379,  -379,   291,   263,    61,
    -379,  -379,  -379,  -379,   200,   200,   332,  -379,    50,  -379,
     848,   231,   266,    53,    67,   326,  -379,   173,   848,   205,
     188,    61,   205,   342,   942,   294,   278,    43,  -379,  -379,
    -379,    61,   280,   282,   355,  -379,    78,   340,  -379,  -379,
     356,   358,   359,  -379,   242,  -379,  -379,  -379,  -379,   236,
    1836,  -379,   294,  -379,   848,   848,  -379,   848,  1836,   848,
    1836,   276,   848,  -379,  -379,  -379,  -379,   288,  -379,  -379,
     360,   524,  -379,  1027,  -379,   942,   364,  -379,  -379,  -379,
      42,  -379,  -379,  -379,  -379,  -379,  -379,  -379,   365,   298,
      78,   366,  1836,   367,    61,  -379,  -379,  -379,    45,    42,
    -379,  -379,  -379,    57,  -379,   316,   848,  -379,   205,   524,
     524,   369,  -379,  -379,  -379,   311,  -379,   377,  -379,  -379,
      45,  -379,   375,   379,   848,   848,  -379,   378,  -379,   381,
    -379,  -379,  -379,  -379,  -379,  -379
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   129,     0,     0,     0,   171,   211,     0,   108,     0,
     109,     0,     0,     0,     0,   171,     0,   122,   123,     0,
       0,     0,   171,   171,   171,     0,   189,    53,    54,   171,
     171,   210,     0,     0,   286,     0,   209,   307,   308,   310,
     311,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,   306,   291,   269,   292,   270,     0,     0,
     273,   274,     0,   275,   272,     0,     2,     4,     8,     9,
      10,     6,    13,   171,    14,    83,    86,    42,    90,    89,
      11,    84,     0,    81,    87,    88,    82,     0,    85,    80,
       0,   130,   151,   152,   313,   312,   132,   192,   193,     0,
     194,     7,   212,   171,    12,   153,   242,   245,   247,   249,
     251,   253,   255,   257,   259,   261,   263,   265,     0,   267,
       0,   271,   300,   276,   309,   294,   319,   235,   269,   270,
     238,   239,   141,   138,   232,   230,   231,   229,   139,   233,
     234,   140,     0,   180,     0,   182,   181,   184,   183,   145,
       0,     0,    67,     0,   164,   163,   166,   167,     0,   165,
     169,   168,   173,     0,     0,     0,     0,     0,     0,    98,
     125,     0,     0,   318,    91,     0,   173,     0,     0,   171,
     197,   195,    59,    31,     0,   137,   201,   205,   207,    57,
       0,   190,     0,     0,     0,     0,   119,   283,   285,   278,
       0,   301,     0,   304,   282,    58,   279,   280,   281,     0,
       1,     5,    43,     0,     0,   127,     0,   128,     0,     0,
       0,     0,     0,   147,   273,   274,     0,     0,     0,     0,
     241,     0,     0,     0,     0,     0,     0,   227,   228,     0,
       0,     0,   236,     0,   237,     0,     0,     0,   277,   316,
       0,     0,   299,     0,     0,   295,   296,   298,     0,   315,
     317,     0,   142,     0,    68,   156,     0,   170,     0,   172,
       0,     0,     0,   306,     0,     0,     0,     0,    97,     0,
     124,    92,    94,    96,   162,   174,   175,    15,   162,    31,
       0,   196,     0,     0,   137,   199,     0,   203,   204,   206,
       0,    56,   208,   158,     0,     0,   162,   118,   284,   302,
       0,   314,     0,     0,   126,   131,   133,   135,   134,   146,
       0,     0,     0,     0,   191,     0,     0,   240,     0,   244,
     246,   248,   250,   252,   254,   256,   258,   260,   262,   264,
     266,   268,   293,   287,     0,     0,   297,   305,   150,     0,
     143,   149,     0,     0,    62,   155,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
       0,     0,    98,    95,     0,    30,    31,     0,   162,    38,
      32,     0,   200,   202,   226,    65,   157,    47,   162,     0,
     303,   162,     0,     0,     0,     0,     0,   220,   154,   219,
       0,     0,   136,   290,     0,   144,   148,   222,    61,     0,
     159,   177,   176,   178,   162,   162,   120,   111,     0,   116,
       0,     0,     0,     0,   101,   106,   104,     0,     0,    31,
       0,     0,    31,     0,    27,     0,     0,     0,    33,   225,
      64,     0,     0,    48,     0,    44,     0,    51,   110,   188,
       0,     0,     0,   221,     0,   243,   288,   289,   224,   223,
       0,    63,     0,    49,     0,     0,   112,     0,     0,     0,
       0,     0,     0,   107,    99,    93,    40,     0,   161,    29,
       0,    37,    20,    22,    24,    26,     0,    19,    18,    23,
       0,    39,    35,    34,    66,    45,    46,    50,   197,     0,
     215,     0,     0,     0,     0,   186,   187,   218,    60,     0,
     121,   117,   113,     0,   114,   100,     0,   105,    31,    37,
      36,     0,    21,    25,    28,    47,   213,     0,   216,   217,
      52,    55,     0,     0,     0,   102,    41,     0,    17,     0,
     214,   185,   179,   115,    16,   198
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -379,  -379,   385,   -59,   258,  -379,   -93,  -379,   -94,  -379,
    -379,  -379,  -379,  -278,  -379,  -379,  -127,    24,  -379,    -3,
    -379,  -379,  -129,  -379,  -379,  -379,  -379,  -379,   -47,   -34,
     -20,  -366,  -379,   -43,  -379,   -46,  -274,    -9,  -379,   117,
    -379,  -379,  -379,    27,  -379,  -379,    31,  -379,  -379,  -379,
     240,  -379,  -379,  -379,  -379,  -379,  -379,  -158,    44,   -29,
    -163,  -379,   -84,    -5,   283,  -185,    12,    82,  -378,  -287,
    -262,   384,   244,  -379,    22,   245,  -379,  -379,  -379,  -379,
     181,  -379,  -379,  -379,  -340,   233,   243,  -379,   120,  -379,
     227,  -379,   -23,  -379,  -379,   -80,  -379,   -32,  -379,    41,
    -379,  -379,  -106,  -100,   -98,   -97,  -379,  -212,  -379,   196,
     191,   195,   199,   194,   193,   201,   202,   190,   203,   189,
     338,    37,   247,  -379,    35,  -379,  -102,  -379,  -379,  -180,
    -379,  -379
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    65,   520,    67,   175,    68,   482,   483,   484,   485,
     486,    69,   432,   293,   437,    70,   521,   380,   430,    71,
     192,   443,   444,   158,    72,   503,    73,    74,   182,   206,
     343,   354,   355,   385,   386,    75,    76,    77,    78,   282,
     372,   283,    79,   279,    80,   471,   369,   370,   473,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
     254,   143,    92,    93,    94,    95,    96,   266,   304,   358,
     375,   159,   160,   161,   176,   270,   287,   413,    97,    98,
     144,   227,    99,   100,   101,   184,   185,   186,   187,   299,
     188,   189,   102,   103,   500,   501,   104,   398,   399,   408,
     440,   239,   145,   146,   147,   148,   328,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   198,   120,   344,   346,   121,   122,   123,   203,
     124,   125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     164,   153,   190,   195,   301,   183,   240,   211,   275,   223,
     172,   377,   205,   241,   207,   208,   243,   387,   245,   329,
     309,   257,   295,   163,   196,   179,   376,   162,   450,   451,
     452,  -137,   218,   250,   366,   190,   190,   169,   204,   255,
     364,   438,     4,   461,   389,   179,   142,   151,   356,   425,
     218,   193,   194,   492,     5,   215,   465,   490,   168,   469,
     171,   368,   212,   534,   218,   173,   179,   179,   262,   251,
      31,   218,   199,   165,   249,   411,   190,    36,   347,   226,
       5,     4,   252,   179,   509,   202,   237,    26,   219,   219,
     470,   238,   310,   357,   489,   213,   166,   493,   433,   180,
     219,    54,    55,    56,    57,   219,   209,    54,   219,    56,
     216,    31,   219,    26,   224,   225,   435,   365,    36,   180,
     367,   167,   220,   220,   323,   229,   445,   181,    31,   447,
     390,   382,    63,    64,   220,    36,   274,   253,   532,   220,
     180,   180,   220,   311,   212,   489,   220,   221,   221,   307,
     263,   476,   462,   463,   480,   248,   218,   498,   230,   221,
     487,   277,   231,   127,   221,   242,   312,   221,   181,   181,
     190,   221,   218,   305,   155,   218,   348,   436,   350,   262,
     232,   324,   326,   474,   218,   181,   259,   218,   455,   315,
     190,   406,   477,     8,   261,    10,   478,   154,   155,   156,
     157,   290,   218,   525,   361,   190,   190,   271,   325,   487,
     174,   487,   453,   134,   135,   136,   137,   197,   353,   244,
     130,   131,   533,   218,   190,   392,   218,   341,   457,   240,
     190,   316,   317,   318,     4,   218,   241,   467,   210,   243,
     536,   245,   190,   222,   202,   190,   214,   190,   359,   233,
     360,   217,   218,   139,   140,   234,   384,   236,   313,   154,
     155,   268,   269,   280,   218,   235,   320,   190,   285,   269,
     378,   258,   297,   298,   327,  -236,   488,   417,   218,  -237,
     190,   177,   178,   246,   247,   260,   265,   276,   281,   278,
     284,   288,   289,   181,   151,   292,   253,   296,   300,   303,
     314,   345,   202,   306,   363,   342,   349,   352,   368,   379,
     371,   374,   412,   381,   388,   394,   362,   395,   391,   396,
     218,   397,   400,   458,   401,   488,   402,   488,   407,   409,
     410,   414,   415,   436,   418,   422,   434,   431,   423,   441,
     429,   442,   446,   449,   320,   454,   464,   353,   353,   353,
     472,   481,   416,   460,   202,   419,   468,   491,   497,   495,
     504,   496,   353,   502,   505,   506,   516,   518,   526,   519,
     531,   190,   190,   190,   524,   223,   529,   527,   190,   538,
     540,   541,   542,   448,   205,    66,   190,   545,   544,   404,
     522,   523,   537,   320,   384,   427,   539,   479,   494,   428,
     373,   426,   459,   393,   272,   267,   256,   322,   190,   421,
     191,   466,   424,     2,   291,     3,   383,   302,   190,   475,
     528,   286,   507,   190,   331,   439,   499,   294,   330,   332,
     334,   508,   335,   338,   333,   340,   456,   228,    20,   513,
       0,   336,     0,   337,   308,     0,     0,     0,   339,     0,
       0,     0,     0,     0,     0,   510,   511,   353,   512,     0,
     514,   211,    34,   517,    35,     0,    37,    38,    39,    40,
      41,     0,     0,   530,     0,     0,     0,   190,     0,     0,
     499,   190,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,     0,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,   535,   515,     0,     0,     0,     0,     0,
      63,    64,     0,     0,     0,   543,   212,     1,     0,     2,
       0,     3,     0,     4,     0,     5,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
      16,    17,    18,    19,    20,     0,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     0,    25,     0,    26,    27,
      28,    29,     0,    30,    31,     0,    32,    33,    34,     0,
      35,    36,    37,    38,    39,    40,    41,     0,     0,     0,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,     0,    53,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,     0,     0,     0,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    64,     1,     0,
       2,     0,     3,     0,     4,   152,     0,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    32,    33,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,     0,    53,     0,    54,    55,    56,    57,
       0,     0,    58,     0,     0,     0,     0,     0,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    64,     1,
       0,     2,     0,     3,     0,     4,   264,     0,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,    16,    17,    18,    19,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    32,    33,
      34,     0,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     0,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,     0,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,     0,     4,    63,    64,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      32,    33,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,     0,     0,
       0,    59,    60,    61,    62,     1,     0,     2,     0,     3,
       0,     0,     0,     5,     6,     0,     0,     0,     0,     0,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,    31,     0,     0,     0,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     0,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,   321,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       1,     0,     2,     0,     3,    59,    60,    61,    62,     6,
       0,     0,     0,     0,   127,    54,   242,    56,   244,   130,
     131,     0,     0,   132,    63,    64,     0,    20,     0,     0,
       0,     0,     0,   133,   134,   135,   136,   137,   138,   139,
     140,     0,     0,     0,     0,     0,     0,    31,   141,     0,
       0,    34,     0,    35,    36,    37,    38,    39,    40,    41,
       0,     0,     0,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,     0,    53,     0,    54,    55,
      56,    57,     0,     0,    58,   170,     0,     2,     0,     3,
      59,    60,    61,    62,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      64,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     1,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,    20,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    63,    64,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     2,   126,     3,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,    20,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    63,    64,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     0,     2,     0,
       3,   149,     0,     0,     0,     6,     0,     0,     0,     0,
       0,    53,   127,    54,   128,    56,   129,   130,   131,    58,
       0,   132,     0,    20,     0,    59,    60,    61,    62,     0,
       0,   133,   134,   135,   136,   137,   138,   139,   140,     0,
       0,     0,     0,    31,    63,    64,   141,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     0,     2,
       0,     3,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,   150,    20,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    63,    64,     0,    34,     0,
      35,    36,    37,    38,    39,    40,    41,   200,     0,   201,
       2,     0,     3,   319,     0,     0,     0,     6,     0,     0,
       0,     0,     0,    53,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,     0,    20,     0,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    63,    64,     0,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     0,     0,
       2,     0,     3,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    53,     0,    54,    55,    56,    57,
       0,     0,    58,     0,     0,    20,     0,     0,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    63,    64,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     0,     0,
       0,     2,     0,     3,   351,     0,     0,     0,     6,     0,
       0,     0,     0,     0,    53,     0,    54,    55,    56,    57,
       0,     0,    58,     0,     0,   150,    20,     0,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    63,    64,     0,
      34,     0,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     2,     0,     3,   149,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,    20,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    63,    64,
      34,     0,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     2,   403,     3,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,    20,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    63,    64,
      34,     0,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     2,     0,     3,   405,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,    20,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    63,    64,
      34,     0,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     2,   420,     3,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,    20,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    63,    64,
      34,     0,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     2,     0,     3,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,    20,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    63,    64,
      34,     0,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     2,     0,     3,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,    20,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    63,    64,
      34,     0,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   273,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,     0,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    64
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    32,   189,    25,   112,    66,   166,    93,
      19,   289,    59,   113,    60,    61,   114,   304,   115,   231,
     200,   123,   185,     5,    33,     5,   288,     5,   394,   395,
     396,     5,     4,     7,     4,    58,    59,    15,    58,   123,
       6,   381,     9,   409,   306,     5,     2,     3,     6,    10,
       4,    29,    30,    10,    11,     3,     6,   435,    14,     6,
      16,    22,    71,     6,     4,    79,     5,     5,     8,    43,
      50,     4,    35,     5,   120,     3,    99,    57,   258,    99,
      11,     9,    56,     5,   462,    41,    99,    44,    55,    55,
      23,   104,    64,    51,   434,    73,     5,   437,   376,    79,
      55,    81,    82,    83,    84,    55,    62,    81,    55,    83,
      58,    50,    55,    44,    94,    95,   378,   275,    57,    79,
      90,     5,    89,    89,   226,   103,   388,   107,    50,   391,
     310,   294,   112,   113,    89,    57,   165,   111,   504,    89,
      79,    79,    89,    97,   153,   485,    89,   114,   114,   195,
      90,   429,   414,   415,   432,   118,     4,    79,    88,   114,
     434,     9,    92,    80,   114,    82,   213,   114,   107,   107,
     193,   114,     4,   193,    37,     4,     8,     4,   262,     8,
     110,   227,   229,    10,     4,   107,     6,     4,   400,   218,
     213,     8,     4,    15,   150,    17,     8,    36,    37,    38,
      39,   179,     4,   490,     6,   228,   229,   163,   228,   483,
       3,   485,   397,   100,   101,   102,   103,    79,   265,    84,
      85,    86,   509,     4,   247,     6,     4,   247,     6,   335,
     253,   219,   220,   221,     9,     4,   336,     6,     0,   337,
     518,   338,   265,     7,   200,   268,     5,   270,   268,    98,
     270,     3,     4,   105,   106,   108,   303,   107,   214,    36,
      37,    40,    41,     3,     4,   109,   222,   290,    40,    41,
     290,    62,    88,    89,   230,     6,   434,     3,     4,     6,
     303,    23,    24,    91,    87,     6,     5,    79,    31,    79,
      79,    79,    79,   107,   250,    90,   111,    43,     7,     5,
       3,     5,   258,    79,     4,    79,     7,   263,    22,    79,
       9,   111,   358,     9,    79,     5,   272,     5,    79,     5,
       4,    79,    90,   407,     4,   483,     8,   485,    79,     4,
       6,    79,    79,     4,   363,    79,     9,    42,   367,     4,
      79,    30,     9,     6,   300,     4,    14,   394,   395,   396,
      24,     9,   361,    90,   310,   364,    90,    79,     3,    79,
       4,    79,   409,    23,     6,     6,    90,    79,     3,     9,
       3,   394,   395,   396,    10,   459,    10,    79,   401,    10,
       3,     6,     3,   392,   431,     0,   409,     6,    10,   345,
     483,   485,   519,   349,   441,   371,   525,   431,   441,   372,
     283,   370,   407,   321,   164,   161,   123,   226,   431,   365,
      26,   420,   368,     5,   181,     7,   296,   190,   441,   428,
     500,   176,   454,   446,   233,   384,   446,   184,   232,   234,
     236,   460,   239,   243,   235,   246,   401,    99,    30,   468,
      -1,   240,    -1,   241,   197,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,    -1,    -1,   464,   465,   504,   467,    -1,
     469,   520,    54,   472,    56,    -1,    58,    59,    60,    61,
      62,    -1,    -1,   502,    -1,    -1,    -1,   500,    -1,    -1,
     500,   504,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   516,   470,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,   534,   535,     3,    -1,     5,
      -1,     7,    -1,     9,    -1,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,
      46,    47,    -1,    49,    50,    -1,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,     3,    -1,
       5,    -1,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    79,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,     3,
      -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,    -1,     9,   112,   113,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,     3,    -1,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    55,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
       3,    -1,     5,    -1,     7,    93,    94,    95,    96,    12,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    89,   112,   113,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    50,   114,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    79,    -1,    81,    82,
      83,    84,    -1,    -1,    87,     3,    -1,     5,    -1,     7,
      93,    94,    95,    96,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,     3,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    89,    -1,    30,    -1,    93,    94,    95,    96,    -1,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,    -1,    50,   112,   113,   114,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,     5,
      -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    90,    30,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,   112,   113,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    65,
       5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    -1,    30,    -1,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,   112,   113,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    30,    -1,    -1,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,   112,   113,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,     5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    90,    30,    -1,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,   112,   113,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,     5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    30,    -1,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   112,   113,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    30,    -1,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   112,   113,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,     5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    30,    -1,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   112,   113,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    30,    -1,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   112,   113,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    30,    -1,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   112,   113,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    30,    -1,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   112,   113,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    32,    33,    34,    35,    42,    44,    45,    46,    47,
      49,    50,    52,    53,    54,    56,    57,    58,    59,    60,
      61,    62,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    79,    81,    82,    83,    84,    87,    93,
      94,    95,    96,   112,   113,   122,   123,   124,   126,   132,
     136,   140,   145,   147,   148,   156,   157,   158,   159,   163,
     165,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   183,   184,   185,   186,   187,   199,   200,   203,
     204,   205,   213,   214,   217,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     244,   247,   248,   249,   251,   252,     6,    80,    82,    84,
      85,    86,    89,    99,   100,   101,   102,   103,   104,   105,
     106,   114,   179,   182,   201,   223,   224,   225,   226,     8,
      90,   179,    10,   140,    36,    37,    38,    39,   144,   192,
     193,   194,   195,     5,   158,     5,     5,     5,   179,   195,
       3,   179,   158,    79,     3,   125,   195,   125,   125,     5,
      79,   107,   149,   151,   206,   207,   208,   209,   211,   212,
     213,   192,   141,   195,   195,   180,   158,    79,   243,   242,
      63,    65,   179,   250,   151,   149,   150,   156,   156,   179,
       0,   124,   158,   195,     5,     3,    58,     3,     4,    55,
      89,   114,     7,   183,    94,    95,   151,   202,   241,   195,
      88,    92,   110,    98,   108,   109,   107,    99,   104,   222,
     223,   224,    82,   225,    84,   226,    91,    87,   242,   156,
       7,    43,    56,   111,   181,   183,   185,   247,    62,     6,
       6,   179,     8,    90,    10,     5,   188,   193,    40,    41,
     196,   179,   171,    79,   180,   178,    79,     9,    79,   164,
       3,    31,   160,   162,    79,    40,   196,   197,    79,    79,
     195,   206,    90,   134,   207,   181,    43,    88,    89,   210,
       7,   186,   211,     5,   189,   151,    79,   156,   243,   250,
      64,    97,   149,   179,     3,   180,   187,   187,   187,     8,
     179,    55,   201,   247,   156,   151,   149,   179,   227,   228,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   151,    79,   151,   245,     5,   246,   250,     8,     7,
     183,     8,   179,   149,   152,   153,     6,    51,   190,   151,
     151,     6,   179,     4,     6,   178,     4,    90,    22,   167,
     168,     9,   161,   160,   111,   191,   191,   134,   151,    79,
     138,     9,   181,   209,   149,   154,   155,   190,    79,   191,
     250,    79,     6,   188,     5,     5,     5,    79,   218,   219,
      90,     4,     8,     6,   179,     8,     8,    79,   220,     4,
       6,     3,   156,   198,    79,    79,   158,     3,   180,   158,
       6,   179,    79,   180,   179,    10,   167,   138,   164,    79,
     139,    42,   133,   134,     9,   191,     4,   135,   205,   220,
     221,     4,    30,   142,   143,   191,     9,   191,   158,     6,
     152,   152,   152,   186,     4,   228,   245,     6,   183,   184,
      90,   152,   191,   191,    14,     6,   158,     6,    90,     6,
      23,   166,    24,   169,    10,   158,   134,     4,     8,   150,
     134,     9,   127,   128,   129,   130,   131,   157,   178,   205,
     189,    79,    10,   205,   154,    79,    79,     3,    79,   151,
     215,   216,    23,   146,     4,     6,     6,   218,   180,   189,
     158,   158,   158,   180,   158,   179,    90,   158,    79,     9,
     123,   137,   127,   129,    10,   190,     3,    79,   216,    10,
     180,     3,   152,   190,     6,   140,   134,   137,    10,   143,
       3,     6,     3,   158,    10,     6
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   121,   122,   122,   123,   123,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   133,
     133,   134,   134,   135,   135,   136,   137,   137,   138,   138,
     139,   139,   140,   140,   141,   142,   142,   143,   143,   144,
     145,   146,   146,   147,   147,   148,   149,   149,   150,   151,
     152,   152,   153,   153,   154,   155,   155,   156,   156,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   159,   161,   160,   162,   162,   163,   164,   164,   165,
     166,   166,   167,   168,   168,   169,   169,   170,   171,   171,
     172,   172,   172,   172,   172,   172,   172,   172,   173,   174,
     175,   175,   176,   176,   177,   177,   177,   177,   178,   178,
     179,   179,   180,   180,   180,   180,   181,   181,   182,   182,
     182,   182,   183,   183,   183,   184,   184,   184,   185,   185,
     185,   186,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   192,   193,   193,   194,   194,   195,   195,
     195,   195,   196,   196,   197,   197,   198,   198,   199,   200,
     201,   201,   201,   201,   201,   202,   202,   202,   202,   203,
     203,   204,   205,   205,   205,   206,   206,   207,   207,   208,
     208,   209,   209,   210,   210,   210,   211,   212,   212,   213,
     213,   214,   214,   215,   215,   216,   216,   217,   218,   218,
     219,   219,   220,   220,   220,   221,   221,   222,   222,   223,
     223,   223,   223,   224,   224,   225,   225,   226,   226,   226,
     227,   227,   228,   228,   228,   229,   229,   230,   230,   231,
     231,   232,   232,   233,   233,   234,   234,   235,   235,   236,
     236,   237,   237,   238,   238,   239,   239,   240,   240,   241,
     241,   241,   241,   241,   241,   241,   242,   242,   242,   242,
     242,   242,   242,   243,   243,   244,   244,   245,   245,   246,
     246,   247,   247,   248,   249,   249,   249,   249,   249,   249,
     249,   250,   250,   250,   251,   251,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252
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
       5,     5,     6,     7,     7,     9,     5,     7,     3,     2,
       5,     7,     1,     1,     3,     2,     3,     2,     2,     1,
       1,     3,     1,     3,     3,     3,     3,     0,     1,     1,
       1,     1,     3,     4,     5,     2,     3,     2,     5,     4,
       4,     1,     1,     1,     4,     2,     1,     2,     1,     2,
       1,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     0,     1,     1,     1,     1,     5,     9,
       1,     1,     1,     1,     1,     7,     5,     5,     4,     1,
       2,     3,     1,     1,     1,     1,     2,     1,     8,     2,
       3,     1,     3,     1,     1,     0,     2,     1,     2,     1,
       1,     1,     1,     2,     3,     1,     2,     7,     3,     1,
       1,     2,     1,     2,     2,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     5,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     1,     1,     3,     3,
       2,     1,     1,     3,     1,     2,     2,     3,     2,     2,
       1,     1,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     3,     2,     2
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
#line 171 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2404 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 172 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2410 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 175 "src/gwion.y"
            { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2416 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 176 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2422 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 180 "src/gwion.y"
                 { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2428 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 181 "src/gwion.y"
                 { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2434 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 182 "src/gwion.y"
                 { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2440 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 183 "src/gwion.y"
                 { (yyval.section) = new_section_trait_def(mpool(arg), (yyvsp[0].trait_def)); }
#line 2446 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 184 "src/gwion.y"
                 { (yyval.section) = new_section_extend_def(mpool(arg), (yyvsp[0].extend_def)); }
#line 2452 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 185 "src/gwion.y"
                 { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2458 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 186 "src/gwion.y"
                 { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2464 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 187 "src/gwion.y"
                 { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2470 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 188 "src/gwion.y"
                 { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2476 "src/parser.c"
    break;

  case 15: /* class_flag: flag modifier  */
#line 191 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2482 "src/parser.c"
    break;

  case 16: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 194 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2493 "src/parser.c"
    break;

  case 17: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 201 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2505 "src/parser.c"
    break;

  case 18: /* trait_stmt: exp_stmt  */
#line 209 "src/gwion.y"
                     {
    if((yyvsp[0].stmt)->d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2515 "src/parser.c"
    break;

  case 20: /* trait_stmt_list: trait_stmt  */
#line 214 "src/gwion.y"
                             { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2521 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 215 "src/gwion.y"
                             { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2527 "src/parser.c"
    break;

  case 22: /* trait_section: trait_stmt_list  */
#line 218 "src/gwion.y"
                       { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2533 "src/parser.c"
    break;

  case 23: /* trait_section: func_def  */
#line 219 "src/gwion.y"
                 { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2539 "src/parser.c"
    break;

  case 24: /* trait_ast: trait_section  */
#line 223 "src/gwion.y"
                  { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2545 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_ast trait_section  */
#line 224 "src/gwion.y"
                            { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2551 "src/parser.c"
    break;

  case 27: /* trait_body: %empty  */
#line 227 "src/gwion.y"
                         { (yyval.ast) = NULL; }
#line 2557 "src/parser.c"
    break;

  case 28: /* trait_def: "trait" class_flag "<identifier>" traits "{" trait_body "}"  */
#line 230 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-1].ast), (yylsp[-4]));
      (yyval.trait_def)->traits = (yyvsp[-3].id_list);
      if(GET_FLAG((yyval.trait_def), abstract)) {
        { scanner_secondary(arg, "abstract should not be used on ${/+trait{0} declaration", (yylsp[-4])); }
        UNSET_FLAG((yyval.trait_def), abstract);
      }
    }
#line 2570 "src/parser.c"
    break;

  case 29: /* class_ext: "extends" type_decl_exp  */
#line 239 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2576 "src/parser.c"
    break;

  case 30: /* class_ext: %empty  */
#line 239 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2582 "src/parser.c"
    break;

  case 31: /* traits: %empty  */
#line 240 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2588 "src/parser.c"
    break;

  case 32: /* traits: ":" id_list  */
#line 240 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2594 "src/parser.c"
    break;

  case 33: /* extend_body: func_def  */
#line 242 "src/gwion.y"
             {
    Section * section= new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    (yyval.ast) = new_ast(mpool(arg), section, NULL); LIST_FIRST((yyval.ast))
  }
#line 2603 "src/parser.c"
    break;

  case 34: /* extend_body: extend_body func_def  */
#line 246 "src/gwion.y"
                         {
    Section * section = new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, new_ast(mpool(arg), section, NULL))
  }
#line 2612 "src/parser.c"
    break;

  case 35: /* extend_def: "extends" type_decl_empty traits "{" extend_body "}"  */
#line 252 "src/gwion.y"
                                                                 {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-1].ast));
  (yyval.extend_def)->traits = (yyvsp[-3].id_list);
}
#line 2621 "src/parser.c"
    break;

  case 37: /* class_body: %empty  */
#line 258 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2627 "src/parser.c"
    break;

  case 38: /* id_list: "<identifier>"  */
#line 260 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2633 "src/parser.c"
    break;

  case 39: /* id_list: id_list "," "<identifier>"  */
#line 261 "src/gwion.y"
                         { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2639 "src/parser.c"
    break;

  case 40: /* specialized_list: "<identifier>" traits  */
#line 263 "src/gwion.y"
                            { (yyval.specialized_list) = new_specialized_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].id_list), (yylsp[-1])); LIST_FIRST((yyval.specialized_list)) }
#line 2645 "src/parser.c"
    break;

  case 41: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 264 "src/gwion.y"
                                         { LIST_NEXT((yyval.specialized_list), (yyvsp[-3].specialized_list), Specialized_List, new_specialized_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].id_list), (yylsp[-1]))) }
#line 2651 "src/parser.c"
    break;

  case 42: /* stmt_list: stmt  */
#line 266 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2657 "src/parser.c"
    break;

  case 43: /* stmt_list: stmt_list stmt  */
#line 267 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2663 "src/parser.c"
    break;

  case 44: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 269 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2670 "src/parser.c"
    break;

  case 45: /* _func_effects: "perform" "<identifier>"  */
#line 272 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2676 "src/parser.c"
    break;

  case 46: /* _func_effects: _func_effects "<identifier>"  */
#line 272 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2682 "src/parser.c"
    break;

  case 47: /* func_effects: %empty  */
#line 273 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2688 "src/parser.c"
    break;

  case 48: /* func_effects: _func_effects  */
#line 273 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2694 "src/parser.c"
    break;

  case 49: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 275 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2701 "src/parser.c"
    break;

  case 50: /* fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";"  */
#line 278 "src/gwion.y"
                                                                 {
  (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
  (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-4].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2712 "src/parser.c"
    break;

  case 51: /* typedef_when: %empty  */
#line 285 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2718 "src/parser.c"
    break;

  case 52: /* typedef_when: "when" binary_exp  */
#line 285 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2724 "src/parser.c"
    break;

  case 53: /* type_def_type: "typedef"  */
#line 286 "src/gwion.y"
                         { (yyval.ival) = 0; }
#line 2730 "src/parser.c"
    break;

  case 54: /* type_def_type: "distinct"  */
#line 286 "src/gwion.y"
                                                  { (yyval.ival) = 1; }
#line 2736 "src/parser.c"
    break;

  case 55: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 287 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].ival);
}
#line 2749 "src/parser.c"
    break;

  case 56: /* type_decl_array: type_decl array  */
#line 296 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2755 "src/parser.c"
    break;

  case 58: /* type_decl_exp: type_decl_array  */
#line 298 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2763 "src/parser.c"
    break;

  case 59: /* type_decl_empty: type_decl_array  */
#line 302 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2771 "src/parser.c"
    break;

  case 60: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 307 "src/gwion.y"
                                            { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2777 "src/parser.c"
    break;

  case 61: /* arg: type_decl_array arg_decl  */
#line 308 "src/gwion.y"
                             { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2783 "src/parser.c"
    break;

  case 62: /* arg_list: arg  */
#line 310 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2789 "src/parser.c"
    break;

  case 63: /* arg_list: arg_list "," arg  */
#line 311 "src/gwion.y"
                        {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
   }
#line 2799 "src/parser.c"
    break;

  case 64: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 317 "src/gwion.y"
                                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2805 "src/parser.c"
    break;

  case 65: /* fptr_list: fptr_arg  */
#line 318 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2811 "src/parser.c"
    break;

  case 66: /* fptr_list: fptr_list "," fptr_arg  */
#line 318 "src/gwion.y"
                                                                           { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2817 "src/parser.c"
    break;

  case 67: /* code_stmt: "{" "}"  */
#line 321 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2823 "src/parser.c"
    break;

  case 68: /* code_stmt: "{" stmt_list "}"  */
#line 322 "src/gwion.y"
                      { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2829 "src/parser.c"
    break;

  case 69: /* stmt_pp: "<comment>"  */
#line 326 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2835 "src/parser.c"
    break;

  case 70: /* stmt_pp: "#include"  */
#line 327 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2841 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#define"  */
#line 328 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2847 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#pragma"  */
#line 329 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2853 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#undef"  */
#line 330 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2859 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#ifdef"  */
#line 331 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2865 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#ifndef"  */
#line 332 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2871 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#else"  */
#line 333 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2877 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#if"  */
#line 334 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2883 "src/parser.c"
    break;

  case 78: /* stmt_pp: "\n"  */
#line 335 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2889 "src/parser.c"
    break;

  case 79: /* stmt_pp: "import"  */
#line 336 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_import, (yyvsp[0].sval), (yyloc)); }
#line 2895 "src/parser.c"
    break;

  case 91: /* retry_stmt: "retry" ";"  */
#line 353 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_retry, (yylsp[-1]));
}
#line 2905 "src/parser.c"
    break;

  case 92: /* $@1: %empty  */
#line 358 "src/gwion.y"
                  { arg->handling = true; }
#line 2911 "src/parser.c"
    break;

  case 93: /* handler: "handle" $@1 opt_id stmt  */
#line 358 "src/gwion.y"
                                                        { (yyval.handler_list) = new_handler_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])); arg->handling = false; }
#line 2917 "src/parser.c"
    break;

  case 95: /* handler_list: handler_list handler  */
#line 360 "src/gwion.y"
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
#line 2934 "src/parser.c"
    break;

  case 96: /* try_stmt: "try" stmt handler_list  */
#line 372 "src/gwion.y"
                                  { (yyval.stmt) = new_stmt_try(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].handler_list)); }
#line 2940 "src/parser.c"
    break;

  case 98: /* opt_id: %empty  */
#line 374 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2946 "src/parser.c"
    break;

  case 99: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 377 "src/gwion.y"
                                       {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2956 "src/parser.c"
    break;

  case 100: /* when_exp: "when" exp  */
#line 383 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2962 "src/parser.c"
    break;

  case 101: /* when_exp: %empty  */
#line 383 "src/gwion.y"
                                                 { (yyval.exp) = NULL; }
#line 2968 "src/parser.c"
    break;

  case 102: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 386 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 2981 "src/parser.c"
    break;

  case 103: /* match_list: match_case_stmt  */
#line 396 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2987 "src/parser.c"
    break;

  case 104: /* match_list: match_list match_case_stmt  */
#line 397 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2993 "src/parser.c"
    break;

  case 105: /* where_stmt: "where" stmt  */
#line 399 "src/gwion.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2999 "src/parser.c"
    break;

  case 106: /* where_stmt: %empty  */
#line 399 "src/gwion.y"
                                        { (yyval.stmt) = NULL; }
#line 3005 "src/parser.c"
    break;

  case 107: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 401 "src/gwion.y"
                                                      {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 3018 "src/parser.c"
    break;

  case 108: /* flow: "while"  */
#line 411 "src/gwion.y"
            { (yyval.ival) = ae_stmt_while; }
#line 3024 "src/parser.c"
    break;

  case 109: /* flow: "until"  */
#line 412 "src/gwion.y"
            { (yyval.ival) = ae_stmt_until; }
#line 3030 "src/parser.c"
    break;

  case 110: /* loop_stmt: flow "(" exp ")" stmt  */
#line 417 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), false, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 3036 "src/parser.c"
    break;

  case 111: /* loop_stmt: "do" stmt flow exp ";"  */
#line 419 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), true, (yyloc)); LIST_REM((yyvsp[-2].ival)) }
#line 3042 "src/parser.c"
    break;

  case 112: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 421 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 3048 "src/parser.c"
    break;

  case 113: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 423 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 3054 "src/parser.c"
    break;

  case 114: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 425 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 3060 "src/parser.c"
    break;

  case 115: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" binary_exp ")" stmt  */
#line 427 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc));
        (yyval.stmt)->d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
        (yyval.stmt)->d.stmt_each.idx->sym = (yyvsp[-6].sym);
        (yyval.stmt)->d.stmt_each.idx->pos = (yylsp[-6]);
    }
#line 3070 "src/parser.c"
    break;

  case 116: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 433 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 3076 "src/parser.c"
    break;

  case 117: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 435 "src/gwion.y"
      { 
        (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc));
        (yyval.stmt)->d.stmt_loop.idx = mp_malloc(mpool(arg), EachIdx);
        (yyval.stmt)->d.stmt_loop.idx->sym = (yyvsp[-4].sym);
        (yyval.stmt)->d.stmt_loop.idx->pos = (yylsp[-4]);        
        LIST_REM((yyvsp[-2].exp))
      }
#line 3088 "src/parser.c"
    break;

  case 118: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 444 "src/gwion.y"
                                             { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 3094 "src/parser.c"
    break;

  case 119: /* defer_stmt: "defer" stmt  */
#line 446 "src/gwion.y"
                         { (yyval.stmt) = new_stmt_defer(mpool(arg), (yyvsp[0].stmt), (yyloc)); }
#line 3100 "src/parser.c"
    break;

  case 120: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 450 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 3106 "src/parser.c"
    break;

  case 121: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 452 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 3112 "src/parser.c"
    break;

  case 122: /* breaks: "break"  */
#line 455 "src/gwion.y"
                    { (yyval.ival) = ae_stmt_break; }
#line 3118 "src/parser.c"
    break;

  case 123: /* breaks: "continue"  */
#line 455 "src/gwion.y"
                                                        { (yyval.ival) = ae_stmt_continue; }
#line 3124 "src/parser.c"
    break;

  case 124: /* jump_stmt: "return" exp ";"  */
#line 457 "src/gwion.y"
                     { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 3130 "src/parser.c"
    break;

  case 125: /* jump_stmt: "return" ";"  */
#line 458 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 3136 "src/parser.c"
    break;

  case 126: /* jump_stmt: breaks "<integer>" ";"  */
#line 459 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 3142 "src/parser.c"
    break;

  case 127: /* jump_stmt: breaks ";"  */
#line 460 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 3148 "src/parser.c"
    break;

  case 128: /* exp_stmt: exp ";"  */
#line 464 "src/gwion.y"
            { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 3154 "src/parser.c"
    break;

  case 129: /* exp_stmt: ";"  */
#line 465 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 3160 "src/parser.c"
    break;

  case 130: /* exp: binary_exp  */
#line 469 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 3166 "src/parser.c"
    break;

  case 131: /* exp: exp "," binary_exp  */
#line 470 "src/gwion.y"
                       { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 3172 "src/parser.c"
    break;

  case 133: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 475 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3178 "src/parser.c"
    break;

  case 134: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 476 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3184 "src/parser.c"
    break;

  case 135: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 477 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3190 "src/parser.c"
    break;

  case 136: /* call_template: ":[" type_list "]"  */
#line 480 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3196 "src/parser.c"
    break;

  case 137: /* call_template: %empty  */
#line 480 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 3202 "src/parser.c"
    break;

  case 142: /* array_exp: "[" exp "]"  */
#line 485 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 3208 "src/parser.c"
    break;

  case 143: /* array_exp: "[" exp "]" array_exp  */
#line 486 "src/gwion.y"
                          {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0207); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3217 "src/parser.c"
    break;

  case 144: /* array_exp: "[" exp "]" "[" "]"  */
#line 490 "src/gwion.y"
                         { LIST_REM(2) parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0208); YYERROR; }
#line 3223 "src/parser.c"
    break;

  case 145: /* array_empty: "[" "]"  */
#line 494 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3229 "src/parser.c"
    break;

  case 146: /* array_empty: array_empty "[" "]"  */
#line 495 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3235 "src/parser.c"
    break;

  case 147: /* array_empty: array_empty array_exp  */
#line 496 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0209); YYERROR; }
#line 3241 "src/parser.c"
    break;

  case 148: /* range: "[" exp ":" exp "]"  */
#line 500 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM(2) LIST_REM((yyvsp[-1].exp)) }
#line 3247 "src/parser.c"
    break;

  case 149: /* range: "[" exp ":" "]"  */
#line 501 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 3253 "src/parser.c"
    break;

  case 150: /* range: "[" ":" exp "]"  */
#line 502 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 3259 "src/parser.c"
    break;

  case 154: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 507 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3265 "src/parser.c"
    break;

  case 155: /* func_args: "(" arg_list  */
#line 509 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3271 "src/parser.c"
    break;

  case 156: /* func_args: "("  */
#line 509 "src/gwion.y"
                                                                { (yyval.arg_list) = NULL; }
#line 3277 "src/parser.c"
    break;

  case 157: /* fptr_args: "(" fptr_list  */
#line 510 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3283 "src/parser.c"
    break;

  case 158: /* fptr_args: "("  */
#line 510 "src/gwion.y"
                                                               { (yyval.arg_list) = NULL; }
#line 3289 "src/parser.c"
    break;

  case 159: /* arg_type: "..." ")"  */
#line 511 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 3295 "src/parser.c"
    break;

  case 160: /* arg_type: ")"  */
#line 511 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 3301 "src/parser.c"
    break;

  case 161: /* decl_template: ":[" specialized_list "]"  */
#line 513 "src/gwion.y"
                                            { (yyval.specialized_list) = (yyvsp[-1].specialized_list); LIST_REM(2) }
#line 3307 "src/parser.c"
    break;

  case 162: /* decl_template: %empty  */
#line 513 "src/gwion.y"
                                                                       { (yyval.specialized_list) = NULL; }
#line 3313 "src/parser.c"
    break;

  case 163: /* global: "global"  */
#line 515 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = true; }
#line 3319 "src/parser.c"
    break;

  case 164: /* storage_flag: "static"  */
#line 517 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3325 "src/parser.c"
    break;

  case 166: /* access_flag: "private"  */
#line 519 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3331 "src/parser.c"
    break;

  case 167: /* access_flag: "protect"  */
#line 520 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3337 "src/parser.c"
    break;

  case 168: /* flag: access_flag  */
#line 523 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3343 "src/parser.c"
    break;

  case 169: /* flag: storage_flag  */
#line 524 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3349 "src/parser.c"
    break;

  case 170: /* flag: access_flag storage_flag  */
#line 525 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3355 "src/parser.c"
    break;

  case 171: /* flag: %empty  */
#line 526 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3361 "src/parser.c"
    break;

  case 172: /* final: "final"  */
#line 529 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3367 "src/parser.c"
    break;

  case 173: /* final: %empty  */
#line 529 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3373 "src/parser.c"
    break;

  case 174: /* modifier: "abstract"  */
#line 531 "src/gwion.y"
                     { (yyval.flag) = ae_flag_abstract; }
#line 3379 "src/parser.c"
    break;

  case 177: /* func_code: ";"  */
#line 533 "src/gwion.y"
                           { (yyval.stmt) = NULL; }
#line 3385 "src/parser.c"
    break;

  case 178: /* func_def_base: "fun" func_base func_args arg_type func_code  */
#line 535 "src/gwion.y"
                                                 {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt));
//    $$->trait = $5;
    if(!(yyvsp[0].stmt)) {
      SET_FLAG((yyvsp[-3].func_base), abstract);
    }
  }
#line 3399 "src/parser.c"
    break;

  case 179: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 547 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3411 "src/parser.c"
    break;

  case 185: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 558 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none, (yylsp[-5])); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 3417 "src/parser.c"
    break;

  case 186: /* op_base: type_decl_empty post_op "(" arg ")"  */
#line 560 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-3])); }
#line 3423 "src/parser.c"
    break;

  case 187: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 562 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-4]));
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 3432 "src/parser.c"
    break;

  case 188: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 567 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3441 "src/parser.c"
    break;

  case 189: /* operator: "operator"  */
#line 572 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 3447 "src/parser.c"
    break;

  case 190: /* operator: "operator" global  */
#line 572 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 3453 "src/parser.c"
    break;

  case 191: /* op_def: operator op_base code_stmt  */
#line 574 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3459 "src/parser.c"
    break;

  case 194: /* func_def: op_def  */
#line 576 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 3465 "src/parser.c"
    break;

  case 195: /* ref: "&"  */
#line 578 "src/gwion.y"
         { (yyval.uval) = 1; }
#line 3471 "src/parser.c"
    break;

  case 196: /* ref: "&" ref  */
#line 578 "src/gwion.y"
                               { (yyval.uval) = 1 + (yyvsp[0].uval); }
#line 3477 "src/parser.c"
    break;

  case 197: /* type_decl_base: "<identifier>"  */
#line 581 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3483 "src/parser.c"
    break;

  case 198: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args arg_type func_effects ")"  */
#line 582 "src/gwion.y"
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
#line 3500 "src/parser.c"
    break;

  case 199: /* type_decl_tmpl: type_decl_base call_template  */
#line 597 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3506 "src/parser.c"
    break;

  case 200: /* type_decl_tmpl: ref type_decl_base call_template  */
#line 598 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = (yyvsp[-2].uval); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3512 "src/parser.c"
    break;

  case 202: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 603 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3518 "src/parser.c"
    break;

  case 203: /* option: "?"  */
#line 606 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3524 "src/parser.c"
    break;

  case 204: /* option: OPTIONS  */
#line 606 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3530 "src/parser.c"
    break;

  case 205: /* option: %empty  */
#line 606 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3536 "src/parser.c"
    break;

  case 206: /* type_decl_opt: type_decl_noflag option  */
#line 607 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3542 "src/parser.c"
    break;

  case 208: /* type_decl: type_decl_flag type_decl_opt  */
#line 608 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3548 "src/parser.c"
    break;

  case 209: /* type_decl_flag: "late"  */
#line 611 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3554 "src/parser.c"
    break;

  case 210: /* type_decl_flag: "const"  */
#line 612 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3560 "src/parser.c"
    break;

  case 211: /* type_decl_flag2: "var"  */
#line 614 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3566 "src/parser.c"
    break;

  case 213: /* union_decl: "<identifier>" ";"  */
#line 617 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yylsp[-1]));
}
#line 3575 "src/parser.c"
    break;

  case 214: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 621 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 3581 "src/parser.c"
    break;

  case 216: /* union_list: union_decl union_list  */
#line 624 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 3587 "src/parser.c"
    break;

  case 217: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 627 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3599 "src/parser.c"
    break;

  case 218: /* var_decl_list: var_decl "," var_decl_list  */
#line 637 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3605 "src/parser.c"
    break;

  case 219: /* var_decl_list: var_decl  */
#line 638 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3611 "src/parser.c"
    break;

  case 220: /* var_decl: "<identifier>"  */
#line 641 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yylsp[0])); }
#line 3617 "src/parser.c"
    break;

  case 221: /* var_decl: "<identifier>" array  */
#line 642 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3623 "src/parser.c"
    break;

  case 222: /* arg_decl: "<identifier>"  */
#line 644 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3629 "src/parser.c"
    break;

  case 223: /* arg_decl: "<identifier>" array_empty  */
#line 645 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3635 "src/parser.c"
    break;

  case 224: /* arg_decl: "<identifier>" array_exp  */
#line 646 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 3641 "src/parser.c"
    break;

  case 226: /* fptr_arg_decl: %empty  */
#line 647 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3647 "src/parser.c"
    break;

  case 240: /* opt_exp: exp  */
#line 655 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3653 "src/parser.c"
    break;

  case 241: /* opt_exp: %empty  */
#line 655 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3659 "src/parser.c"
    break;

  case 243: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 658 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3665 "src/parser.c"
    break;

  case 244: /* con_exp: log_or_exp "?:" con_exp  */
#line 660 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3671 "src/parser.c"
    break;

  case 246: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 662 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3677 "src/parser.c"
    break;

  case 248: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 663 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3683 "src/parser.c"
    break;

  case 250: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 664 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3689 "src/parser.c"
    break;

  case 252: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 665 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3695 "src/parser.c"
    break;

  case 254: /* and_exp: and_exp "&" eq_exp  */
#line 666 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3701 "src/parser.c"
    break;

  case 256: /* eq_exp: eq_exp eq_op rel_exp  */
#line 667 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3707 "src/parser.c"
    break;

  case 258: /* rel_exp: rel_exp rel_op shift_exp  */
#line 668 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3713 "src/parser.c"
    break;

  case 260: /* shift_exp: shift_exp shift_op add_exp  */
#line 669 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3719 "src/parser.c"
    break;

  case 262: /* add_exp: add_exp add_op mul_exp  */
#line 670 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3725 "src/parser.c"
    break;

  case 264: /* mul_exp: mul_exp mul_op dur_exp  */
#line 671 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3731 "src/parser.c"
    break;

  case 266: /* dur_exp: dur_exp "::" cast_exp  */
#line 672 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3737 "src/parser.c"
    break;

  case 268: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 675 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3743 "src/parser.c"
    break;

  case 277: /* unary_exp: unary_op unary_exp  */
#line 682 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3749 "src/parser.c"
    break;

  case 278: /* unary_exp: OPID_E unary_exp  */
#line 683 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3755 "src/parser.c"
    break;

  case 279: /* unary_exp: "new" type_decl_exp  */
#line 684 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), (yyloc)); }
#line 3761 "src/parser.c"
    break;

  case 280: /* unary_exp: "spork" code_stmt  */
#line 685 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3767 "src/parser.c"
    break;

  case 281: /* unary_exp: "fork" code_stmt  */
#line 686 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3773 "src/parser.c"
    break;

  case 282: /* unary_exp: "$" type_decl_empty  */
#line 687 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yyloc)); }
#line 3779 "src/parser.c"
    break;

  case 283: /* lambda_list: "<identifier>"  */
#line 690 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)), NULL); }
#line 3785 "src/parser.c"
    break;

  case 284: /* lambda_list: "<identifier>" lambda_list  */
#line 691 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yyloc)), (yyvsp[0].arg_list)); }
#line 3791 "src/parser.c"
    break;

  case 285: /* lambda_arg: "\\" lambda_list  */
#line 692 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3797 "src/parser.c"
    break;

  case 286: /* lambda_arg: "\\"  */
#line 692 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 3803 "src/parser.c"
    break;

  case 287: /* type_list: type_decl_empty  */
#line 695 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3809 "src/parser.c"
    break;

  case 288: /* type_list: type_decl_empty "," type_list  */
#line 696 "src/gwion.y"
                                  { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3815 "src/parser.c"
    break;

  case 289: /* call_paren: "(" exp ")"  */
#line 700 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3821 "src/parser.c"
    break;

  case 290: /* call_paren: "(" ")"  */
#line 700 "src/gwion.y"
                                                                   { (yyval.exp) = NULL; }
#line 3827 "src/parser.c"
    break;

  case 293: /* dot_exp: post_exp "." "<identifier>"  */
#line 704 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3840 "src/parser.c"
    break;

  case 295: /* post_exp: post_exp array_exp  */
#line 715 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3846 "src/parser.c"
    break;

  case 296: /* post_exp: post_exp range  */
#line 717 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3852 "src/parser.c"
    break;

  case 297: /* post_exp: post_exp call_template call_paren  */
#line 719 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3859 "src/parser.c"
    break;

  case 298: /* post_exp: post_exp post_op  */
#line 722 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3865 "src/parser.c"
    break;

  case 299: /* post_exp: post_exp OPID_E  */
#line 724 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3871 "src/parser.c"
    break;

  case 300: /* post_exp: dot_exp  */
#line 725 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3877 "src/parser.c"
    break;

  case 301: /* interp_exp: "<interp string>`"  */
#line 729 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3883 "src/parser.c"
    break;

  case 302: /* interp_exp: "<interp string>" interp_exp  */
#line 730 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3889 "src/parser.c"
    break;

  case 303: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 731 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3895 "src/parser.c"
    break;

  case 304: /* interp: "`" interp_exp  */
#line 733 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3901 "src/parser.c"
    break;

  case 305: /* interp: interp "`" interp_exp  */
#line 734 "src/gwion.y"
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
#line 3916 "src/parser.c"
    break;

  case 306: /* prim_exp: "<identifier>"  */
#line 746 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3922 "src/parser.c"
    break;

  case 307: /* prim_exp: "<integer>"  */
#line 747 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 3928 "src/parser.c"
    break;

  case 308: /* prim_exp: FLOATT  */
#line 748 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 3934 "src/parser.c"
    break;

  case 309: /* prim_exp: interp  */
#line 749 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 3940 "src/parser.c"
    break;

  case 310: /* prim_exp: "<litteral string>"  */
#line 750 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3946 "src/parser.c"
    break;

  case 311: /* prim_exp: "<litteral char>"  */
#line 751 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3952 "src/parser.c"
    break;

  case 312: /* prim_exp: array  */
#line 752 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 3958 "src/parser.c"
    break;

  case 313: /* prim_exp: range  */
#line 753 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 3964 "src/parser.c"
    break;

  case 314: /* prim_exp: "<<<" exp ">>>"  */
#line 754 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 3970 "src/parser.c"
    break;

  case 315: /* prim_exp: "(" exp ")"  */
#line 755 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3976 "src/parser.c"
    break;

  case 316: /* prim_exp: lambda_arg code_stmt  */
#line 756 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yyloc)); }
#line 3982 "src/parser.c"
    break;

  case 317: /* prim_exp: "(" op_op ")"  */
#line 757 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 3988 "src/parser.c"
    break;

  case 318: /* prim_exp: "perform" "<identifier>"  */
#line 758 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 3994 "src/parser.c"
    break;

  case 319: /* prim_exp: "(" ")"  */
#line 759 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4000 "src/parser.c"
    break;


#line 4004 "src/parser.c"

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

#line 761 "src/gwion.y"

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
