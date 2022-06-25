/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

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
ANN Symbol sig_name(const Scanner*, const pos_t);
void lex_spread(void *data);

#line 96 "src/parser.c"

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
  YYSYMBOL_LOCALE = 56,                    /* LOCALE  */
  YYSYMBOL_LOCALE_INI = 57,                /* LOCALE_INI  */
  YYSYMBOL_LOCALE_END = 58,                /* LOCALE_END  */
  YYSYMBOL_LATE = 59,                      /* "late"  */
  YYSYMBOL_NUM = 60,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 61,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 62,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 63,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 64,              /* "${"  */
  YYSYMBOL_INTERP_EXP = 65,                /* INTERP_EXP  */
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
  YYSYMBOL_SPREAD = 77,                    /* "}..."  */
  YYSYMBOL_INTERP_LIT = 78,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 79,                /* "<interp string end>"  */
  YYSYMBOL_80_operator_id_ = 80,           /* "@<operator id>"  */
  YYSYMBOL_ID = 81,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 82,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 83,                  /* "++"  */
  YYSYMBOL_MINUS = 84,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 85,                /* "--"  */
  YYSYMBOL_TIMES = 86,                     /* "*"  */
  YYSYMBOL_DIVIDE = 87,                    /* "/"  */
  YYSYMBOL_PERCENT = 88,                   /* "%"  */
  YYSYMBOL_DOLLAR = 89,                    /* "$"  */
  YYSYMBOL_QUESTION = 90,                  /* "?"  */
  YYSYMBOL_OPTIONS = 91,                   /* OPTIONS  */
  YYSYMBOL_COLON = 92,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 93,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 94,             /* "?:"  */
  YYSYMBOL_NEW = 95,                       /* "new"  */
  YYSYMBOL_SPORK = 96,                     /* "spork"  */
  YYSYMBOL_FORK = 97,                      /* "fork"  */
  YYSYMBOL_L_HACK = 98,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 99,                    /* ">>>"  */
  YYSYMBOL_AND = 100,                      /* "&&"  */
  YYSYMBOL_EQ = 101,                       /* "=="  */
  YYSYMBOL_GE = 102,                       /* ">="  */
  YYSYMBOL_GT = 103,                       /* ">"  */
  YYSYMBOL_LE = 104,                       /* "<="  */
  YYSYMBOL_LT = 105,                       /* "<"  */
  YYSYMBOL_NEQ = 106,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 107,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 108,              /* ">>"  */
  YYSYMBOL_S_AND = 109,                    /* "&"  */
  YYSYMBOL_S_OR = 110,                     /* "|"  */
  YYSYMBOL_S_XOR = 111,                    /* "^"  */
  YYSYMBOL_OR = 112,                       /* "||"  */
  YYSYMBOL_TMPL = 113,                     /* ":["  */
  YYSYMBOL_TILDA = 114,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 115,              /* "!"  */
  YYSYMBOL_AROBASE = 116,                  /* "@"  */
  YYSYMBOL_DYNOP = 117,                    /* "<dynamic_operator>"  */
  YYSYMBOL_LOCALE_EXP = 118,               /* "`foo`"  */
  YYSYMBOL_RANGE_EMPTY = 119,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 120,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 121,                   /* UTIMES  */
  YYSYMBOL_122_ = 122,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 123,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 124,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 125,                 /* $accept  */
  YYSYMBOL_prg = 126,                      /* prg  */
  YYSYMBOL_ast = 127,                      /* ast  */
  YYSYMBOL_section = 128,                  /* section  */
  YYSYMBOL_class_flag = 129,               /* class_flag  */
  YYSYMBOL_class_def = 130,                /* class_def  */
  YYSYMBOL_trait_stmt = 131,               /* trait_stmt  */
  YYSYMBOL_trait_stmt_list = 132,          /* trait_stmt_list  */
  YYSYMBOL_trait_section = 133,            /* trait_section  */
  YYSYMBOL_trait_ast = 134,                /* trait_ast  */
  YYSYMBOL_trait_body = 135,               /* trait_body  */
  YYSYMBOL_trait_def = 136,                /* trait_def  */
  YYSYMBOL_class_ext = 137,                /* class_ext  */
  YYSYMBOL_traits = 138,                   /* traits  */
  YYSYMBOL_extend_def = 139,               /* extend_def  */
  YYSYMBOL_class_body = 140,               /* class_body  */
  YYSYMBOL_id_list = 141,                  /* id_list  */
  YYSYMBOL_specialized_list = 142,         /* specialized_list  */
  YYSYMBOL_stmt_list = 143,                /* stmt_list  */
  YYSYMBOL_fptr_base = 144,                /* fptr_base  */
  YYSYMBOL__func_effects = 145,            /* _func_effects  */
  YYSYMBOL_func_effects = 146,             /* func_effects  */
  YYSYMBOL_func_base = 147,                /* func_base  */
  YYSYMBOL_fptr_def = 148,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 149,             /* typedef_when  */
  YYSYMBOL_type_def_type = 150,            /* type_def_type  */
  YYSYMBOL_type_def = 151,                 /* type_def  */
  YYSYMBOL_type_decl_array = 152,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 153,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 154,          /* type_decl_empty  */
  YYSYMBOL_arg = 155,                      /* arg  */
  YYSYMBOL_arg_list = 156,                 /* arg_list  */
  YYSYMBOL_locale_arg = 157,               /* locale_arg  */
  YYSYMBOL_locale_list = 158,              /* locale_list  */
  YYSYMBOL_fptr_arg = 159,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 160,                /* fptr_list  */
  YYSYMBOL_code_stmt = 161,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 162,                  /* stmt_pp  */
  YYSYMBOL_stmt = 163,                     /* stmt  */
  YYSYMBOL_spread_stmt = 164,              /* spread_stmt  */
  YYSYMBOL_165_1 = 165,                    /* $@1  */
  YYSYMBOL_retry_stmt = 166,               /* retry_stmt  */
  YYSYMBOL_handler = 167,                  /* handler  */
  YYSYMBOL_168_2 = 168,                    /* $@2  */
  YYSYMBOL_handler_list = 169,             /* handler_list  */
  YYSYMBOL_try_stmt = 170,                 /* try_stmt  */
  YYSYMBOL_opt_id = 171,                   /* opt_id  */
  YYSYMBOL_enum_def = 172,                 /* enum_def  */
  YYSYMBOL_when_exp = 173,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 174,          /* match_case_stmt  */
  YYSYMBOL_match_list = 175,               /* match_list  */
  YYSYMBOL_match_stmt = 176,               /* match_stmt  */
  YYSYMBOL_flow = 177,                     /* flow  */
  YYSYMBOL_loop_stmt = 178,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 179,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 180,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 181,           /* selection_stmt  */
  YYSYMBOL_breaks = 182,                   /* breaks  */
  YYSYMBOL_jump_stmt = 183,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 184,                 /* exp_stmt  */
  YYSYMBOL_exp = 185,                      /* exp  */
  YYSYMBOL_binary_exp = 186,               /* binary_exp  */
  YYSYMBOL_call_template = 187,            /* call_template  */
  YYSYMBOL_op = 188,                       /* op  */
  YYSYMBOL_array_exp = 189,                /* array_exp  */
  YYSYMBOL_array_empty = 190,              /* array_empty  */
  YYSYMBOL_dict_list = 191,                /* dict_list  */
  YYSYMBOL_range = 192,                    /* range  */
  YYSYMBOL_array = 193,                    /* array  */
  YYSYMBOL_decl_exp = 194,                 /* decl_exp  */
  YYSYMBOL_func_args = 195,                /* func_args  */
  YYSYMBOL_fptr_args = 196,                /* fptr_args  */
  YYSYMBOL_arg_type = 197,                 /* arg_type  */
  YYSYMBOL_decl_template = 198,            /* decl_template  */
  YYSYMBOL_global = 199,                   /* global  */
  YYSYMBOL_opt_global = 200,               /* opt_global  */
  YYSYMBOL_storage_flag = 201,             /* storage_flag  */
  YYSYMBOL_access_flag = 202,              /* access_flag  */
  YYSYMBOL_flag = 203,                     /* flag  */
  YYSYMBOL_final = 204,                    /* final  */
  YYSYMBOL_modifier = 205,                 /* modifier  */
  YYSYMBOL_func_def_base = 206,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 207,            /* abstract_fdef  */
  YYSYMBOL_op_op = 208,                    /* op_op  */
  YYSYMBOL_op_base = 209,                  /* op_base  */
  YYSYMBOL_operator = 210,                 /* operator  */
  YYSYMBOL_op_def = 211,                   /* op_def  */
  YYSYMBOL_func_def = 212,                 /* func_def  */
  YYSYMBOL_type_decl_base = 213,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 214,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 215,         /* type_decl_noflag  */
  YYSYMBOL_option = 216,                   /* option  */
  YYSYMBOL_type_decl_opt = 217,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 218,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 219,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 220,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 221,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 222,               /* union_decl  */
  YYSYMBOL_union_list = 223,               /* union_list  */
  YYSYMBOL_union_def = 224,                /* union_def  */
  YYSYMBOL_var_decl = 225,                 /* var_decl  */
  YYSYMBOL_arg_decl = 226,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 227,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 228,                    /* eq_op  */
  YYSYMBOL_rel_op = 229,                   /* rel_op  */
  YYSYMBOL_shift_op = 230,                 /* shift_op  */
  YYSYMBOL_add_op = 231,                   /* add_op  */
  YYSYMBOL_mul_op = 232,                   /* mul_op  */
  YYSYMBOL_opt_exp = 233,                  /* opt_exp  */
  YYSYMBOL_con_exp = 234,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 235,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 236,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 237,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 238,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 239,                  /* and_exp  */
  YYSYMBOL_eq_exp = 240,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 241,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 242,                /* shift_exp  */
  YYSYMBOL_add_exp = 243,                  /* add_exp  */
  YYSYMBOL_mul_exp = 244,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 245,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 246,                 /* cast_exp  */
  YYSYMBOL_unary_op = 247,                 /* unary_op  */
  YYSYMBOL_unary_exp = 248,                /* unary_exp  */
  YYSYMBOL_lambda_list = 249,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 250,               /* lambda_arg  */
  YYSYMBOL_type_list = 251,                /* type_list  */
  YYSYMBOL_call_paren = 252,               /* call_paren  */
  YYSYMBOL_post_op = 253,                  /* post_op  */
  YYSYMBOL_dot_exp = 254,                  /* dot_exp  */
  YYSYMBOL_post_exp = 255,                 /* post_exp  */
  YYSYMBOL_interp_exp = 256,               /* interp_exp  */
  YYSYMBOL_interp = 257,                   /* interp  */
  YYSYMBOL_capture = 258,                  /* capture  */
  YYSYMBOL__captures = 259,                /* _captures  */
  YYSYMBOL_captures = 260,                 /* captures  */
  YYSYMBOL_prim_exp = 261                  /* prim_exp  */
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
#define YYFINAL  226
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2384

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  125
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  137
/* YYNRULES -- Number of rules.  */
#define YYNRULES  343
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  616

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   379


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
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   179,   179,   180,   183,   187,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   204,   206,   213,   222,   226,
     227,   231,   237,   238,   242,   246,   251,   251,   253,   259,
     259,   260,   260,   262,   267,   267,   269,   274,   280,   288,
     294,   298,   303,   306,   306,   307,   307,   309,   312,   319,
     319,   320,   320,   321,   330,   330,   332,   336,   341,   345,
     350,   355,   364,   375,   383,   384,   394,   396,   400,   406,
     408,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   425,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   443,   443,   453,   458,
     458,   459,   464,   480,   485,   485,   488,   493,   493,   496,
     508,   512,   517,   528,   539,   540,   544,   553,   563,   573,
     584,   597,   615,   624,   638,   646,   653,   662,   673,   673,
     675,   680,   684,   689,   695,   700,   706,   707,   718,   719,
     720,   721,   724,   724,   726,   726,   726,   726,   726,   729,
     730,   733,   737,   738,   739,   743,   744,   747,   748,   749,
     753,   753,   754,   755,   757,   757,   758,   758,   759,   759,
     761,   762,   768,   773,   775,   776,   776,   778,   778,   780,
     781,   784,   785,   786,   787,   790,   790,   792,   792,   795,
     800,   808,   814,   822,   832,   832,   832,   832,   832,   834,
     844,   853,   863,   869,   869,   871,   873,   875,   878,   878,
     878,   879,   885,   893,   903,   904,   919,   920,   924,   925,
     928,   928,   928,   929,   930,   930,   933,   934,   936,   936,
     938,   938,   941,   945,   947,   951,   957,   966,   968,   969,
     969,   971,   971,   972,   972,   972,   972,   973,   973,   974,
     974,   975,   975,   975,   977,   977,   978,   979,   981,   984,
     984,   985,   985,   986,   986,   987,   987,   988,   988,   989,
     989,   990,   990,   991,   991,   992,   992,   993,   993,   994,
     994,   996,   996,   999,   999,   999,  1000,  1000,  1003,  1004,
    1005,  1006,  1007,  1010,  1011,  1012,  1013,  1014,  1015,  1018,
    1023,  1028,  1028,  1031,  1035,  1041,  1041,  1043,  1043,  1045,
    1054,  1055,  1057,  1059,  1062,  1064,  1068,  1069,  1070,  1072,
    1073,  1084,  1084,  1086,  1087,  1088,  1088,  1090,  1091,  1092,
    1093,  1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,  1107,
    1108,  1109,  1110,  1111
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
  "LOCALE", "LOCALE_INI", "LOCALE_END", "late", "<integer>", "<float>",
  "<litteral string>", "<litteral char>", "${", "INTERP_EXP", "<comment>",
  "#include", "#define", "#pragma", "#undef", "#ifdef", "#ifndef", "#else",
  "#if", "\n", "import", "}...", "<interp string lit>",
  "<interp string end>", "@<operator id>", "<identifier>", "+", "++", "-",
  "--", "*", "/", "%", "$", "?", "OPTIONS", ":", "::", "?:", "new",
  "spork", "fork", "<<<", ">>>", "&&", "==", ">=", ">", "<=", "<", "!=",
  "<<", ">>", "&", "|", "^", "||", ":[", "~", "!", "@",
  "<dynamic_operator>", "`foo`", "RANGE_EMPTY", "UMINUS", "UTIMES", "=",
  "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg", "ast", "section",
  "class_flag", "class_def", "trait_stmt", "trait_stmt_list",
  "trait_section", "trait_ast", "trait_body", "trait_def", "class_ext",
  "traits", "extend_def", "class_body", "id_list", "specialized_list",
  "stmt_list", "fptr_base", "_func_effects", "func_effects", "func_base",
  "fptr_def", "typedef_when", "type_def_type", "type_def",
  "type_decl_array", "type_decl_exp", "type_decl_empty", "arg", "arg_list",
  "locale_arg", "locale_list", "fptr_arg", "fptr_list", "code_stmt",
  "stmt_pp", "stmt", "spread_stmt", "$@1", "retry_stmt", "handler", "$@2",
  "handler_list", "try_stmt", "opt_id", "enum_def", "when_exp",
  "match_case_stmt", "match_list", "match_stmt", "flow", "loop_stmt",
  "varloop_stmt", "defer_stmt", "selection_stmt", "breaks", "jump_stmt",
  "exp_stmt", "exp", "binary_exp", "call_template", "op", "array_exp",
  "array_empty", "dict_list", "range", "array", "decl_exp", "func_args",
  "fptr_args", "arg_type", "decl_template", "global", "opt_global",
  "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "type_decl_base", "type_decl_tmpl",
  "type_decl_noflag", "option", "type_decl_opt", "type_decl",
  "type_decl_flag", "opt_var", "type_decl_flag2", "union_decl",
  "union_list", "union_def", "var_decl", "arg_decl", "fptr_arg_decl",
  "eq_op", "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp",
  "cast_exp", "unary_op", "unary_exp", "lambda_list", "lambda_arg",
  "type_list", "call_paren", "post_op", "dot_exp", "post_exp",
  "interp_exp", "interp", "capture", "_captures", "captures", "prim_exp", YY_NULLPTR
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
     375,   376,   377,   378,   379
};
#endif

#define YYPACT_NINF (-426)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-252)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     579,  -426,  1429,  1543,   693,   271,  -426,    72,  -426,   911,
    -426,   130,   151,   165,  2165,   271,  1295,  -426,  -426,   911,
      -7,    98,   271,   271,    95,    48,    95,  -426,  -426,   271,
     271,  -426,    92,  2165,   911,    94,    31,    99,  -426,  -426,
    -426,  -426,  -426,  1606,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
      48,    48,   267,   267,  2165,  -426,  -426,  -426,   199,   579,
    -426,  -426,  -426,  -426,   911,  -426,   271,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,   214,  -426,  -426,  -426,
    -426,    53,  -426,  -426,   244,    42,  -426,   274,  -426,  -426,
    -426,  -426,  -426,   381,  -426,  -426,  -426,   271,  -426,  -426,
     -18,   184,   120,   175,   183,   -28,   234,   103,    26,   166,
     200,   206,  2266,  -426,   204,  -426,  -426,    21,   236,  -426,
    -426,  2165,  -426,   293,   296,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,   297,  -426,
     299,  -426,  -426,  -426,  -426,  -426,  2165,    23,  -426,   807,
      25,   302,  -426,  -426,  -426,  -426,   308,  -426,  -426,   202,
     209,  2165,   227,  2227,  1335,   238,   305,   241,  -426,   314,
     294,  -426,  -426,   245,   224,   252,  -426,   253,   271,  -426,
      30,  -426,   248,   228,   303,   187,  -426,   335,    87,  -426,
     340,    48,   266,   257,    88,  -426,  -426,   273,   350,   276,
    1668,  1606,  -426,   301,  -426,  -426,  -426,   353,   -29,  -426,
    -426,   352,  -426,  -426,   352,   268,  -426,  -426,  -426,    48,
    2165,  -426,   365,  -426,  2165,  2165,  2165,  2165,  1730,  -426,
     418,   308,  1360,   118,    48,    48,  2165,  2266,  2266,  2266,
    2266,  2266,  2266,  -426,  -426,  2266,  2266,  2266,  -426,  2266,
    -426,  2266,  2266,    48,  -426,   360,  1792,   289,    48,   367,
    -426,  -426,  -426,  1606,    96,  -426,  -426,   366,   368,  1855,
    -426,  2165,  -426,    48,    51,  -426,    48,  -426,    48,   373,
    2165,   379,    28,  1335,    33,   362,   380,  -426,  -426,  -426,
     294,   275,   351,  -426,  -426,   275,   304,    48,   228,   312,
    -426,    87,  -426,  -426,  -426,  1917,  -426,  -426,    48,    51,
     313,   275,   312,   693,  -426,  -426,    48,   390,  -426,   341,
    -426,  1606,  2165,  -426,   317,  -426,   125,  -426,  -426,  -426,
     319,   395,  -426,  -426,  -426,  -426,  -426,  -426,   394,   308,
     400,    51,   308,   275,   275,  -426,  -426,   275,   323,  -426,
     315,  -426,   184,   120,   175,   183,   -28,   234,   103,    26,
     166,   200,   206,  -426,   693,  -426,  -426,  -426,   218,  1979,
    -426,  -426,  -426,  2041,  -426,  -426,   397,    46,   325,  -426,
     404,  -426,   403,   158,   330,   331,   911,   410,  2165,   911,
    2103,   333,   405,  2165,  -426,    83,   312,   334,  -426,     9,
     374,  -426,   304,   312,   191,   275,  -426,  -426,   285,  -426,
     325,  -426,   414,   389,   275,   411,   127,  -426,   421,   416,
      48,  -426,  -426,   420,  -426,  -426,  -426,   275,   911,    51,
    -426,   205,   426,   422,   429,   430,  -426,  -426,  2266,    32,
      48,  -426,  -426,   431,  -426,  -426,  2165,  -426,   346,    48,
    -426,  -426,  -426,   275,   275,   427,  -426,    60,  -426,   911,
     436,   354,  -426,  2165,   424,   419,  -426,   225,  -426,   911,
     441,   304,   233,    48,   304,   435,   446,  -426,  1103,  -426,
     340,  -426,   370,  -426,  -426,    48,   371,   375,   451,  -426,
     223,  -426,    48,   352,   452,  -426,   434,  -426,   456,  -426,
    -426,  -426,    48,    48,    48,  -426,  -426,  -426,  -426,  -426,
    2165,  -426,   340,  -426,   911,   911,  -426,   911,   405,    69,
    2165,   369,   911,  -426,  -426,  -426,  -426,    18,  -426,  -426,
     460,   579,  -426,  1199,  -426,  1007,  -426,  -426,  -426,    51,
    -426,  -426,  -426,  -426,  -426,   468,   392,  -426,   235,   402,
    -426,  -426,   352,  2165,   471,  -426,   477,   478,   479,   -21,
      51,  -426,  -426,  -426,  2165,   911,  -426,   911,  -426,   480,
     304,   579,   579,   476,  -426,  -426,  -426,   389,  -426,   484,
    -426,  -426,  -426,  -426,   -21,  -426,    48,  -426,  -426,   486,
      73,  -426,   911,  -426,  -426,   481,  -426,   491,  -426,   492,
    -426,   911,  -426,  -426,  -426,  -426
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   135,     0,     0,     0,   184,   230,     0,   114,     0,
     115,     0,     0,     0,     0,   184,     0,   128,   129,     0,
       0,     0,   184,   184,   176,     0,   203,    51,    52,   184,
     184,   227,     0,     0,     0,   302,     0,     0,   226,   328,
     329,   331,   332,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,   327,   307,   283,   308,   284,
       0,     0,     0,     0,     0,   287,   286,   338,     0,     2,
       4,     8,     9,    10,     6,    13,   184,    14,    87,    90,
      40,    95,    94,    93,    11,    88,     0,    85,    91,    92,
      86,     0,    89,    84,     0,   136,   160,   161,   335,   333,
     138,   208,   209,     0,   210,     7,   231,   184,    12,   162,
     256,   259,   261,   263,   265,   267,   269,   271,   273,   275,
     277,   279,     0,   281,   326,   285,   315,   288,   330,   310,
     343,     0,   249,   283,   284,   252,   253,   148,   144,   246,
     244,   245,   243,   145,   247,   248,   146,   147,     0,   194,
       0,   196,   195,   198,   197,   152,     0,     0,    69,     0,
     136,     0,   177,   174,   179,   180,     0,   178,   182,   181,
     186,     0,     0,     0,     0,     0,     0,     0,   131,     0,
       0,   342,    98,     0,   186,     0,   175,     0,   184,   214,
       0,    57,     0,   143,   218,   222,   224,    55,     0,   204,
       0,     0,     0,     0,     0,   125,   299,   301,     0,     0,
       0,     0,   316,     0,   319,   298,    56,   293,     0,   294,
     290,     0,   295,   291,     0,     0,     1,     5,    41,     0,
       0,   133,     0,   134,     0,     0,     0,     0,     0,   154,
       0,     0,     0,     0,     0,     0,   255,     0,     0,     0,
       0,     0,     0,   241,   242,     0,     0,     0,   250,     0,
     251,     0,     0,     0,   289,     0,     0,     0,     0,     0,
     311,   312,   314,     0,     0,   337,   341,     0,   149,     0,
      70,     0,   334,   165,     0,   183,     0,   185,     0,     0,
       0,   327,     0,     0,     0,     0,     0,   130,    99,   101,
     103,   173,   186,   188,    15,   173,    31,     0,   143,     0,
     216,     0,   220,   221,   223,     0,    54,   225,   167,     0,
       0,   173,     0,     0,   124,   300,    65,     0,    83,     0,
     317,     0,   255,   321,     0,   323,     0,   296,   297,   336,
       0,     0,   132,   137,   141,   139,   140,   153,     0,     0,
       0,     0,     0,   173,   173,   206,   205,   173,     0,   254,
       0,   258,   260,   262,   264,   266,   268,   270,   272,   274,
     276,   278,   280,   282,     0,   339,   309,   303,     0,     0,
     313,   320,   159,     0,   150,   158,     0,   155,     0,    60,
     164,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   229,     0,   110,     0,     0,   105,   102,     0,
      30,   187,    31,     0,     0,   173,   217,    36,     0,   219,
     240,    67,   166,    45,   173,     0,     0,    62,    64,     0,
      65,    82,   318,     0,   322,   325,   324,   173,     0,     0,
     207,     0,     0,     0,     0,     0,   237,   163,     0,   136,
       0,   142,   306,     0,   151,   157,     0,   238,    59,     0,
     168,   190,   189,   173,   173,   126,   117,     0,   122,     0,
       0,     0,   228,     0,   108,   113,   111,     0,   104,     0,
       0,    31,     0,     0,    31,     0,    32,    27,     0,    28,
       0,    33,     0,   239,    66,     0,     0,    46,     0,    42,
       0,    96,     0,     0,     0,   292,    49,   116,     0,   212,
     211,   202,     0,     0,     0,   257,   340,   304,   305,   156,
       0,    61,     0,    47,     0,     0,   118,     0,   229,     0,
       0,     0,     0,   106,   100,   172,    38,     0,   170,    29,
       0,    35,    20,    22,    24,     0,    19,    18,    23,     0,
      37,    68,    43,    44,    48,   214,     0,   234,     0,     0,
      63,   192,     0,     0,     0,   213,     0,     0,     0,    58,
       0,   127,   123,   119,     0,     0,   107,     0,   112,     0,
      31,    35,    34,     0,    21,    26,    25,    45,   232,     0,
     236,   235,    97,   191,    50,    53,     0,   200,   201,     0,
       0,   120,   109,   171,    39,     0,    17,     0,   233,     0,
     193,     0,    16,   215,   199,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -426,  -426,   500,   -65,   482,  -426,   -37,  -426,   -38,  -426,
    -426,  -426,  -426,  -397,  -426,   -73,  -260,  -426,    -3,  -426,
    -426,   -78,  -426,  -426,  -426,  -426,  -426,   -47,    27,   -17,
    -281,  -426,  -426,    81,    19,  -426,   -50,  -425,    -9,  -426,
    -426,  -426,   220,  -426,  -426,  -426,  -426,  -426,  -426,   116,
    -426,  -426,   356,  -426,  -426,  -426,  -426,  -426,  -426,  -165,
      45,    -1,  -170,  -426,   -76,  -426,    66,   398,   327,    24,
    -183,  -419,  -313,  -272,   171,  -426,   357,  -426,    15,  -162,
    -426,  -426,  -426,   287,   290,  -426,  -426,  -421,   344,  -426,
     226,  -426,   337,  -426,   -20,     3,  -426,   -22,  -426,  -426,
    -426,   119,  -426,  -426,  -109,  -106,  -102,  -100,   208,  -230,
    -426,   295,   298,   292,   300,   306,   291,   288,   307,   286,
     309,   310,   -85,    -8,  -426,  -426,  -426,  -426,  -103,  -426,
    -426,  -184,  -426,   212,  -426,   -24,  -426
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,   582,    70,   183,    71,   542,   543,   544,   545,
     489,    72,   484,   414,    73,   583,   418,   482,    74,   200,
     497,   498,   166,    75,   564,    76,    77,   191,   217,   388,
     427,   390,   428,   429,   421,   422,    78,    79,    80,    81,
     559,    82,   299,   407,   300,    83,   479,    84,   531,   404,
     405,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,   269,   149,    96,    97,   161,    98,    99,   100,
     284,   319,   393,   410,   167,   187,   168,   169,   184,   288,
     304,   101,   102,   150,   243,   103,   104,   105,   193,   194,
     195,   314,   196,   197,   106,   473,   107,   557,   558,   108,
     447,   458,   494,   255,   151,   152,   153,   154,   360,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   207,   124,   378,   380,   125,   126,
     127,   214,   128,   335,   336,   221,   129
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     172,   159,   389,   160,   227,   198,   423,   256,   192,   293,
     180,   257,   219,   222,   216,   485,   259,   361,   244,   261,
     170,   239,   303,   310,   272,   205,  -143,   330,   266,   234,
     177,   278,   204,   412,   399,   188,   234,   401,   441,   224,
     198,   198,   516,   215,   201,   202,   234,   148,   157,   425,
     456,   270,   333,   188,   220,   223,   231,   391,   351,   176,
     480,   179,   426,   546,   267,   228,   525,   548,   163,   579,
     235,   549,   246,   253,   181,   575,   247,   171,   254,   611,
     334,   443,   444,   198,   536,   445,   242,   540,   213,   381,
     481,   229,   188,   475,   248,   236,   237,   323,    31,   580,
     265,   182,   392,   570,    56,   403,    58,    38,   132,   225,
     258,   189,   208,   232,   264,   279,   235,   281,   546,   235,
     546,   355,   245,   235,   548,   402,   508,   323,   400,   189,
     274,   492,   163,   235,   268,   173,   501,   235,   416,   354,
     411,   236,   237,   490,   236,   237,   477,   432,   236,   237,
     228,   235,   499,   486,   324,   244,   174,   190,   236,   237,
     235,   461,   236,   237,   235,   506,   439,   323,   189,   442,
     175,   337,   292,   203,   338,   206,   236,   237,   521,   235,
     210,   198,   340,   604,   320,   236,   237,   235,   281,   236,
     237,   522,   523,   356,   487,   186,   190,   199,   358,   226,
     488,   277,   384,   307,   236,   237,   333,   209,   509,   198,
     144,   145,   236,   237,   323,   375,   289,   435,   515,   230,
     198,   560,   450,   242,   198,   198,   451,   357,   188,   492,
     250,   566,   567,   568,   334,   533,   587,   537,   162,   163,
     188,   538,     8,   198,    10,   590,   373,   233,   198,   286,
     287,   377,   260,   135,   136,   329,   213,   599,   256,   344,
     345,   346,   257,   198,   302,   287,   198,   259,   198,   394,
     261,   395,     2,    31,     3,   341,     4,   312,   313,   343,
     387,   238,    38,   348,   249,    31,   251,   198,   491,   492,
     415,   359,   252,   262,    38,   263,   218,    20,   198,  -250,
     273,   420,  -251,   275,   555,   276,   198,   162,   163,   164,
     165,   157,   282,   283,   295,   609,   555,   297,   213,   294,
     159,    35,   296,   547,   386,   298,   301,    39,    40,    41,
      42,    43,   190,   305,   306,   397,   139,   140,   141,   142,
     309,   268,   315,   462,   190,   318,   311,   321,    55,   322,
      56,    57,    58,    59,   325,   326,    60,   327,   332,   218,
     348,   323,    61,    62,    63,    64,   331,   339,   342,   374,
     376,   159,   379,   449,   382,   383,   213,   359,   547,   396,
     547,    65,    66,   398,   403,    67,   188,   465,   409,   406,
     468,   510,   287,   417,   424,   430,   413,   467,   434,   431,
     437,   438,   278,   440,   446,   455,   457,   448,   459,   460,
     198,   463,   464,   466,   471,   478,   483,   472,   495,   496,
     500,   240,   503,   188,   453,   502,   505,   512,   348,   507,
     198,    31,   511,   517,   513,   514,   216,   518,   520,   198,
      38,   524,   527,   532,   541,   470,   528,   530,   474,   535,
     492,   550,   552,   561,   554,   274,   553,   563,   562,   565,
     526,   577,   189,   198,    56,    57,    58,    59,    31,   581,
     534,   588,   529,   589,   595,   198,   241,    38,   420,   592,
     198,   596,   198,   556,   597,   598,   606,   608,   603,   610,
     190,   612,   198,   198,   198,    65,    66,   613,   614,   189,
      69,    56,    57,    58,    59,   185,   584,   586,   605,   607,
     539,   504,   593,   349,   551,   571,   572,   227,   573,   569,
     408,   476,   519,   578,   316,   271,   285,   190,   290,   353,
     350,   574,    65,    66,   308,   317,   591,   419,   198,   493,
     433,   556,   364,   362,   368,   370,   367,   363,   436,     0,
       0,   365,     0,     0,     0,     0,     0,     0,   366,     0,
       0,     0,   594,     0,   369,     0,   601,     0,     0,     0,
     371,     0,   372,   600,   602,   576,   198,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,     0,     4,     0,
       5,     6,     7,   228,     8,     9,    10,    11,    12,    13,
      14,     0,   615,     0,    15,    16,    17,    18,    19,    20,
       0,    21,    22,    23,    24,     0,     0,     0,     0,     0,
       0,    25,     0,    26,    27,    28,    29,     0,    30,    31,
      32,    33,    34,    35,     0,    36,    37,     0,    38,    39,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     1,    67,     2,     0,
       3,     0,     4,   158,     0,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,    33,    34,    35,     0,     0,
      37,     0,    38,    39,    40,    41,    42,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       1,    67,     2,     0,     3,     0,     4,   280,     0,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,    33,
      34,    35,     0,     0,    37,     0,    38,    39,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     2,     0,     3,     0,
       4,    65,    66,     6,     7,    67,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,    33,    34,    35,     0,     0,    37,     0,
      38,    39,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       1,     0,     2,     0,     3,     0,   131,   585,     5,     6,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    35,     0,    36,    37,     0,    38,    39,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     1,     0,     2,     0,
       3,     0,   131,     0,     5,     6,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    35,     0,    36,
      37,     0,    38,    39,    40,    41,    42,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     1,     0,     2,     0,     3,     0,   131,     0,
       0,     6,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,    35,     0,     0,    37,     0,    38,    39,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,   178,     0,
       2,     0,     3,     0,   131,     0,     0,     6,     0,     0,
       0,     0,     0,    65,    66,     0,     0,    67,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,     0,   131,    31,     0,     6,     0,    35,
       0,     0,     0,     0,    38,    39,    40,    41,    42,    43,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,    31,     0,     0,     0,    35,
      61,    62,    63,    64,    38,    39,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,   352,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     2,   130,     3,     0,   131,     0,
       0,     6,   132,    56,   258,    58,   260,   135,   136,    65,
      66,   137,     0,    67,     0,     0,     0,     0,     0,    20,
       0,   138,   139,   140,   141,   142,   143,   144,   145,     0,
       0,     0,     0,     0,     0,     0,   146,   147,     0,    31,
       0,     0,     0,    35,     0,     0,     0,     0,    38,    39,
      40,    41,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,   132,    56,   133,    58,   134,   135,   136,    60,     0,
     137,     0,     0,     0,    61,    62,    63,    64,     0,     0,
     138,   139,   140,   141,   142,   143,   144,   145,     0,     0,
       0,     0,     0,    65,    66,   146,   147,    67,     2,     0,
       3,   155,   131,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    35,     0,     0,
       0,     0,    38,    39,    40,    41,    42,    43,     0,     0,
       0,     2,     0,     3,     0,   131,     0,     0,     6,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,   156,    20,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    65,    66,     0,
      35,    67,     0,     0,     0,    38,    39,    40,    41,    42,
      43,     0,     0,     2,     0,     3,     0,   131,     0,     0,
       6,     0,     0,     0,   211,   212,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,    20,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      65,    66,    35,     0,    67,     0,   328,    38,    39,    40,
      41,    42,    43,     0,     0,     2,     0,     3,   347,   131,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
      20,     0,     0,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    65,    66,    35,     0,    67,     0,     0,    38,
      39,    40,    41,    42,    43,     0,     0,     2,     0,     3,
       0,   131,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,    20,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    65,    66,    35,     0,    67,     0,
       0,    38,    39,    40,    41,    42,    43,     0,     0,     0,
       2,     0,     3,   385,   131,     0,     0,     6,     0,     0,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,   156,    20,     0,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    65,    66,     0,    35,
      67,     0,     0,     0,    38,    39,    40,    41,    42,    43,
       0,     0,     2,     0,     3,   155,   131,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,    20,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    65,
      66,    35,     0,    67,     0,     0,    38,    39,    40,    41,
      42,    43,     0,     0,     2,   452,     3,     0,   131,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,    20,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    65,    66,    35,     0,    67,     0,     0,    38,    39,
      40,    41,    42,    43,     0,     0,     2,     0,     3,   454,
     131,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,    20,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,    65,    66,    35,     0,    67,     0,     0,
      38,    39,    40,    41,    42,    43,     0,     0,     2,   469,
       3,     0,   131,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,    20,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    65,    66,    35,     0,    67,
       0,     0,    38,    39,    40,    41,    42,    43,     0,     0,
       2,     0,     3,     0,   131,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,    20,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    65,    66,    35,
       0,    67,     0,     0,    38,    39,    40,    41,    42,    43,
       0,     0,     2,     0,     3,     0,   131,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,    20,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     0,   131,     0,    31,     0,    65,
      66,    35,     0,    67,     0,     0,    38,    39,    40,    41,
      42,    43,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   291,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
      35,     0,    61,    62,    63,    64,    39,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,    67
};

static const yytype_int16 yycheck[] =
{
       9,     4,   283,     4,    69,    25,   319,   116,    25,   174,
      19,   117,    62,    63,    61,   412,   118,   247,   103,   119,
       5,    97,   184,   193,   127,    34,     5,   211,     7,     4,
      15,     8,    33,   305,     6,     5,     4,     4,   351,    63,
      60,    61,    10,    60,    29,    30,     4,     2,     3,   321,
       4,   127,    81,     5,    62,    63,     3,     6,   241,    14,
      51,    16,   322,   488,    43,    74,     6,   488,    37,    51,
      91,   490,    90,   101,    81,     6,    94,     5,   106,     6,
     109,   353,   354,   103,   481,   357,   103,   484,    43,   273,
      81,    76,     5,    10,   112,   116,   117,     9,    50,    81,
     124,     3,    51,   522,    83,    22,    85,    59,    82,    64,
      84,    81,    81,    60,   122,    92,    91,    92,   543,    91,
     545,     3,   107,    91,   545,    92,   439,     9,   293,    81,
     131,     4,    37,    91,   113,     5,     9,    91,   308,   242,
     302,   116,   117,   415,   116,   117,   406,   331,   116,   117,
     159,    91,   424,   413,   204,   240,     5,   109,   116,   117,
      91,     3,   116,   117,    91,   437,   349,     9,    81,   352,
       5,   221,   173,    81,   224,    81,   116,   117,   459,    91,
      81,   201,   229,   580,   201,   116,   117,    91,    92,   116,
     117,   463,   464,   243,     3,    24,   109,    26,   245,     0,
       9,   156,   278,   188,   116,   117,    81,    36,     3,   229,
     107,   108,   116,   117,     9,   265,   171,    92,   448,     5,
     240,   502,     4,   240,   244,   245,     8,   244,     5,     4,
     110,   512,   513,   514,   109,    10,   549,     4,    36,    37,
       5,     8,    15,   263,    17,    10,   263,     3,   268,    40,
      41,   268,    86,    87,    88,   210,   211,   570,   367,   235,
     236,   237,   368,   283,    40,    41,   286,   369,   288,   286,
     370,   288,     5,    50,     7,   230,     9,    90,    91,   234,
     281,     7,    59,   238,   100,    50,   111,   307,     3,     4,
     307,   246,   109,    93,    59,    89,    92,    30,   318,     6,
      64,   318,     6,     6,    81,     6,   326,    36,    37,    38,
      39,   266,    10,     5,     9,   596,    81,     3,   273,    81,
     323,    54,    81,   488,   279,    31,    81,    60,    61,    62,
      63,    64,   109,    81,    81,   290,   102,   103,   104,   105,
      92,   113,     7,   393,   109,     5,    43,    81,    81,    92,
      83,    84,    85,    86,    81,     5,    89,    81,     5,    92,
     315,     9,    95,    96,    97,    98,    65,    99,     3,     9,
      81,   374,     5,   374,     8,     7,   331,   332,   543,     6,
     545,   114,   115,     4,    22,   118,     5,   396,   113,     9,
     399,   441,    41,    81,    81,     5,    92,   398,    81,    58,
      81,     6,     8,     3,    81,     8,    81,    92,     4,     6,
     430,    81,    81,     3,    81,    81,    42,    12,     4,    30,
       9,    40,     6,     5,   379,     4,     6,     5,   383,   438,
     450,    50,     6,   450,     5,     5,   483,     6,    92,   459,
      59,    14,     6,    24,     9,   400,    92,    23,   403,     8,
       4,    81,    81,   503,     3,   456,    81,    23,     6,     3,
     469,    92,    81,   483,    83,    84,    85,    86,    50,     9,
     479,     3,   473,    81,     3,   495,    95,    59,   495,    77,
     500,     4,   502,   500,     6,     6,    10,     3,     8,     3,
     109,    10,   512,   513,   514,   114,   115,     6,     6,    81,
       0,    83,    84,    85,    86,    23,   543,   545,   581,   587,
     483,   430,   562,    95,   495,   524,   525,   582,   527,   520,
     300,   405,   456,   532,   197,   127,   169,   109,   172,   242,
     240,   528,   114,   115,   190,   198,   558,   311,   558,   420,
     332,   558,   250,   248,   256,   259,   255,   249,   336,    -1,
      -1,   251,    -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,
      -1,    -1,   563,    -1,   257,    -1,   575,    -1,    -1,    -1,
     261,    -1,   262,   574,   577,   530,   596,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,    -1,     9,    -1,
      11,    12,    13,   602,    15,    16,    17,    18,    19,    20,
      21,    -1,   611,    -1,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      81,    -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,     3,   118,     5,    -1,
       7,    -1,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    -1,    -1,
      57,    -1,    59,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
       3,   118,     5,    -1,     7,    -1,     9,    10,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,
       9,   114,   115,    12,    13,   118,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    -1,    -1,    57,    -1,
      59,    60,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
       3,    -1,     5,    -1,     7,    -1,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    -1,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,     3,    -1,     5,    -1,
       7,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,     3,    -1,     5,    -1,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,    -1,    -1,    57,    -1,    59,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      81,    -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,     3,    -1,
       5,    -1,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,    -1,     9,    50,    -1,    12,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    50,    -1,    -1,    -1,    54,
      95,    96,    97,    98,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,    -1,   118,    -1,    55,    81,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,     5,     6,     7,    -1,     9,    -1,
      -1,    12,    82,    83,    84,    85,    86,    87,    88,   114,
     115,    91,    -1,   118,    -1,    -1,    -1,    -1,    -1,    30,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    50,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,    -1,   114,   115,   116,   117,   118,     5,    -1,
       7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,     5,    -1,     7,    -1,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    92,    30,    -1,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,   114,   115,    -1,
      54,   118,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    -1,    -1,     5,    -1,     7,    -1,     9,    -1,    -1,
      12,    -1,    -1,    -1,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    -1,    -1,    89,    -1,    -1,    30,    -1,
      -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
     114,   115,    54,    -1,   118,    -1,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,     5,    -1,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,
      30,    -1,    -1,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,   114,   115,    54,    -1,   118,    -1,    -1,    59,
      60,    61,    62,    63,    64,    -1,    -1,     5,    -1,     7,
      -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    30,    -1,    -1,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   114,   115,    54,    -1,   118,    -1,
      -1,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
       5,    -1,     7,     8,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,    -1,
      -1,    89,    -1,    -1,    92,    30,    -1,    95,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,   114,   115,    -1,    54,
     118,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      -1,    -1,     5,    -1,     7,     8,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    30,    -1,    -1,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   114,
     115,    54,    -1,   118,    -1,    -1,    59,    60,    61,    62,
      63,    64,    -1,    -1,     5,     6,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    30,
      -1,    -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,   114,   115,    54,    -1,   118,    -1,    -1,    59,    60,
      61,    62,    63,    64,    -1,    -1,     5,    -1,     7,     8,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,
      -1,    30,    -1,    -1,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,   114,   115,    54,    -1,   118,    -1,    -1,
      59,    60,    61,    62,    63,    64,    -1,    -1,     5,     6,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,
      89,    -1,    -1,    30,    -1,    -1,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   114,   115,    54,    -1,   118,
      -1,    -1,    59,    60,    61,    62,    63,    64,    -1,    -1,
       5,    -1,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    30,    -1,    -1,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,   114,   115,    54,
      -1,   118,    -1,    -1,    59,    60,    61,    62,    63,    64,
      -1,    -1,     5,    -1,     7,    -1,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    30,    -1,    -1,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,     9,    -1,    50,    -1,   114,
     115,    54,    -1,   118,    -1,    -1,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,
      54,    -1,    95,    96,    97,    98,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,    -1,   118,    -1,    81,    -1,    83,
      84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,    -1,    -1,   118
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    32,    33,    34,    35,    42,    44,    45,    46,    47,
      49,    50,    51,    52,    53,    54,    56,    57,    59,    60,
      61,    62,    63,    64,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    81,    83,    84,    85,    86,
      89,    95,    96,    97,    98,   114,   115,   118,   126,   127,
     128,   130,   136,   139,   143,   148,   150,   151,   161,   162,
     163,   164,   166,   170,   172,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   189,   190,   192,   193,
     194,   206,   207,   210,   211,   212,   219,   221,   224,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   250,   253,   254,   255,   257,   261,
       6,     9,    82,    84,    86,    87,    88,    91,   101,   102,
     103,   104,   105,   106,   107,   108,   116,   117,   185,   188,
     208,   229,   230,   231,   232,     8,    92,   185,    10,   143,
     186,   191,    36,    37,    38,    39,   147,   199,   201,   202,
     203,     5,   163,     5,     5,     5,   185,   203,     3,   185,
     163,    81,     3,   129,   203,   129,   199,   200,     5,    81,
     109,   152,   154,   213,   214,   215,   217,   218,   219,   199,
     144,   203,   203,    81,   186,   163,    81,   249,    81,   199,
      81,    78,    79,   185,   256,   154,   152,   153,    92,   161,
     248,   260,   161,   248,   260,   185,     0,   128,   163,   203,
       5,     3,    60,     3,     4,    91,   116,   117,     7,   189,
      40,    95,   154,   209,   247,   203,    90,    94,   112,   100,
     110,   111,   109,   101,   106,   228,   229,   230,    84,   231,
      86,   232,    93,    89,   248,   260,     7,    43,   113,   187,
     189,   192,   253,    64,   186,     6,     6,   185,     8,    92,
      10,    92,    10,     5,   195,   201,    40,    41,   204,   185,
     177,    81,   186,   184,    81,     9,    81,     3,    31,   167,
     169,    81,    40,   204,   205,    81,    81,   203,   213,    92,
     187,    43,    90,    91,   216,     7,   193,   217,     5,   196,
     154,    81,    92,     9,   161,    81,     5,    81,    58,   185,
     256,    65,     5,    81,   109,   258,   259,   161,   161,    99,
     152,   185,     3,   185,   194,   194,   194,     8,   185,    95,
     209,   195,    55,   208,   253,     3,   161,   154,   152,   185,
     233,   234,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   154,     9,   161,    81,   154,   251,     5,
     252,   256,     8,     7,   189,     8,   185,   186,   154,   155,
     156,     6,    51,   197,   154,   154,     6,   185,     4,     6,
     184,     4,    92,    22,   174,   175,     9,   168,   167,   113,
     198,   204,   198,    92,   138,   154,   187,    81,   141,   215,
     154,   159,   160,   197,    81,   198,   141,   155,   157,   158,
       5,    58,   256,   233,    81,    92,   258,    81,     6,   195,
       3,   197,   195,   198,   198,   198,    81,   225,    92,   186,
       4,     8,     6,   185,     8,     8,     4,    81,   226,     4,
       6,     3,   161,    81,    81,   163,     3,   186,   163,     6,
     185,    81,    12,   220,   185,    10,   174,   141,    81,   171,
      51,    81,   142,    42,   137,   138,   141,     3,     9,   135,
     198,     3,     4,   226,   227,     4,    30,   145,   146,   198,
       9,     9,     4,     6,   158,     6,   198,   163,   197,     3,
     161,     6,     5,     5,     5,   234,    10,   154,     6,   191,
      92,   155,   198,   198,    14,     6,   163,     6,    92,   186,
      23,   173,    24,    10,   163,     8,   138,     4,     8,   153,
     138,     9,   131,   132,   133,   134,   162,   184,   212,   196,
      81,   159,    81,    81,     3,    81,   154,   222,   223,   165,
     155,   161,     6,    23,   149,     3,   155,   155,   155,   186,
     196,   163,   163,   163,   220,     6,   185,    92,   163,    51,
      81,     9,   127,   140,   131,    10,   133,   197,     3,    81,
      10,   222,    77,   161,   186,     3,     4,     6,     6,   197,
     186,   163,   143,     8,   138,   140,    10,   146,     3,   155,
       3,     6,    10,     6,     6,   163
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   125,   126,   126,   127,   127,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   137,
     137,   138,   138,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   145,   145,   146,   146,   147,   148,   149,
     149,   150,   150,   151,   152,   152,   153,   154,   155,   155,
     156,   156,   157,   157,   158,   158,   159,   160,   160,   161,
     161,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   165,   164,   166,   168,
     167,   169,   169,   170,   171,   171,   172,   173,   173,   174,
     175,   175,   176,   176,   177,   177,   178,   178,   178,   178,
     178,   178,   178,   178,   179,   180,   181,   181,   182,   182,
     183,   183,   183,   183,   184,   184,   185,   185,   186,   186,
     186,   186,   187,   187,   188,   188,   188,   188,   188,   189,
     189,   189,   190,   190,   190,   191,   191,   192,   192,   192,
     193,   193,   194,   194,   195,   195,   196,   196,   197,   197,
     198,   198,   198,   198,   199,   200,   200,   201,   201,   202,
     202,   203,   203,   203,   203,   204,   204,   205,   205,   206,
     206,   206,   206,   207,   208,   208,   208,   208,   208,   209,
     209,   209,   209,   210,   210,   211,   211,   211,   212,   212,
     212,   212,   212,   212,   213,   213,   214,   214,   215,   215,
     216,   216,   216,   217,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   225,   226,   227,
     227,   228,   228,   229,   229,   229,   229,   230,   230,   231,
     231,   232,   232,   232,   233,   233,   234,   234,   234,   235,
     235,   236,   236,   237,   237,   238,   238,   239,   239,   240,
     240,   241,   241,   242,   242,   243,   243,   244,   244,   245,
     245,   246,   246,   247,   247,   247,   247,   247,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   249,
     249,   250,   250,   251,   251,   252,   252,   253,   253,   254,
     255,   255,   255,   255,   255,   255,   256,   256,   256,   257,
     257,   258,   258,   259,   259,   260,   260,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     9,     8,     1,     1,
       1,     2,     1,     1,     1,     2,     3,     1,     5,     2,
       0,     0,     2,     5,     1,     0,     1,     3,     2,     4,
       1,     2,     4,     2,     2,     0,     1,     5,     6,     0,
       2,     1,     1,     7,     2,     1,     1,     1,     4,     2,
       1,     3,     1,     3,     1,     0,     2,     1,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     7,     2,     0,
       4,     1,     2,     3,     1,     0,     6,     2,     0,     5,
       1,     2,     7,     5,     1,     1,     5,     5,     6,     7,
       8,    10,     5,     7,     3,     2,     5,     7,     1,     1,
       3,     2,     3,     2,     2,     1,     1,     3,     1,     3,
       3,     3,     3,     0,     1,     1,     1,     1,     1,     3,
       4,     5,     2,     3,     2,     3,     5,     5,     4,     4,
       1,     1,     1,     4,     2,     1,     2,     1,     2,     1,
       3,     5,     3,     0,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     0,     2,     1,     5,
       5,     7,     6,     9,     1,     1,     1,     1,     1,     8,
       6,     6,     4,     1,     2,     3,     3,     4,     1,     1,
       1,     5,     5,     6,     1,     8,     2,     3,     1,     3,
       1,     1,     0,     2,     1,     2,     1,     1,     1,     0,
       1,     1,     2,     3,     1,     2,     7,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     5,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     5,     2,     2,     2,     3,     3,     2,     1,
       2,     2,     1,     1,     3,     3,     2,     1,     1,     3,
       1,     2,     2,     3,     2,     1,     1,     2,     3,     2,
       3,     1,     2,     1,     2,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     3,     1,     3,
       5,     3,     2,     2
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
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (arg);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
#line 179 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2516 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 180 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2522 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 183 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2531 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 187 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2540 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 193 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2546 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 194 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2552 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 195 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2558 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 196 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2564 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 197 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2570 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 198 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2576 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 199 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2582 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 200 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2588 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 201 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2594 "src/parser.c"
    break;

  case 15: /* class_flag: flag modifier  */
#line 204 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2600 "src/parser.c"
    break;

  case 16: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 207 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2611 "src/parser.c"
    break;

  case 17: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 214 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2623 "src/parser.c"
    break;

  case 18: /* trait_stmt: exp_stmt  */
#line 222 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2633 "src/parser.c"
    break;

  case 20: /* trait_stmt_list: trait_stmt  */
#line 227 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2642 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 231 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2651 "src/parser.c"
    break;

  case 22: /* trait_section: trait_stmt_list  */
#line 237 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2657 "src/parser.c"
    break;

  case 23: /* trait_section: func_def  */
#line 238 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2663 "src/parser.c"
    break;

  case 24: /* trait_ast: trait_section  */
#line 242 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2672 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_ast trait_section  */
#line 246 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2681 "src/parser.c"
    break;

  case 26: /* trait_body: "{" trait_ast "}"  */
#line 251 "src/gwion.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 2687 "src/parser.c"
    break;

  case 27: /* trait_body: ";"  */
#line 251 "src/gwion.y"
                                                   { (yyval.ast) = NULL; }
#line 2693 "src/parser.c"
    break;

  case 28: /* trait_def: "trait" opt_global "<identifier>" traits trait_body  */
#line 254 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2702 "src/parser.c"
    break;

  case 29: /* class_ext: "extends" type_decl_exp  */
#line 259 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2708 "src/parser.c"
    break;

  case 30: /* class_ext: %empty  */
#line 259 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2714 "src/parser.c"
    break;

  case 31: /* traits: %empty  */
#line 260 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2720 "src/parser.c"
    break;

  case 32: /* traits: ":" id_list  */
#line 260 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2726 "src/parser.c"
    break;

  case 33: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 262 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2734 "src/parser.c"
    break;

  case 35: /* class_body: %empty  */
#line 267 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2740 "src/parser.c"
    break;

  case 36: /* id_list: "<identifier>"  */
#line 270 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), Symbol, 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2749 "src/parser.c"
    break;

  case 37: /* id_list: id_list "," "<identifier>"  */
#line 275 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2758 "src/parser.c"
    break;

  case 38: /* specialized_list: "<identifier>" traits  */
#line 280 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2771 "src/parser.c"
    break;

  case 39: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 288 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2781 "src/parser.c"
    break;

  case 40: /* stmt_list: stmt  */
#line 294 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2790 "src/parser.c"
    break;

  case 41: /* stmt_list: stmt_list stmt  */
#line 298 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2799 "src/parser.c"
    break;

  case 42: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 303 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2806 "src/parser.c"
    break;

  case 43: /* _func_effects: "perform" "<identifier>"  */
#line 306 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2812 "src/parser.c"
    break;

  case 44: /* _func_effects: _func_effects "<identifier>"  */
#line 306 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2818 "src/parser.c"
    break;

  case 45: /* func_effects: %empty  */
#line 307 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2824 "src/parser.c"
    break;

  case 46: /* func_effects: _func_effects  */
#line 307 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2830 "src/parser.c"
    break;

  case 47: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 309 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2837 "src/parser.c"
    break;

  case 48: /* fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";"  */
#line 312 "src/gwion.y"
                                                                 {
  (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
  (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-4].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2848 "src/parser.c"
    break;

  case 49: /* typedef_when: %empty  */
#line 319 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2854 "src/parser.c"
    break;

  case 50: /* typedef_when: "when" binary_exp  */
#line 319 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2860 "src/parser.c"
    break;

  case 51: /* type_def_type: "typedef"  */
#line 320 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2866 "src/parser.c"
    break;

  case 52: /* type_def_type: "distinct"  */
#line 320 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2872 "src/parser.c"
    break;

  case 53: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 321 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2885 "src/parser.c"
    break;

  case 54: /* type_decl_array: type_decl array  */
#line 330 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2891 "src/parser.c"
    break;

  case 56: /* type_decl_exp: type_decl_array  */
#line 332 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2899 "src/parser.c"
    break;

  case 57: /* type_decl_empty: type_decl_array  */
#line 336 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2907 "src/parser.c"
    break;

  case 58: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 341 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2916 "src/parser.c"
    break;

  case 59: /* arg: type_decl_empty arg_decl  */
#line 345 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 2925 "src/parser.c"
    break;

  case 60: /* arg_list: arg  */
#line 350 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2935 "src/parser.c"
    break;

  case 61: /* arg_list: arg_list "," arg  */
#line 355 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2947 "src/parser.c"
    break;

  case 62: /* locale_arg: arg  */
#line 364 "src/gwion.y"
        {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 2);
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
       mp_vector_set((yyval.default_args).args, Arg, 1, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2963 "src/parser.c"
    break;

  case 63: /* locale_arg: locale_arg "," arg  */
#line 375 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2975 "src/parser.c"
    break;

  case 65: /* locale_list: %empty  */
#line 384 "src/gwion.y"
    {
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
    }
#line 2989 "src/parser.c"
    break;

  case 66: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 394 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 2995 "src/parser.c"
    break;

  case 67: /* fptr_list: fptr_arg  */
#line 396 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 3004 "src/parser.c"
    break;

  case 68: /* fptr_list: fptr_list "," fptr_arg  */
#line 400 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 3013 "src/parser.c"
    break;

  case 69: /* code_stmt: "{" "}"  */
#line 406 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 3020 "src/parser.c"
    break;

  case 70: /* code_stmt: "{" stmt_list "}"  */
#line 408 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 3027 "src/parser.c"
    break;

  case 71: /* stmt_pp: "<comment>"  */
#line 412 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 3033 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#include"  */
#line 413 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 3039 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#define"  */
#line 414 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 3045 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#pragma"  */
#line 415 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 3051 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#undef"  */
#line 416 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 3057 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#ifdef"  */
#line 417 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 3063 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#ifndef"  */
#line 418 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 3069 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#else"  */
#line 419 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 3075 "src/parser.c"
    break;

  case 79: /* stmt_pp: "#if"  */
#line 420 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 3081 "src/parser.c"
    break;

  case 80: /* stmt_pp: "\n"  */
#line 421 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 3087 "src/parser.c"
    break;

  case 81: /* stmt_pp: "import"  */
#line 422 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 3093 "src/parser.c"
    break;

  case 82: /* stmt_pp: LOCALE_INI "<identifier>" exp LOCALE_END  */
#line 423 "src/gwion.y"
                                 { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = (yyvsp[-1].exp), .xid = (yyvsp[-2].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-3]) }; }
#line 3100 "src/parser.c"
    break;

  case 83: /* stmt_pp: LOCALE_INI "<identifier>" LOCALE_END  */
#line 425 "src/gwion.y"
                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = (yyvsp[-1].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-2]) }; }
#line 3107 "src/parser.c"
    break;

  case 96: /* $@1: %empty  */
#line 443 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3113 "src/parser.c"
    break;

  case 97: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 443 "src/gwion.y"
                                                                             {
  struct Spread_Def spread = {
    .xid = (yyvsp[-5].sym),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
    .start_pos = (yylsp[-2])
  };
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_spread, .d = { .stmt_spread = spread }, .pos = (yylsp[-5])};
}
#line 3127 "src/parser.c"
    break;

  case 98: /* retry_stmt: "retry" ";"  */
#line 453 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3137 "src/parser.c"
    break;

  case 99: /* $@2: %empty  */
#line 458 "src/gwion.y"
                  { arg->handling = true; }
#line 3143 "src/parser.c"
    break;

  case 100: /* handler: "handle" $@2 opt_id stmt  */
#line 458 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3149 "src/parser.c"
    break;

  case 101: /* handler_list: handler  */
#line 459 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), Handler, 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3159 "src/parser.c"
    break;

  case 102: /* handler_list: handler_list handler  */
#line 464 "src/gwion.y"
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
#line 3180 "src/parser.c"
    break;

  case 103: /* try_stmt: "try" stmt handler_list  */
#line 480 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3189 "src/parser.c"
    break;

  case 105: /* opt_id: %empty  */
#line 485 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3195 "src/parser.c"
    break;

  case 106: /* enum_def: "enum" flag "<identifier>" "{" id_list "}"  */
#line 488 "src/gwion.y"
                                   {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
  }
#line 3204 "src/parser.c"
    break;

  case 107: /* when_exp: "when" exp  */
#line 493 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3210 "src/parser.c"
    break;

  case 108: /* when_exp: %empty  */
#line 493 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3216 "src/parser.c"
    break;

  case 109: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 496 "src/gwion.y"
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
#line 3232 "src/parser.c"
    break;

  case 110: /* match_list: match_case_stmt  */
#line 508 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3241 "src/parser.c"
    break;

  case 111: /* match_list: match_list match_case_stmt  */
#line 512 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3250 "src/parser.c"
    break;

  case 112: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 517 "src/gwion.y"
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
#line 3265 "src/parser.c"
    break;

  case 113: /* match_stmt: "match" exp "{" match_list "}"  */
#line 528 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3279 "src/parser.c"
    break;

  case 114: /* flow: "while"  */
#line 539 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3285 "src/parser.c"
    break;

  case 115: /* flow: "until"  */
#line 540 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3291 "src/parser.c"
    break;

  case 116: /* loop_stmt: flow "(" exp ")" stmt  */
#line 545 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3304 "src/parser.c"
    break;

  case 117: /* loop_stmt: "do" stmt flow exp ";"  */
#line 554 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3318 "src/parser.c"
    break;

  case 118: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 564 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3332 "src/parser.c"
    break;

  case 119: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 574 "src/gwion.y"
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
#line 3347 "src/parser.c"
    break;

  case 120: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 585 "src/gwion.y"
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
#line 3364 "src/parser.c"
    break;

  case 121: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 598 "src/gwion.y"
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
#line 3386 "src/parser.c"
    break;

  case 122: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 616 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3399 "src/parser.c"
    break;

  case 123: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 625 "src/gwion.y"
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
#line 3416 "src/parser.c"
    break;

  case 124: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 638 "src/gwion.y"
                                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_varloop,
  .d = { .stmt_varloop = {
    .exp = (yyvsp[-1].exp),
    .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  }},
  .pos = (yylsp[-2])
};}
#line 3428 "src/parser.c"
    break;

  case 125: /* defer_stmt: "defer" stmt  */
#line 646 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_defer,
    .d = { .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }},
    .pos = (yylsp[-1])
  };
}
#line 3438 "src/parser.c"
    break;

  case 126: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 654 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3451 "src/parser.c"
    break;

  case 127: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 663 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3465 "src/parser.c"
    break;

  case 128: /* breaks: "break"  */
#line 673 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3471 "src/parser.c"
    break;

  case 129: /* breaks: "continue"  */
#line 673 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3477 "src/parser.c"
    break;

  case 130: /* jump_stmt: "return" exp ";"  */
#line 675 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3487 "src/parser.c"
    break;

  case 131: /* jump_stmt: "return" ";"  */
#line 680 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3496 "src/parser.c"
    break;

  case 132: /* jump_stmt: breaks "<integer>" ";"  */
#line 684 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].lval) }},
      .pos = (yylsp[-2])
    };
  }
#line 3506 "src/parser.c"
    break;

  case 133: /* jump_stmt: breaks ";"  */
#line 689 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3515 "src/parser.c"
    break;

  case 134: /* exp_stmt: exp ";"  */
#line 695 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3525 "src/parser.c"
    break;

  case 135: /* exp_stmt: ";"  */
#line 700 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3534 "src/parser.c"
    break;

  case 136: /* exp: binary_exp  */
#line 706 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3540 "src/parser.c"
    break;

  case 137: /* exp: binary_exp "," exp  */
#line 708 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3552 "src/parser.c"
    break;

  case 139: /* binary_exp: binary_exp "@" decl_exp  */
#line 719 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3558 "src/parser.c"
    break;

  case 140: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 720 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3564 "src/parser.c"
    break;

  case 141: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 721 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3570 "src/parser.c"
    break;

  case 142: /* call_template: ":[" type_list "]"  */
#line 724 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3576 "src/parser.c"
    break;

  case 143: /* call_template: %empty  */
#line 724 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3582 "src/parser.c"
    break;

  case 149: /* array_exp: "[" exp "]"  */
#line 729 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3588 "src/parser.c"
    break;

  case 150: /* array_exp: "[" exp "]" array_exp  */
#line 730 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3596 "src/parser.c"
    break;

  case 151: /* array_exp: "[" exp "]" "[" "]"  */
#line 733 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3602 "src/parser.c"
    break;

  case 152: /* array_empty: "[" "]"  */
#line 737 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3608 "src/parser.c"
    break;

  case 153: /* array_empty: array_empty "[" "]"  */
#line 738 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3614 "src/parser.c"
    break;

  case 154: /* array_empty: array_empty array_exp  */
#line 739 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3620 "src/parser.c"
    break;

  case 155: /* dict_list: binary_exp ":" binary_exp  */
#line 743 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3626 "src/parser.c"
    break;

  case 156: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 744 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3632 "src/parser.c"
    break;

  case 157: /* range: "[" exp ":" exp "]"  */
#line 747 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3638 "src/parser.c"
    break;

  case 158: /* range: "[" exp ":" "]"  */
#line 748 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3644 "src/parser.c"
    break;

  case 159: /* range: "[" ":" exp "]"  */
#line 749 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3650 "src/parser.c"
    break;

  case 163: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 755 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3656 "src/parser.c"
    break;

  case 164: /* func_args: "(" arg_list  */
#line 757 "src/gwion.y"
                          { (yyval.default_args) = (yyvsp[0].default_args); }
#line 3662 "src/parser.c"
    break;

  case 165: /* func_args: "("  */
#line 757 "src/gwion.y"
                                             { (yyval.default_args) = (struct ParserArg){}; }
#line 3668 "src/parser.c"
    break;

  case 166: /* fptr_args: "(" fptr_list  */
#line 758 "src/gwion.y"
                         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3674 "src/parser.c"
    break;

  case 167: /* fptr_args: "("  */
#line 758 "src/gwion.y"
                                            { (yyval.arg_list) = NULL; }
#line 3680 "src/parser.c"
    break;

  case 168: /* arg_type: "..." ")"  */
#line 759 "src/gwion.y"
                    { (yyval.fbflag) = fbflag_variadic; }
#line 3686 "src/parser.c"
    break;

  case 169: /* arg_type: ")"  */
#line 759 "src/gwion.y"
                                                   { (yyval.fbflag) = 0; }
#line 3692 "src/parser.c"
    break;

  case 170: /* decl_template: ":[" specialized_list "]"  */
#line 761 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3698 "src/parser.c"
    break;

  case 171: /* decl_template: ":[" specialized_list "," "..." "]"  */
#line 762 "src/gwion.y"
                                                    {
  (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  Specialized spec = { .xid = insert_symbol("...") };
  mp_vector_add(mpool(arg), &(yyval.specialized_list), Specialized, spec);

}
#line 3709 "src/parser.c"
    break;

  case 172: /* decl_template: ":[" "..." "]"  */
#line 768 "src/gwion.y"
                                {
  Specialized spec = { .xid = insert_symbol("...") };
  (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
  mp_vector_set((yyval.specialized_list), Specialized, 0, spec);
}
#line 3719 "src/parser.c"
    break;

  case 173: /* decl_template: %empty  */
#line 773 "src/gwion.y"
               { (yyval.specialized_list) = NULL; }
#line 3725 "src/parser.c"
    break;

  case 174: /* global: "global"  */
#line 775 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3731 "src/parser.c"
    break;

  case 176: /* opt_global: %empty  */
#line 776 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3737 "src/parser.c"
    break;

  case 177: /* storage_flag: "static"  */
#line 778 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3743 "src/parser.c"
    break;

  case 179: /* access_flag: "private"  */
#line 780 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3749 "src/parser.c"
    break;

  case 180: /* access_flag: "protect"  */
#line 781 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3755 "src/parser.c"
    break;

  case 181: /* flag: access_flag  */
#line 784 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3761 "src/parser.c"
    break;

  case 182: /* flag: storage_flag  */
#line 785 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3767 "src/parser.c"
    break;

  case 183: /* flag: access_flag storage_flag  */
#line 786 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3773 "src/parser.c"
    break;

  case 184: /* flag: %empty  */
#line 787 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3779 "src/parser.c"
    break;

  case 185: /* final: "final"  */
#line 790 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3785 "src/parser.c"
    break;

  case 186: /* final: %empty  */
#line 790 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3791 "src/parser.c"
    break;

  case 187: /* modifier: "abstract" final  */
#line 792 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3797 "src/parser.c"
    break;

  case 189: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 795 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].default_args).args;
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag) | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), &(yyvsp[0].stmt));
  }
#line 3807 "src/parser.c"
    break;

  case 190: /* func_def_base: "fun" func_base func_args arg_type ";"  */
#line 800 "src/gwion.y"
                                              {
    if((yyvsp[-2].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-3].func_base)->args = (yyvsp[-2].default_args).args;
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    SET_FLAG((yyvsp[-3].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), NULL);
  }
#line 3820 "src/parser.c"
    break;

  case 191: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_stmt  */
#line 808 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)));
  }
#line 3831 "src/parser.c"
    break;

  case 192: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_stmt  */
#line 814 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)));
  }
#line 3842 "src/parser.c"
    break;

  case 193: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 823 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3855 "src/parser.c"
    break;

  case 199: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 835 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3869 "src/parser.c"
    break;

  case 200: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 845 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3882 "src/parser.c"
    break;

  case 201: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 854 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3896 "src/parser.c"
    break;

  case 202: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 864 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].default_args).args, ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3905 "src/parser.c"
    break;

  case 203: /* operator: "operator"  */
#line 869 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3911 "src/parser.c"
    break;

  case 204: /* operator: "operator" global  */
#line 869 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3917 "src/parser.c"
    break;

  case 205: /* op_def: operator op_base code_stmt  */
#line 872 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), &(yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3923 "src/parser.c"
    break;

  case 206: /* op_def: operator op_base ";"  */
#line 874 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3929 "src/parser.c"
    break;

  case 207: /* op_def: operator "abstract" op_base ";"  */
#line 876 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3935 "src/parser.c"
    break;

  case 211: /* func_def: operator "new" func_args arg_type code_stmt  */
#line 880 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-4].flag), (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag) | (yyvsp[-2].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, &(yyvsp[0].stmt));
    }
#line 3945 "src/parser.c"
    break;

  case 212: /* func_def: operator "new" func_args arg_type ";"  */
#line 886 "src/gwion.y"
    {
      if((yyvsp[-2].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3957 "src/parser.c"
    break;

  case 213: /* func_def: operator "abstract" "new" func_args arg_type ";"  */
#line 894 "src/gwion.y"
    {
      if((yyvsp[-2].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 3969 "src/parser.c"
    break;

  case 214: /* type_decl_base: "<identifier>"  */
#line 903 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3975 "src/parser.c"
    break;

  case 215: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args arg_type func_effects ")"  */
#line 904 "src/gwion.y"
                                                                               {
      const Symbol name = sig_name(arg, (yylsp[-5]).first);
      (yyval.type_decl) = new_type_decl(mpool(arg), name, (yylsp[-7]));
      Func_Base *fb = new_func_base(mpool(arg), (yyvsp[-5].type_decl), name, NULL, (yyvsp[-6].flag), (yylsp[-7]));
      if((yyvsp[-4].specialized_list))
        fb->tmpl = new_tmpl(mpool(arg), (yyvsp[-4].specialized_list));
      fb->args = (yyvsp[-3].arg_list);
      fb->fbflag |= (yyvsp[-2].fbflag);
      const Fptr_Def fptr = new_fptr_def(mpool(arg), fb);
      fptr->base->effects.ptr = (yyvsp[-1].vector).ptr;
      (yyval.type_decl)->fptr = fptr;
  }
#line 3992 "src/parser.c"
    break;

  case 216: /* type_decl_tmpl: type_decl_base call_template  */
#line 919 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3998 "src/parser.c"
    break;

  case 217: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 920 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4004 "src/parser.c"
    break;

  case 219: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 925 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4010 "src/parser.c"
    break;

  case 220: /* option: "?"  */
#line 928 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4016 "src/parser.c"
    break;

  case 221: /* option: OPTIONS  */
#line 928 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4022 "src/parser.c"
    break;

  case 222: /* option: %empty  */
#line 928 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 4028 "src/parser.c"
    break;

  case 223: /* type_decl_opt: type_decl_noflag option  */
#line 929 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4034 "src/parser.c"
    break;

  case 225: /* type_decl: type_decl_flag type_decl_opt  */
#line 930 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4040 "src/parser.c"
    break;

  case 226: /* type_decl_flag: "late"  */
#line 933 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4046 "src/parser.c"
    break;

  case 227: /* type_decl_flag: "const"  */
#line 934 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4052 "src/parser.c"
    break;

  case 228: /* opt_var: "var"  */
#line 936 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4058 "src/parser.c"
    break;

  case 229: /* opt_var: %empty  */
#line 936 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4064 "src/parser.c"
    break;

  case 230: /* type_decl_flag2: "var"  */
#line 938 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4070 "src/parser.c"
    break;

  case 232: /* union_decl: "<identifier>" ";"  */
#line 941 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 4079 "src/parser.c"
    break;

  case 233: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 945 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 4085 "src/parser.c"
    break;

  case 234: /* union_list: union_decl  */
#line 947 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), Union_Member, 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 4094 "src/parser.c"
    break;

  case 235: /* union_list: union_list union_decl  */
#line 951 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 4103 "src/parser.c"
    break;

  case 236: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 957 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4115 "src/parser.c"
    break;

  case 237: /* var_decl: "<identifier>"  */
#line 966 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4121 "src/parser.c"
    break;

  case 238: /* arg_decl: "<identifier>"  */
#line 968 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4127 "src/parser.c"
    break;

  case 240: /* fptr_arg_decl: %empty  */
#line 969 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4133 "src/parser.c"
    break;

  case 254: /* opt_exp: exp  */
#line 977 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4139 "src/parser.c"
    break;

  case 255: /* opt_exp: %empty  */
#line 977 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4145 "src/parser.c"
    break;

  case 257: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 980 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4151 "src/parser.c"
    break;

  case 258: /* con_exp: log_or_exp "?:" con_exp  */
#line 982 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4157 "src/parser.c"
    break;

  case 260: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 984 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4163 "src/parser.c"
    break;

  case 262: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 985 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4169 "src/parser.c"
    break;

  case 264: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 986 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4175 "src/parser.c"
    break;

  case 266: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 987 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4181 "src/parser.c"
    break;

  case 268: /* and_exp: and_exp "&" eq_exp  */
#line 988 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4187 "src/parser.c"
    break;

  case 270: /* eq_exp: eq_exp eq_op rel_exp  */
#line 989 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4193 "src/parser.c"
    break;

  case 272: /* rel_exp: rel_exp rel_op shift_exp  */
#line 990 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4199 "src/parser.c"
    break;

  case 274: /* shift_exp: shift_exp shift_op add_exp  */
#line 991 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4205 "src/parser.c"
    break;

  case 276: /* add_exp: add_exp add_op mul_exp  */
#line 992 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4211 "src/parser.c"
    break;

  case 278: /* mul_exp: mul_exp mul_op dur_exp  */
#line 993 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4217 "src/parser.c"
    break;

  case 280: /* dur_exp: dur_exp "::" cast_exp  */
#line 994 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4223 "src/parser.c"
    break;

  case 282: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 997 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4229 "src/parser.c"
    break;

  case 289: /* unary_exp: unary_op unary_exp  */
#line 1004 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4235 "src/parser.c"
    break;

  case 290: /* unary_exp: "spork" unary_exp  */
#line 1005 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4241 "src/parser.c"
    break;

  case 291: /* unary_exp: "fork" unary_exp  */
#line 1006 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4247 "src/parser.c"
    break;

  case 292: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 1007 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4255 "src/parser.c"
    break;

  case 293: /* unary_exp: "new" type_decl_exp  */
#line 1010 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4261 "src/parser.c"
    break;

  case 294: /* unary_exp: "spork" code_stmt  */
#line 1011 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), &(yyvsp[0].stmt), (yylsp[-1])); }
#line 4267 "src/parser.c"
    break;

  case 295: /* unary_exp: "fork" code_stmt  */
#line 1012 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), &(yyvsp[0].stmt), (yylsp[-1])); }
#line 4273 "src/parser.c"
    break;

  case 296: /* unary_exp: "spork" captures code_stmt  */
#line 1013 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), &(yyvsp[0].stmt), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4279 "src/parser.c"
    break;

  case 297: /* unary_exp: "fork" captures code_stmt  */
#line 1014 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), &(yyvsp[0].stmt), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4285 "src/parser.c"
    break;

  case 298: /* unary_exp: "$" type_decl_empty  */
#line 1015 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4291 "src/parser.c"
    break;

  case 299: /* lambda_list: "<identifier>"  */
#line 1018 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4301 "src/parser.c"
    break;

  case 300: /* lambda_list: lambda_list "<identifier>"  */
#line 1023 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4311 "src/parser.c"
    break;

  case 301: /* lambda_arg: "\\" lambda_list  */
#line 1028 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4317 "src/parser.c"
    break;

  case 302: /* lambda_arg: "\\"  */
#line 1028 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4323 "src/parser.c"
    break;

  case 303: /* type_list: type_decl_empty  */
#line 1031 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), Type_Decl*, 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4332 "src/parser.c"
    break;

  case 304: /* type_list: type_list "," type_decl_empty  */
#line 1035 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4341 "src/parser.c"
    break;

  case 305: /* call_paren: "(" exp ")"  */
#line 1041 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4347 "src/parser.c"
    break;

  case 306: /* call_paren: "(" ")"  */
#line 1041 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4353 "src/parser.c"
    break;

  case 309: /* dot_exp: post_exp "." "<identifier>"  */
#line 1045 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4366 "src/parser.c"
    break;

  case 311: /* post_exp: post_exp array_exp  */
#line 1056 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4372 "src/parser.c"
    break;

  case 312: /* post_exp: post_exp range  */
#line 1058 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4378 "src/parser.c"
    break;

  case 313: /* post_exp: post_exp call_template call_paren  */
#line 1060 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4385 "src/parser.c"
    break;

  case 314: /* post_exp: post_exp post_op  */
#line 1063 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4391 "src/parser.c"
    break;

  case 315: /* post_exp: dot_exp  */
#line 1064 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4397 "src/parser.c"
    break;

  case 316: /* interp_exp: "<interp string end>"  */
#line 1068 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4403 "src/parser.c"
    break;

  case 317: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1069 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4409 "src/parser.c"
    break;

  case 318: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1070 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4415 "src/parser.c"
    break;

  case 319: /* interp: "${" interp_exp  */
#line 1072 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4421 "src/parser.c"
    break;

  case 320: /* interp: interp "${" interp_exp  */
#line 1073 "src/gwion.y"
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
#line 4436 "src/parser.c"
    break;

  case 321: /* capture: "<identifier>"  */
#line 1084 "src/gwion.y"
            { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .pos = (yylsp[0]) };}
#line 4442 "src/parser.c"
    break;

  case 322: /* capture: "&" "<identifier>"  */
#line 1084 "src/gwion.y"
                                                                { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .is_ref = true, .pos = (yylsp[0]) }; }
#line 4448 "src/parser.c"
    break;

  case 323: /* _captures: capture  */
#line 1086 "src/gwion.y"
                   { (yyval.captures) = new_mp_vector(mpool(arg), Capture, 1); mp_vector_set((yyval.captures), Capture, 0, (yyvsp[0].capture)); }
#line 4454 "src/parser.c"
    break;

  case 324: /* _captures: _captures capture  */
#line 1087 "src/gwion.y"
                            { mp_vector_add(mpool(arg), &(yyvsp[-1].captures), Capture, (yyvsp[0].capture)); (yyval.captures) = (yyvsp[-1].captures); }
#line 4460 "src/parser.c"
    break;

  case 325: /* captures: ":" _captures ":"  */
#line 1088 "src/gwion.y"
                            { (yyval.captures) = (yyvsp[-1].captures); }
#line 4466 "src/parser.c"
    break;

  case 326: /* captures: %empty  */
#line 1088 "src/gwion.y"
                                            { (yyval.captures) = NULL; }
#line 4472 "src/parser.c"
    break;

  case 327: /* prim_exp: "<identifier>"  */
#line 1090 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4478 "src/parser.c"
    break;

  case 328: /* prim_exp: "<integer>"  */
#line 1091 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 4484 "src/parser.c"
    break;

  case 329: /* prim_exp: "<float>"  */
#line 1092 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4490 "src/parser.c"
    break;

  case 330: /* prim_exp: interp  */
#line 1093 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4496 "src/parser.c"
    break;

  case 331: /* prim_exp: "<litteral string>"  */
#line 1094 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4502 "src/parser.c"
    break;

  case 332: /* prim_exp: "<litteral char>"  */
#line 1095 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4508 "src/parser.c"
    break;

  case 333: /* prim_exp: array  */
#line 1096 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 4514 "src/parser.c"
    break;

  case 334: /* prim_exp: "{" dict_list "}"  */
#line 1097 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4520 "src/parser.c"
    break;

  case 335: /* prim_exp: range  */
#line 1098 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4526 "src/parser.c"
    break;

  case 336: /* prim_exp: "<<<" exp ">>>"  */
#line 1099 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4532 "src/parser.c"
    break;

  case 337: /* prim_exp: "(" exp ")"  */
#line 1100 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4538 "src/parser.c"
    break;

  case 338: /* prim_exp: "`foo`"  */
#line 1101 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last = { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4549 "src/parser.c"
    break;

  case 339: /* prim_exp: lambda_arg captures code_stmt  */
#line 1107 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-2]).first), (yyvsp[-2].arg_list), &(yyvsp[0].stmt), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4555 "src/parser.c"
    break;

  case 340: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1108 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg->st, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4561 "src/parser.c"
    break;

  case 341: /* prim_exp: "(" op_op ")"  */
#line 1109 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 4567 "src/parser.c"
    break;

  case 342: /* prim_exp: "perform" "<identifier>"  */
#line 1110 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4573 "src/parser.c"
    break;

  case 343: /* prim_exp: "(" ")"  */
#line 1111 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4579 "src/parser.c"
    break;


#line 4583 "src/parser.c"

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

#line 1113 "src/gwion.y"

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
