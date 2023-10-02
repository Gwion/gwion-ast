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

ANN static int parser_error(const loc_t*, Scanner*const, const char *, const uint);
ANN Symbol sig_name(const Scanner*, const pos_t);
void lex_spread(void *data);


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
  YYSYMBOL_RBRACK2 = 9,                    /* ",]"  */
  YYSYMBOL_LBRACE = 10,                    /* "{"  */
  YYSYMBOL_RBRACE = 11,                    /* "}"  */
  YYSYMBOL_FUNCTION = 12,                  /* "fun"  */
  YYSYMBOL_VAR = 13,                       /* "var"  */
  YYSYMBOL_IF = 14,                        /* "if"  */
  YYSYMBOL_ELSE = 15,                      /* "else"  */
  YYSYMBOL_WHILE = 16,                     /* "while"  */
  YYSYMBOL_DO = 17,                        /* "do"  */
  YYSYMBOL_UNTIL = 18,                     /* "until"  */
  YYSYMBOL_LOOP = 19,                      /* "repeat"  */
  YYSYMBOL_FOR = 20,                       /* "for"  */
  YYSYMBOL_FOREACH = 21,                   /* "foreach"  */
  YYSYMBOL_MATCH = 22,                     /* "match"  */
  YYSYMBOL_CASE = 23,                      /* "case"  */
  YYSYMBOL_WHEN = 24,                      /* "when"  */
  YYSYMBOL_WHERE = 25,                     /* "where"  */
  YYSYMBOL_ENUM = 26,                      /* "enum"  */
  YYSYMBOL_TRETURN = 27,                   /* "return"  */
  YYSYMBOL_BREAK = 28,                     /* "break"  */
  YYSYMBOL_CONTINUE = 29,                  /* "continue"  */
  YYSYMBOL_TRY = 30,                       /* "try"  */
  YYSYMBOL_PERFORM = 31,                   /* "perform"  */
  YYSYMBOL_HANDLET = 32,                   /* "handle"  */
  YYSYMBOL_RETRY = 33,                     /* "retry"  */
  YYSYMBOL_CLASS = 34,                     /* "class"  */
  YYSYMBOL_STRUCT = 35,                    /* "struct"  */
  YYSYMBOL_TRAIT = 36,                     /* "trait"  */
  YYSYMBOL_STATIC = 37,                    /* "static"  */
  YYSYMBOL_GLOBAL = 38,                    /* "global"  */
  YYSYMBOL_PRIVATE = 39,                   /* "private"  */
  YYSYMBOL_PROTECT = 40,                   /* "protect"  */
  YYSYMBOL_ABSTRACT = 41,                  /* "abstract"  */
  YYSYMBOL_FINAL = 42,                     /* "final"  */
  YYSYMBOL_EXTENDS = 43,                   /* "extends"  */
  YYSYMBOL_DOT = 44,                       /* "."  */
  YYSYMBOL_OPERATOR = 45,                  /* "operator"  */
  YYSYMBOL_PRIMITIVE = 46,                 /* "primitive"  */
  YYSYMBOL_TYPEDEF = 47,                   /* "typedef"  */
  YYSYMBOL_DISTINCT = 48,                  /* "distinct"  */
  YYSYMBOL_FUNPTR = 49,                    /* "funptr"  */
  YYSYMBOL_NOELSE = 50,                    /* NOELSE  */
  YYSYMBOL_UNION = 51,                     /* "union"  */
  YYSYMBOL_CONSTT = 52,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 53,                   /* "..."  */
  YYSYMBOL_DEFER = 54,                     /* "defer"  */
  YYSYMBOL_BACKSLASH = 55,                 /* "\\"  */
  YYSYMBOL_OPID_A = 56,                    /* OPID_A  */
  YYSYMBOL_LOCALE = 57,                    /* LOCALE  */
  YYSYMBOL_LOCALE_INI = 58,                /* LOCALE_INI  */
  YYSYMBOL_LOCALE_END = 59,                /* LOCALE_END  */
  YYSYMBOL_LATE = 60,                      /* "late"  */
  YYSYMBOL_INTEGER = 61,                   /* INTEGER  */
  YYSYMBOL_62_integer_ = 62,               /* "<integer>"  */
  YYSYMBOL_FLOATT = 63,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 64,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 65,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 66,              /* "${"  */
  YYSYMBOL_INTERP_EXP = 67,                /* INTERP_EXP  */
  YYSYMBOL_PP_COMMENT = 68,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 69,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 70,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 71,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 72,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 73,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 74,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 75,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 76,                  /* "#if"  */
  YYSYMBOL_PP_NL = 77,                     /* "\n"  */
  YYSYMBOL_PP_IMPORT = 78,                 /* "import"  */
  YYSYMBOL_SPREAD = 79,                    /* "}..."  */
  YYSYMBOL_INTERP_LIT = 80,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 81,                /* "<interp string end>"  */
  YYSYMBOL_82_operator_id_ = 82,           /* "@<operator id>"  */
  YYSYMBOL_ID = 83,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 84,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 85,                  /* "++"  */
  YYSYMBOL_MINUS = 86,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 87,                /* "--"  */
  YYSYMBOL_TIMES = 88,                     /* "*"  */
  YYSYMBOL_DIVIDE = 89,                    /* "/"  */
  YYSYMBOL_PERCENT = 90,                   /* "%"  */
  YYSYMBOL_DOLLAR = 91,                    /* "$"  */
  YYSYMBOL_QUESTION = 92,                  /* "?"  */
  YYSYMBOL_OPTIONS = 93,                   /* OPTIONS  */
  YYSYMBOL_COLON = 94,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 95,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 96,             /* "?:"  */
  YYSYMBOL_NEW = 97,                       /* "new"  */
  YYSYMBOL_SPORK = 98,                     /* "spork"  */
  YYSYMBOL_FORK = 99,                      /* "fork"  */
  YYSYMBOL_L_HACK = 100,                   /* "<<<"  */
  YYSYMBOL_R_HACK = 101,                   /* ">>>"  */
  YYSYMBOL_AND = 102,                      /* "&&"  */
  YYSYMBOL_EQ = 103,                       /* "=="  */
  YYSYMBOL_GE = 104,                       /* ">="  */
  YYSYMBOL_GT = 105,                       /* ">"  */
  YYSYMBOL_LE = 106,                       /* "<="  */
  YYSYMBOL_LT = 107,                       /* "<"  */
  YYSYMBOL_NEQ = 108,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 109,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 110,              /* ">>"  */
  YYSYMBOL_S_AND = 111,                    /* "&"  */
  YYSYMBOL_S_OR = 112,                     /* "|"  */
  YYSYMBOL_S_XOR = 113,                    /* "^"  */
  YYSYMBOL_OR = 114,                       /* "||"  */
  YYSYMBOL_TMPL = 115,                     /* ":["  */
  YYSYMBOL_TILDA = 116,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 117,              /* "!"  */
  YYSYMBOL_AROBASE = 118,                  /* "@"  */
  YYSYMBOL_DYNOP = 119,                    /* "<dynamic_operator>"  */
  YYSYMBOL_LOCALE_EXP = 120,               /* "`foo`"  */
  YYSYMBOL_RANGE_EMPTY = 121,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 122,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 123,                   /* UTIMES  */
  YYSYMBOL_124_ = 124,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 125,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 126,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 127,                 /* $accept  */
  YYSYMBOL_prg = 128,                      /* prg  */
  YYSYMBOL_ast = 129,                      /* ast  */
  YYSYMBOL_section = 130,                  /* section  */
  YYSYMBOL_class_flag = 131,               /* class_flag  */
  YYSYMBOL_class_def = 132,                /* class_def  */
  YYSYMBOL_class_body = 133,               /* class_body  */
  YYSYMBOL_trait_def = 134,                /* trait_def  */
  YYSYMBOL_number = 135,                   /* number  */
  YYSYMBOL_decimal = 136,                  /* decimal  */
  YYSYMBOL_prim_def = 137,                 /* prim_def  */
  YYSYMBOL_class_ext = 138,                /* class_ext  */
  YYSYMBOL_traits = 139,                   /* traits  */
  YYSYMBOL_extend_def = 140,               /* extend_def  */
  YYSYMBOL_id_list = 141,                  /* id_list  */
  YYSYMBOL_specialized = 142,              /* specialized  */
  YYSYMBOL_specialized_list = 143,         /* specialized_list  */
  YYSYMBOL_stmt_list = 144,                /* stmt_list  */
  YYSYMBOL_fptr_base = 145,                /* fptr_base  */
  YYSYMBOL__func_effects = 146,            /* _func_effects  */
  YYSYMBOL_func_effects = 147,             /* func_effects  */
  YYSYMBOL_func_base = 148,                /* func_base  */
  YYSYMBOL_fptr_def = 149,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 150,             /* typedef_when  */
  YYSYMBOL_type_def_type = 151,            /* type_def_type  */
  YYSYMBOL_type_def = 152,                 /* type_def  */
  YYSYMBOL_type_decl_array = 153,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 154,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 155,          /* type_decl_empty  */
  YYSYMBOL_arg = 156,                      /* arg  */
  YYSYMBOL_arg_list = 157,                 /* arg_list  */
  YYSYMBOL_locale_arg = 158,               /* locale_arg  */
  YYSYMBOL_locale_list = 159,              /* locale_list  */
  YYSYMBOL_fptr_arg = 160,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 161,                /* fptr_list  */
  YYSYMBOL_code_stmt = 162,                /* code_stmt  */
  YYSYMBOL_code_list = 163,                /* code_list  */
  YYSYMBOL_stmt_pp = 164,                  /* stmt_pp  */
  YYSYMBOL_stmt = 165,                     /* stmt  */
  YYSYMBOL_spread_stmt = 166,              /* spread_stmt  */
  YYSYMBOL_167_1 = 167,                    /* $@1  */
  YYSYMBOL_retry_stmt = 168,               /* retry_stmt  */
  YYSYMBOL_handler = 169,                  /* handler  */
  YYSYMBOL_170_2 = 170,                    /* $@2  */
  YYSYMBOL_handler_list = 171,             /* handler_list  */
  YYSYMBOL_try_stmt = 172,                 /* try_stmt  */
  YYSYMBOL_opt_id = 173,                   /* opt_id  */
  YYSYMBOL_opt_comma = 174,                /* opt_comma  */
  YYSYMBOL_enum_value = 175,               /* enum_value  */
  YYSYMBOL_enum_list = 176,                /* enum_list  */
  YYSYMBOL_enum_def = 177,                 /* enum_def  */
  YYSYMBOL_when_exp = 178,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 179,          /* match_case_stmt  */
  YYSYMBOL_match_list = 180,               /* match_list  */
  YYSYMBOL_match_stmt = 181,               /* match_stmt  */
  YYSYMBOL_flow = 182,                     /* flow  */
  YYSYMBOL_loop_stmt = 183,                /* loop_stmt  */
  YYSYMBOL_defer_stmt = 184,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 185,           /* selection_stmt  */
  YYSYMBOL_breaks = 186,                   /* breaks  */
  YYSYMBOL_jump_stmt = 187,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 188,                 /* exp_stmt  */
  YYSYMBOL_exp = 189,                      /* exp  */
  YYSYMBOL_binary_exp = 190,               /* binary_exp  */
  YYSYMBOL_call_template = 191,            /* call_template  */
  YYSYMBOL_op = 192,                       /* op  */
  YYSYMBOL_array_exp = 193,                /* array_exp  */
  YYSYMBOL_array_empty = 194,              /* array_empty  */
  YYSYMBOL_dict_list = 195,                /* dict_list  */
  YYSYMBOL_range = 196,                    /* range  */
  YYSYMBOL_array = 197,                    /* array  */
  YYSYMBOL_decl_exp = 198,                 /* decl_exp  */
  YYSYMBOL_func_args = 199,                /* func_args  */
  YYSYMBOL_fptr_args = 200,                /* fptr_args  */
  YYSYMBOL_decl_template = 201,            /* decl_template  */
  YYSYMBOL_global = 202,                   /* global  */
  YYSYMBOL_opt_global = 203,               /* opt_global  */
  YYSYMBOL_storage_flag = 204,             /* storage_flag  */
  YYSYMBOL_access_flag = 205,              /* access_flag  */
  YYSYMBOL_flag = 206,                     /* flag  */
  YYSYMBOL_final = 207,                    /* final  */
  YYSYMBOL_modifier = 208,                 /* modifier  */
  YYSYMBOL_func_def_base = 209,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 210,            /* abstract_fdef  */
  YYSYMBOL_op_op = 211,                    /* op_op  */
  YYSYMBOL_op_base = 212,                  /* op_base  */
  YYSYMBOL_operator = 213,                 /* operator  */
  YYSYMBOL_op_def = 214,                   /* op_def  */
  YYSYMBOL_func_def = 215,                 /* func_def  */
  YYSYMBOL_type_decl_base = 216,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 217,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 218,         /* type_decl_noflag  */
  YYSYMBOL_option = 219,                   /* option  */
  YYSYMBOL_type_decl_opt = 220,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 221,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 222,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 223,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 224,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 225,               /* union_decl  */
  YYSYMBOL_union_list = 226,               /* union_list  */
  YYSYMBOL_union_def = 227,                /* union_def  */
  YYSYMBOL_var_decl = 228,                 /* var_decl  */
  YYSYMBOL_arg_decl = 229,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 230,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 231,                    /* eq_op  */
  YYSYMBOL_rel_op = 232,                   /* rel_op  */
  YYSYMBOL_shift_op = 233,                 /* shift_op  */
  YYSYMBOL_add_op = 234,                   /* add_op  */
  YYSYMBOL_mul_op = 235,                   /* mul_op  */
  YYSYMBOL_opt_exp = 236,                  /* opt_exp  */
  YYSYMBOL_con_exp = 237,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 238,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 239,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 240,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 241,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 242,                  /* and_exp  */
  YYSYMBOL_eq_exp = 243,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 244,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 245,                /* shift_exp  */
  YYSYMBOL_add_exp = 246,                  /* add_exp  */
  YYSYMBOL_mul_exp = 247,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 248,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 249,                 /* cast_exp  */
  YYSYMBOL_unary_op = 250,                 /* unary_op  */
  YYSYMBOL_unary_exp = 251,                /* unary_exp  */
  YYSYMBOL_lambda_list = 252,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 253,               /* lambda_arg  */
  YYSYMBOL_tmplarg_exp = 254,              /* tmplarg_exp  */
  YYSYMBOL_tmplarg = 255,                  /* tmplarg  */
  YYSYMBOL_type_list = 256,                /* type_list  */
  YYSYMBOL_call_paren = 257,               /* call_paren  */
  YYSYMBOL_post_op = 258,                  /* post_op  */
  YYSYMBOL_dot_exp = 259,                  /* dot_exp  */
  YYSYMBOL_post_exp = 260,                 /* post_exp  */
  YYSYMBOL_interp_exp = 261,               /* interp_exp  */
  YYSYMBOL_interp = 262,                   /* interp  */
  YYSYMBOL_capture = 263,                  /* capture  */
  YYSYMBOL__captures = 264,                /* _captures  */
  YYSYMBOL_captures = 265,                 /* captures  */
  YYSYMBOL_array_lit_end = 266,            /* array_lit_end  */
  YYSYMBOL_basic_exp = 267,                /* basic_exp  */
  YYSYMBOL_prim_exp = 268                  /* prim_exp  */
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
#define YYFINAL  227
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2541

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  351
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  629

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   381


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
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   193,   193,   194,   197,   201,   207,   208,   218,   219,
     220,   221,   222,   223,   224,   225,   228,   230,   237,   246,
     246,   246,   248,   254,   261,   268,   272,   272,   273,   273,
     275,   280,   285,   291,   298,   306,   310,   315,   319,   324,
     327,   327,   328,   328,   330,   333,   339,   339,   340,   340,
     341,   350,   350,   352,   356,   361,   365,   370,   375,   384,
     395,   403,   404,   414,   416,   420,   426,   428,   432,   433,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   449,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   466,   466,   476,   481,   481,   482,
     487,   503,   508,   508,   509,   509,   512,   513,   519,   524,
     530,   535,   535,   538,   550,   554,   559,   570,   581,   582,
     586,   595,   605,   615,   626,   639,   657,   666,   680,   694,
     703,   714,   714,   716,   721,   725,   730,   736,   741,   747,
     748,   759,   760,   761,   762,   765,   765,   767,   767,   767,
     767,   767,   770,   771,   774,   778,   779,   780,   784,   785,
     788,   789,   790,   794,   794,   795,   796,   797,   803,   803,
     804,   804,   806,   807,   813,   818,   820,   821,   821,   823,
     823,   825,   826,   829,   830,   831,   832,   835,   835,   837,
     837,   840,   845,   852,   858,   866,   875,   875,   875,   875,
     875,   877,   887,   896,   906,   912,   912,   914,   916,   918,
     921,   921,   921,   922,   928,   935,   944,   945,   959,   960,
     964,   965,   968,   968,   968,   969,   970,   970,   973,   974,
     976,   976,   978,   978,   981,   985,   987,   991,   997,  1006,
    1008,  1009,  1009,  1011,  1011,  1012,  1012,  1012,  1012,  1013,
    1013,  1014,  1014,  1015,  1015,  1015,  1017,  1017,  1018,  1019,
    1021,  1024,  1024,  1025,  1025,  1026,  1026,  1027,  1027,  1028,
    1028,  1029,  1029,  1030,  1030,  1031,  1031,  1032,  1032,  1033,
    1033,  1034,  1034,  1036,  1036,  1039,  1039,  1039,  1040,  1040,
    1043,  1044,  1045,  1046,  1047,  1050,  1051,  1052,  1053,  1054,
    1055,  1058,  1063,  1068,  1068,  1076,  1077,  1080,  1085,  1089,
    1095,  1095,  1097,  1097,  1099,  1108,  1109,  1111,  1113,  1116,
    1118,  1122,  1123,  1124,  1126,  1127,  1138,  1138,  1140,  1141,
    1142,  1142,  1143,  1143,  1146,  1150,  1151,  1152,  1153,  1156,
    1157,  1158,  1166,  1167,  1168,  1169,  1170,  1176,  1177,  1178,
    1179,  1180
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
  ",]", "{", "}", "fun", "var", "if", "else", "while", "do", "until",
  "repeat", "for", "foreach", "match", "case", "when", "where", "enum",
  "return", "break", "continue", "try", "perform", "handle", "retry",
  "class", "struct", "trait", "static", "global", "private", "protect",
  "abstract", "final", "extends", ".", "operator", "primitive", "typedef",
  "distinct", "funptr", "NOELSE", "union", "const", "...", "defer", "\\",
  "OPID_A", "LOCALE", "LOCALE_INI", "LOCALE_END", "late", "INTEGER",
  "<integer>", "<float>", "<litteral string>", "<litteral char>", "${",
  "INTERP_EXP", "<comment>", "#include", "#define", "#pragma", "#undef",
  "#ifdef", "#ifndef", "#else", "#if", "\n", "import", "}...",
  "<interp string lit>", "<interp string end>", "@<operator id>",
  "<identifier>", "+", "++", "-", "--", "*", "/", "%", "$", "?", "OPTIONS",
  ":", "::", "?:", "new", "spork", "fork", "<<<", ">>>", "&&", "==", ">=",
  ">", "<=", "<", "!=", "<<", ">>", "&", "|", "^", "||", ":[", "~", "!",
  "@", "<dynamic_operator>", "`foo`", "RANGE_EMPTY", "UMINUS", "UTIMES",
  "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg", "ast", "section",
  "class_flag", "class_def", "class_body", "trait_def", "number",
  "decimal", "prim_def", "class_ext", "traits", "extend_def", "id_list",
  "specialized", "specialized_list", "stmt_list", "fptr_base",
  "_func_effects", "func_effects", "func_base", "fptr_def", "typedef_when",
  "type_def_type", "type_def", "type_decl_array", "type_decl_exp",
  "type_decl_empty", "arg", "arg_list", "locale_arg", "locale_list",
  "fptr_arg", "fptr_list", "code_stmt", "code_list", "stmt_pp", "stmt",
  "spread_stmt", "$@1", "retry_stmt", "handler", "$@2", "handler_list",
  "try_stmt", "opt_id", "opt_comma", "enum_value", "enum_list", "enum_def",
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
  "lambda_list", "lambda_arg", "tmplarg_exp", "tmplarg", "type_list",
  "call_paren", "post_op", "dot_exp", "post_exp", "interp_exp", "interp",
  "capture", "_captures", "captures", "array_lit_end", "basic_exp",
  "prim_exp", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-461)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-254)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     840,  -461,  1516,  1673,   948,   314,  -461,    83,  -461,  1377,
    -461,    92,   118,   134,  2221,   314,   319,  -461,  -461,  1377,
      34,   133,   314,   314,   138,    60,   138,   314,  -461,  -461,
     314,   314,  -461,    99,  1377,   145,    16,   164,  -461,  -461,
    -461,  -461,  -461,  1632,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
      60,    60,  2357,  2357,  2221,  -461,  -461,  -461,   255,   840,
    -461,  -461,  -461,  -461,  -461,  -461,  1377,  -461,   314,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,   252,  -461,
    -461,  -461,    50,  -461,  -461,   270,    48,  -461,  -461,  -461,
    -461,   261,  -461,  -461,  -461,   314,  -461,  -461,    12,   162,
     172,   163,   176,    52,   263,   -41,   112,   154,   195,   208,
    2421,  -461,   207,  -461,  -461,    96,   244,  -461,  -461,  -461,
    2221,  -461,   317,   327,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,   332,  -461,   349,
    -461,  -461,  -461,  -461,  2221,   226,   273,  -461,  1056,    35,
     346,  -461,  -461,  -461,  -461,   320,  -461,  -461,   232,   266,
    2221,   202,  2317,  1475,   276,   350,   278,  -461,   360,   333,
    -461,  -461,  -461,   290,   289,   293,  -461,   298,   314,  -461,
      41,  -461,   294,   275,   347,   200,  -461,   388,    24,  -461,
     315,   392,    60,   316,   307,  -461,  -461,   326,   398,   330,
    1769,  1632,  -461,   353,  -461,  -461,  -461,   409,  1164,   -24,
    -461,  -461,   412,  -461,  -461,   412,   323,  -461,  -461,  -461,
      60,  2221,  -461,  -461,   426,  -461,  2221,  2221,  2221,  2221,
     340,   320,   471,   103,    60,    60,  2221,  2421,  2421,  2421,
    2421,  2421,  2421,  -461,  -461,  2421,  2421,  2421,  -461,  2421,
    -461,  2421,  2421,    60,  -461,   421,  1673,   351,   251,   427,
    -461,  -461,  -461,  1632,   131,  -461,  -461,   425,  1810,  -461,
    -461,  -461,  -461,  2221,  -461,   194,   106,  -461,    60,  -461,
      60,   432,  2221,   436,    28,  1475,    36,   418,   433,  -461,
    -461,  -461,   333,   331,   400,  -461,  -461,   331,   354,    60,
     275,   364,  -461,    24,  -461,  -461,  -461,  1906,  -461,   443,
    -461,  -461,   391,   283,   423,   372,   331,   364,  -461,    60,
     453,  -461,   401,  -461,  1632,  2221,  -461,  1272,  -461,   376,
    -461,   -21,  1164,  -461,  -461,  -461,   378,   456,  -461,  -461,
    -461,  -461,  -461,   320,   462,   206,   320,   331,   331,  -461,
    -461,   331,    51,  -461,   373,  -461,   162,   172,   163,   176,
      52,   263,   -41,   112,   154,   195,   208,  -461,  1164,  -461,
      33,  -461,  -461,  -461,  -461,   111,  -461,  1947,  -461,  -461,
    -461,  -461,   458,    66,  -461,   386,  -461,   230,  -461,  -461,
     387,   389,  1377,   470,  2221,  1377,  2043,   393,   464,  2221,
    -461,    63,    15,    34,  -461,    11,   435,  -461,   354,   364,
     220,   331,  -461,  -461,   337,  -461,  -461,   472,  2084,  -461,
     479,  -461,   386,  -461,   247,   402,   403,   480,   331,   474,
      75,  -461,   484,   483,    60,  -461,  -461,   485,  -461,  -461,
    -461,  -461,   331,  1377,   487,  -461,  -461,  -461,  -461,   489,
     490,   492,  2221,  -461,  -461,  2421,    39,   491,   251,  -461,
    -461,   494,  -461,  2221,  -461,   410,    60,  -461,   331,   331,
     488,  -461,    69,  -461,  1377,   499,   413,  -461,  2221,   482,
     493,  -461,  -461,   394,  -461,   508,  1377,    60,   506,   354,
    -461,   129,    60,   354,   220,   511,  -461,   608,  -461,   392,
    -461,   437,  -461,  -461,  -461,  -461,    60,  -461,  -461,  -461,
    -461,  -461,   304,  -461,    60,   412,   510,  -461,   495,  -461,
    -461,    60,    60,    60,   515,  -461,  -461,  2180,  -461,  -461,
    -461,  -461,  2221,  -461,   392,  -461,  1377,  1377,  -461,  1377,
     464,    71,  2221,   429,  1377,   441,    15,   514,  -461,   445,
    -461,  -461,    19,  -461,  -461,   220,  -461,  -461,   724,   423,
    -461,  -461,   523,   446,  -461,    31,   451,  -461,  -461,   412,
    2221,   528,   529,   526,   530,   452,  -461,   113,   531,  -461,
    -461,  -461,  2221,  1377,  -461,  1377,  -461,  -461,  -461,  -461,
    -461,   533,  -461,  -461,  -461,   536,  -461,   540,  -461,  -461,
    -461,  -461,   113,  -461,    60,  -461,  -461,  -461,  -461,    76,
    -461,  1377,  -461,  -461,  -461,   538,  1377,  -461,  -461
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   138,     0,   257,     0,   186,   232,     0,   118,     0,
     119,     0,     0,     0,     0,   186,     0,   131,   132,     0,
     103,     0,   186,   186,   178,     0,   205,   186,    48,    49,
     186,   186,   229,     0,     0,   304,     0,     0,   228,    23,
     335,   336,   337,     0,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,   339,   312,   285,   313,   286,
       0,     0,     0,     0,     0,   289,   288,   346,     0,     2,
       4,     8,     9,   334,    15,    10,     6,    13,   186,    14,
      86,    89,    37,    93,    92,    91,    11,    87,     0,    84,
      90,    85,     0,    88,    83,     0,   139,   343,   141,   210,
     211,     0,   212,     7,   233,   186,    12,   165,   258,   261,
     263,   265,   267,   269,   271,   273,   275,   277,   279,   281,
       0,   283,   331,   287,   320,   290,   338,   340,   315,   351,
       0,   251,   285,   286,   254,   255,   151,   147,   248,   246,
     247,   245,   148,   249,   250,   149,   150,     0,   196,     0,
     198,   197,   200,   199,     0,   256,     0,    66,     0,   139,
       0,   179,   176,   181,   182,     0,   180,   184,   183,   188,
       0,     0,     0,     0,     0,     0,     0,   134,     0,     0,
     102,   350,    96,     0,   188,     0,   177,     0,   186,   216,
       0,    54,     0,   146,   220,   224,   226,    52,     0,   206,
       0,     0,     0,     0,     0,   128,   301,   303,     0,     0,
       0,     0,   321,     0,   324,   300,    53,   295,     0,     0,
     296,   292,     0,   297,   293,     0,     0,     1,     5,    38,
       0,     0,   136,    24,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   257,     0,     0,     0,
       0,     0,     0,   243,   244,     0,     0,     0,   252,     0,
     253,     0,     0,     0,   291,     0,     0,     0,     0,     0,
     316,   317,   319,     0,     0,   345,   349,     0,     0,   333,
     332,   341,    67,     0,   342,     0,     0,   185,     0,   187,
       0,     0,     0,   339,     0,     0,     0,     0,     0,   133,
      97,    99,   101,   175,   188,   190,    16,   175,    28,     0,
     146,     0,   218,     0,   222,   223,   225,     0,   163,   164,
      51,   227,     0,     0,    42,     0,   175,     0,   302,    62,
       0,    82,     0,   322,     0,   257,    68,     0,   326,     0,
     328,     0,     0,   298,   299,   344,     0,     0,   135,   140,
     144,   142,   143,     0,     0,     0,     0,   175,   175,   208,
     207,   175,     0,   256,     0,   260,   262,   264,   266,   268,
     270,   272,   274,   276,   278,   280,   282,   284,     0,   347,
       0,   314,   306,   307,   308,     0,   305,     0,   318,   325,
     162,   161,     0,   158,   169,     0,    57,     0,   192,   191,
       0,     0,     0,     0,     0,     0,     0,     0,   231,     0,
     114,     0,     0,   103,   100,     0,    27,   189,    28,     0,
       0,   175,   219,    31,     0,   221,   155,     0,     0,   157,
       0,   171,   242,    64,     0,     0,    43,     0,   175,     0,
       0,    59,    61,     0,    62,    81,   323,     0,    69,   327,
     330,   329,   175,     0,     0,   209,   214,   213,   204,     0,
       0,     0,   257,   239,   166,     0,   139,   152,     0,   145,
     311,     0,   160,     0,   240,    56,     0,   168,   175,   175,
     129,   121,     0,   126,     0,     0,     0,   230,     0,   112,
     117,   115,   106,     0,   108,   105,     0,     0,     0,    28,
      35,     0,     0,    28,     0,    29,    21,     0,    22,     0,
      30,     0,   156,    25,   241,    63,     0,   170,    40,    41,
      45,    39,     0,    94,     0,     0,     0,   294,    46,   120,
     215,     0,     0,     0,     0,   259,   348,     0,   153,   309,
     310,   159,     0,    58,     0,    44,     0,     0,   122,     0,
     231,     0,     0,     0,     0,     0,   104,     0,    98,     0,
     174,    33,     0,   172,    26,     0,    18,    20,     0,    42,
      32,    65,   216,     0,   236,     0,     0,    60,   194,     0,
       0,     0,     0,     0,     0,     0,   154,    55,     0,   130,
     127,   123,     0,     0,   111,     0,   116,   107,   109,   110,
      34,     0,    36,    17,    19,     0,   234,     0,   238,   237,
      95,   193,    47,    50,     0,   202,   203,   167,   195,     0,
     124,   113,   173,   217,   235,     0,     0,   201,   125
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -461,  -461,    40,   -66,   187,  -461,  -460,  -461,   -85,   224,
    -461,  -461,  -325,  -461,  -294,   -14,  -461,    -3,  -461,  -461,
     -20,  -461,  -461,  -461,  -461,  -461,   -53,    49,    -5,  -272,
    -461,  -461,   109,    46,  -461,  -461,   -57,  -461,    -9,  -461,
    -461,  -461,   264,  -461,  -461,  -461,   150,  -461,     9,  -461,
    -461,  -461,   156,  -461,  -461,   397,  -461,  -461,  -461,  -461,
    -461,  -147,     2,     8,  -165,  -461,  -188,  -461,    98,   444,
    -461,    58,  -183,  -452,  -277,   167,  -461,   404,  -461,    17,
    -153,  -461,  -461,  -461,   341,   342,  -461,  -461,  -461,   383,
    -461,   272,  -461,   395,  -461,   -23,    37,  -461,    20,  -461,
    -461,     1,   165,  -461,  -461,  -100,   -98,  -101,   -96,  -235,
    -224,  -461,   348,   345,   352,   355,   356,   343,   358,   344,
     357,   338,   361,   -77,    -2,  -461,  -461,  -461,   135,  -461,
    -461,   -90,  -461,  -461,  -184,  -461,   268,  -461,   -12,  -461,
    -249,  -461
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,    69,    70,   183,    71,   508,    72,    73,   234,
      74,   503,   420,    75,   424,   500,   501,    76,   201,   436,
     437,   165,    77,   581,    78,    79,   191,   217,   395,   441,
     397,   442,   443,   433,   434,    80,   220,    81,    82,    83,
     576,    84,   301,   413,   302,    85,   181,   557,   494,   495,
      86,   553,   410,   411,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,   269,   148,   270,   319,   160,    97,
     320,    98,   286,   324,   416,   166,   187,   167,   168,   184,
     290,   306,    99,   100,   149,   243,   101,   102,   103,   193,
     194,   195,   316,   196,   197,   104,   488,   105,   574,   575,
     106,   464,   475,   515,   255,   150,   151,   152,   153,   156,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   207,   122,   383,   384,   385,
     388,   123,   124,   125,   214,   126,   340,   341,   222,   281,
     127,   128
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     171,   158,   198,   228,   147,   155,   223,   233,   216,   318,
     179,   364,   159,   396,   256,   259,   175,   257,   178,   386,
     192,   261,   169,   365,   244,   205,   295,   333,   312,   188,
     418,   305,   176,   440,   405,   272,   188,   198,   198,   236,
     407,   467,   608,   236,   566,   213,   188,   202,   203,   439,
     536,   225,   236,   232,   162,   215,   462,   569,   355,   338,
     221,   224,   338,   497,   498,   188,   226,   229,   143,   144,
     473,   497,   601,   450,   490,   547,    39,   593,   198,   511,
     459,   460,   626,    32,   461,   523,   409,   339,   170,   389,
     339,    38,   588,   504,   499,   230,   242,   172,   492,   208,
     447,  -146,   499,   266,   246,   603,   359,   189,   247,   398,
     265,    39,    32,   342,   572,   468,   342,   180,   264,   469,
      38,   237,   245,   173,   189,   505,   248,   278,   237,   283,
     408,   429,   237,   562,   463,   190,   182,   563,   274,   174,
     267,   237,   190,   189,   509,   422,   238,   239,   406,   229,
     446,   417,   358,   238,   239,   253,   277,   238,   239,   237,
     254,   521,   237,   244,   237,   343,   238,   239,   344,   237,
     454,   190,   291,   458,   561,   528,   162,   346,   565,   198,
     294,    56,   204,    58,   238,   239,   360,   238,   239,   238,
     239,   186,   362,   199,   238,   239,   131,   325,   258,   188,
     394,   544,   545,   209,   543,   309,   237,   198,   379,   456,
     185,   268,   332,   213,   200,   337,   342,   198,     8,   386,
      10,   198,   198,   506,   237,   283,   159,   534,   206,   399,
     507,   238,   239,   347,   476,   242,   477,   233,   349,   361,
     198,   535,   260,   134,   135,   198,    32,   210,   363,   238,
     239,   516,   577,   517,    38,   227,   188,   231,   377,   582,
     583,   584,   198,   382,   249,   198,   188,   198,   380,   161,
     162,   256,   259,   235,   257,   213,   251,   189,   261,   538,
     392,   279,   280,   400,   250,   401,   198,   252,   188,   431,
     262,   393,   314,   315,   403,   350,   351,   352,   457,   263,
     198,   219,   240,    32,   421,   190,   198,   288,   289,   188,
     273,    38,    39,    32,    40,    41,    42,    43,   432,   427,
     278,    38,   177,  -252,     2,   285,     3,   493,   229,   130,
     304,   289,     6,  -253,   189,    32,   213,   363,   275,   337,
     510,   511,   625,    38,   189,   188,    56,    57,    58,    59,
      20,   161,   162,   163,   164,   276,    32,   284,   241,   296,
     297,   298,   190,   299,    38,   300,   189,   138,   139,   140,
     141,    32,   190,   303,    35,   337,   307,    65,    66,    38,
      39,   308,    40,    41,    42,    43,   466,   572,   311,   471,
     268,   313,    32,   480,   190,   317,   483,   323,   322,   326,
      38,   327,    55,   329,    56,    57,    58,    59,   485,   328,
      60,   489,   482,   330,   335,   190,    61,    62,    63,    64,
     334,   198,   342,   189,   345,    56,    57,    58,    59,   348,
     427,   378,   387,   390,   381,    65,    66,   353,   402,    67,
     404,   409,   289,   412,   529,   198,   415,   423,   419,   216,
     428,   190,    39,   198,   435,   438,    65,    66,   444,   449,
     445,   452,   453,   382,   363,   455,   472,   465,   578,   474,
     478,   493,   479,   481,   198,   548,   486,   487,   502,   198,
     467,   274,   513,   520,   522,   518,   519,   558,   524,   525,
     530,   527,   559,   198,   531,   532,   551,   533,   537,   198,
     540,   198,   228,   546,   542,   549,   552,   550,   198,   198,
     198,   432,   556,   555,   560,   511,   579,   573,   554,   580,
     570,   585,   611,   595,   597,   599,   606,   356,   600,   607,
     610,   613,   615,   614,   618,   463,   616,   589,   590,   427,
     591,   622,   623,   624,   627,   596,   430,   568,   602,   605,
     587,   564,   198,   526,   594,   131,    56,   258,    58,   260,
     134,   135,   571,   496,   136,   598,   414,   491,   292,   271,
     573,   541,   287,   310,   137,   138,   139,   140,   141,   142,
     143,   144,   354,   357,   620,   425,   617,   592,   612,   145,
     146,   198,   621,   321,   367,   609,   366,   514,   371,   375,
     619,   373,   368,   539,     0,     0,   369,     0,   370,   451,
       0,     1,   229,     2,   372,     3,   374,   628,     4,   567,
       5,     6,     7,   376,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,    16,    17,    18,    19,    20,
       0,    21,    22,    23,    24,     0,     0,     0,     0,     0,
       0,    25,     0,    26,    27,    28,    29,    30,     0,    31,
      32,    33,    34,    35,     0,    36,    37,     0,    38,    39,
       0,    40,    41,    42,    43,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     1,    67,     2,
       0,     3,     0,     0,     4,   604,     5,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
      15,    16,    17,    18,    19,    20,     0,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,    25,     0,    26,
      27,    28,    29,    30,     0,    31,    32,    33,    34,    35,
       0,    36,    37,     0,    38,    39,     0,    40,    41,    42,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     1,    67,     2,     0,     3,     0,     0,
       4,     0,     5,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,    15,    16,    17,    18,
      19,    20,     0,    21,    22,    23,    24,     0,     0,     0,
       0,     0,     0,    25,     0,    26,    27,    28,    29,    30,
       0,    31,    32,    33,    34,    35,     0,    36,    37,     0,
      38,    39,     0,    40,    41,    42,    43,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,    65,    66,     4,   157,
      67,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,     0,     0,    37,     0,    38,    39,
       0,    40,    41,    42,    43,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     0,     3,    65,    66,     4,   282,    67,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,     0,     0,    37,     0,    38,    39,     0,    40,
      41,    42,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,    65,    66,     4,   336,    67,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
       0,     0,    37,     0,    38,    39,     0,    40,    41,    42,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
      65,    66,     4,   448,    67,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,    35,     0,     0,
      37,     0,    38,    39,     0,    40,    41,    42,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     0,     4,    65,    66,
       6,     7,    67,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,     0,     0,    37,     0,    38,    39,     0,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     1,     0,
       2,     0,     3,     0,     0,   130,     0,     0,     6,     0,
       0,     0,     0,    65,    66,     0,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,   129,     3,     0,     0,   130,    32,     0,     6,
      35,     0,     0,     0,     0,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,    32,     0,
       0,    35,    61,    62,    63,    64,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,    55,
     131,    56,   132,    58,   133,   134,   135,    60,     0,   136,
       0,     0,     0,    61,    62,    63,    64,     0,     0,   137,
     138,   139,   140,   141,   142,   143,   144,     0,     0,     0,
       0,     0,    65,    66,   145,   146,    67,     2,     0,     3,
       0,     0,   130,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,   130,    32,     0,     6,    35,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,   211,   212,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,    32,     0,     0,    35,    61,
      62,    63,    64,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,   154,     0,     0,
      61,    62,    63,    64,     2,     0,     3,     0,     0,   130,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,   391,     0,
     130,    32,     0,     6,    35,     0,     0,     0,   331,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,    32,     0,     0,    35,    61,    62,    63,    64,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     2,     0,     3,   426,     0,   130,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
      67,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,   470,     3,     0,     0,   130,    32,     0,
       6,    35,     0,     0,     0,     0,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,    32,
       0,     0,    35,    61,    62,    63,    64,    38,    39,     0,
      40,    41,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     2,   484,
       3,     0,     0,   130,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,    67,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,   512,     0,   130,    32,     0,     6,    35,     0,
       0,     0,     0,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,    32,     0,     0,    35,
      61,    62,    63,    64,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     2,     0,     3,   586,     0,
     130,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,    67,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,   130,    32,     0,     6,    35,     0,     0,     0,     0,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,    32,     0,     0,    35,    61,    62,    63,
      64,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
      67,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     2,     0,     3,     0,     0,   130,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     0,     0,   218,     0,    32,
       0,     0,    35,     0,     0,     0,     0,    38,    39,     0,
      40,    41,    42,    43,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     293,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,    35,     0,    61,    62,    63,    64,    39,     0,
      40,    41,    42,    43,     0,     0,     2,     0,     3,     0,
       0,   130,     0,    65,    66,     0,     0,    67,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,   219,    20,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    35,    67,     0,     0,
       0,     0,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    69,     2,     3,    63,    92,    61,   197,
      19,   246,     4,   285,   114,   116,    14,   115,    16,   268,
      25,   117,     5,   247,   101,    34,   173,   211,   193,     5,
     307,   184,    15,   327,     6,   125,     5,    60,    61,     4,
       4,     8,    11,     4,   504,    43,     5,    30,    31,   326,
      11,    63,     4,     3,    38,    60,     5,   509,   241,    83,
      62,    63,    83,    52,    53,     5,    64,    76,   109,   110,
       4,    52,    53,    94,    11,     6,    61,     6,   101,     4,
     357,   358,     6,    52,   361,    10,    23,   111,     5,   273,
     111,    60,   544,   418,    83,    78,   101,     5,    83,    83,
     335,     5,    83,     7,    92,   565,     3,    83,    96,     3,
     122,    61,    52,    10,    83,     4,    10,    83,   120,     8,
      60,    93,   105,     5,    83,   419,   114,    94,    93,    94,
      94,   319,    93,     4,    83,   111,     3,     8,   130,     5,
      44,    93,   111,    83,   421,   310,   118,   119,   295,   158,
     334,   304,   242,   118,   119,   103,   154,   118,   119,    93,
     108,   438,    93,   240,    93,   222,   118,   119,   225,    93,
     353,   111,   170,   356,   499,   452,    38,   230,   503,   202,
     172,    85,    83,    87,   118,   119,   243,   118,   119,   118,
     119,    24,   245,    26,   118,   119,    84,   202,    86,     5,
       6,   478,   479,    36,   476,   188,    93,   230,   265,     3,
      23,   115,   210,   211,    27,   218,    10,   240,    16,   468,
      18,   244,   245,     3,    93,    94,   218,   462,    83,   286,
      10,   118,   119,   231,     4,   240,     6,   322,   236,   244,
     263,   465,    88,    89,    90,   268,    52,    83,   246,   118,
     119,     4,   524,     6,    60,     0,     5,     5,   263,   531,
     532,   533,   285,   268,   102,   288,     5,   290,   266,    37,
      38,   371,   373,     3,   372,   273,   113,    83,   374,   467,
     278,     8,     9,   288,   112,   290,   309,   111,     5,     6,
      95,   283,    92,    93,   292,   237,   238,   239,   355,    91,
     323,    94,    41,    52,   309,   111,   329,    41,    42,     5,
      66,    60,    61,    52,    63,    64,    65,    66,   323,   317,
      94,    60,     3,     6,     5,     5,     7,   412,   337,    10,
      41,    42,    13,     6,    83,    52,   334,   335,     6,   342,
       3,     4,   614,    60,    83,     5,    85,    86,    87,    88,
      31,    37,    38,    39,    40,     6,    52,    11,    97,    83,
      10,    83,   111,     3,    60,    32,    83,   104,   105,   106,
     107,    52,   111,    83,    55,   378,    83,   116,   117,    60,
      61,    83,    63,    64,    65,    66,   378,    83,    94,   387,
     115,    44,    52,   402,   111,     7,   405,     5,    83,    83,
      60,    94,    83,     5,    85,    86,    87,    88,   406,    83,
      91,   409,   404,    83,     5,   111,    97,    98,    99,   100,
      67,   444,    10,    83,   101,    85,    86,    87,    88,     3,
     428,    10,     5,     8,    83,   116,   117,    97,     6,   120,
       4,    23,    42,    10,   453,   468,   115,    83,    94,   502,
       7,   111,    61,   476,    31,    83,   116,   117,     5,    83,
      59,    83,     6,   468,   462,     3,     8,    94,   525,    83,
      83,   556,    83,     3,   497,   484,    83,    13,    43,   502,
       8,   473,     3,     3,    10,    83,    83,   496,     4,     6,
       3,     6,   497,   516,     5,     5,   488,     5,     7,   522,
       6,   524,   568,    15,    94,     6,    24,    94,   531,   532,
     533,   516,     4,   119,     8,     4,     6,   522,    25,    24,
      83,     6,   579,    94,    83,    11,     3,    56,    83,    83,
      79,     3,     6,     4,     3,    83,     6,   546,   547,   537,
     549,     8,     6,     3,     6,   554,   322,   507,   562,   569,
     542,   502,   575,   444,   552,    84,    85,    86,    87,    88,
      89,    90,   516,   413,    93,   556,   302,   411,   171,   125,
     575,   473,   168,   190,   103,   104,   105,   106,   107,   108,
     109,   110,   240,   242,   593,   313,   585,   550,   580,   118,
     119,   614,   595,   198,   249,   575,   248,   432,   255,   261,
     592,   257,   250,   468,    -1,    -1,   251,    -1,   252,   341,
      -1,     3,   621,     5,   256,     7,   259,   626,    10,    11,
      12,    13,    14,   262,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    -1,    57,    58,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,     3,   120,     5,
      -1,     7,    -1,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    57,    58,    -1,    60,    61,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,     3,   120,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    -1,    57,    58,    -1,
      60,    61,    -1,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,   116,   117,    10,    11,
     120,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,   116,   117,    10,    11,   120,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    -1,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,   116,   117,    10,    11,   120,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
     116,   117,    10,    11,   120,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,    -1,    10,   116,   117,
      13,    14,   120,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    -1,
      63,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,     3,    -1,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,    -1,    -1,    10,    52,    -1,    13,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    52,    -1,
      -1,    55,    97,    98,    99,   100,    60,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      -1,    -1,    -1,    97,    98,    99,   100,    -1,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,    -1,    -1,
      -1,    -1,   116,   117,   118,   119,   120,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    10,    52,    -1,    13,    55,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    52,    -1,    -1,    55,    97,
      98,    99,   100,    60,    61,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,
      97,    98,    99,   100,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      10,    52,    -1,    13,    55,    -1,    -1,    -1,    59,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    52,    -1,    -1,    55,    97,    98,    99,   100,
      60,    61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,     5,    -1,     7,     8,    -1,    10,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    10,    52,    -1,
      13,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    52,
      -1,    -1,    55,    97,    98,    99,   100,    60,    61,    -1,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,     5,     6,
       7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,     8,    -1,    10,    52,    -1,    13,    55,    -1,
      -1,    -1,    -1,    60,    61,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    52,    -1,    -1,    55,
      97,    98,    99,   100,    60,    61,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,     5,    -1,     7,     8,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    10,    52,    -1,    13,    55,    -1,    -1,    -1,    -1,
      60,    61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    52,    -1,    -1,    55,    97,    98,    99,
     100,    60,    61,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
     120,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    10,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    55,    -1,    97,    98,    99,   100,    61,    -1,
      63,    64,    65,    66,    -1,    -1,     5,    -1,     7,    -1,
      -1,    10,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    94,    31,    -1,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,   117,    -1,    55,   120,    -1,    -1,
      -1,    -1,    61,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,   120
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,    10,    12,    13,    14,    16,    17,
      18,    19,    20,    21,    22,    26,    27,    28,    29,    30,
      31,    33,    34,    35,    36,    43,    45,    46,    47,    48,
      49,    51,    52,    53,    54,    55,    57,    58,    60,    61,
      63,    64,    65,    66,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    83,    85,    86,    87,    88,
      91,    97,    98,    99,   100,   116,   117,   120,   128,   129,
     130,   132,   134,   135,   137,   140,   144,   149,   151,   152,
     162,   164,   165,   166,   168,   172,   177,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   196,   198,   209,
     210,   213,   214,   215,   222,   224,   227,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   253,   258,   259,   260,   262,   267,   268,     6,
      10,    84,    86,    88,    89,    90,    93,   103,   104,   105,
     106,   107,   108,   109,   110,   118,   119,   189,   192,   211,
     232,   233,   234,   235,    94,   189,   236,    11,   144,   190,
     195,    37,    38,    39,    40,   148,   202,   204,   205,   206,
       5,   165,     5,     5,     5,   189,   206,     3,   189,   165,
      83,   173,     3,   131,   206,   131,   202,   203,     5,    83,
     111,   153,   155,   216,   217,   218,   220,   221,   222,   202,
     131,   145,   206,   206,    83,   165,    83,   252,    83,   202,
      83,    80,    81,   189,   261,   155,   153,   154,    10,    94,
     163,   251,   265,   163,   251,   265,   189,     0,   130,   165,
     206,     5,     3,   135,   136,     3,     4,    93,   118,   119,
      41,    97,   155,   212,   250,   206,    92,    96,   114,   102,
     112,   113,   111,   103,   108,   231,   232,   233,    86,   234,
      88,   235,    95,    91,   251,   265,     7,    44,   115,   191,
     193,   196,   258,    66,   190,     6,     6,   189,    94,     8,
       9,   266,    11,    94,    11,     5,   199,   204,    41,    42,
     207,   189,   182,    83,   190,   188,    83,    10,    83,     3,
      32,   169,   171,    83,    41,   207,   208,    83,    83,   206,
     216,    94,   191,    44,    92,    93,   219,     7,   193,   194,
     197,   220,    83,     5,   200,   155,    83,    94,    83,     5,
      83,    59,   189,   261,    67,     5,    11,   144,    83,   111,
     263,   264,    10,   163,   163,   101,   153,   189,     3,   189,
     198,   198,   198,    97,   212,   199,    56,   211,   258,     3,
     163,   155,   153,   189,   236,   237,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   155,    10,   163,
     189,    83,   155,   254,   255,   256,   267,     5,   257,   261,
       8,     8,   189,   190,     6,   155,   156,   157,     3,   163,
     155,   155,     6,   189,     4,     6,   188,     4,    94,    23,
     179,   180,    10,   170,   169,   115,   201,   207,   201,    94,
     139,   155,   191,    83,   141,   218,     8,   189,     7,   193,
     136,     6,   155,   160,   161,    31,   146,   147,    83,   201,
     141,   156,   158,   159,     5,    59,   261,   236,    11,    83,
      94,   263,    83,     6,   199,     3,     3,   163,   199,   201,
     201,   201,     5,    83,   228,    94,   190,     8,     4,     8,
       6,   189,     8,     4,    83,   229,     4,     6,    83,    83,
     165,     3,   190,   165,     6,   189,    83,    13,   223,   189,
      11,   179,    83,   135,   175,   176,   173,    52,    53,    83,
     142,   143,    43,   138,   139,   141,     3,    10,   133,   201,
       3,     4,     8,     3,   229,   230,     4,     6,    83,    83,
       3,   201,    10,    10,     4,     6,   159,     6,   201,   165,
       3,     5,     5,     5,   236,   237,    11,     7,   193,   255,
       6,   195,    94,   156,   201,   201,    15,     6,   165,     6,
      94,   190,    24,   178,    25,   119,     4,   174,   165,   155,
       8,   139,     4,     8,   154,   139,   133,    11,   129,   200,
      83,   160,    83,   155,   225,   226,   167,   156,   163,     6,
      24,   150,   156,   156,   156,     6,     8,   190,   200,   165,
     165,   165,   223,     6,   189,    94,   165,    83,   175,    11,
      83,    53,   142,   133,    11,   147,     3,    83,    11,   225,
      79,   163,   190,     3,     4,     6,     6,   228,     3,   190,
     165,   144,     8,     6,     3,   156,     6,     6,   165
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   127,   128,   128,   129,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   131,   132,   132,   133,
     133,   133,   134,   135,   136,   137,   138,   138,   139,   139,
     140,   141,   141,   142,   142,   143,   143,   144,   144,   145,
     146,   146,   147,   147,   148,   149,   150,   150,   151,   151,
     152,   153,   153,   154,   155,   156,   156,   157,   157,   158,
     158,   159,   159,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   167,   166,   168,   170,   169,   171,
     171,   172,   173,   173,   174,   174,   175,   175,   176,   176,
     177,   178,   178,   179,   180,   180,   181,   181,   182,   182,
     183,   183,   183,   183,   183,   183,   183,   183,   184,   185,
     185,   186,   186,   187,   187,   187,   187,   188,   188,   189,
     189,   190,   190,   190,   190,   191,   191,   192,   192,   192,
     192,   192,   193,   193,   193,   194,   194,   194,   195,   195,
     196,   196,   196,   197,   197,   198,   198,   198,   199,   199,
     200,   200,   201,   201,   201,   201,   202,   203,   203,   204,
     204,   205,   205,   206,   206,   206,   206,   207,   207,   208,
     208,   209,   209,   209,   209,   210,   211,   211,   211,   211,
     211,   212,   212,   212,   212,   213,   213,   214,   214,   214,
     215,   215,   215,   215,   215,   215,   216,   216,   217,   217,
     218,   218,   219,   219,   219,   220,   221,   221,   222,   222,
     223,   223,   224,   224,   225,   225,   226,   226,   227,   228,
     229,   230,   230,   231,   231,   232,   232,   232,   232,   233,
     233,   234,   234,   235,   235,   235,   236,   236,   237,   237,
     237,   238,   238,   239,   239,   240,   240,   241,   241,   242,
     242,   243,   243,   244,   244,   245,   245,   246,   246,   247,
     247,   248,   248,   249,   249,   250,   250,   250,   250,   250,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   252,   252,   253,   253,   254,   255,   255,   256,   256,
     257,   257,   258,   258,   259,   260,   260,   260,   260,   260,
     260,   261,   261,   261,   262,   262,   263,   263,   264,   264,
     265,   265,   266,   266,   267,   267,   267,   267,   267,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     7,     6,     3,
       2,     1,     5,     1,     1,     5,     2,     0,     0,     2,
       5,     1,     3,     2,     3,     1,     3,     1,     2,     4,
       2,     2,     0,     1,     5,     5,     0,     2,     1,     1,
       7,     2,     1,     1,     1,     4,     2,     1,     3,     1,
       3,     1,     0,     2,     1,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     2,     0,     4,     1,
       2,     3,     1,     0,     1,     0,     1,     3,     1,     3,
       7,     2,     0,     5,     1,     2,     7,     5,     1,     1,
       5,     5,     6,     7,     8,    10,     5,     7,     2,     5,
       7,     1,     1,     3,     2,     3,     2,     2,     1,     1,
       3,     1,     3,     3,     3,     3,     0,     1,     1,     1,
       1,     1,     3,     4,     5,     2,     3,     2,     3,     5,
       5,     4,     4,     1,     1,     1,     4,     7,     3,     2,
       3,     2,     3,     5,     3,     0,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     0,     2,
       1,     4,     4,     7,     6,     8,     1,     1,     1,     1,
       1,     8,     6,     6,     3,     1,     2,     3,     3,     4,
       1,     1,     1,     4,     4,     5,     1,     7,     2,     3,
       1,     3,     1,     1,     0,     2,     1,     2,     1,     1,
       1,     0,     1,     1,     2,     3,     1,     2,     7,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     5,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     5,     2,     2,     2,     3,     3,
       2,     1,     2,     2,     1,     1,     1,     1,     1,     3,
       3,     2,     1,     1,     3,     1,     2,     2,     3,     2,
       1,     1,     2,     3,     2,     3,     1,     2,     1,     2,
       3,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     3,     1,     3,     5,     3,
       2,     2
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
#line 193 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2565 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 194 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2571 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 197 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2580 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 201 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2589 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 207 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2595 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 208 "src/gwion.y"
                 {
    // temporarly disallow const generics in templates func
    if((yyvsp[0].func_def)->base->tmpl) {
      if((yyvsp[0].func_def)->base->tmpl->list->len != tmplarg_ntypes((yyvsp[0].func_def)->base->tmpl->list)) {
        parser_error(&(yylsp[0]), arg, "const generics not allowed in templates (for now)", 0);
        YYERROR;
      }
    }
    (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def));
  }
#line 2610 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 218 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2616 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 219 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2622 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 220 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2628 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 221 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2634 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 222 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2640 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 223 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2646 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 224 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2652 "src/parser.c"
    break;

  case 15: /* section: prim_def  */
#line 225 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def)); }
#line 2658 "src/parser.c"
    break;

  case 16: /* class_flag: flag modifier  */
#line 228 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2664 "src/parser.c"
    break;

  case 17: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits class_body  */
#line 231 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-2].type_decl), (yyvsp[0].ast), (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2675 "src/parser.c"
    break;

  case 18: /* class_def: "struct" class_flag "<identifier>" decl_template traits class_body  */
#line 238 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-4].flag), (yyvsp[-3].sym), NULL, (yyvsp[0].ast), (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2687 "src/parser.c"
    break;

  case 19: /* class_body: "{" ast "}"  */
#line 246 "src/gwion.y"
                          { (yyval.ast) = (yyvsp[-1].ast); }
#line 2693 "src/parser.c"
    break;

  case 20: /* class_body: "{" "}"  */
#line 246 "src/gwion.y"
                                                 { (yyval.ast) = NULL; }
#line 2699 "src/parser.c"
    break;

  case 21: /* class_body: ";"  */
#line 246 "src/gwion.y"
                                                                      { (yyval.ast) = NULL; }
#line 2705 "src/parser.c"
    break;

  case 22: /* trait_def: "trait" opt_global "<identifier>" traits class_body  */
#line 249 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2714 "src/parser.c"
    break;

  case 23: /* number: INTEGER  */
#line 254 "src/gwion.y"
                {
  if((yyvsp[0].yyint).num < 0 || (yyvsp[0].yyint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type);
}
#line 2725 "src/parser.c"
    break;

  case 24: /* decimal: number  */
#line 261 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2736 "src/parser.c"
    break;

  case 25: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 269 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2744 "src/parser.c"
    break;

  case 26: /* class_ext: "extends" type_decl_exp  */
#line 272 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2750 "src/parser.c"
    break;

  case 27: /* class_ext: %empty  */
#line 272 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2756 "src/parser.c"
    break;

  case 28: /* traits: %empty  */
#line 273 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2762 "src/parser.c"
    break;

  case 29: /* traits: ":" id_list  */
#line 273 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2768 "src/parser.c"
    break;

  case 30: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 275 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2776 "src/parser.c"
    break;

  case 31: /* id_list: "<identifier>"  */
#line 281 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), Symbol, 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2785 "src/parser.c"
    break;

  case 32: /* id_list: id_list "," "<identifier>"  */
#line 286 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2794 "src/parser.c"
    break;

  case 33: /* specialized: "<identifier>" traits  */
#line 291 "src/gwion.y"
                       {
    (yyval.specialized) = (Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      };
  }
#line 2806 "src/parser.c"
    break;

  case 34: /* specialized: "const" type_decl_empty "<identifier>"  */
#line 298 "src/gwion.y"
                               {
    (yyval.specialized) = (Specialized) {
        .xid = (yyvsp[0].sym),
        .td = (yyvsp[-1].type_decl),
        .pos = (yylsp[-1])
      };
  }
#line 2818 "src/parser.c"
    break;

  case 35: /* specialized_list: specialized  */
#line 306 "src/gwion.y"
                              {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, (yyvsp[0].specialized));
  }
#line 2827 "src/parser.c"
    break;

  case 36: /* specialized_list: specialized_list "," specialized  */
#line 310 "src/gwion.y"
                                     {
    mp_vector_add(mpool(arg), &(yyvsp[-2].specialized_list), Specialized, (yyvsp[0].specialized));
    (yyval.specialized_list) = (yyvsp[-2].specialized_list);
  }
#line 2836 "src/parser.c"
    break;

  case 37: /* stmt_list: stmt  */
#line 315 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2845 "src/parser.c"
    break;

  case 38: /* stmt_list: stmt_list stmt  */
#line 319 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2854 "src/parser.c"
    break;

  case 39: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 324 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2861 "src/parser.c"
    break;

  case 40: /* _func_effects: "perform" "<identifier>"  */
#line 327 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2867 "src/parser.c"
    break;

  case 41: /* _func_effects: _func_effects "<identifier>"  */
#line 327 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2873 "src/parser.c"
    break;

  case 42: /* func_effects: %empty  */
#line 328 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2879 "src/parser.c"
    break;

  case 43: /* func_effects: _func_effects  */
#line 328 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2885 "src/parser.c"
    break;

  case 44: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 330 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2892 "src/parser.c"
    break;

  case 45: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 333 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2902 "src/parser.c"
    break;

  case 46: /* typedef_when: %empty  */
#line 339 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2908 "src/parser.c"
    break;

  case 47: /* typedef_when: "when" binary_exp  */
#line 339 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2914 "src/parser.c"
    break;

  case 48: /* type_def_type: "typedef"  */
#line 340 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2920 "src/parser.c"
    break;

  case 49: /* type_def_type: "distinct"  */
#line 340 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2926 "src/parser.c"
    break;

  case 50: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 341 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2939 "src/parser.c"
    break;

  case 51: /* type_decl_array: type_decl array  */
#line 350 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2945 "src/parser.c"
    break;

  case 53: /* type_decl_exp: type_decl_array  */
#line 352 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2953 "src/parser.c"
    break;

  case 54: /* type_decl_empty: type_decl_array  */
#line 356 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2961 "src/parser.c"
    break;

  case 55: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 361 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2970 "src/parser.c"
    break;

  case 56: /* arg: type_decl_empty arg_decl  */
#line 365 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 2979 "src/parser.c"
    break;

  case 57: /* arg_list: arg  */
#line 370 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2989 "src/parser.c"
    break;

  case 58: /* arg_list: arg_list "," arg  */
#line 375 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3001 "src/parser.c"
    break;

  case 59: /* locale_arg: arg  */
#line 384 "src/gwion.y"
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
#line 3017 "src/parser.c"
    break;

  case 60: /* locale_arg: locale_arg "," arg  */
#line 395 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3029 "src/parser.c"
    break;

  case 62: /* locale_list: %empty  */
#line 404 "src/gwion.y"
    {
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
    }
#line 3043 "src/parser.c"
    break;

  case 63: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 414 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 3049 "src/parser.c"
    break;

  case 64: /* fptr_list: fptr_arg  */
#line 416 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 3058 "src/parser.c"
    break;

  case 65: /* fptr_list: fptr_list "," fptr_arg  */
#line 420 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 3067 "src/parser.c"
    break;

  case 66: /* code_stmt: "{" "}"  */
#line 426 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 3074 "src/parser.c"
    break;

  case 67: /* code_stmt: "{" stmt_list "}"  */
#line 428 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 3081 "src/parser.c"
    break;

  case 68: /* code_list: "{" "}"  */
#line 432 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 0); }
#line 3087 "src/parser.c"
    break;

  case 69: /* code_list: "{" stmt_list "}"  */
#line 433 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3093 "src/parser.c"
    break;

  case 70: /* stmt_pp: "<comment>"  */
#line 436 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 3099 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#include"  */
#line 437 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 3105 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#define"  */
#line 438 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 3111 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#pragma"  */
#line 439 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 3117 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#undef"  */
#line 440 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 3123 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#ifdef"  */
#line 441 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 3129 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#ifndef"  */
#line 442 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 3135 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#else"  */
#line 443 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 3141 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#if"  */
#line 444 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 3147 "src/parser.c"
    break;

  case 79: /* stmt_pp: "\n"  */
#line 445 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 3153 "src/parser.c"
    break;

  case 80: /* stmt_pp: "import"  */
#line 446 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 3159 "src/parser.c"
    break;

  case 81: /* stmt_pp: LOCALE_INI "<identifier>" exp LOCALE_END  */
#line 447 "src/gwion.y"
                                 { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = (yyvsp[-1].exp), .xid = (yyvsp[-2].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-3]) }; }
#line 3166 "src/parser.c"
    break;

  case 82: /* stmt_pp: LOCALE_INI "<identifier>" LOCALE_END  */
#line 449 "src/gwion.y"
                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = (yyvsp[-1].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-2]) }; }
#line 3173 "src/parser.c"
    break;

  case 94: /* $@1: %empty  */
#line 466 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3179 "src/parser.c"
    break;

  case 95: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 466 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .xid = (yyvsp[-5].sym),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
    .pos = (yylsp[-2]).first
  };
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_spread, .d = { .stmt_spread = spread }, .pos = (yylsp[-5])};
}
#line 3193 "src/parser.c"
    break;

  case 96: /* retry_stmt: "retry" ";"  */
#line 476 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3203 "src/parser.c"
    break;

  case 97: /* $@2: %empty  */
#line 481 "src/gwion.y"
                  { arg->handling = true; }
#line 3209 "src/parser.c"
    break;

  case 98: /* handler: "handle" $@2 opt_id stmt  */
#line 481 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3215 "src/parser.c"
    break;

  case 99: /* handler_list: handler  */
#line 482 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), Handler, 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3225 "src/parser.c"
    break;

  case 100: /* handler_list: handler_list handler  */
#line 487 "src/gwion.y"
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
#line 3246 "src/parser.c"
    break;

  case 101: /* try_stmt: "try" stmt handler_list  */
#line 503 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3255 "src/parser.c"
    break;

  case 103: /* opt_id: %empty  */
#line 508 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3261 "src/parser.c"
    break;

  case 105: /* opt_comma: %empty  */
#line 509 "src/gwion.y"
                 {}
#line 3267 "src/parser.c"
    break;

  case 106: /* enum_value: "<identifier>"  */
#line 512 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .xid = (yyvsp[0].sym) }; }
#line 3273 "src/parser.c"
    break;

  case 107: /* enum_value: number "<dynamic_operator>" "<identifier>"  */
#line 513 "src/gwion.y"
                                           { 
            if (strcmp(s_name((yyvsp[-1].sym)), ":=>")) {
              parser_error(&(yylsp[-2]), arg, "enum value must be set with :=>", 0x0240); YYERROR;
          }
            (yyval.enum_value) = (EnumValue) {.xid = (yyvsp[0].sym), .gwint = (yyvsp[-2].gwint), .set = true };
          }
#line 3284 "src/parser.c"
    break;

  case 108: /* enum_list: enum_value  */
#line 520 "src/gwion.y"
  {
    (yyval.enum_list) = new_mp_vector(mpool(arg), EnumValue, 1);
    mp_vector_set((yyval.enum_list), EnumValue, 0, (yyvsp[0].enum_value));
  }
#line 3293 "src/parser.c"
    break;

  case 109: /* enum_list: enum_list "," enum_value  */
#line 525 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].enum_list), EnumValue, (yyvsp[0].enum_value));
    (yyval.enum_list) = (yyvsp[-2].enum_list);
  }
#line 3302 "src/parser.c"
    break;

  case 110: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 530 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3311 "src/parser.c"
    break;

  case 111: /* when_exp: "when" exp  */
#line 535 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3317 "src/parser.c"
    break;

  case 112: /* when_exp: %empty  */
#line 535 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3323 "src/parser.c"
    break;

  case 113: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 538 "src/gwion.y"
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
#line 3339 "src/parser.c"
    break;

  case 114: /* match_list: match_case_stmt  */
#line 550 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3348 "src/parser.c"
    break;

  case 115: /* match_list: match_list match_case_stmt  */
#line 554 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3357 "src/parser.c"
    break;

  case 116: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 559 "src/gwion.y"
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
#line 3372 "src/parser.c"
    break;

  case 117: /* match_stmt: "match" exp "{" match_list "}"  */
#line 570 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3386 "src/parser.c"
    break;

  case 118: /* flow: "while"  */
#line 581 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3392 "src/parser.c"
    break;

  case 119: /* flow: "until"  */
#line 582 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3398 "src/parser.c"
    break;

  case 120: /* loop_stmt: flow "(" exp ")" stmt  */
#line 587 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3411 "src/parser.c"
    break;

  case 121: /* loop_stmt: "do" stmt flow exp ";"  */
#line 596 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3425 "src/parser.c"
    break;

  case 122: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 606 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3439 "src/parser.c"
    break;

  case 123: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 616 "src/gwion.y"
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
#line 3454 "src/parser.c"
    break;

  case 124: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 627 "src/gwion.y"
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
#line 3471 "src/parser.c"
    break;

  case 125: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 640 "src/gwion.y"
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
#line 3493 "src/parser.c"
    break;

  case 126: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 658 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3506 "src/parser.c"
    break;

  case 127: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 667 "src/gwion.y"
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
#line 3523 "src/parser.c"
    break;

  case 128: /* defer_stmt: "defer" stmt  */
#line 680 "src/gwion.y"
                         {
    const loc_t loc = defer_stmt(&(yyvsp[0].stmt));
    if(loc.first.line) {
      // defer could maybe return the position
      parser_error(&loc, arg, "return statement in defer", 0x0209);
      YYERROR;
    }
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_defer,
    .d = { .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }},
    .pos = (yylsp[-1])
  };
}
#line 3540 "src/parser.c"
    break;

  case 129: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 695 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3553 "src/parser.c"
    break;

  case 130: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 704 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3567 "src/parser.c"
    break;

  case 131: /* breaks: "break"  */
#line 714 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3573 "src/parser.c"
    break;

  case 132: /* breaks: "continue"  */
#line 714 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3579 "src/parser.c"
    break;

  case 133: /* jump_stmt: "return" exp ";"  */
#line 716 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3589 "src/parser.c"
    break;

  case 134: /* jump_stmt: "return" ";"  */
#line 721 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3598 "src/parser.c"
    break;

  case 135: /* jump_stmt: breaks decimal ";"  */
#line 725 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].gwint).num }},
      .pos = (yylsp[-2])
    };
  }
#line 3608 "src/parser.c"
    break;

  case 136: /* jump_stmt: breaks ";"  */
#line 730 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3617 "src/parser.c"
    break;

  case 137: /* exp_stmt: exp ";"  */
#line 736 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3627 "src/parser.c"
    break;

  case 138: /* exp_stmt: ";"  */
#line 741 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3636 "src/parser.c"
    break;

  case 139: /* exp: binary_exp  */
#line 747 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3642 "src/parser.c"
    break;

  case 140: /* exp: binary_exp "," exp  */
#line 749 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3654 "src/parser.c"
    break;

  case 142: /* binary_exp: binary_exp "@" decl_exp  */
#line 760 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3660 "src/parser.c"
    break;

  case 143: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 761 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3666 "src/parser.c"
    break;

  case 144: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 762 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3672 "src/parser.c"
    break;

  case 145: /* call_template: ":[" type_list "]"  */
#line 765 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3678 "src/parser.c"
    break;

  case 146: /* call_template: %empty  */
#line 765 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3684 "src/parser.c"
    break;

  case 152: /* array_exp: "[" exp "]"  */
#line 770 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3690 "src/parser.c"
    break;

  case 153: /* array_exp: "[" exp "]" array_exp  */
#line 771 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3698 "src/parser.c"
    break;

  case 154: /* array_exp: "[" exp "]" "[" "]"  */
#line 774 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3704 "src/parser.c"
    break;

  case 155: /* array_empty: "[" "]"  */
#line 778 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3710 "src/parser.c"
    break;

  case 156: /* array_empty: array_empty "[" "]"  */
#line 779 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3716 "src/parser.c"
    break;

  case 157: /* array_empty: array_empty array_exp  */
#line 780 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3722 "src/parser.c"
    break;

  case 158: /* dict_list: binary_exp ":" binary_exp  */
#line 784 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3728 "src/parser.c"
    break;

  case 159: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 785 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3734 "src/parser.c"
    break;

  case 160: /* range: "[" exp ":" exp "]"  */
#line 788 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3740 "src/parser.c"
    break;

  case 161: /* range: "[" exp ":" "]"  */
#line 789 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3746 "src/parser.c"
    break;

  case 162: /* range: "[" ":" exp "]"  */
#line 790 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3752 "src/parser.c"
    break;

  case 166: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 796 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3758 "src/parser.c"
    break;

  case 167: /* decl_exp: type_decl_flag2 flag type_decl_array "(" opt_exp ")" var_decl  */
#line 797 "src/gwion.y"
                                                                  {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-4].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-6].flag) | (yyvsp[-5].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-2].exp) ?: new_prim_nil(mpool(arg), (yylsp[-2]));
  }
#line 3768 "src/parser.c"
    break;

  case 168: /* func_args: "(" arg_list ")"  */
#line 803 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3774 "src/parser.c"
    break;

  case 169: /* func_args: "(" ")"  */
#line 803 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3780 "src/parser.c"
    break;

  case 170: /* fptr_args: "(" fptr_list ")"  */
#line 804 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3786 "src/parser.c"
    break;

  case 171: /* fptr_args: "(" ")"  */
#line 804 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3792 "src/parser.c"
    break;

  case 172: /* decl_template: ":[" specialized_list "]"  */
#line 806 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3798 "src/parser.c"
    break;

  case 173: /* decl_template: ":[" specialized_list "," "..." "]"  */
#line 807 "src/gwion.y"
                                                    {
  (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  Specialized spec = { .xid = insert_symbol("...") };
  mp_vector_add(mpool(arg), &(yyval.specialized_list), Specialized, spec);

}
#line 3809 "src/parser.c"
    break;

  case 174: /* decl_template: ":[" "..." "]"  */
#line 813 "src/gwion.y"
                                {
  Specialized spec = { .xid = insert_symbol("...") };
  (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
  mp_vector_set((yyval.specialized_list), Specialized, 0, spec);
}
#line 3819 "src/parser.c"
    break;

  case 175: /* decl_template: %empty  */
#line 818 "src/gwion.y"
               { (yyval.specialized_list) = NULL; }
#line 3825 "src/parser.c"
    break;

  case 176: /* global: "global"  */
#line 820 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3831 "src/parser.c"
    break;

  case 178: /* opt_global: %empty  */
#line 821 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3837 "src/parser.c"
    break;

  case 179: /* storage_flag: "static"  */
#line 823 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3843 "src/parser.c"
    break;

  case 181: /* access_flag: "private"  */
#line 825 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3849 "src/parser.c"
    break;

  case 182: /* access_flag: "protect"  */
#line 826 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3855 "src/parser.c"
    break;

  case 183: /* flag: access_flag  */
#line 829 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3861 "src/parser.c"
    break;

  case 184: /* flag: storage_flag  */
#line 830 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3867 "src/parser.c"
    break;

  case 185: /* flag: access_flag storage_flag  */
#line 831 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3873 "src/parser.c"
    break;

  case 186: /* flag: %empty  */
#line 832 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3879 "src/parser.c"
    break;

  case 187: /* final: "final"  */
#line 835 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3885 "src/parser.c"
    break;

  case 188: /* final: %empty  */
#line 835 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3891 "src/parser.c"
    break;

  case 189: /* modifier: "abstract" final  */
#line 837 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3897 "src/parser.c"
    break;

  case 191: /* func_def_base: "fun" func_base func_args code_list  */
#line 840 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3907 "src/parser.c"
    break;

  case 192: /* func_def_base: "fun" func_base func_args ";"  */
#line 845 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3919 "src/parser.c"
    break;

  case 193: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 852 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3930 "src/parser.c"
    break;

  case 194: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 858 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3941 "src/parser.c"
    break;

  case 195: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 867 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3953 "src/parser.c"
    break;

  case 201: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 878 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3967 "src/parser.c"
    break;

  case 202: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 888 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3980 "src/parser.c"
    break;

  case 203: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 897 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3994 "src/parser.c"
    break;

  case 204: /* op_base: type_decl_empty OPID_A func_args  */
#line 907 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 4003 "src/parser.c"
    break;

  case 205: /* operator: "operator"  */
#line 912 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 4009 "src/parser.c"
    break;

  case 206: /* operator: "operator" global  */
#line 912 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 4015 "src/parser.c"
    break;

  case 207: /* op_def: operator op_base code_list  */
#line 915 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 4021 "src/parser.c"
    break;

  case 208: /* op_def: operator op_base ";"  */
#line 917 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 4027 "src/parser.c"
    break;

  case 209: /* op_def: operator "abstract" op_base ";"  */
#line 919 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 4033 "src/parser.c"
    break;

  case 213: /* func_def: operator "new" func_args code_list  */
#line 923 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 4043 "src/parser.c"
    break;

  case 214: /* func_def: operator "new" func_args ";"  */
#line 929 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4054 "src/parser.c"
    break;

  case 215: /* func_def: operator "abstract" "new" func_args ";"  */
#line 936 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4065 "src/parser.c"
    break;

  case 216: /* type_decl_base: "<identifier>"  */
#line 944 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4071 "src/parser.c"
    break;

  case 217: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 945 "src/gwion.y"
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
#line 4087 "src/parser.c"
    break;

  case 218: /* type_decl_tmpl: type_decl_base call_template  */
#line 959 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4093 "src/parser.c"
    break;

  case 219: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 960 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4099 "src/parser.c"
    break;

  case 221: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 965 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4105 "src/parser.c"
    break;

  case 222: /* option: "?"  */
#line 968 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4111 "src/parser.c"
    break;

  case 223: /* option: OPTIONS  */
#line 968 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4117 "src/parser.c"
    break;

  case 224: /* option: %empty  */
#line 968 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 4123 "src/parser.c"
    break;

  case 225: /* type_decl_opt: type_decl_noflag option  */
#line 969 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4129 "src/parser.c"
    break;

  case 227: /* type_decl: type_decl_flag type_decl_opt  */
#line 970 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4135 "src/parser.c"
    break;

  case 228: /* type_decl_flag: "late"  */
#line 973 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4141 "src/parser.c"
    break;

  case 229: /* type_decl_flag: "const"  */
#line 974 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4147 "src/parser.c"
    break;

  case 230: /* opt_var: "var"  */
#line 976 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4153 "src/parser.c"
    break;

  case 231: /* opt_var: %empty  */
#line 976 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4159 "src/parser.c"
    break;

  case 232: /* type_decl_flag2: "var"  */
#line 978 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4165 "src/parser.c"
    break;

  case 234: /* union_decl: "<identifier>" ";"  */
#line 981 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 4174 "src/parser.c"
    break;

  case 235: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 985 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 4180 "src/parser.c"
    break;

  case 236: /* union_list: union_decl  */
#line 987 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), Union_Member, 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 4189 "src/parser.c"
    break;

  case 237: /* union_list: union_list union_decl  */
#line 991 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 4198 "src/parser.c"
    break;

  case 238: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 997 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4210 "src/parser.c"
    break;

  case 239: /* var_decl: "<identifier>"  */
#line 1006 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4216 "src/parser.c"
    break;

  case 240: /* arg_decl: "<identifier>"  */
#line 1008 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4222 "src/parser.c"
    break;

  case 242: /* fptr_arg_decl: %empty  */
#line 1009 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4228 "src/parser.c"
    break;

  case 256: /* opt_exp: exp  */
#line 1017 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4234 "src/parser.c"
    break;

  case 257: /* opt_exp: %empty  */
#line 1017 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4240 "src/parser.c"
    break;

  case 259: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 1020 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4246 "src/parser.c"
    break;

  case 260: /* con_exp: log_or_exp "?:" con_exp  */
#line 1022 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4252 "src/parser.c"
    break;

  case 262: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 1024 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4258 "src/parser.c"
    break;

  case 264: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 1025 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4264 "src/parser.c"
    break;

  case 266: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 1026 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4270 "src/parser.c"
    break;

  case 268: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 1027 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4276 "src/parser.c"
    break;

  case 270: /* and_exp: and_exp "&" eq_exp  */
#line 1028 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4282 "src/parser.c"
    break;

  case 272: /* eq_exp: eq_exp eq_op rel_exp  */
#line 1029 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4288 "src/parser.c"
    break;

  case 274: /* rel_exp: rel_exp rel_op shift_exp  */
#line 1030 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4294 "src/parser.c"
    break;

  case 276: /* shift_exp: shift_exp shift_op add_exp  */
#line 1031 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4300 "src/parser.c"
    break;

  case 278: /* add_exp: add_exp add_op mul_exp  */
#line 1032 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4306 "src/parser.c"
    break;

  case 280: /* mul_exp: mul_exp mul_op dur_exp  */
#line 1033 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4312 "src/parser.c"
    break;

  case 282: /* dur_exp: dur_exp "::" cast_exp  */
#line 1034 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4318 "src/parser.c"
    break;

  case 284: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 1037 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4324 "src/parser.c"
    break;

  case 291: /* unary_exp: unary_op unary_exp  */
#line 1044 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4330 "src/parser.c"
    break;

  case 292: /* unary_exp: "spork" unary_exp  */
#line 1045 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4336 "src/parser.c"
    break;

  case 293: /* unary_exp: "fork" unary_exp  */
#line 1046 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4342 "src/parser.c"
    break;

  case 294: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 1047 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4350 "src/parser.c"
    break;

  case 295: /* unary_exp: "new" type_decl_exp  */
#line 1050 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4356 "src/parser.c"
    break;

  case 296: /* unary_exp: "spork" code_list  */
#line 1051 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4362 "src/parser.c"
    break;

  case 297: /* unary_exp: "fork" code_list  */
#line 1052 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4368 "src/parser.c"
    break;

  case 298: /* unary_exp: "spork" captures code_list  */
#line 1053 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4374 "src/parser.c"
    break;

  case 299: /* unary_exp: "fork" captures code_list  */
#line 1054 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4380 "src/parser.c"
    break;

  case 300: /* unary_exp: "$" type_decl_empty  */
#line 1055 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4386 "src/parser.c"
    break;

  case 301: /* lambda_list: "<identifier>"  */
#line 1058 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4396 "src/parser.c"
    break;

  case 302: /* lambda_list: lambda_list "<identifier>"  */
#line 1063 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4406 "src/parser.c"
    break;

  case 303: /* lambda_arg: "\\" lambda_list  */
#line 1068 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4412 "src/parser.c"
    break;

  case 304: /* lambda_arg: "\\"  */
#line 1068 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4418 "src/parser.c"
    break;

  case 306: /* tmplarg: type_decl_empty  */
#line 1077 "src/gwion.y"
                         {
    (yyval.tmplarg) = (TmplArg) { .d = { .td = (yyvsp[0].type_decl)}, .type = tmplarg_td};
  }
#line 4426 "src/parser.c"
    break;

  case 307: /* tmplarg: tmplarg_exp  */
#line 1080 "src/gwion.y"
                {
    (yyval.tmplarg) = (TmplArg) { .d = { .exp = (yyvsp[0].exp)}, .type = tmplarg_exp};
  }
#line 4434 "src/parser.c"
    break;

  case 308: /* type_list: tmplarg  */
#line 1085 "src/gwion.y"
            {
    (yyval.type_list) = new_mp_vector(mpool(arg), TmplArg, 1);
    mp_vector_set((yyval.type_list), TmplArg, 0, (yyvsp[0].tmplarg));
  }
#line 4443 "src/parser.c"
    break;

  case 309: /* type_list: type_list "," tmplarg  */
#line 1089 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), TmplArg, (yyvsp[0].tmplarg));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4452 "src/parser.c"
    break;

  case 310: /* call_paren: "(" exp ")"  */
#line 1095 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4458 "src/parser.c"
    break;

  case 311: /* call_paren: "(" ")"  */
#line 1095 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4464 "src/parser.c"
    break;

  case 314: /* dot_exp: post_exp "." "<identifier>"  */
#line 1099 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4477 "src/parser.c"
    break;

  case 316: /* post_exp: post_exp array_exp  */
#line 1110 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4483 "src/parser.c"
    break;

  case 317: /* post_exp: post_exp range  */
#line 1112 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4489 "src/parser.c"
    break;

  case 318: /* post_exp: post_exp call_template call_paren  */
#line 1114 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4496 "src/parser.c"
    break;

  case 319: /* post_exp: post_exp post_op  */
#line 1117 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4502 "src/parser.c"
    break;

  case 320: /* post_exp: dot_exp  */
#line 1118 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4508 "src/parser.c"
    break;

  case 321: /* interp_exp: "<interp string end>"  */
#line 1122 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4514 "src/parser.c"
    break;

  case 322: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1123 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4520 "src/parser.c"
    break;

  case 323: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1124 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4526 "src/parser.c"
    break;

  case 324: /* interp: "${" interp_exp  */
#line 1126 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4532 "src/parser.c"
    break;

  case 325: /* interp: interp "${" interp_exp  */
#line 1127 "src/gwion.y"
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
#line 4547 "src/parser.c"
    break;

  case 326: /* capture: "<identifier>"  */
#line 1138 "src/gwion.y"
            { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .pos = (yylsp[0]) };}
#line 4553 "src/parser.c"
    break;

  case 327: /* capture: "&" "<identifier>"  */
#line 1138 "src/gwion.y"
                                                                { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .is_ref = true, .pos = (yylsp[0]) }; }
#line 4559 "src/parser.c"
    break;

  case 328: /* _captures: capture  */
#line 1140 "src/gwion.y"
                   { (yyval.captures) = new_mp_vector(mpool(arg), Capture, 1); mp_vector_set((yyval.captures), Capture, 0, (yyvsp[0].capture)); }
#line 4565 "src/parser.c"
    break;

  case 329: /* _captures: _captures capture  */
#line 1141 "src/gwion.y"
                            { mp_vector_add(mpool(arg), &(yyvsp[-1].captures), Capture, (yyvsp[0].capture)); (yyval.captures) = (yyvsp[-1].captures); }
#line 4571 "src/parser.c"
    break;

  case 330: /* captures: ":" _captures ":"  */
#line 1142 "src/gwion.y"
                            { (yyval.captures) = (yyvsp[-1].captures); }
#line 4577 "src/parser.c"
    break;

  case 331: /* captures: %empty  */
#line 1142 "src/gwion.y"
                                            { (yyval.captures) = NULL; }
#line 4583 "src/parser.c"
    break;

  case 334: /* basic_exp: number  */
#line 1146 "src/gwion.y"
                         {
  (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc)); 
  (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4592 "src/parser.c"
    break;

  case 335: /* basic_exp: "<float>"  */
#line 1150 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4598 "src/parser.c"
    break;

  case 336: /* basic_exp: "<litteral string>"  */
#line 1151 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4604 "src/parser.c"
    break;

  case 337: /* basic_exp: "<litteral char>"  */
#line 1152 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4610 "src/parser.c"
    break;

  case 338: /* basic_exp: interp  */
#line 1153 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4616 "src/parser.c"
    break;

  case 339: /* prim_exp: "<identifier>"  */
#line 1156 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4622 "src/parser.c"
    break;

  case 341: /* prim_exp: "[" opt_exp array_lit_end  */
#line 1158 "src/gwion.y"
                              { 
    if(!(yyvsp[-1].exp)) {
      parser_error(&(yylsp[-2]), arg, "must provide values/expressions for array [...]", 0);
      YYERROR;
    }
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4635 "src/parser.c"
    break;

  case 342: /* prim_exp: "{" dict_list "}"  */
#line 1166 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4641 "src/parser.c"
    break;

  case 343: /* prim_exp: range  */
#line 1167 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4647 "src/parser.c"
    break;

  case 344: /* prim_exp: "<<<" exp ">>>"  */
#line 1168 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4653 "src/parser.c"
    break;

  case 345: /* prim_exp: "(" exp ")"  */
#line 1169 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4659 "src/parser.c"
    break;

  case 346: /* prim_exp: "`foo`"  */
#line 1170 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last = { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4670 "src/parser.c"
    break;

  case 347: /* prim_exp: lambda_arg captures code_list  */
#line 1176 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4676 "src/parser.c"
    break;

  case 348: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1177 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg->st, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4682 "src/parser.c"
    break;

  case 349: /* prim_exp: "(" op_op ")"  */
#line 1178 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4688 "src/parser.c"
    break;

  case 350: /* prim_exp: "perform" opt_id  */
#line 1179 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4694 "src/parser.c"
    break;

  case 351: /* prim_exp: "(" ")"  */
#line 1180 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4700 "src/parser.c"
    break;


#line 4704 "src/parser.c"

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

#line 1182 "src/gwion.y"

#undef scan
ANN static int parser_error(const loc_t *loc, Scanner *const scan, const char* diagnostic, const uint error_code) {
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
