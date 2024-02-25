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
ANN static Symbol sig_name(const Scanner*, const pos_t);
ANN static Symbol lambda_name(const Scanner*, const pos_t);
ANN void lex_spread(void *data);

#define YYLIST_INI(type, dest, src)          \
  dest = new_mp_vector(mpool(arg), type, 1); \
  mp_vector_set(dest, type, 0, src);

#define YYLIST_END(type, dest, src, new )          \
    mp_vector_add(mpool(arg), &(src), type, new);  \
    dest = src;


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
  YYSYMBOL_SECTION_LIST = 125,             /* SECTION_LIST  */
  YYSYMBOL_STMT_LIST3 = 126,               /* STMT_LIST3  */
  YYSYMBOL_STMT_LIST2 = 127,               /* STMT_LIST2  */
  YYSYMBOL_STMT_LIST1 = 128,               /* STMT_LIST1  */
  YYSYMBOL_YYACCEPT = 129,                 /* $accept  */
  YYSYMBOL_ast = 130,                      /* ast  */
  YYSYMBOL_section_list = 131,             /* section_list  */
  YYSYMBOL_section = 132,                  /* section  */
  YYSYMBOL_class_flag = 133,               /* class_flag  */
  YYSYMBOL_class_def = 134,                /* class_def  */
  YYSYMBOL_class_body = 135,               /* class_body  */
  YYSYMBOL_trait_def = 136,                /* trait_def  */
  YYSYMBOL_number = 137,                   /* number  */
  YYSYMBOL_decimal = 138,                  /* decimal  */
  YYSYMBOL_prim_def = 139,                 /* prim_def  */
  YYSYMBOL_class_ext = 140,                /* class_ext  */
  YYSYMBOL_traits = 141,                   /* traits  */
  YYSYMBOL_extend_def = 142,               /* extend_def  */
  YYSYMBOL_id_list = 143,                  /* id_list  */
  YYSYMBOL_specialized = 144,              /* specialized  */
  YYSYMBOL_specialized_list = 145,         /* specialized_list  */
  YYSYMBOL_stmt_list = 146,                /* stmt_list  */
  YYSYMBOL_fptr_base = 147,                /* fptr_base  */
  YYSYMBOL__func_effects = 148,            /* _func_effects  */
  YYSYMBOL_func_effects = 149,             /* func_effects  */
  YYSYMBOL_func_base = 150,                /* func_base  */
  YYSYMBOL_fptr_def = 151,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 152,             /* typedef_when  */
  YYSYMBOL_type_def_type = 153,            /* type_def_type  */
  YYSYMBOL_type_def = 154,                 /* type_def  */
  YYSYMBOL_type_decl_array = 155,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 156,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 157,          /* type_decl_empty  */
  YYSYMBOL_arg = 158,                      /* arg  */
  YYSYMBOL_arg_list = 159,                 /* arg_list  */
  YYSYMBOL_locale_arg = 160,               /* locale_arg  */
  YYSYMBOL_locale_list = 161,              /* locale_list  */
  YYSYMBOL_fptr_arg = 162,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 163,                /* fptr_list  */
  YYSYMBOL_code_stmt = 164,                /* code_stmt  */
  YYSYMBOL_code_list = 165,                /* code_list  */
  YYSYMBOL_stmt_pp = 166,                  /* stmt_pp  */
  YYSYMBOL_stmt = 167,                     /* stmt  */
  YYSYMBOL_spread_stmt = 168,              /* spread_stmt  */
  YYSYMBOL_169_1 = 169,                    /* $@1  */
  YYSYMBOL_retry_stmt = 170,               /* retry_stmt  */
  YYSYMBOL_handler = 171,                  /* handler  */
  YYSYMBOL_172_2 = 172,                    /* $@2  */
  YYSYMBOL_handler_list = 173,             /* handler_list  */
  YYSYMBOL_try_stmt = 174,                 /* try_stmt  */
  YYSYMBOL_opt_id = 175,                   /* opt_id  */
  YYSYMBOL_opt_comma = 176,                /* opt_comma  */
  YYSYMBOL_enum_value = 177,               /* enum_value  */
  YYSYMBOL_enum_list = 178,                /* enum_list  */
  YYSYMBOL_enum_def = 179,                 /* enum_def  */
  YYSYMBOL_when_exp = 180,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 181,          /* match_case_stmt  */
  YYSYMBOL_match_list = 182,               /* match_list  */
  YYSYMBOL_match_stmt = 183,               /* match_stmt  */
  YYSYMBOL_flow = 184,                     /* flow  */
  YYSYMBOL_loop_stmt = 185,                /* loop_stmt  */
  YYSYMBOL_defer_stmt = 186,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 187,           /* selection_stmt  */
  YYSYMBOL_breaks = 188,                   /* breaks  */
  YYSYMBOL_jump_stmt = 189,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 190,                 /* exp_stmt  */
  YYSYMBOL_exp = 191,                      /* exp  */
  YYSYMBOL_binary_exp = 192,               /* binary_exp  */
  YYSYMBOL_call_template = 193,            /* call_template  */
  YYSYMBOL_op = 194,                       /* op  */
  YYSYMBOL_array_exp = 195,                /* array_exp  */
  YYSYMBOL_array_empty = 196,              /* array_empty  */
  YYSYMBOL_dict_list = 197,                /* dict_list  */
  YYSYMBOL_range = 198,                    /* range  */
  YYSYMBOL_array = 199,                    /* array  */
  YYSYMBOL_decl_exp = 200,                 /* decl_exp  */
  YYSYMBOL_func_args = 201,                /* func_args  */
  YYSYMBOL_fptr_args = 202,                /* fptr_args  */
  YYSYMBOL_decl_template = 203,            /* decl_template  */
  YYSYMBOL_global = 204,                   /* global  */
  YYSYMBOL_opt_global = 205,               /* opt_global  */
  YYSYMBOL_storage_flag = 206,             /* storage_flag  */
  YYSYMBOL_access_flag = 207,              /* access_flag  */
  YYSYMBOL_flag = 208,                     /* flag  */
  YYSYMBOL_final = 209,                    /* final  */
  YYSYMBOL_modifier = 210,                 /* modifier  */
  YYSYMBOL_func_def_base = 211,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 212,            /* abstract_fdef  */
  YYSYMBOL_op_op = 213,                    /* op_op  */
  YYSYMBOL_op_base = 214,                  /* op_base  */
  YYSYMBOL_operator = 215,                 /* operator  */
  YYSYMBOL_op_def = 216,                   /* op_def  */
  YYSYMBOL_func_def = 217,                 /* func_def  */
  YYSYMBOL_type_decl_base = 218,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 219,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 220,         /* type_decl_noflag  */
  YYSYMBOL_option = 221,                   /* option  */
  YYSYMBOL_type_decl_opt = 222,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 223,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 224,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 225,          /* type_decl_flag2  */
  YYSYMBOL_variable = 226,                 /* variable  */
  YYSYMBOL_variable_list = 227,            /* variable_list  */
  YYSYMBOL_union_def = 228,                /* union_def  */
  YYSYMBOL_var_decl = 229,                 /* var_decl  */
  YYSYMBOL_arg_decl = 230,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 231,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 232,                    /* eq_op  */
  YYSYMBOL_rel_op = 233,                   /* rel_op  */
  YYSYMBOL_shift_op = 234,                 /* shift_op  */
  YYSYMBOL_add_op = 235,                   /* add_op  */
  YYSYMBOL_mul_op = 236,                   /* mul_op  */
  YYSYMBOL_opt_exp = 237,                  /* opt_exp  */
  YYSYMBOL_con_exp = 238,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 239,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 240,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 241,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 242,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 243,                  /* and_exp  */
  YYSYMBOL_eq_exp = 244,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 245,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 246,                /* shift_exp  */
  YYSYMBOL_add_exp = 247,                  /* add_exp  */
  YYSYMBOL_mul_exp = 248,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 249,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 250,                 /* cast_exp  */
  YYSYMBOL_unary_op = 251,                 /* unary_op  */
  YYSYMBOL_unary_exp = 252,                /* unary_exp  */
  YYSYMBOL_lambda_list = 253,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 254,               /* lambda_arg  */
  YYSYMBOL_tmplarg_exp = 255,              /* tmplarg_exp  */
  YYSYMBOL_tmplarg = 256,                  /* tmplarg  */
  YYSYMBOL_tmplarg_list = 257,             /* tmplarg_list  */
  YYSYMBOL_call_paren = 258,               /* call_paren  */
  YYSYMBOL_post_op = 259,                  /* post_op  */
  YYSYMBOL_dot_exp = 260,                  /* dot_exp  */
  YYSYMBOL_post_exp = 261,                 /* post_exp  */
  YYSYMBOL_interp_exp = 262,               /* interp_exp  */
  YYSYMBOL_interp = 263,                   /* interp  */
  YYSYMBOL_capture = 264,                  /* capture  */
  YYSYMBOL_capture_list = 265,             /* capture_list  */
  YYSYMBOL_captures = 266,                 /* captures  */
  YYSYMBOL_array_lit_ed = 267,             /* array_lit_ed  */
  YYSYMBOL_basic_exp = 268,                /* basic_exp  */
  YYSYMBOL_prim_exp = 269                  /* prim_exp  */
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
#define YYFINAL  229
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2854

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  350
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  628

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   383


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
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
     125,   126,   127,   128
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   204,   204,   205,   208,   209,   210,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   225,   227,   234,
     243,   243,   243,   245,   251,   258,   265,   269,   269,   270,
     270,   272,   277,   278,   280,   286,   293,   294,   296,   297,
     299,   302,   302,   303,   303,   305,   308,   314,   314,   315,
     315,   316,   325,   325,   327,   331,   336,   340,   345,   349,
     358,   370,   378,   378,   390,   392,   393,   396,   398,   402,
     403,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   435,   435,   444,   449,   449,   450,
     454,   470,   473,   473,   474,   474,   477,   478,   485,   486,
     489,   494,   494,   497,   506,   507,   509,   518,   527,   528,
     532,   539,   547,   555,   564,   573,   583,   590,   599,   611,
     618,   627,   627,   629,   630,   631,   632,   635,   636,   639,
     640,   641,   651,   652,   653,   654,   656,   656,   658,   658,
     658,   658,   658,   661,   662,   665,   669,   670,   671,   675,
     676,   679,   680,   681,   685,   685,   686,   687,   688,   694,
     694,   695,   695,   698,   699,   703,   707,   709,   710,   710,
     712,   712,   714,   715,   718,   719,   720,   721,   724,   724,
     726,   726,   729,   734,   741,   747,   755,   764,   764,   764,
     764,   764,   766,   776,   785,   795,   801,   801,   803,   805,
     807,   810,   810,   810,   811,   817,   824,   833,   834,   848,
     849,   853,   854,   857,   857,   857,   858,   859,   859,   862,
     863,   865,   865,   868,   872,   874,   875,   878,   887,   889,
     890,   890,   892,   892,   893,   893,   893,   893,   894,   894,
     895,   895,   896,   896,   896,   898,   898,   899,   900,   902,
     905,   905,   906,   906,   907,   907,   908,   908,   909,   909,
     910,   910,   911,   911,   912,   912,   913,   913,   914,   914,
     915,   915,   917,   917,   920,   920,   920,   921,   921,   924,
     925,   926,   927,   928,   931,   932,   933,   934,   935,   936,
     939,   942,   947,   947,   949,   950,   953,   957,   958,   961,
     962,   964,   964,   966,   975,   976,   978,   980,   983,   985,
     989,   990,   991,   993,   994,  1005,  1005,  1007,  1008,  1009,
    1009,  1010,  1010,  1013,  1017,  1018,  1019,  1022,  1023,  1024,
    1025,  1033,  1034,  1035,  1036,  1037,  1043,  1044,  1045,  1046,
    1047
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
  "=", "SECTION_LIST", "STMT_LIST3", "STMT_LIST2", "STMT_LIST1", "$accept",
  "ast", "section_list", "section", "class_flag", "class_def",
  "class_body", "trait_def", "number", "decimal", "prim_def", "class_ext",
  "traits", "extend_def", "id_list", "specialized", "specialized_list",
  "stmt_list", "fptr_base", "_func_effects", "func_effects", "func_base",
  "fptr_def", "typedef_when", "type_def_type", "type_def",
  "type_decl_array", "type_decl_exp", "type_decl_empty", "arg", "arg_list",
  "locale_arg", "locale_list", "fptr_arg", "fptr_list", "code_stmt",
  "code_list", "stmt_pp", "stmt", "spread_stmt", "$@1", "retry_stmt",
  "handler", "$@2", "handler_list", "try_stmt", "opt_id", "opt_comma",
  "enum_value", "enum_list", "enum_def", "when_exp", "match_case_stmt",
  "match_list", "match_stmt", "flow", "loop_stmt", "defer_stmt",
  "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "dict_list", "range",
  "array", "decl_exp", "func_args", "fptr_args", "decl_template", "global",
  "opt_global", "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "type_decl_base", "type_decl_tmpl",
  "type_decl_noflag", "option", "type_decl_opt", "type_decl",
  "type_decl_flag", "type_decl_flag2", "variable", "variable_list",
  "union_def", "var_decl", "arg_decl", "fptr_arg_decl", "eq_op", "rel_op",
  "shift_op", "add_op", "mul_op", "opt_exp", "con_exp", "log_or_exp",
  "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp", "eq_exp",
  "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp", "cast_exp",
  "unary_op", "unary_exp", "lambda_list", "lambda_arg", "tmplarg_exp",
  "tmplarg", "tmplarg_list", "call_paren", "post_op", "dot_exp",
  "post_exp", "interp_exp", "interp", "capture", "capture_list",
  "captures", "array_lit_ed", "basic_exp", "prim_exp", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-467)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-253)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     954,  -467,  1812,  1969,  1062,   216,  -467,    54,  -467,  1491,
    -467,    57,    66,    78,  2476,   216,  1675,  -467,  -467,  1491,
       3,   101,   216,   216,   154,   221,   154,   216,  -467,  -467,
     216,   216,  -467,   119,  1491,   149,     9,   153,  -467,  -467,
    -467,  -467,  -467,  1928,  -467,  -467,  -467,  -467,  -467,  -467,
    -467,  -467,  -467,  -467,  -467,   155,  -467,  -467,  -467,  -467,
     221,   221,  2653,  2653,  2476,  -467,  -467,  -467,   283,   604,
    -467,  -467,  -467,  -467,  -467,  -467,  1596,  -467,   216,  -467,
    -467,  -467,  -467,  -467,  -467,  -467,  -467,  -467,   286,  -467,
    -467,  -467,    50,  -467,  -467,   294,    40,  -467,  -467,  -467,
    -467,   277,  -467,  -467,  -467,   216,  -467,  -467,    10,   206,
     219,   215,   222,   130,   236,     6,   127,   212,   239,   253,
    2717,  -467,   244,  -467,  -467,   120,   285,  -467,  -467,  -467,
    2517,  -467,   347,   348,  -467,  -467,  -467,  -467,  -467,  -467,
    -467,  -467,  -467,  -467,  -467,  -467,  -467,   349,  -467,   350,
    -467,  -467,  -467,  -467,  2476,   267,   233,  -467,  1170,    37,
      84,  -467,  -467,  -467,  -467,   361,  -467,  -467,   223,   246,
    2476,   231,  2613,  1716,   -22,   357,   287,  -467,   365,   340,
    -467,  -467,  -467,   292,   278,   293,  -467,   297,   216,  -467,
      55,  -467,   288,   269,   333,   234,  -467,   378,    25,  -467,
     303,   382,   221,   306,   296,  -467,  -467,   308,   387,   312,
    2476,  1928,  -467,   329,  -467,  2517,  -467,  -467,   392,  1278,
    -467,   -13,  -467,  -467,   388,  -467,  -467,   388,   299,  -467,
    -467,  -467,  -467,   221,  2476,  -467,  -467,   398,  -467,  2476,
    2517,  2517,  2517,   262,   361,  2735,   109,   221,   221,  2476,
    2717,  2717,  2717,  2717,  2717,  2717,  -467,  -467,  2717,  2717,
    2717,  -467,  2717,  -467,  2717,  2717,   221,  -467,   393,  1969,
     322,   352,   392,  -467,  -467,  -467,  1928,    82,  -467,  -467,
     399,  2065,  -467,  -467,  -467,  -467,  2517,  2517,  -467,    74,
     181,  -467,   221,  -467,   221,   400,  2476,   404,    44,  1716,
     406,   328,   324,   396,   410,  -467,  -467,  -467,   340,   309,
     379,  -467,  -467,   309,   331,   221,   269,   339,  -467,    25,
    -467,  -467,  -467,  2106,  -467,   416,  -467,  -467,   366,   134,
     395,   346,   309,   339,  -467,   221,   425,  -467,   372,  -467,
    1928,    79,  2202,  -467,  -467,  1386,  -467,  -467,   -10,  1278,
    -467,  -467,  -467,   351,   426,  -467,  -467,  -467,  -467,  -467,
     361,   430,   185,   361,   309,   309,  -467,  -467,   309,    77,
     342,  -467,   206,   219,   215,   222,   130,   236,     6,   127,
     212,   239,   253,  -467,  1278,  -467,    26,  -467,  -467,  -467,
    -467,   226,  -467,  -467,  -467,  -467,  -467,   429,    79,   171,
    -467,   355,  -467,   290,  -467,  -467,   356,   359,  1491,   437,
    2517,  1491,  2243,   -13,  -467,  2517,  2476,  -467,    53,     2,
       3,  -467,    16,   401,  -467,   331,   339,   209,   309,  -467,
    -467,   320,  -467,  -467,   435,  2339,  -467,   443,  -467,   355,
    -467,   307,   364,   367,   445,   309,   439,   170,  -467,   449,
     450,   221,  -467,  -467,  -467,   451,  -467,  -467,  -467,   309,
    1491,   456,  -467,  -467,  -467,  -467,   455,   457,   460,  -467,
    -467,   383,  2717,    35,   454,   352,  -467,  -467,  2517,  -467,
     373,   221,  -467,   309,   309,   453,  -467,    48,  -467,  1491,
     463,   377,    51,   448,   459,  -467,  -467,   354,  -467,   470,
    1491,   221,   468,   331,  -467,    47,   221,   331,   209,   475,
    -467,   838,  -467,   382,  -467,   402,  -467,  -467,  -467,  -467,
     221,  -467,  -467,  -467,  -467,  -467,   247,  -467,   221,   388,
     476,  -467,   462,  -467,  -467,   221,   221,   221,  -467,  -467,
    -467,  2380,  -467,  -467,    79,  2517,  -467,   382,  -467,  1491,
    1491,  -467,  1491,  2517,  1491,  2476,   394,  1491,   407,     2,
     478,  -467,   409,  -467,  -467,    14,  -467,   479,  -467,   209,
    -467,  -467,   722,   395,  -467,  -467,   490,   411,  -467,   210,
     417,  -467,  -467,   388,  2517,   492,   494,   493,   495,  -467,
      79,   499,  -467,  -467,  -467,    59,  -467,  -467,  1491,  -467,
    -467,  -467,  -467,  -467,  -467,  -467,  -467,  -467,   498,  -467,
     504,  -467,  -467,  -467,  -467,    79,  -467,   221,  -467,  -467,
    -467,  1491,  1491,  -467,  -467,   502,  -467,  -467
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   138,     0,   256,     0,   187,   231,     0,   118,     0,
     119,     0,     0,     0,     0,   187,     0,   131,   132,     0,
     103,     0,   187,   187,   179,     0,   206,   187,    49,    50,
     187,   187,   230,     0,     0,   303,     0,     0,   229,    24,
     334,   335,   336,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,   337,   311,   284,   312,   285,
       0,     0,     0,     0,     0,   288,   287,   345,     0,     0,
       4,     9,    10,   333,    16,    11,     7,    14,   187,    15,
      86,    89,    38,    93,    92,    91,    12,    87,     0,    84,
      90,    85,     0,    88,    83,     0,   139,   342,   142,   211,
     212,     0,   213,     8,   232,   187,    13,   166,   257,   260,
     262,   264,   266,   268,   270,   272,   274,   276,   278,   280,
       0,   282,   330,   286,   319,   289,   339,   338,   314,   350,
       0,   250,   284,   285,   253,   254,   152,   148,   247,   245,
     246,   244,   149,   248,   249,   150,   151,     0,   197,     0,
     199,   198,   201,   200,     0,   255,     0,    67,     0,   139,
       0,   180,   177,   182,   183,     0,   181,   185,   184,   189,
       0,     0,     0,     0,     0,     0,     0,   134,     0,     0,
     102,   349,    96,     0,   189,     0,   178,     0,   187,   217,
       0,    55,     0,   147,   221,   225,   227,    53,     0,   207,
       0,     0,     0,     0,     0,   128,   300,   302,     0,     0,
     256,     0,   320,     0,   323,     0,   299,    54,   294,     0,
     337,     0,   295,   291,     0,   296,   292,     0,     0,     1,
       6,     5,    39,     0,     0,   136,    25,     0,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   256,
       0,     0,     0,     0,     0,     0,   242,   243,     0,     0,
       0,   251,     0,   252,     0,     0,     0,   290,     0,     0,
       0,     0,     0,   315,   316,   318,     0,     0,   344,   348,
       0,     0,   332,   331,   340,    68,     0,     0,   341,     0,
       0,   186,     0,   188,     0,     0,     0,   337,     0,     0,
     325,     0,     0,     0,     0,   133,    97,    99,   101,   176,
     189,   191,    17,   176,    29,     0,   147,     0,   219,     0,
     223,   224,   226,     0,   164,   165,    52,   228,     0,     0,
      43,     0,   176,     0,   301,    63,     0,   255,     0,   321,
       0,   140,     0,   293,    69,     0,   325,   327,     0,     0,
     297,   298,   343,     0,     0,   135,   141,   145,   143,   144,
       0,     0,     0,     0,   176,   176,   209,   208,   176,     0,
       0,   259,   261,   263,   265,   267,   269,   271,   273,   275,
     277,   279,   281,   283,     0,   346,     0,   313,   305,   306,
     307,     0,   304,   317,   324,   163,   162,     0,   159,     0,
     170,     0,    58,     0,   193,   192,     0,     0,     0,     0,
       0,     0,     0,     0,   326,     0,     0,   114,     0,     0,
     103,   100,     0,    28,   190,    29,     0,     0,   176,   220,
      32,     0,   222,   156,     0,     0,   158,     0,   172,   241,
      65,     0,     0,    44,     0,   176,     0,     0,    60,    62,
       0,    63,    82,   322,   310,     0,    70,   329,   328,   176,
       0,     0,   210,   215,   214,   205,     0,     0,     0,   238,
     167,     0,     0,   139,   153,     0,   146,   161,     0,   239,
      57,     0,   169,   176,   176,   129,   121,     0,   126,     0,
       0,     0,     0,   112,   117,   115,   106,     0,   108,   105,
       0,     0,     0,    29,    36,     0,     0,    29,     0,    30,
      22,     0,    23,     0,    31,     0,   157,    26,   240,    64,
       0,   171,    41,    42,    46,    40,     0,    94,     0,     0,
       0,   309,    47,   120,   216,     0,     0,     0,   168,   258,
     347,     0,   154,   308,   160,     0,    59,     0,    45,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,   104,
       0,    98,     0,   175,    34,     0,   173,     0,    27,     0,
      19,    21,     0,    43,    33,    66,   217,     0,   235,     0,
       0,    61,   195,     0,     0,     0,     0,     0,     0,   155,
      56,     0,   130,   127,   123,     0,   124,   111,     0,   116,
     107,   109,   110,    35,    37,   174,    18,    20,     0,   233,
       0,   237,   236,    95,   194,    48,    51,     0,   203,   204,
     196,     0,   113,   218,   234,     0,   125,   202
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -467,  -467,     0,   -63,   166,  -467,  -466,  -467,   -84,   182,
    -467,  -467,  -389,  -467,  -304,   -50,  -467,    -3,  -467,  -467,
     -57,  -467,  -467,  -467,  -467,  -467,   -52,    11,   -20,  -278,
    -467,  -467,    67,     1,  -467,  -467,   -59,  -467,    -9,  -467,
    -467,  -467,   211,  -467,  -467,  -467,   100,  -467,   -37,  -467,
    -467,  -467,   105,  -467,  -467,   358,  -467,  -467,  -467,  -467,
    -467,  -153,    29,    -1,  -166,  -467,  -190,  -467,  -467,   403,
    -467,    75,  -218,  -457,  -255,    81,  -467,   362,  -467,    18,
    -163,  -467,  -467,  -467,   280,   284,  -467,  -467,  -467,   336,
    -467,   213,  -467,   335,  -467,   -23,  -467,   -48,  -467,  -467,
      63,    96,  -467,  -467,  -102,  -101,  -103,  -100,  -158,  -235,
    -467,   291,   295,   298,   282,   300,   279,   301,   289,   276,
     275,   281,   -82,    12,  -467,  -467,  -467,    83,  -467,  -248,
     -97,  -467,  -467,  -189,  -467,  -205,  -467,   -28,  -467,  -253,
    -467
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,    69,    70,   183,    71,   512,    72,    73,   237,
      74,   507,   427,    75,   431,   504,   505,    76,   201,   443,
     444,   165,    77,   585,    78,    79,   191,   218,   401,   448,
     403,   449,   450,   440,   441,    80,   222,    81,    82,    83,
     580,    84,   307,   420,   308,    85,   181,   560,   498,   499,
      86,   556,   417,   418,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,   272,   148,   273,   325,   160,    97,
     326,    98,   290,   330,   423,   166,   187,   167,   168,   184,
     294,   312,    99,   100,   149,   246,   101,   102,   103,   193,
     194,   195,   322,   196,   197,   104,   105,   578,   579,   106,
     470,   480,   519,   258,   150,   151,   152,   153,   156,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   207,   122,   389,   390,   391,   343,
     123,   124,   125,   214,   126,   302,   348,   224,   284,   127,
     128
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     171,   158,   198,   159,   225,   192,   231,   324,   236,   217,
     179,   402,   259,   262,   260,   371,   347,   264,   392,   247,
     299,   311,   339,   169,   393,   205,   362,   318,   275,   447,
     188,   147,   155,   176,   474,   227,   508,   198,   198,   239,
     216,   239,   570,   175,   239,   178,   540,   162,   202,   203,
     411,   565,   338,   235,   550,   566,   573,   554,   425,   170,
     188,   300,   172,    39,   494,   621,   501,   232,   501,   502,
     346,   173,   213,   346,   223,   226,   416,   446,   198,   188,
     400,   245,   342,   174,   457,   496,   180,   394,   287,   301,
     591,   370,   208,   228,   268,   288,   233,   503,   301,   503,
     567,   301,   249,   606,   182,   186,   250,   199,   189,   466,
     467,    39,   366,   468,   564,   143,   144,   209,   569,   349,
     281,   471,   509,   248,   251,  -147,    32,   269,   240,   277,
     240,   286,   267,   240,    38,   436,   190,   240,   189,   188,
     438,   240,   461,   458,   240,   465,   412,   424,   365,   232,
     429,   453,   240,   241,   242,   241,   242,   189,   241,   242,
     469,   247,   241,   242,   270,   350,   241,   242,   351,   241,
     242,   298,   240,   513,   515,   240,   286,   241,   242,   198,
     527,   353,   331,   280,   404,   190,    32,   367,   463,   185,
     525,   349,   162,   200,    38,   349,   369,   241,   242,   295,
     241,   242,   204,   546,   532,    56,   315,    58,   491,   385,
     198,   131,   510,   261,   341,   188,   345,   189,   159,   511,
     198,   611,   392,   245,   198,   198,   188,   368,   547,   548,
     475,   405,   206,   256,   476,   271,   210,   539,   257,   337,
     213,   282,   283,   198,   236,   190,   383,     8,   198,    10,
     581,   388,   188,   161,   162,   163,   164,   586,   587,   588,
     161,   162,    32,   354,   240,   478,   198,   188,   356,   198,
      38,   198,   406,    32,   407,   259,   262,   260,   337,   215,
     264,    38,   188,   229,   542,   398,   399,   292,   293,   241,
     242,   234,   198,   576,   481,   428,   482,   238,   386,    32,
     263,   134,   135,   464,   189,   213,   198,    38,   252,   439,
     397,   520,   198,   521,    32,   357,   358,   359,   243,   310,
     293,   190,    38,   514,   515,   409,   320,   321,   254,    32,
     576,   253,   190,   255,   265,   497,   232,    38,   221,   625,
     138,   139,   140,   141,   266,   189,   345,    56,    57,    58,
      59,   276,   434,  -251,  -252,   278,   279,   188,   190,   360,
     189,   281,    56,    57,    58,    59,   289,   303,   305,   213,
     304,   455,   306,   190,   244,   309,   313,   319,    65,    66,
     314,   345,   317,   473,   271,   323,   328,   329,   190,   332,
     333,   334,   335,    65,    66,   336,   340,   342,   349,   485,
     352,   355,   488,   384,    32,   387,   408,   395,   410,   487,
     413,   414,    38,    39,   492,    40,    41,    42,   415,   416,
     419,   293,   430,   435,   422,   426,   442,    39,   198,   445,
     451,   452,   460,   462,   459,   189,   472,   477,   479,   483,
     486,   490,   484,   474,   506,   493,   517,   522,   524,   526,
     523,   533,   198,   528,   217,   388,   529,   531,   198,   534,
     535,   541,   536,   190,   434,   537,   469,   545,   549,   552,
     582,   553,   555,   558,   559,   497,   563,   544,   198,   515,
     551,   562,   583,   198,   557,   574,   584,   605,   598,   602,
     600,   561,   603,   609,   610,   616,   613,   198,   617,   618,
     439,   619,   620,   198,   623,   198,   577,   624,   627,   231,
     437,   572,   198,   198,   198,   604,   608,   568,   530,   421,
     500,   575,   601,   495,   614,   364,   316,   361,   274,   296,
     291,   612,   432,   327,   538,   518,   375,   377,   380,   381,
     592,   593,   372,   594,   590,   596,   382,   373,   599,   379,
       0,   374,   595,     0,     0,   376,   198,     0,   543,   577,
     378,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     434,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   615,   597,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   198,   622,     0,     0,     0,     0,
       0,     0,     0,     0,    -2,   230,     0,     1,     0,     2,
       0,     3,   626,   232,     4,     0,     5,     6,     7,     0,
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
      65,    66,     0,   230,    67,     1,     0,     2,     0,     3,
       0,     0,     4,   607,     5,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,    15,    16,
      17,    18,    19,    20,     0,    21,    22,    23,    24,     0,
       0,     0,     0,     0,     0,    25,     0,    26,    27,    28,
      29,    30,     0,    31,    32,    33,    34,    35,     0,    36,
      37,     0,    38,    39,     0,    40,    41,    42,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     1,    67,     2,     0,     3,     0,     0,     4,   571,
       5,     6,     7,     0,     8,     9,    10,    11,    12,    13,
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
       0,     3,     0,     0,     4,     0,     5,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
      15,    16,    17,    18,    19,    20,     0,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,    25,     0,    26,
      27,    28,    29,    30,     0,    31,    32,    33,    34,    35,
       0,    36,    37,     0,    38,    39,     0,    40,    41,    42,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
      65,    66,     4,   157,    67,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,    35,     0,     0,
      37,     0,    38,    39,     0,    40,    41,    42,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     3,    65,    66,
       4,   285,    67,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,     0,     0,    37,     0,
      38,    39,     0,    40,    41,    42,    43,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,    65,    66,     4,   344,
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
       0,     2,     0,     3,    65,    66,     4,   456,    67,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,     0,     0,    37,     0,    38,    39,     0,    40,
      41,    42,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     2,     0,     3,     0,
       0,     4,    65,    66,     6,     7,    67,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,    19,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,     0,     0,    37,
       0,    38,    39,     0,    40,    41,    42,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     0,     3,     0,     0,     4,    65,    66,     6,
       7,    67,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,     0,     0,    37,     0,    38,    39,     0,    40,
      41,    42,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,   177,    55,
       2,    56,     3,    58,     0,   130,     0,    60,     6,     0,
       0,     0,     0,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,     0,     1,
       0,     2,     0,     3,     0,     0,   130,    32,     0,     6,
      35,     0,     0,     0,     0,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,    32,     0,
       0,    35,    61,    62,    63,    64,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     2,   129,     3,
       0,     0,   130,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,    35,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,   131,    56,   132,    58,
     133,   134,   135,    60,     0,   136,     0,     0,     0,    61,
      62,    63,    64,     0,     0,   137,   138,   139,   140,   141,
     142,   143,   144,     0,     0,     0,     0,     0,    65,    66,
     145,   146,    67,     2,     0,     3,     0,     0,   130,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,     0,     0,   130,
      32,     0,     6,    35,     0,     0,     0,     0,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,   211,   212,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,    32,     0,     0,    35,    61,    62,    63,    64,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,   154,     0,     0,    61,    62,    63,    64,
       2,     0,     3,   396,     0,   130,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,   433,     0,   130,    32,     0,     6,
      35,     0,     0,     0,     0,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,    32,     0,
       0,    35,    61,    62,    63,    64,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     2,   454,     3,
       0,     0,   130,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,   489,
       3,     0,     0,   130,    32,     0,     6,    35,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,    32,     0,     0,    35,    61,
      62,    63,    64,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     2,     0,     3,   516,     0,   130,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,   589,     0,
     130,    32,     0,     6,    35,     0,     0,     0,     0,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,    32,     0,     0,    35,    61,    62,    63,    64,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     2,     0,     3,     0,     0,   130,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
      67,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     0,     0,   130,    32,     0,
       6,    35,     0,     0,     0,     0,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,    32,
       0,     0,    35,    61,    62,    63,    64,    38,    39,     0,
      40,    41,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
     220,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     2,     0,
       3,     0,     0,   130,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,    67,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,   219,     0,    32,     0,     0,    35,     0,
       0,     0,     0,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   297,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,    35,     0,
      61,    62,    63,    64,    39,     0,    40,    41,    42,    43,
       0,     0,     2,     0,     3,     0,     0,   130,     0,    65,
      66,     0,     0,    67,     0,     0,   220,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,   221,    20,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,    35,    67,     0,     0,     0,     0,    39,     0,
      40,    41,    42,    43,     0,     0,     0,     0,     0,     0,
       0,   363,     0,     0,     0,     0,     0,     0,     0,     0,
     220,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     0,   131,
      56,   261,    58,   263,   134,   135,     0,     0,   136,     0,
       0,     0,     0,    65,    66,     0,     0,    67,   137,   138,
     139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
       0,     0,     0,   145,   146
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,     4,    63,    25,    69,   197,    92,    61,
      19,   289,   114,   116,   115,   250,   221,   117,   271,   101,
     173,   184,   211,     5,   272,    34,   244,   193,   125,   333,
       5,     2,     3,    15,     8,    63,   425,    60,    61,     4,
      60,     4,   508,    14,     4,    16,    11,    38,    30,    31,
       6,     4,   210,     3,     6,     8,   513,     6,   313,     5,
       5,    83,     5,    61,    11,     6,    52,    76,    52,    53,
      83,     5,    43,    83,    62,    63,    23,   332,   101,     5,
       6,   101,     5,     5,    94,    83,    83,   276,     4,   111,
     547,   249,    83,    64,   122,    11,    78,    83,   111,    83,
      53,   111,    92,   569,     3,    24,    96,    26,    83,   364,
     365,    61,     3,   368,   503,   109,   110,    36,   507,    10,
      94,   369,   426,   105,   114,     5,    52,     7,    93,   130,
      93,    94,   120,    93,    60,   325,   111,    93,    83,     5,
       6,    93,   360,   348,    93,   363,   299,   310,   245,   158,
     316,   340,    93,   118,   119,   118,   119,    83,   118,   119,
      83,   243,   118,   119,    44,   224,   118,   119,   227,   118,
     119,   172,    93,   428,     4,    93,    94,   118,   119,   202,
      10,   233,   202,   154,     3,   111,    52,   246,     3,    23,
     445,    10,    38,    27,    60,    10,   248,   118,   119,   170,
     118,   119,    83,   481,   459,    85,   188,    87,   413,   268,
     233,    84,     3,    86,   215,     5,   219,    83,   219,    10,
     243,    11,   475,   243,   247,   248,     5,   247,   483,   484,
       4,   290,    83,   103,     8,   115,    83,   472,   108,   210,
     211,     8,     9,   266,   328,   111,   266,    16,   271,    18,
     528,   271,     5,    37,    38,    39,    40,   535,   536,   537,
      37,    38,    52,   234,    93,    94,   289,     5,   239,   292,
      60,   294,   292,    52,   294,   377,   379,   378,   249,   124,
     380,    60,     5,     0,   474,   286,   287,    41,    42,   118,
     119,     5,   315,    83,     4,   315,     6,     3,   269,    52,
      88,    89,    90,   362,    83,   276,   329,    60,   102,   329,
     281,     4,   335,     6,    52,   240,   241,   242,    41,    41,
      42,   111,    60,     3,     4,   296,    92,    93,   113,    52,
      83,   112,   111,   111,    95,   419,   345,    60,    94,   617,
     104,   105,   106,   107,    91,    83,   349,    85,    86,    87,
      88,    66,   323,     6,     6,     6,     6,     5,   111,    97,
      83,    94,    85,    86,    87,    88,     5,    10,     3,   340,
      83,   342,    32,   111,    97,    83,    83,    44,   116,   117,
      83,   384,    94,   384,   115,     7,    83,     5,   111,    83,
      94,    83,     5,   116,   117,    83,    67,     5,    10,   408,
     101,     3,   411,    10,    52,    83,     6,     8,     4,   410,
       4,    83,    60,    61,   415,    63,    64,    65,    94,    23,
      10,    42,    83,     7,   115,    94,    31,    61,   451,    83,
       5,    59,     6,     3,    83,    83,    94,     8,    83,    83,
       3,   412,    83,     8,    43,   416,     3,    83,     3,    10,
      83,   460,   475,     4,   506,   475,     6,     6,   481,     3,
       5,     7,     5,   111,   435,     5,    83,    94,    15,     6,
     529,    94,    24,   119,     4,   559,     8,   478,   501,     4,
     489,   501,     6,   506,    25,    83,    24,     8,    94,    11,
      83,   500,    83,     3,    83,     3,    79,   520,     4,     6,
     520,     6,     3,   526,     6,   528,   526,     3,     6,   572,
     328,   511,   535,   536,   537,   565,   573,   506,   451,   308,
     420,   520,   559,   418,   583,   245,   190,   243,   125,   171,
     168,   579,   319,   198,   471,   439,   254,   258,   262,   264,
     549,   550,   251,   552,   545,   554,   265,   252,   557,   260,
      -1,   253,   553,    -1,    -1,   255,   579,    -1,   475,   579,
     259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     541,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   584,   555,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   617,   598,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,    -1,     3,    -1,     5,
      -1,     7,   621,   622,    10,    -1,    12,    13,    14,    -1,
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
     116,   117,    -1,     1,   120,     3,    -1,     5,    -1,     7,
      -1,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    -1,    57,
      58,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,     3,   120,     5,    -1,     7,    -1,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
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
      -1,     7,    -1,    -1,    10,    -1,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    57,    58,    -1,    60,    61,    -1,    63,    64,    65,
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
      -1,    -1,    -1,     3,    -1,     5,    -1,     7,   116,   117,
      10,    11,   120,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,
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
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,
      -1,    10,   116,   117,    13,    14,   120,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    60,    61,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,    -1,    -1,    10,   116,   117,    13,
      14,   120,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    -1,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,     3,    83,
       5,    85,     7,    87,    -1,    10,    -1,    91,    13,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,     3,
      -1,     5,    -1,     7,    -1,    -1,    10,    52,    -1,    13,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    52,    -1,
      -1,    55,    97,    98,    99,   100,    60,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    -1,    -1,    -1,    97,
      98,    99,   100,    -1,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,    -1,    -1,    -1,    -1,   116,   117,
     118,   119,   120,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    10,
      52,    -1,    13,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    52,    -1,    -1,    55,    97,    98,    99,   100,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    94,    -1,    -1,    97,    98,    99,   100,
       5,    -1,     7,     8,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,     8,    -1,    10,    52,    -1,    13,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    52,    -1,
      -1,    55,    97,    98,    99,   100,    60,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    10,    52,    -1,    13,    55,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    52,    -1,    -1,    55,    97,
      98,    99,   100,    60,    61,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,     5,    -1,     7,     8,    -1,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      10,    52,    -1,    13,    55,    -1,    -1,    -1,    -1,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    52,    -1,    -1,    55,    97,    98,    99,   100,
      60,    61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    10,    52,    -1,
      13,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    52,
      -1,    -1,    55,    97,    98,    99,   100,    60,    61,    -1,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    10,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    61,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    -1,    55,    -1,
      97,    98,    99,   100,    61,    -1,    63,    64,    65,    66,
      -1,    -1,     5,    -1,     7,    -1,    -1,    10,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    94,    31,    -1,
      97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    55,   120,    -1,    -1,    -1,    -1,    61,    -1,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,    -1,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    93,    -1,
      -1,    -1,    -1,   116,   117,    -1,    -1,   120,   103,   104,
     105,   106,   107,   108,   109,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,   119
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
      91,    97,    98,    99,   100,   116,   117,   120,   130,   131,
     132,   134,   136,   137,   139,   142,   146,   151,   153,   154,
     164,   166,   167,   168,   170,   174,   179,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   198,   200,   211,
     212,   215,   216,   217,   224,   225,   228,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   254,   259,   260,   261,   263,   268,   269,     6,
      10,    84,    86,    88,    89,    90,    93,   103,   104,   105,
     106,   107,   108,   109,   110,   118,   119,   191,   194,   213,
     233,   234,   235,   236,    94,   191,   237,    11,   146,   192,
     197,    37,    38,    39,    40,   150,   204,   206,   207,   208,
       5,   167,     5,     5,     5,   191,   208,     3,   191,   167,
      83,   175,     3,   133,   208,   133,   204,   205,     5,    83,
     111,   155,   157,   218,   219,   220,   222,   223,   224,   204,
     133,   147,   208,   208,    83,   167,    83,   253,    83,   204,
      83,    80,    81,   191,   262,   124,   157,   155,   156,    10,
      83,    94,   165,   252,   266,   165,   252,   266,   191,     0,
       1,   132,   167,   208,     5,     3,   137,   138,     3,     4,
      93,   118,   119,    41,    97,   157,   214,   251,   208,    92,
      96,   114,   102,   112,   113,   111,   103,   108,   232,   233,
     234,    86,   235,    88,   236,    95,    91,   252,   266,     7,
      44,   115,   193,   195,   198,   259,    66,   192,     6,     6,
     191,    94,     8,     9,   267,    11,    94,     4,    11,     5,
     201,   206,    41,    42,   209,   191,   184,    83,   192,   190,
      83,   111,   264,    10,    83,     3,    32,   171,   173,    83,
      41,   209,   210,    83,    83,   208,   218,    94,   193,    44,
      92,    93,   221,     7,   195,   196,   199,   222,    83,     5,
     202,   157,    83,    94,    83,     5,    83,   191,   237,   262,
      67,   192,     5,   258,    11,   146,    83,   264,   265,    10,
     165,   165,   101,   155,   191,     3,   191,   200,   200,   200,
      97,   214,   201,    56,   213,   259,     3,   165,   157,   155,
     237,   238,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   157,    10,   165,   191,    83,   157,   255,
     256,   257,   268,   258,   262,     8,     8,   191,   192,   192,
       6,   157,   158,   159,     3,   165,   157,   157,     6,   191,
       4,     6,   190,     4,    83,    94,    23,   181,   182,    10,
     172,   171,   115,   203,   209,   203,    94,   141,   157,   193,
      83,   143,   220,     8,   191,     7,   195,   138,     6,   157,
     162,   163,    31,   148,   149,    83,   203,   143,   158,   160,
     161,     5,    59,   262,     6,   191,    11,    94,   264,    83,
       6,   201,     3,     3,   165,   201,   203,   203,   203,    83,
     229,   258,    94,   192,     8,     4,     8,     8,    94,    83,
     230,     4,     6,    83,    83,   167,     3,   192,   167,     6,
     191,   264,   192,   191,    11,   181,    83,   137,   177,   178,
     175,    52,    53,    83,   144,   145,    43,   140,   141,   143,
       3,    10,   135,   203,     3,     4,     8,     3,   230,   231,
       4,     6,    83,    83,     3,   203,    10,    10,     4,     6,
     161,     6,   203,   167,     3,     5,     5,     5,   229,   238,
      11,     7,   195,   256,   192,    94,   158,   203,   203,    15,
       6,   167,     6,    94,     6,    24,   180,    25,   119,     4,
     176,   167,   157,     8,   141,     4,     8,    53,   156,   141,
     135,    11,   131,   202,    83,   162,    83,   157,   226,   227,
     169,   158,   165,     6,    24,   152,   158,   158,   158,     8,
     192,   202,   167,   167,   167,   192,   167,   191,    94,   167,
      83,   177,    11,    83,   144,     8,   135,    11,   149,     3,
      83,    11,   226,    79,   165,   192,     3,     4,     6,     6,
       3,     6,   146,     6,     3,   158,   167,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   129,   130,   130,   131,   131,   131,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   133,   134,   134,
     135,   135,   135,   136,   137,   138,   139,   140,   140,   141,
     141,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     147,   148,   148,   149,   149,   150,   151,   152,   152,   153,
     153,   154,   155,   155,   156,   157,   158,   158,   159,   159,
     160,   160,   161,   161,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   169,   168,   170,   172,   171,   173,
     173,   174,   175,   175,   176,   176,   177,   177,   178,   178,
     179,   180,   180,   181,   182,   182,   183,   183,   184,   184,
     185,   185,   185,   185,   185,   185,   185,   185,   186,   187,
     187,   188,   188,   189,   189,   189,   189,   190,   190,   191,
     191,   191,   192,   192,   192,   192,   193,   193,   194,   194,
     194,   194,   194,   195,   195,   195,   196,   196,   196,   197,
     197,   198,   198,   198,   199,   199,   200,   200,   200,   201,
     201,   202,   202,   203,   203,   203,   203,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   208,   208,   209,   209,
     210,   210,   211,   211,   211,   211,   212,   213,   213,   213,
     213,   213,   214,   214,   214,   214,   215,   215,   216,   216,
     216,   217,   217,   217,   217,   217,   217,   218,   218,   219,
     219,   220,   220,   221,   221,   221,   222,   223,   223,   224,
     224,   225,   225,   226,   226,   227,   227,   228,   229,   230,
     231,   231,   232,   232,   233,   233,   233,   233,   234,   234,
     235,   235,   236,   236,   236,   237,   237,   238,   238,   238,
     239,   239,   240,   240,   241,   241,   242,   242,   243,   243,
     244,   244,   245,   245,   246,   246,   247,   247,   248,   248,
     249,   249,   250,   250,   251,   251,   251,   251,   251,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     253,   253,   254,   254,   255,   256,   256,   257,   257,   258,
     258,   259,   259,   260,   261,   261,   261,   261,   261,   261,
     262,   262,   262,   263,   263,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   268,   268,   268,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     7,     6,
       3,     2,     1,     5,     1,     1,     5,     2,     0,     0,
       2,     5,     1,     3,     2,     3,     1,     3,     1,     2,
       4,     2,     2,     0,     1,     5,     5,     0,     2,     1,
       1,     7,     2,     1,     1,     1,     4,     2,     1,     3,
       1,     3,     1,     0,     2,     1,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     2,     0,     4,     1,
       2,     3,     1,     0,     1,     0,     1,     3,     1,     3,
       7,     2,     0,     5,     1,     2,     7,     5,     1,     1,
       5,     5,     6,     7,     7,     9,     5,     7,     2,     5,
       7,     1,     1,     3,     2,     3,     2,     2,     1,     1,
       3,     3,     1,     3,     3,     3,     3,     0,     1,     1,
       1,     1,     1,     3,     4,     5,     2,     3,     2,     3,
       5,     5,     4,     4,     1,     1,     1,     4,     5,     3,
       2,     3,     2,     3,     4,     3,     0,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     0,
       2,     1,     4,     4,     7,     6,     8,     1,     1,     1,
       1,     1,     8,     6,     6,     3,     1,     2,     3,     3,
       4,     1,     1,     1,     4,     4,     5,     1,     7,     2,
       3,     1,     3,     1,     1,     0,     2,     1,     2,     1,
       1,     1,     1,     2,     3,     1,     2,     7,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     5,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     3,     2,     2,     2,     3,     3,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     1,     3,     1,     2,     2,     3,     2,     1,
       1,     2,     3,     2,     3,     1,     2,     1,     2,     3,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     5,     3,     2,
       2
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
  case 2: /* ast: section_list  */
#line 204 "src/gwion.y"
                  { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2637 "src/parser.c"
    break;

  case 3: /* ast: %empty  */
#line 205 "src/gwion.y"
           { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2643 "src/parser.c"
    break;

  case 4: /* section_list: section  */
#line 208 "src/gwion.y"
            { YYLIST_INI(Section, (yyval.ast), (yyvsp[0].section)); }
#line 2649 "src/parser.c"
    break;

  case 5: /* section_list: section_list section  */
#line 209 "src/gwion.y"
                                            { YYLIST_END(Section, (yyval.ast), (yyvsp[-1].ast), (yyvsp[0].section)); }
#line 2655 "src/parser.c"
    break;

  case 7: /* section: stmt_list  */
#line 213 "src/gwion.y"
                                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list), (yylsp[0])); }
#line 2661 "src/parser.c"
    break;

  case 8: /* section: func_def  */
#line 214 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def), (yylsp[0]));  }
#line 2667 "src/parser.c"
    break;

  case 9: /* section: class_def  */
#line 215 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def), (yylsp[0])); }
#line 2673 "src/parser.c"
    break;

  case 10: /* section: trait_def  */
#line 216 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def), (yylsp[0])); }
#line 2679 "src/parser.c"
    break;

  case 11: /* section: extend_def  */
#line 217 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def), (yylsp[0])); }
#line 2685 "src/parser.c"
    break;

  case 12: /* section: enum_def  */
#line 218 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def), (yylsp[0])); }
#line 2691 "src/parser.c"
    break;

  case 13: /* section: union_def  */
#line 219 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def), (yylsp[0])); }
#line 2697 "src/parser.c"
    break;

  case 14: /* section: fptr_def  */
#line 220 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def), (yylsp[0])); }
#line 2703 "src/parser.c"
    break;

  case 15: /* section: type_def  */
#line 221 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def), (yylsp[0])); }
#line 2709 "src/parser.c"
    break;

  case 16: /* section: prim_def  */
#line 222 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def), (yylsp[0])); }
#line 2715 "src/parser.c"
    break;

  case 17: /* class_flag: flag modifier  */
#line 225 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2721 "src/parser.c"
    break;

  case 18: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits class_body  */
#line 228 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-5].flag), MK_TAG((yyvsp[-4].sym), (yylsp[-4])), (yyvsp[-2].type_decl), (yyvsp[0].ast));
      if((yyvsp[-3].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2732 "src/parser.c"
    break;

  case 19: /* class_def: "struct" class_flag "<identifier>" decl_template traits class_body  */
#line 235 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-4].flag), MK_TAG((yyvsp[-3].sym), (yylsp[-3])), NULL, (yyvsp[0].ast));
      if((yyvsp[-2].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2744 "src/parser.c"
    break;

  case 20: /* class_body: "{" section_list "}"  */
#line 243 "src/gwion.y"
                                   { (yyval.ast) = (yyvsp[-1].ast); }
#line 2750 "src/parser.c"
    break;

  case 21: /* class_body: "{" "}"  */
#line 243 "src/gwion.y"
                                                          { (yyval.ast) = NULL; }
#line 2756 "src/parser.c"
    break;

  case 22: /* class_body: ";"  */
#line 243 "src/gwion.y"
                                                                               { (yyval.ast) = NULL; }
#line 2762 "src/parser.c"
    break;

  case 23: /* trait_def: "trait" opt_global "<identifier>" traits class_body  */
#line 246 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2771 "src/parser.c"
    break;

  case 24: /* number: INTEGER  */
#line 251 "src/gwion.y"
                {
  if((yyvsp[0].yyint).num < 0 || (yyvsp[0].yyint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type);
}
#line 2782 "src/parser.c"
    break;

  case 25: /* decimal: number  */
#line 258 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2793 "src/parser.c"
    break;

  case 26: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 266 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2801 "src/parser.c"
    break;

  case 27: /* class_ext: "extends" type_decl_exp  */
#line 269 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2807 "src/parser.c"
    break;

  case 28: /* class_ext: %empty  */
#line 269 "src/gwion.y"
                                                          { (yyval.type_decl) = NULL; }
#line 2813 "src/parser.c"
    break;

  case 29: /* traits: %empty  */
#line 270 "src/gwion.y"
               { (yyval.id_list) = NULL; }
#line 2819 "src/parser.c"
    break;

  case 30: /* traits: ":" id_list  */
#line 270 "src/gwion.y"
                                            { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2825 "src/parser.c"
    break;

  case 31: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 272 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2833 "src/parser.c"
    break;

  case 32: /* id_list: "<identifier>"  */
#line 277 "src/gwion.y"
                 { YYLIST_INI(Symbol, (yyval.id_list), (yyvsp[0].sym)); }
#line 2839 "src/parser.c"
    break;

  case 33: /* id_list: id_list "," "<identifier>"  */
#line 278 "src/gwion.y"
                 { YYLIST_END(Symbol, (yyval.id_list), (yyvsp[-2].id_list), (yyvsp[0].sym)); }
#line 2845 "src/parser.c"
    break;

  case 34: /* specialized: "<identifier>" traits  */
#line 280 "src/gwion.y"
                       {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1])),
        .traits = (yyvsp[0].id_list),
      };
  }
#line 2856 "src/parser.c"
    break;

  case 35: /* specialized: "const" type_decl_empty "<identifier>"  */
#line 286 "src/gwion.y"
                               {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])),
        .td = (yyvsp[-1].type_decl),
      };
  }
#line 2867 "src/parser.c"
    break;

  case 36: /* specialized_list: specialized  */
#line 293 "src/gwion.y"
                              { YYLIST_INI(Specialized, (yyval.specialized_list), (yyvsp[0].specialized)); }
#line 2873 "src/parser.c"
    break;

  case 37: /* specialized_list: specialized_list "," specialized  */
#line 294 "src/gwion.y"
                                     { YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), (yyvsp[0].specialized)); }
#line 2879 "src/parser.c"
    break;

  case 38: /* stmt_list: stmt  */
#line 296 "src/gwion.y"
                                   { YYLIST_INI(Stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 2885 "src/parser.c"
    break;

  case 39: /* stmt_list: stmt_list stmt  */
#line 297 "src/gwion.y"
                                   { YYLIST_END(Stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 2891 "src/parser.c"
    break;

  case 40: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 299 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2898 "src/parser.c"
    break;

  case 41: /* _func_effects: "perform" "<identifier>"  */
#line 302 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2904 "src/parser.c"
    break;

  case 42: /* _func_effects: _func_effects "<identifier>"  */
#line 302 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2910 "src/parser.c"
    break;

  case 43: /* func_effects: %empty  */
#line 303 "src/gwion.y"
                     { (yyval.vector).ptr = NULL; }
#line 2916 "src/parser.c"
    break;

  case 44: /* func_effects: _func_effects  */
#line 303 "src/gwion.y"
                                                        { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2922 "src/parser.c"
    break;

  case 45: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 305 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2929 "src/parser.c"
    break;

  case 46: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 308 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2939 "src/parser.c"
    break;

  case 47: /* typedef_when: %empty  */
#line 314 "src/gwion.y"
                     { (yyval.exp) = NULL;}
#line 2945 "src/parser.c"
    break;

  case 48: /* typedef_when: "when" binary_exp  */
#line 314 "src/gwion.y"
                                                       { (yyval.exp) = (yyvsp[0].exp); }
#line 2951 "src/parser.c"
    break;

  case 49: /* type_def_type: "typedef"  */
#line 315 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2957 "src/parser.c"
    break;

  case 50: /* type_def_type: "distinct"  */
#line 315 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2963 "src/parser.c"
    break;

  case 51: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 316 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2976 "src/parser.c"
    break;

  case 52: /* type_decl_array: type_decl array  */
#line 325 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2982 "src/parser.c"
    break;

  case 54: /* type_decl_exp: type_decl_array  */
#line 327 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2990 "src/parser.c"
    break;

  case 55: /* type_decl_empty: type_decl_array  */
#line 331 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2998 "src/parser.c"
    break;

  case 56: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 336 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .var = MK_VAR((yyvsp[-3].type_decl), (yyvsp[-2].var_decl)), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 3007 "src/parser.c"
    break;

  case 57: /* arg: type_decl_empty arg_decl  */
#line 340 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) };
    (yyval.default_args).flag = fbflag_none;
  }
#line 3016 "src/parser.c"
    break;

  case 58: /* arg_list: arg  */
#line 345 "src/gwion.y"
         {
       YYLIST_INI(Arg, (yyval.default_args).args, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 3025 "src/parser.c"
    break;

  case 59: /* arg_list: arg_list "," arg  */
#line 349 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3037 "src/parser.c"
    break;

  case 60: /* locale_arg: arg  */
#line 358 "src/gwion.y"
        {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 2);
       Arg self = {
         .var = MK_VAR(
            new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
            (struct Var_Decl_) { .tag = MK_TAG(insert_symbol("self"), (yyloc))}),
         .exp = NULL
       };
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
       mp_vector_set((yyval.default_args).args, Arg, 1, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 3054 "src/parser.c"
    break;

  case 61: /* locale_arg: locale_arg "," arg  */
#line 370 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3066 "src/parser.c"
    break;

  case 63: /* locale_list: %empty  */
#line 379 "src/gwion.y"
    {
       Arg self = {
          MK_VAR(
            new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
            (struct Var_Decl_) { .tag = MK_TAG(insert_symbol("self"), (yyloc))}
          ),
         .exp = NULL
       };
       YYLIST_INI(Arg, (yyval.default_args).args, self);
    }
#line 3081 "src/parser.c"
    break;

  case 64: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 390 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) }; }
#line 3087 "src/parser.c"
    break;

  case 65: /* fptr_list: fptr_arg  */
#line 392 "src/gwion.y"
                         { YYLIST_INI(Arg, (yyval.arg_list), (yyvsp[0].arg)); }
#line 3093 "src/parser.c"
    break;

  case 66: /* fptr_list: fptr_list "," fptr_arg  */
#line 393 "src/gwion.y"
                         { YYLIST_END(Arg, (yyval.arg_list), (yyvsp[-2].arg_list), (yyvsp[0].arg)); }
#line 3099 "src/parser.c"
    break;

  case 67: /* code_stmt: "{" "}"  */
#line 396 "src/gwion.y"
            {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc)); }
#line 3106 "src/parser.c"
    break;

  case 68: /* code_stmt: "{" stmt_list "}"  */
#line 398 "src/gwion.y"
                      {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc), .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) });}
#line 3113 "src/parser.c"
    break;

  case 69: /* code_list: "{" "}"  */
#line 402 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), Stmt, 0); }
#line 3119 "src/parser.c"
    break;

  case 70: /* code_list: "{" stmt_list "}"  */
#line 403 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3125 "src/parser.c"
    break;

  case 71: /* stmt_pp: "<comment>"  */
#line 406 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyloc), .data = (yyvsp[0].sval)); }
#line 3131 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#include"  */
#line 407 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyloc), .data = (yyvsp[0].sval)); }
#line 3137 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#define"  */
#line 408 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3143 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#pragma"  */
#line 409 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3149 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#undef"  */
#line 410 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3155 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#ifdef"  */
#line 411 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3161 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#ifndef"  */
#line 412 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3167 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#else"  */
#line 413 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyloc), .data = (yyvsp[0].sval)); }
#line 3173 "src/parser.c"
    break;

  case 79: /* stmt_pp: "#if"  */
#line 414 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3179 "src/parser.c"
    break;

  case 80: /* stmt_pp: "\n"  */
#line 415 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl, (yyloc), .data = (yyvsp[0].sval)); }
#line 3185 "src/parser.c"
    break;

  case 81: /* stmt_pp: "import"  */
#line 416 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyloc), .data = (yyvsp[0].sval)); }
#line 3191 "src/parser.c"
    break;

  case 82: /* stmt_pp: LOCALE_INI "<identifier>" opt_exp LOCALE_END  */
#line 418 "src/gwion.y"
    { (yyval.stmt) = MK_STMT_PP(locale, (yyloc), .xid = (yyvsp[-2].sym), .exp = (yyvsp[-1].exp)); }
#line 3197 "src/parser.c"
    break;

  case 94: /* $@1: %empty  */
#line 435 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3203 "src/parser.c"
    break;

  case 95: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 435 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .tag = MK_TAG((yyvsp[-5].sym), (yylsp[-2])),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
  };
  (yyval.stmt) = MK_STMT(ae_stmt_spread, (yylsp[-5]), .stmt_spread = spread);
}
#line 3216 "src/parser.c"
    break;

  case 96: /* retry_stmt: "retry" ";"  */
#line 444 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = MK_STMT(ae_stmt_retry, (yylsp[-1]));}
#line 3225 "src/parser.c"
    break;

  case 97: /* $@2: %empty  */
#line 449 "src/gwion.y"
                  { arg->handling = true; }
#line 3231 "src/parser.c"
    break;

  case 98: /* handler: "handle" $@2 opt_id stmt  */
#line 449 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .tag = MK_TAG((yyvsp[-1].sym), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }; arg->handling = false; }
#line 3237 "src/parser.c"
    break;

  case 99: /* handler_list: handler  */
#line 450 "src/gwion.y"
                      {
    YYLIST_INI(Handler, (yyval.handler_list).handlers, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).tag.sym;
  }
#line 3246 "src/parser.c"
    break;

  case 100: /* handler_list: handler_list handler  */
#line 454 "src/gwion.y"
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
#line 3267 "src/parser.c"
    break;

  case 101: /* try_stmt: "try" stmt handler_list  */
#line 470 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_try, (yylsp[-2]),
   .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers});}
#line 3274 "src/parser.c"
    break;

  case 103: /* opt_id: %empty  */
#line 473 "src/gwion.y"
                    { (yyval.sym) = NULL; }
#line 3280 "src/parser.c"
    break;

  case 105: /* opt_comma: %empty  */
#line 474 "src/gwion.y"
                        {}
#line 3286 "src/parser.c"
    break;

  case 106: /* enum_value: "<identifier>"  */
#line 477 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }; }
#line 3292 "src/parser.c"
    break;

  case 107: /* enum_value: number "<dynamic_operator>" "<identifier>"  */
#line 478 "src/gwion.y"
                                           { 
            if (strcmp(s_name((yyvsp[-1].sym)), ":=>")) {
              parser_error(&(yylsp[-2]), arg, "enum value must be set with :=>", 0x0240); YYERROR;
          }
            (yyval.enum_value) = (EnumValue) {.tag = MK_TAG((yyvsp[0].sym), (yylsp[0])), .gwint = (yyvsp[-2].gwint), .set = true };
          }
#line 3303 "src/parser.c"
    break;

  case 108: /* enum_list: enum_value  */
#line 485 "src/gwion.y"
                            { YYLIST_INI(EnumValue, (yyval.enum_list), (yyvsp[0].enum_value)); }
#line 3309 "src/parser.c"
    break;

  case 109: /* enum_list: enum_list "," enum_value  */
#line 486 "src/gwion.y"
                            { YYLIST_END(EnumValue, (yyval.enum_list), (yyvsp[-2].enum_list), (yyvsp[0].enum_value)) ;}
#line 3315 "src/parser.c"
    break;

  case 110: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 489 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3324 "src/parser.c"
    break;

  case 111: /* when_exp: "when" exp  */
#line 494 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3330 "src/parser.c"
    break;

  case 112: /* when_exp: %empty  */
#line 494 "src/gwion.y"
                                           { (yyval.exp) = NULL; }
#line 3336 "src/parser.c"
    break;

  case 113: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 497 "src/gwion.y"
                                      {
    (yyval.stmt) = MK_STMT(0 /*ae_stmt_match*/, (yylsp[-4]),
      .stmt_match = {
        .cond = (yyvsp[-3].exp),
        .when = (yyvsp[-2].exp),
        .list = (yyvsp[0].stmt_list)
    });
}
#line 3349 "src/parser.c"
    break;

  case 114: /* match_list: match_case_stmt  */
#line 506 "src/gwion.y"
                            { YYLIST_INI(Stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 3355 "src/parser.c"
    break;

  case 115: /* match_list: match_list match_case_stmt  */
#line 507 "src/gwion.y"
                             { YYLIST_END(Stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 3361 "src/parser.c"
    break;

  case 116: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 509 "src/gwion.y"
                                                        {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-6]),
    .stmt_match = {
      .cond  = (yyvsp[-5].exp),
      .list  = (yyvsp[-3].stmt_list),
      .where = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  });
}
#line 3374 "src/parser.c"
    break;

  case 117: /* match_stmt: "match" exp "{" match_list "}"  */
#line 518 "src/gwion.y"
                               {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-4]),
    .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
  });
}
#line 3386 "src/parser.c"
    break;

  case 118: /* flow: "while"  */
#line 527 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3392 "src/parser.c"
    break;

  case 119: /* flow: "until"  */
#line 528 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3398 "src/parser.c"
    break;

  case 120: /* loop_stmt: flow "(" exp ")" stmt  */
#line 533 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-4].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3409 "src/parser.c"
    break;

  case 121: /* loop_stmt: "do" stmt flow exp ";"  */
#line 540 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
    });
  }
#line 3421 "src/parser.c"
    break;

  case 122: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 548 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-5]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3433 "src/parser.c"
    break;

  case 123: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 556 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-6]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-4].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c3 = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3446 "src/parser.c"
    break;

  case 124: /* loop_stmt: "foreach" "(" capture ":" binary_exp ")" stmt  */
#line 565 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-6]),
      .stmt_each = {
        .var = (yyvsp[-4].capture).var,
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .is_ref = (yyvsp[-4].capture).is_ref
    });
  }
#line 3459 "src/parser.c"
    break;

  case 125: /* loop_stmt: "foreach" "(" "<identifier>" "," capture ":" binary_exp ")" stmt  */
#line 574 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-8]),
      .stmt_each = {
        .var = (yyvsp[-4].capture).var,
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .idx = (Var_Decl){.tag=MK_TAG((yyvsp[-6].sym), (yylsp[-6]))},
        .is_ref = (yyvsp[-4].capture).is_ref
    });
  }
#line 3473 "src/parser.c"
    break;

  case 126: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 584 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-4]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
  }
#line 3484 "src/parser.c"
    break;

  case 127: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 591 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-6]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
    (yyval.stmt).d.stmt_loop.idx = (Var_Decl){ .tag = MK_TAG((yyvsp[-4].sym), (yylsp[-4])) };
  }
#line 3496 "src/parser.c"
    break;

  case 128: /* defer_stmt: "defer" stmt  */
#line 599 "src/gwion.y"
                         {
    const loc_t loc = defer_stmt(&(yyvsp[0].stmt));
    if(loc.first.line) {
      // defer could maybe return the position
      parser_error(&loc, arg, "return statement in defer", 0x0209);
      YYERROR;
    }
    (yyval.stmt) = MK_STMT(ae_stmt_defer, (yylsp[-1]),
    .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) });
}
#line 3511 "src/parser.c"
    break;

  case 129: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 612 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-4]),
      .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3522 "src/parser.c"
    break;

  case 130: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 619 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-6]),
      .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3534 "src/parser.c"
    break;

  case 131: /* breaks: "break"  */
#line 627 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3540 "src/parser.c"
    break;

  case 132: /* breaks: "continue"  */
#line 627 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3546 "src/parser.c"
    break;

  case 133: /* jump_stmt: "return" exp ";"  */
#line 629 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-2]), (yyvsp[-1].exp)); }
#line 3552 "src/parser.c"
    break;

  case 134: /* jump_stmt: "return" ";"  */
#line 630 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-1]), NULL); }
#line 3558 "src/parser.c"
    break;

  case 135: /* jump_stmt: breaks decimal ";"  */
#line 631 "src/gwion.y"
                         { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-2]), .stmt_index = { .idx = (yyvsp[-1].gwint).num });}
#line 3564 "src/parser.c"
    break;

  case 136: /* jump_stmt: breaks ";"  */
#line 632 "src/gwion.y"
               { (yyval.stmt) = MK_STMT((yyvsp[-1].stmt_t), (yylsp[-1]), .stmt_index = { .idx = -1 });}
#line 3570 "src/parser.c"
    break;

  case 137: /* exp_stmt: exp ";"  */
#line 635 "src/gwion.y"
            { (yyval.stmt) = MK_STMT_EXP((yylsp[-1]), (yyvsp[-1].exp)); }
#line 3576 "src/parser.c"
    break;

  case 138: /* exp_stmt: ";"  */
#line 636 "src/gwion.y"
            { (yyval.stmt) = MK_STMT(ae_stmt_exp, (yylsp[0])); }
#line 3582 "src/parser.c"
    break;

  case 139: /* exp: binary_exp  */
#line 639 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3588 "src/parser.c"
    break;

  case 140: /* exp: "<identifier>" "=" binary_exp  */
#line 640 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3594 "src/parser.c"
    break;

  case 141: /* exp: binary_exp "," exp  */
#line 642 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3606 "src/parser.c"
    break;

  case 143: /* binary_exp: binary_exp "@" decl_exp  */
#line 652 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3612 "src/parser.c"
    break;

  case 144: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 653 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3618 "src/parser.c"
    break;

  case 145: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 654 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3624 "src/parser.c"
    break;

  case 146: /* call_template: ":[" tmplarg_list "]"  */
#line 656 "src/gwion.y"
                                     { (yyval.tmplarg_list) = (yyvsp[-1].tmplarg_list); }
#line 3630 "src/parser.c"
    break;

  case 147: /* call_template: %empty  */
#line 656 "src/gwion.y"
                                                           { (yyval.tmplarg_list) = NULL; }
#line 3636 "src/parser.c"
    break;

  case 153: /* array_exp: "[" exp "]"  */
#line 661 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3642 "src/parser.c"
    break;

  case 154: /* array_exp: "[" exp "]" array_exp  */
#line 662 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3650 "src/parser.c"
    break;

  case 155: /* array_exp: "[" exp "]" "[" "]"  */
#line 665 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3656 "src/parser.c"
    break;

  case 156: /* array_empty: "[" "]"  */
#line 669 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3662 "src/parser.c"
    break;

  case 157: /* array_empty: array_empty "[" "]"  */
#line 670 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3668 "src/parser.c"
    break;

  case 158: /* array_empty: array_empty array_exp  */
#line 671 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3674 "src/parser.c"
    break;

  case 159: /* dict_list: binary_exp ":" binary_exp  */
#line 675 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3680 "src/parser.c"
    break;

  case 160: /* dict_list: dict_list "," binary_exp ":" binary_exp  */
#line 676 "src/gwion.y"
                                            { (yyvsp[-4].exp)->next->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3686 "src/parser.c"
    break;

  case 161: /* range: "[" exp ":" exp "]"  */
#line 679 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3692 "src/parser.c"
    break;

  case 162: /* range: "[" exp ":" "]"  */
#line 680 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3698 "src/parser.c"
    break;

  case 163: /* range: "[" ":" exp "]"  */
#line 681 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3704 "src/parser.c"
    break;

  case 167: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 687 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3710 "src/parser.c"
    break;

  case 168: /* decl_exp: type_decl_flag2 flag type_decl_array call_paren var_decl  */
#line 688 "src/gwion.y"
                                                             {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-2].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-4].flag) | (yyvsp[-3].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1]));
  }
#line 3720 "src/parser.c"
    break;

  case 169: /* func_args: "(" arg_list ")"  */
#line 694 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3726 "src/parser.c"
    break;

  case 170: /* func_args: "(" ")"  */
#line 694 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3732 "src/parser.c"
    break;

  case 171: /* fptr_args: "(" fptr_list ")"  */
#line 695 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3738 "src/parser.c"
    break;

  case 172: /* fptr_args: "(" ")"  */
#line 695 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3744 "src/parser.c"
    break;

  case 173: /* decl_template: ":[" specialized_list "]"  */
#line 698 "src/gwion.y"
                            { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3750 "src/parser.c"
    break;

  case 174: /* decl_template: ":[" specialized_list "..." "]"  */
#line 699 "src/gwion.y"
                                              {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), spec);
}
#line 3759 "src/parser.c"
    break;

  case 175: /* decl_template: ":[" "..." "]"  */
#line 703 "src/gwion.y"
                                {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_INI(Specialized, (yyval.specialized_list), spec);
}
#line 3768 "src/parser.c"
    break;

  case 176: /* decl_template: %empty  */
#line 707 "src/gwion.y"
                      { (yyval.specialized_list) = NULL; }
#line 3774 "src/parser.c"
    break;

  case 177: /* global: "global"  */
#line 709 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3780 "src/parser.c"
    break;

  case 179: /* opt_global: %empty  */
#line 710 "src/gwion.y"
                            { (yyval.flag) = ae_flag_none; }
#line 3786 "src/parser.c"
    break;

  case 180: /* storage_flag: "static"  */
#line 712 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3792 "src/parser.c"
    break;

  case 182: /* access_flag: "private"  */
#line 714 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3798 "src/parser.c"
    break;

  case 183: /* access_flag: "protect"  */
#line 715 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3804 "src/parser.c"
    break;

  case 184: /* flag: access_flag  */
#line 718 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3810 "src/parser.c"
    break;

  case 185: /* flag: storage_flag  */
#line 719 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3816 "src/parser.c"
    break;

  case 186: /* flag: access_flag storage_flag  */
#line 720 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3822 "src/parser.c"
    break;

  case 187: /* flag: %empty  */
#line 721 "src/gwion.y"
           { (yyval.flag) = ae_flag_none; }
#line 3828 "src/parser.c"
    break;

  case 188: /* final: "final"  */
#line 724 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3834 "src/parser.c"
    break;

  case 189: /* final: %empty  */
#line 724 "src/gwion.y"
                                                { (yyval.flag) = ae_flag_none; }
#line 3840 "src/parser.c"
    break;

  case 190: /* modifier: "abstract" final  */
#line 726 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3846 "src/parser.c"
    break;

  case 192: /* func_def_base: "fun" func_base func_args code_list  */
#line 729 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3856 "src/parser.c"
    break;

  case 193: /* func_def_base: "fun" func_base func_args ";"  */
#line 734 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3868 "src/parser.c"
    break;

  case 194: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 741 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
   (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3879 "src/parser.c"
    break;

  case 195: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 747 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3890 "src/parser.c"
    break;

  case 196: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 756 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3902 "src/parser.c"
    break;

  case 202: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 767 "src/gwion.y"
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

  case 203: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 777 "src/gwion.y"
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

  case 204: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 786 "src/gwion.y"
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

  case 205: /* op_base: type_decl_empty OPID_A func_args  */
#line 796 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3952 "src/parser.c"
    break;

  case 206: /* operator: "operator"  */
#line 801 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3958 "src/parser.c"
    break;

  case 207: /* operator: "operator" global  */
#line 801 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3964 "src/parser.c"
    break;

  case 208: /* op_def: operator op_base code_list  */
#line 804 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3970 "src/parser.c"
    break;

  case 209: /* op_def: operator op_base ";"  */
#line 806 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3976 "src/parser.c"
    break;

  case 210: /* op_def: operator "abstract" op_base ";"  */
#line 808 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3982 "src/parser.c"
    break;

  case 214: /* func_def: operator "new" func_args code_list  */
#line 812 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 3992 "src/parser.c"
    break;

  case 215: /* func_def: operator "new" func_args ";"  */
#line 818 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4003 "src/parser.c"
    break;

  case 216: /* func_def: operator "abstract" "new" func_args ";"  */
#line 825 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4014 "src/parser.c"
    break;

  case 217: /* type_decl_base: "<identifier>"  */
#line 833 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4020 "src/parser.c"
    break;

  case 218: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 834 "src/gwion.y"
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

  case 219: /* type_decl_tmpl: type_decl_base call_template  */
#line 848 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 4042 "src/parser.c"
    break;

  case 220: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 849 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 4048 "src/parser.c"
    break;

  case 222: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 854 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4054 "src/parser.c"
    break;

  case 223: /* option: "?"  */
#line 857 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4060 "src/parser.c"
    break;

  case 224: /* option: OPTIONS  */
#line 857 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4066 "src/parser.c"
    break;

  case 225: /* option: %empty  */
#line 857 "src/gwion.y"
                                                                        { (yyval.uval) = 0; }
#line 4072 "src/parser.c"
    break;

  case 226: /* type_decl_opt: type_decl_noflag option  */
#line 858 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4078 "src/parser.c"
    break;

  case 228: /* type_decl: type_decl_flag type_decl_opt  */
#line 859 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4084 "src/parser.c"
    break;

  case 229: /* type_decl_flag: "late"  */
#line 862 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4090 "src/parser.c"
    break;

  case 230: /* type_decl_flag: "const"  */
#line 863 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4096 "src/parser.c"
    break;

  case 231: /* type_decl_flag2: "var"  */
#line 865 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4102 "src/parser.c"
    break;

  case 233: /* variable: "<identifier>" ";"  */
#line 868 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.variable) = MK_VAR(td, (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});
}
#line 4111 "src/parser.c"
    break;

  case 234: /* variable: type_decl_empty "<identifier>" ";"  */
#line 872 "src/gwion.y"
                         { (yyval.variable) = MK_VAR((yyvsp[-2].type_decl), (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});}
#line 4117 "src/parser.c"
    break;

  case 235: /* variable_list: variable  */
#line 874 "src/gwion.y"
                         { YYLIST_INI(Variable, (yyval.variable_list), (yyvsp[0].variable)); }
#line 4123 "src/parser.c"
    break;

  case 236: /* variable_list: variable_list variable  */
#line 875 "src/gwion.y"
                         { YYLIST_END(Variable, (yyval.variable_list), (yyvsp[-1].variable_list), (yyvsp[0].variable)); }
#line 4129 "src/parser.c"
    break;

  case 237: /* union_def: "union" flag "<identifier>" decl_template "{" variable_list "}"  */
#line 878 "src/gwion.y"
                                                        {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].variable_list), (yylsp[-4]));
      (yyval.union_def)->tag.sym = (yyvsp[-4].sym); // put tag in ctor
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4141 "src/parser.c"
    break;

  case 238: /* var_decl: "<identifier>"  */
#line 887 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4147 "src/parser.c"
    break;

  case 239: /* arg_decl: "<identifier>"  */
#line 889 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4153 "src/parser.c"
    break;

  case 241: /* fptr_arg_decl: %empty  */
#line 890 "src/gwion.y"
                                 { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4159 "src/parser.c"
    break;

  case 255: /* opt_exp: exp  */
#line 898 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4165 "src/parser.c"
    break;

  case 256: /* opt_exp: %empty  */
#line 898 "src/gwion.y"
                                   { (yyval.exp) = NULL; }
#line 4171 "src/parser.c"
    break;

  case 258: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 901 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4177 "src/parser.c"
    break;

  case 259: /* con_exp: log_or_exp "?:" con_exp  */
#line 903 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4183 "src/parser.c"
    break;

  case 261: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 905 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4189 "src/parser.c"
    break;

  case 263: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 906 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4195 "src/parser.c"
    break;

  case 265: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 907 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4201 "src/parser.c"
    break;

  case 267: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 908 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4207 "src/parser.c"
    break;

  case 269: /* and_exp: and_exp "&" eq_exp  */
#line 909 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4213 "src/parser.c"
    break;

  case 271: /* eq_exp: eq_exp eq_op rel_exp  */
#line 910 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4219 "src/parser.c"
    break;

  case 273: /* rel_exp: rel_exp rel_op shift_exp  */
#line 911 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4225 "src/parser.c"
    break;

  case 275: /* shift_exp: shift_exp shift_op add_exp  */
#line 912 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4231 "src/parser.c"
    break;

  case 277: /* add_exp: add_exp add_op mul_exp  */
#line 913 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4237 "src/parser.c"
    break;

  case 279: /* mul_exp: mul_exp mul_op dur_exp  */
#line 914 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4243 "src/parser.c"
    break;

  case 281: /* dur_exp: dur_exp "::" cast_exp  */
#line 915 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4249 "src/parser.c"
    break;

  case 283: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 918 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4255 "src/parser.c"
    break;

  case 290: /* unary_exp: unary_op unary_exp  */
#line 925 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4261 "src/parser.c"
    break;

  case 291: /* unary_exp: "spork" unary_exp  */
#line 926 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4267 "src/parser.c"
    break;

  case 292: /* unary_exp: "fork" unary_exp  */
#line 927 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4273 "src/parser.c"
    break;

  case 293: /* unary_exp: "new" type_decl_exp call_paren  */
#line 928 "src/gwion.y"
                                   {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].type_decl), (yyvsp[0].exp) ?: new_prim_nil(mpool(arg), (yylsp[0])), (yyloc));
  }
#line 4281 "src/parser.c"
    break;

  case 294: /* unary_exp: "new" type_decl_exp  */
#line 931 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4287 "src/parser.c"
    break;

  case 295: /* unary_exp: "spork" code_list  */
#line 932 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4293 "src/parser.c"
    break;

  case 296: /* unary_exp: "fork" code_list  */
#line 933 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4299 "src/parser.c"
    break;

  case 297: /* unary_exp: "spork" captures code_list  */
#line 934 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4305 "src/parser.c"
    break;

  case 298: /* unary_exp: "fork" captures code_list  */
#line 935 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4311 "src/parser.c"
    break;

  case 299: /* unary_exp: "$" type_decl_empty  */
#line 936 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4317 "src/parser.c"
    break;

  case 300: /* lambda_list: "<identifier>"  */
#line 939 "src/gwion.y"
    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){.tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_INI(Arg, (yyval.arg_list), a); }
#line 4325 "src/parser.c"
    break;

  case 301: /* lambda_list: lambda_list "<identifier>"  */
#line 942 "src/gwion.y"
                    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){ .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_END(Arg, (yyval.arg_list), (yyvsp[-1].arg_list), a);
}
#line 4334 "src/parser.c"
    break;

  case 302: /* lambda_arg: "\\" lambda_list  */
#line 947 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4340 "src/parser.c"
    break;

  case 303: /* lambda_arg: "\\"  */
#line 947 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4346 "src/parser.c"
    break;

  case 305: /* tmplarg: type_decl_empty  */
#line 950 "src/gwion.y"
                         {
    (yyval.tmplarg) = (TmplArg) { .d = { .td = (yyvsp[0].type_decl)}, .type = tmplarg_td};
  }
#line 4354 "src/parser.c"
    break;

  case 306: /* tmplarg: tmplarg_exp  */
#line 953 "src/gwion.y"
                {
    (yyval.tmplarg) = (TmplArg) { .d = { .exp = (yyvsp[0].exp)}, .type = tmplarg_exp};
  }
#line 4362 "src/parser.c"
    break;

  case 307: /* tmplarg_list: tmplarg  */
#line 957 "src/gwion.y"
                           { YYLIST_INI(TmplArg, (yyval.tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4368 "src/parser.c"
    break;

  case 308: /* tmplarg_list: tmplarg_list "," tmplarg  */
#line 958 "src/gwion.y"
                           { YYLIST_END(TmplArg, (yyval.tmplarg_list), (yyvsp[-2].tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4374 "src/parser.c"
    break;

  case 309: /* call_paren: "(" exp ")"  */
#line 961 "src/gwion.y"
            { (yyval.exp) = (yyvsp[-1].exp); }
#line 4380 "src/parser.c"
    break;

  case 310: /* call_paren: "(" ")"  */
#line 962 "src/gwion.y"
        { (yyval.exp) = NULL; }
#line 4386 "src/parser.c"
    break;

  case 313: /* dot_exp: post_exp "." "<identifier>"  */
#line 966 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expressions"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4399 "src/parser.c"
    break;

  case 315: /* post_exp: post_exp array_exp  */
#line 977 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4405 "src/parser.c"
    break;

  case 316: /* post_exp: post_exp range  */
#line 979 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4411 "src/parser.c"
    break;

  case 317: /* post_exp: post_exp call_template call_paren  */
#line 981 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].tmplarg_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].tmplarg_list)); }
#line 4418 "src/parser.c"
    break;

  case 318: /* post_exp: post_exp post_op  */
#line 984 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4424 "src/parser.c"
    break;

  case 319: /* post_exp: dot_exp  */
#line 985 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4430 "src/parser.c"
    break;

  case 320: /* interp_exp: "<interp string end>"  */
#line 989 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4436 "src/parser.c"
    break;

  case 321: /* interp_exp: "<interp string lit>" interp_exp  */
#line 990 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4442 "src/parser.c"
    break;

  case 322: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 991 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4448 "src/parser.c"
    break;

  case 323: /* interp: "${" interp_exp  */
#line 993 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4454 "src/parser.c"
    break;

  case 324: /* interp: interp "${" interp_exp  */
#line 994 "src/gwion.y"
                                 {
  if(!(yyvsp[0].exp)->next) {
    char c[strlen((yyvsp[-2].exp)->d.prim.d.string.data) + strlen((yyvsp[0].exp)->d.prim.d.string.data) + 1];
    sprintf(c, "%s%s\n", (yyvsp[-2].exp)->d.prim.d.string.data, (yyvsp[0].exp)->d.prim.d.string.data);
    (yyvsp[-2].exp)->d.prim.d.string.data = s_name(insert_symbol(c));
    (yyvsp[-2].exp)->loc.last = (yyvsp[0].exp)->loc.last;
    free_exp(mpool(arg), (yyvsp[0].exp));
  } else
  (yyvsp[-2].exp)->next = (yyvsp[0].exp);
}
#line 4469 "src/parser.c"
    break;

  case 325: /* capture: "<identifier>"  */
#line 1005 "src/gwion.y"
            { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }};}
#line 4475 "src/parser.c"
    break;

  case 326: /* capture: "&" "<identifier>"  */
#line 1005 "src/gwion.y"
                                                                           { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }, .is_ref = true }; }
#line 4481 "src/parser.c"
    break;

  case 327: /* capture_list: capture  */
#line 1007 "src/gwion.y"
                       { YYLIST_INI(Capture, (yyval.captures), (yyvsp[0].capture)); }
#line 4487 "src/parser.c"
    break;

  case 328: /* capture_list: capture_list capture  */
#line 1008 "src/gwion.y"
                       { YYLIST_END(Capture, (yyval.captures), (yyvsp[-1].captures), (yyvsp[0].capture)); }
#line 4493 "src/parser.c"
    break;

  case 329: /* captures: ":" capture_list ":"  */
#line 1009 "src/gwion.y"
                               { (yyval.captures) = (yyvsp[-1].captures); }
#line 4499 "src/parser.c"
    break;

  case 330: /* captures: %empty  */
#line 1009 "src/gwion.y"
                                                      { (yyval.captures) = NULL; }
#line 4505 "src/parser.c"
    break;

  case 333: /* basic_exp: number  */
#line 1013 "src/gwion.y"
                         {
  (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc)); 
  (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4514 "src/parser.c"
    break;

  case 334: /* basic_exp: "<float>"  */
#line 1017 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4520 "src/parser.c"
    break;

  case 335: /* basic_exp: "<litteral string>"  */
#line 1018 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4526 "src/parser.c"
    break;

  case 336: /* basic_exp: "<litteral char>"  */
#line 1019 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4532 "src/parser.c"
    break;

  case 337: /* prim_exp: "<identifier>"  */
#line 1022 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4538 "src/parser.c"
    break;

  case 339: /* prim_exp: interp  */
#line 1024 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4544 "src/parser.c"
    break;

  case 340: /* prim_exp: "[" opt_exp array_lit_ed  */
#line 1025 "src/gwion.y"
                             { 
    if(!(yyvsp[-1].exp)) {
      parser_error(&(yylsp[-2]), arg, "must provide values/expressions for array [...]", 0);
      YYERROR;
    }
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4557 "src/parser.c"
    break;

  case 341: /* prim_exp: "{" dict_list "}"  */
#line 1033 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4563 "src/parser.c"
    break;

  case 342: /* prim_exp: range  */
#line 1034 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4569 "src/parser.c"
    break;

  case 343: /* prim_exp: "<<<" exp ">>>"  */
#line 1035 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4575 "src/parser.c"
    break;

  case 344: /* prim_exp: "(" exp ")"  */
#line 1036 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4581 "src/parser.c"
    break;

  case 345: /* prim_exp: "`foo`"  */
#line 1037 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last =  { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4592 "src/parser.c"
    break;

  case 346: /* prim_exp: lambda_arg captures code_list  */
#line 1043 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4598 "src/parser.c"
    break;

  case 347: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1044 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4604 "src/parser.c"
    break;

  case 348: /* prim_exp: "(" op_op ")"  */
#line 1045 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4610 "src/parser.c"
    break;

  case 349: /* prim_exp: "perform" opt_id  */
#line 1046 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4616 "src/parser.c"
    break;

  case 350: /* prim_exp: "(" ")"  */
#line 1047 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4622 "src/parser.c"
    break;


#line 4626 "src/parser.c"

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

#line 1049 "src/gwion.y"

#undef scan
#undef insert_symbol

ANN static Symbol sig_name(const Scanner *scan, const pos_t pos) {
  char c[6 + 1 + num_digit(pos.line) + num_digit(pos.column) + 2];
  sprintf(c, "@sig_%u_%u", pos.line, pos.column);
  return insert_symbol(scan->st, c);
}


ANN static Symbol lambda_name(const Scanner *scan, const pos_t pos) {
  char c[6 + 1 + num_digit(pos.line) + num_digit(pos.column) + 2];
  sprintf(c, "lambda:%u:%u", pos.line, pos.column);
  return insert_symbol(scan->st, c);
}

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
loc_t _loc = { scan->old, scan->old};
scan->error = 0;
  const char *syntaxerr = YY_("syntax error");
  if(!strncmp(_main, syntaxerr, strlen(syntaxerr)))
    scanner_secondary(scan, "check around here", _loc);
  return 0;
}
