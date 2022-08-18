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
  YYSYMBOL_DEFER = 52,                     /* "defer"  */
  YYSYMBOL_BACKSLASH = 53,                 /* "\\"  */
  YYSYMBOL_OPID_A = 54,                    /* OPID_A  */
  YYSYMBOL_LOCALE = 55,                    /* LOCALE  */
  YYSYMBOL_LOCALE_INI = 56,                /* LOCALE_INI  */
  YYSYMBOL_LOCALE_END = 57,                /* LOCALE_END  */
  YYSYMBOL_LATE = 58,                      /* "late"  */
  YYSYMBOL_NUM = 59,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 60,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 61,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 62,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 63,              /* "${"  */
  YYSYMBOL_INTERP_EXP = 64,                /* INTERP_EXP  */
  YYSYMBOL_PP_COMMENT = 65,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 66,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 67,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 68,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 69,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 70,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 71,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 72,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 73,                  /* "#if"  */
  YYSYMBOL_PP_NL = 74,                     /* "\n"  */
  YYSYMBOL_PP_IMPORT = 75,                 /* "import"  */
  YYSYMBOL_SPREAD = 76,                    /* "}..."  */
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
  YYSYMBOL_code_list = 161,                /* code_list  */
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
  YYSYMBOL_defer_stmt = 179,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 180,           /* selection_stmt  */
  YYSYMBOL_breaks = 181,                   /* breaks  */
  YYSYMBOL_jump_stmt = 182,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 183,                 /* exp_stmt  */
  YYSYMBOL_exp = 184,                      /* exp  */
  YYSYMBOL_binary_exp = 185,               /* binary_exp  */
  YYSYMBOL_call_template = 186,            /* call_template  */
  YYSYMBOL_op = 187,                       /* op  */
  YYSYMBOL_array_exp = 188,                /* array_exp  */
  YYSYMBOL_array_empty = 189,              /* array_empty  */
  YYSYMBOL_dict_list = 190,                /* dict_list  */
  YYSYMBOL_range = 191,                    /* range  */
  YYSYMBOL_array = 192,                    /* array  */
  YYSYMBOL_decl_exp = 193,                 /* decl_exp  */
  YYSYMBOL_func_args = 194,                /* func_args  */
  YYSYMBOL_fptr_args = 195,                /* fptr_args  */
  YYSYMBOL_decl_template = 196,            /* decl_template  */
  YYSYMBOL_global = 197,                   /* global  */
  YYSYMBOL_opt_global = 198,               /* opt_global  */
  YYSYMBOL_storage_flag = 199,             /* storage_flag  */
  YYSYMBOL_access_flag = 200,              /* access_flag  */
  YYSYMBOL_flag = 201,                     /* flag  */
  YYSYMBOL_final = 202,                    /* final  */
  YYSYMBOL_modifier = 203,                 /* modifier  */
  YYSYMBOL_func_def_base = 204,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 205,            /* abstract_fdef  */
  YYSYMBOL_op_op = 206,                    /* op_op  */
  YYSYMBOL_op_base = 207,                  /* op_base  */
  YYSYMBOL_operator = 208,                 /* operator  */
  YYSYMBOL_op_def = 209,                   /* op_def  */
  YYSYMBOL_func_def = 210,                 /* func_def  */
  YYSYMBOL_type_decl_base = 211,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 212,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 213,         /* type_decl_noflag  */
  YYSYMBOL_option = 214,                   /* option  */
  YYSYMBOL_type_decl_opt = 215,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 216,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 217,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 218,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 219,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 220,               /* union_decl  */
  YYSYMBOL_union_list = 221,               /* union_list  */
  YYSYMBOL_union_def = 222,                /* union_def  */
  YYSYMBOL_var_decl = 223,                 /* var_decl  */
  YYSYMBOL_arg_decl = 224,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 225,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 226,                    /* eq_op  */
  YYSYMBOL_rel_op = 227,                   /* rel_op  */
  YYSYMBOL_shift_op = 228,                 /* shift_op  */
  YYSYMBOL_add_op = 229,                   /* add_op  */
  YYSYMBOL_mul_op = 230,                   /* mul_op  */
  YYSYMBOL_opt_exp = 231,                  /* opt_exp  */
  YYSYMBOL_con_exp = 232,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 233,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 234,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 235,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 236,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 237,                  /* and_exp  */
  YYSYMBOL_eq_exp = 238,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 239,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 240,                /* shift_exp  */
  YYSYMBOL_add_exp = 241,                  /* add_exp  */
  YYSYMBOL_mul_exp = 242,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 243,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 244,                 /* cast_exp  */
  YYSYMBOL_unary_op = 245,                 /* unary_op  */
  YYSYMBOL_unary_exp = 246,                /* unary_exp  */
  YYSYMBOL_lambda_list = 247,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 248,               /* lambda_arg  */
  YYSYMBOL_type_list = 249,                /* type_list  */
  YYSYMBOL_call_paren = 250,               /* call_paren  */
  YYSYMBOL_post_op = 251,                  /* post_op  */
  YYSYMBOL_dot_exp = 252,                  /* dot_exp  */
  YYSYMBOL_post_exp = 253,                 /* post_exp  */
  YYSYMBOL_interp_exp = 254,               /* interp_exp  */
  YYSYMBOL_interp = 255,                   /* interp  */
  YYSYMBOL_capture = 256,                  /* capture  */
  YYSYMBOL__captures = 257,                /* _captures  */
  YYSYMBOL_captures = 258,                 /* captures  */
  YYSYMBOL_prim_exp = 259                  /* prim_exp  */
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
#define YYFINAL  225
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2657

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  124
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  342
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  614

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
       0,   178,   178,   179,   182,   186,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   203,   205,   212,   221,   225,
     226,   230,   236,   237,   241,   245,   250,   250,   252,   258,
     258,   259,   259,   261,   266,   266,   268,   273,   279,   287,
     293,   297,   302,   305,   305,   306,   306,   308,   311,   317,
     317,   318,   318,   319,   328,   328,   330,   334,   339,   343,
     348,   353,   362,   373,   381,   382,   392,   394,   398,   404,
     406,   410,   411,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   427,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   444,   444,   454,
     459,   459,   460,   465,   481,   486,   486,   489,   494,   494,
     497,   509,   513,   518,   529,   540,   541,   545,   554,   564,
     574,   585,   598,   616,   625,   639,   646,   655,   666,   666,
     668,   673,   677,   682,   688,   693,   699,   700,   711,   712,
     713,   714,   717,   717,   719,   719,   719,   719,   719,   722,
     723,   726,   730,   731,   732,   736,   737,   740,   741,   742,
     746,   746,   747,   748,   749,   755,   755,   756,   756,   758,
     759,   765,   770,   772,   773,   773,   775,   775,   777,   778,
     781,   782,   783,   784,   787,   787,   789,   789,   792,   797,
     804,   810,   818,   827,   827,   827,   827,   827,   829,   839,
     848,   858,   864,   864,   866,   868,   870,   873,   873,   873,
     874,   880,   887,   896,   897,   911,   912,   916,   917,   920,
     920,   920,   921,   922,   922,   925,   926,   928,   928,   930,
     930,   933,   937,   939,   943,   949,   958,   960,   961,   961,
     963,   963,   964,   964,   964,   964,   965,   965,   966,   966,
     967,   967,   967,   969,   969,   970,   971,   973,   976,   976,
     977,   977,   978,   978,   979,   979,   980,   980,   981,   981,
     982,   982,   983,   983,   984,   984,   985,   985,   986,   986,
     988,   988,   991,   991,   991,   992,   992,   995,   996,   997,
     998,   999,  1002,  1003,  1004,  1005,  1006,  1007,  1010,  1015,
    1020,  1020,  1023,  1027,  1033,  1033,  1035,  1035,  1037,  1046,
    1047,  1049,  1051,  1054,  1056,  1060,  1061,  1062,  1064,  1065,
    1076,  1076,  1078,  1079,  1080,  1080,  1082,  1083,  1084,  1085,
    1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,  1099,  1100,
    1101,  1102,  1103
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
  "NOELSE", "union", "const", "...", "defer", "\\", "OPID_A", "LOCALE",
  "LOCALE_INI", "LOCALE_END", "late", "<integer>", "<float>",
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
  "code_list", "stmt_pp", "stmt", "spread_stmt", "$@1", "retry_stmt",
  "handler", "$@2", "handler_list", "try_stmt", "opt_id", "enum_def",
  "when_exp", "match_case_stmt", "match_list", "match_stmt", "flow",
  "loop_stmt", "defer_stmt", "selection_stmt", "breaks", "jump_stmt",
  "exp_stmt", "exp", "binary_exp", "call_template", "op", "array_exp",
  "array_empty", "dict_list", "range", "array", "decl_exp", "func_args",
  "fptr_args", "decl_template", "global", "opt_global", "storage_flag",
  "access_flag", "flag", "final", "modifier", "func_def_base",
  "abstract_fdef", "op_op", "op_base", "operator", "op_def", "func_def",
  "type_decl_base", "type_decl_tmpl", "type_decl_noflag", "option",
  "type_decl_opt", "type_decl", "type_decl_flag", "opt_var",
  "type_decl_flag2", "union_decl", "union_list", "union_def", "var_decl",
  "arg_decl", "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op",
  "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
  "inc_or_exp", "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp",
  "add_exp", "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp",
  "lambda_list", "lambda_arg", "type_list", "call_paren", "post_op",
  "dot_exp", "post_exp", "interp_exp", "interp", "capture", "_captures",
  "captures", "prim_exp", YY_NULLPTR
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

#define YYPACT_NINF (-441)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-251)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     579,  -441,  1647,  1760,   692,   219,  -441,    58,  -441,  1134,
    -441,    82,   107,   114,  2380,   219,  1514,  -441,  -441,  1134,
      42,   130,   219,   219,   141,   233,   141,  -441,  -441,   219,
     219,  -441,    87,  1134,   115,    20,   126,  -441,  -441,  -441,
    -441,  -441,  1822,  -441,  -441,  -441,  -441,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,   233,
     233,  2481,  2481,  2380,  -441,  -441,  -441,   209,   579,  -441,
    -441,  -441,  -441,  1134,  -441,   219,  -441,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,   234,  -441,  -441,  -441,    55,
    -441,  -441,   240,    39,  -441,   256,  -441,  -441,  -441,  -441,
    -441,   271,  -441,  -441,  -441,   219,  -441,  -441,    97,   148,
     161,   162,   169,    32,   202,   144,    94,   208,   188,   196,
    2540,  -441,   198,  -441,  -441,    27,   235,  -441,  -441,  2380,
    -441,   281,   301,  -441,  -441,  -441,  -441,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,   310,  -441,   312,  -441,
    -441,  -441,  -441,  -441,  2380,    34,  -441,   805,    25,   316,
    -441,  -441,  -441,  -441,   315,  -441,  -441,   264,   274,  2380,
      64,  2442,  1554,   248,   321,   259,  -441,   339,   313,  -441,
    -441,  -441,   265,   297,   266,  -441,   267,   219,  -441,    50,
    -441,   257,   238,   309,   170,  -441,   350,    26,  -441,   353,
     233,   279,   270,  -441,  -441,   280,   357,   283,  1884,  1822,
    -441,   300,  -441,  -441,  -441,   361,   918,    -5,  -441,  -441,
     358,  -441,  -441,   358,   272,  -441,  -441,  -441,   233,  2380,
    -441,   365,  -441,  2380,  2380,  2380,  2380,  1946,  -441,   338,
     315,   447,    73,   233,   233,  2380,  2540,  2540,  2540,  2540,
    2540,  2540,  -441,  -441,  2540,  2540,  2540,  -441,  2540,  -441,
    2540,  2540,   233,  -441,   360,  2008,   292,   233,   369,  -441,
    -441,  -441,  1822,   101,  -441,  -441,   367,   371,  2070,  -441,
    2380,  -441,    63,   147,  -441,   233,  -441,   233,   370,  2380,
     376,    48,  1554,    33,   359,   374,  -441,  -441,  -441,   313,
     282,   351,  -441,  -441,   282,   302,   233,   238,   318,  -441,
      26,  -441,  -441,  -441,  2132,  -441,  -441,   228,   372,   319,
     282,   318,  -441,   233,   390,  -441,   343,  -441,  1822,  2380,
    -441,  1031,  -441,   324,  -441,   -13,   918,  -441,  -441,  -441,
     325,   395,  -441,  -441,  -441,  -441,  -441,  -441,   399,   315,
     405,   171,   315,   282,   282,  -441,  -441,   282,    51,  -441,
     320,  -441,   148,   161,   162,   169,    32,   202,   144,    94,
     208,   188,   196,  -441,   918,  -441,  -441,  -441,   100,  2194,
    -441,  -441,  -441,  2256,  -441,  -441,   401,    45,  -441,   330,
    -441,   181,  -441,  -441,   333,   334,  1134,   412,  2380,  1134,
    2318,   336,   407,  2380,  -441,    80,   318,    42,  -441,    11,
     375,  -441,   302,   318,   211,   282,  -441,  -441,   306,  -441,
    -441,   330,  -441,   224,   344,   345,   423,   282,   418,   194,
    -441,   424,   425,   233,  -441,  -441,   428,  -441,  -441,  -441,
    -441,   282,  1134,   426,  -441,  -441,  -441,  -441,   431,   432,
     435,  2380,  -441,  -441,  2540,    36,   233,  -441,  -441,   436,
    -441,  -441,  2380,  -441,   352,   233,  -441,   282,   282,   416,
    -441,    68,  -441,  1134,   439,   356,  -441,  2380,   427,   417,
    -441,    67,  1134,   440,   302,   223,   233,   302,   446,   445,
    -441,  1324,  -441,   353,  -441,   377,  -441,  -441,   233,  -441,
    -441,  -441,  -441,  -441,   269,  -441,   233,   358,   450,  -441,
     437,  -441,  -441,   233,   233,   233,   452,  -441,  -441,  -441,
    -441,  -441,  2380,  -441,   353,  -441,  1134,  1134,  -441,  1134,
     407,    78,  2380,   368,  1134,  -441,  -441,  -441,  -441,    21,
    -441,  -441,   453,   579,  -441,  1419,  -441,  1229,  -441,  -441,
    -441,   372,  -441,  -441,   460,   386,  -441,   232,   391,  -441,
    -441,   358,  2380,   465,   466,   463,   468,   392,   -17,   472,
    -441,  -441,  -441,  2380,  1134,  -441,  1134,  -441,   470,   302,
     579,   579,   461,  -441,  -441,  -441,   473,  -441,   478,  -441,
    -441,  -441,  -441,   -17,  -441,   233,  -441,  -441,  -441,  -441,
      86,  -441,  1134,  -441,  -441,   474,  -441,  -441,  -441,   476,
    1134,  -441,  -441,  -441
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   135,     0,     0,     0,   183,   229,     0,   115,     0,
     116,     0,     0,     0,     0,   183,     0,   128,   129,     0,
     106,     0,   183,   183,   175,     0,   202,    51,    52,   183,
     183,   226,     0,     0,   301,     0,     0,   225,   327,   328,
     330,   331,     0,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   326,   306,   282,   307,   283,     0,
       0,     0,     0,     0,   286,   285,   337,     0,     2,     4,
       8,     9,    10,     6,    13,   183,    14,    89,    92,    40,
      96,    95,    94,    11,    90,     0,    87,    93,    88,     0,
      91,    86,     0,   136,   160,   161,   334,   332,   138,   207,
     208,     0,   209,     7,   230,   183,    12,   162,   255,   258,
     260,   262,   264,   266,   268,   270,   272,   274,   276,   278,
       0,   280,   325,   284,   314,   287,   329,   309,   342,     0,
     248,   282,   283,   251,   252,   148,   144,   245,   243,   244,
     242,   145,   246,   247,   146,   147,     0,   193,     0,   195,
     194,   197,   196,   152,     0,     0,    69,     0,   136,     0,
     176,   173,   178,   179,     0,   177,   181,   180,   185,     0,
       0,     0,     0,     0,     0,     0,   131,     0,     0,   105,
     341,    99,     0,   185,     0,   174,     0,   183,   213,     0,
      57,     0,   143,   217,   221,   223,    55,     0,   203,     0,
       0,     0,     0,   125,   298,   300,     0,     0,     0,     0,
     315,     0,   318,   297,    56,   292,     0,     0,   293,   289,
       0,   294,   290,     0,     0,     1,     5,    41,     0,     0,
     133,     0,   134,     0,     0,     0,     0,     0,   154,     0,
       0,     0,     0,     0,     0,   254,     0,     0,     0,     0,
       0,     0,   240,   241,     0,     0,     0,   249,     0,   250,
       0,     0,     0,   288,     0,     0,     0,     0,     0,   310,
     311,   313,     0,     0,   336,   340,     0,   149,     0,    70,
       0,   333,     0,     0,   182,     0,   184,     0,     0,     0,
     326,     0,     0,     0,     0,     0,   130,   100,   102,   104,
     172,   185,   187,    15,   172,    31,     0,   143,     0,   215,
       0,   219,   220,   222,     0,    54,   224,     0,    45,     0,
     172,     0,   299,    65,     0,    85,     0,   316,     0,   254,
      71,     0,   320,     0,   322,     0,     0,   295,   296,   335,
       0,     0,   132,   137,   141,   139,   140,   153,     0,     0,
       0,     0,     0,   172,   172,   205,   204,   172,     0,   253,
       0,   257,   259,   261,   263,   265,   267,   269,   271,   273,
     275,   277,   279,   281,     0,   338,   308,   302,     0,     0,
     312,   319,   159,     0,   150,   158,     0,   155,   166,     0,
      60,     0,   189,   188,     0,     0,     0,     0,     0,     0,
       0,     0,   228,     0,   111,     0,     0,   106,   103,     0,
      30,   186,    31,     0,     0,   172,   216,    36,     0,   218,
     168,   239,    67,     0,     0,    46,     0,   172,     0,     0,
      62,    64,     0,    65,    84,   317,     0,    72,   321,   324,
     323,   172,     0,     0,   206,   211,   210,   201,     0,     0,
       0,   254,   236,   163,     0,   136,     0,   142,   305,     0,
     151,   157,     0,   237,    59,     0,   165,   172,   172,   126,
     118,     0,   123,     0,     0,     0,   227,     0,   109,   114,
     112,     0,     0,     0,    31,     0,     0,    31,     0,    32,
      27,     0,    28,     0,    33,     0,   238,    66,     0,   167,
      43,    44,    48,    42,     0,    97,     0,     0,     0,   291,
      49,   117,   212,     0,     0,     0,     0,   256,   339,   303,
     304,   156,     0,    61,     0,    47,     0,     0,   119,     0,
     228,     0,     0,     0,     0,   107,   101,   171,    38,     0,
     169,    29,     0,    35,    20,    22,    24,     0,    19,    18,
      23,    45,    37,    68,   213,     0,   233,     0,     0,    63,
     191,     0,     0,     0,     0,     0,     0,     0,    58,     0,
     127,   124,   120,     0,     0,   108,     0,   113,     0,    31,
      35,    34,     0,    21,    26,    25,     0,   231,     0,   235,
     234,    98,   190,    50,    53,     0,   199,   200,   164,   192,
       0,   121,   110,   170,    39,     0,    17,   214,   232,     0,
       0,    16,   198,   122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -441,  -441,   487,   -66,   467,  -441,   -57,  -441,   -58,  -441,
    -441,  -441,  -441,  -390,  -441,   -89,  -286,  -441,    -3,  -441,
    -441,   -56,  -441,  -441,  -441,  -441,  -441,   -47,    10,   -18,
    -261,  -441,  -441,    65,     1,  -441,  -441,   -54,  -440,    -9,
    -441,  -441,  -441,   201,  -441,  -441,  -441,    90,  -441,  -441,
      98,  -441,  -441,   332,  -441,  -441,  -441,  -441,  -441,  -156,
       3,    -1,  -162,  -441,   -81,  -441,    43,   379,   314,    89,
    -187,  -428,  -268,   200,  -441,   341,  -441,    18,  -155,  -441,
    -441,  -441,   268,   273,  -441,  -441,  -430,   317,  -441,   203,
    -441,   322,  -441,   -21,   -19,  -441,   -43,  -441,  -441,   -51,
     102,  -441,  -441,  -105,  -103,   -98,   -97,  -302,  -235,  -441,
     275,   276,   277,   288,   289,   287,   290,   286,   285,   284,
     294,   -86,    -2,  -441,  -441,  -441,  -441,   -99,  -441,  -441,
    -184,  -441,   192,  -441,   -12,  -441
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    67,   581,    69,   182,    70,   544,   545,   546,   547,
     492,    71,   487,   414,    72,   582,   418,   485,    73,   199,
     425,   426,   164,    74,   563,    75,    76,   190,   215,   389,
     430,   391,   431,   432,   422,   423,    77,   218,    78,    79,
      80,   558,    81,   298,   407,   299,    82,   180,    83,   533,
     404,   405,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   268,   147,    94,    95,   159,    96,    97,    98,
     283,   318,   410,   165,   186,   166,   167,   183,   287,   303,
      99,   100,   148,   242,   101,   102,   103,   192,   193,   194,
     313,   195,   196,   104,   477,   105,   556,   557,   106,   453,
     464,   497,   254,   149,   150,   151,   152,   360,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   205,   122,   378,   380,   123,   124,   125,
     212,   126,   334,   335,   220,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     170,   157,   226,   158,   197,   146,   155,   191,   221,   255,
     178,   361,   256,   214,   238,   243,   292,   174,   258,   177,
     260,   390,   488,   168,   203,   327,   271,   436,   302,   233,
     309,   187,  -143,   175,   265,   429,   412,   401,   197,   197,
     233,   213,   277,   233,   269,   211,   518,   200,   201,   462,
     223,   548,   428,   351,   399,   187,   451,   161,   230,   219,
     222,   550,   483,   169,   227,   551,   224,   332,   187,   388,
     266,   495,   578,   234,   527,   332,   355,   535,   439,     8,
     197,    10,   336,   241,   574,   448,   449,   171,   381,   450,
     479,   484,   610,   228,   538,   333,   569,   542,   235,   236,
     206,   579,   403,   333,   456,   548,   188,   548,   457,    55,
     264,    57,   172,    31,   231,   234,   280,   550,   263,   173,
     481,    37,   179,   244,   402,   278,   234,   489,   273,   234,
     188,   452,   252,   181,   189,   234,   400,   253,   234,   267,
     235,   236,   354,   188,   435,   416,   411,   493,   227,   516,
     392,   235,   236,   243,   235,   236,   336,   276,   234,   503,
     235,   236,   443,   235,   236,   447,   337,   202,   234,   338,
     291,   189,   288,   510,   445,   130,   234,   257,   161,   197,
     336,   340,   319,   235,   236,   465,   245,   466,   356,   604,
     246,   234,   280,   235,   236,   204,   384,   358,   495,   524,
     525,   235,   236,   505,   523,   306,   208,   197,   247,   225,
     375,   326,   211,   331,   490,   158,   235,   236,   197,   517,
     491,   241,   197,   197,   185,   357,   198,   539,   498,   393,
     499,   540,   341,   187,   420,   207,   343,   187,   187,   229,
     348,   197,   589,   232,   373,   559,   197,   248,   359,   377,
     142,   143,   564,   565,   566,   160,   161,   162,   163,   311,
     312,   197,   255,   237,   197,   256,   197,   394,   155,   395,
     249,   258,   250,   260,   187,   211,   187,   251,    31,   387,
     261,   386,    31,    31,   262,   197,    37,  -249,   415,   217,
      37,    37,   397,   259,   133,   134,   197,   446,   272,   421,
     160,   161,   197,   137,   138,   139,   140,  -250,   188,   494,
     495,   239,   554,   188,   285,   286,   274,   348,   275,    31,
     282,    31,   227,   344,   345,   346,   281,    37,   293,    37,
     294,   211,   359,   331,   609,   549,   189,   301,   286,   295,
     189,   189,   296,   187,   297,   300,   304,   305,   308,   554,
     267,   188,   310,    55,    56,    57,    58,   314,   317,   320,
     322,   321,   323,   324,   328,   240,   329,   336,   342,   374,
     339,   331,   376,   455,   379,   382,   396,   189,   383,   189,
     398,   403,   459,   406,    64,    65,   348,   469,    31,   549,
     472,   549,   286,   413,   409,   433,    37,   471,   417,   427,
     434,   442,   424,   474,   438,   441,   478,   277,   444,   461,
     463,   454,   197,   467,   468,   470,   475,   486,   188,   476,
      55,    56,    57,    58,   500,   501,   502,   504,   506,   512,
     526,   507,   349,   511,   509,   197,   513,   514,   519,   214,
     515,   534,   520,   522,   197,   529,   189,   530,   537,   495,
     532,    64,    65,   560,   359,   543,   561,   552,   567,   576,
     562,   273,   580,   587,   528,   197,   588,   591,   594,   596,
     595,   606,   452,   536,   597,   599,   531,   197,   603,   607,
     421,   608,   612,   197,   611,   197,   555,    68,   583,   585,
     184,   605,   197,   197,   197,   586,   541,   482,   508,   553,
     408,   352,   289,   480,   270,   521,   307,   592,   284,   353,
     315,   573,   350,   419,   590,   226,   598,   570,   571,   316,
     572,   568,   362,   496,   363,   577,   364,   440,   130,    55,
     257,    57,   259,   133,   134,   575,   197,   135,   365,   555,
     366,   367,   369,   370,   371,   368,     0,   136,   137,   138,
     139,   140,   141,   142,   143,   372,     0,     0,     0,     0,
       0,   593,   144,   145,     0,   601,     0,     0,     0,     0,
       0,     0,   600,   602,   197,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,     0,     4,     0,
       5,     6,     7,   227,     8,     9,    10,    11,    12,    13,
      14,   613,     0,     0,    15,    16,    17,    18,    19,    20,
       0,    21,    22,    23,    24,     0,     0,     0,     0,     0,
       0,    25,     0,    26,    27,    28,    29,     0,    30,    31,
      32,    33,    34,     0,    35,    36,     0,    37,    38,    39,
      40,    41,    42,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,     0,    54,
       0,    55,    56,    57,    58,     0,     0,    59,     0,     0,
       0,     0,     0,    60,    61,    62,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,     1,    66,     2,     0,     3,
       0,     4,   156,     0,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,    19,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,    33,    34,     0,     0,    36,     0,
      37,    38,    39,    40,    41,    42,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
       0,     0,    54,     0,    55,    56,    57,    58,     0,     0,
      59,     0,     0,     0,     0,     0,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,     1,    66,
       2,     0,     3,     0,     4,   279,     0,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,    34,     0,
       0,    36,     0,    37,    38,    39,    40,    41,    42,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,    54,     0,    55,    56,    57,
      58,     0,     0,    59,     0,     0,     0,     0,     0,    60,
      61,    62,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,     1,    66,     2,     0,     3,     0,     4,   330,     0,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
      33,    34,     0,     0,    36,     0,    37,    38,    39,    40,
      41,    42,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     0,     0,     0,     0,    54,     0,
      55,    56,    57,    58,     0,     0,    59,     0,     0,     0,
       0,     0,    60,    61,    62,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,     1,    66,     2,     0,     3,     0,
       4,   437,     0,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,    33,    34,     0,     0,    36,     0,    37,
      38,    39,    40,    41,    42,     0,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,     0,
       0,    54,     0,    55,    56,    57,    58,     0,     0,    59,
       0,     0,     0,     0,     0,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,     0,     4,    64,    65,     6,     7,    66,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,    34,     0,     0,
      36,     0,    37,    38,    39,    40,    41,    42,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,    54,     0,    55,    56,    57,    58,
       0,     0,    59,     0,     0,     0,     0,     0,    60,    61,
      62,    63,     1,     0,     2,     0,     3,     0,   129,   584,
       5,     6,     0,     0,     0,     0,     0,    64,    65,     0,
       0,    66,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,    31,
       0,     0,    34,     0,    35,    36,     0,    37,    38,    39,
      40,    41,    42,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,     0,    54,
       0,    55,    56,    57,    58,     0,     0,    59,     0,     0,
       0,     0,     0,    60,    61,    62,    63,     1,     0,     2,
       0,     3,     0,   129,     0,     5,     6,     0,     0,     0,
       0,     0,    64,    65,     0,     0,    66,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,    31,     0,     0,    34,     0,    35,
      36,     0,    37,    38,    39,    40,    41,    42,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,    54,     0,    55,    56,    57,    58,
       0,     0,    59,     0,     0,     0,     0,     0,    60,    61,
      62,    63,     1,     0,     2,     0,     3,     0,   129,     0,
       0,     6,     0,     0,     0,     0,     0,    64,    65,     0,
       0,    66,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,    34,     0,     0,    36,     0,    37,    38,    39,
      40,    41,    42,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,     0,    54,
       0,    55,    56,    57,    58,     0,     0,    59,     0,     0,
       0,     0,     0,    60,    61,    62,    63,   176,     0,     2,
       0,     3,     0,   129,     0,     0,     6,     0,     0,     0,
       0,     0,    64,    65,     0,     0,    66,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,     0,   129,    31,     0,     6,    34,     0,     0,
       0,     0,    37,    38,    39,    40,    41,    42,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,    55,    56,    57,    58,
       0,     0,    59,     0,    31,     0,     0,    34,    60,    61,
      62,    63,    37,    38,    39,    40,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
       0,    66,     0,     0,    54,     0,    55,    56,    57,    58,
       0,     0,    59,     0,     0,     0,     0,     0,    60,    61,
      62,    63,     2,   128,     3,     0,   129,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
       0,    66,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
      34,     0,     0,     0,     0,    37,    38,    39,    40,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,   130,    55,
     131,    57,   132,   133,   134,    59,     0,   135,     0,     0,
       0,    60,    61,    62,    63,     0,     0,   136,   137,   138,
     139,   140,   141,   142,   143,     0,     0,     0,     0,     0,
      64,    65,   144,   145,    66,     2,     0,     3,   153,   129,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,    34,     0,     0,     0,     0,    37,    38,
      39,    40,    41,    42,     0,     0,     0,     2,     0,     3,
       0,   129,     0,     0,     6,     0,     0,     0,     0,     0,
      54,     0,    55,    56,    57,    58,     0,     0,    59,     0,
       0,   154,    20,     0,    60,    61,    62,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    64,    65,    34,     0,    66,     0,     0,
      37,    38,    39,    40,    41,    42,     0,     0,     0,     2,
       0,     3,     0,   129,     0,     0,     6,     0,     0,   209,
     210,     0,    54,     0,    55,    56,    57,    58,     0,     0,
      59,     0,     0,     0,    20,     0,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    64,    65,    34,     0,    66,
       0,   325,    37,    38,    39,    40,    41,    42,     0,     0,
       0,     2,     0,     3,   347,   129,     0,     0,     6,     0,
       0,     0,     0,     0,    54,     0,    55,    56,    57,    58,
       0,     0,    59,     0,     0,     0,    20,     0,    60,    61,
      62,    63,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    64,    65,    34,
       0,    66,     0,     0,    37,    38,    39,    40,    41,    42,
       0,     0,     0,     2,     0,     3,     0,   129,     0,     0,
       6,     0,     0,     0,     0,     0,    54,     0,    55,    56,
      57,    58,     0,     0,    59,     0,     0,     0,    20,     0,
      60,    61,    62,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    64,
      65,    34,     0,    66,     0,     0,    37,    38,    39,    40,
      41,    42,     0,     0,     0,     2,     0,     3,   385,   129,
       0,     0,     6,     0,     0,     0,     0,     0,    54,     0,
      55,    56,    57,    58,     0,     0,    59,     0,     0,   154,
      20,     0,    60,    61,    62,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    64,    65,    34,     0,    66,     0,     0,    37,    38,
      39,    40,    41,    42,     0,     0,     0,     2,     0,     3,
     153,   129,     0,     0,     6,     0,     0,     0,     0,     0,
      54,     0,    55,    56,    57,    58,     0,     0,    59,     0,
       0,     0,    20,     0,    60,    61,    62,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    64,    65,    34,     0,    66,     0,     0,
      37,    38,    39,    40,    41,    42,     0,     0,     0,     2,
     458,     3,     0,   129,     0,     0,     6,     0,     0,     0,
       0,     0,    54,     0,    55,    56,    57,    58,     0,     0,
      59,     0,     0,     0,    20,     0,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    64,    65,    34,     0,    66,
       0,     0,    37,    38,    39,    40,    41,    42,     0,     0,
       0,     2,     0,     3,   460,   129,     0,     0,     6,     0,
       0,     0,     0,     0,    54,     0,    55,    56,    57,    58,
       0,     0,    59,     0,     0,     0,    20,     0,    60,    61,
      62,    63,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    64,    65,    34,
       0,    66,     0,     0,    37,    38,    39,    40,    41,    42,
       0,     0,     0,     2,   473,     3,     0,   129,     0,     0,
       6,     0,     0,     0,     0,     0,    54,     0,    55,    56,
      57,    58,     0,     0,    59,     0,     0,     0,    20,     0,
      60,    61,    62,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    64,
      65,    34,     0,    66,     0,     0,    37,    38,    39,    40,
      41,    42,     0,     0,     0,     2,     0,     3,     0,   129,
       0,     0,     6,     0,     0,     0,     0,     0,    54,     0,
      55,    56,    57,    58,     0,     0,    59,     0,     0,     0,
      20,     0,    60,    61,    62,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    64,    65,    34,     0,    66,     0,     0,    37,    38,
      39,    40,    41,    42,     0,     0,     0,     2,     0,     3,
       0,   129,     0,     0,     6,     0,     0,     0,     0,     0,
      54,     0,    55,    56,    57,    58,     0,     0,    59,     0,
       0,     0,    20,     0,    60,    61,    62,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
     216,     0,    31,    64,    65,    34,     0,    66,     0,     0,
      37,    38,    39,    40,    41,    42,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   290,     0,    55,    56,    57,    58,     0,     0,
      59,     0,     0,     0,    34,     0,    60,    61,    62,    63,
      38,    39,    40,    41,    42,     2,     0,     3,     0,   129,
       0,     0,     0,     0,     0,    64,    65,     0,     0,    66,
       0,    54,     0,    55,    56,    57,    58,     0,     0,    59,
      20,     0,   217,     0,     0,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    64,    65,     0,     0,    66,    38,
      39,    40,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,     0,    55,    56,    57,    58,     0,     0,    59,     0,
       0,     0,     0,     0,    60,    61,    62,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
       9,     4,    68,     4,    25,     2,     3,    25,    62,   114,
      19,   246,   115,    60,    95,   101,   172,    14,   116,    16,
     117,   282,   412,     5,    33,   209,   125,   329,   183,     4,
     192,     5,     5,    15,     7,   321,   304,     4,    59,    60,
       4,    59,     8,     4,   125,    42,    10,    29,    30,     4,
      62,   491,   320,   240,     6,     5,     5,    37,     3,    61,
      62,   491,    51,     5,    73,   493,    63,    80,     5,     6,
      43,     4,    51,    90,     6,    80,     3,    10,    91,    15,
     101,    17,     9,   101,     6,   353,   354,     5,   272,   357,
      10,    80,     6,    75,   484,   108,   524,   487,   115,   116,
      80,    80,    22,   108,     4,   545,    80,   547,     8,    82,
     122,    84,     5,    50,    59,    90,    91,   547,   120,     5,
     406,    58,    80,   105,    91,    91,    90,   413,   129,    90,
      80,    80,   100,     3,   108,    90,   292,   105,    90,   112,
     115,   116,   241,    80,   328,   307,   301,   415,   157,   451,
       3,   115,   116,   239,   115,   116,     9,   154,    90,   427,
     115,   116,   349,   115,   116,   352,   220,    80,    90,   223,
     171,   108,   169,   441,     3,    81,    90,    83,    37,   200,
       9,   228,   200,   115,   116,     4,    89,     6,   242,   579,
      93,    90,    91,   115,   116,    80,   277,   244,     4,   467,
     468,   115,   116,     9,   465,   187,    80,   228,   111,     0,
     264,   208,   209,   216,     3,   216,   115,   116,   239,   454,
       9,   239,   243,   244,    24,   243,    26,     4,     4,   283,
       6,     8,   229,     5,     6,    35,   233,     5,     5,     5,
     237,   262,    10,     3,   262,   506,   267,    99,   245,   267,
     106,   107,   513,   514,   515,    36,    37,    38,    39,    89,
      90,   282,   367,     7,   285,   368,   287,   285,   265,   287,
     109,   369,   110,   370,     5,   272,     5,   108,    50,   280,
      92,   278,    50,    50,    88,   306,    58,     6,   306,    91,
      58,    58,   289,    85,    86,    87,   317,   351,    63,   317,
      36,    37,   323,   101,   102,   103,   104,     6,    80,     3,
       4,    40,    80,    80,    40,    41,     6,   314,     6,    50,
       5,    50,   331,   234,   235,   236,    10,    58,    80,    58,
       9,   328,   329,   336,   595,   491,   108,    40,    41,    80,
     108,   108,     3,     5,    31,    80,    80,    80,    91,    80,
     112,    80,    43,    82,    83,    84,    85,     7,     5,    80,
      80,    91,     5,    80,    64,    94,     5,     9,     3,     9,
      98,   374,    80,   374,     5,     8,     6,   108,     7,   108,
       4,    22,   379,     9,   113,   114,   383,   396,    50,   545,
     399,   547,    41,    91,   112,     5,    58,   398,    80,    80,
      57,     6,    30,   400,    80,    80,   403,     8,     3,     8,
      80,    91,   433,    80,    80,     3,    80,    42,    80,    12,
      82,    83,    84,    85,    80,    80,     3,     9,     4,     3,
      14,     6,    94,   442,     6,   456,     5,     5,   456,   486,
       5,    24,     6,    91,   465,     6,   108,    91,     8,     4,
      23,   113,   114,   507,   451,     9,     6,    80,     6,    91,
      23,   462,     9,     3,   473,   486,    80,    76,     3,     6,
       4,    10,    80,   482,     6,     3,   477,   498,     8,     6,
     498,     3,     6,   504,    10,   506,   504,     0,   545,   547,
      23,   580,   513,   514,   515,   551,   486,   407,   433,   498,
     299,    54,   170,   405,   125,   462,   189,   561,   167,   241,
     196,   530,   239,   310,   557,   581,   567,   526,   527,   197,
     529,   522,   247,   421,   248,   534,   249,   335,    81,    82,
      83,    84,    85,    86,    87,   532,   557,    90,   250,   557,
     251,   254,   256,   258,   260,   255,    -1,   100,   101,   102,
     103,   104,   105,   106,   107,   261,    -1,    -1,    -1,    -1,
      -1,   562,   115,   116,    -1,   574,    -1,    -1,    -1,    -1,
      -1,    -1,   573,   576,   595,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,    -1,     9,    -1,
      11,    12,    13,   602,    15,    16,    17,    18,    19,    20,
      21,   610,    -1,    -1,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    -1,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    80,
      -1,    82,    83,    84,    85,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,     3,   117,     5,    -1,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,     3,   117,
       5,    -1,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,
      85,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,     3,   117,     5,    -1,     7,    -1,     9,    10,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,     3,   117,     5,    -1,     7,    -1,
       9,    10,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,    -1,     9,   113,   114,    12,    13,   117,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,     3,    -1,     5,    -1,     7,    -1,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    80,
      -1,    82,    83,    84,    85,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,     3,    -1,     5,
      -1,     7,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   117,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,     3,    -1,     5,    -1,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    80,
      -1,    82,    83,    84,    85,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,     3,    -1,     5,
      -1,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   117,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,    -1,     9,    50,    -1,    12,    53,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,
      -1,    -1,    88,    -1,    50,    -1,    -1,    53,    94,    95,
      96,    97,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,   117,    -1,    -1,    80,    -1,    82,    83,    84,    85,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,     5,     6,     7,    -1,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,   117,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    -1,    -1,
      -1,    94,    95,    96,    97,    -1,    -1,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,
     113,   114,   115,   116,   117,     5,    -1,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,     5,    -1,     7,
      -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    82,    83,    84,    85,    -1,    -1,    88,    -1,
      -1,    91,    30,    -1,    94,    95,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,   113,   114,    53,    -1,   117,    -1,    -1,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,     5,
      -1,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,    77,
      78,    -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    -1,    30,    -1,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,   113,   114,    53,    -1,   117,
      -1,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,     5,    -1,     7,     8,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,
      -1,    -1,    88,    -1,    -1,    -1,    30,    -1,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,   113,   114,    53,
      -1,   117,    -1,    -1,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,     5,    -1,     7,    -1,     9,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,
      84,    85,    -1,    -1,    88,    -1,    -1,    -1,    30,    -1,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,   113,
     114,    53,    -1,   117,    -1,    -1,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,     5,    -1,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    91,
      30,    -1,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,   113,   114,    53,    -1,   117,    -1,    -1,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,     5,    -1,     7,
       8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    82,    83,    84,    85,    -1,    -1,    88,    -1,
      -1,    -1,    30,    -1,    94,    95,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,   113,   114,    53,    -1,   117,    -1,    -1,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,     5,
       6,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    -1,    30,    -1,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,   113,   114,    53,    -1,   117,
      -1,    -1,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,     5,    -1,     7,     8,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,
      -1,    -1,    88,    -1,    -1,    -1,    30,    -1,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,   113,   114,    53,
      -1,   117,    -1,    -1,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,     5,     6,     7,    -1,     9,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,
      84,    85,    -1,    -1,    88,    -1,    -1,    -1,    30,    -1,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,   113,
     114,    53,    -1,   117,    -1,    -1,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,     5,    -1,     7,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    -1,
      30,    -1,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,   113,   114,    53,    -1,   117,    -1,    -1,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,     5,    -1,     7,
      -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    82,    83,    84,    85,    -1,    -1,    88,    -1,
      -1,    -1,    30,    -1,    94,    95,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
       9,    -1,    50,   113,   114,    53,    -1,   117,    -1,    -1,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    -1,    53,    -1,    94,    95,    96,    97,
      59,    60,    61,    62,    63,     5,    -1,     7,    -1,     9,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   117,
      -1,    80,    -1,    82,    83,    84,    85,    -1,    -1,    88,
      30,    -1,    91,    -1,    -1,    94,    95,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,   113,   114,    -1,    -1,   117,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    82,    83,    84,    85,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,   117
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    32,    33,    34,    35,    42,    44,    45,    46,    47,
      49,    50,    51,    52,    53,    55,    56,    58,    59,    60,
      61,    62,    63,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    80,    82,    83,    84,    85,    88,
      94,    95,    96,    97,   113,   114,   117,   125,   126,   127,
     129,   135,   138,   142,   147,   149,   150,   160,   162,   163,
     164,   166,   170,   172,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   188,   189,   191,   192,   193,   204,
     205,   208,   209,   210,   217,   219,   222,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   248,   251,   252,   253,   255,   259,     6,     9,
      81,    83,    85,    86,    87,    90,   100,   101,   102,   103,
     104,   105,   106,   107,   115,   116,   184,   187,   206,   227,
     228,   229,   230,     8,    91,   184,    10,   142,   185,   190,
      36,    37,    38,    39,   146,   197,   199,   200,   201,     5,
     163,     5,     5,     5,   184,   201,     3,   184,   163,    80,
     171,     3,   128,   201,   128,   197,   198,     5,    80,   108,
     151,   153,   211,   212,   213,   215,   216,   217,   197,   143,
     201,   201,    80,   163,    80,   247,    80,   197,    80,    77,
      78,   184,   254,   153,   151,   152,     9,    91,   161,   246,
     258,   161,   246,   258,   184,     0,   127,   163,   201,     5,
       3,    59,     3,     4,    90,   115,   116,     7,   188,    40,
      94,   153,   207,   245,   201,    89,    93,   111,    99,   109,
     110,   108,   100,   105,   226,   227,   228,    83,   229,    85,
     230,    92,    88,   246,   258,     7,    43,   112,   186,   188,
     191,   251,    63,   185,     6,     6,   184,     8,    91,    10,
      91,    10,     5,   194,   199,    40,    41,   202,   184,   177,
      80,   185,   183,    80,     9,    80,     3,    31,   167,   169,
      80,    40,   202,   203,    80,    80,   201,   211,    91,   186,
      43,    89,    90,   214,     7,   192,   215,     5,   195,   153,
      80,    91,    80,     5,    80,    57,   184,   254,    64,     5,
      10,   142,    80,   108,   256,   257,     9,   161,   161,    98,
     151,   184,     3,   184,   193,   193,   193,     8,   184,    94,
     207,   194,    54,   206,   251,     3,   161,   153,   151,   184,
     231,   232,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   153,     9,   161,    80,   153,   249,     5,
     250,   254,     8,     7,   188,     8,   184,   185,     6,   153,
     154,   155,     3,   161,   153,   153,     6,   184,     4,     6,
     183,     4,    91,    22,   174,   175,     9,   168,   167,   112,
     196,   202,   196,    91,   137,   153,   186,    80,   140,   213,
       6,   153,   158,   159,    30,   144,   145,    80,   196,   140,
     154,   156,   157,     5,    57,   254,   231,    10,    80,    91,
     256,    80,     6,   194,     3,     3,   161,   194,   196,   196,
     196,     5,    80,   223,    91,   185,     4,     8,     6,   184,
       8,     8,     4,    80,   224,     4,     6,    80,    80,   163,
       3,   185,   163,     6,   184,    80,    12,   218,   184,    10,
     174,   140,   171,    51,    80,   141,    42,   136,   137,   140,
       3,     9,   134,   196,     3,     4,   224,   225,     4,     6,
      80,    80,     3,   196,     9,     9,     4,     6,   157,     6,
     196,   163,     3,     5,     5,     5,   231,   232,    10,   153,
       6,   190,    91,   154,   196,   196,    14,     6,   163,     6,
      91,   185,    23,   173,    24,    10,   163,     8,   137,     4,
       8,   152,   137,     9,   130,   131,   132,   133,   162,   183,
     210,   195,    80,   158,    80,   153,   220,   221,   165,   154,
     161,     6,    23,   148,   154,   154,   154,     6,   185,   195,
     163,   163,   163,   218,     6,   184,    91,   163,    51,    80,
       9,   126,   139,   130,    10,   132,   145,     3,    80,    10,
     220,    76,   161,   185,     3,     4,     6,     6,   223,     3,
     185,   163,   142,     8,   137,   139,    10,     6,     3,   154,
       6,    10,     6,   163
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
     160,   161,   161,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   165,   164,   166,
     168,   167,   169,   169,   170,   171,   171,   172,   173,   173,
     174,   175,   175,   176,   176,   177,   177,   178,   178,   178,
     178,   178,   178,   178,   178,   179,   180,   180,   181,   181,
     182,   182,   182,   182,   183,   183,   184,   184,   185,   185,
     185,   185,   186,   186,   187,   187,   187,   187,   187,   188,
     188,   188,   189,   189,   189,   190,   190,   191,   191,   191,
     192,   192,   193,   193,   193,   194,   194,   195,   195,   196,
     196,   196,   196,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   201,   201,   202,   202,   203,   203,   204,   204,
     204,   204,   205,   206,   206,   206,   206,   206,   207,   207,
     207,   207,   208,   208,   209,   209,   209,   210,   210,   210,
     210,   210,   210,   211,   211,   212,   212,   213,   213,   214,
     214,   214,   215,   216,   216,   217,   217,   218,   218,   219,
     219,   220,   220,   221,   221,   222,   223,   224,   225,   225,
     226,   226,   227,   227,   227,   227,   228,   228,   229,   229,
     230,   230,   230,   231,   231,   232,   232,   232,   233,   233,
     234,   234,   235,   235,   236,   236,   237,   237,   238,   238,
     239,   239,   240,   240,   241,   241,   242,   242,   243,   243,
     244,   244,   245,   245,   245,   245,   245,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   247,   247,
     248,   248,   249,   249,   250,   250,   251,   251,   252,   253,
     253,   253,   253,   253,   253,   254,   254,   254,   255,   255,
     256,   256,   257,   257,   258,   258,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     9,     8,     1,     1,
       1,     2,     1,     1,     1,     2,     3,     1,     5,     2,
       0,     0,     2,     5,     1,     0,     1,     3,     2,     4,
       1,     2,     4,     2,     2,     0,     1,     5,     5,     0,
       2,     1,     1,     7,     2,     1,     1,     1,     4,     2,
       1,     3,     1,     3,     1,     0,     2,     1,     3,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     7,     2,
       0,     4,     1,     2,     3,     1,     0,     6,     2,     0,
       5,     1,     2,     7,     5,     1,     1,     5,     5,     6,
       7,     8,    10,     5,     7,     2,     5,     7,     1,     1,
       3,     2,     3,     2,     2,     1,     1,     3,     1,     3,
       3,     3,     3,     0,     1,     1,     1,     1,     1,     3,
       4,     5,     2,     3,     2,     3,     5,     5,     4,     4,
       1,     1,     1,     4,     7,     3,     2,     3,     2,     3,
       5,     3,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     0,     2,     1,     4,     4,
       7,     6,     8,     1,     1,     1,     1,     1,     8,     6,
       6,     3,     1,     2,     3,     3,     4,     1,     1,     1,
       4,     4,     5,     1,     7,     2,     3,     1,     3,     1,
       1,     0,     2,     1,     2,     1,     1,     1,     0,     1,
       1,     2,     3,     1,     2,     7,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     5,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     5,     2,     2,     2,     3,     3,     2,     1,     2,
       2,     1,     1,     3,     3,     2,     1,     1,     3,     1,
       2,     2,     3,     2,     1,     1,     2,     3,     2,     3,
       1,     2,     1,     2,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     1,     3,     5,
       3,     2,     2
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
#line 178 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2568 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 179 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2574 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 182 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2583 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 186 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2592 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 192 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2598 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 193 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2604 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 194 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2610 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 195 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2616 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 196 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2622 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 197 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2628 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 198 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2634 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 199 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2640 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 200 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2646 "src/parser.c"
    break;

  case 15: /* class_flag: flag modifier  */
#line 203 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2652 "src/parser.c"
    break;

  case 16: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 206 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2663 "src/parser.c"
    break;

  case 17: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 213 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2675 "src/parser.c"
    break;

  case 18: /* trait_stmt: exp_stmt  */
#line 221 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2685 "src/parser.c"
    break;

  case 20: /* trait_stmt_list: trait_stmt  */
#line 226 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2694 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 230 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2703 "src/parser.c"
    break;

  case 22: /* trait_section: trait_stmt_list  */
#line 236 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2709 "src/parser.c"
    break;

  case 23: /* trait_section: func_def  */
#line 237 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2715 "src/parser.c"
    break;

  case 24: /* trait_ast: trait_section  */
#line 241 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2724 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_ast trait_section  */
#line 245 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2733 "src/parser.c"
    break;

  case 26: /* trait_body: "{" trait_ast "}"  */
#line 250 "src/gwion.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 2739 "src/parser.c"
    break;

  case 27: /* trait_body: ";"  */
#line 250 "src/gwion.y"
                                                   { (yyval.ast) = NULL; }
#line 2745 "src/parser.c"
    break;

  case 28: /* trait_def: "trait" opt_global "<identifier>" traits trait_body  */
#line 253 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2754 "src/parser.c"
    break;

  case 29: /* class_ext: "extends" type_decl_exp  */
#line 258 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2760 "src/parser.c"
    break;

  case 30: /* class_ext: %empty  */
#line 258 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2766 "src/parser.c"
    break;

  case 31: /* traits: %empty  */
#line 259 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2772 "src/parser.c"
    break;

  case 32: /* traits: ":" id_list  */
#line 259 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2778 "src/parser.c"
    break;

  case 33: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 261 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2786 "src/parser.c"
    break;

  case 35: /* class_body: %empty  */
#line 266 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2792 "src/parser.c"
    break;

  case 36: /* id_list: "<identifier>"  */
#line 269 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), Symbol, 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2801 "src/parser.c"
    break;

  case 37: /* id_list: id_list "," "<identifier>"  */
#line 274 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2810 "src/parser.c"
    break;

  case 38: /* specialized_list: "<identifier>" traits  */
#line 279 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2823 "src/parser.c"
    break;

  case 39: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 287 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2833 "src/parser.c"
    break;

  case 40: /* stmt_list: stmt  */
#line 293 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2842 "src/parser.c"
    break;

  case 41: /* stmt_list: stmt_list stmt  */
#line 297 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2851 "src/parser.c"
    break;

  case 42: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 302 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2858 "src/parser.c"
    break;

  case 43: /* _func_effects: "perform" "<identifier>"  */
#line 305 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2864 "src/parser.c"
    break;

  case 44: /* _func_effects: _func_effects "<identifier>"  */
#line 305 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2870 "src/parser.c"
    break;

  case 45: /* func_effects: %empty  */
#line 306 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2876 "src/parser.c"
    break;

  case 46: /* func_effects: _func_effects  */
#line 306 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2882 "src/parser.c"
    break;

  case 47: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 308 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2889 "src/parser.c"
    break;

  case 48: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 311 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2899 "src/parser.c"
    break;

  case 49: /* typedef_when: %empty  */
#line 317 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2905 "src/parser.c"
    break;

  case 50: /* typedef_when: "when" binary_exp  */
#line 317 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2911 "src/parser.c"
    break;

  case 51: /* type_def_type: "typedef"  */
#line 318 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2917 "src/parser.c"
    break;

  case 52: /* type_def_type: "distinct"  */
#line 318 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2923 "src/parser.c"
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
#line 2936 "src/parser.c"
    break;

  case 54: /* type_decl_array: type_decl array  */
#line 328 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2942 "src/parser.c"
    break;

  case 56: /* type_decl_exp: type_decl_array  */
#line 330 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2950 "src/parser.c"
    break;

  case 57: /* type_decl_empty: type_decl_array  */
#line 334 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2958 "src/parser.c"
    break;

  case 58: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 339 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2967 "src/parser.c"
    break;

  case 59: /* arg: type_decl_empty arg_decl  */
#line 343 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 2976 "src/parser.c"
    break;

  case 60: /* arg_list: arg  */
#line 348 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2986 "src/parser.c"
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
#line 2998 "src/parser.c"
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
#line 3014 "src/parser.c"
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
#line 3026 "src/parser.c"
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
#line 3040 "src/parser.c"
    break;

  case 66: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 392 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 3046 "src/parser.c"
    break;

  case 67: /* fptr_list: fptr_arg  */
#line 394 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 3055 "src/parser.c"
    break;

  case 68: /* fptr_list: fptr_list "," fptr_arg  */
#line 398 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 3064 "src/parser.c"
    break;

  case 69: /* code_stmt: "{" "}"  */
#line 404 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 3071 "src/parser.c"
    break;

  case 70: /* code_stmt: "{" stmt_list "}"  */
#line 406 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 3078 "src/parser.c"
    break;

  case 71: /* code_list: "{" "}"  */
#line 410 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 0); }
#line 3084 "src/parser.c"
    break;

  case 72: /* code_list: "{" stmt_list "}"  */
#line 411 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3090 "src/parser.c"
    break;

  case 73: /* stmt_pp: "<comment>"  */
#line 414 "src/gwion.y"
               { /*if(!arg->ppa->lint)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 3096 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#include"  */
#line 415 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 3102 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#define"  */
#line 416 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 3108 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#pragma"  */
#line 417 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 3114 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#undef"  */
#line 418 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 3120 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#ifdef"  */
#line 419 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 3126 "src/parser.c"
    break;

  case 79: /* stmt_pp: "#ifndef"  */
#line 420 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 3132 "src/parser.c"
    break;

  case 80: /* stmt_pp: "#else"  */
#line 421 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 3138 "src/parser.c"
    break;

  case 81: /* stmt_pp: "#if"  */
#line 422 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 3144 "src/parser.c"
    break;

  case 82: /* stmt_pp: "\n"  */
#line 423 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 3150 "src/parser.c"
    break;

  case 83: /* stmt_pp: "import"  */
#line 424 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 3156 "src/parser.c"
    break;

  case 84: /* stmt_pp: LOCALE_INI "<identifier>" exp LOCALE_END  */
#line 425 "src/gwion.y"
                                 { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = (yyvsp[-1].exp), .xid = (yyvsp[-2].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-3]) }; }
#line 3163 "src/parser.c"
    break;

  case 85: /* stmt_pp: LOCALE_INI "<identifier>" LOCALE_END  */
#line 427 "src/gwion.y"
                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = (yyvsp[-1].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-2]) }; }
#line 3170 "src/parser.c"
    break;

  case 97: /* $@1: %empty  */
#line 444 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3176 "src/parser.c"
    break;

  case 98: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 444 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .xid = (yyvsp[-5].sym),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
    .pos = (yylsp[-2]).first
  };
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_spread, .d = { .stmt_spread = spread }, .pos = (yylsp[-5])};
}
#line 3190 "src/parser.c"
    break;

  case 99: /* retry_stmt: "retry" ";"  */
#line 454 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3200 "src/parser.c"
    break;

  case 100: /* $@2: %empty  */
#line 459 "src/gwion.y"
                  { arg->handling = true; }
#line 3206 "src/parser.c"
    break;

  case 101: /* handler: "handle" $@2 opt_id stmt  */
#line 459 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3212 "src/parser.c"
    break;

  case 102: /* handler_list: handler  */
#line 460 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), Handler, 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3222 "src/parser.c"
    break;

  case 103: /* handler_list: handler_list handler  */
#line 465 "src/gwion.y"
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
#line 3243 "src/parser.c"
    break;

  case 104: /* try_stmt: "try" stmt handler_list  */
#line 481 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3252 "src/parser.c"
    break;

  case 106: /* opt_id: %empty  */
#line 486 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3258 "src/parser.c"
    break;

  case 107: /* enum_def: "enum" flag "<identifier>" "{" id_list "}"  */
#line 489 "src/gwion.y"
                                   {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
  }
#line 3267 "src/parser.c"
    break;

  case 108: /* when_exp: "when" exp  */
#line 494 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3273 "src/parser.c"
    break;

  case 109: /* when_exp: %empty  */
#line 494 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3279 "src/parser.c"
    break;

  case 110: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 497 "src/gwion.y"
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
#line 3295 "src/parser.c"
    break;

  case 111: /* match_list: match_case_stmt  */
#line 509 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3304 "src/parser.c"
    break;

  case 112: /* match_list: match_list match_case_stmt  */
#line 513 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3313 "src/parser.c"
    break;

  case 113: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 518 "src/gwion.y"
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
#line 3328 "src/parser.c"
    break;

  case 114: /* match_stmt: "match" exp "{" match_list "}"  */
#line 529 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3342 "src/parser.c"
    break;

  case 115: /* flow: "while"  */
#line 540 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3348 "src/parser.c"
    break;

  case 116: /* flow: "until"  */
#line 541 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3354 "src/parser.c"
    break;

  case 117: /* loop_stmt: flow "(" exp ")" stmt  */
#line 546 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3367 "src/parser.c"
    break;

  case 118: /* loop_stmt: "do" stmt flow exp ";"  */
#line 555 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3381 "src/parser.c"
    break;

  case 119: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 565 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3395 "src/parser.c"
    break;

  case 120: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 575 "src/gwion.y"
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
#line 3410 "src/parser.c"
    break;

  case 121: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 586 "src/gwion.y"
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
#line 3427 "src/parser.c"
    break;

  case 122: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 599 "src/gwion.y"
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
#line 3449 "src/parser.c"
    break;

  case 123: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 617 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3462 "src/parser.c"
    break;

  case 124: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 626 "src/gwion.y"
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
#line 3479 "src/parser.c"
    break;

  case 125: /* defer_stmt: "defer" stmt  */
#line 639 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_defer,
    .d = { .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }},
    .pos = (yylsp[-1])
  };
}
#line 3489 "src/parser.c"
    break;

  case 126: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 647 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3502 "src/parser.c"
    break;

  case 127: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 656 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3516 "src/parser.c"
    break;

  case 128: /* breaks: "break"  */
#line 666 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3522 "src/parser.c"
    break;

  case 129: /* breaks: "continue"  */
#line 666 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3528 "src/parser.c"
    break;

  case 130: /* jump_stmt: "return" exp ";"  */
#line 668 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3538 "src/parser.c"
    break;

  case 131: /* jump_stmt: "return" ";"  */
#line 673 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3547 "src/parser.c"
    break;

  case 132: /* jump_stmt: breaks "<integer>" ";"  */
#line 677 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].lval) }},
      .pos = (yylsp[-2])
    };
  }
#line 3557 "src/parser.c"
    break;

  case 133: /* jump_stmt: breaks ";"  */
#line 682 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3566 "src/parser.c"
    break;

  case 134: /* exp_stmt: exp ";"  */
#line 688 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3576 "src/parser.c"
    break;

  case 135: /* exp_stmt: ";"  */
#line 693 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3585 "src/parser.c"
    break;

  case 136: /* exp: binary_exp  */
#line 699 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3591 "src/parser.c"
    break;

  case 137: /* exp: binary_exp "," exp  */
#line 701 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3603 "src/parser.c"
    break;

  case 139: /* binary_exp: binary_exp "@" decl_exp  */
#line 712 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3609 "src/parser.c"
    break;

  case 140: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 713 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3615 "src/parser.c"
    break;

  case 141: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 714 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3621 "src/parser.c"
    break;

  case 142: /* call_template: ":[" type_list "]"  */
#line 717 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3627 "src/parser.c"
    break;

  case 143: /* call_template: %empty  */
#line 717 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3633 "src/parser.c"
    break;

  case 149: /* array_exp: "[" exp "]"  */
#line 722 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3639 "src/parser.c"
    break;

  case 150: /* array_exp: "[" exp "]" array_exp  */
#line 723 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3647 "src/parser.c"
    break;

  case 151: /* array_exp: "[" exp "]" "[" "]"  */
#line 726 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3653 "src/parser.c"
    break;

  case 152: /* array_empty: "[" "]"  */
#line 730 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3659 "src/parser.c"
    break;

  case 153: /* array_empty: array_empty "[" "]"  */
#line 731 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3665 "src/parser.c"
    break;

  case 154: /* array_empty: array_empty array_exp  */
#line 732 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3671 "src/parser.c"
    break;

  case 155: /* dict_list: binary_exp ":" binary_exp  */
#line 736 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3677 "src/parser.c"
    break;

  case 156: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 737 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3683 "src/parser.c"
    break;

  case 157: /* range: "[" exp ":" exp "]"  */
#line 740 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3689 "src/parser.c"
    break;

  case 158: /* range: "[" exp ":" "]"  */
#line 741 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3695 "src/parser.c"
    break;

  case 159: /* range: "[" ":" exp "]"  */
#line 742 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3701 "src/parser.c"
    break;

  case 163: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 748 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3707 "src/parser.c"
    break;

  case 164: /* decl_exp: type_decl_flag2 flag type_decl_array "(" opt_exp ")" var_decl  */
#line 749 "src/gwion.y"
                                                                  {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-4].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-6].flag) | (yyvsp[-5].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-2].exp) ?: new_prim_nil(mpool(arg), (yylsp[-2]));
  }
#line 3717 "src/parser.c"
    break;

  case 165: /* func_args: "(" arg_list ")"  */
#line 755 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3723 "src/parser.c"
    break;

  case 166: /* func_args: "(" ")"  */
#line 755 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3729 "src/parser.c"
    break;

  case 167: /* fptr_args: "(" fptr_list ")"  */
#line 756 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3735 "src/parser.c"
    break;

  case 168: /* fptr_args: "(" ")"  */
#line 756 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3741 "src/parser.c"
    break;

  case 169: /* decl_template: ":[" specialized_list "]"  */
#line 758 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3747 "src/parser.c"
    break;

  case 170: /* decl_template: ":[" specialized_list "," "..." "]"  */
#line 759 "src/gwion.y"
                                                    {
  (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  Specialized spec = { .xid = insert_symbol("...") };
  mp_vector_add(mpool(arg), &(yyval.specialized_list), Specialized, spec);

}
#line 3758 "src/parser.c"
    break;

  case 171: /* decl_template: ":[" "..." "]"  */
#line 765 "src/gwion.y"
                                {
  Specialized spec = { .xid = insert_symbol("...") };
  (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
  mp_vector_set((yyval.specialized_list), Specialized, 0, spec);
}
#line 3768 "src/parser.c"
    break;

  case 172: /* decl_template: %empty  */
#line 770 "src/gwion.y"
               { (yyval.specialized_list) = NULL; }
#line 3774 "src/parser.c"
    break;

  case 173: /* global: "global"  */
#line 772 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3780 "src/parser.c"
    break;

  case 175: /* opt_global: %empty  */
#line 773 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3786 "src/parser.c"
    break;

  case 176: /* storage_flag: "static"  */
#line 775 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3792 "src/parser.c"
    break;

  case 178: /* access_flag: "private"  */
#line 777 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3798 "src/parser.c"
    break;

  case 179: /* access_flag: "protect"  */
#line 778 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3804 "src/parser.c"
    break;

  case 180: /* flag: access_flag  */
#line 781 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3810 "src/parser.c"
    break;

  case 181: /* flag: storage_flag  */
#line 782 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3816 "src/parser.c"
    break;

  case 182: /* flag: access_flag storage_flag  */
#line 783 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3822 "src/parser.c"
    break;

  case 183: /* flag: %empty  */
#line 784 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3828 "src/parser.c"
    break;

  case 184: /* final: "final"  */
#line 787 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3834 "src/parser.c"
    break;

  case 185: /* final: %empty  */
#line 787 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3840 "src/parser.c"
    break;

  case 186: /* modifier: "abstract" final  */
#line 789 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3846 "src/parser.c"
    break;

  case 188: /* func_def_base: "fun" func_base func_args code_list  */
#line 792 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3856 "src/parser.c"
    break;

  case 189: /* func_def_base: "fun" func_base func_args ";"  */
#line 797 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3868 "src/parser.c"
    break;

  case 190: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 804 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3879 "src/parser.c"
    break;

  case 191: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 810 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3890 "src/parser.c"
    break;

  case 192: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 819 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3902 "src/parser.c"
    break;

  case 198: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 830 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3916 "src/parser.c"
    break;

  case 199: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 840 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3929 "src/parser.c"
    break;

  case 200: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 849 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3943 "src/parser.c"
    break;

  case 201: /* op_base: type_decl_empty OPID_A func_args  */
#line 859 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3952 "src/parser.c"
    break;

  case 202: /* operator: "operator"  */
#line 864 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3958 "src/parser.c"
    break;

  case 203: /* operator: "operator" global  */
#line 864 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3964 "src/parser.c"
    break;

  case 204: /* op_def: operator op_base code_list  */
#line 867 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3970 "src/parser.c"
    break;

  case 205: /* op_def: operator op_base ";"  */
#line 869 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3976 "src/parser.c"
    break;

  case 206: /* op_def: operator "abstract" op_base ";"  */
#line 871 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3982 "src/parser.c"
    break;

  case 210: /* func_def: operator "new" func_args code_list  */
#line 875 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 3992 "src/parser.c"
    break;

  case 211: /* func_def: operator "new" func_args ";"  */
#line 881 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4003 "src/parser.c"
    break;

  case 212: /* func_def: operator "abstract" "new" func_args ";"  */
#line 888 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4014 "src/parser.c"
    break;

  case 213: /* type_decl_base: "<identifier>"  */
#line 896 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4020 "src/parser.c"
    break;

  case 214: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 897 "src/gwion.y"
                                                                      {
      const Symbol name = sig_name(arg, (yylsp[-4]).first);
      (yyval.type_decl) = new_type_decl(mpool(arg), name, (yylsp[-6]));
      Func_Base *fb = new_func_base(mpool(arg), (yyvsp[-4].type_decl), name, NULL, (yyvsp[-5].flag), (yylsp[-6]));
      if((yyvsp[-3].specialized_list))
        fb->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      fb->args = (yyvsp[-2].arg_list);
      const Fptr_Def fptr = new_fptr_def(mpool(arg), fb);
      fptr->base->effects.ptr = (yyvsp[-1].vector).ptr;
      (yyval.type_decl)->fptr = fptr;
  }
#line 4036 "src/parser.c"
    break;

  case 215: /* type_decl_tmpl: type_decl_base call_template  */
#line 911 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4042 "src/parser.c"
    break;

  case 216: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 912 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4048 "src/parser.c"
    break;

  case 218: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 917 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4054 "src/parser.c"
    break;

  case 219: /* option: "?"  */
#line 920 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4060 "src/parser.c"
    break;

  case 220: /* option: OPTIONS  */
#line 920 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4066 "src/parser.c"
    break;

  case 221: /* option: %empty  */
#line 920 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 4072 "src/parser.c"
    break;

  case 222: /* type_decl_opt: type_decl_noflag option  */
#line 921 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4078 "src/parser.c"
    break;

  case 224: /* type_decl: type_decl_flag type_decl_opt  */
#line 922 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4084 "src/parser.c"
    break;

  case 225: /* type_decl_flag: "late"  */
#line 925 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4090 "src/parser.c"
    break;

  case 226: /* type_decl_flag: "const"  */
#line 926 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4096 "src/parser.c"
    break;

  case 227: /* opt_var: "var"  */
#line 928 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4102 "src/parser.c"
    break;

  case 228: /* opt_var: %empty  */
#line 928 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4108 "src/parser.c"
    break;

  case 229: /* type_decl_flag2: "var"  */
#line 930 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4114 "src/parser.c"
    break;

  case 231: /* union_decl: "<identifier>" ";"  */
#line 933 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 4123 "src/parser.c"
    break;

  case 232: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 937 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 4129 "src/parser.c"
    break;

  case 233: /* union_list: union_decl  */
#line 939 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), Union_Member, 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 4138 "src/parser.c"
    break;

  case 234: /* union_list: union_list union_decl  */
#line 943 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 4147 "src/parser.c"
    break;

  case 235: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 949 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4159 "src/parser.c"
    break;

  case 236: /* var_decl: "<identifier>"  */
#line 958 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4165 "src/parser.c"
    break;

  case 237: /* arg_decl: "<identifier>"  */
#line 960 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4171 "src/parser.c"
    break;

  case 239: /* fptr_arg_decl: %empty  */
#line 961 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4177 "src/parser.c"
    break;

  case 253: /* opt_exp: exp  */
#line 969 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4183 "src/parser.c"
    break;

  case 254: /* opt_exp: %empty  */
#line 969 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4189 "src/parser.c"
    break;

  case 256: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 972 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4195 "src/parser.c"
    break;

  case 257: /* con_exp: log_or_exp "?:" con_exp  */
#line 974 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4201 "src/parser.c"
    break;

  case 259: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 976 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4207 "src/parser.c"
    break;

  case 261: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 977 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4213 "src/parser.c"
    break;

  case 263: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 978 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4219 "src/parser.c"
    break;

  case 265: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 979 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4225 "src/parser.c"
    break;

  case 267: /* and_exp: and_exp "&" eq_exp  */
#line 980 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4231 "src/parser.c"
    break;

  case 269: /* eq_exp: eq_exp eq_op rel_exp  */
#line 981 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4237 "src/parser.c"
    break;

  case 271: /* rel_exp: rel_exp rel_op shift_exp  */
#line 982 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4243 "src/parser.c"
    break;

  case 273: /* shift_exp: shift_exp shift_op add_exp  */
#line 983 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4249 "src/parser.c"
    break;

  case 275: /* add_exp: add_exp add_op mul_exp  */
#line 984 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4255 "src/parser.c"
    break;

  case 277: /* mul_exp: mul_exp mul_op dur_exp  */
#line 985 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4261 "src/parser.c"
    break;

  case 279: /* dur_exp: dur_exp "::" cast_exp  */
#line 986 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4267 "src/parser.c"
    break;

  case 281: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 989 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4273 "src/parser.c"
    break;

  case 288: /* unary_exp: unary_op unary_exp  */
#line 996 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4279 "src/parser.c"
    break;

  case 289: /* unary_exp: "spork" unary_exp  */
#line 997 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4285 "src/parser.c"
    break;

  case 290: /* unary_exp: "fork" unary_exp  */
#line 998 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4291 "src/parser.c"
    break;

  case 291: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 999 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4299 "src/parser.c"
    break;

  case 292: /* unary_exp: "new" type_decl_exp  */
#line 1002 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4305 "src/parser.c"
    break;

  case 293: /* unary_exp: "spork" code_list  */
#line 1003 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4311 "src/parser.c"
    break;

  case 294: /* unary_exp: "fork" code_list  */
#line 1004 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4317 "src/parser.c"
    break;

  case 295: /* unary_exp: "spork" captures code_list  */
#line 1005 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4323 "src/parser.c"
    break;

  case 296: /* unary_exp: "fork" captures code_list  */
#line 1006 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4329 "src/parser.c"
    break;

  case 297: /* unary_exp: "$" type_decl_empty  */
#line 1007 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4335 "src/parser.c"
    break;

  case 298: /* lambda_list: "<identifier>"  */
#line 1010 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4345 "src/parser.c"
    break;

  case 299: /* lambda_list: lambda_list "<identifier>"  */
#line 1015 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4355 "src/parser.c"
    break;

  case 300: /* lambda_arg: "\\" lambda_list  */
#line 1020 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4361 "src/parser.c"
    break;

  case 301: /* lambda_arg: "\\"  */
#line 1020 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4367 "src/parser.c"
    break;

  case 302: /* type_list: type_decl_empty  */
#line 1023 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), Type_Decl*, 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4376 "src/parser.c"
    break;

  case 303: /* type_list: type_list "," type_decl_empty  */
#line 1027 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4385 "src/parser.c"
    break;

  case 304: /* call_paren: "(" exp ")"  */
#line 1033 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4391 "src/parser.c"
    break;

  case 305: /* call_paren: "(" ")"  */
#line 1033 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4397 "src/parser.c"
    break;

  case 308: /* dot_exp: post_exp "." "<identifier>"  */
#line 1037 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4410 "src/parser.c"
    break;

  case 310: /* post_exp: post_exp array_exp  */
#line 1048 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4416 "src/parser.c"
    break;

  case 311: /* post_exp: post_exp range  */
#line 1050 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4422 "src/parser.c"
    break;

  case 312: /* post_exp: post_exp call_template call_paren  */
#line 1052 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4429 "src/parser.c"
    break;

  case 313: /* post_exp: post_exp post_op  */
#line 1055 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4435 "src/parser.c"
    break;

  case 314: /* post_exp: dot_exp  */
#line 1056 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4441 "src/parser.c"
    break;

  case 315: /* interp_exp: "<interp string end>"  */
#line 1060 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4447 "src/parser.c"
    break;

  case 316: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1061 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4453 "src/parser.c"
    break;

  case 317: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1062 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4459 "src/parser.c"
    break;

  case 318: /* interp: "${" interp_exp  */
#line 1064 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4465 "src/parser.c"
    break;

  case 319: /* interp: interp "${" interp_exp  */
#line 1065 "src/gwion.y"
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
#line 4480 "src/parser.c"
    break;

  case 320: /* capture: "<identifier>"  */
#line 1076 "src/gwion.y"
            { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .pos = (yylsp[0]) };}
#line 4486 "src/parser.c"
    break;

  case 321: /* capture: "&" "<identifier>"  */
#line 1076 "src/gwion.y"
                                                                { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .is_ref = true, .pos = (yylsp[0]) }; }
#line 4492 "src/parser.c"
    break;

  case 322: /* _captures: capture  */
#line 1078 "src/gwion.y"
                   { (yyval.captures) = new_mp_vector(mpool(arg), Capture, 1); mp_vector_set((yyval.captures), Capture, 0, (yyvsp[0].capture)); }
#line 4498 "src/parser.c"
    break;

  case 323: /* _captures: _captures capture  */
#line 1079 "src/gwion.y"
                            { mp_vector_add(mpool(arg), &(yyvsp[-1].captures), Capture, (yyvsp[0].capture)); (yyval.captures) = (yyvsp[-1].captures); }
#line 4504 "src/parser.c"
    break;

  case 324: /* captures: ":" _captures ":"  */
#line 1080 "src/gwion.y"
                            { (yyval.captures) = (yyvsp[-1].captures); }
#line 4510 "src/parser.c"
    break;

  case 325: /* captures: %empty  */
#line 1080 "src/gwion.y"
                                            { (yyval.captures) = NULL; }
#line 4516 "src/parser.c"
    break;

  case 326: /* prim_exp: "<identifier>"  */
#line 1082 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4522 "src/parser.c"
    break;

  case 327: /* prim_exp: "<integer>"  */
#line 1083 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 4528 "src/parser.c"
    break;

  case 328: /* prim_exp: "<float>"  */
#line 1084 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4534 "src/parser.c"
    break;

  case 329: /* prim_exp: interp  */
#line 1085 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4540 "src/parser.c"
    break;

  case 330: /* prim_exp: "<litteral string>"  */
#line 1086 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4546 "src/parser.c"
    break;

  case 331: /* prim_exp: "<litteral char>"  */
#line 1087 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4552 "src/parser.c"
    break;

  case 332: /* prim_exp: array  */
#line 1088 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 4558 "src/parser.c"
    break;

  case 333: /* prim_exp: "{" dict_list "}"  */
#line 1089 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4564 "src/parser.c"
    break;

  case 334: /* prim_exp: range  */
#line 1090 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4570 "src/parser.c"
    break;

  case 335: /* prim_exp: "<<<" exp ">>>"  */
#line 1091 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4576 "src/parser.c"
    break;

  case 336: /* prim_exp: "(" exp ")"  */
#line 1092 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4582 "src/parser.c"
    break;

  case 337: /* prim_exp: "`foo`"  */
#line 1093 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last = { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4593 "src/parser.c"
    break;

  case 338: /* prim_exp: lambda_arg captures code_list  */
#line 1099 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4599 "src/parser.c"
    break;

  case 339: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1100 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg->st, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4605 "src/parser.c"
    break;

  case 340: /* prim_exp: "(" op_op ")"  */
#line 1101 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 4611 "src/parser.c"
    break;

  case 341: /* prim_exp: "perform" opt_id  */
#line 1102 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4617 "src/parser.c"
    break;

  case 342: /* prim_exp: "(" ")"  */
#line 1103 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4623 "src/parser.c"
    break;


#line 4627 "src/parser.c"

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

#line 1105 "src/gwion.y"

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
