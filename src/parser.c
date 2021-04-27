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
  YYSYMBOL_PP_REQUIRE = 76,                /* "require"  */
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
  YYSYMBOL_class_ext = 127,                /* class_ext  */
  YYSYMBOL_traits = 128,                   /* traits  */
  YYSYMBOL_extend_body = 129,              /* extend_body  */
  YYSYMBOL_extend_def = 130,               /* extend_def  */
  YYSYMBOL_class_body = 131,               /* class_body  */
  YYSYMBOL_id_list = 132,                  /* id_list  */
  YYSYMBOL_stmt_list = 133,                /* stmt_list  */
  YYSYMBOL_fptr_base = 134,                /* fptr_base  */
  YYSYMBOL_func_effects = 135,             /* func_effects  */
  YYSYMBOL_func_base = 136,                /* func_base  */
  YYSYMBOL_fptr_def = 137,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 138,             /* typedef_when  */
  YYSYMBOL_type_def_type = 139,            /* type_def_type  */
  YYSYMBOL_type_def = 140,                 /* type_def  */
  YYSYMBOL_type_decl_array = 141,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 142,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 143,          /* type_decl_empty  */
  YYSYMBOL_arg = 144,                      /* arg  */
  YYSYMBOL_arg_list = 145,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 146,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 147,                /* fptr_list  */
  YYSYMBOL_code_stmt = 148,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 149,                  /* stmt_pp  */
  YYSYMBOL_stmt = 150,                     /* stmt  */
  YYSYMBOL_retry_stmt = 151,               /* retry_stmt  */
  YYSYMBOL_handler = 152,                  /* handler  */
  YYSYMBOL_153_1 = 153,                    /* $@1  */
  YYSYMBOL_handler_list = 154,             /* handler_list  */
  YYSYMBOL_try_stmt = 155,                 /* try_stmt  */
  YYSYMBOL_opt_id = 156,                   /* opt_id  */
  YYSYMBOL_enum_def = 157,                 /* enum_def  */
  YYSYMBOL_when_exp = 158,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 159,          /* match_case_stmt  */
  YYSYMBOL_match_list = 160,               /* match_list  */
  YYSYMBOL_where_stmt = 161,               /* where_stmt  */
  YYSYMBOL_match_stmt = 162,               /* match_stmt  */
  YYSYMBOL_flow = 163,                     /* flow  */
  YYSYMBOL_loop_stmt = 164,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 165,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 166,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 167,           /* selection_stmt  */
  YYSYMBOL_breaks = 168,                   /* breaks  */
  YYSYMBOL_jump_stmt = 169,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 170,                 /* exp_stmt  */
  YYSYMBOL_exp = 171,                      /* exp  */
  YYSYMBOL_binary_exp = 172,               /* binary_exp  */
  YYSYMBOL_call_template = 173,            /* call_template  */
  YYSYMBOL_op = 174,                       /* op  */
  YYSYMBOL_array_exp = 175,                /* array_exp  */
  YYSYMBOL_array_empty = 176,              /* array_empty  */
  YYSYMBOL_range = 177,                    /* range  */
  YYSYMBOL_array = 178,                    /* array  */
  YYSYMBOL_decl_exp = 179,                 /* decl_exp  */
  YYSYMBOL_func_args = 180,                /* func_args  */
  YYSYMBOL_fptr_args = 181,                /* fptr_args  */
  YYSYMBOL_arg_type = 182,                 /* arg_type  */
  YYSYMBOL_decl_template = 183,            /* decl_template  */
  YYSYMBOL_global = 184,                   /* global  */
  YYSYMBOL_storage_flag = 185,             /* storage_flag  */
  YYSYMBOL_access_flag = 186,              /* access_flag  */
  YYSYMBOL_flag = 187,                     /* flag  */
  YYSYMBOL_final = 188,                    /* final  */
  YYSYMBOL_modifier = 189,                 /* modifier  */
  YYSYMBOL_func_trait = 190,               /* func_trait  */
  YYSYMBOL_func_code = 191,                /* func_code  */
  YYSYMBOL_func_def_base = 192,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 193,            /* abstract_fdef  */
  YYSYMBOL_op_op = 194,                    /* op_op  */
  YYSYMBOL_op_base = 195,                  /* op_base  */
  YYSYMBOL_operator = 196,                 /* operator  */
  YYSYMBOL_op_def = 197,                   /* op_def  */
  YYSYMBOL_func_def = 198,                 /* func_def  */
  YYSYMBOL_ref = 199,                      /* ref  */
  YYSYMBOL_type_decl_tmpl = 200,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 201,         /* type_decl_noflag  */
  YYSYMBOL_option = 202,                   /* option  */
  YYSYMBOL_type_decl_opt = 203,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 204,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 205,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 206,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 207,               /* union_decl  */
  YYSYMBOL_union_list = 208,               /* union_list  */
  YYSYMBOL_union_def = 209,                /* union_def  */
  YYSYMBOL_var_decl_list = 210,            /* var_decl_list  */
  YYSYMBOL_var_decl = 211,                 /* var_decl  */
  YYSYMBOL_arg_decl = 212,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 213,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 214,                    /* eq_op  */
  YYSYMBOL_rel_op = 215,                   /* rel_op  */
  YYSYMBOL_shift_op = 216,                 /* shift_op  */
  YYSYMBOL_add_op = 217,                   /* add_op  */
  YYSYMBOL_mul_op = 218,                   /* mul_op  */
  YYSYMBOL_opt_exp = 219,                  /* opt_exp  */
  YYSYMBOL_con_exp = 220,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 221,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 222,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 223,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 224,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 225,                  /* and_exp  */
  YYSYMBOL_eq_exp = 226,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 227,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 228,                /* shift_exp  */
  YYSYMBOL_add_exp = 229,                  /* add_exp  */
  YYSYMBOL_mul_exp = 230,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 231,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 232,                 /* cast_exp  */
  YYSYMBOL_unary_op = 233,                 /* unary_op  */
  YYSYMBOL_unary_exp = 234,                /* unary_exp  */
  YYSYMBOL_lambda_list = 235,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 236,               /* lambda_arg  */
  YYSYMBOL_type_list = 237,                /* type_list  */
  YYSYMBOL_call_paren = 238,               /* call_paren  */
  YYSYMBOL_post_op = 239,                  /* post_op  */
  YYSYMBOL_dot_exp = 240,                  /* dot_exp  */
  YYSYMBOL_post_exp = 241,                 /* post_exp  */
  YYSYMBOL_interp_exp = 242,               /* interp_exp  */
  YYSYMBOL_interp = 243,                   /* interp  */
  YYSYMBOL_prim_exp = 244                  /* prim_exp  */
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
#define YYFINAL  208
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1735

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  124
/* YYNRULES -- Number of rules.  */
#define YYNRULES  305
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  526

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
       0,   166,   166,   167,   170,   171,   175,   176,   177,   178,
     179,   180,   181,   182,   185,   187,   194,   201,   209,   222,
     222,   223,   223,   225,   229,   235,   243,   243,   245,   246,
     248,   249,   251,   254,   254,   254,   256,   259,   266,   266,
     267,   267,   268,   277,   277,   279,   283,   288,   289,   291,
     292,   298,   299,   299,   302,   303,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   334,   339,
     339,   340,   341,   347,   349,   349,   352,   358,   358,   361,
     371,   372,   374,   374,   376,   386,   387,   391,   393,   395,
     397,   399,   401,   407,   411,   413,   416,   418,   422,   422,
     424,   425,   426,   427,   431,   432,   436,   437,   441,   442,
     443,   444,   447,   447,   449,   449,   449,   449,   452,   453,
     457,   461,   462,   463,   467,   468,   469,   472,   472,   473,
     474,   476,   476,   477,   477,   478,   478,   480,   480,   482,
     484,   484,   486,   487,   490,   491,   492,   493,   496,   496,
     498,   498,   500,   500,   501,   501,   503,   514,   523,   523,
     523,   523,   523,   525,   527,   529,   534,   540,   540,   541,
     544,   544,   544,   546,   546,   548,   549,   553,   554,   557,
     557,   557,   558,   559,   559,   562,   563,   565,   565,   568,
     572,   574,   575,   578,   588,   589,   592,   593,   595,   596,
     597,   598,   598,   600,   600,   601,   601,   601,   601,   602,
     602,   603,   603,   604,   604,   604,   606,   606,   607,   608,
     610,   613,   613,   614,   614,   615,   615,   616,   616,   617,
     617,   618,   618,   619,   619,   620,   620,   621,   621,   622,
     622,   623,   623,   625,   625,   628,   628,   628,   629,   629,
     629,   629,   632,   633,   634,   635,   636,   637,   638,   641,
     642,   643,   643,   646,   647,   651,   651,   653,   653,   655,
     664,   665,   667,   669,   672,   674,   676,   680,   681,   682,
     684,   685,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710
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
  "#undef", "#ifdef", "#ifndef", "#else", "#if", "\n", "require",
  "@<operator id>", "&<operator id>", "<identifier>", "+", "++", "-", "--",
  "*", "/", "%", "$", "?", "OPTIONS", ":", "::", "?:", "new", "spork",
  "fork", "<<<", ">>>", "&&", "==", ">=", ">", "<=", "<", "!=", "<<", ">>",
  "&", "|", "^", "||", ":[", "~", "!", "<dynamic_operator>", "RANGE_EMPTY",
  "UMINUS", "UTIMES", "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg",
  "ast", "section", "class_flag", "class_def", "class_ext", "traits",
  "extend_body", "extend_def", "class_body", "id_list", "stmt_list",
  "fptr_base", "func_effects", "func_base", "fptr_def", "typedef_when",
  "type_def_type", "type_def", "type_decl_array", "type_decl_exp",
  "type_decl_empty", "arg", "arg_list", "fptr_arg", "fptr_list",
  "code_stmt", "stmt_pp", "stmt", "retry_stmt", "handler", "$@1",
  "handler_list", "try_stmt", "opt_id", "enum_def", "when_exp",
  "match_case_stmt", "match_list", "where_stmt", "match_stmt", "flow",
  "loop_stmt", "varloop_stmt", "defer_stmt", "selection_stmt", "breaks",
  "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template", "op",
  "array_exp", "array_empty", "range", "array", "decl_exp", "func_args",
  "fptr_args", "arg_type", "decl_template", "global", "storage_flag",
  "access_flag", "flag", "final", "modifier", "func_trait", "func_code",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "ref", "type_decl_tmpl", "type_decl_noflag",
  "option", "type_decl_opt", "type_decl", "type_decl_flag",
  "type_decl_flag2", "union_decl", "union_list", "union_def",
  "var_decl_list", "var_decl", "arg_decl", "fptr_arg_decl", "eq_op",
  "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp",
  "cast_exp", "unary_op", "unary_exp", "lambda_list", "lambda_arg",
  "type_list", "call_paren", "post_op", "dot_exp", "post_exp",
  "interp_exp", "interp", "prim_exp", YY_NULLPTR
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

#define YYPACT_NINF (-335)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-224)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     506,  -335,  1035,    22,   617,   214,  -335,    69,  -335,   830,
    -335,   133,   137,   172,  1578,   214,   915,  -335,  -335,   830,
      -8,    85,   214,   214,   214,   102,   113,  -335,  -335,   214,
     214,  -335,  1578,   830,    87,  1622,  -335,  -335,  -335,  -335,
    -335,  1096,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,   102,   102,
     177,   177,  1578,  -335,  -335,   199,   506,  -335,  -335,  -335,
     830,  -335,   214,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,   200,  -335,  -335,  -335,  -335,    44,  -335,  -335,   238,
      86,  -335,   216,  -335,  -335,  -335,  -335,  -335,   175,  -335,
    -335,  -335,   214,  -335,  -335,    70,   150,   147,   157,   170,
      66,   161,   178,   116,   145,   190,   202,  1622,  -335,   177,
    -335,  -335,    90,   239,  -335,  -335,  -335,   297,   299,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,   220,  -335,   300,  -335,  -335,  -335,  -335,  -335,  1578,
     103,  -335,   728,  -335,  -335,  -335,  -335,   302,  -335,  -335,
     249,   250,  1578,   232,  1578,   975,   223,   198,   229,  -335,
     289,   279,  -335,  -335,   233,   254,   234,   235,   204,   210,
    -335,   307,   240,   277,   209,  -335,   304,    53,  -335,   316,
     102,   243,   115,    68,  -335,    87,  -335,  -335,  1096,  -335,
      35,  -335,  -335,  -335,  -335,  -335,  -335,    27,  -335,  -335,
    -335,   102,  1578,  -335,   320,  -335,  1578,  1578,  1578,  1578,
    1157,  -335,  -335,  -335,   852,   177,   102,   102,  1578,  1622,
    1622,  1622,  1622,  1622,  1622,  -335,  -335,  1622,  1622,  1622,
    -335,  1622,  -335,  1622,  1622,   102,  -335,  -335,  1217,   245,
    -335,   102,   321,  -335,  -335,  -335,  1096,  -335,  -335,    83,
     322,  1278,  -335,   102,    17,  -335,   102,  -335,   102,   261,
    1578,    31,   975,    29,   305,  -335,   319,  -335,  -335,  -335,
     279,   219,  -335,  -335,  -335,   219,   219,  -335,  -335,    52,
     204,    53,  -335,  -335,  -335,  1338,  -335,  -335,   102,    17,
     252,   219,   219,  -335,  -335,  -335,  1096,  -335,   253,   267,
    -335,    86,  -335,  -335,  -335,  -335,   211,   302,   328,   329,
    -335,   331,   258,   334,   251,  -335,   150,   147,   157,   170,
      66,   161,   178,   116,   145,   190,   202,  -335,  -335,   335,
     332,  1398,  -335,  -335,  -335,  1458,  -335,  -335,   212,   263,
    -335,   340,  -335,   339,   256,   270,   272,   830,   296,   830,
    1518,   273,  1578,  1578,  -335,    43,   276,   229,  -335,   276,
     311,   257,   257,    49,  -335,  -335,  -335,   263,  -335,   352,
     330,   219,   257,   349,  -335,   219,   830,   353,   102,   102,
     102,   304,  -335,   357,  1622,   102,  -335,  -335,   268,  -335,
    -335,   304,   278,   102,  -335,   283,    64,   219,   219,   350,
    -335,  -335,   830,   274,   285,    37,    62,   354,  -335,  -335,
     104,   830,   213,   102,   257,   276,   367,   370,  -335,  -335,
    -335,  -335,   102,   284,    19,  -335,   372,   111,   359,  -335,
    -335,   381,   380,   382,  -335,   258,  -335,  -335,  -335,  -335,
     216,  1578,  -335,  -335,  -335,  -335,  -335,   316,  -335,   830,
    -335,   830,  1578,   830,  1578,   301,   830,  -335,   308,  -335,
    -335,  -335,  -335,   383,   386,   506,   506,  -335,  -335,  -335,
    -335,   506,    18,   315,   111,   385,  1578,   393,   102,  -335,
    -335,  -335,    86,    17,  -335,  -335,    39,  -335,   334,   830,
    -335,  -335,   506,   506,   387,   388,   389,  -335,   398,  -335,
    -335,    86,  -335,   396,   402,   830,   830,   397,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   115,     0,     0,     0,   157,   197,     0,    95,     0,
      96,     0,     0,     0,     0,   157,     0,   108,   109,     0,
       0,     0,   157,   157,   157,     0,   177,    40,    41,   157,
     157,   196,     0,     0,   272,     0,   195,   293,   294,   296,
     297,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,   292,   277,   255,   278,   256,     0,     0,
     259,   260,     0,   261,   258,     0,     2,     4,     8,     9,
       6,    12,   157,    13,    70,    73,    30,    77,    76,    10,
      71,     0,    68,    74,    75,    69,     0,    72,    67,     0,
     116,   137,   138,   299,   298,   118,   180,   181,     0,   182,
       7,   198,   157,    11,   139,   228,   231,   233,   235,   237,
     239,   241,   243,   245,   247,   249,   251,     0,   253,     0,
     257,   286,   262,   295,   280,   305,   221,   255,   256,   224,
     225,   127,   124,   218,   216,   217,   215,   125,   219,   220,
     126,     0,   168,     0,   170,   169,   172,   171,   131,     0,
       0,    54,     0,   150,   149,   152,   153,     0,   151,   155,
     154,   159,     0,     0,     0,     0,     0,     0,    85,   111,
       0,     0,   304,    78,     0,   159,     0,     0,   123,   183,
      45,     0,     0,   187,   191,   193,    44,     0,   178,     0,
       0,     0,     0,     0,   105,   269,   271,   264,     0,   287,
       0,   290,    46,   268,   265,   266,   267,     0,     1,     5,
      31,     0,     0,   113,     0,   114,     0,     0,     0,     0,
       0,   133,   259,   260,     0,     0,     0,     0,   227,     0,
       0,     0,     0,     0,     0,   213,   214,     0,     0,     0,
     222,     0,   223,     0,     0,     0,   263,   302,     0,     0,
     285,     0,     0,   281,   282,   284,     0,   301,   303,     0,
     128,     0,    55,   142,     0,   156,     0,   158,     0,     0,
       0,     0,     0,     0,     0,    84,     0,   110,    79,    81,
      83,   148,   160,   161,    14,   148,   148,   185,   184,     0,
     123,     0,   189,   190,   192,     0,    43,   194,   144,     0,
       0,   148,   148,   104,   270,   288,     0,   300,     0,     0,
     112,   117,   119,   121,   120,   132,     0,     0,     0,     0,
     179,     0,     0,   226,     0,   230,   232,   234,   236,   238,
     240,   242,   244,   246,   248,   250,   252,   254,   279,   273,
       0,     0,   283,   291,   136,     0,   129,   135,     0,     0,
      49,   141,   146,     0,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,     0,     0,    85,    82,     0,
      20,    21,    21,     0,    23,   186,   188,   212,    52,   143,
      33,   148,    21,     0,   289,   148,     0,     0,     0,     0,
       0,   206,   140,   205,     0,     0,   122,   276,     0,   130,
     134,   208,    48,     0,   145,     0,     0,   148,   148,   106,
      98,   103,     0,     0,     0,     0,    88,    93,    91,    28,
       0,     0,     0,     0,    21,     0,     0,     0,    25,    24,
     211,    51,     0,     0,     0,    32,     0,     0,    38,    97,
     176,     0,     0,     0,   207,     0,   229,   274,   275,   210,
     209,     0,    50,   163,   165,   164,   166,     0,    36,     0,
      99,     0,     0,     0,     0,     0,     0,    94,     0,    86,
      80,   147,    19,     0,    22,    27,    27,    53,    34,    37,
      35,    27,   123,     0,   201,     0,     0,     0,     0,   174,
     175,   204,    47,     0,   107,   100,     0,   101,    87,     0,
      92,    29,    27,    26,     0,     0,     0,   199,     0,   202,
     203,    39,    42,     0,     0,     0,    89,     0,    16,    18,
      17,   200,   173,   167,   102,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -335,  -335,   406,   -63,   155,  -335,  -335,  -324,  -335,  -335,
    -307,  -312,    -3,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
     -19,   -50,   -54,  -334,  -335,   -22,  -335,   -49,  -335,    -9,
    -335,   135,  -335,  -335,  -335,    50,  -335,  -335,    51,  -335,
    -335,  -335,   255,  -335,  -335,  -335,  -335,  -335,  -335,  -145,
      48,   -27,  -103,  -335,   -76,    21,   298,  -178,    20,   106,
     -38,  -282,  -260,   395,   265,  -335,   134,   266,  -335,  -335,
    -335,  -335,  -335,   205,  -335,  -335,  -335,  -251,   247,  -335,
     140,  -335,   241,  -335,   -23,  -335,  -335,   -52,  -335,   -12,
    -335,    57,  -335,  -335,  -104,   -99,   -98,  -100,  -335,  -211,
    -335,   206,   207,   215,   208,   203,   218,   201,   217,   221,
     224,   222,   344,    14,   248,  -335,    54,  -335,   -94,  -335,
    -335,  -166,  -335,  -335
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    65,   503,    67,   174,    68,   424,   426,   373,    69,
     504,   420,    70,   189,   434,   157,    71,   487,    72,    73,
     202,   181,   339,   350,   351,   378,   379,    74,    75,    76,
      77,   279,   367,   280,    78,   276,    79,   465,   364,   365,
     467,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,   287,   142,    91,    92,    93,    94,    95,   264,
     299,   354,   370,   158,   159,   160,   175,   283,   284,   406,
     456,    96,    97,   143,   225,    98,    99,   100,   182,   183,
     184,   294,   185,   186,   101,   102,   484,   485,   103,   392,
     393,   402,   431,   237,   144,   145,   146,   147,   324,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   196,   119,   340,   342,   120,   121,
     122,   201,   123,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     163,   152,   187,   209,   203,   193,   180,   238,   296,   204,
     171,   205,   206,   239,   243,   241,   221,   380,   325,   252,
     272,   507,   479,   352,   194,   371,   372,     2,   255,     3,
     148,   216,   305,   361,     6,   187,   187,   359,   374,   216,
     180,   382,   383,   463,   224,   515,   253,   213,   427,   197,
     141,   150,    20,   417,   441,   442,   443,   422,   436,   428,
       5,   210,   167,     5,   170,   363,   216,   454,   353,   452,
     247,   172,    31,     4,   162,   187,    34,     4,    35,    36,
      37,    38,    39,    40,    41,   464,   217,   216,   173,   200,
     343,   344,   217,    26,   217,  -123,    26,   248,   480,   306,
     473,    53,   214,    54,    55,    56,    57,   216,   468,    58,
     207,   260,   149,   474,   469,    59,    60,    61,    62,   362,
     218,   435,   429,   217,   307,   438,   218,   360,   218,   251,
     319,   246,   178,   249,    63,    64,   300,   271,   164,   161,
     384,   217,   165,   210,   303,   219,   250,   457,   458,   168,
     154,   219,    31,   219,   513,   282,   267,   218,   228,    36,
     179,    31,   229,   190,   192,   235,   195,   187,    36,   505,
     236,    54,   321,    56,   506,   218,   320,   166,   176,   177,
     230,   178,   219,   446,   346,   191,     4,   375,   187,   311,
     482,   337,   308,   261,   302,   517,   126,   259,   240,   208,
     219,   251,   216,   187,   187,   212,   211,   274,   322,   179,
     269,   514,   355,   444,   356,   216,   216,   468,   179,   260,
     400,   471,   187,   220,   216,    31,   257,   238,   187,   242,
     129,   130,    36,   239,   243,   241,   227,   312,   313,   314,
     187,   215,   216,   187,   349,   187,   200,     8,   231,    10,
     153,   154,   155,   156,   178,   232,    54,    55,    56,    57,
     309,   133,   134,   135,   136,   216,   233,   357,   316,   222,
     223,   216,   216,   386,   448,   187,   323,   234,   216,   377,
     461,   244,   179,   138,   139,   153,   154,    63,    64,   245,
     266,   267,   277,   216,   282,   267,   150,   292,   293,   410,
     216,   256,   273,  -222,   200,  -223,   258,   263,   275,   348,
     278,   295,   281,   285,   286,   251,   289,   179,   358,   290,
     291,   298,   301,   310,   338,   449,   341,   363,   366,   345,
     369,   381,   385,   388,   389,   415,   390,   391,   216,   395,
     396,   394,   401,   316,   403,   404,   405,   425,   409,   407,
     411,   408,   414,   423,   200,   419,   432,   455,   437,   440,
     433,   445,   453,   478,   459,   187,   187,   187,   451,   349,
     349,   349,   187,   472,   221,   462,   475,   439,   466,   476,
     187,   481,   486,   483,   349,   488,   489,   501,   490,   398,
     468,   499,   502,   316,   508,   510,   512,   518,   519,   520,
     187,   521,   522,   460,   180,   523,    66,   525,   413,   187,
     477,   416,   470,   377,   187,   368,   418,   421,   270,   493,
     254,   188,   450,   387,   492,   265,   288,   268,   297,   318,
     483,   376,   509,   491,   430,   496,   326,   330,   327,   332,
     209,   329,   226,   304,     0,     0,     0,   328,     0,   447,
     494,     0,   495,     0,   497,   331,   333,   500,     0,   511,
       0,   187,   334,     0,     0,   187,   336,   335,     0,   349,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   516,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   524,   210,     0,     1,
       0,     2,   498,     3,     0,     4,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,    15,    16,    17,    18,    19,    20,     0,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,    25,     0,
      26,    27,    28,    29,     0,    30,    31,     0,    32,    33,
      34,     0,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     0,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,     0,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    64,
       1,     0,     2,     0,     3,     0,     4,   151,     0,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    32,
      33,    34,     0,    35,    36,    37,    38,    39,    40,    41,
       0,     0,     0,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,     0,    53,     0,    54,    55,
      56,    57,     0,     0,    58,     0,     0,     0,     0,     0,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      64,     1,     0,     2,     0,     3,     0,     4,   262,     0,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      32,    33,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,     0,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     3,     0,     4,
      63,    64,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    32,    33,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,   317,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,   169,     0,
       2,     0,     3,    59,    60,    61,    62,     6,     0,     0,
       0,     0,   126,    54,   240,    56,   242,   129,   130,     0,
       0,   131,    63,    64,     0,    20,     0,     0,     0,     0,
       0,   132,   133,   134,   135,   136,   137,   138,   139,     0,
       0,     0,     0,     0,     0,    31,   140,     0,     0,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     1,     0,
       2,     0,     3,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    53,     0,    54,    55,    56,    57,
       0,     0,    58,     0,     0,    20,     0,     0,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    63,    64,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     0,     0,
       2,   125,     3,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    53,     0,    54,    55,    56,    57,
       0,     0,    58,     0,     0,    20,     0,     0,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    63,    64,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     0,     0,
       0,     2,     0,     3,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,    53,   126,    54,   127,    56,   128,
     129,   130,    58,     0,   131,     0,    20,     0,    59,    60,
      61,    62,     0,     0,   132,   133,   134,   135,   136,   137,
     138,   139,     0,     0,     0,     0,    31,    63,    64,   140,
      34,     0,    35,    36,    37,    38,    39,    40,    41,   198,
       0,   199,     2,     0,     3,   315,     0,     0,     0,     6,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,     0,    20,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    63,    64,
       0,    34,     0,    35,    36,    37,    38,    39,    40,    41,
       0,     0,     2,     0,     3,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    53,     0,    54,    55,
      56,    57,     0,     0,    58,     0,     0,    20,     0,     0,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    63,
      64,    34,     0,    35,    36,    37,    38,    39,    40,    41,
       0,     0,     0,     2,     0,     3,   347,     0,     0,     0,
       6,     0,     0,     0,     0,     0,    53,     0,    54,    55,
      56,    57,     0,     0,    58,     0,     0,   149,    20,     0,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    63,
      64,     0,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     2,     0,     3,   148,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,    20,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      63,    64,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     2,   397,     3,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,    20,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      63,    64,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     2,     0,     3,   399,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,    20,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      63,    64,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     2,   412,     3,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,    20,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      63,    64,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,    20,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    31,     3,
      63,    64,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,     0,     0,
       0,    59,    60,    61,    62,     0,    34,     0,    35,     0,
      37,    38,    39,    40,    41,     0,     0,     0,     0,     0,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,     0,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    64
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    66,    58,    32,    25,   111,   186,    59,
      19,    60,    61,   112,   114,   113,    92,   299,   229,   122,
     165,     3,     3,     6,    33,   285,   286,     5,   122,     7,
       8,     4,   198,     4,    12,    58,    59,     6,   289,     4,
      59,   301,   302,     6,    98,     6,   122,     3,   372,    35,
       2,     3,    30,    10,   388,   389,   390,   369,   382,    10,
      11,    70,    14,    11,    16,    22,     4,     3,    51,   403,
     119,    79,    50,     9,     5,    98,    54,     9,    56,    57,
      58,    59,    60,    61,    62,    23,    55,     4,     3,    41,
     256,     8,    55,    44,    55,     5,    44,     7,    79,    64,
     424,    79,    58,    81,    82,    83,    84,     4,     4,    87,
      62,     8,    90,   425,    10,    93,    94,    95,    96,    90,
      89,   381,   373,    55,    97,   385,    89,   272,    89,   111,
     224,   117,    79,    43,   112,   113,   190,   164,     5,     5,
     306,    55,     5,   152,   193,   114,    56,   407,   408,    15,
      37,   114,    50,   114,   488,    40,    41,    89,    88,    57,
     107,    50,    92,    29,    30,    99,    79,   190,    57,   476,
     104,    81,   226,    83,   481,    89,   225,     5,    23,    24,
     110,    79,   114,   394,   260,    30,     9,   290,   211,   216,
      79,   245,   211,    90,    79,   502,    80,   149,    82,     0,
     114,   111,     4,   226,   227,     5,    72,     9,   227,   107,
     162,   493,   266,   391,   268,     4,     4,     4,   107,     8,
       8,     8,   245,     7,     4,    50,     6,   331,   251,    84,
      85,    86,    57,   332,   334,   333,   102,   217,   218,   219,
     263,     3,     4,   266,   263,   268,   198,    15,    98,    17,
      36,    37,    38,    39,    79,   108,    81,    82,    83,    84,
     212,   100,   101,   102,   103,     4,   109,     6,   220,    94,
      95,     4,     4,     6,     6,   298,   228,   107,     4,   298,
       6,    91,   107,   105,   106,    36,    37,   112,   113,    87,
      40,    41,     3,     4,    40,    41,   248,    88,    89,     3,
       4,    62,    79,     6,   256,     6,     6,     5,    79,   261,
      31,     7,    79,    79,    79,   111,     9,   107,   270,    79,
      43,     5,    79,     3,    79,   401,     5,    22,     9,     7,
     111,    79,    79,     5,     5,   362,     5,    79,     4,     4,
       8,    90,    79,   295,     4,     6,    90,    90,   357,    79,
     359,    79,    79,    42,   306,    79,     4,   406,     9,     6,
      30,     4,    79,    79,    14,   388,   389,   390,    90,   388,
     389,   390,   395,   423,   450,    90,     9,   386,    24,     9,
     403,     9,    23,   437,   403,     4,     6,    79,     6,   341,
       4,    90,     9,   345,    79,    10,     3,    10,    10,    10,
     423,     3,     6,   412,   423,     3,     0,    10,   360,   432,
     432,   363,   421,   432,   437,   280,   365,   367,   163,   457,
     122,    26,   401,   317,   451,   160,   179,   161,   187,   224,
     484,   291,   484,   445,   377,   462,   230,   234,   231,   238,
     503,   233,    98,   195,    -1,    -1,    -1,   232,    -1,   395,
     459,    -1,   461,    -1,   463,   237,   239,   466,    -1,   486,
      -1,   484,   241,    -1,    -1,   488,   244,   243,    -1,   488,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   515,   516,    -1,     3,
      -1,     5,   464,     7,    -1,     9,    -1,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      44,    45,    46,    47,    -1,    49,    50,    -1,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
       3,    -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    79,    -1,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,     3,    -1,     5,    -1,     7,    -1,     9,    10,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,     9,
     112,   113,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    55,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,     3,    -1,
       5,    -1,     7,    93,    94,    95,    96,    12,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    89,   112,   113,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    50,   114,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,     3,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    30,    -1,    -1,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,   112,   113,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    30,    -1,    -1,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,   112,   113,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    89,    -1,    30,    -1,    93,    94,
      95,    96,    -1,    -1,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    50,   112,   113,   114,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,     5,    -1,     7,     8,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    30,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,   112,   113,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    30,    -1,    -1,
      93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   112,
     113,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    90,    30,    -1,
      93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,   112,
     113,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
     112,   113,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
     112,   113,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
     112,   113,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
     112,   113,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    50,     7,
     112,   113,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    -1,    54,    -1,    56,    -1,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113
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
      94,    95,    96,   112,   113,   122,   123,   124,   126,   130,
     133,   137,   139,   140,   148,   149,   150,   151,   155,   157,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   175,   176,   177,   178,   179,   192,   193,   196,   197,
     198,   205,   206,   209,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   236,
     239,   240,   241,   243,   244,     6,    80,    82,    84,    85,
      86,    89,    99,   100,   101,   102,   103,   104,   105,   106,
     114,   171,   174,   194,   215,   216,   217,   218,     8,    90,
     171,    10,   133,    36,    37,    38,    39,   136,   184,   185,
     186,   187,     5,   150,     5,     5,     5,   171,   187,     3,
     171,   150,    79,     3,   125,   187,   125,   125,    79,   107,
     141,   142,   199,   200,   201,   203,   204,   205,   184,   134,
     187,   125,   187,   172,   150,    79,   235,   234,    63,    65,
     171,   242,   141,   143,   142,   148,   148,   171,     0,   124,
     150,   187,     5,     3,    58,     3,     4,    55,    89,   114,
       7,   175,    94,    95,   143,   195,   233,   187,    88,    92,
     110,    98,   108,   109,   107,    99,   104,   214,   215,   216,
      82,   217,    84,   218,    91,    87,   234,   148,     7,    43,
      56,   111,   173,   175,   177,   239,    62,     6,     6,   171,
       8,    90,    10,     5,   180,   185,    40,    41,   188,   171,
     163,   172,   170,    79,     9,    79,   156,     3,    31,   152,
     154,    79,    40,   188,   189,    79,    79,   173,   199,     9,
      79,    43,    88,    89,   202,     7,   178,   203,     5,   181,
     143,    79,    79,   148,   235,   242,    64,    97,   141,   171,
       3,   172,   179,   179,   179,     8,   171,    55,   194,   239,
     148,   143,   141,   171,   219,   220,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   143,    79,   143,
     237,     5,   238,   242,     8,     7,   175,     8,   171,   141,
     144,   145,     6,    51,   182,   143,   143,     6,   171,     6,
     170,     4,    90,    22,   159,   160,     9,   153,   152,   111,
     183,   183,   183,   129,   198,   173,   201,   141,   146,   147,
     182,    79,   183,   183,   242,    79,     6,   180,     5,     5,
       5,    79,   210,   211,    90,     4,     8,     6,   171,     8,
       8,    79,   212,     4,     6,    90,   190,    79,    79,   150,
       3,   150,     6,   171,    79,   172,   171,    10,   159,    79,
     132,   156,   132,    42,   127,    90,   128,   128,    10,   198,
     212,   213,     4,    30,   135,   183,   128,     9,   183,   150,
       6,   144,   144,   144,   178,     4,   220,   237,     6,   175,
     176,    90,   144,    79,     3,   148,   191,   183,   183,    14,
     150,     6,    90,     6,    23,   158,    24,   161,     4,    10,
     150,     8,   142,   128,   132,     9,     9,   146,    79,     3,
      79,     9,    79,   143,   207,   208,    23,   138,     4,     6,
       6,   210,   172,   181,   150,   150,   172,   150,   171,    90,
     150,    79,     9,   123,   131,   131,   131,     3,    79,   208,
      10,   172,     3,   144,   182,     6,   133,   131,    10,    10,
      10,     3,     6,     3,   150,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   121,   122,   122,   123,   123,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   126,   126,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   131,   131,   132,   132,
     133,   133,   134,   135,   135,   135,   136,   137,   138,   138,
     139,   139,   140,   141,   141,   142,   143,   144,   144,   145,
     145,   146,   147,   147,   148,   148,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   151,   153,
     152,   154,   154,   155,   156,   156,   157,   158,   158,   159,
     160,   160,   161,   161,   162,   163,   163,   164,   164,   164,
     164,   164,   164,   164,   165,   166,   167,   167,   168,   168,
     169,   169,   169,   169,   170,   170,   171,   171,   172,   172,
     172,   172,   173,   173,   174,   174,   174,   174,   175,   175,
     175,   176,   176,   176,   177,   177,   177,   178,   178,   179,
     179,   180,   180,   181,   181,   182,   182,   183,   183,   184,
     185,   185,   186,   186,   187,   187,   187,   187,   188,   188,
     189,   189,   190,   190,   191,   191,   192,   193,   194,   194,
     194,   194,   194,   195,   195,   195,   195,   196,   196,   197,
     198,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   202,   203,   204,   204,   205,   205,   206,   206,   207,
     207,   208,   208,   209,   210,   210,   211,   211,   212,   212,
     212,   213,   213,   214,   214,   215,   215,   215,   215,   216,
     216,   217,   217,   218,   218,   218,   219,   219,   220,   220,
     220,   221,   221,   222,   222,   223,   223,   224,   224,   225,
     225,   226,   226,   227,   227,   228,   228,   229,   229,   230,
     230,   231,   231,   232,   232,   233,   233,   233,   233,   233,
     233,   233,   234,   234,   234,   234,   234,   234,   234,   235,
     235,   236,   236,   237,   237,   238,   238,   239,   239,   240,
     241,   241,   241,   241,   241,   241,   241,   242,   242,   242,
     243,   243,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     9,     8,     8,     8,     2,
       0,     0,     2,     1,     2,     5,     1,     0,     1,     3,
       1,     2,     4,     0,     2,     2,     5,     6,     0,     2,
       1,     1,     7,     2,     1,     1,     1,     4,     2,     1,
       3,     2,     1,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       4,     1,     2,     3,     1,     0,     6,     2,     0,     5,
       1,     2,     2,     0,     6,     1,     1,     5,     5,     6,
       7,     7,     9,     5,     3,     2,     5,     7,     1,     1,
       3,     2,     3,     2,     2,     1,     1,     3,     1,     3,
       3,     3,     3,     0,     1,     1,     1,     1,     3,     4,
       5,     2,     3,     2,     5,     4,     4,     1,     1,     1,
       4,     2,     1,     2,     1,     2,     1,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     0,
       1,     1,     0,     2,     1,     1,     6,     9,     1,     1,
       1,     1,     1,     7,     5,     5,     4,     1,     2,     3,
       1,     1,     1,     1,     2,     2,     3,     1,     3,     1,
       1,     0,     2,     1,     2,     1,     1,     1,     1,     2,
       3,     1,     2,     7,     3,     1,     1,     2,     1,     2,
       2,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     5,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     1,     1,     3,     3,     2,     1,     1,     3,
       1,     2,     2,     3,     2,     2,     1,     1,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     3,     2,     2
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
#line 166 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2329 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 167 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2335 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 170 "src/gwion.y"
            { (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2341 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 171 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2347 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 175 "src/gwion.y"
                 { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2353 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 176 "src/gwion.y"
                 { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2359 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 177 "src/gwion.y"
                 { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2365 "src/parser.c"
    break;

  case 9: /* section: extend_def  */
#line 178 "src/gwion.y"
                 { (yyval.section) = new_section_extend_def(mpool(arg), (yyvsp[0].extend_def)); }
#line 2371 "src/parser.c"
    break;

  case 10: /* section: enum_def  */
#line 179 "src/gwion.y"
                 { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2377 "src/parser.c"
    break;

  case 11: /* section: union_def  */
#line 180 "src/gwion.y"
                 { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2383 "src/parser.c"
    break;

  case 12: /* section: fptr_def  */
#line 181 "src/gwion.y"
                 { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2389 "src/parser.c"
    break;

  case 13: /* section: type_def  */
#line 182 "src/gwion.y"
                 { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2395 "src/parser.c"
    break;

  case 14: /* class_flag: flag modifier  */
#line 185 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2401 "src/parser.c"
    break;

  case 15: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 188 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].id_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2412 "src/parser.c"
    break;

  case 16: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 195 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2423 "src/parser.c"
    break;

  case 17: /* class_def: "union" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 202 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2435 "src/parser.c"
    break;

  case 18: /* class_def: "trait" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 210 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      (yyval.class_def)->cflag |= cflag_trait;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
      if(GET_FLAG((yyval.class_def), abstract)) {
        { scanner_secondary(arg, "abstract should not be used on ${/+trait{0} declaration", (yylsp[-6])); }
        UNSET_FLAG((yyval.class_def), abstract);
      }
    }
#line 2451 "src/parser.c"
    break;

  case 19: /* class_ext: "extends" type_decl_exp  */
#line 222 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2457 "src/parser.c"
    break;

  case 20: /* class_ext: %empty  */
#line 222 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2463 "src/parser.c"
    break;

  case 21: /* traits: %empty  */
#line 223 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2469 "src/parser.c"
    break;

  case 22: /* traits: ":" id_list  */
#line 223 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2475 "src/parser.c"
    break;

  case 23: /* extend_body: func_def  */
#line 225 "src/gwion.y"
             {
    Section * section= new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), section, NULL) : new_ast(mpool(arg), section, NULL); LIST_FIRST((yyval.ast))
  }
#line 2484 "src/parser.c"
    break;

  case 24: /* extend_body: extend_body func_def  */
#line 229 "src/gwion.y"
                         {
    Section * section = new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), section, NULL) : new_ast(mpool(arg), section, NULL))
  }
#line 2493 "src/parser.c"
    break;

  case 25: /* extend_def: "extends" type_decl_exp "{" extend_body "}"  */
#line 235 "src/gwion.y"
                                                        {
//  if($3 && $3->next)
//    { parser_error(&@$, arg, "extensions must define at most trait", 0211); YYERROR;}
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].ast));
//  $$->traits = $3;
}
#line 2504 "src/parser.c"
    break;

  case 27: /* class_body: %empty  */
#line 243 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2510 "src/parser.c"
    break;

  case 28: /* id_list: "<identifier>"  */
#line 245 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2516 "src/parser.c"
    break;

  case 29: /* id_list: id_list "," "<identifier>"  */
#line 246 "src/gwion.y"
                         { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2522 "src/parser.c"
    break;

  case 30: /* stmt_list: stmt  */
#line 248 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2528 "src/parser.c"
    break;

  case 31: /* stmt_list: stmt_list stmt  */
#line 249 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2534 "src/parser.c"
    break;

  case 32: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 251 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2541 "src/parser.c"
    break;

  case 33: /* func_effects: %empty  */
#line 254 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2547 "src/parser.c"
    break;

  case 34: /* func_effects: "perform" "<identifier>"  */
#line 254 "src/gwion.y"
                                                { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2553 "src/parser.c"
    break;

  case 35: /* func_effects: func_effects "<identifier>"  */
#line 254 "src/gwion.y"
                                                                                                                     { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2559 "src/parser.c"
    break;

  case 36: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 256 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2566 "src/parser.c"
    break;

  case 37: /* fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";"  */
#line 259 "src/gwion.y"
                                                                 {
  (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
  (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-4].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2577 "src/parser.c"
    break;

  case 38: /* typedef_when: %empty  */
#line 266 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2583 "src/parser.c"
    break;

  case 39: /* typedef_when: "when" binary_exp  */
#line 266 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2589 "src/parser.c"
    break;

  case 40: /* type_def_type: "typedef"  */
#line 267 "src/gwion.y"
                         { (yyval.ival) = 0; }
#line 2595 "src/parser.c"
    break;

  case 41: /* type_def_type: "distinct"  */
#line 267 "src/gwion.y"
                                                  { (yyval.ival) = 1; }
#line 2601 "src/parser.c"
    break;

  case 42: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 268 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].id_list));
  (yyval.type_def)->distinct = (yyvsp[-6].ival);
}
#line 2614 "src/parser.c"
    break;

  case 43: /* type_decl_array: type_decl array  */
#line 277 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2620 "src/parser.c"
    break;

  case 45: /* type_decl_exp: type_decl_array  */
#line 279 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2628 "src/parser.c"
    break;

  case 46: /* type_decl_empty: type_decl_array  */
#line 283 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2636 "src/parser.c"
    break;

  case 47: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 288 "src/gwion.y"
                                            { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2642 "src/parser.c"
    break;

  case 48: /* arg: type_decl_array arg_decl  */
#line 289 "src/gwion.y"
                             { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2648 "src/parser.c"
    break;

  case 49: /* arg_list: arg  */
#line 291 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2654 "src/parser.c"
    break;

  case 50: /* arg_list: arg_list "," arg  */
#line 292 "src/gwion.y"
                        {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
   }
#line 2664 "src/parser.c"
    break;

  case 51: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 298 "src/gwion.y"
                                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2670 "src/parser.c"
    break;

  case 52: /* fptr_list: fptr_arg  */
#line 299 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2676 "src/parser.c"
    break;

  case 53: /* fptr_list: fptr_list "," fptr_arg  */
#line 299 "src/gwion.y"
                                                                           { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2682 "src/parser.c"
    break;

  case 54: /* code_stmt: "{" "}"  */
#line 302 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2688 "src/parser.c"
    break;

  case 55: /* code_stmt: "{" stmt_list "}"  */
#line 303 "src/gwion.y"
                      { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2694 "src/parser.c"
    break;

  case 56: /* stmt_pp: "<comment>"  */
#line 307 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2700 "src/parser.c"
    break;

  case 57: /* stmt_pp: "#include"  */
#line 308 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2706 "src/parser.c"
    break;

  case 58: /* stmt_pp: "#define"  */
#line 309 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2712 "src/parser.c"
    break;

  case 59: /* stmt_pp: "#pragma"  */
#line 310 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2718 "src/parser.c"
    break;

  case 60: /* stmt_pp: "#undef"  */
#line 311 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2724 "src/parser.c"
    break;

  case 61: /* stmt_pp: "#ifdef"  */
#line 312 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2730 "src/parser.c"
    break;

  case 62: /* stmt_pp: "#ifndef"  */
#line 313 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2736 "src/parser.c"
    break;

  case 63: /* stmt_pp: "#else"  */
#line 314 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2742 "src/parser.c"
    break;

  case 64: /* stmt_pp: "#if"  */
#line 315 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2748 "src/parser.c"
    break;

  case 65: /* stmt_pp: "\n"  */
#line 316 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2754 "src/parser.c"
    break;

  case 66: /* stmt_pp: "require"  */
#line 317 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), (yyloc)); }
#line 2760 "src/parser.c"
    break;

  case 78: /* retry_stmt: "retry" ";"  */
#line 334 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_retry, (yylsp[-1]));
}
#line 2770 "src/parser.c"
    break;

  case 79: /* $@1: %empty  */
#line 339 "src/gwion.y"
                  { arg->handling = true; }
#line 2776 "src/parser.c"
    break;

  case 80: /* handler: "handle" $@1 opt_id stmt  */
#line 339 "src/gwion.y"
                                                        { (yyval.handler_list) = new_handler_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])); arg->handling = false; }
#line 2782 "src/parser.c"
    break;

  case 82: /* handler_list: handler_list handler  */
#line 341 "src/gwion.y"
                          {
        if(!(yyvsp[-1].handler_list)->xid)
        { parser_error(&(yylsp[-1]), arg, "specific `handle` after a catch-all block", 0); YYERROR; }
        (yyval.handler_list) = (yyvsp[-1].handler_list);
        (yyvsp[-1].handler_list)->next = (yyvsp[0].handler_list);
  }
#line 2793 "src/parser.c"
    break;

  case 83: /* try_stmt: "try" stmt handler_list  */
#line 347 "src/gwion.y"
                                  { (yyval.stmt) = new_stmt_try(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].handler_list)); }
#line 2799 "src/parser.c"
    break;

  case 85: /* opt_id: %empty  */
#line 349 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2805 "src/parser.c"
    break;

  case 86: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 352 "src/gwion.y"
                                       {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2815 "src/parser.c"
    break;

  case 87: /* when_exp: "when" exp  */
#line 358 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2821 "src/parser.c"
    break;

  case 88: /* when_exp: %empty  */
#line 358 "src/gwion.y"
                                                 { (yyval.exp) = NULL; }
#line 2827 "src/parser.c"
    break;

  case 89: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 361 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 2840 "src/parser.c"
    break;

  case 90: /* match_list: match_case_stmt  */
#line 371 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2846 "src/parser.c"
    break;

  case 91: /* match_list: match_list match_case_stmt  */
#line 372 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2852 "src/parser.c"
    break;

  case 92: /* where_stmt: "where" stmt  */
#line 374 "src/gwion.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2858 "src/parser.c"
    break;

  case 93: /* where_stmt: %empty  */
#line 374 "src/gwion.y"
                                        { (yyval.stmt) = NULL; }
#line 2864 "src/parser.c"
    break;

  case 94: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 376 "src/gwion.y"
                                                      {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 2877 "src/parser.c"
    break;

  case 95: /* flow: "while"  */
#line 386 "src/gwion.y"
            { (yyval.ival) = ae_stmt_while; }
#line 2883 "src/parser.c"
    break;

  case 96: /* flow: "until"  */
#line 387 "src/gwion.y"
            { (yyval.ival) = ae_stmt_until; }
#line 2889 "src/parser.c"
    break;

  case 97: /* loop_stmt: flow "(" exp ")" stmt  */
#line 392 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), false, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2895 "src/parser.c"
    break;

  case 98: /* loop_stmt: "do" stmt flow exp ";"  */
#line 394 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), true, (yyloc)); LIST_REM((yyvsp[-2].ival)) }
#line 2901 "src/parser.c"
    break;

  case 99: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 396 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 2907 "src/parser.c"
    break;

  case 100: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 398 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2913 "src/parser.c"
    break;

  case 101: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 400 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2919 "src/parser.c"
    break;

  case 102: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" binary_exp ")" stmt  */
#line 402 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc));
        (yyval.stmt)->d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
        (yyval.stmt)->d.stmt_each.idx->sym = (yyvsp[-6].sym);
        (yyval.stmt)->d.stmt_each.idx->pos = (yylsp[-6]);
    }
#line 2929 "src/parser.c"
    break;

  case 103: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 408 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2935 "src/parser.c"
    break;

  case 104: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 411 "src/gwion.y"
                                             { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2941 "src/parser.c"
    break;

  case 105: /* defer_stmt: "defer" stmt  */
#line 413 "src/gwion.y"
                         { (yyval.stmt) = new_stmt_defer(mpool(arg), (yyvsp[0].stmt), (yyloc)); }
#line 2947 "src/parser.c"
    break;

  case 106: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 417 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2953 "src/parser.c"
    break;

  case 107: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 419 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 2959 "src/parser.c"
    break;

  case 108: /* breaks: "break"  */
#line 422 "src/gwion.y"
                    { (yyval.ival) = ae_stmt_break; }
#line 2965 "src/parser.c"
    break;

  case 109: /* breaks: "continue"  */
#line 422 "src/gwion.y"
                                                        { (yyval.ival) = ae_stmt_continue; }
#line 2971 "src/parser.c"
    break;

  case 110: /* jump_stmt: "return" exp ";"  */
#line 424 "src/gwion.y"
                     { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2977 "src/parser.c"
    break;

  case 111: /* jump_stmt: "return" ";"  */
#line 425 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 2983 "src/parser.c"
    break;

  case 112: /* jump_stmt: breaks "<integer>" ";"  */
#line 426 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 2989 "src/parser.c"
    break;

  case 113: /* jump_stmt: breaks ";"  */
#line 427 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 2995 "src/parser.c"
    break;

  case 114: /* exp_stmt: exp ";"  */
#line 431 "src/gwion.y"
            { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 3001 "src/parser.c"
    break;

  case 115: /* exp_stmt: ";"  */
#line 432 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 3007 "src/parser.c"
    break;

  case 116: /* exp: binary_exp  */
#line 436 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 3013 "src/parser.c"
    break;

  case 117: /* exp: exp "," binary_exp  */
#line 437 "src/gwion.y"
                       { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 3019 "src/parser.c"
    break;

  case 119: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 442 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3025 "src/parser.c"
    break;

  case 120: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 443 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3031 "src/parser.c"
    break;

  case 121: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 444 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3037 "src/parser.c"
    break;

  case 122: /* call_template: ":[" type_list "]"  */
#line 447 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3043 "src/parser.c"
    break;

  case 123: /* call_template: %empty  */
#line 447 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 3049 "src/parser.c"
    break;

  case 128: /* array_exp: "[" exp "]"  */
#line 452 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 3055 "src/parser.c"
    break;

  case 129: /* array_exp: "[" exp "]" array_exp  */
#line 453 "src/gwion.y"
                          {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0207); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3064 "src/parser.c"
    break;

  case 130: /* array_exp: "[" exp "]" "[" "]"  */
#line 457 "src/gwion.y"
                         { LIST_REM(2) parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0208); YYERROR; }
#line 3070 "src/parser.c"
    break;

  case 131: /* array_empty: "[" "]"  */
#line 461 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3076 "src/parser.c"
    break;

  case 132: /* array_empty: array_empty "[" "]"  */
#line 462 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3082 "src/parser.c"
    break;

  case 133: /* array_empty: array_empty array_exp  */
#line 463 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0209); YYERROR; }
#line 3088 "src/parser.c"
    break;

  case 134: /* range: "[" exp ":" exp "]"  */
#line 467 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM(2) LIST_REM((yyvsp[-1].exp)) }
#line 3094 "src/parser.c"
    break;

  case 135: /* range: "[" exp ":" "]"  */
#line 468 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 3100 "src/parser.c"
    break;

  case 136: /* range: "[" ":" exp "]"  */
#line 469 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 3106 "src/parser.c"
    break;

  case 140: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 474 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3112 "src/parser.c"
    break;

  case 141: /* func_args: "(" arg_list  */
#line 476 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3118 "src/parser.c"
    break;

  case 142: /* func_args: "("  */
#line 476 "src/gwion.y"
                                                                { (yyval.arg_list) = NULL; }
#line 3124 "src/parser.c"
    break;

  case 143: /* fptr_args: "(" fptr_list  */
#line 477 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3130 "src/parser.c"
    break;

  case 144: /* fptr_args: "("  */
#line 477 "src/gwion.y"
                                                               { (yyval.arg_list) = NULL; }
#line 3136 "src/parser.c"
    break;

  case 145: /* arg_type: "..." ")"  */
#line 478 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 3142 "src/parser.c"
    break;

  case 146: /* arg_type: ")"  */
#line 478 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 3148 "src/parser.c"
    break;

  case 147: /* decl_template: ":[" id_list "]"  */
#line 480 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); LIST_REM(2) }
#line 3154 "src/parser.c"
    break;

  case 148: /* decl_template: %empty  */
#line 480 "src/gwion.y"
                                                              { (yyval.id_list) = NULL; }
#line 3160 "src/parser.c"
    break;

  case 149: /* global: "global"  */
#line 482 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = true; }
#line 3166 "src/parser.c"
    break;

  case 150: /* storage_flag: "static"  */
#line 484 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3172 "src/parser.c"
    break;

  case 152: /* access_flag: "private"  */
#line 486 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3178 "src/parser.c"
    break;

  case 153: /* access_flag: "protect"  */
#line 487 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3184 "src/parser.c"
    break;

  case 154: /* flag: access_flag  */
#line 490 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3190 "src/parser.c"
    break;

  case 155: /* flag: storage_flag  */
#line 491 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3196 "src/parser.c"
    break;

  case 156: /* flag: access_flag storage_flag  */
#line 492 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3202 "src/parser.c"
    break;

  case 157: /* flag: %empty  */
#line 493 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3208 "src/parser.c"
    break;

  case 158: /* final: "final"  */
#line 496 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3214 "src/parser.c"
    break;

  case 159: /* final: %empty  */
#line 496 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3220 "src/parser.c"
    break;

  case 160: /* modifier: "abstract"  */
#line 498 "src/gwion.y"
                     { (yyval.flag) = ae_flag_abstract; }
#line 3226 "src/parser.c"
    break;

  case 162: /* func_trait: %empty  */
#line 500 "src/gwion.y"
            { (yyval.sym) = 0; }
#line 3232 "src/parser.c"
    break;

  case 163: /* func_trait: ":" "<identifier>"  */
#line 500 "src/gwion.y"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 3238 "src/parser.c"
    break;

  case 165: /* func_code: ";"  */
#line 501 "src/gwion.y"
                           { (yyval.stmt) = NULL; }
#line 3244 "src/parser.c"
    break;

  case 166: /* func_def_base: "fun" func_base func_args arg_type func_trait func_code  */
#line 503 "src/gwion.y"
                                                            {
    (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
    (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-4].func_base), (yyvsp[0].stmt));
    (yyval.func_def)->trait = (yyvsp[-1].sym);
    if(!(yyvsp[0].stmt)) {
      SET_FLAG((yyvsp[-4].func_base), abstract);
    }
  }
#line 3258 "src/parser.c"
    break;

  case 167: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 515 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3270 "src/parser.c"
    break;

  case 173: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 526 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none, (yylsp[-5])); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 3276 "src/parser.c"
    break;

  case 174: /* op_base: type_decl_empty post_op "(" arg ")"  */
#line 528 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-3])); }
#line 3282 "src/parser.c"
    break;

  case 175: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 530 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-4]));
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 3291 "src/parser.c"
    break;

  case 176: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 535 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3300 "src/parser.c"
    break;

  case 177: /* operator: "operator"  */
#line 540 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 3306 "src/parser.c"
    break;

  case 178: /* operator: "operator" global  */
#line 540 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 3312 "src/parser.c"
    break;

  case 179: /* op_def: operator op_base code_stmt  */
#line 542 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3318 "src/parser.c"
    break;

  case 182: /* func_def: op_def  */
#line 544 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 3324 "src/parser.c"
    break;

  case 183: /* ref: "&"  */
#line 546 "src/gwion.y"
         { (yyval.uval) = 1; }
#line 3330 "src/parser.c"
    break;

  case 184: /* ref: "&" ref  */
#line 546 "src/gwion.y"
                               { (yyval.uval) = 1 + (yyvsp[0].uval); }
#line 3336 "src/parser.c"
    break;

  case 185: /* type_decl_tmpl: "<identifier>" call_template  */
#line 548 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3342 "src/parser.c"
    break;

  case 186: /* type_decl_tmpl: ref "<identifier>" call_template  */
#line 549 "src/gwion.y"
                         { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->ref = 1; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3348 "src/parser.c"
    break;

  case 188: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 554 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3354 "src/parser.c"
    break;

  case 189: /* option: "?"  */
#line 557 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3360 "src/parser.c"
    break;

  case 190: /* option: OPTIONS  */
#line 557 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3366 "src/parser.c"
    break;

  case 191: /* option: %empty  */
#line 557 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3372 "src/parser.c"
    break;

  case 192: /* type_decl_opt: type_decl_noflag option  */
#line 558 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option |= (yyvsp[0].uval); }
#line 3378 "src/parser.c"
    break;

  case 194: /* type_decl: type_decl_flag type_decl_opt  */
#line 559 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3384 "src/parser.c"
    break;

  case 195: /* type_decl_flag: "late"  */
#line 562 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3390 "src/parser.c"
    break;

  case 196: /* type_decl_flag: "const"  */
#line 563 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3396 "src/parser.c"
    break;

  case 197: /* type_decl_flag2: "var"  */
#line 565 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3402 "src/parser.c"
    break;

  case 199: /* union_decl: "<identifier>" ";"  */
#line 568 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yylsp[-1]));
}
#line 3411 "src/parser.c"
    break;

  case 200: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 572 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 3417 "src/parser.c"
    break;

  case 202: /* union_list: union_decl union_list  */
#line 575 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 3423 "src/parser.c"
    break;

  case 203: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 578 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 3435 "src/parser.c"
    break;

  case 204: /* var_decl_list: var_decl "," var_decl_list  */
#line 588 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3441 "src/parser.c"
    break;

  case 205: /* var_decl_list: var_decl  */
#line 589 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3447 "src/parser.c"
    break;

  case 206: /* var_decl: "<identifier>"  */
#line 592 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yylsp[0])); }
#line 3453 "src/parser.c"
    break;

  case 207: /* var_decl: "<identifier>" array  */
#line 593 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3459 "src/parser.c"
    break;

  case 208: /* arg_decl: "<identifier>"  */
#line 595 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3465 "src/parser.c"
    break;

  case 209: /* arg_decl: "<identifier>" array_empty  */
#line 596 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3471 "src/parser.c"
    break;

  case 210: /* arg_decl: "<identifier>" array_exp  */
#line 597 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 3477 "src/parser.c"
    break;

  case 212: /* fptr_arg_decl: %empty  */
#line 598 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3483 "src/parser.c"
    break;

  case 226: /* opt_exp: exp  */
#line 606 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3489 "src/parser.c"
    break;

  case 227: /* opt_exp: %empty  */
#line 606 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3495 "src/parser.c"
    break;

  case 229: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 609 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3501 "src/parser.c"
    break;

  case 230: /* con_exp: log_or_exp "?:" con_exp  */
#line 611 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3507 "src/parser.c"
    break;

  case 232: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 613 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3513 "src/parser.c"
    break;

  case 234: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 614 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3519 "src/parser.c"
    break;

  case 236: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 615 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3525 "src/parser.c"
    break;

  case 238: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 616 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3531 "src/parser.c"
    break;

  case 240: /* and_exp: and_exp "&" eq_exp  */
#line 617 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3537 "src/parser.c"
    break;

  case 242: /* eq_exp: eq_exp eq_op rel_exp  */
#line 618 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3543 "src/parser.c"
    break;

  case 244: /* rel_exp: rel_exp rel_op shift_exp  */
#line 619 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3549 "src/parser.c"
    break;

  case 246: /* shift_exp: shift_exp shift_op add_exp  */
#line 620 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3555 "src/parser.c"
    break;

  case 248: /* add_exp: add_exp add_op mul_exp  */
#line 621 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3561 "src/parser.c"
    break;

  case 250: /* mul_exp: mul_exp mul_op dur_exp  */
#line 622 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3567 "src/parser.c"
    break;

  case 252: /* dur_exp: dur_exp "::" cast_exp  */
#line 623 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3573 "src/parser.c"
    break;

  case 254: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 626 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3579 "src/parser.c"
    break;

  case 263: /* unary_exp: unary_op unary_exp  */
#line 633 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3585 "src/parser.c"
    break;

  case 264: /* unary_exp: OPID_E unary_exp  */
#line 634 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3591 "src/parser.c"
    break;

  case 265: /* unary_exp: "new" type_decl_exp  */
#line 635 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), (yyloc)); }
#line 3597 "src/parser.c"
    break;

  case 266: /* unary_exp: "spork" code_stmt  */
#line 636 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3603 "src/parser.c"
    break;

  case 267: /* unary_exp: "fork" code_stmt  */
#line 637 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3609 "src/parser.c"
    break;

  case 268: /* unary_exp: "$" type_decl_empty  */
#line 638 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yyloc)); }
#line 3615 "src/parser.c"
    break;

  case 269: /* lambda_list: "<identifier>"  */
#line 641 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)), NULL); }
#line 3621 "src/parser.c"
    break;

  case 270: /* lambda_list: "<identifier>" lambda_list  */
#line 642 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yyloc)), (yyvsp[0].arg_list)); }
#line 3627 "src/parser.c"
    break;

  case 271: /* lambda_arg: "\\" lambda_list  */
#line 643 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3633 "src/parser.c"
    break;

  case 272: /* lambda_arg: "\\"  */
#line 643 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 3639 "src/parser.c"
    break;

  case 273: /* type_list: type_decl_empty  */
#line 646 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3645 "src/parser.c"
    break;

  case 274: /* type_list: type_decl_empty "," type_list  */
#line 647 "src/gwion.y"
                                  { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3651 "src/parser.c"
    break;

  case 275: /* call_paren: "(" exp ")"  */
#line 651 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3657 "src/parser.c"
    break;

  case 276: /* call_paren: "(" ")"  */
#line 651 "src/gwion.y"
                                                                   { (yyval.exp) = NULL; }
#line 3663 "src/parser.c"
    break;

  case 279: /* dot_exp: post_exp "." "<identifier>"  */
#line 655 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3676 "src/parser.c"
    break;

  case 281: /* post_exp: post_exp array_exp  */
#line 666 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3682 "src/parser.c"
    break;

  case 282: /* post_exp: post_exp range  */
#line 668 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3688 "src/parser.c"
    break;

  case 283: /* post_exp: post_exp call_template call_paren  */
#line 670 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3695 "src/parser.c"
    break;

  case 284: /* post_exp: post_exp post_op  */
#line 673 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3701 "src/parser.c"
    break;

  case 285: /* post_exp: post_exp OPID_E  */
#line 675 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3707 "src/parser.c"
    break;

  case 286: /* post_exp: dot_exp  */
#line 676 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3713 "src/parser.c"
    break;

  case 287: /* interp_exp: "<interp string>`"  */
#line 680 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3719 "src/parser.c"
    break;

  case 288: /* interp_exp: "<interp string>" interp_exp  */
#line 681 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3725 "src/parser.c"
    break;

  case 289: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 682 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3731 "src/parser.c"
    break;

  case 290: /* interp: "`" interp_exp  */
#line 684 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3737 "src/parser.c"
    break;

  case 291: /* interp: interp "`" interp_exp  */
#line 685 "src/gwion.y"
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
#line 3752 "src/parser.c"
    break;

  case 292: /* prim_exp: "<identifier>"  */
#line 697 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3758 "src/parser.c"
    break;

  case 293: /* prim_exp: "<integer>"  */
#line 698 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 3764 "src/parser.c"
    break;

  case 294: /* prim_exp: FLOATT  */
#line 699 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 3770 "src/parser.c"
    break;

  case 295: /* prim_exp: interp  */
#line 700 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 3776 "src/parser.c"
    break;

  case 296: /* prim_exp: "<litteral string>"  */
#line 701 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3782 "src/parser.c"
    break;

  case 297: /* prim_exp: "<litteral char>"  */
#line 702 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3788 "src/parser.c"
    break;

  case 298: /* prim_exp: array  */
#line 703 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 3794 "src/parser.c"
    break;

  case 299: /* prim_exp: range  */
#line 704 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 3800 "src/parser.c"
    break;

  case 300: /* prim_exp: "<<<" exp ">>>"  */
#line 705 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 3806 "src/parser.c"
    break;

  case 301: /* prim_exp: "(" exp ")"  */
#line 706 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3812 "src/parser.c"
    break;

  case 302: /* prim_exp: lambda_arg code_stmt  */
#line 707 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yyloc)); }
#line 3818 "src/parser.c"
    break;

  case 303: /* prim_exp: "(" op_op ")"  */
#line 708 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 3824 "src/parser.c"
    break;

  case 304: /* prim_exp: "perform" "<identifier>"  */
#line 709 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 3830 "src/parser.c"
    break;

  case 305: /* prim_exp: "(" ")"  */
#line 710 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 3836 "src/parser.c"
    break;


#line 3840 "src/parser.c"

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

#line 712 "src/gwion.y"

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
