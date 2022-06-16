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
  YYSYMBOL_INTERP_LIT = 77,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 78,                /* "<interp string end>"  */
  YYSYMBOL_79_operator_id_ = 79,           /* "@<operator id>"  */
  YYSYMBOL_ID = 80,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 81,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 82,                  /* "++"  */
  YYSYMBOL_MINUS = 83,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 84,                /* "--"  */
  YYSYMBOL_TIMES = 85,                     /* "*"  */
  YYSYMBOL_DIVIDE = 86,                    /* "/"  */
  YYSYMBOL_PERCENT = 87,                   /* "%"  */
  YYSYMBOL_DOLLAR = 88,                    /* "$"  */
  YYSYMBOL_QUESTION = 89,                  /* "?"  */
  YYSYMBOL_OPTIONS = 90,                   /* OPTIONS  */
  YYSYMBOL_COLON = 91,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 92,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 93,             /* "?:"  */
  YYSYMBOL_NEW = 94,                       /* "new"  */
  YYSYMBOL_SPORK = 95,                     /* "spork"  */
  YYSYMBOL_FORK = 96,                      /* "fork"  */
  YYSYMBOL_L_HACK = 97,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 98,                    /* ">>>"  */
  YYSYMBOL_AND = 99,                       /* "&&"  */
  YYSYMBOL_EQ = 100,                       /* "=="  */
  YYSYMBOL_GE = 101,                       /* ">="  */
  YYSYMBOL_GT = 102,                       /* ">"  */
  YYSYMBOL_LE = 103,                       /* "<="  */
  YYSYMBOL_LT = 104,                       /* "<"  */
  YYSYMBOL_NEQ = 105,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 106,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 107,              /* ">>"  */
  YYSYMBOL_S_AND = 108,                    /* "&"  */
  YYSYMBOL_S_OR = 109,                     /* "|"  */
  YYSYMBOL_S_XOR = 110,                    /* "^"  */
  YYSYMBOL_OR = 111,                       /* "||"  */
  YYSYMBOL_TMPL = 112,                     /* ":["  */
  YYSYMBOL_TILDA = 113,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 114,              /* "!"  */
  YYSYMBOL_AROBASE = 115,                  /* "@"  */
  YYSYMBOL_DYNOP = 116,                    /* "<dynamic_operator>"  */
  YYSYMBOL_LOCALE_EXP = 117,               /* "`foo`"  */
  YYSYMBOL_RANGE_EMPTY = 118,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 119,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 120,                   /* UTIMES  */
  YYSYMBOL_121_ = 121,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 122,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 123,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 124,                 /* $accept  */
  YYSYMBOL_prg = 125,                      /* prg  */
  YYSYMBOL_ast = 126,                      /* ast  */
  YYSYMBOL_section = 127,                  /* section  */
  YYSYMBOL_class_flag = 128,               /* class_flag  */
  YYSYMBOL_class_def = 129,                /* class_def  */
  YYSYMBOL_trait_stmt = 130,               /* trait_stmt  */
  YYSYMBOL_trait_stmt_list = 131,          /* trait_stmt_list  */
  YYSYMBOL_trait_section = 132,            /* trait_section  */
  YYSYMBOL_trait_ast = 133,                /* trait_ast  */
  YYSYMBOL_trait_body = 134,               /* trait_body  */
  YYSYMBOL_trait_def = 135,                /* trait_def  */
  YYSYMBOL_class_ext = 136,                /* class_ext  */
  YYSYMBOL_traits = 137,                   /* traits  */
  YYSYMBOL_extend_def = 138,               /* extend_def  */
  YYSYMBOL_class_body = 139,               /* class_body  */
  YYSYMBOL_id_list = 140,                  /* id_list  */
  YYSYMBOL_specialized_list = 141,         /* specialized_list  */
  YYSYMBOL_stmt_list = 142,                /* stmt_list  */
  YYSYMBOL_fptr_base = 143,                /* fptr_base  */
  YYSYMBOL__func_effects = 144,            /* _func_effects  */
  YYSYMBOL_func_effects = 145,             /* func_effects  */
  YYSYMBOL_func_base = 146,                /* func_base  */
  YYSYMBOL_fptr_def = 147,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 148,             /* typedef_when  */
  YYSYMBOL_type_def_type = 149,            /* type_def_type  */
  YYSYMBOL_type_def = 150,                 /* type_def  */
  YYSYMBOL_type_decl_array = 151,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 152,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 153,          /* type_decl_empty  */
  YYSYMBOL_arg = 154,                      /* arg  */
  YYSYMBOL_arg_list = 155,                 /* arg_list  */
  YYSYMBOL_locale_arg = 156,               /* locale_arg  */
  YYSYMBOL_locale_list = 157,              /* locale_list  */
  YYSYMBOL_fptr_arg = 158,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 159,                /* fptr_list  */
  YYSYMBOL_code_stmt = 160,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 161,                  /* stmt_pp  */
  YYSYMBOL_stmt = 162,                     /* stmt  */
  YYSYMBOL_retry_stmt = 163,               /* retry_stmt  */
  YYSYMBOL_handler = 164,                  /* handler  */
  YYSYMBOL_165_1 = 165,                    /* $@1  */
  YYSYMBOL_handler_list = 166,             /* handler_list  */
  YYSYMBOL_try_stmt = 167,                 /* try_stmt  */
  YYSYMBOL_opt_id = 168,                   /* opt_id  */
  YYSYMBOL_enum_def = 169,                 /* enum_def  */
  YYSYMBOL_when_exp = 170,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 171,          /* match_case_stmt  */
  YYSYMBOL_match_list = 172,               /* match_list  */
  YYSYMBOL_match_stmt = 173,               /* match_stmt  */
  YYSYMBOL_flow = 174,                     /* flow  */
  YYSYMBOL_loop_stmt = 175,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 176,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 177,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 178,           /* selection_stmt  */
  YYSYMBOL_breaks = 179,                   /* breaks  */
  YYSYMBOL_jump_stmt = 180,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 181,                 /* exp_stmt  */
  YYSYMBOL_exp = 182,                      /* exp  */
  YYSYMBOL_binary_exp = 183,               /* binary_exp  */
  YYSYMBOL_call_template = 184,            /* call_template  */
  YYSYMBOL_op = 185,                       /* op  */
  YYSYMBOL_array_exp = 186,                /* array_exp  */
  YYSYMBOL_array_empty = 187,              /* array_empty  */
  YYSYMBOL_dict_list = 188,                /* dict_list  */
  YYSYMBOL_range = 189,                    /* range  */
  YYSYMBOL_array = 190,                    /* array  */
  YYSYMBOL_decl_exp = 191,                 /* decl_exp  */
  YYSYMBOL_func_args = 192,                /* func_args  */
  YYSYMBOL_fptr_args = 193,                /* fptr_args  */
  YYSYMBOL_arg_type = 194,                 /* arg_type  */
  YYSYMBOL_decl_template = 195,            /* decl_template  */
  YYSYMBOL_global = 196,                   /* global  */
  YYSYMBOL_opt_global = 197,               /* opt_global  */
  YYSYMBOL_storage_flag = 198,             /* storage_flag  */
  YYSYMBOL_access_flag = 199,              /* access_flag  */
  YYSYMBOL_flag = 200,                     /* flag  */
  YYSYMBOL_final = 201,                    /* final  */
  YYSYMBOL_modifier = 202,                 /* modifier  */
  YYSYMBOL_func_def_base = 203,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 204,            /* abstract_fdef  */
  YYSYMBOL_op_op = 205,                    /* op_op  */
  YYSYMBOL_op_base = 206,                  /* op_base  */
  YYSYMBOL_operator = 207,                 /* operator  */
  YYSYMBOL_op_def = 208,                   /* op_def  */
  YYSYMBOL_func_def = 209,                 /* func_def  */
  YYSYMBOL_type_decl_base = 210,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 211,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 212,         /* type_decl_noflag  */
  YYSYMBOL_option = 213,                   /* option  */
  YYSYMBOL_type_decl_opt = 214,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 215,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 216,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 217,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 218,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 219,               /* union_decl  */
  YYSYMBOL_union_list = 220,               /* union_list  */
  YYSYMBOL_union_def = 221,                /* union_def  */
  YYSYMBOL_var_decl = 222,                 /* var_decl  */
  YYSYMBOL_arg_decl = 223,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 224,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 225,                    /* eq_op  */
  YYSYMBOL_rel_op = 226,                   /* rel_op  */
  YYSYMBOL_shift_op = 227,                 /* shift_op  */
  YYSYMBOL_add_op = 228,                   /* add_op  */
  YYSYMBOL_mul_op = 229,                   /* mul_op  */
  YYSYMBOL_opt_exp = 230,                  /* opt_exp  */
  YYSYMBOL_con_exp = 231,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 232,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 233,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 234,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 235,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 236,                  /* and_exp  */
  YYSYMBOL_eq_exp = 237,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 238,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 239,                /* shift_exp  */
  YYSYMBOL_add_exp = 240,                  /* add_exp  */
  YYSYMBOL_mul_exp = 241,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 242,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 243,                 /* cast_exp  */
  YYSYMBOL_unary_op = 244,                 /* unary_op  */
  YYSYMBOL_unary_exp = 245,                /* unary_exp  */
  YYSYMBOL_lambda_list = 246,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 247,               /* lambda_arg  */
  YYSYMBOL_type_list = 248,                /* type_list  */
  YYSYMBOL_call_paren = 249,               /* call_paren  */
  YYSYMBOL_post_op = 250,                  /* post_op  */
  YYSYMBOL_dot_exp = 251,                  /* dot_exp  */
  YYSYMBOL_post_exp = 252,                 /* post_exp  */
  YYSYMBOL_interp_exp = 253,               /* interp_exp  */
  YYSYMBOL_interp = 254,                   /* interp  */
  YYSYMBOL_capture = 255,                  /* capture  */
  YYSYMBOL__captures = 256,                /* _captures  */
  YYSYMBOL_captures = 257,                 /* captures  */
  YYSYMBOL_prim_exp = 258                  /* prim_exp  */
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
#define YYFINAL  223
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2268

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  124
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  135
/* YYNRULES -- Number of rules.  */
#define YYNRULES  338
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  604

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   378


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
     115,   116,   117,   118,   119,   120,   121,   122,   123
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   177,   177,   178,   181,   185,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   202,   204,   211,   220,   224,
     225,   229,   235,   236,   240,   244,   249,   249,   251,   257,
     257,   258,   258,   260,   265,   265,   267,   272,   278,   286,
     292,   296,   301,   304,   304,   305,   305,   307,   310,   317,
     317,   318,   318,   319,   328,   328,   330,   334,   339,   343,
     348,   353,   362,   373,   381,   382,   392,   394,   398,   404,
     406,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   423,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   440,   445,   445,   446,   451,
     467,   472,   472,   475,   480,   480,   483,   495,   499,   504,
     515,   526,   527,   531,   540,   550,   560,   571,   584,   602,
     611,   625,   633,   640,   649,   660,   660,   662,   667,   671,
     676,   682,   687,   693,   694,   705,   706,   707,   708,   711,
     711,   713,   713,   713,   713,   713,   716,   717,   720,   724,
     725,   726,   730,   731,   734,   735,   736,   740,   740,   741,
     742,   744,   744,   745,   745,   746,   746,   748,   748,   750,
     751,   751,   753,   753,   755,   756,   759,   760,   761,   762,
     765,   765,   767,   767,   770,   775,   783,   789,   797,   807,
     807,   807,   807,   807,   809,   819,   828,   838,   844,   844,
     846,   848,   850,   853,   853,   853,   854,   860,   868,   878,
     879,   894,   895,   899,   900,   903,   903,   903,   904,   905,
     905,   908,   909,   911,   911,   913,   913,   916,   920,   922,
     926,   932,   941,   943,   944,   944,   946,   946,   947,   947,
     947,   947,   948,   948,   949,   949,   950,   950,   950,   952,
     952,   953,   954,   956,   959,   959,   960,   960,   961,   961,
     962,   962,   963,   963,   964,   964,   965,   965,   966,   966,
     967,   967,   968,   968,   969,   969,   971,   971,   974,   974,
     974,   975,   975,   978,   979,   980,   981,   982,   985,   986,
     987,   988,   989,   990,   993,   998,  1003,  1003,  1006,  1010,
    1016,  1016,  1018,  1018,  1020,  1029,  1030,  1032,  1034,  1037,
    1039,  1043,  1044,  1045,  1047,  1048,  1059,  1059,  1061,  1062,
    1063,  1063,  1065,  1066,  1067,  1068,  1069,  1070,  1071,  1072,
    1073,  1074,  1075,  1076,  1082,  1083,  1084,  1085,  1086
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
  "#if", "\n", "import", "<interp string lit>", "<interp string end>",
  "@<operator id>", "<identifier>", "+", "++", "-", "--", "*", "/", "%",
  "$", "?", "OPTIONS", ":", "::", "?:", "new", "spork", "fork", "<<<",
  ">>>", "&&", "==", ">=", ">", "<=", "<", "!=", "<<", ">>", "&", "|", "^",
  "||", ":[", "~", "!", "@", "<dynamic_operator>", "`foo`", "RANGE_EMPTY",
  "UMINUS", "UTIMES", "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg",
  "ast", "section", "class_flag", "class_def", "trait_stmt",
  "trait_stmt_list", "trait_section", "trait_ast", "trait_body",
  "trait_def", "class_ext", "traits", "extend_def", "class_body",
  "id_list", "specialized_list", "stmt_list", "fptr_base", "_func_effects",
  "func_effects", "func_base", "fptr_def", "typedef_when", "type_def_type",
  "type_def", "type_decl_array", "type_decl_exp", "type_decl_empty", "arg",
  "arg_list", "locale_arg", "locale_list", "fptr_arg", "fptr_list",
  "code_stmt", "stmt_pp", "stmt", "retry_stmt", "handler", "$@1",
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
     375,   376,   377,   378
};
#endif

#define YYPACT_NINF (-430)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-247)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     568,  -430,  1377,  1490,   681,   186,  -430,    53,  -430,   897,
    -430,    63,    66,    77,  2013,   186,  1277,  -430,  -430,   897,
      14,    98,   186,   186,    80,   269,    80,  -430,  -430,   186,
     186,  -430,  2013,   897,    34,    15,    78,  -430,  -430,  -430,
    -430,  -430,  1552,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,   269,
     269,  2113,  2113,  2013,  -430,  -430,  -430,   174,   568,  -430,
    -430,  -430,  -430,   897,  -430,   186,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,   182,  -430,  -430,  -430,  -430,    47,
    -430,  -430,   191,    30,  -430,   202,  -430,  -430,  -430,  -430,
    -430,   230,  -430,  -430,  -430,   186,  -430,  -430,   -19,   105,
     121,   123,   136,    33,   125,   109,   129,   260,   162,   168,
    2151,  -430,   187,  -430,  -430,   108,   227,  -430,  -430,  2013,
    -430,   284,   287,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,   290,  -430,   292,  -430,
    -430,  -430,  -430,  -430,  2013,    25,  -430,   794,    21,   291,
    -430,  -430,  -430,  -430,   297,  -430,  -430,   213,   228,  2013,
     226,  2052,  1316,   224,   296,   237,  -430,   304,   277,  -430,
    -430,   238,   235,   240,  -430,   242,   186,  -430,    52,  -430,
     232,   221,   299,   193,  -430,   318,    46,  -430,   329,   269,
     259,    82,  -430,  -430,   270,   335,   273,  1613,  1552,  -430,
     289,  -430,  -430,  -430,   351,   -11,  -430,  -430,   349,  -430,
    -430,   349,   261,  -430,  -430,  -430,   269,  2013,  -430,   359,
    -430,  2013,  2013,  2013,  2013,  1652,  -430,   247,   297,   436,
     101,   269,   269,  2013,  2151,  2151,  2151,  2151,  2151,  2151,
    -430,  -430,  2151,  2151,  2151,  -430,  2151,  -430,  2151,  2151,
     269,  -430,   354,  1713,   285,   269,   361,  -430,  -430,  -430,
    1552,     8,  -430,  -430,   356,   363,  1752,  -430,  2013,  -430,
     269,    49,  -430,   269,  -430,   269,   362,  2013,   367,    50,
    1316,    31,   350,   364,  -430,  -430,  -430,   277,   263,   338,
    -430,  -430,   263,   293,   269,   221,   300,  -430,    46,  -430,
    -430,  -430,  1813,  -430,  -430,   269,    49,   301,   263,   681,
    -430,  -430,   269,   380,  -430,   330,  -430,  1552,  2013,  -430,
     307,  -430,   -15,  -430,  -430,  -430,   309,   384,  -430,  -430,
    -430,  -430,  -430,  -430,   383,   297,   389,    49,   297,   263,
     263,  -430,  -430,   263,   314,  -430,   305,  -430,   105,   121,
     123,   136,    33,   125,   109,   129,   260,   162,   168,  -430,
     681,  -430,  -430,  -430,   126,  1852,  -430,  -430,  -430,  1913,
    -430,  -430,   387,    45,   317,  -430,   394,  -430,   395,   116,
     320,   324,   897,   402,  2013,   897,  1952,   327,   396,  2013,
    -430,    62,   300,   331,  -430,   332,   368,  -430,   293,   300,
     146,   263,  -430,  -430,   282,  -430,   317,  -430,   405,   385,
     263,   404,  -430,   410,   411,   269,  -430,  -430,   412,  -430,
    -430,  -430,   263,   897,    49,  -430,   160,   413,   416,   422,
     423,  -430,  -430,  2151,    37,   269,  -430,  -430,   424,  -430,
    -430,  2013,  -430,   325,   269,  -430,  -430,  -430,   263,   263,
     415,  -430,    67,  -430,   897,   426,   342,  -430,  2013,   414,
     417,  -430,   197,  -430,   897,   293,   169,   269,   293,   425,
     431,  -430,  1087,  -430,   329,  -430,   358,  -430,  -430,   269,
     360,   365,   433,  -430,   298,   269,   349,   437,  -430,   421,
    -430,   443,  -430,  -430,  -430,   269,   269,   269,  -430,  -430,
    -430,  -430,  -430,  2013,  -430,   329,  -430,   897,   897,  -430,
     897,   396,    69,  2013,   348,   897,  -430,  -430,  -430,   369,
    -430,  -430,   438,   568,  -430,  1182,  -430,   992,  -430,  -430,
    -430,    49,  -430,  -430,  -430,  -430,  -430,   445,   371,  -430,
     229,  -430,  -430,   349,  2013,   449,  -430,   452,   447,   451,
     -13,    49,  -430,  -430,  -430,  2013,   897,  -430,   897,  -430,
     293,   568,   568,   448,  -430,  -430,  -430,   385,  -430,   456,
    -430,  -430,  -430,   -13,  -430,   269,  -430,  -430,   457,    90,
    -430,   897,  -430,   453,  -430,   455,  -430,   458,  -430,   897,
    -430,  -430,  -430,  -430
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   132,     0,     0,     0,   179,   225,     0,   111,     0,
     112,     0,     0,     0,     0,   179,     0,   125,   126,     0,
       0,     0,   179,   179,   171,     0,   198,    51,    52,   179,
     179,   222,     0,     0,   297,     0,     0,   221,   323,   324,
     326,   327,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,   322,   302,   278,   303,   279,     0,
       0,     0,     0,     0,   282,   281,   333,     0,     2,     4,
       8,     9,    10,     6,    13,   179,    14,    87,    90,    40,
      94,    93,    11,    88,     0,    85,    91,    92,    86,     0,
      89,    84,     0,   133,   157,   158,   330,   328,   135,   203,
     204,     0,   205,     7,   226,   179,    12,   159,   251,   254,
     256,   258,   260,   262,   264,   266,   268,   270,   272,   274,
       0,   276,   321,   280,   310,   283,   325,   305,   338,     0,
     244,   278,   279,   247,   248,   145,   141,   241,   239,   240,
     238,   142,   242,   243,   143,   144,     0,   189,     0,   191,
     190,   193,   192,   149,     0,     0,    69,     0,   133,     0,
     172,   169,   174,   175,     0,   173,   177,   176,   181,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,   337,
      95,     0,   181,     0,   170,     0,   179,   209,     0,    57,
       0,   140,   213,   217,   219,    55,     0,   199,     0,     0,
       0,     0,   122,   294,   296,     0,     0,     0,     0,   311,
       0,   314,   293,    56,   288,     0,   289,   285,     0,   290,
     286,     0,     0,     1,     5,    41,     0,     0,   130,     0,
     131,     0,     0,     0,     0,     0,   151,     0,     0,     0,
       0,     0,     0,   250,     0,     0,     0,     0,     0,     0,
     236,   237,     0,     0,     0,   245,     0,   246,     0,     0,
       0,   284,     0,     0,     0,     0,     0,   306,   307,   309,
       0,     0,   332,   336,     0,   146,     0,    70,     0,   329,
     162,     0,   178,     0,   180,     0,     0,     0,   322,     0,
       0,     0,     0,     0,   127,    96,    98,   100,   168,   181,
     183,    15,   168,    31,     0,   140,     0,   211,     0,   215,
     216,   218,     0,    54,   220,   164,     0,     0,   168,     0,
     121,   295,    65,     0,    83,     0,   312,     0,   250,   316,
       0,   318,     0,   291,   292,   331,     0,     0,   129,   134,
     138,   136,   137,   150,     0,     0,     0,     0,     0,   168,
     168,   201,   200,   168,     0,   249,     0,   253,   255,   257,
     259,   261,   263,   265,   267,   269,   271,   273,   275,   277,
       0,   334,   304,   298,     0,     0,   308,   315,   156,     0,
     147,   155,     0,   152,     0,    60,   161,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,     0,
     107,     0,     0,   102,    99,     0,    30,   182,    31,     0,
       0,   168,   212,    36,     0,   214,   235,    67,   163,    45,
     168,     0,    62,    64,     0,    65,    82,   313,     0,   317,
     320,   319,   168,     0,     0,   202,     0,     0,     0,     0,
       0,   232,   160,     0,   133,     0,   139,   301,     0,   148,
     154,     0,   233,    59,     0,   165,   185,   184,   168,   168,
     123,   114,     0,   119,     0,     0,     0,   223,     0,   105,
     110,   108,     0,   101,     0,    31,     0,     0,    31,     0,
      32,    27,     0,    28,     0,    33,     0,   234,    66,     0,
       0,    46,     0,    42,     0,     0,     0,     0,   287,    49,
     113,     0,   207,   206,   197,     0,     0,     0,   252,   335,
     299,   300,   153,     0,    61,     0,    47,     0,     0,   115,
       0,   224,     0,     0,     0,     0,   103,    97,    38,     0,
     167,    29,     0,    35,    20,    22,    24,     0,    19,    18,
      23,     0,    37,    68,    43,    44,    48,   209,     0,   229,
       0,    63,   187,     0,     0,     0,   208,     0,     0,     0,
      58,     0,   124,   120,   116,     0,     0,   104,     0,   109,
      31,    35,    34,     0,    21,    26,    25,    45,   227,     0,
     231,   230,   186,    50,    53,     0,   195,   196,     0,     0,
     117,   106,    39,     0,    17,     0,   228,     0,   188,     0,
      16,   210,   194,   118
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -430,  -430,   462,   -62,   450,  -430,   -67,  -430,   -61,  -430,
    -430,  -430,  -430,  -389,  -430,   -96,  -342,  -430,    -3,  -430,
    -430,  -107,  -430,  -430,  -430,  -430,  -430,   -51,     0,   -20,
    -259,  -430,  -430,    54,    -8,  -430,   -54,  -429,    -9,  -430,
     181,  -430,  -430,  -430,  -430,  -430,  -430,    79,  -430,  -430,
     315,  -430,  -430,  -430,  -430,  -430,  -430,  -161,    24,    -1,
    -162,  -430,   -79,  -430,    35,   370,   294,    39,  -177,  -425,
    -303,  -270,   176,  -430,   321,  -430,    13,  -160,  -430,  -430,
    -430,   248,   253,  -430,  -430,  -428,   306,  -430,   184,  -430,
     302,  -430,   -23,   -28,  -430,   -53,  -430,  -430,  -430,    84,
    -430,  -430,  -110,  -103,  -101,  -100,   173,  -230,  -430,   251,
     256,   257,   255,   258,   254,   252,   271,   268,   274,   272,
     -81,     1,  -430,  -430,  -430,  -430,   -95,  -430,  -430,  -185,
    -430,   183,  -430,   -17,  -430
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    67,   572,    69,   181,    70,   534,   535,   536,   537,
     483,    71,   478,   410,    72,   573,   414,   476,    73,   198,
     491,   492,   164,    74,   555,    75,    76,   189,   214,   384,
     422,   386,   423,   424,   417,   418,    77,    78,    79,    80,
     296,   403,   297,    81,   474,    82,   524,   400,   401,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
     266,   147,    94,    95,   159,    96,    97,    98,   281,   316,
     389,   406,   165,   185,   166,   167,   182,   285,   301,    99,
     100,   148,   240,   101,   102,   103,   191,   192,   193,   311,
     194,   195,   104,   468,   105,   549,   550,   106,   442,   453,
     488,   252,   149,   150,   151,   152,   356,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   204,   122,   374,   376,   123,   124,   125,   211,
     126,   331,   332,   218,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     170,   157,   196,   158,   253,   190,   224,   216,   219,   213,
     178,   290,   254,   419,   357,   256,   236,   258,   168,   479,
     241,   385,   300,   326,   202,   231,   146,   155,   175,   307,
     269,   201,   408,   275,   231,   397,   196,   196,   174,   212,
     177,   231,   199,   200,   436,   221,   267,   509,   421,   451,
     228,   186,   161,   538,   540,   387,   395,   186,   169,   541,
     472,   347,   217,   220,   225,   329,   210,   480,   171,   329,
     243,   172,   470,   518,   244,   566,   430,   232,   196,   438,
     439,   239,   173,   440,   399,   377,   528,   222,   226,   532,
     561,   319,   245,   330,   179,   205,   599,   330,   232,   278,
     388,   180,   233,   234,   351,   262,   538,   229,   538,   540,
     319,   232,   278,  -140,   203,   263,   276,   161,   242,   456,
     232,   261,   398,   233,   234,   319,   187,   232,   271,   396,
     445,   501,   187,   250,   446,   232,   233,   234,   251,   407,
     232,   484,   427,   412,   350,   233,   234,   320,   225,   481,
     493,   264,   233,   234,   188,   482,   241,   232,   207,   232,
     233,   234,   499,   502,   333,   233,   234,   334,   434,   319,
     289,   437,   232,   529,   223,   336,   196,   530,   274,   317,
     232,   592,   233,   234,   233,   234,   352,   227,   515,   516,
      55,   354,    57,   286,   230,   514,   380,   233,   234,   304,
     184,   486,   197,   196,   246,   233,   234,   526,   371,   235,
     130,   206,   255,   508,   196,   142,   143,   239,   196,   196,
     265,   353,   160,   161,   162,   163,   137,   138,   139,   140,
     247,   325,   210,   248,   186,   186,   551,   196,   577,   580,
     369,     8,   196,    10,   249,   373,   557,   558,   559,   160,
     161,   337,   186,   253,   259,   339,   260,   196,   588,   344,
     196,   254,   196,   390,   256,   391,   258,   355,   283,   284,
     237,   340,   341,   342,   186,   299,   284,   383,   215,    31,
      31,   196,   309,   310,   411,   485,   486,   155,    37,    37,
    -245,   270,   196,  -246,   210,   416,   272,    31,   273,   196,
     382,   279,   280,   186,   291,   292,    37,   294,   295,   547,
     187,   393,    55,    56,    57,    58,   157,   293,   298,    31,
     302,   539,   303,   306,   238,   312,   597,   187,    37,    55,
      56,    57,    58,   265,   315,   457,   344,   188,   188,   318,
     322,   345,   308,    64,    65,   257,   133,   134,    31,   187,
     321,   210,   355,   323,   327,   188,   328,    37,   319,   335,
      64,    65,   338,   370,   378,   372,   375,   157,   392,   444,
     379,   394,   399,   402,   539,   405,   539,   188,   547,   284,
     413,   420,   503,   460,   409,   425,   463,   429,   426,   432,
     433,   275,   435,   462,   441,   450,   443,   452,   454,   448,
     458,   455,   196,   344,   459,   461,   188,   466,   467,   489,
     477,   473,   475,   494,   495,   490,   513,   496,   498,   504,
     465,   505,   196,   469,   500,   510,   213,   506,   507,   517,
     511,   196,   520,   521,   533,   486,   546,   523,   542,   568,
     544,   525,   552,   553,   554,   545,   556,   571,   578,   570,
     271,   579,   584,   586,   196,   519,   585,   587,   594,   596,
     598,   601,    68,   600,   602,   527,   196,   522,   574,   416,
     595,   196,   196,   183,   548,   593,   576,   531,   404,   497,
     471,   543,   196,   196,   196,   287,   512,   349,   282,   313,
     346,   348,   415,   565,   305,   268,   358,   581,   314,   582,
     487,   428,   359,   361,   360,   364,   363,   362,   562,   563,
     224,   564,   560,     0,     0,   431,   569,   130,    55,   255,
      57,   257,   133,   134,   366,   365,   135,   196,     0,     0,
     548,   368,   367,     0,     0,     0,   136,   137,   138,   139,
     140,   141,   142,   143,     0,     0,     0,   567,     0,     0,
       0,   144,   145,   583,     0,     0,     0,   590,     0,     0,
       0,     0,   196,     0,   589,   591,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,     0,     4,     0,     5,
       6,     7,   225,     8,     9,    10,    11,    12,    13,    14,
     603,     0,     0,    15,    16,    17,    18,    19,    20,     0,
      21,    22,    23,    24,     0,     0,     0,     0,     0,     0,
      25,     0,    26,    27,    28,    29,     0,    30,    31,     0,
      32,    33,    34,     0,    35,    36,     0,    37,    38,    39,
      40,    41,    42,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,    54,     0,
      55,    56,    57,    58,     0,     0,    59,     0,     0,     0,
       0,     0,    60,    61,    62,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,     1,    66,     2,     0,     3,     0,
       4,   156,     0,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,    32,    33,    34,     0,     0,    36,     0,
      37,    38,    39,    40,    41,    42,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
       0,    54,     0,    55,    56,    57,    58,     0,     0,    59,
       0,     0,     0,     0,     0,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,     1,    66,     2,
       0,     3,     0,     4,   277,     0,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    32,    33,    34,     0,
       0,    36,     0,    37,    38,    39,    40,    41,    42,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,    54,     0,    55,    56,    57,    58,
       0,     0,    59,     0,     0,     0,     0,     0,    60,    61,
      62,    63,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     4,    64,    65,     6,
       7,    66,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    32,
      33,    34,     0,     0,    36,     0,    37,    38,    39,    40,
      41,    42,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     0,     0,     0,    54,     0,    55,
      56,    57,    58,     0,     0,    59,     0,     0,     0,     0,
       0,    60,    61,    62,    63,     1,     0,     2,     0,     3,
       0,   129,   575,     5,     6,     0,     0,     0,     0,     0,
      64,    65,     0,     0,    66,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,    31,     0,     0,     0,    34,     0,    35,    36,
       0,    37,    38,    39,    40,    41,    42,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,    54,     0,    55,    56,    57,    58,     0,     0,
      59,     0,     0,     0,     0,     0,    60,    61,    62,    63,
       1,     0,     2,     0,     3,     0,   129,     0,     5,     6,
       0,     0,     0,     0,     0,    64,    65,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    34,     0,    35,    36,     0,    37,    38,    39,    40,
      41,    42,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     0,     0,     0,    54,     0,    55,
      56,    57,    58,     0,     0,    59,     0,     0,     0,     0,
       0,    60,    61,    62,    63,     1,     0,     2,     0,     3,
       0,   129,     0,     0,     6,     0,     0,     0,     0,     0,
      64,    65,     0,     0,    66,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,    34,     0,     0,    36,
       0,    37,    38,    39,    40,    41,    42,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,    54,     0,    55,    56,    57,    58,     0,     0,
      59,     0,     0,     0,     0,     0,    60,    61,    62,    63,
     176,     0,     2,     0,     3,     0,   129,     0,     0,     6,
       0,     0,     0,     0,     0,    64,    65,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     0,     3,     0,   129,     0,    31,     6,     0,
       0,    34,     0,     0,     0,     0,    37,    38,    39,    40,
      41,    42,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,    55,
      56,    57,    58,     0,     0,    59,    31,     0,     0,     0,
      34,    60,    61,    62,    63,    37,    38,    39,    40,    41,
      42,     0,     2,   128,     3,     0,   129,     0,     0,     6,
      64,    65,     0,     0,    66,     0,    54,     0,    55,    56,
      57,    58,     0,     0,    59,     0,     0,    20,     0,     0,
      60,    61,    62,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    64,
      65,    34,     0,    66,     0,     0,    37,    38,    39,    40,
      41,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,   130,    55,
     131,    57,   132,   133,   134,    59,     0,   135,     0,     0,
       0,    60,    61,    62,    63,     0,     0,   136,   137,   138,
     139,   140,   141,   142,   143,     0,     0,     0,     0,     0,
      64,    65,   144,   145,    66,     2,     0,     3,   153,   129,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,    34,     0,     0,     0,     0,    37,
      38,    39,    40,    41,    42,     0,     0,     2,     0,     3,
       0,   129,     0,     0,     6,     0,     0,     0,     0,     0,
      54,     0,    55,    56,    57,    58,     0,     0,    59,     0,
       0,   154,    20,     0,    60,    61,    62,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    64,    65,     0,    34,    66,     0,     0,
       0,    37,    38,    39,    40,    41,    42,     0,     2,     0,
       3,     0,   129,     0,     0,     6,     0,     0,     0,   208,
     209,     0,    54,     0,    55,    56,    57,    58,     0,     0,
      59,     0,     0,    20,     0,     0,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
     343,   129,     0,    31,     6,    64,    65,    34,     0,    66,
       0,   324,    37,    38,    39,    40,    41,    42,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    55,    56,    57,    58,     0,
       0,    59,    31,     0,     0,     0,    34,    60,    61,    62,
      63,    37,    38,    39,    40,    41,    42,     0,     2,     0,
       3,     0,   129,     0,     0,     6,    64,    65,     0,     0,
      66,     0,    54,     0,    55,    56,    57,    58,     0,     0,
      59,     0,     0,    20,     0,     0,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
     381,   129,     0,    31,     6,    64,    65,    34,     0,    66,
       0,     0,    37,    38,    39,    40,    41,    42,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    55,    56,    57,    58,     0,
       0,    59,    31,     0,   154,     0,    34,    60,    61,    62,
      63,    37,    38,    39,    40,    41,    42,     0,     2,     0,
       3,   153,   129,     0,     0,     6,    64,    65,     0,     0,
      66,     0,    54,     0,    55,    56,    57,    58,     0,     0,
      59,     0,     0,    20,     0,     0,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     2,   447,     3,
       0,   129,     0,    31,     6,    64,    65,    34,     0,    66,
       0,     0,    37,    38,    39,    40,    41,    42,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    55,    56,    57,    58,     0,
       0,    59,    31,     0,     0,     0,    34,    60,    61,    62,
      63,    37,    38,    39,    40,    41,    42,     0,     2,     0,
       3,   449,   129,     0,     0,     6,    64,    65,     0,     0,
      66,     0,    54,     0,    55,    56,    57,    58,     0,     0,
      59,     0,     0,    20,     0,     0,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     2,   464,     3,
       0,   129,     0,    31,     6,    64,    65,    34,     0,    66,
       0,     0,    37,    38,    39,    40,    41,    42,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    55,    56,    57,    58,     0,
       0,    59,    31,     0,     0,     0,    34,    60,    61,    62,
      63,    37,    38,    39,    40,    41,    42,     0,     2,     0,
       3,     0,   129,     0,     0,     6,    64,    65,     0,     0,
      66,     0,    54,     0,    55,    56,    57,    58,     0,     0,
      59,     0,     0,    20,     0,     0,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,   129,     0,    31,     6,    64,    65,    34,     0,    66,
       0,     0,    37,    38,    39,    40,    41,    42,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    55,    56,    57,    58,     0,
       0,    59,    31,     0,     0,     0,    34,    60,    61,    62,
      63,    37,    38,    39,    40,    41,    42,     0,     2,     0,
       3,     0,     4,     0,     0,     0,    64,    65,     0,     0,
      66,     0,   288,     0,    55,    56,    57,    58,     0,     0,
      59,     0,     0,    20,     0,     0,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
     129,     0,     0,     0,     0,    64,    65,    34,     0,    66,
       0,     0,     0,    38,    39,    40,    41,    42,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    55,    56,    57,    58,     0,
       0,    59,     0,     0,   215,    34,     0,    60,    61,    62,
      63,    38,    39,    40,    41,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,     0,
      66,    54,     0,    55,    56,    57,    58,     0,     0,    59,
       0,     0,     0,     0,     0,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,     4,   114,    25,    68,    61,    62,    60,
      19,   172,   115,   316,   244,   116,    95,   117,     5,   408,
     101,   280,   182,   208,    33,     4,     2,     3,    15,   191,
     125,    32,   302,     8,     4,     4,    59,    60,    14,    59,
      16,     4,    29,    30,   347,    62,   125,    10,   318,     4,
       3,     5,    37,   482,   482,     6,     6,     5,     5,   484,
     402,   238,    61,    62,    73,    80,    42,   409,     5,    80,
      89,     5,    10,     6,    93,     6,    91,    90,   101,   349,
     350,   101,     5,   353,    22,   270,   475,    63,    75,   478,
     515,     9,   111,   108,    80,    80,     6,   108,    90,    91,
      51,     3,   115,   116,     3,   122,   535,    60,   537,   537,
       9,    90,    91,     5,    80,     7,    91,    37,   105,     3,
      90,   120,    91,   115,   116,     9,    80,    90,   129,   290,
       4,   434,    80,   100,     8,    90,   115,   116,   105,   299,
      90,   411,   327,   305,   239,   115,   116,   201,   157,     3,
     420,    43,   115,   116,   108,     9,   237,    90,    80,    90,
     115,   116,   432,     3,   218,   115,   116,   221,   345,     9,
     171,   348,    90,     4,     0,   226,   199,     8,   154,   199,
      90,   570,   115,   116,   115,   116,   240,     5,   458,   459,
      82,   242,    84,   169,     3,   454,   275,   115,   116,   186,
      24,     4,    26,   226,    99,   115,   116,    10,   262,     7,
      81,    35,    83,   443,   237,   106,   107,   237,   241,   242,
     112,   241,    36,    37,    38,    39,   101,   102,   103,   104,
     109,   207,   208,   110,     5,     5,   495,   260,   541,    10,
     260,    15,   265,    17,   108,   265,   505,   506,   507,    36,
      37,   227,     5,   363,    92,   231,    88,   280,   561,   235,
     283,   364,   285,   283,   365,   285,   366,   243,    40,    41,
      40,   232,   233,   234,     5,    40,    41,   278,    91,    50,
      50,   304,    89,    90,   304,     3,     4,   263,    59,    59,
       6,    64,   315,     6,   270,   315,     6,    50,     6,   322,
     276,    10,     5,     5,    80,     9,    59,     3,    31,    80,
      80,   287,    82,    83,    84,    85,   319,    80,    80,    50,
      80,   482,    80,    91,    94,     7,   585,    80,    59,    82,
      83,    84,    85,   112,     5,   389,   312,   108,   108,    80,
       5,    94,    43,   113,   114,    85,    86,    87,    50,    80,
      80,   327,   328,    80,    65,   108,     5,    59,     9,    98,
     113,   114,     3,     9,     8,    80,     5,   370,     6,   370,
       7,     4,    22,     9,   535,   112,   537,   108,    80,    41,
      80,    80,   436,   392,    91,     5,   395,    80,    58,    80,
       6,     8,     3,   394,    80,     8,    91,    80,     4,   375,
      80,     6,   425,   379,    80,     3,   108,    80,    12,     4,
      42,    80,    80,     9,     4,    30,    91,     6,     6,     6,
     396,     5,   445,   399,   433,   445,   477,     5,     5,    14,
       6,   454,     6,    91,     9,     4,     3,    23,    80,    91,
      80,    24,   496,     6,    23,    80,     3,     9,     3,    80,
     451,    80,     3,     6,   477,   464,     4,     6,    10,     3,
       3,     6,     0,    10,     6,   474,   489,   468,   535,   489,
     577,   494,   495,    23,   494,   571,   537,   477,   297,   425,
     401,   489,   505,   506,   507,   170,   451,   239,   167,   195,
     237,    55,   308,   521,   188,   125,   245,   550,   196,   553,
     416,   328,   246,   248,   247,   253,   252,   249,   517,   518,
     572,   520,   513,    -1,    -1,   332,   525,    81,    82,    83,
      84,    85,    86,    87,   256,   254,    90,   550,    -1,    -1,
     550,   259,   258,    -1,    -1,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,   523,    -1,    -1,
      -1,   115,   116,   554,    -1,    -1,    -1,   566,    -1,    -1,
      -1,    -1,   585,    -1,   565,   568,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,    -1,     9,    -1,    11,
      12,    13,   591,    15,    16,    17,    18,    19,    20,    21,
     599,    -1,    -1,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    44,    45,    46,    47,    -1,    49,    50,    -1,
      52,    53,    54,    -1,    56,    57,    -1,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,     3,   117,     5,    -1,     7,    -1,
       9,    10,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    -1,    -1,    57,    -1,
      59,    60,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,     3,   117,     5,
      -1,     7,    -1,     9,    10,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    -1,
      -1,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,     9,   113,   114,    12,
      13,   117,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    84,    85,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,     3,    -1,     5,    -1,     7,
      -1,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
       3,    -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    -1,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    84,    85,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,     3,    -1,     5,    -1,     7,
      -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    57,
      -1,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
       3,    -1,     5,    -1,     7,    -1,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,    -1,     9,    -1,    50,    12,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,
      83,    84,    85,    -1,    -1,    88,    50,    -1,    -1,    -1,
      54,    94,    95,    96,    97,    59,    60,    61,    62,    63,
      64,    -1,     5,     6,     7,    -1,     9,    -1,    -1,    12,
     113,   114,    -1,    -1,   117,    -1,    80,    -1,    82,    83,
      84,    85,    -1,    -1,    88,    -1,    -1,    30,    -1,    -1,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   113,
     114,    54,    -1,   117,    -1,    -1,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    -1,    -1,
      -1,    94,    95,    96,    97,    -1,    -1,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,
     113,   114,   115,   116,   117,     5,    -1,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    -1,    -1,     5,    -1,     7,
      -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    82,    83,    84,    85,    -1,    -1,    88,    -1,
      -1,    91,    30,    -1,    94,    95,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,   113,   114,    -1,    54,   117,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    -1,     5,    -1,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    77,
      78,    -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    30,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,     9,    -1,    50,    12,   113,   114,    54,    -1,   117,
      -1,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    -1,
      -1,    88,    50,    -1,    -1,    -1,    54,    94,    95,    96,
      97,    59,    60,    61,    62,    63,    64,    -1,     5,    -1,
       7,    -1,     9,    -1,    -1,    12,   113,   114,    -1,    -1,
     117,    -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    30,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,     9,    -1,    50,    12,   113,   114,    54,    -1,   117,
      -1,    -1,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    -1,
      -1,    88,    50,    -1,    91,    -1,    54,    94,    95,    96,
      97,    59,    60,    61,    62,    63,    64,    -1,     5,    -1,
       7,     8,     9,    -1,    -1,    12,   113,   114,    -1,    -1,
     117,    -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    30,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,     9,    -1,    50,    12,   113,   114,    54,    -1,   117,
      -1,    -1,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    -1,
      -1,    88,    50,    -1,    -1,    -1,    54,    94,    95,    96,
      97,    59,    60,    61,    62,    63,    64,    -1,     5,    -1,
       7,     8,     9,    -1,    -1,    12,   113,   114,    -1,    -1,
     117,    -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    30,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,     9,    -1,    50,    12,   113,   114,    54,    -1,   117,
      -1,    -1,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    -1,
      -1,    88,    50,    -1,    -1,    -1,    54,    94,    95,    96,
      97,    59,    60,    61,    62,    63,    64,    -1,     5,    -1,
       7,    -1,     9,    -1,    -1,    12,   113,   114,    -1,    -1,
     117,    -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    30,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,     9,    -1,    50,    12,   113,   114,    54,    -1,   117,
      -1,    -1,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    -1,
      -1,    88,    50,    -1,    -1,    -1,    54,    94,    95,    96,
      97,    59,    60,    61,    62,    63,    64,    -1,     5,    -1,
       7,    -1,     9,    -1,    -1,    -1,   113,   114,    -1,    -1,
     117,    -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    30,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
       9,    -1,    -1,    -1,    -1,   113,   114,    54,    -1,   117,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    -1,
      -1,    88,    -1,    -1,    91,    54,    -1,    94,    95,    96,
      97,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
     117,    80,    -1,    82,    83,    84,    85,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   117
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    32,    33,    34,    35,    42,    44,    45,    46,    47,
      49,    50,    52,    53,    54,    56,    57,    59,    60,    61,
      62,    63,    64,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    80,    82,    83,    84,    85,    88,
      94,    95,    96,    97,   113,   114,   117,   125,   126,   127,
     129,   135,   138,   142,   147,   149,   150,   160,   161,   162,
     163,   167,   169,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   186,   187,   189,   190,   191,   203,
     204,   207,   208,   209,   216,   218,   221,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   247,   250,   251,   252,   254,   258,     6,     9,
      81,    83,    85,    86,    87,    90,   100,   101,   102,   103,
     104,   105,   106,   107,   115,   116,   182,   185,   205,   226,
     227,   228,   229,     8,    91,   182,    10,   142,   183,   188,
      36,    37,    38,    39,   146,   196,   198,   199,   200,     5,
     162,     5,     5,     5,   182,   200,     3,   182,   162,    80,
       3,   128,   200,   128,   196,   197,     5,    80,   108,   151,
     153,   210,   211,   212,   214,   215,   216,   196,   143,   200,
     200,   183,   162,    80,   246,    80,   196,    80,    77,    78,
     182,   253,   153,   151,   152,    91,   160,   245,   257,   160,
     245,   257,   182,     0,   127,   162,   200,     5,     3,    60,
       3,     4,    90,   115,   116,     7,   186,    40,    94,   153,
     206,   244,   200,    89,    93,   111,    99,   109,   110,   108,
     100,   105,   225,   226,   227,    83,   228,    85,   229,    92,
      88,   245,   257,     7,    43,   112,   184,   186,   189,   250,
      64,   183,     6,     6,   182,     8,    91,    10,    91,    10,
       5,   192,   198,    40,    41,   201,   182,   174,    80,   183,
     181,    80,     9,    80,     3,    31,   164,   166,    80,    40,
     201,   202,    80,    80,   200,   210,    91,   184,    43,    89,
      90,   213,     7,   190,   214,     5,   193,   153,    80,     9,
     160,    80,     5,    80,    58,   182,   253,    65,     5,    80,
     108,   255,   256,   160,   160,    98,   151,   182,     3,   182,
     191,   191,   191,     8,   182,    94,   206,   192,    55,   205,
     250,     3,   160,   153,   151,   182,   230,   231,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   153,
       9,   160,    80,   153,   248,     5,   249,   253,     8,     7,
     186,     8,   182,   183,   153,   154,   155,     6,    51,   194,
     153,   153,     6,   182,     4,     6,   181,     4,    91,    22,
     171,   172,     9,   165,   164,   112,   195,   201,   195,    91,
     137,   153,   184,    80,   140,   212,   153,   158,   159,   194,
      80,   195,   154,   156,   157,     5,    58,   253,   230,    80,
      91,   255,    80,     6,   192,     3,   194,   192,   195,   195,
     195,    80,   222,    91,   183,     4,     8,     6,   182,     8,
       8,     4,    80,   223,     4,     6,     3,   160,    80,    80,
     162,     3,   183,   162,     6,   182,    80,    12,   217,   182,
      10,   171,   140,    80,   168,    80,   141,    42,   136,   137,
     140,     3,     9,   134,   195,     3,     4,   223,   224,     4,
      30,   144,   145,   195,     9,     4,     6,   157,     6,   195,
     162,   194,     3,   160,     6,     5,     5,     5,   231,    10,
     153,     6,   188,    91,   154,   195,   195,    14,     6,   162,
       6,    91,   183,    23,   170,    24,    10,   162,   137,     4,
       8,   152,   137,     9,   130,   131,   132,   133,   161,   181,
     209,   193,    80,   158,    80,    80,     3,    80,   153,   219,
     220,   154,   160,     6,    23,   148,     3,   154,   154,   154,
     183,   193,   162,   162,   162,   217,     6,   182,    91,   162,
      80,     9,   126,   139,   130,    10,   132,   194,     3,    80,
      10,   219,   160,   183,     3,     4,     6,     6,   194,   183,
     162,   142,   137,   139,    10,   145,     3,   154,     3,     6,
      10,     6,     6,   162
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   124,   125,   125,   126,   126,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   129,   129,   130,   130,
     131,   131,   132,   132,   133,   133,   134,   134,   135,   136,
     136,   137,   137,   138,   139,   139,   140,   140,   141,   141,
     142,   142,   143,   144,   144,   145,   145,   146,   147,   148,
     148,   149,   149,   150,   151,   151,   152,   153,   154,   154,
     155,   155,   156,   156,   157,   157,   158,   159,   159,   160,
     160,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   163,   165,   164,   166,   166,
     167,   168,   168,   169,   170,   170,   171,   172,   172,   173,
     173,   174,   174,   175,   175,   175,   175,   175,   175,   175,
     175,   176,   177,   178,   178,   179,   179,   180,   180,   180,
     180,   181,   181,   182,   182,   183,   183,   183,   183,   184,
     184,   185,   185,   185,   185,   185,   186,   186,   186,   187,
     187,   187,   188,   188,   189,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     197,   197,   198,   198,   199,   199,   200,   200,   200,   200,
     201,   201,   202,   202,   203,   203,   203,   203,   204,   205,
     205,   205,   205,   205,   206,   206,   206,   206,   207,   207,
     208,   208,   208,   209,   209,   209,   209,   209,   209,   210,
     210,   211,   211,   212,   212,   213,   213,   213,   214,   215,
     215,   216,   216,   217,   217,   218,   218,   219,   219,   220,
     220,   221,   222,   223,   224,   224,   225,   225,   226,   226,
     226,   226,   227,   227,   228,   228,   229,   229,   229,   230,
     230,   231,   231,   231,   232,   232,   233,   233,   234,   234,
     235,   235,   236,   236,   237,   237,   238,   238,   239,   239,
     240,   240,   241,   241,   242,   242,   243,   243,   244,   244,
     244,   244,   244,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   246,   246,   247,   247,   248,   248,
     249,   249,   250,   250,   251,   252,   252,   252,   252,   252,
     252,   253,   253,   253,   254,   254,   255,   255,   256,   256,
     257,   257,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258
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
       1,     1,     1,     1,     1,     2,     0,     4,     1,     2,
       3,     1,     0,     6,     2,     0,     5,     1,     2,     7,
       5,     1,     1,     5,     5,     6,     7,     8,    10,     5,
       7,     3,     2,     5,     7,     1,     1,     3,     2,     3,
       2,     2,     1,     1,     3,     1,     3,     3,     3,     3,
       0,     1,     1,     1,     1,     1,     3,     4,     5,     2,
       3,     2,     3,     5,     5,     4,     4,     1,     1,     1,
       4,     2,     1,     2,     1,     2,     1,     3,     0,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     2,     0,
       1,     0,     2,     1,     5,     5,     7,     6,     9,     1,
       1,     1,     1,     1,     8,     6,     6,     4,     1,     2,
       3,     3,     4,     1,     1,     1,     5,     5,     6,     1,
       8,     2,     3,     1,     3,     1,     1,     0,     2,     1,
       2,     1,     1,     1,     0,     1,     1,     2,     3,     1,
       2,     7,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     5,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     5,     2,     2,
       2,     3,     3,     2,     1,     2,     2,     1,     1,     3,
       3,     2,     1,     1,     3,     1,     2,     2,     3,     2,
       1,     1,     2,     3,     2,     3,     1,     2,     1,     2,
       3,     0,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     3,     1,     3,     5,     3,     2,     2
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
#line 177 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2482 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 178 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2488 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 181 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2497 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 185 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2506 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 191 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2512 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 192 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2518 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 193 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2524 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 194 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2530 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 195 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2536 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 196 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2542 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 197 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2548 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 198 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2554 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 199 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2560 "src/parser.c"
    break;

  case 15: /* class_flag: flag modifier  */
#line 202 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2566 "src/parser.c"
    break;

  case 16: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 205 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2577 "src/parser.c"
    break;

  case 17: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 212 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2589 "src/parser.c"
    break;

  case 18: /* trait_stmt: exp_stmt  */
#line 220 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2599 "src/parser.c"
    break;

  case 20: /* trait_stmt_list: trait_stmt  */
#line 225 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2608 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 229 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2617 "src/parser.c"
    break;

  case 22: /* trait_section: trait_stmt_list  */
#line 235 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2623 "src/parser.c"
    break;

  case 23: /* trait_section: func_def  */
#line 236 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2629 "src/parser.c"
    break;

  case 24: /* trait_ast: trait_section  */
#line 240 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2638 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_ast trait_section  */
#line 244 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2647 "src/parser.c"
    break;

  case 26: /* trait_body: "{" trait_ast "}"  */
#line 249 "src/gwion.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 2653 "src/parser.c"
    break;

  case 27: /* trait_body: ";"  */
#line 249 "src/gwion.y"
                                                   { (yyval.ast) = NULL; }
#line 2659 "src/parser.c"
    break;

  case 28: /* trait_def: "trait" opt_global "<identifier>" traits trait_body  */
#line 252 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2668 "src/parser.c"
    break;

  case 29: /* class_ext: "extends" type_decl_exp  */
#line 257 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2674 "src/parser.c"
    break;

  case 30: /* class_ext: %empty  */
#line 257 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2680 "src/parser.c"
    break;

  case 31: /* traits: %empty  */
#line 258 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2686 "src/parser.c"
    break;

  case 32: /* traits: ":" id_list  */
#line 258 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2692 "src/parser.c"
    break;

  case 33: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 260 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2700 "src/parser.c"
    break;

  case 35: /* class_body: %empty  */
#line 265 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2706 "src/parser.c"
    break;

  case 36: /* id_list: "<identifier>"  */
#line 268 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), Symbol, 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2715 "src/parser.c"
    break;

  case 37: /* id_list: id_list "," "<identifier>"  */
#line 273 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2724 "src/parser.c"
    break;

  case 38: /* specialized_list: "<identifier>" traits  */
#line 278 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2737 "src/parser.c"
    break;

  case 39: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 286 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2747 "src/parser.c"
    break;

  case 40: /* stmt_list: stmt  */
#line 292 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2756 "src/parser.c"
    break;

  case 41: /* stmt_list: stmt_list stmt  */
#line 296 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2765 "src/parser.c"
    break;

  case 42: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 301 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2772 "src/parser.c"
    break;

  case 43: /* _func_effects: "perform" "<identifier>"  */
#line 304 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2778 "src/parser.c"
    break;

  case 44: /* _func_effects: _func_effects "<identifier>"  */
#line 304 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2784 "src/parser.c"
    break;

  case 45: /* func_effects: %empty  */
#line 305 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2790 "src/parser.c"
    break;

  case 46: /* func_effects: _func_effects  */
#line 305 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2796 "src/parser.c"
    break;

  case 47: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 307 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2803 "src/parser.c"
    break;

  case 48: /* fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";"  */
#line 310 "src/gwion.y"
                                                                 {
  (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
  (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-4].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2814 "src/parser.c"
    break;

  case 49: /* typedef_when: %empty  */
#line 317 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2820 "src/parser.c"
    break;

  case 50: /* typedef_when: "when" binary_exp  */
#line 317 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2826 "src/parser.c"
    break;

  case 51: /* type_def_type: "typedef"  */
#line 318 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2832 "src/parser.c"
    break;

  case 52: /* type_def_type: "distinct"  */
#line 318 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2838 "src/parser.c"
    break;

  case 53: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 319 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2851 "src/parser.c"
    break;

  case 54: /* type_decl_array: type_decl array  */
#line 328 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2857 "src/parser.c"
    break;

  case 56: /* type_decl_exp: type_decl_array  */
#line 330 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2865 "src/parser.c"
    break;

  case 57: /* type_decl_empty: type_decl_array  */
#line 334 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2873 "src/parser.c"
    break;

  case 58: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 339 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2882 "src/parser.c"
    break;

  case 59: /* arg: type_decl_empty arg_decl  */
#line 343 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 2891 "src/parser.c"
    break;

  case 60: /* arg_list: arg  */
#line 348 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2901 "src/parser.c"
    break;

  case 61: /* arg_list: arg_list "," arg  */
#line 353 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2913 "src/parser.c"
    break;

  case 62: /* locale_arg: arg  */
#line 362 "src/gwion.y"
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
#line 2929 "src/parser.c"
    break;

  case 63: /* locale_arg: locale_arg "," arg  */
#line 373 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2941 "src/parser.c"
    break;

  case 65: /* locale_list: %empty  */
#line 382 "src/gwion.y"
    {
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
    }
#line 2955 "src/parser.c"
    break;

  case 66: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 392 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 2961 "src/parser.c"
    break;

  case 67: /* fptr_list: fptr_arg  */
#line 394 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 2970 "src/parser.c"
    break;

  case 68: /* fptr_list: fptr_list "," fptr_arg  */
#line 398 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 2979 "src/parser.c"
    break;

  case 69: /* code_stmt: "{" "}"  */
#line 404 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 2986 "src/parser.c"
    break;

  case 70: /* code_stmt: "{" stmt_list "}"  */
#line 406 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 2993 "src/parser.c"
    break;

  case 71: /* stmt_pp: "<comment>"  */
#line 410 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 2999 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#include"  */
#line 411 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 3005 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#define"  */
#line 412 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 3011 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#pragma"  */
#line 413 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 3017 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#undef"  */
#line 414 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 3023 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#ifdef"  */
#line 415 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 3029 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#ifndef"  */
#line 416 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 3035 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#else"  */
#line 417 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 3041 "src/parser.c"
    break;

  case 79: /* stmt_pp: "#if"  */
#line 418 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 3047 "src/parser.c"
    break;

  case 80: /* stmt_pp: "\n"  */
#line 419 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 3053 "src/parser.c"
    break;

  case 81: /* stmt_pp: "import"  */
#line 420 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 3059 "src/parser.c"
    break;

  case 82: /* stmt_pp: LOCALE_INI "<identifier>" exp LOCALE_END  */
#line 421 "src/gwion.y"
                                 { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = (yyvsp[-1].exp), .xid = (yyvsp[-2].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-3]) }; }
#line 3066 "src/parser.c"
    break;

  case 83: /* stmt_pp: LOCALE_INI "<identifier>" LOCALE_END  */
#line 423 "src/gwion.y"
                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = (yyvsp[-1].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-2]) }; }
#line 3073 "src/parser.c"
    break;

  case 95: /* retry_stmt: "retry" ";"  */
#line 440 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3083 "src/parser.c"
    break;

  case 96: /* $@1: %empty  */
#line 445 "src/gwion.y"
                  { arg->handling = true; }
#line 3089 "src/parser.c"
    break;

  case 97: /* handler: "handle" $@1 opt_id stmt  */
#line 445 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3095 "src/parser.c"
    break;

  case 98: /* handler_list: handler  */
#line 446 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), Handler, 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3105 "src/parser.c"
    break;

  case 99: /* handler_list: handler_list handler  */
#line 451 "src/gwion.y"
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
#line 3126 "src/parser.c"
    break;

  case 100: /* try_stmt: "try" stmt handler_list  */
#line 467 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3135 "src/parser.c"
    break;

  case 102: /* opt_id: %empty  */
#line 472 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3141 "src/parser.c"
    break;

  case 103: /* enum_def: "enum" flag "<identifier>" "{" id_list "}"  */
#line 475 "src/gwion.y"
                                   {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
  }
#line 3150 "src/parser.c"
    break;

  case 104: /* when_exp: "when" exp  */
#line 480 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3156 "src/parser.c"
    break;

  case 105: /* when_exp: %empty  */
#line 480 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3162 "src/parser.c"
    break;

  case 106: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 483 "src/gwion.y"
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
#line 3178 "src/parser.c"
    break;

  case 107: /* match_list: match_case_stmt  */
#line 495 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3187 "src/parser.c"
    break;

  case 108: /* match_list: match_list match_case_stmt  */
#line 499 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3196 "src/parser.c"
    break;

  case 109: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 504 "src/gwion.y"
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
#line 3211 "src/parser.c"
    break;

  case 110: /* match_stmt: "match" exp "{" match_list "}"  */
#line 515 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3225 "src/parser.c"
    break;

  case 111: /* flow: "while"  */
#line 526 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3231 "src/parser.c"
    break;

  case 112: /* flow: "until"  */
#line 527 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3237 "src/parser.c"
    break;

  case 113: /* loop_stmt: flow "(" exp ")" stmt  */
#line 532 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3250 "src/parser.c"
    break;

  case 114: /* loop_stmt: "do" stmt flow exp ";"  */
#line 541 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3264 "src/parser.c"
    break;

  case 115: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 551 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3278 "src/parser.c"
    break;

  case 116: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 561 "src/gwion.y"
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
#line 3293 "src/parser.c"
    break;

  case 117: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 572 "src/gwion.y"
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
#line 3310 "src/parser.c"
    break;

  case 118: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 585 "src/gwion.y"
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
#line 3332 "src/parser.c"
    break;

  case 119: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 603 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3345 "src/parser.c"
    break;

  case 120: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 612 "src/gwion.y"
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
#line 3362 "src/parser.c"
    break;

  case 121: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 625 "src/gwion.y"
                                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_varloop,
  .d = { .stmt_varloop = {
    .exp = (yyvsp[-1].exp),
    .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  }},
  .pos = (yylsp[-2])
};}
#line 3374 "src/parser.c"
    break;

  case 122: /* defer_stmt: "defer" stmt  */
#line 633 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_defer,
    .d = { .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }},
    .pos = (yylsp[-1])
  };
}
#line 3384 "src/parser.c"
    break;

  case 123: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 641 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3397 "src/parser.c"
    break;

  case 124: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 650 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3411 "src/parser.c"
    break;

  case 125: /* breaks: "break"  */
#line 660 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3417 "src/parser.c"
    break;

  case 126: /* breaks: "continue"  */
#line 660 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3423 "src/parser.c"
    break;

  case 127: /* jump_stmt: "return" exp ";"  */
#line 662 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3433 "src/parser.c"
    break;

  case 128: /* jump_stmt: "return" ";"  */
#line 667 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3442 "src/parser.c"
    break;

  case 129: /* jump_stmt: breaks "<integer>" ";"  */
#line 671 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].lval) }},
      .pos = (yylsp[-2])
    };
  }
#line 3452 "src/parser.c"
    break;

  case 130: /* jump_stmt: breaks ";"  */
#line 676 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3461 "src/parser.c"
    break;

  case 131: /* exp_stmt: exp ";"  */
#line 682 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3471 "src/parser.c"
    break;

  case 132: /* exp_stmt: ";"  */
#line 687 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3480 "src/parser.c"
    break;

  case 133: /* exp: binary_exp  */
#line 693 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3486 "src/parser.c"
    break;

  case 134: /* exp: binary_exp "," exp  */
#line 695 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3498 "src/parser.c"
    break;

  case 136: /* binary_exp: binary_exp "@" decl_exp  */
#line 706 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3504 "src/parser.c"
    break;

  case 137: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 707 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3510 "src/parser.c"
    break;

  case 138: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 708 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3516 "src/parser.c"
    break;

  case 139: /* call_template: ":[" type_list "]"  */
#line 711 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3522 "src/parser.c"
    break;

  case 140: /* call_template: %empty  */
#line 711 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3528 "src/parser.c"
    break;

  case 146: /* array_exp: "[" exp "]"  */
#line 716 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3534 "src/parser.c"
    break;

  case 147: /* array_exp: "[" exp "]" array_exp  */
#line 717 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3542 "src/parser.c"
    break;

  case 148: /* array_exp: "[" exp "]" "[" "]"  */
#line 720 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3548 "src/parser.c"
    break;

  case 149: /* array_empty: "[" "]"  */
#line 724 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3554 "src/parser.c"
    break;

  case 150: /* array_empty: array_empty "[" "]"  */
#line 725 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3560 "src/parser.c"
    break;

  case 151: /* array_empty: array_empty array_exp  */
#line 726 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3566 "src/parser.c"
    break;

  case 152: /* dict_list: binary_exp ":" binary_exp  */
#line 730 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3572 "src/parser.c"
    break;

  case 153: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 731 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3578 "src/parser.c"
    break;

  case 154: /* range: "[" exp ":" exp "]"  */
#line 734 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3584 "src/parser.c"
    break;

  case 155: /* range: "[" exp ":" "]"  */
#line 735 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3590 "src/parser.c"
    break;

  case 156: /* range: "[" ":" exp "]"  */
#line 736 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3596 "src/parser.c"
    break;

  case 160: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 742 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3602 "src/parser.c"
    break;

  case 161: /* func_args: "(" arg_list  */
#line 744 "src/gwion.y"
                          { (yyval.default_args) = (yyvsp[0].default_args); }
#line 3608 "src/parser.c"
    break;

  case 162: /* func_args: "("  */
#line 744 "src/gwion.y"
                                             { (yyval.default_args) = (struct ParserArg){}; }
#line 3614 "src/parser.c"
    break;

  case 163: /* fptr_args: "(" fptr_list  */
#line 745 "src/gwion.y"
                         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3620 "src/parser.c"
    break;

  case 164: /* fptr_args: "("  */
#line 745 "src/gwion.y"
                                            { (yyval.arg_list) = NULL; }
#line 3626 "src/parser.c"
    break;

  case 165: /* arg_type: "..." ")"  */
#line 746 "src/gwion.y"
                    { (yyval.fbflag) = fbflag_variadic; }
#line 3632 "src/parser.c"
    break;

  case 166: /* arg_type: ")"  */
#line 746 "src/gwion.y"
                                                   { (yyval.fbflag) = 0; }
#line 3638 "src/parser.c"
    break;

  case 167: /* decl_template: ":[" specialized_list "]"  */
#line 748 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3644 "src/parser.c"
    break;

  case 168: /* decl_template: %empty  */
#line 748 "src/gwion.y"
                                                        { (yyval.specialized_list) = NULL; }
#line 3650 "src/parser.c"
    break;

  case 169: /* global: "global"  */
#line 750 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3656 "src/parser.c"
    break;

  case 171: /* opt_global: %empty  */
#line 751 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3662 "src/parser.c"
    break;

  case 172: /* storage_flag: "static"  */
#line 753 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3668 "src/parser.c"
    break;

  case 174: /* access_flag: "private"  */
#line 755 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3674 "src/parser.c"
    break;

  case 175: /* access_flag: "protect"  */
#line 756 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3680 "src/parser.c"
    break;

  case 176: /* flag: access_flag  */
#line 759 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3686 "src/parser.c"
    break;

  case 177: /* flag: storage_flag  */
#line 760 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3692 "src/parser.c"
    break;

  case 178: /* flag: access_flag storage_flag  */
#line 761 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3698 "src/parser.c"
    break;

  case 179: /* flag: %empty  */
#line 762 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3704 "src/parser.c"
    break;

  case 180: /* final: "final"  */
#line 765 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3710 "src/parser.c"
    break;

  case 181: /* final: %empty  */
#line 765 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3716 "src/parser.c"
    break;

  case 182: /* modifier: "abstract" final  */
#line 767 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3722 "src/parser.c"
    break;

  case 184: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 770 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].default_args).args;
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag) | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), &(yyvsp[0].stmt));
  }
#line 3732 "src/parser.c"
    break;

  case 185: /* func_def_base: "fun" func_base func_args arg_type ";"  */
#line 775 "src/gwion.y"
                                              {
    if((yyvsp[-2].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-3].func_base)->args = (yyvsp[-2].default_args).args;
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    SET_FLAG((yyvsp[-3].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), NULL);
  }
#line 3745 "src/parser.c"
    break;

  case 186: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_stmt  */
#line 783 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)));
  }
#line 3756 "src/parser.c"
    break;

  case 187: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_stmt  */
#line 789 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)));
  }
#line 3767 "src/parser.c"
    break;

  case 188: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 798 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3780 "src/parser.c"
    break;

  case 194: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 810 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3794 "src/parser.c"
    break;

  case 195: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 820 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3807 "src/parser.c"
    break;

  case 196: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 829 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3821 "src/parser.c"
    break;

  case 197: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 839 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].default_args).args, ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3830 "src/parser.c"
    break;

  case 198: /* operator: "operator"  */
#line 844 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3836 "src/parser.c"
    break;

  case 199: /* operator: "operator" global  */
#line 844 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3842 "src/parser.c"
    break;

  case 200: /* op_def: operator op_base code_stmt  */
#line 847 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), &(yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3848 "src/parser.c"
    break;

  case 201: /* op_def: operator op_base ";"  */
#line 849 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3854 "src/parser.c"
    break;

  case 202: /* op_def: operator "abstract" op_base ";"  */
#line 851 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3860 "src/parser.c"
    break;

  case 206: /* func_def: operator "new" func_args arg_type code_stmt  */
#line 855 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-4].flag), (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag) | (yyvsp[-2].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, &(yyvsp[0].stmt));
    }
#line 3870 "src/parser.c"
    break;

  case 207: /* func_def: operator "new" func_args arg_type ";"  */
#line 861 "src/gwion.y"
    {
      if((yyvsp[-2].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3882 "src/parser.c"
    break;

  case 208: /* func_def: operator "abstract" "new" func_args arg_type ";"  */
#line 869 "src/gwion.y"
    {
      if((yyvsp[-2].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 3894 "src/parser.c"
    break;

  case 209: /* type_decl_base: "<identifier>"  */
#line 878 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3900 "src/parser.c"
    break;

  case 210: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args arg_type func_effects ")"  */
#line 879 "src/gwion.y"
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
#line 3917 "src/parser.c"
    break;

  case 211: /* type_decl_tmpl: type_decl_base call_template  */
#line 894 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3923 "src/parser.c"
    break;

  case 212: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 895 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3929 "src/parser.c"
    break;

  case 214: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 900 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3935 "src/parser.c"
    break;

  case 215: /* option: "?"  */
#line 903 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3941 "src/parser.c"
    break;

  case 216: /* option: OPTIONS  */
#line 903 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3947 "src/parser.c"
    break;

  case 217: /* option: %empty  */
#line 903 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3953 "src/parser.c"
    break;

  case 218: /* type_decl_opt: type_decl_noflag option  */
#line 904 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3959 "src/parser.c"
    break;

  case 220: /* type_decl: type_decl_flag type_decl_opt  */
#line 905 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3965 "src/parser.c"
    break;

  case 221: /* type_decl_flag: "late"  */
#line 908 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3971 "src/parser.c"
    break;

  case 222: /* type_decl_flag: "const"  */
#line 909 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3977 "src/parser.c"
    break;

  case 223: /* opt_var: "var"  */
#line 911 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 3983 "src/parser.c"
    break;

  case 224: /* opt_var: %empty  */
#line 911 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 3989 "src/parser.c"
    break;

  case 225: /* type_decl_flag2: "var"  */
#line 913 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3995 "src/parser.c"
    break;

  case 227: /* union_decl: "<identifier>" ";"  */
#line 916 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 4004 "src/parser.c"
    break;

  case 228: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 920 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 4010 "src/parser.c"
    break;

  case 229: /* union_list: union_decl  */
#line 922 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), Union_Member, 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 4019 "src/parser.c"
    break;

  case 230: /* union_list: union_list union_decl  */
#line 926 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 4028 "src/parser.c"
    break;

  case 231: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 932 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4040 "src/parser.c"
    break;

  case 232: /* var_decl: "<identifier>"  */
#line 941 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4046 "src/parser.c"
    break;

  case 233: /* arg_decl: "<identifier>"  */
#line 943 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4052 "src/parser.c"
    break;

  case 235: /* fptr_arg_decl: %empty  */
#line 944 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4058 "src/parser.c"
    break;

  case 249: /* opt_exp: exp  */
#line 952 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4064 "src/parser.c"
    break;

  case 250: /* opt_exp: %empty  */
#line 952 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4070 "src/parser.c"
    break;

  case 252: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 955 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4076 "src/parser.c"
    break;

  case 253: /* con_exp: log_or_exp "?:" con_exp  */
#line 957 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4082 "src/parser.c"
    break;

  case 255: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 959 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4088 "src/parser.c"
    break;

  case 257: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 960 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4094 "src/parser.c"
    break;

  case 259: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 961 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4100 "src/parser.c"
    break;

  case 261: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 962 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4106 "src/parser.c"
    break;

  case 263: /* and_exp: and_exp "&" eq_exp  */
#line 963 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4112 "src/parser.c"
    break;

  case 265: /* eq_exp: eq_exp eq_op rel_exp  */
#line 964 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4118 "src/parser.c"
    break;

  case 267: /* rel_exp: rel_exp rel_op shift_exp  */
#line 965 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4124 "src/parser.c"
    break;

  case 269: /* shift_exp: shift_exp shift_op add_exp  */
#line 966 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4130 "src/parser.c"
    break;

  case 271: /* add_exp: add_exp add_op mul_exp  */
#line 967 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4136 "src/parser.c"
    break;

  case 273: /* mul_exp: mul_exp mul_op dur_exp  */
#line 968 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4142 "src/parser.c"
    break;

  case 275: /* dur_exp: dur_exp "::" cast_exp  */
#line 969 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4148 "src/parser.c"
    break;

  case 277: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 972 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4154 "src/parser.c"
    break;

  case 284: /* unary_exp: unary_op unary_exp  */
#line 979 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4160 "src/parser.c"
    break;

  case 285: /* unary_exp: "spork" unary_exp  */
#line 980 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4166 "src/parser.c"
    break;

  case 286: /* unary_exp: "fork" unary_exp  */
#line 981 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4172 "src/parser.c"
    break;

  case 287: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 982 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4180 "src/parser.c"
    break;

  case 288: /* unary_exp: "new" type_decl_exp  */
#line 985 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4186 "src/parser.c"
    break;

  case 289: /* unary_exp: "spork" code_stmt  */
#line 986 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), &(yyvsp[0].stmt), (yylsp[-1])); }
#line 4192 "src/parser.c"
    break;

  case 290: /* unary_exp: "fork" code_stmt  */
#line 987 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), &(yyvsp[0].stmt), (yylsp[-1])); }
#line 4198 "src/parser.c"
    break;

  case 291: /* unary_exp: "spork" captures code_stmt  */
#line 988 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), &(yyvsp[0].stmt), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4204 "src/parser.c"
    break;

  case 292: /* unary_exp: "fork" captures code_stmt  */
#line 989 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), &(yyvsp[0].stmt), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4210 "src/parser.c"
    break;

  case 293: /* unary_exp: "$" type_decl_empty  */
#line 990 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4216 "src/parser.c"
    break;

  case 294: /* lambda_list: "<identifier>"  */
#line 993 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4226 "src/parser.c"
    break;

  case 295: /* lambda_list: lambda_list "<identifier>"  */
#line 998 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4236 "src/parser.c"
    break;

  case 296: /* lambda_arg: "\\" lambda_list  */
#line 1003 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4242 "src/parser.c"
    break;

  case 297: /* lambda_arg: "\\"  */
#line 1003 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4248 "src/parser.c"
    break;

  case 298: /* type_list: type_decl_empty  */
#line 1006 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), Type_Decl*, 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4257 "src/parser.c"
    break;

  case 299: /* type_list: type_list "," type_decl_empty  */
#line 1010 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4266 "src/parser.c"
    break;

  case 300: /* call_paren: "(" exp ")"  */
#line 1016 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4272 "src/parser.c"
    break;

  case 301: /* call_paren: "(" ")"  */
#line 1016 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4278 "src/parser.c"
    break;

  case 304: /* dot_exp: post_exp "." "<identifier>"  */
#line 1020 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4291 "src/parser.c"
    break;

  case 306: /* post_exp: post_exp array_exp  */
#line 1031 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4297 "src/parser.c"
    break;

  case 307: /* post_exp: post_exp range  */
#line 1033 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4303 "src/parser.c"
    break;

  case 308: /* post_exp: post_exp call_template call_paren  */
#line 1035 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4310 "src/parser.c"
    break;

  case 309: /* post_exp: post_exp post_op  */
#line 1038 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4316 "src/parser.c"
    break;

  case 310: /* post_exp: dot_exp  */
#line 1039 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4322 "src/parser.c"
    break;

  case 311: /* interp_exp: "<interp string end>"  */
#line 1043 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4328 "src/parser.c"
    break;

  case 312: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1044 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4334 "src/parser.c"
    break;

  case 313: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1045 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4340 "src/parser.c"
    break;

  case 314: /* interp: "${" interp_exp  */
#line 1047 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4346 "src/parser.c"
    break;

  case 315: /* interp: interp "${" interp_exp  */
#line 1048 "src/gwion.y"
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
#line 4361 "src/parser.c"
    break;

  case 316: /* capture: "<identifier>"  */
#line 1059 "src/gwion.y"
            { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .pos = (yylsp[0]) };}
#line 4367 "src/parser.c"
    break;

  case 317: /* capture: "&" "<identifier>"  */
#line 1059 "src/gwion.y"
                                                                { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .is_ref = true, .pos = (yylsp[0]) }; }
#line 4373 "src/parser.c"
    break;

  case 318: /* _captures: capture  */
#line 1061 "src/gwion.y"
                   { (yyval.captures) = new_mp_vector(mpool(arg), Capture, 1); mp_vector_set((yyval.captures), Capture, 0, (yyvsp[0].capture)); }
#line 4379 "src/parser.c"
    break;

  case 319: /* _captures: _captures capture  */
#line 1062 "src/gwion.y"
                            { mp_vector_add(mpool(arg), &(yyvsp[-1].captures), Capture, (yyvsp[0].capture)); (yyval.captures) = (yyvsp[-1].captures); }
#line 4385 "src/parser.c"
    break;

  case 320: /* captures: ":" _captures ":"  */
#line 1063 "src/gwion.y"
                            { (yyval.captures) = (yyvsp[-1].captures); }
#line 4391 "src/parser.c"
    break;

  case 321: /* captures: %empty  */
#line 1063 "src/gwion.y"
                                            { (yyval.captures) = NULL; }
#line 4397 "src/parser.c"
    break;

  case 322: /* prim_exp: "<identifier>"  */
#line 1065 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4403 "src/parser.c"
    break;

  case 323: /* prim_exp: "<integer>"  */
#line 1066 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 4409 "src/parser.c"
    break;

  case 324: /* prim_exp: "<float>"  */
#line 1067 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4415 "src/parser.c"
    break;

  case 325: /* prim_exp: interp  */
#line 1068 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4421 "src/parser.c"
    break;

  case 326: /* prim_exp: "<litteral string>"  */
#line 1069 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4427 "src/parser.c"
    break;

  case 327: /* prim_exp: "<litteral char>"  */
#line 1070 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4433 "src/parser.c"
    break;

  case 328: /* prim_exp: array  */
#line 1071 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 4439 "src/parser.c"
    break;

  case 329: /* prim_exp: "{" dict_list "}"  */
#line 1072 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4445 "src/parser.c"
    break;

  case 330: /* prim_exp: range  */
#line 1073 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4451 "src/parser.c"
    break;

  case 331: /* prim_exp: "<<<" exp ">>>"  */
#line 1074 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4457 "src/parser.c"
    break;

  case 332: /* prim_exp: "(" exp ")"  */
#line 1075 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4463 "src/parser.c"
    break;

  case 333: /* prim_exp: "`foo`"  */
#line 1076 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last = { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4474 "src/parser.c"
    break;

  case 334: /* prim_exp: lambda_arg captures code_stmt  */
#line 1082 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-2]).first), (yyvsp[-2].arg_list), &(yyvsp[0].stmt), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4480 "src/parser.c"
    break;

  case 335: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1083 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg->st, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4486 "src/parser.c"
    break;

  case 336: /* prim_exp: "(" op_op ")"  */
#line 1084 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 4492 "src/parser.c"
    break;

  case 337: /* prim_exp: "perform" "<identifier>"  */
#line 1085 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4498 "src/parser.c"
    break;

  case 338: /* prim_exp: "(" ")"  */
#line 1086 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4504 "src/parser.c"
    break;


#line 4508 "src/parser.c"

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

#line 1088 "src/gwion.y"

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
