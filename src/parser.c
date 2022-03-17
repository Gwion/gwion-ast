/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

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
//#define YYMALLOC(a) mp_malloc2(mpool(arg), a)
#define gwion_error(a,b,c) parser_error(a,b,c, 0200)
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))

ANN static int parser_error(loc_t*, Scanner*const, const char *, const uint);
ANN Symbol lambda_name(const Scanner*);
ANN Symbol sig_name(const Scanner*, const pos_t);


#line 97 "src/parser.c"

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
  YYSYMBOL_dict_list = 185,                /* dict_list  */
  YYSYMBOL_range = 186,                    /* range  */
  YYSYMBOL_array = 187,                    /* array  */
  YYSYMBOL_decl_exp = 188,                 /* decl_exp  */
  YYSYMBOL_func_args = 189,                /* func_args  */
  YYSYMBOL_fptr_args = 190,                /* fptr_args  */
  YYSYMBOL_arg_type = 191,                 /* arg_type  */
  YYSYMBOL_decl_template = 192,            /* decl_template  */
  YYSYMBOL_global = 193,                   /* global  */
  YYSYMBOL_storage_flag = 194,             /* storage_flag  */
  YYSYMBOL_access_flag = 195,              /* access_flag  */
  YYSYMBOL_flag = 196,                     /* flag  */
  YYSYMBOL_final = 197,                    /* final  */
  YYSYMBOL_modifier = 198,                 /* modifier  */
  YYSYMBOL_func_def_base = 199,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 200,            /* abstract_fdef  */
  YYSYMBOL_op_op = 201,                    /* op_op  */
  YYSYMBOL_op_base = 202,                  /* op_base  */
  YYSYMBOL_operator = 203,                 /* operator  */
  YYSYMBOL_op_def = 204,                   /* op_def  */
  YYSYMBOL_func_def = 205,                 /* func_def  */
  YYSYMBOL_type_decl_base = 206,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 207,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 208,         /* type_decl_noflag  */
  YYSYMBOL_option = 209,                   /* option  */
  YYSYMBOL_type_decl_opt = 210,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 211,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 212,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 213,                  /* opt_var  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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
#define YYLAST   2122

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  122
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  329
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  581

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
       0,   176,   176,   177,   180,   184,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   201,   203,   210,   219,   223,
     224,   228,   234,   235,   239,   243,   248,   248,   250,   260,
     260,   261,   261,   263,   267,   272,   278,   278,   280,   285,
     291,   299,   305,   309,   314,   317,   317,   318,   318,   320,
     323,   330,   330,   331,   331,   332,   341,   341,   343,   347,
     352,   356,   361,   366,   374,   376,   380,   386,   388,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   419,   424,   424,   425,   430,   446,   451,   451,   454,
     459,   459,   462,   474,   478,   483,   494,   505,   506,   510,
     519,   529,   539,   550,   563,   581,   590,   604,   612,   619,
     628,   639,   639,   641,   646,   650,   655,   661,   666,   672,
     673,   684,   685,   686,   687,   688,   691,   691,   693,   693,
     693,   693,   693,   696,   697,   700,   704,   705,   706,   710,
     711,   714,   715,   716,   720,   720,   721,   722,   724,   724,
     725,   725,   726,   726,   728,   728,   730,   732,   732,   734,
     735,   738,   739,   740,   741,   744,   744,   746,   746,   749,
     754,   762,   771,   771,   771,   771,   771,   773,   781,   788,
     796,   802,   802,   804,   806,   808,   811,   811,   811,   812,
     817,   822,   829,   830,   845,   846,   850,   851,   854,   854,
     854,   855,   856,   856,   859,   860,   862,   862,   864,   864,
     867,   871,   872,   874,   878,   884,   894,   898,   904,   905,
     907,   908,   909,   910,   910,   912,   912,   913,   913,   913,
     913,   914,   914,   915,   915,   916,   916,   916,   918,   918,
     919,   920,   922,   925,   925,   926,   926,   927,   927,   928,
     928,   929,   929,   930,   930,   931,   931,   932,   932,   933,
     933,   934,   934,   935,   935,   937,   937,   940,   940,   940,
     941,   941,   941,   941,   944,   945,   946,   947,   950,   951,
     952,   953,   956,   961,   966,   966,   969,   973,   979,   979,
     981,   981,   983,   992,   993,   995,   997,  1000,  1002,  1004,
    1008,  1009,  1010,  1012,  1013,  1025,  1026,  1027,  1028,  1029,
    1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039
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
  "enum_def", "when_exp", "match_case_stmt", "match_list", "match_stmt",
  "flow", "loop_stmt", "varloop_stmt", "defer_stmt", "selection_stmt",
  "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template",
  "op", "array_exp", "array_empty", "dict_list", "range", "array",
  "decl_exp", "func_args", "fptr_args", "arg_type", "decl_template",
  "global", "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "type_decl_base", "type_decl_tmpl",
  "type_decl_noflag", "option", "type_decl_opt", "type_decl",
  "type_decl_flag", "opt_var", "type_decl_flag2", "union_decl",
  "union_list", "union_def", "var_decl_list", "var_decl", "arg_decl",
  "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op", "mul_op",
  "opt_exp", "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp",
  "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp",
  "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp", "lambda_list",
  "lambda_arg", "type_list", "call_paren", "post_op", "dot_exp",
  "post_exp", "interp_exp", "interp", "prim_exp", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-408)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-246)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     552,  -408,   968,   416,   663,   261,  -408,    87,  -408,   876,
    -408,   109,   120,   128,  1870,   261,  1269,  -408,  -408,   876,
     -33,    50,   261,   261,   261,    24,    58,  -408,  -408,   261,
     261,  -408,  1870,   876,    61,  1990,  -408,  -408,  -408,  -408,
    -408,  1389,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,    24,    24,
     119,   119,  1870,  -408,  -408,   148,   552,  -408,  -408,  -408,
    -408,   876,  -408,   261,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,  -408,   167,  -408,  -408,  -408,  -408,    49,  -408,  -408,
     177,    38,  -408,   184,  -408,  -408,  -408,  -408,  -408,   223,
    -408,  -408,  -408,   261,  -408,  -408,    90,   113,    91,   108,
     126,   -36,   231,    99,    20,   266,   136,   149,  1990,  -408,
     119,  -408,  -408,   213,   179,  -408,  -408,  1870,  -408,   241,
     256,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,  -408,  -408,  -408,   269,  -408,   271,  -408,  -408,  -408,
    -408,  -408,  1870,    32,  -408,   774,    22,   243,  -408,  -408,
    -408,  -408,   276,  -408,  -408,   188,   198,  1870,   199,  1930,
    1329,   203,   275,   208,  -408,   286,   260,  -408,  -408,   216,
     225,   222,   224,   261,  -408,    36,  -408,   218,   204,   279,
     141,  -408,   302,    80,  -408,   309,    24,   244,    74,  -408,
    -408,   246,  -408,  1389,  -408,   263,  -408,  -408,  -408,   323,
     663,  -408,  -408,   232,  -408,  -408,  -408,    24,  1870,  -408,
     334,  -408,  1870,  1870,  1870,  1870,  1870,  1449,  -408,   926,
     276,  -408,  -408,  2007,   157,    24,    24,  1870,  1990,  1990,
    1990,  1990,  1990,  1990,  -408,  -408,  1990,  1990,  1990,  -408,
    1990,  -408,  1990,  1990,    24,  -408,  -408,  1509,   274,  -408,
      24,   335,  -408,  -408,  -408,  1389,   196,  -408,  -408,   331,
     347,  1570,  -408,  1870,  -408,    24,    48,  -408,    24,  -408,
      24,   336,  1870,   351,    43,  1329,    33,   338,   348,  -408,
    -408,  -408,   260,   245,   317,  -408,  -408,   245,   218,    24,
     204,   282,   353,  -408,    80,  -408,  -408,  -408,  1630,  -408,
    -408,    24,    48,   284,   245,  -408,  -408,  -408,  1389,  1870,
    -408,   287,   359,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
     360,   276,   368,    48,   276,   245,   245,  -408,  -408,   245,
     293,  -408,   283,  -408,   113,    91,   108,   126,   -36,   231,
      99,    20,   266,   136,   149,  -408,  -408,  -408,    67,  1690,
    -408,  -408,  -408,  1750,  -408,  -408,   370,    41,   297,  -408,
     375,  -408,   374,   166,   303,   304,   876,   378,  1870,   876,
    1810,   305,   373,  1870,  -408,    51,   282,   307,  -408,   310,
     346,  -408,   218,   381,   245,  -408,  -408,   387,    73,  -408,
     297,  -408,   388,   363,   245,   385,  -408,   389,   245,   876,
      48,  -408,   189,   390,   392,   394,   398,   302,   400,  -408,
    1990,    24,  -408,  -408,   399,  -408,  -408,  1870,   302,   316,
      24,  -408,  -408,  -408,   245,   245,   395,  -408,    88,  -408,
     876,   402,   321,  -408,  1870,   391,   393,  -408,   106,  -408,
     876,   218,   101,    24,   218,   403,  1081,   309,   337,    46,
    -408,  -408,  -408,    24,   339,   343,   410,  -408,   262,  -408,
     404,  -408,   426,  -408,  -408,  -408,    24,    24,    24,  -408,
     293,  -408,  -408,  -408,  -408,  -408,   184,  1870,  -408,   309,
    -408,   876,   876,  -408,   876,   373,    95,  1870,   342,   876,
    -408,  -408,  -408,   358,  -408,  -408,   429,   552,  -408,  1175,
    -408,  1081,   432,  -408,  -408,  -408,    48,  -408,  -408,  -408,
    -408,  -408,  -408,  -408,   441,   371,  -408,   185,  1870,   444,
    -408,   445,   446,   450,  -408,   130,    48,  -408,  -408,  -408,
    1870,   876,  -408,   876,  -408,   218,   552,   552,   447,  -408,
    -408,  -408,   363,  -408,    57,  -408,  -408,   130,  -408,    24,
    -408,  -408,   448,   107,  -408,   876,  -408,   449,  -408,   452,
    -408,   453,   176,   454,  -408,   876,  -408,  -408,  -408,  -408,
    -408
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   128,     0,     0,     0,   174,   218,     0,   107,     0,
     108,     0,     0,     0,     0,   174,     0,   121,   122,     0,
       0,     0,   174,   174,   174,     0,   191,    53,    54,   174,
     174,   215,     0,     0,   295,     0,   214,   316,   317,   319,
     320,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,   315,   300,   277,   301,   278,     0,     0,
     281,   282,     0,   283,   280,     0,     2,     4,     8,     9,
      10,     6,    13,   174,    14,    83,    86,    42,    90,    89,
      11,    84,     0,    81,    87,    88,    82,     0,    85,    80,
       0,   129,   154,   155,   323,   321,   131,   196,   197,     0,
     198,     7,   219,   174,    12,   156,   250,   253,   255,   257,
     259,   261,   263,   265,   267,   269,   271,   273,     0,   275,
       0,   279,   309,   284,   318,   303,   329,     0,   243,   277,
     278,   246,   247,   142,   138,   240,   238,   239,   237,   139,
     241,   242,   140,   141,     0,   182,     0,   184,   183,   186,
     185,   146,     0,     0,    67,     0,   129,     0,   167,   166,
     169,   170,     0,   168,   172,   171,   176,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   328,    91,     0,
     176,     0,     0,   174,   202,     0,    59,    31,   137,   206,
     210,   212,    57,     0,   192,     0,     0,     0,     0,   118,
     292,   294,   286,     0,   310,     0,   313,   291,    58,   288,
       0,   289,   290,     0,     1,     5,    43,     0,     0,   126,
       0,   127,     0,     0,     0,     0,     0,     0,   148,     0,
       0,   281,   282,     0,     0,     0,     0,   249,     0,     0,
       0,     0,     0,     0,   235,   236,     0,     0,     0,   244,
       0,   245,     0,     0,     0,   285,   326,     0,     0,   308,
       0,     0,   304,   305,   307,     0,     0,   325,   327,     0,
     143,     0,    68,     0,   322,   159,     0,   173,     0,   175,
       0,     0,     0,   315,     0,     0,     0,     0,     0,   123,
      92,    94,    96,   165,   176,   178,    15,   165,    31,     0,
     137,     0,     0,   204,     0,   208,   209,   211,     0,    56,
     213,   161,     0,     0,   165,   117,   293,   311,     0,   249,
     324,     0,     0,   125,   130,   132,   135,   133,   134,   147,
       0,     0,     0,     0,     0,   165,   165,   194,   193,   165,
       0,   248,     0,   252,   254,   256,   258,   260,   262,   264,
     266,   268,   270,   272,   274,   276,   302,   296,     0,     0,
     306,   314,   153,     0,   144,   152,     0,   149,     0,    62,
     158,   163,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,     0,   103,     0,     0,    98,    95,     0,
      30,   177,    31,     0,   165,   205,    38,    32,     0,   207,
     234,    65,   160,    47,   165,     0,   312,     0,   165,     0,
       0,   195,     0,     0,     0,     0,     0,   228,   157,   227,
       0,     0,   136,   299,     0,   145,   151,     0,   230,    61,
       0,   162,   180,   179,   165,   165,   119,   110,     0,   115,
       0,     0,     0,   216,     0,   101,   106,   104,     0,    97,
       0,    31,     0,     0,    31,     0,    27,     0,     0,     0,
      33,   233,    64,     0,     0,    48,     0,    44,     0,   287,
      51,   109,     0,   200,   199,   190,     0,     0,     0,   229,
       0,   251,   297,   298,   150,   232,   231,     0,    63,     0,
      49,     0,     0,   111,     0,   217,     0,     0,     0,     0,
      99,    93,    40,     0,   164,    29,     0,    37,    20,    22,
      24,    26,     0,    19,    18,    23,     0,    39,    35,    34,
      66,    45,    46,    50,   202,     0,   223,     0,     0,     0,
     201,     0,     0,     0,   226,    60,     0,   120,   116,   112,
       0,     0,   100,     0,   105,    31,    37,    36,     0,    21,
      25,    28,    47,   220,     0,   225,   224,    52,    55,     0,
     188,   189,     0,     0,   113,   102,    41,     0,    17,     0,
     221,     0,     0,     0,   181,     0,    16,   203,   222,   187,
     114
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -408,  -408,   462,   -60,   247,  -408,   -46,  -408,   -47,  -408,
    -408,  -408,  -408,  -284,  -408,  -408,   -81,    81,  -408,    -3,
    -408,  -408,   -83,  -408,  -408,  -408,  -408,  -408,   -43,    15,
     -20,  -398,  -408,     8,  -408,   -53,  -405,    -9,  -408,   187,
    -408,  -408,  -408,  -408,  -408,  -408,    96,  -408,  -408,   312,
    -408,  -408,  -408,  -408,  -408,  -408,  -166,    56,    -1,  -158,
    -408,   -84,  -407,    62,   361,  -174,   123,  -180,  -402,  -290,
    -270,   465,   327,  -408,    18,  -155,  -408,  -408,  -408,   268,
     264,  -408,  -408,  -370,   311,  -408,   190,  -408,   315,  -408,
     -23,     7,  -408,   -22,  -408,  -408,  -408,    34,   115,  -408,
    -408,  -101,  -100,  -102,   -98,   194,  -223,  -408,   278,   280,
     277,   281,   288,   273,   290,   285,   272,   289,   291,   -80,
      53,  -408,  -408,  -408,  -408,   -89,  -408,  -408,  -183,  -408,
    -408
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    65,   547,    67,   179,    68,   508,   509,   510,   511,
     512,    69,   454,   302,   459,    70,   548,   397,   452,    71,
     195,   465,   466,   162,    72,   529,    73,    74,   186,   209,
     233,   369,   370,   401,   402,    75,    76,    77,    78,   291,
     387,   292,    79,   450,    80,   498,   384,   385,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,   261,
     145,    92,    93,   157,    94,    95,    96,   276,   312,   373,
     390,   163,   164,   165,   180,   280,   296,    97,    98,   146,
     234,    99,   100,   101,   188,   189,   190,   307,   191,   192,
     102,   444,   103,   526,   527,   104,   418,   419,   429,   462,
     246,   147,   148,   149,   150,   342,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   201,   120,   358,   360,   121,   122,   123,   206,   124,
     125
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     168,   155,   193,   156,   285,   187,   215,   211,   212,   228,
     176,   247,   250,   248,   393,   343,   208,   252,   309,   235,
     317,   486,   403,   166,   199,   295,   222,   392,   460,   183,
     303,   198,   488,   173,   264,   193,   193,   381,   207,   262,
     270,   183,   222,   412,   405,   427,   177,   196,   197,   379,
     333,   513,   219,   178,   371,   516,   518,     5,   144,   153,
     570,   446,   216,   244,   571,   414,   415,   256,   245,   416,
     172,   421,   175,   383,    31,   422,   193,   223,   531,   532,
     533,    36,   361,   210,     5,   183,   515,   536,   202,   519,
      26,   217,   167,   223,   492,   159,   223,   205,   223,   372,
     128,   541,   249,   184,   513,   503,   513,   220,   455,   504,
     458,   224,   273,   575,   169,   184,   500,    26,   213,   380,
     472,   236,   271,   382,   457,   170,   266,   224,   210,   223,
     224,   185,   224,   171,   467,   406,   225,   226,   470,   391,
     200,   515,   395,   223,   336,   315,   216,   572,   214,   235,
     223,   410,   225,   226,   413,   225,   226,   225,   226,   184,
     337,   573,   223,   224,   489,   490,   210,   502,   284,   432,
     506,   255,   218,   193,   321,   210,   313,   224,   237,   578,
     221,   338,   238,   227,   224,   223,   364,   185,   225,   226,
     183,   227,   473,   340,   193,   555,   224,   481,   210,   241,
     239,   299,   225,   226,   140,   141,   193,   155,   269,   225,
     226,   240,   193,   193,     8,   339,    10,   242,  -137,   224,
     257,   225,   226,   281,   158,   159,   552,   253,   183,   305,
     306,   193,   368,   243,   355,    31,   254,   193,   278,   279,
     357,   265,    36,   479,   225,   226,   562,  -244,   247,   250,
     248,   223,   193,   274,   252,   193,   258,   193,   374,   205,
     375,   566,  -245,   229,   524,   294,   279,   183,   400,   259,
     181,   182,   367,    31,   322,   267,   193,   268,   324,   394,
      36,   275,   286,   330,   287,   224,   273,   288,   193,   289,
     514,   290,   185,   341,    54,   293,    56,   158,   159,   160,
     161,   297,   184,   298,    54,    55,    56,    57,   301,   308,
     225,   226,    31,   153,   311,   260,   230,   231,   232,    36,
     433,   205,   304,   314,   260,   316,   318,   366,   319,   320,
     185,   135,   136,   137,   138,    63,    64,   323,   377,   362,
     359,   524,   376,   514,   485,   514,   325,   326,   327,   328,
     251,   131,   132,   356,   363,   378,   389,   386,   279,   474,
     383,   396,   398,   404,   330,   409,   408,   436,   270,   185,
     439,   411,   417,   420,   205,   341,   428,   438,   426,   430,
     431,   437,   434,   435,   442,   443,   449,   368,   453,   451,
     456,   458,   463,   464,   468,   469,   475,   476,   193,   477,
     471,   482,   228,   478,   480,   483,   487,   193,   494,   491,
     208,   495,   507,   523,   497,   424,   517,   499,   521,   330,
     400,     2,   522,     3,   151,   127,   266,   528,     6,   530,
     193,   493,   543,   368,   368,   368,   441,   545,   546,   445,
     193,   501,   551,   496,   553,   193,    20,   558,   525,   559,
     554,   574,   560,   193,   193,   193,   561,   568,   577,   576,
     579,   151,    66,   549,   550,   567,    31,   448,   505,   569,
      34,   520,    35,    36,    37,    38,    39,    40,    41,   388,
     282,   447,   537,   538,   263,   539,   535,   215,   228,   484,
     544,   194,   277,   332,   399,    53,   300,    54,    55,    56,
      57,   335,   540,    58,   193,   556,   152,   525,   310,    59,
      60,    61,    62,   407,   534,   461,   368,   344,   346,   349,
     345,     0,   352,   347,     0,     0,     0,   557,    63,    64,
       0,   348,   564,   351,     0,     0,   193,   350,     0,   563,
     565,   353,     0,     0,   354,     0,     0,     0,     0,     0,
       0,     0,     0,   542,     0,     1,   216,     2,     0,     3,
       0,     4,     0,     5,     6,     7,   580,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,    15,    16,    17,
      18,    19,    20,     0,    21,    22,    23,    24,     0,     0,
       0,     0,     0,     0,    25,     0,    26,    27,    28,    29,
       0,    30,    31,     0,    32,    33,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,     0,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    64,     1,     0,     2,     0,
       3,     0,     4,   154,     0,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    32,    33,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,     0,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    64,     1,     0,     2,
       0,     3,     0,     4,   272,     0,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    32,    33,    34,     0,
      35,    36,    37,    38,    39,    40,    41,     0,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
       0,     0,     0,    53,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,     0,     0,     0,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     0,     3,     0,     4,    63,    64,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,    16,    17,    18,    19,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    32,    33,
      34,   183,    35,    36,    37,    38,    39,    40,    41,     0,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,     0,     0,     0,    59,
      60,    61,    62,     2,   126,     3,    31,   127,     0,     0,
       6,     0,     0,    36,     0,     0,     0,     0,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,   184,     0,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    31,   331,
     231,   232,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,   185,     0,     0,     0,     0,    63,    64,
       0,     0,     0,     0,     0,     0,     0,    53,   128,    54,
     129,    56,   130,   131,   132,    58,     0,   133,     0,     0,
       0,    59,    60,    61,    62,     0,     0,   134,   135,   136,
     137,   138,   139,   140,   141,     0,     0,     0,     0,     0,
      63,    64,   142,   143,     1,     0,     2,     0,     3,     0,
     127,     0,     5,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,    31,     0,     0,     0,    34,     0,    35,    36,    37,
      38,    39,    40,    41,     0,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,     0,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,     0,     0,     0,    59,    60,    61,    62,     1,     0,
       2,     0,     3,     0,   127,     0,     0,     6,     0,     0,
       0,     0,     0,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     0,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,     0,     0,    53,     0,    54,    55,    56,    57,
       0,     0,    58,     0,     0,     0,     0,     0,    59,    60,
      61,    62,   174,     0,     2,     0,     3,     0,   127,     0,
       0,     6,     0,     0,     0,     0,     0,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     1,     0,     2,     0,     3,     0,   127,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,    20,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    63,    64,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     2,     0,     3,     0,   127,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,    20,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    63,    64,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     2,     0,     3,   329,   127,     0,
       0,     6,     0,     0,   203,   204,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,    20,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    63,    64,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     2,     0,     3,     0,   127,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,    20,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    63,    64,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,     2,     0,     3,   365,   127,
       0,     0,     6,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,   152,
      20,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    63,    64,     0,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     2,     0,     3,   151,   127,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
      20,     0,     0,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    63,    64,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     2,   423,     3,     0,   127,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
      20,     0,     0,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    63,    64,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     2,     0,     3,   425,   127,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
      20,     0,     0,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    63,    64,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     2,   440,     3,     0,   127,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
      20,     0,     0,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    63,    64,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     2,     0,     3,     0,   127,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
      20,     0,     0,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    63,    64,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     2,     0,     3,     0,   127,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
      20,     0,     0,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    63,    64,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     2,     0,     3,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
      20,     0,     0,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    34,     0,    35,     0,    37,    38,
      39,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   334,     0,     0,     0,     0,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
       0,     0,     0,    59,    60,    61,    62,   128,    54,   249,
      56,   251,   131,   132,     0,     0,   133,     0,     0,     0,
       0,     0,    63,    64,     0,     0,   134,   135,   136,   137,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
       0,   142,   143
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,     4,   170,    25,    66,    60,    61,    93,
      19,   112,   114,   113,   298,   238,    59,   115,   192,    99,
     203,   428,   312,     5,    33,   180,     4,   297,   398,     5,
     188,    32,   430,    15,   123,    58,    59,     4,    58,   123,
       8,     5,     4,   333,   314,     4,    79,    29,    30,     6,
     230,   456,     3,     3,     6,   457,    10,    11,     2,     3,
       3,    10,    71,    99,     7,   335,   336,   120,   104,   339,
      14,     4,    16,    22,    50,     8,    99,    55,   476,   477,
     478,    57,   265,     9,    11,     5,   456,   489,    35,   459,
      44,    73,     5,    55,     6,    37,    55,    41,    55,    51,
      80,     6,    82,    79,   509,     4,   511,    58,   392,     8,
       4,    89,    90,     6,     5,    79,    10,    44,    62,   285,
     410,   103,    90,    90,   394,     5,   127,    89,     9,    55,
      89,   107,    89,     5,   404,   318,   114,   115,   408,   294,
      79,   511,   300,    55,   233,   198,   155,   554,     0,   229,
      55,   331,   114,   115,   334,   114,   115,   114,   115,    79,
       3,   559,    55,    89,   434,   435,     9,   451,   169,     3,
     454,   118,     5,   196,   217,     9,   196,    89,    88,     3,
       3,   234,    92,     7,    89,    55,   270,   107,   114,   115,
       5,     7,     3,   236,   217,    10,    89,   420,     9,   108,
     110,   183,   114,   115,   105,   106,   229,   210,   152,   114,
     115,    98,   235,   236,    15,   235,    17,   109,     5,    89,
       7,   114,   115,   167,    36,    37,   516,    91,     5,    88,
      89,   254,   275,   107,   254,    50,    87,   260,    40,    41,
     260,    62,    57,   417,   114,   115,   536,     6,   349,   351,
     350,    55,   275,    10,   352,   278,    43,   280,   278,   203,
     280,   545,     6,    40,    79,    40,    41,     5,   311,    56,
      23,    24,   273,    50,   218,     6,   299,     6,   222,   299,
      57,     5,    79,   227,     9,    89,    90,    79,   311,     3,
     456,    31,   107,   237,    81,    79,    83,    36,    37,    38,
      39,    79,    79,    79,    81,    82,    83,    84,    90,     7,
     114,   115,    50,   257,     5,   111,    93,    94,    95,    57,
     373,   265,    43,    79,   111,    79,    63,   271,     5,    97,
     107,   100,   101,   102,   103,   112,   113,     3,   282,     8,
       5,    79,     6,   509,   428,   511,   223,   224,   225,   226,
      84,    85,    86,    79,     7,     4,   111,     9,    41,   412,
      22,    79,     9,    79,   308,     6,    79,   376,     8,   107,
     379,     3,    79,    90,   318,   319,    79,   378,     8,     4,
       6,     3,    79,    79,    79,    12,    79,   430,    42,    79,
       9,     4,     4,    30,     9,     6,     6,     5,   421,     5,
     409,   421,   486,     5,     4,     6,    90,   430,     6,    14,
     453,    90,     9,     3,    23,   359,    79,    24,    79,   363,
     463,     5,    79,     7,     8,     9,   427,    23,    12,     3,
     453,   440,    90,   476,   477,   478,   380,    79,     9,   383,
     463,   450,    10,   444,     3,   468,    30,     3,   468,     4,
      79,     3,     6,   476,   477,   478,     6,    10,     6,    10,
       6,     8,     0,   509,   511,   546,    50,   386,   453,   552,
      54,   463,    56,    57,    58,    59,    60,    61,    62,   292,
     168,   385,   491,   492,   123,   494,   487,   547,   572,   427,
     499,    26,   165,   229,   304,    79,   185,    81,    82,    83,
      84,   233,   495,    87,   527,   527,    90,   527,   193,    93,
      94,    95,    96,   319,   480,   400,   559,   239,   241,   246,
     240,    -1,   250,   242,    -1,    -1,    -1,   528,   112,   113,
      -1,   243,   541,   248,    -1,    -1,   559,   247,    -1,   540,
     543,   252,    -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   497,    -1,     3,   565,     5,    -1,     7,
      -1,     9,    -1,    11,    12,    13,   575,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      -1,    49,    50,    -1,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,     3,    -1,     5,    -1,
       7,    -1,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,     3,    -1,     5,
      -1,     7,    -1,     9,    10,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,    -1,     9,   112,   113,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,     5,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,     5,     6,     7,    50,     9,    -1,    -1,
      12,    -1,    -1,    57,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    93,
      94,    95,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,   107,    -1,    -1,    -1,    -1,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    89,    -1,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,
     112,   113,   114,   115,     3,    -1,     5,    -1,     7,    -1,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    94,    95,    96,     3,    -1,
       5,    -1,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,
      95,    96,     3,    -1,     5,    -1,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,     3,    -1,     5,    -1,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,
      -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,   112,   113,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,     5,    -1,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,
      -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,   112,   113,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,     5,    -1,     7,     8,     9,    -1,
      -1,    12,    -1,    -1,    75,    76,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,
      -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,   112,   113,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,     5,    -1,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,
      -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,   112,   113,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,     5,    -1,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    90,
      30,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,   112,   113,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,     5,    -1,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,   112,   113,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,     5,     6,     7,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,   112,   113,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,     5,    -1,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,   112,   113,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,     5,     6,     7,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,   112,   113,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,     5,    -1,     7,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,   112,   113,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,     5,    -1,     7,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,   112,   113,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,     5,    -1,     7,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,    54,    -1,    56,    -1,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    94,    95,    96,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,   112,   113,    -1,    -1,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
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
     166,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   183,   184,   186,   187,   188,   199,   200,   203,
     204,   205,   212,   214,   217,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     244,   247,   248,   249,   251,   252,     6,     9,    80,    82,
      84,    85,    86,    89,    99,   100,   101,   102,   103,   104,
     105,   106,   114,   115,   179,   182,   201,   223,   224,   225,
     226,     8,    90,   179,    10,   141,   180,   185,    36,    37,
      38,    39,   145,   193,   194,   195,   196,     5,   159,     5,
       5,     5,   179,   196,     3,   179,   159,    79,     3,   126,
     196,   126,   126,     5,    79,   107,   150,   152,   206,   207,
     208,   210,   211,   212,   193,   142,   196,   196,   180,   159,
      79,   243,   242,    75,    76,   179,   250,   152,   150,   151,
       9,   157,   157,   179,     0,   125,   159,   196,     5,     3,
      58,     3,     4,    55,    89,   114,   115,     7,   183,    40,
      93,    94,    95,   152,   202,   241,   196,    88,    92,   110,
      98,   108,   109,   107,    99,   104,   222,   223,   224,    82,
     225,    84,   226,    91,    87,   242,   157,     7,    43,    56,
     111,   181,   183,   186,   247,    62,   180,     6,     6,   179,
       8,    90,    10,    90,    10,     5,   189,   194,    40,    41,
     197,   179,   171,    79,   180,   178,    79,     9,    79,     3,
      31,   161,   163,    79,    40,   197,   198,    79,    79,   196,
     206,    90,   135,   181,    43,    88,    89,   209,     7,   187,
     210,     5,   190,   152,    79,   157,    79,   250,    63,     5,
      97,   150,   179,     3,   179,   188,   188,   188,   188,     8,
     179,    93,   202,   189,    55,   201,   247,     3,   157,   152,
     150,   179,   227,   228,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   152,    79,   152,   245,     5,
     246,   250,     8,     7,   183,     8,   179,   180,   150,   153,
     154,     6,    51,   191,   152,   152,     6,   179,     4,     6,
     178,     4,    90,    22,   168,   169,     9,   162,   161,   111,
     192,   197,   192,   135,   152,   181,    79,   139,     9,   208,
     150,   155,   156,   191,    79,   192,   250,   227,    79,     6,
     189,     3,   191,   189,   192,   192,   192,    79,   218,   219,
      90,     4,     8,     6,   179,     8,     8,     4,    79,   220,
       4,     6,     3,   157,    79,    79,   159,     3,   180,   159,
       6,   179,    79,    12,   213,   179,    10,   168,   139,    79,
     165,    79,   140,    42,   134,   135,     9,   192,     4,   136,
     205,   220,   221,     4,    30,   143,   144,   192,     9,     6,
     192,   159,   191,     3,   157,     6,     5,     5,     5,   187,
       4,   228,   152,     6,   185,   183,   184,    90,   153,   192,
     192,    14,     6,   159,     6,    90,   180,    23,   167,    24,
      10,   159,   135,     4,     8,   151,   135,     9,   128,   129,
     130,   131,   132,   158,   178,   205,   190,    79,    10,   205,
     155,    79,    79,     3,    79,   152,   215,   216,    23,   147,
       3,   153,   153,   153,   219,   180,   190,   159,   159,   159,
     213,     6,   179,    90,   159,    79,     9,   124,   138,   128,
     130,    10,   191,     3,    79,    10,   215,   180,     3,     4,
       6,     6,   191,   180,   159,   141,   135,   138,    10,   144,
       3,     7,   184,   153,     3,     6,    10,     6,     3,     6,
     159
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
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
     167,   167,   168,   169,   169,   170,   170,   171,   171,   172,
     172,   172,   172,   172,   172,   172,   172,   173,   174,   175,
     175,   176,   176,   177,   177,   177,   177,   178,   178,   179,
     179,   180,   180,   180,   180,   180,   181,   181,   182,   182,
     182,   182,   182,   183,   183,   183,   184,   184,   184,   185,
     185,   186,   186,   186,   187,   187,   188,   188,   189,   189,
     190,   190,   191,   191,   192,   192,   193,   194,   194,   195,
     195,   196,   196,   196,   196,   197,   197,   198,   198,   199,
     199,   200,   201,   201,   201,   201,   201,   202,   202,   202,
     202,   203,   203,   204,   204,   204,   205,   205,   205,   205,
     205,   205,   206,   206,   207,   207,   208,   208,   209,   209,
     209,   210,   211,   211,   212,   212,   213,   213,   214,   214,
     215,   215,   215,   216,   216,   217,   218,   218,   219,   219,
     220,   220,   220,   221,   221,   222,   222,   223,   223,   223,
     223,   224,   224,   225,   225,   226,   226,   226,   227,   227,
     228,   228,   228,   229,   229,   230,   230,   231,   231,   232,
     232,   233,   233,   234,   234,   235,   235,   236,   236,   237,
     237,   238,   238,   239,   239,   240,   240,   241,   241,   241,
     241,   241,   241,   241,   242,   242,   242,   242,   242,   242,
     242,   242,   243,   243,   244,   244,   245,   245,   246,   246,
     247,   247,   248,   249,   249,   249,   249,   249,   249,   249,
     250,   250,   250,   251,   251,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
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
       2,     0,     5,     1,     2,     7,     5,     1,     1,     5,
       5,     6,     7,     8,    10,     5,     7,     3,     2,     5,
       7,     1,     1,     3,     2,     3,     2,     2,     1,     1,
       3,     1,     3,     3,     3,     3,     3,     0,     1,     1,
       1,     1,     1,     3,     4,     5,     2,     3,     2,     3,
       5,     5,     4,     4,     1,     1,     1,     4,     2,     1,
       2,     1,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     0,     2,     1,     5,
       5,     9,     1,     1,     1,     1,     1,     8,     6,     6,
       4,     1,     2,     3,     3,     4,     1,     1,     1,     5,
       5,     6,     1,     8,     2,     3,     1,     3,     1,     1,
       0,     2,     1,     2,     1,     1,     1,     0,     1,     1,
       2,     3,     4,     1,     2,     7,     3,     1,     1,     2,
       1,     2,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     5,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     5,     2,     2,
       2,     2,     1,     2,     2,     1,     1,     3,     3,     2,
       1,     1,     3,     1,     2,     2,     3,     2,     2,     1,
       1,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     3,     2,     3,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


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
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (arg);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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

  YYLOCATION_PRINT (yyo, yylocationp);
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
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
#line 176 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2438 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 177 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2444 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 180 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), sizeof(Section), 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2453 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 184 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2462 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 190 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2468 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 191 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2474 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 192 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2480 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 193 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2486 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 194 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2492 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 195 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2498 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 196 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2504 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 197 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2510 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 198 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2516 "src/parser.c"
    break;

  case 15: /* class_flag: flag modifier  */
#line 201 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2522 "src/parser.c"
    break;

  case 16: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 204 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2533 "src/parser.c"
    break;

  case 17: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 211 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2545 "src/parser.c"
    break;

  case 18: /* trait_stmt: exp_stmt  */
#line 219 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2555 "src/parser.c"
    break;

  case 20: /* trait_stmt_list: trait_stmt  */
#line 224 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), sizeof(struct Stmt_), 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2564 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 228 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2573 "src/parser.c"
    break;

  case 22: /* trait_section: trait_stmt_list  */
#line 234 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2579 "src/parser.c"
    break;

  case 23: /* trait_section: func_def  */
#line 235 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2585 "src/parser.c"
    break;

  case 24: /* trait_ast: trait_section  */
#line 239 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), sizeof(Section), 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2594 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_ast trait_section  */
#line 243 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2603 "src/parser.c"
    break;

  case 27: /* trait_body: %empty  */
#line 248 "src/gwion.y"
                         { (yyval.ast) = NULL; }
#line 2609 "src/parser.c"
    break;

  case 28: /* trait_def: "trait" class_flag "<identifier>" traits "{" trait_body "}"  */
#line 251 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-1].ast), (yylsp[-4]));
      (yyval.trait_def)->traits = (yyvsp[-3].id_list);
      if(GET_FLAG((yyval.trait_def), abstract)) {
        { scanner_secondary(arg, "abstract should not be used on ${/+trait{0} declaration", (yylsp[-4])); }
        UNSET_FLAG((yyval.trait_def), abstract);
      }
    }
#line 2622 "src/parser.c"
    break;

  case 29: /* class_ext: "extends" type_decl_exp  */
#line 260 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2628 "src/parser.c"
    break;

  case 30: /* class_ext: %empty  */
#line 260 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2634 "src/parser.c"
    break;

  case 31: /* traits: %empty  */
#line 261 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2640 "src/parser.c"
    break;

  case 32: /* traits: ":" id_list  */
#line 261 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2646 "src/parser.c"
    break;

  case 33: /* extend_body: func_def  */
#line 263 "src/gwion.y"
             {
    (yyval.ast) = new_mp_vector(mpool(arg), sizeof(Section), 1);
    mp_vector_set((yyval.ast), Section, 0, MK_SECTION(func, func_def, (yyvsp[0].func_def)));
  }
#line 2655 "src/parser.c"
    break;

  case 34: /* extend_body: extend_body func_def  */
#line 267 "src/gwion.y"
                         {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, MK_SECTION(func, func_def, (yyvsp[0].func_def)));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2664 "src/parser.c"
    break;

  case 35: /* extend_def: "extends" type_decl_empty traits "{" extend_body "}"  */
#line 272 "src/gwion.y"
                                                                 {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-1].ast));
  (yyval.extend_def)->traits = (yyvsp[-3].id_list);
}
#line 2673 "src/parser.c"
    break;

  case 37: /* class_body: %empty  */
#line 278 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2679 "src/parser.c"
    break;

  case 38: /* id_list: "<identifier>"  */
#line 281 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), sizeof(Symbol), 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2688 "src/parser.c"
    break;

  case 39: /* id_list: id_list "," "<identifier>"  */
#line 286 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2697 "src/parser.c"
    break;

  case 40: /* specialized_list: "<identifier>" traits  */
#line 291 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), sizeof(Specialized), 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2710 "src/parser.c"
    break;

  case 41: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 299 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2720 "src/parser.c"
    break;

  case 42: /* stmt_list: stmt  */
#line 305 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), sizeof(struct Stmt_), 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2729 "src/parser.c"
    break;

  case 43: /* stmt_list: stmt_list stmt  */
#line 309 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2738 "src/parser.c"
    break;

  case 44: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 314 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2745 "src/parser.c"
    break;

  case 45: /* _func_effects: "perform" "<identifier>"  */
#line 317 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2751 "src/parser.c"
    break;

  case 46: /* _func_effects: _func_effects "<identifier>"  */
#line 317 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2757 "src/parser.c"
    break;

  case 47: /* func_effects: %empty  */
#line 318 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2763 "src/parser.c"
    break;

  case 48: /* func_effects: _func_effects  */
#line 318 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2769 "src/parser.c"
    break;

  case 49: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 320 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2776 "src/parser.c"
    break;

  case 50: /* fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";"  */
#line 323 "src/gwion.y"
                                                                 {
  (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
  (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-4].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2787 "src/parser.c"
    break;

  case 51: /* typedef_when: %empty  */
#line 330 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2793 "src/parser.c"
    break;

  case 52: /* typedef_when: "when" binary_exp  */
#line 330 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2799 "src/parser.c"
    break;

  case 53: /* type_def_type: "typedef"  */
#line 331 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2805 "src/parser.c"
    break;

  case 54: /* type_def_type: "distinct"  */
#line 331 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2811 "src/parser.c"
    break;

  case 55: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 332 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2824 "src/parser.c"
    break;

  case 56: /* type_decl_array: type_decl array  */
#line 341 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2830 "src/parser.c"
    break;

  case 58: /* type_decl_exp: type_decl_array  */
#line 343 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2838 "src/parser.c"
    break;

  case 59: /* type_decl_empty: type_decl_array  */
#line 347 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2846 "src/parser.c"
    break;

  case 60: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 352 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2855 "src/parser.c"
    break;

  case 61: /* arg: type_decl_array arg_decl  */
#line 356 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 2864 "src/parser.c"
    break;

  case 62: /* arg_list: arg  */
#line 361 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2874 "src/parser.c"
    break;

  case 63: /* arg_list: arg_list "," arg  */
#line 366 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2886 "src/parser.c"
    break;

  case 64: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 374 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 2892 "src/parser.c"
    break;

  case 65: /* fptr_list: fptr_arg  */
#line 376 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), sizeof(Arg), 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 2901 "src/parser.c"
    break;

  case 66: /* fptr_list: fptr_list "," fptr_arg  */
#line 380 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 2910 "src/parser.c"
    break;

  case 67: /* code_stmt: "{" "}"  */
#line 386 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 2917 "src/parser.c"
    break;

  case 68: /* code_stmt: "{" stmt_list "}"  */
#line 388 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 2924 "src/parser.c"
    break;

  case 69: /* stmt_pp: "<comment>"  */
#line 392 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 2930 "src/parser.c"
    break;

  case 70: /* stmt_pp: "#include"  */
#line 393 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 2936 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#define"  */
#line 394 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 2942 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#pragma"  */
#line 395 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2948 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#undef"  */
#line 396 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 2954 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#ifdef"  */
#line 397 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2960 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#ifndef"  */
#line 398 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2966 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#else"  */
#line 399 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 2972 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#if"  */
#line 400 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 2978 "src/parser.c"
    break;

  case 78: /* stmt_pp: "\n"  */
#line 401 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 2984 "src/parser.c"
    break;

  case 79: /* stmt_pp: "import"  */
#line 402 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 2990 "src/parser.c"
    break;

  case 91: /* retry_stmt: "retry" ";"  */
#line 419 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3000 "src/parser.c"
    break;

  case 92: /* $@1: %empty  */
#line 424 "src/gwion.y"
                  { arg->handling = true; }
#line 3006 "src/parser.c"
    break;

  case 93: /* handler: "handle" $@1 opt_id stmt  */
#line 424 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3012 "src/parser.c"
    break;

  case 94: /* handler_list: handler  */
#line 425 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), sizeof(Handler), 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3022 "src/parser.c"
    break;

  case 95: /* handler_list: handler_list handler  */
#line 430 "src/gwion.y"
                          {
        if(!(yyvsp[-1].handler_list).has_xid)
        { parser_error(&(yylsp[0]), arg, "`handle` after a catch-all block", 0); YYERROR; }
// handle duplicates in scan0
/*
        Handler_List list = $2;
        while(list) {
          if(list->xid == $1->xid)
          { parser_error(&@2, arg, "duplicated `handle`", 0); YYERROR; }
          list = list->next;
        }
*/
mp_vector_add(mpool(arg), &(yyvsp[-1].handler_list).handlers, Handler, (yyvsp[0].handler));
        (yyval.handler_list) = (yyvsp[-1].handler_list);
//        $1->next = $2;
  }
#line 3043 "src/parser.c"
    break;

  case 96: /* try_stmt: "try" stmt handler_list  */
#line 446 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3052 "src/parser.c"
    break;

  case 98: /* opt_id: %empty  */
#line 451 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3058 "src/parser.c"
    break;

  case 99: /* enum_def: "enum" flag "<identifier>" "{" id_list "}"  */
#line 454 "src/gwion.y"
                                   {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
  }
#line 3067 "src/parser.c"
    break;

  case 100: /* when_exp: "when" exp  */
#line 459 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3073 "src/parser.c"
    break;

  case 101: /* when_exp: %empty  */
#line 459 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3079 "src/parser.c"
    break;

  case 102: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 462 "src/gwion.y"
                                      {
    (yyval.stmt) = (struct Stmt_) {
      .stmt_type = 0,//ae_stmt_match, // ????
      .d = { .stmt_match = {
        .cond = (yyvsp[-3].exp),
        .when = (yyvsp[-2].exp),
        .list = (yyvsp[0].stmt_list)
      }},
      .pos = (yylsp[-4])
    };
}
#line 3095 "src/parser.c"
    break;

  case 103: /* match_list: match_case_stmt  */
#line 474 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), sizeof(struct Stmt_), 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3104 "src/parser.c"
    break;

  case 104: /* match_list: match_list match_case_stmt  */
#line 478 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3113 "src/parser.c"
    break;

  case 105: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 483 "src/gwion.y"
                                                        {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-5].exp),
      .list  = (yyvsp[-3].stmt_list),
      .where = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    }},
    .pos = (yylsp[-6])
  };
}
#line 3128 "src/parser.c"
    break;

  case 106: /* match_stmt: "match" exp "{" match_list "}"  */
#line 494 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3142 "src/parser.c"
    break;

  case 107: /* flow: "while"  */
#line 505 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3148 "src/parser.c"
    break;

  case 108: /* flow: "until"  */
#line 506 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3154 "src/parser.c"
    break;

  case 109: /* loop_stmt: flow "(" exp ")" stmt  */
#line 511 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3167 "src/parser.c"
    break;

  case 110: /* loop_stmt: "do" stmt flow exp ";"  */
#line 520 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3181 "src/parser.c"
    break;

  case 111: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 530 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3195 "src/parser.c"
    break;

  case 112: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 540 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-4].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c3 = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3210 "src/parser.c"
    break;

  case 113: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 551 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_each,
      .d = { .stmt_each = {
        .sym = (yyvsp[-5].sym),
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .vpos = (yylsp[-5])
      }},
      .pos = (yylsp[-7])
    };
// what to do with opt_var?
// list rem?
  }
#line 3227 "src/parser.c"
    break;

  case 114: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 564 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_each,
      .d = { .stmt_each = {
        .sym = (yyvsp[-5].sym),
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .vpos = (yylsp[-7])
      }},
      .pos = (yylsp[-9])
    };
    (yyval.stmt).d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
    (yyval.stmt).d.stmt_each.idx->sym = (yyvsp[-7].sym);
    (yyval.stmt).d.stmt_each.idx->pos = (yylsp[-7]);
    (yyval.stmt).d.stmt_each.idx->is_var = (yyvsp[-3].yybool);
    (yyval.stmt).d.stmt_each.idx->v = NULL;
// what to do with opt_var?
// list rem?
  }
#line 3249 "src/parser.c"
    break;

  case 115: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 582 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3262 "src/parser.c"
    break;

  case 116: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 591 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
    (yyval.stmt).d.stmt_loop.idx = mp_malloc(mpool(arg), EachIdx);
    (yyval.stmt).d.stmt_loop.idx->sym = (yyvsp[-4].sym);
    (yyval.stmt).d.stmt_loop.idx->pos = (yylsp[-4]);
    (yyval.stmt).d.stmt_loop.idx->v = NULL;
  }
#line 3279 "src/parser.c"
    break;

  case 117: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 604 "src/gwion.y"
                                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_varloop,
  .d = { .stmt_varloop = {
    .exp = (yyvsp[-1].exp),
    .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  }},
  .pos = (yylsp[-2])
};}
#line 3291 "src/parser.c"
    break;

  case 118: /* defer_stmt: "defer" stmt  */
#line 612 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_defer,
    .d = { .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }},
    .pos = (yylsp[-1])
  };
}
#line 3301 "src/parser.c"
    break;

  case 119: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 620 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3314 "src/parser.c"
    break;

  case 120: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 629 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3328 "src/parser.c"
    break;

  case 121: /* breaks: "break"  */
#line 639 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3334 "src/parser.c"
    break;

  case 122: /* breaks: "continue"  */
#line 639 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3340 "src/parser.c"
    break;

  case 123: /* jump_stmt: "return" exp ";"  */
#line 641 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3350 "src/parser.c"
    break;

  case 124: /* jump_stmt: "return" ";"  */
#line 646 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3359 "src/parser.c"
    break;

  case 125: /* jump_stmt: breaks "<integer>" ";"  */
#line 650 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].lval) }},
      .pos = (yylsp[-2])
    };
  }
#line 3369 "src/parser.c"
    break;

  case 126: /* jump_stmt: breaks ";"  */
#line 655 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3378 "src/parser.c"
    break;

  case 127: /* exp_stmt: exp ";"  */
#line 661 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3388 "src/parser.c"
    break;

  case 128: /* exp_stmt: ";"  */
#line 666 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3397 "src/parser.c"
    break;

  case 129: /* exp: binary_exp  */
#line 672 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3403 "src/parser.c"
    break;

  case 130: /* exp: binary_exp "," exp  */
#line 674 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3415 "src/parser.c"
    break;

  case 132: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 685 "src/gwion.y"
                                 { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3421 "src/parser.c"
    break;

  case 133: /* binary_exp: binary_exp "@" decl_exp  */
#line 686 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3427 "src/parser.c"
    break;

  case 134: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 687 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3433 "src/parser.c"
    break;

  case 135: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 688 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3439 "src/parser.c"
    break;

  case 136: /* call_template: ":[" type_list "]"  */
#line 691 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3445 "src/parser.c"
    break;

  case 137: /* call_template: %empty  */
#line 691 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3451 "src/parser.c"
    break;

  case 143: /* array_exp: "[" exp "]"  */
#line 696 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3457 "src/parser.c"
    break;

  case 144: /* array_exp: "[" exp "]" array_exp  */
#line 697 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3465 "src/parser.c"
    break;

  case 145: /* array_exp: "[" exp "]" "[" "]"  */
#line 700 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3471 "src/parser.c"
    break;

  case 146: /* array_empty: "[" "]"  */
#line 704 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3477 "src/parser.c"
    break;

  case 147: /* array_empty: array_empty "[" "]"  */
#line 705 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3483 "src/parser.c"
    break;

  case 148: /* array_empty: array_empty array_exp  */
#line 706 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3489 "src/parser.c"
    break;

  case 149: /* dict_list: binary_exp ":" binary_exp  */
#line 710 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3495 "src/parser.c"
    break;

  case 150: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 711 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3501 "src/parser.c"
    break;

  case 151: /* range: "[" exp ":" exp "]"  */
#line 714 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3507 "src/parser.c"
    break;

  case 152: /* range: "[" exp ":" "]"  */
#line 715 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3513 "src/parser.c"
    break;

  case 153: /* range: "[" ":" exp "]"  */
#line 716 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3519 "src/parser.c"
    break;

  case 157: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 722 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3525 "src/parser.c"
    break;

  case 158: /* func_args: "(" arg_list  */
#line 724 "src/gwion.y"
                          { (yyval.default_args) = (yyvsp[0].default_args); }
#line 3531 "src/parser.c"
    break;

  case 159: /* func_args: "("  */
#line 724 "src/gwion.y"
                                             { (yyval.default_args) = (struct ParserArg){}; }
#line 3537 "src/parser.c"
    break;

  case 160: /* fptr_args: "(" fptr_list  */
#line 725 "src/gwion.y"
                         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3543 "src/parser.c"
    break;

  case 161: /* fptr_args: "("  */
#line 725 "src/gwion.y"
                                            { (yyval.arg_list) = NULL; }
#line 3549 "src/parser.c"
    break;

  case 162: /* arg_type: "..." ")"  */
#line 726 "src/gwion.y"
                    { (yyval.fbflag) = fbflag_variadic; }
#line 3555 "src/parser.c"
    break;

  case 163: /* arg_type: ")"  */
#line 726 "src/gwion.y"
                                                   { (yyval.fbflag) = 0; }
#line 3561 "src/parser.c"
    break;

  case 164: /* decl_template: ":[" specialized_list "]"  */
#line 728 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3567 "src/parser.c"
    break;

  case 165: /* decl_template: %empty  */
#line 728 "src/gwion.y"
                                                        { (yyval.specialized_list) = NULL; }
#line 3573 "src/parser.c"
    break;

  case 166: /* global: "global"  */
#line 730 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3579 "src/parser.c"
    break;

  case 167: /* storage_flag: "static"  */
#line 732 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3585 "src/parser.c"
    break;

  case 169: /* access_flag: "private"  */
#line 734 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3591 "src/parser.c"
    break;

  case 170: /* access_flag: "protect"  */
#line 735 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3597 "src/parser.c"
    break;

  case 171: /* flag: access_flag  */
#line 738 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3603 "src/parser.c"
    break;

  case 172: /* flag: storage_flag  */
#line 739 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3609 "src/parser.c"
    break;

  case 173: /* flag: access_flag storage_flag  */
#line 740 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3615 "src/parser.c"
    break;

  case 174: /* flag: %empty  */
#line 741 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3621 "src/parser.c"
    break;

  case 175: /* final: "final"  */
#line 744 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3627 "src/parser.c"
    break;

  case 176: /* final: %empty  */
#line 744 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3633 "src/parser.c"
    break;

  case 177: /* modifier: "abstract" final  */
#line 746 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3639 "src/parser.c"
    break;

  case 179: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 749 "src/gwion.y"
                                                 {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].default_args).args;
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag) | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), &(yyvsp[0].stmt));
  }
#line 3649 "src/parser.c"
    break;

  case 180: /* func_def_base: "fun" func_base func_args arg_type ";"  */
#line 754 "src/gwion.y"
                                           {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].default_args).args;
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    SET_FLAG((yyvsp[-3].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), NULL);
  }
#line 3660 "src/parser.c"
    break;

  case 181: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 763 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3672 "src/parser.c"
    break;

  case 187: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 774 "src/gwion.y"
    {
      MP_Vector *args = new_mp_vector(mpool(arg), sizeof(Arg), 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3684 "src/parser.c"
    break;

  case 188: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 782 "src/gwion.y"
    {
      Arg_List args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3695 "src/parser.c"
    break;

  case 189: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 789 "src/gwion.y"
    {
      Arg_List args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3707 "src/parser.c"
    break;

  case 190: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 797 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].default_args).args, ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3716 "src/parser.c"
    break;

  case 191: /* operator: "operator"  */
#line 802 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3722 "src/parser.c"
    break;

  case 192: /* operator: "operator" global  */
#line 802 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3728 "src/parser.c"
    break;

  case 193: /* op_def: operator op_base code_stmt  */
#line 805 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), &(yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3734 "src/parser.c"
    break;

  case 194: /* op_def: operator op_base ";"  */
#line 807 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3740 "src/parser.c"
    break;

  case 195: /* op_def: operator "abstract" op_base ";"  */
#line 809 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3746 "src/parser.c"
    break;

  case 199: /* func_def: operator "new" func_args arg_type code_stmt  */
#line 813 "src/gwion.y"
    { Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-4].flag), (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, &(yyvsp[0].stmt));
    }
#line 3755 "src/parser.c"
    break;

  case 200: /* func_def: operator "new" func_args arg_type ";"  */
#line 818 "src/gwion.y"
    { Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3764 "src/parser.c"
    break;

  case 201: /* func_def: operator "abstract" "new" func_args arg_type ";"  */
#line 823 "src/gwion.y"
    { Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 3773 "src/parser.c"
    break;

  case 202: /* type_decl_base: "<identifier>"  */
#line 829 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3779 "src/parser.c"
    break;

  case 203: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args arg_type func_effects ")"  */
#line 830 "src/gwion.y"
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
#line 3796 "src/parser.c"
    break;

  case 204: /* type_decl_tmpl: type_decl_base call_template  */
#line 845 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3802 "src/parser.c"
    break;

  case 205: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 846 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3808 "src/parser.c"
    break;

  case 207: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 851 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3814 "src/parser.c"
    break;

  case 208: /* option: "?"  */
#line 854 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3820 "src/parser.c"
    break;

  case 209: /* option: OPTIONS  */
#line 854 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3826 "src/parser.c"
    break;

  case 210: /* option: %empty  */
#line 854 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3832 "src/parser.c"
    break;

  case 211: /* type_decl_opt: type_decl_noflag option  */
#line 855 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3838 "src/parser.c"
    break;

  case 213: /* type_decl: type_decl_flag type_decl_opt  */
#line 856 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3844 "src/parser.c"
    break;

  case 214: /* type_decl_flag: "late"  */
#line 859 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3850 "src/parser.c"
    break;

  case 215: /* type_decl_flag: "const"  */
#line 860 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3856 "src/parser.c"
    break;

  case 216: /* opt_var: "var"  */
#line 862 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 3862 "src/parser.c"
    break;

  case 217: /* opt_var: %empty  */
#line 862 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 3868 "src/parser.c"
    break;

  case 218: /* type_decl_flag2: "var"  */
#line 864 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3874 "src/parser.c"
    break;

  case 220: /* union_decl: "<identifier>" ";"  */
#line 867 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 3883 "src/parser.c"
    break;

  case 221: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 871 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 3889 "src/parser.c"
    break;

  case 222: /* union_decl: type_decl_empty "<identifier>" array_empty ";"  */
#line 872 "src/gwion.y"
                                     { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-3].type_decl), .vd = { .xid =(yyvsp[-2].sym), .array = (yyvsp[-1].array_sub), .pos = (yylsp[-2]) }  };}
#line 3895 "src/parser.c"
    break;

  case 223: /* union_list: union_decl  */
#line 874 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), sizeof(Union_Member), 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 3904 "src/parser.c"
    break;

  case 224: /* union_list: union_list union_decl  */
#line 878 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 3913 "src/parser.c"
    break;

  case 225: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 884 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3925 "src/parser.c"
    break;

  case 226: /* var_decl_list: var_decl_list "," var_decl  */
#line 894 "src/gwion.y"
                               {
     mp_vector_add(mpool(arg), &(yyvsp[-2].var_decl_list), struct Var_Decl_, (yyvsp[0].var_decl));
     (yyval.var_decl_list) = (yyvsp[-2].var_decl_list);
  }
#line 3934 "src/parser.c"
    break;

  case 227: /* var_decl_list: var_decl  */
#line 898 "src/gwion.y"
             {
     (yyval.var_decl_list) = new_mp_vector(mpool(arg), sizeof(struct Var_Decl_), 1);
     mp_vector_set((yyval.var_decl_list), struct Var_Decl_, 0, (yyvsp[0].var_decl));
  }
#line 3943 "src/parser.c"
    break;

  case 228: /* var_decl: "<identifier>"  */
#line 904 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 3949 "src/parser.c"
    break;

  case 229: /* var_decl: "<identifier>" array  */
#line 905 "src/gwion.y"
               { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[-1].sym), .array = (yyvsp[0].array_sub), .pos = (yylsp[-1]) }; }
#line 3955 "src/parser.c"
    break;

  case 230: /* arg_decl: "<identifier>"  */
#line 907 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 3961 "src/parser.c"
    break;

  case 231: /* arg_decl: "<identifier>" array_empty  */
#line 908 "src/gwion.y"
                   { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[-1].sym), .array = (yyvsp[0].array_sub), .pos = (yylsp[-1]) }; }
#line 3967 "src/parser.c"
    break;

  case 232: /* arg_decl: "<identifier>" array_exp  */
#line 909 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 3973 "src/parser.c"
    break;

  case 234: /* fptr_arg_decl: %empty  */
#line 910 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 3979 "src/parser.c"
    break;

  case 248: /* opt_exp: exp  */
#line 918 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 3985 "src/parser.c"
    break;

  case 249: /* opt_exp: %empty  */
#line 918 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 3991 "src/parser.c"
    break;

  case 251: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 921 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3997 "src/parser.c"
    break;

  case 252: /* con_exp: log_or_exp "?:" con_exp  */
#line 923 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4003 "src/parser.c"
    break;

  case 254: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 925 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4009 "src/parser.c"
    break;

  case 256: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 926 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4015 "src/parser.c"
    break;

  case 258: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 927 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4021 "src/parser.c"
    break;

  case 260: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 928 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4027 "src/parser.c"
    break;

  case 262: /* and_exp: and_exp "&" eq_exp  */
#line 929 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4033 "src/parser.c"
    break;

  case 264: /* eq_exp: eq_exp eq_op rel_exp  */
#line 930 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4039 "src/parser.c"
    break;

  case 266: /* rel_exp: rel_exp rel_op shift_exp  */
#line 931 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4045 "src/parser.c"
    break;

  case 268: /* shift_exp: shift_exp shift_op add_exp  */
#line 932 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4051 "src/parser.c"
    break;

  case 270: /* add_exp: add_exp add_op mul_exp  */
#line 933 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4057 "src/parser.c"
    break;

  case 272: /* mul_exp: mul_exp mul_op dur_exp  */
#line 934 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4063 "src/parser.c"
    break;

  case 274: /* dur_exp: dur_exp "::" cast_exp  */
#line 935 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4069 "src/parser.c"
    break;

  case 276: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 938 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4075 "src/parser.c"
    break;

  case 285: /* unary_exp: unary_op unary_exp  */
#line 945 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4081 "src/parser.c"
    break;

  case 286: /* unary_exp: OPID_E unary_exp  */
#line 946 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4087 "src/parser.c"
    break;

  case 287: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 947 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4095 "src/parser.c"
    break;

  case 288: /* unary_exp: "new" type_decl_exp  */
#line 950 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4101 "src/parser.c"
    break;

  case 289: /* unary_exp: "spork" code_stmt  */
#line 951 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), &(yyvsp[0].stmt), (yyloc)); }
#line 4107 "src/parser.c"
    break;

  case 290: /* unary_exp: "fork" code_stmt  */
#line 952 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), &(yyvsp[0].stmt), (yyloc)); }
#line 4113 "src/parser.c"
    break;

  case 291: /* unary_exp: "$" type_decl_empty  */
#line 953 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4119 "src/parser.c"
    break;

  case 292: /* lambda_list: "<identifier>"  */
#line 956 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), sizeof(Arg), 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4129 "src/parser.c"
    break;

  case 293: /* lambda_list: lambda_list "<identifier>"  */
#line 961 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4139 "src/parser.c"
    break;

  case 294: /* lambda_arg: "\\" lambda_list  */
#line 966 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4145 "src/parser.c"
    break;

  case 295: /* lambda_arg: "\\"  */
#line 966 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4151 "src/parser.c"
    break;

  case 296: /* type_list: type_decl_empty  */
#line 969 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), sizeof(Type_Decl*), 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4160 "src/parser.c"
    break;

  case 297: /* type_list: type_list "," type_decl_empty  */
#line 973 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4169 "src/parser.c"
    break;

  case 298: /* call_paren: "(" exp ")"  */
#line 979 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4175 "src/parser.c"
    break;

  case 299: /* call_paren: "(" ")"  */
#line 979 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4181 "src/parser.c"
    break;

  case 302: /* dot_exp: post_exp "." "<identifier>"  */
#line 983 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4194 "src/parser.c"
    break;

  case 304: /* post_exp: post_exp array_exp  */
#line 994 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4200 "src/parser.c"
    break;

  case 305: /* post_exp: post_exp range  */
#line 996 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4206 "src/parser.c"
    break;

  case 306: /* post_exp: post_exp call_template call_paren  */
#line 998 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4213 "src/parser.c"
    break;

  case 307: /* post_exp: post_exp post_op  */
#line 1001 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4219 "src/parser.c"
    break;

  case 308: /* post_exp: post_exp OPID_E  */
#line 1003 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4225 "src/parser.c"
    break;

  case 309: /* post_exp: dot_exp  */
#line 1004 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4231 "src/parser.c"
    break;

  case 310: /* interp_exp: "<interp string end>"  */
#line 1008 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4237 "src/parser.c"
    break;

  case 311: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1009 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4243 "src/parser.c"
    break;

  case 312: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1010 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4249 "src/parser.c"
    break;

  case 313: /* interp: "`" interp_exp  */
#line 1012 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4255 "src/parser.c"
    break;

  case 314: /* interp: interp "`" interp_exp  */
#line 1013 "src/gwion.y"
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
#line 4270 "src/parser.c"
    break;

  case 315: /* prim_exp: "<identifier>"  */
#line 1025 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4276 "src/parser.c"
    break;

  case 316: /* prim_exp: "<integer>"  */
#line 1026 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 4282 "src/parser.c"
    break;

  case 317: /* prim_exp: "<float>"  */
#line 1027 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4288 "src/parser.c"
    break;

  case 318: /* prim_exp: interp  */
#line 1028 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4294 "src/parser.c"
    break;

  case 319: /* prim_exp: "<litteral string>"  */
#line 1029 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4300 "src/parser.c"
    break;

  case 320: /* prim_exp: "<litteral char>"  */
#line 1030 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4306 "src/parser.c"
    break;

  case 321: /* prim_exp: array  */
#line 1031 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 4312 "src/parser.c"
    break;

  case 322: /* prim_exp: "{" dict_list "}"  */
#line 1032 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4318 "src/parser.c"
    break;

  case 323: /* prim_exp: range  */
#line 1033 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4324 "src/parser.c"
    break;

  case 324: /* prim_exp: "<<<" exp ">>>"  */
#line 1034 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4330 "src/parser.c"
    break;

  case 325: /* prim_exp: "(" exp ")"  */
#line 1035 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4336 "src/parser.c"
    break;

  case 326: /* prim_exp: lambda_arg code_stmt  */
#line 1036 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), &(yyvsp[0].stmt), (yylsp[-1])); }
#line 4342 "src/parser.c"
    break;

  case 327: /* prim_exp: "(" op_op ")"  */
#line 1037 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 4348 "src/parser.c"
    break;

  case 328: /* prim_exp: "perform" "<identifier>"  */
#line 1038 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4354 "src/parser.c"
    break;

  case 329: /* prim_exp: "(" ")"  */
#line 1039 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4360 "src/parser.c"
    break;


#line 4364 "src/parser.c"

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
          YYNOMEM;
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, arg, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 1041 "src/gwion.y"

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
