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
#define YYFINAL  227
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2715

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  349
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  625

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
     640,   650,   651,   652,   653,   655,   655,   657,   657,   657,
     657,   657,   660,   661,   664,   668,   669,   670,   674,   675,
     678,   679,   680,   684,   684,   685,   686,   687,   693,   693,
     694,   694,   697,   698,   702,   706,   708,   709,   709,   711,
     711,   713,   714,   717,   718,   719,   720,   723,   723,   725,
     725,   728,   733,   740,   746,   754,   763,   763,   763,   763,
     763,   765,   775,   784,   794,   800,   800,   802,   804,   806,
     809,   809,   809,   810,   816,   823,   832,   833,   847,   848,
     852,   853,   856,   856,   856,   857,   858,   858,   861,   862,
     864,   864,   867,   871,   873,   874,   877,   886,   888,   889,
     889,   891,   891,   892,   892,   892,   892,   893,   893,   894,
     894,   895,   895,   895,   897,   897,   898,   899,   901,   904,
     904,   905,   905,   906,   906,   907,   907,   908,   908,   909,
     909,   910,   910,   911,   911,   912,   912,   913,   913,   914,
     914,   916,   916,   919,   919,   919,   920,   920,   923,   924,
     925,   926,   927,   930,   931,   932,   933,   934,   935,   938,
     941,   946,   946,   948,   949,   952,   956,   957,   960,   961,
     963,   963,   965,   974,   975,   977,   979,   982,   984,   988,
     989,   990,   992,   993,  1004,  1004,  1006,  1007,  1008,  1008,
    1009,  1009,  1012,  1016,  1017,  1018,  1021,  1022,  1023,  1024,
    1032,  1033,  1034,  1035,  1036,  1042,  1043,  1044,  1045,  1046
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

#define YYPACT_NINF (-464)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-252)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     951,  -464,  1809,  1925,  1059,   274,  -464,    97,  -464,  1488,
    -464,   117,   135,   165,  2377,   274,  1672,  -464,  -464,  1488,
     111,   202,   274,   274,   175,   152,   175,   274,  -464,  -464,
     274,   274,  -464,   133,  1488,   144,    14,   164,  -464,  -464,
    -464,  -464,  -464,   275,  -464,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,
     152,   152,  2513,  2513,  2377,  -464,  -464,  -464,   250,   601,
    -464,  -464,  -464,  -464,  -464,  -464,  1593,  -464,   274,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,   263,  -464,
    -464,  -464,    47,  -464,  -464,   278,    37,  -464,  -464,  -464,
    -464,   348,  -464,  -464,  -464,   274,  -464,  -464,   -10,   190,
     183,   192,   198,   157,   240,   128,    94,   209,   226,   234,
    2577,  -464,   237,  -464,  -464,   204,   271,  -464,  -464,  -464,
    2377,  -464,   336,   342,  -464,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,   351,  -464,   353,
    -464,  -464,  -464,  -464,  2377,   260,   293,  -464,  1167,    23,
     116,  -464,  -464,  -464,  -464,   371,  -464,  -464,   291,   310,
    2377,   179,  2473,  1713,    43,   373,   301,  -464,   382,   354,
    -464,  -464,  -464,   304,   323,   305,  -464,   307,   274,  -464,
      42,  -464,   299,   279,   357,   277,  -464,   390,    53,  -464,
     315,   398,   152,   321,   311,  -464,  -464,   324,   404,   327,
    2377,   275,  -464,   345,  -464,  -464,  -464,   408,  1275,   103,
    -464,  -464,   405,  -464,  -464,   405,   313,  -464,  -464,  -464,
    -464,   152,  2377,  -464,  -464,   413,  -464,  2377,  2377,  2377,
    2377,  2562,   371,  2596,   181,   152,   152,  2377,  2577,  2577,
    2577,  2577,  2577,  2577,  -464,  -464,  2577,  2577,  2577,  -464,
    2577,  -464,  2577,  2577,   152,  -464,   407,  1925,   335,    49,
     408,  -464,  -464,  -464,   275,   138,  -464,  -464,   411,  1966,
    -464,  -464,  -464,  -464,  2377,  2377,  -464,    24,   233,  -464,
     152,  -464,   152,   414,  2377,   417,    50,  1713,   418,   340,
     330,   403,   419,  -464,  -464,  -464,   354,   312,   386,  -464,
    -464,   312,   338,   152,   279,   356,  -464,    53,  -464,  -464,
    -464,  2062,  -464,   430,  -464,  -464,   379,   168,   410,   360,
     312,   356,  -464,   152,   439,  -464,   387,  -464,   275,  2103,
    -464,  -464,  1383,  -464,  -464,     4,  1275,  -464,  -464,  -464,
     364,   444,  -464,  -464,  -464,  -464,  -464,   371,   448,   252,
     371,   312,   312,  -464,  -464,   312,    54,   362,  -464,   190,
     183,   192,   198,   157,   240,   128,    94,   209,   226,   234,
    -464,  1275,  -464,    45,  -464,  -464,  -464,  -464,    65,  -464,
    -464,  -464,  -464,  -464,   446,    74,   140,  -464,   374,  -464,
     220,  -464,  -464,   375,   377,  1488,   459,  2377,  1488,  2199,
     103,  -464,  2377,  2377,  -464,    66,     2,   111,  -464,    12,
     420,  -464,   338,   356,   284,   312,  -464,  -464,   378,  -464,
    -464,   458,  2240,  -464,   465,  -464,   374,  -464,   316,   388,
     393,   466,   312,   460,    96,  -464,   469,   473,   152,  -464,
    -464,  -464,   475,  -464,  -464,  -464,   312,  1488,   479,  -464,
    -464,  -464,  -464,   478,   480,   481,  -464,  -464,   401,  2577,
      40,   482,    49,  -464,  -464,  2377,  -464,   396,   152,  -464,
     312,   312,   472,  -464,    69,  -464,  1488,   485,   399,    82,
     468,   470,  -464,  -464,   380,  -464,   492,  1488,   152,   490,
     338,  -464,    58,   152,   338,   284,   497,  -464,   835,  -464,
     398,  -464,   421,  -464,  -464,  -464,  -464,   152,  -464,  -464,
    -464,  -464,  -464,   319,  -464,   152,   405,   499,  -464,   483,
    -464,  -464,   152,   152,   152,  -464,  -464,  -464,  2336,  -464,
    -464,    74,  2377,  -464,   398,  -464,  1488,  1488,  -464,  1488,
    2377,  1488,  2377,   422,  1488,   425,     2,   501,  -464,   431,
    -464,  -464,    16,  -464,   505,  -464,   284,  -464,  -464,   719,
     410,  -464,  -464,   512,   434,  -464,   266,   440,  -464,  -464,
     405,  2377,   515,   516,   517,   518,  -464,    74,   519,  -464,
    -464,  -464,    84,  -464,  -464,  1488,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,   520,  -464,   522,  -464,  -464,
    -464,  -464,    74,  -464,   152,  -464,  -464,  -464,  1488,  1488,
    -464,  -464,   521,  -464,  -464
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   138,     0,   255,     0,   186,   230,     0,   118,     0,
     119,     0,     0,     0,     0,   186,     0,   131,   132,     0,
     103,     0,   186,   186,   178,     0,   205,   186,    49,    50,
     186,   186,   229,     0,     0,   302,     0,     0,   228,    24,
     333,   334,   335,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,   336,   310,   283,   311,   284,
       0,     0,     0,     0,     0,   287,   286,   344,     0,     0,
       4,     9,    10,   332,    16,    11,     7,    14,   186,    15,
      86,    89,    38,    93,    92,    91,    12,    87,     0,    84,
      90,    85,     0,    88,    83,     0,   139,   341,   141,   210,
     211,     0,   212,     8,   231,   186,    13,   165,   256,   259,
     261,   263,   265,   267,   269,   271,   273,   275,   277,   279,
       0,   281,   329,   285,   318,   288,   338,   337,   313,   349,
       0,   249,   283,   284,   252,   253,   151,   147,   246,   244,
     245,   243,   148,   247,   248,   149,   150,     0,   196,     0,
     198,   197,   200,   199,     0,   254,     0,    67,     0,   139,
       0,   179,   176,   181,   182,     0,   180,   184,   183,   188,
       0,     0,     0,     0,     0,     0,     0,   134,     0,     0,
     102,   348,    96,     0,   188,     0,   177,     0,   186,   216,
       0,    55,     0,   146,   220,   224,   226,    53,     0,   206,
       0,     0,     0,     0,     0,   128,   299,   301,     0,     0,
     255,     0,   319,     0,   322,   298,    54,   293,     0,     0,
     294,   290,     0,   295,   291,     0,     0,     1,     6,     5,
      39,     0,     0,   136,    25,     0,   137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   255,     0,     0,
       0,     0,     0,     0,   241,   242,     0,     0,     0,   250,
       0,   251,     0,     0,     0,   289,     0,     0,     0,     0,
       0,   314,   315,   317,     0,     0,   343,   347,     0,     0,
     331,   330,   339,    68,     0,     0,   340,     0,     0,   185,
       0,   187,     0,     0,     0,   336,     0,     0,   324,     0,
       0,     0,     0,   133,    97,    99,   101,   175,   188,   190,
      17,   175,    29,     0,   146,     0,   218,     0,   222,   223,
     225,     0,   163,   164,    52,   227,     0,     0,    43,     0,
     175,     0,   300,    63,     0,   254,     0,   320,     0,     0,
     292,    69,     0,   324,   326,     0,     0,   296,   297,   342,
       0,     0,   135,   140,   144,   142,   143,     0,     0,     0,
       0,   175,   175,   208,   207,   175,     0,     0,   258,   260,
     262,   264,   266,   268,   270,   272,   274,   276,   278,   280,
     282,     0,   345,     0,   312,   304,   305,   306,     0,   303,
     316,   323,   162,   161,     0,   158,     0,   169,     0,    58,
       0,   192,   191,     0,     0,     0,     0,     0,     0,     0,
       0,   325,     0,     0,   114,     0,     0,   103,   100,     0,
      28,   189,    29,     0,     0,   175,   219,    32,     0,   221,
     155,     0,     0,   157,     0,   171,   240,    65,     0,     0,
      44,     0,   175,     0,     0,    60,    62,     0,    63,    82,
     321,   309,     0,    70,   328,   327,   175,     0,     0,   209,
     214,   213,   204,     0,     0,     0,   237,   166,     0,     0,
     139,   152,     0,   145,   160,     0,   238,    57,     0,   168,
     175,   175,   129,   121,     0,   126,     0,     0,     0,     0,
     112,   117,   115,   106,     0,   108,   105,     0,     0,     0,
      29,    36,     0,     0,    29,     0,    30,    22,     0,    23,
       0,    31,     0,   156,    26,   239,    64,     0,   170,    41,
      42,    46,    40,     0,    94,     0,     0,     0,   308,    47,
     120,   215,     0,     0,     0,   167,   257,   346,     0,   153,
     307,   159,     0,    59,     0,    45,     0,     0,   122,     0,
       0,     0,     0,     0,     0,     0,   104,     0,    98,     0,
     174,    34,     0,   172,     0,    27,     0,    19,    21,     0,
      43,    33,    66,   216,     0,   234,     0,     0,    61,   194,
       0,     0,     0,     0,     0,     0,   154,    56,     0,   130,
     127,   123,     0,   124,   111,     0,   116,   107,   109,   110,
      35,    37,   173,    18,    20,     0,   232,     0,   236,   235,
      95,   193,    48,    51,     0,   202,   203,   195,     0,   113,
     217,   233,     0,   125,   201
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -464,  -464,    20,   -63,    56,  -464,  -463,  -464,   -84,   203,
    -464,  -464,  -328,  -464,  -295,   -32,  -464,    -3,  -464,  -464,
     -39,  -464,  -464,  -464,  -464,  -464,   -50,    30,   -20,  -280,
    -464,  -464,    86,    15,  -464,  -464,   -59,  -464,    -9,  -464,
    -464,  -464,   229,  -464,  -464,  -464,   119,  -464,   -13,  -464,
    -464,  -464,   124,  -464,  -464,   376,  -464,  -464,  -464,  -464,
    -464,  -151,    29,    -1,  -167,  -464,  -185,  -464,  -464,   423,
    -464,    77,  -207,  -453,  -291,    95,  -464,   383,  -464,    18,
    -160,  -464,  -464,  -464,   303,   309,  -464,  -464,  -464,   365,
    -464,   227,  -464,   359,  -464,   -23,  -464,   -24,  -464,  -464,
      90,   118,  -464,  -464,  -101,  -100,  -102,   -99,  -155,  -239,
    -464,   314,   318,   308,   317,   320,   306,   322,   302,   325,
     326,   298,   -80,    -2,  -464,  -464,  -464,    92,  -464,  -242,
     -91,  -464,  -464,  -194,  -464,  -200,  -464,   -17,  -464,  -253,
    -464
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,    69,    70,   183,    71,   509,    72,    73,   235,
      74,   504,   424,    75,   428,   501,   502,    76,   201,   440,
     441,   165,    77,   582,    78,    79,   191,   217,   398,   445,
     400,   446,   447,   437,   438,    80,   220,    81,    82,    83,
     577,    84,   305,   417,   306,    85,   181,   557,   495,   496,
      86,   553,   414,   415,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,   270,   148,   271,   323,   160,    97,
     324,    98,   288,   328,   420,   166,   187,   167,   168,   184,
     292,   310,    99,   100,   149,   244,   101,   102,   103,   193,
     194,   195,   320,   196,   197,   104,   105,   575,   576,   106,
     467,   477,   516,   256,   150,   151,   152,   153,   156,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   207,   122,   386,   387,   388,   340,
     123,   124,   125,   214,   126,   300,   345,   222,   282,   127,
     128
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     171,   158,   198,   159,   223,   192,   229,   399,   234,   368,
     179,   216,   322,   257,   260,   258,   389,   337,   262,   344,
     422,   245,   297,   169,   309,   205,   316,   237,   390,   188,
     397,   147,   155,   176,   273,   359,   444,   198,   198,   443,
     215,   237,   567,   175,   237,   178,   225,   188,   202,   203,
     233,   537,   162,   471,   188,   336,   408,   570,   188,   339,
     221,   224,   562,    39,   498,   499,   563,   230,   498,   472,
     463,   464,   213,   473,   465,   547,    32,   491,   198,   185,
     391,   243,   247,   200,    38,   493,   248,   343,   551,   413,
     618,   588,   367,   226,   505,   500,   231,   208,   454,   500,
     512,    32,   170,   603,   249,   266,   524,   189,    39,    38,
      39,   564,    40,    41,    42,   299,   238,   284,   265,   186,
     285,   199,   172,   246,   468,   189,   298,   286,   506,   275,
     238,   209,   189,   238,   510,   190,   189,   466,   433,   279,
     173,   239,   240,   238,   450,   455,   409,   426,   421,   230,
     458,   522,   362,   462,   299,   239,   240,   188,   239,   240,
     190,   245,   238,   347,   190,   529,   348,   238,   239,   240,
     174,   296,   561,   188,   435,   238,   566,   238,   131,   198,
     259,   350,   329,   278,   363,   364,   343,   239,   240,   544,
     545,   346,   239,   240,   180,     8,   366,    10,   543,   293,
     239,   240,   239,   240,    32,   182,   313,   382,   198,  -146,
     488,   267,    38,   162,   299,   342,   204,   159,   198,   389,
      32,   243,   198,   198,   478,   365,   479,   206,    38,   402,
     536,   238,   284,   238,   475,   189,   401,   143,   144,   335,
     213,   198,   234,   346,   380,   578,   198,   210,   268,   385,
     227,   189,   583,   584,   585,   460,   239,   240,   239,   240,
     254,   351,   346,   190,   198,   255,   353,   198,   232,   198,
     403,   188,   404,   257,   260,   258,   335,   608,   262,   190,
       2,   236,     3,   395,   396,   130,   539,   507,     6,    56,
     198,    58,   250,   425,   508,   251,   383,   261,   134,   135,
     461,   280,   281,   213,   198,   252,    20,   436,   394,   253,
     198,   161,   162,   163,   164,   354,   355,   356,    32,   269,
     517,   263,   518,   406,   188,   264,    38,    32,   161,   162,
      35,   219,   494,   230,   622,    38,    39,   274,    40,    41,
      42,    43,  -250,   342,   138,   139,   140,   141,  -251,   573,
     431,   290,   291,   188,   279,   211,   212,   276,    55,   277,
      56,    57,    58,    59,   308,   291,    60,   213,   452,   318,
     319,    32,    61,    62,    63,    64,   287,   190,   342,    38,
     470,   511,   512,   301,   302,   303,   304,   307,   311,   241,
     312,    65,    66,   315,   269,    67,   482,   321,   326,   485,
      32,   317,   573,   327,   330,   331,   484,   332,    38,   333,
     334,   489,   338,   339,   349,   346,   352,   381,   384,   392,
     405,   407,   410,   411,   412,   198,   413,   419,   291,   416,
     190,   189,   423,    56,    57,    58,    59,   432,   487,   427,
      39,   439,   490,   442,   448,   242,   449,   456,   530,   198,
     457,   459,   385,   216,   474,   198,   469,   476,   480,   190,
     481,   431,   483,   503,    65,    66,   471,   579,   514,   521,
     523,   519,   494,   525,   541,   198,   520,   548,   559,   526,
     198,   528,   531,   532,   466,   533,   534,   546,   558,   538,
     542,   549,   552,   550,   198,   554,   556,   436,   560,   555,
     198,   512,   198,   574,   571,   580,   229,   581,   597,   198,
     198,   198,   599,   602,   600,   606,   595,   607,   613,   610,
     614,   611,   617,   615,   616,   621,   620,   624,   569,   434,
     601,   605,   572,   565,   527,   418,   497,   589,   590,   492,
     591,   587,   593,   598,   429,   596,   361,   294,   272,   592,
     358,   289,   609,   198,   515,   314,   574,   325,   535,   371,
     376,   379,   374,   369,   540,     0,     0,   431,   370,   372,
       0,     0,     0,   373,     0,     0,     0,     0,     0,   375,
     612,   594,     0,     0,     0,   377,     0,     0,   378,     0,
       0,   198,   619,     0,     0,     0,     0,     0,     0,     0,
       0,    -2,   228,     0,     1,     0,     2,     0,     3,   623,
     230,     4,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,    15,    16,    17,
      18,    19,    20,     0,    21,    22,    23,    24,     0,     0,
       0,     0,     0,     0,    25,     0,    26,    27,    28,    29,
      30,     0,    31,    32,    33,    34,    35,     0,    36,    37,
       0,    38,    39,     0,    40,    41,    42,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
     228,    67,     1,     0,     2,     0,     3,     0,     0,     4,
     604,     5,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,    15,    16,    17,    18,    19,
      20,     0,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,    25,     0,    26,    27,    28,    29,    30,     0,
      31,    32,    33,    34,    35,     0,    36,    37,     0,    38,
      39,     0,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     1,    67,
       2,     0,     3,     0,     0,     4,   568,     5,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,    15,    16,    17,    18,    19,    20,     0,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,    25,     0,
      26,    27,    28,    29,    30,     0,    31,    32,    33,    34,
      35,     0,    36,    37,     0,    38,    39,     0,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     1,    67,     2,     0,     3,     0,
       0,     4,     0,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,    15,    16,    17,
      18,    19,    20,     0,    21,    22,    23,    24,     0,     0,
       0,     0,     0,     0,    25,     0,    26,    27,    28,    29,
      30,     0,    31,    32,    33,    34,    35,     0,    36,    37,
       0,    38,    39,     0,    40,    41,    42,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,    65,    66,     4,
     157,    67,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,     0,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,    65,    66,     4,   283,    67,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,     0,     0,    37,     0,    38,    39,     0,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,    65,    66,     4,   341,    67,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,    16,    17,    18,    19,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,    34,
      35,     0,     0,    37,     0,    38,    39,     0,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     2,     0,
       3,    65,    66,     4,   453,    67,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,    34,    35,     0,
       0,    37,     0,    38,    39,     0,    40,    41,    42,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,     0,     0,     4,    65,
      66,     6,     7,    67,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,     0,     0,    37,     0,    38,    39,
       0,    40,    41,    42,    43,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     2,     0,
       3,     0,     0,     4,    65,    66,     6,     7,    67,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,    34,    35,     0,
       0,    37,     0,    38,    39,     0,    40,    41,    42,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,   177,    55,     2,    56,     3,
      58,     0,   130,     0,    60,     6,     0,     0,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,     0,     0,     1,     0,     2,     0,
       3,     0,     0,   130,    32,     0,     6,    35,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,    32,     0,     0,    35,    61,
      62,    63,    64,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     2,   129,     3,     0,     0,   130,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,    35,     0,     0,     0,     0,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,   131,    56,   132,    58,   133,   134,   135,
      60,     0,   136,     0,     0,     0,    61,    62,    63,    64,
       0,     0,   137,   138,   139,   140,   141,   142,   143,   144,
       0,     0,     0,     0,     0,    65,    66,   145,   146,    67,
       2,     0,     3,     0,     0,   130,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,   393,     0,   130,    32,     0,     6,
      35,     0,     0,     0,     0,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,    32,   154,
       0,    35,    61,    62,    63,    64,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     2,     0,     3,
     430,     0,   130,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,   451,
       3,     0,     0,   130,    32,     0,     6,    35,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,    32,     0,     0,    35,    61,
      62,    63,    64,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     2,   486,     3,     0,     0,   130,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,   513,     0,
     130,    32,     0,     6,    35,     0,     0,     0,     0,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,    32,     0,     0,    35,    61,    62,    63,    64,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     2,     0,     3,   586,     0,   130,     0,     0,     6,
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
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     2,     0,
       3,     0,     0,   130,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,    67,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,   218,     0,    32,     0,     0,    35,     0,
       0,     0,     0,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   295,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,   188,    35,     0,
      61,    62,    63,    64,    39,     0,    40,    41,    42,    43,
       0,     0,     2,     0,     3,     0,     0,   130,     0,    65,
      66,     0,     0,    67,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,   219,    20,     0,
      61,    62,    63,    64,    32,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    65,
      66,     0,    35,    67,     0,     0,     0,     0,    39,     0,
      40,    41,    42,    43,     0,   189,     0,    56,    57,    58,
      59,     0,   360,     0,     0,     0,     0,     0,     0,   357,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,   190,    61,    62,    63,    64,    65,    66,
     131,    56,   259,    58,   261,   134,   135,     0,     0,   136,
       0,     0,     0,    65,    66,     0,     0,    67,     0,   137,
     138,   139,   140,   141,   142,   143,   144,     0,     0,     0,
       0,     0,     0,     0,   145,   146
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,     4,    63,    25,    69,   287,    92,   248,
      19,    61,   197,   114,   116,   115,   269,   211,   117,   219,
     311,   101,   173,     5,   184,    34,   193,     4,   270,     5,
       6,     2,     3,    15,   125,   242,   331,    60,    61,   330,
      60,     4,   505,    14,     4,    16,    63,     5,    30,    31,
       3,    11,    38,     8,     5,   210,     6,   510,     5,     5,
      62,    63,     4,    61,    52,    53,     8,    76,    52,     4,
     361,   362,    43,     8,   365,     6,    52,    11,   101,    23,
     274,   101,    92,    27,    60,    83,    96,    83,     6,    23,
       6,   544,   247,    64,   422,    83,    78,    83,    94,    83,
       4,    52,     5,   566,   114,   122,    10,    83,    61,    60,
      61,    53,    63,    64,    65,   111,    93,    94,   120,    24,
       4,    26,     5,   105,   366,    83,    83,    11,   423,   130,
      93,    36,    83,    93,   425,   111,    83,    83,   323,    94,
       5,   118,   119,    93,   338,   345,   297,   314,   308,   158,
     357,   442,   243,   360,   111,   118,   119,     5,   118,   119,
     111,   241,    93,   222,   111,   456,   225,    93,   118,   119,
       5,   172,   500,     5,     6,    93,   504,    93,    84,   202,
      86,   231,   202,   154,     3,   244,    83,   118,   119,   480,
     481,    10,   118,   119,    83,    16,   246,    18,   478,   170,
     118,   119,   118,   119,    52,     3,   188,   266,   231,     5,
     410,     7,    60,    38,   111,   218,    83,   218,   241,   472,
      52,   241,   245,   246,     4,   245,     6,    83,    60,   288,
     469,    93,    94,    93,    94,    83,     3,   109,   110,   210,
     211,   264,   326,    10,   264,   525,   269,    83,    44,   269,
       0,    83,   532,   533,   534,     3,   118,   119,   118,   119,
     103,   232,    10,   111,   287,   108,   237,   290,     5,   292,
     290,     5,   292,   374,   376,   375,   247,    11,   377,   111,
       5,     3,     7,   284,   285,    10,   471,     3,    13,    85,
     313,    87,   102,   313,    10,   112,   267,    88,    89,    90,
     359,     8,     9,   274,   327,   113,    31,   327,   279,   111,
     333,    37,    38,    39,    40,   238,   239,   240,    52,   115,
       4,    95,     6,   294,     5,    91,    60,    52,    37,    38,
      55,    94,   416,   342,   614,    60,    61,    66,    63,    64,
      65,    66,     6,   346,   104,   105,   106,   107,     6,    83,
     321,    41,    42,     5,    94,    80,    81,     6,    83,     6,
      85,    86,    87,    88,    41,    42,    91,   338,   339,    92,
      93,    52,    97,    98,    99,   100,     5,   111,   381,    60,
     381,     3,     4,    10,    83,     3,    32,    83,    83,    41,
      83,   116,   117,    94,   115,   120,   405,     7,    83,   408,
      52,    44,    83,     5,    83,    94,   407,    83,    60,     5,
      83,   412,    67,     5,   101,    10,     3,    10,    83,     8,
       6,     4,     4,    83,    94,   448,    23,   115,    42,    10,
     111,    83,    94,    85,    86,    87,    88,     7,   409,    83,
      61,    31,   413,    83,     5,    97,    59,    83,   457,   472,
       6,     3,   472,   503,     8,   478,    94,    83,    83,   111,
      83,   432,     3,    43,   116,   117,     8,   526,     3,     3,
      10,    83,   556,     4,   475,   498,    83,   486,   498,     6,
     503,     6,     3,     5,    83,     5,     5,    15,   497,     7,
      94,     6,    24,    94,   517,    25,     4,   517,     8,   119,
     523,     4,   525,   523,    83,     6,   569,    24,    83,   532,
     533,   534,    11,     8,    83,     3,    94,    83,     3,    79,
       4,   580,     3,     6,     6,     3,     6,     6,   508,   326,
     562,   570,   517,   503,   448,   306,   417,   546,   547,   415,
     549,   542,   551,   556,   317,   554,   243,   171,   125,   550,
     241,   168,   576,   576,   436,   190,   576,   198,   468,   251,
     258,   263,   256,   249,   472,    -1,    -1,   538,   250,   252,
      -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,   257,
     581,   552,    -1,    -1,    -1,   260,    -1,    -1,   262,    -1,
      -1,   614,   595,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     0,     1,    -1,     3,    -1,     5,    -1,     7,   618,
     619,    10,    -1,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,
       1,   120,     3,    -1,     5,    -1,     7,    -1,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    -1,    57,    58,    -1,    60,
      61,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,     3,   120,
       5,    -1,     7,    -1,    -1,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    -1,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    97,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,     3,   120,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,   116,   117,    10,
      11,   120,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,   116,   117,    10,    11,   120,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    -1,
      63,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,   116,   117,    10,    11,   120,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    97,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
       7,   116,   117,    10,    11,   120,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    -1,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,    -1,    -1,    10,   116,
     117,    13,    14,   120,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
       7,    -1,    -1,    10,   116,   117,    13,    14,   120,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    -1,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,     3,    83,     5,    85,     7,
      87,    -1,    10,    -1,    91,    13,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,     3,    -1,     5,    -1,
       7,    -1,    -1,    10,    52,    -1,    13,    55,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    52,    -1,    -1,    55,    97,
      98,    99,   100,    60,    61,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,     5,     6,     7,    -1,    -1,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
      -1,    -1,    -1,    -1,    -1,   116,   117,   118,   119,   120,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,     8,    -1,    10,    52,    -1,    13,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    52,    94,
      -1,    55,    97,    98,    99,   100,    60,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,     5,    -1,     7,
       8,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
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
      97,    98,    99,   100,     5,     6,     7,    -1,    -1,    10,
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
     100,     5,    -1,     7,     8,    -1,    10,    -1,    -1,    13,
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
      87,    88,    -1,    -1,    91,    -1,    -1,     5,    55,    -1,
      97,    98,    99,   100,    61,    -1,    63,    64,    65,    66,
      -1,    -1,     5,    -1,     7,    -1,    -1,    10,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    94,    31,    -1,
      97,    98,    99,   100,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    55,   120,    -1,    -1,    -1,    -1,    61,    -1,
      63,    64,    65,    66,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,   111,    97,    98,    99,   100,   116,   117,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    93,
      -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119
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
      83,    80,    81,   191,   262,   157,   155,   156,    10,    94,
     165,   252,   266,   165,   252,   266,   191,     0,     1,   132,
     167,   208,     5,     3,   137,   138,     3,     4,    93,   118,
     119,    41,    97,   157,   214,   251,   208,    92,    96,   114,
     102,   112,   113,   111,   103,   108,   232,   233,   234,    86,
     235,    88,   236,    95,    91,   252,   266,     7,    44,   115,
     193,   195,   198,   259,    66,   192,     6,     6,   191,    94,
       8,     9,   267,    11,    94,     4,    11,     5,   201,   206,
      41,    42,   209,   191,   184,    83,   192,   190,    83,   111,
     264,    10,    83,     3,    32,   171,   173,    83,    41,   209,
     210,    83,    83,   208,   218,    94,   193,    44,    92,    93,
     221,     7,   195,   196,   199,   222,    83,     5,   202,   157,
      83,    94,    83,     5,    83,   191,   237,   262,    67,     5,
     258,    11,   146,    83,   264,   265,    10,   165,   165,   101,
     155,   191,     3,   191,   200,   200,   200,    97,   214,   201,
      56,   213,   259,     3,   165,   157,   155,   237,   238,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     157,    10,   165,   191,    83,   157,   255,   256,   257,   268,
     258,   262,     8,     8,   191,   192,   192,     6,   157,   158,
     159,     3,   165,   157,   157,     6,   191,     4,     6,   190,
       4,    83,    94,    23,   181,   182,    10,   172,   171,   115,
     203,   209,   203,    94,   141,   157,   193,    83,   143,   220,
       8,   191,     7,   195,   138,     6,   157,   162,   163,    31,
     148,   149,    83,   203,   143,   158,   160,   161,     5,    59,
     262,     6,   191,    11,    94,   264,    83,     6,   201,     3,
       3,   165,   201,   203,   203,   203,    83,   229,   258,    94,
     192,     8,     4,     8,     8,    94,    83,   230,     4,     6,
      83,    83,   167,     3,   192,   167,     6,   191,   264,   192,
     191,    11,   181,    83,   137,   177,   178,   175,    52,    53,
      83,   144,   145,    43,   140,   141,   143,     3,    10,   135,
     203,     3,     4,     8,     3,   230,   231,     4,     6,    83,
      83,     3,   203,    10,    10,     4,     6,   161,     6,   203,
     167,     3,     5,     5,     5,   229,   238,    11,     7,   195,
     256,   192,    94,   158,   203,   203,    15,     6,   167,     6,
      94,     6,    24,   180,    25,   119,     4,   176,   167,   157,
       8,   141,     4,     8,    53,   156,   141,   135,    11,   131,
     202,    83,   162,    83,   157,   226,   227,   169,   158,   165,
       6,    24,   152,   158,   158,   158,     8,   192,   202,   167,
     167,   167,   192,   167,   191,    94,   167,    83,   177,    11,
      83,   144,     8,   135,    11,   149,     3,    83,    11,   226,
      79,   165,   192,     3,     4,     6,     6,     3,     6,   146,
       6,     3,   158,   167,     6
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
     191,   192,   192,   192,   192,   193,   193,   194,   194,   194,
     194,   194,   195,   195,   195,   196,   196,   196,   197,   197,
     198,   198,   198,   199,   199,   200,   200,   200,   201,   201,
     202,   202,   203,   203,   203,   203,   204,   205,   205,   206,
     206,   207,   207,   208,   208,   208,   208,   209,   209,   210,
     210,   211,   211,   211,   211,   212,   213,   213,   213,   213,
     213,   214,   214,   214,   214,   215,   215,   216,   216,   216,
     217,   217,   217,   217,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   221,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   227,   227,   228,   229,   230,   231,
     231,   232,   232,   233,   233,   233,   233,   234,   234,   235,
     235,   236,   236,   236,   237,   237,   238,   238,   238,   239,
     239,   240,   240,   241,   241,   242,   242,   243,   243,   244,
     244,   245,   245,   246,   246,   247,   247,   248,   248,   249,
     249,   250,   250,   251,   251,   251,   251,   251,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   253,
     253,   254,   254,   255,   256,   256,   257,   257,   258,   258,
     259,   259,   260,   261,   261,   261,   261,   261,   261,   262,
     262,   262,   263,   263,   264,   264,   265,   265,   266,   266,
     267,   267,   268,   268,   268,   268,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269
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
       3,     1,     3,     3,     3,     3,     0,     1,     1,     1,
       1,     1,     3,     4,     5,     2,     3,     2,     3,     5,
       5,     4,     4,     1,     1,     1,     4,     5,     3,     2,
       3,     2,     3,     4,     3,     0,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     0,     2,
       1,     4,     4,     7,     6,     8,     1,     1,     1,     1,
       1,     8,     6,     6,     3,     1,     2,     3,     3,     4,
       1,     1,     1,     4,     4,     5,     1,     7,     2,     3,
       1,     3,     1,     1,     0,     2,     1,     2,     1,     1,
       1,     1,     2,     3,     1,     2,     7,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     5,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     3,     2,     2,     2,     3,     3,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     1,     3,     1,     2,     2,     3,     2,     1,     1,
       2,     3,     2,     3,     1,     2,     1,     2,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     1,     3,     5,     3,     2,     2
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
#line 2606 "src/parser.c"
    break;

  case 3: /* ast: %empty  */
#line 205 "src/gwion.y"
           { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2612 "src/parser.c"
    break;

  case 4: /* section_list: section  */
#line 208 "src/gwion.y"
            { YYLIST_INI(Section, (yyval.ast), (yyvsp[0].section)); }
#line 2618 "src/parser.c"
    break;

  case 5: /* section_list: section_list section  */
#line 209 "src/gwion.y"
                                            { YYLIST_END(Section, (yyval.ast), (yyvsp[-1].ast), (yyvsp[0].section)); }
#line 2624 "src/parser.c"
    break;

  case 7: /* section: stmt_list  */
#line 213 "src/gwion.y"
                                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list), (yylsp[0])); }
#line 2630 "src/parser.c"
    break;

  case 8: /* section: func_def  */
#line 214 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def), (yylsp[0]));  }
#line 2636 "src/parser.c"
    break;

  case 9: /* section: class_def  */
#line 215 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def), (yylsp[0])); }
#line 2642 "src/parser.c"
    break;

  case 10: /* section: trait_def  */
#line 216 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def), (yylsp[0])); }
#line 2648 "src/parser.c"
    break;

  case 11: /* section: extend_def  */
#line 217 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def), (yylsp[0])); }
#line 2654 "src/parser.c"
    break;

  case 12: /* section: enum_def  */
#line 218 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def), (yylsp[0])); }
#line 2660 "src/parser.c"
    break;

  case 13: /* section: union_def  */
#line 219 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def), (yylsp[0])); }
#line 2666 "src/parser.c"
    break;

  case 14: /* section: fptr_def  */
#line 220 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def), (yylsp[0])); }
#line 2672 "src/parser.c"
    break;

  case 15: /* section: type_def  */
#line 221 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def), (yylsp[0])); }
#line 2678 "src/parser.c"
    break;

  case 16: /* section: prim_def  */
#line 222 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def), (yylsp[0])); }
#line 2684 "src/parser.c"
    break;

  case 17: /* class_flag: flag modifier  */
#line 225 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2690 "src/parser.c"
    break;

  case 18: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits class_body  */
#line 228 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-5].flag), MK_TAG((yyvsp[-4].sym), (yylsp[-4])), (yyvsp[-2].type_decl), (yyvsp[0].ast));
      if((yyvsp[-3].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2701 "src/parser.c"
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
#line 2713 "src/parser.c"
    break;

  case 20: /* class_body: "{" section_list "}"  */
#line 243 "src/gwion.y"
                                   { (yyval.ast) = (yyvsp[-1].ast); }
#line 2719 "src/parser.c"
    break;

  case 21: /* class_body: "{" "}"  */
#line 243 "src/gwion.y"
                                                          { (yyval.ast) = NULL; }
#line 2725 "src/parser.c"
    break;

  case 22: /* class_body: ";"  */
#line 243 "src/gwion.y"
                                                                               { (yyval.ast) = NULL; }
#line 2731 "src/parser.c"
    break;

  case 23: /* trait_def: "trait" opt_global "<identifier>" traits class_body  */
#line 246 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2740 "src/parser.c"
    break;

  case 24: /* number: INTEGER  */
#line 251 "src/gwion.y"
                {
  if((yyvsp[0].yyint).num < 0 || (yyvsp[0].yyint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type);
}
#line 2751 "src/parser.c"
    break;

  case 25: /* decimal: number  */
#line 258 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2762 "src/parser.c"
    break;

  case 26: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 266 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2770 "src/parser.c"
    break;

  case 27: /* class_ext: "extends" type_decl_exp  */
#line 269 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2776 "src/parser.c"
    break;

  case 28: /* class_ext: %empty  */
#line 269 "src/gwion.y"
                                                          { (yyval.type_decl) = NULL; }
#line 2782 "src/parser.c"
    break;

  case 29: /* traits: %empty  */
#line 270 "src/gwion.y"
               { (yyval.id_list) = NULL; }
#line 2788 "src/parser.c"
    break;

  case 30: /* traits: ":" id_list  */
#line 270 "src/gwion.y"
                                            { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2794 "src/parser.c"
    break;

  case 31: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 272 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2802 "src/parser.c"
    break;

  case 32: /* id_list: "<identifier>"  */
#line 277 "src/gwion.y"
                 { YYLIST_INI(Symbol, (yyval.id_list), (yyvsp[0].sym)); }
#line 2808 "src/parser.c"
    break;

  case 33: /* id_list: id_list "," "<identifier>"  */
#line 278 "src/gwion.y"
                 { YYLIST_END(Symbol, (yyval.id_list), (yyvsp[-2].id_list), (yyvsp[0].sym)); }
#line 2814 "src/parser.c"
    break;

  case 34: /* specialized: "<identifier>" traits  */
#line 280 "src/gwion.y"
                       {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1])),
        .traits = (yyvsp[0].id_list),
      };
  }
#line 2825 "src/parser.c"
    break;

  case 35: /* specialized: "const" type_decl_empty "<identifier>"  */
#line 286 "src/gwion.y"
                               {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])),
        .td = (yyvsp[-1].type_decl),
      };
  }
#line 2836 "src/parser.c"
    break;

  case 36: /* specialized_list: specialized  */
#line 293 "src/gwion.y"
                              { YYLIST_INI(Specialized, (yyval.specialized_list), (yyvsp[0].specialized)); }
#line 2842 "src/parser.c"
    break;

  case 37: /* specialized_list: specialized_list "," specialized  */
#line 294 "src/gwion.y"
                                     { YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), (yyvsp[0].specialized)); }
#line 2848 "src/parser.c"
    break;

  case 38: /* stmt_list: stmt  */
#line 296 "src/gwion.y"
                                   { YYLIST_INI(Stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 2854 "src/parser.c"
    break;

  case 39: /* stmt_list: stmt_list stmt  */
#line 297 "src/gwion.y"
                                   { YYLIST_END(Stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 2860 "src/parser.c"
    break;

  case 40: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 299 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2867 "src/parser.c"
    break;

  case 41: /* _func_effects: "perform" "<identifier>"  */
#line 302 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2873 "src/parser.c"
    break;

  case 42: /* _func_effects: _func_effects "<identifier>"  */
#line 302 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2879 "src/parser.c"
    break;

  case 43: /* func_effects: %empty  */
#line 303 "src/gwion.y"
                     { (yyval.vector).ptr = NULL; }
#line 2885 "src/parser.c"
    break;

  case 44: /* func_effects: _func_effects  */
#line 303 "src/gwion.y"
                                                        { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2891 "src/parser.c"
    break;

  case 45: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 305 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2898 "src/parser.c"
    break;

  case 46: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 308 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2908 "src/parser.c"
    break;

  case 47: /* typedef_when: %empty  */
#line 314 "src/gwion.y"
                     { (yyval.exp) = NULL;}
#line 2914 "src/parser.c"
    break;

  case 48: /* typedef_when: "when" binary_exp  */
#line 314 "src/gwion.y"
                                                       { (yyval.exp) = (yyvsp[0].exp); }
#line 2920 "src/parser.c"
    break;

  case 49: /* type_def_type: "typedef"  */
#line 315 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2926 "src/parser.c"
    break;

  case 50: /* type_def_type: "distinct"  */
#line 315 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2932 "src/parser.c"
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
#line 2945 "src/parser.c"
    break;

  case 52: /* type_decl_array: type_decl array  */
#line 325 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2951 "src/parser.c"
    break;

  case 54: /* type_decl_exp: type_decl_array  */
#line 327 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2959 "src/parser.c"
    break;

  case 55: /* type_decl_empty: type_decl_array  */
#line 331 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2967 "src/parser.c"
    break;

  case 56: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 336 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .var = MK_VAR((yyvsp[-3].type_decl), (yyvsp[-2].var_decl)), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2976 "src/parser.c"
    break;

  case 57: /* arg: type_decl_empty arg_decl  */
#line 340 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) };
    (yyval.default_args).flag = fbflag_none;
  }
#line 2985 "src/parser.c"
    break;

  case 58: /* arg_list: arg  */
#line 345 "src/gwion.y"
         {
       YYLIST_INI(Arg, (yyval.default_args).args, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2994 "src/parser.c"
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
#line 3006 "src/parser.c"
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
#line 3023 "src/parser.c"
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
#line 3035 "src/parser.c"
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
#line 3050 "src/parser.c"
    break;

  case 64: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 390 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) }; }
#line 3056 "src/parser.c"
    break;

  case 65: /* fptr_list: fptr_arg  */
#line 392 "src/gwion.y"
                         { YYLIST_INI(Arg, (yyval.arg_list), (yyvsp[0].arg)); }
#line 3062 "src/parser.c"
    break;

  case 66: /* fptr_list: fptr_list "," fptr_arg  */
#line 393 "src/gwion.y"
                         { YYLIST_END(Arg, (yyval.arg_list), (yyvsp[-2].arg_list), (yyvsp[0].arg)); }
#line 3068 "src/parser.c"
    break;

  case 67: /* code_stmt: "{" "}"  */
#line 396 "src/gwion.y"
            {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc)); }
#line 3075 "src/parser.c"
    break;

  case 68: /* code_stmt: "{" stmt_list "}"  */
#line 398 "src/gwion.y"
                      {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc), .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) });}
#line 3082 "src/parser.c"
    break;

  case 69: /* code_list: "{" "}"  */
#line 402 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), Stmt, 0); }
#line 3088 "src/parser.c"
    break;

  case 70: /* code_list: "{" stmt_list "}"  */
#line 403 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3094 "src/parser.c"
    break;

  case 71: /* stmt_pp: "<comment>"  */
#line 406 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyloc), .data = (yyvsp[0].sval)); }
#line 3100 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#include"  */
#line 407 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyloc), .data = (yyvsp[0].sval)); }
#line 3106 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#define"  */
#line 408 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3112 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#pragma"  */
#line 409 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3118 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#undef"  */
#line 410 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3124 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#ifdef"  */
#line 411 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3130 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#ifndef"  */
#line 412 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3136 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#else"  */
#line 413 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyloc), .data = (yyvsp[0].sval)); }
#line 3142 "src/parser.c"
    break;

  case 79: /* stmt_pp: "#if"  */
#line 414 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3148 "src/parser.c"
    break;

  case 80: /* stmt_pp: "\n"  */
#line 415 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl, (yyloc), .data = (yyvsp[0].sval)); }
#line 3154 "src/parser.c"
    break;

  case 81: /* stmt_pp: "import"  */
#line 416 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyloc), .data = (yyvsp[0].sval)); }
#line 3160 "src/parser.c"
    break;

  case 82: /* stmt_pp: LOCALE_INI "<identifier>" opt_exp LOCALE_END  */
#line 418 "src/gwion.y"
    { (yyval.stmt) = MK_STMT_PP(locale, (yyloc), .xid = (yyvsp[-2].sym), .exp = (yyvsp[-1].exp)); }
#line 3166 "src/parser.c"
    break;

  case 94: /* $@1: %empty  */
#line 435 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3172 "src/parser.c"
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
#line 3185 "src/parser.c"
    break;

  case 96: /* retry_stmt: "retry" ";"  */
#line 444 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = MK_STMT(ae_stmt_retry, (yylsp[-1]));}
#line 3194 "src/parser.c"
    break;

  case 97: /* $@2: %empty  */
#line 449 "src/gwion.y"
                  { arg->handling = true; }
#line 3200 "src/parser.c"
    break;

  case 98: /* handler: "handle" $@2 opt_id stmt  */
#line 449 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .tag = MK_TAG((yyvsp[-1].sym), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }; arg->handling = false; }
#line 3206 "src/parser.c"
    break;

  case 99: /* handler_list: handler  */
#line 450 "src/gwion.y"
                      {
    YYLIST_INI(Handler, (yyval.handler_list).handlers, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).tag.sym;
  }
#line 3215 "src/parser.c"
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
#line 3236 "src/parser.c"
    break;

  case 101: /* try_stmt: "try" stmt handler_list  */
#line 470 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_try, (yylsp[-2]),
   .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers});}
#line 3243 "src/parser.c"
    break;

  case 103: /* opt_id: %empty  */
#line 473 "src/gwion.y"
                    { (yyval.sym) = NULL; }
#line 3249 "src/parser.c"
    break;

  case 105: /* opt_comma: %empty  */
#line 474 "src/gwion.y"
                        {}
#line 3255 "src/parser.c"
    break;

  case 106: /* enum_value: "<identifier>"  */
#line 477 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }; }
#line 3261 "src/parser.c"
    break;

  case 107: /* enum_value: number "<dynamic_operator>" "<identifier>"  */
#line 478 "src/gwion.y"
                                           { 
            if (strcmp(s_name((yyvsp[-1].sym)), ":=>")) {
              parser_error(&(yylsp[-2]), arg, "enum value must be set with :=>", 0x0240); YYERROR;
          }
            (yyval.enum_value) = (EnumValue) {.tag = MK_TAG((yyvsp[0].sym), (yylsp[0])), .gwint = (yyvsp[-2].gwint), .set = true };
          }
#line 3272 "src/parser.c"
    break;

  case 108: /* enum_list: enum_value  */
#line 485 "src/gwion.y"
                            { YYLIST_INI(EnumValue, (yyval.enum_list), (yyvsp[0].enum_value)); }
#line 3278 "src/parser.c"
    break;

  case 109: /* enum_list: enum_list "," enum_value  */
#line 486 "src/gwion.y"
                            { YYLIST_END(EnumValue, (yyval.enum_list), (yyvsp[-2].enum_list), (yyvsp[0].enum_value)) ;}
#line 3284 "src/parser.c"
    break;

  case 110: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 489 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3293 "src/parser.c"
    break;

  case 111: /* when_exp: "when" exp  */
#line 494 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3299 "src/parser.c"
    break;

  case 112: /* when_exp: %empty  */
#line 494 "src/gwion.y"
                                           { (yyval.exp) = NULL; }
#line 3305 "src/parser.c"
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
#line 3318 "src/parser.c"
    break;

  case 114: /* match_list: match_case_stmt  */
#line 506 "src/gwion.y"
                            { YYLIST_INI(Stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 3324 "src/parser.c"
    break;

  case 115: /* match_list: match_list match_case_stmt  */
#line 507 "src/gwion.y"
                             { YYLIST_END(Stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 3330 "src/parser.c"
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
#line 3343 "src/parser.c"
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
#line 3355 "src/parser.c"
    break;

  case 118: /* flow: "while"  */
#line 527 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3361 "src/parser.c"
    break;

  case 119: /* flow: "until"  */
#line 528 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3367 "src/parser.c"
    break;

  case 120: /* loop_stmt: flow "(" exp ")" stmt  */
#line 533 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-4].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3378 "src/parser.c"
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
#line 3390 "src/parser.c"
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
#line 3402 "src/parser.c"
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
#line 3415 "src/parser.c"
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
#line 3428 "src/parser.c"
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
#line 3442 "src/parser.c"
    break;

  case 126: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 584 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-4]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
  }
#line 3453 "src/parser.c"
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
#line 3465 "src/parser.c"
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
#line 3480 "src/parser.c"
    break;

  case 129: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 612 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-4]),
      .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3491 "src/parser.c"
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
#line 3503 "src/parser.c"
    break;

  case 131: /* breaks: "break"  */
#line 627 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3509 "src/parser.c"
    break;

  case 132: /* breaks: "continue"  */
#line 627 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3515 "src/parser.c"
    break;

  case 133: /* jump_stmt: "return" exp ";"  */
#line 629 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-2]), (yyvsp[-1].exp)); }
#line 3521 "src/parser.c"
    break;

  case 134: /* jump_stmt: "return" ";"  */
#line 630 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-1]), NULL); }
#line 3527 "src/parser.c"
    break;

  case 135: /* jump_stmt: breaks decimal ";"  */
#line 631 "src/gwion.y"
                         { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-2]), .stmt_index = { .idx = (yyvsp[-1].gwint).num });}
#line 3533 "src/parser.c"
    break;

  case 136: /* jump_stmt: breaks ";"  */
#line 632 "src/gwion.y"
               { (yyval.stmt) = MK_STMT((yyvsp[-1].stmt_t), (yylsp[-1]), .stmt_index = { .idx = -1 });}
#line 3539 "src/parser.c"
    break;

  case 137: /* exp_stmt: exp ";"  */
#line 635 "src/gwion.y"
            { (yyval.stmt) = MK_STMT_EXP((yylsp[-1]), (yyvsp[-1].exp)); }
#line 3545 "src/parser.c"
    break;

  case 138: /* exp_stmt: ";"  */
#line 636 "src/gwion.y"
            { (yyval.stmt) = MK_STMT(ae_stmt_exp, (yylsp[0])); }
#line 3551 "src/parser.c"
    break;

  case 139: /* exp: binary_exp  */
#line 639 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3557 "src/parser.c"
    break;

  case 140: /* exp: binary_exp "," exp  */
#line 641 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3569 "src/parser.c"
    break;

  case 142: /* binary_exp: binary_exp "@" decl_exp  */
#line 651 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3575 "src/parser.c"
    break;

  case 143: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 652 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3581 "src/parser.c"
    break;

  case 144: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 653 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3587 "src/parser.c"
    break;

  case 145: /* call_template: ":[" tmplarg_list "]"  */
#line 655 "src/gwion.y"
                                     { (yyval.tmplarg_list) = (yyvsp[-1].tmplarg_list); }
#line 3593 "src/parser.c"
    break;

  case 146: /* call_template: %empty  */
#line 655 "src/gwion.y"
                                                           { (yyval.tmplarg_list) = NULL; }
#line 3599 "src/parser.c"
    break;

  case 152: /* array_exp: "[" exp "]"  */
#line 660 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3605 "src/parser.c"
    break;

  case 153: /* array_exp: "[" exp "]" array_exp  */
#line 661 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3613 "src/parser.c"
    break;

  case 154: /* array_exp: "[" exp "]" "[" "]"  */
#line 664 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3619 "src/parser.c"
    break;

  case 155: /* array_empty: "[" "]"  */
#line 668 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3625 "src/parser.c"
    break;

  case 156: /* array_empty: array_empty "[" "]"  */
#line 669 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3631 "src/parser.c"
    break;

  case 157: /* array_empty: array_empty array_exp  */
#line 670 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3637 "src/parser.c"
    break;

  case 158: /* dict_list: binary_exp ":" binary_exp  */
#line 674 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3643 "src/parser.c"
    break;

  case 159: /* dict_list: dict_list "," binary_exp ":" binary_exp  */
#line 675 "src/gwion.y"
                                            { (yyvsp[-4].exp)->next->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3649 "src/parser.c"
    break;

  case 160: /* range: "[" exp ":" exp "]"  */
#line 678 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3655 "src/parser.c"
    break;

  case 161: /* range: "[" exp ":" "]"  */
#line 679 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3661 "src/parser.c"
    break;

  case 162: /* range: "[" ":" exp "]"  */
#line 680 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3667 "src/parser.c"
    break;

  case 166: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 686 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3673 "src/parser.c"
    break;

  case 167: /* decl_exp: type_decl_flag2 flag type_decl_array call_paren var_decl  */
#line 687 "src/gwion.y"
                                                             {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-2].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-4].flag) | (yyvsp[-3].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1]));
  }
#line 3683 "src/parser.c"
    break;

  case 168: /* func_args: "(" arg_list ")"  */
#line 693 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3689 "src/parser.c"
    break;

  case 169: /* func_args: "(" ")"  */
#line 693 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3695 "src/parser.c"
    break;

  case 170: /* fptr_args: "(" fptr_list ")"  */
#line 694 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3701 "src/parser.c"
    break;

  case 171: /* fptr_args: "(" ")"  */
#line 694 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3707 "src/parser.c"
    break;

  case 172: /* decl_template: ":[" specialized_list "]"  */
#line 697 "src/gwion.y"
                            { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3713 "src/parser.c"
    break;

  case 173: /* decl_template: ":[" specialized_list "..." "]"  */
#line 698 "src/gwion.y"
                                              {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), spec);
}
#line 3722 "src/parser.c"
    break;

  case 174: /* decl_template: ":[" "..." "]"  */
#line 702 "src/gwion.y"
                                {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_INI(Specialized, (yyval.specialized_list), spec);
}
#line 3731 "src/parser.c"
    break;

  case 175: /* decl_template: %empty  */
#line 706 "src/gwion.y"
                      { (yyval.specialized_list) = NULL; }
#line 3737 "src/parser.c"
    break;

  case 176: /* global: "global"  */
#line 708 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3743 "src/parser.c"
    break;

  case 178: /* opt_global: %empty  */
#line 709 "src/gwion.y"
                            { (yyval.flag) = ae_flag_none; }
#line 3749 "src/parser.c"
    break;

  case 179: /* storage_flag: "static"  */
#line 711 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3755 "src/parser.c"
    break;

  case 181: /* access_flag: "private"  */
#line 713 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3761 "src/parser.c"
    break;

  case 182: /* access_flag: "protect"  */
#line 714 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3767 "src/parser.c"
    break;

  case 183: /* flag: access_flag  */
#line 717 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3773 "src/parser.c"
    break;

  case 184: /* flag: storage_flag  */
#line 718 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3779 "src/parser.c"
    break;

  case 185: /* flag: access_flag storage_flag  */
#line 719 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3785 "src/parser.c"
    break;

  case 186: /* flag: %empty  */
#line 720 "src/gwion.y"
           { (yyval.flag) = ae_flag_none; }
#line 3791 "src/parser.c"
    break;

  case 187: /* final: "final"  */
#line 723 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3797 "src/parser.c"
    break;

  case 188: /* final: %empty  */
#line 723 "src/gwion.y"
                                                { (yyval.flag) = ae_flag_none; }
#line 3803 "src/parser.c"
    break;

  case 189: /* modifier: "abstract" final  */
#line 725 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3809 "src/parser.c"
    break;

  case 191: /* func_def_base: "fun" func_base func_args code_list  */
#line 728 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3819 "src/parser.c"
    break;

  case 192: /* func_def_base: "fun" func_base func_args ";"  */
#line 733 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3831 "src/parser.c"
    break;

  case 193: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 740 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
   (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3842 "src/parser.c"
    break;

  case 194: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 746 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3853 "src/parser.c"
    break;

  case 195: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 755 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3865 "src/parser.c"
    break;

  case 201: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 766 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3879 "src/parser.c"
    break;

  case 202: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 776 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3892 "src/parser.c"
    break;

  case 203: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 785 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3906 "src/parser.c"
    break;

  case 204: /* op_base: type_decl_empty OPID_A func_args  */
#line 795 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3915 "src/parser.c"
    break;

  case 205: /* operator: "operator"  */
#line 800 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3921 "src/parser.c"
    break;

  case 206: /* operator: "operator" global  */
#line 800 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3927 "src/parser.c"
    break;

  case 207: /* op_def: operator op_base code_list  */
#line 803 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3933 "src/parser.c"
    break;

  case 208: /* op_def: operator op_base ";"  */
#line 805 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3939 "src/parser.c"
    break;

  case 209: /* op_def: operator "abstract" op_base ";"  */
#line 807 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3945 "src/parser.c"
    break;

  case 213: /* func_def: operator "new" func_args code_list  */
#line 811 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 3955 "src/parser.c"
    break;

  case 214: /* func_def: operator "new" func_args ";"  */
#line 817 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3966 "src/parser.c"
    break;

  case 215: /* func_def: operator "abstract" "new" func_args ";"  */
#line 824 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 3977 "src/parser.c"
    break;

  case 216: /* type_decl_base: "<identifier>"  */
#line 832 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3983 "src/parser.c"
    break;

  case 217: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 833 "src/gwion.y"
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
#line 3999 "src/parser.c"
    break;

  case 218: /* type_decl_tmpl: type_decl_base call_template  */
#line 847 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 4005 "src/parser.c"
    break;

  case 219: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 848 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 4011 "src/parser.c"
    break;

  case 221: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 853 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4017 "src/parser.c"
    break;

  case 222: /* option: "?"  */
#line 856 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4023 "src/parser.c"
    break;

  case 223: /* option: OPTIONS  */
#line 856 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4029 "src/parser.c"
    break;

  case 224: /* option: %empty  */
#line 856 "src/gwion.y"
                                                                        { (yyval.uval) = 0; }
#line 4035 "src/parser.c"
    break;

  case 225: /* type_decl_opt: type_decl_noflag option  */
#line 857 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4041 "src/parser.c"
    break;

  case 227: /* type_decl: type_decl_flag type_decl_opt  */
#line 858 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4047 "src/parser.c"
    break;

  case 228: /* type_decl_flag: "late"  */
#line 861 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4053 "src/parser.c"
    break;

  case 229: /* type_decl_flag: "const"  */
#line 862 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4059 "src/parser.c"
    break;

  case 230: /* type_decl_flag2: "var"  */
#line 864 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4065 "src/parser.c"
    break;

  case 232: /* variable: "<identifier>" ";"  */
#line 867 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.variable) = MK_VAR(td, (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});
}
#line 4074 "src/parser.c"
    break;

  case 233: /* variable: type_decl_empty "<identifier>" ";"  */
#line 871 "src/gwion.y"
                         { (yyval.variable) = MK_VAR((yyvsp[-2].type_decl), (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});}
#line 4080 "src/parser.c"
    break;

  case 234: /* variable_list: variable  */
#line 873 "src/gwion.y"
                         { YYLIST_INI(Variable, (yyval.variable_list), (yyvsp[0].variable)); }
#line 4086 "src/parser.c"
    break;

  case 235: /* variable_list: variable_list variable  */
#line 874 "src/gwion.y"
                         { YYLIST_END(Variable, (yyval.variable_list), (yyvsp[-1].variable_list), (yyvsp[0].variable)); }
#line 4092 "src/parser.c"
    break;

  case 236: /* union_def: "union" flag "<identifier>" decl_template "{" variable_list "}"  */
#line 877 "src/gwion.y"
                                                        {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].variable_list), (yylsp[-4]));
      (yyval.union_def)->tag.sym = (yyvsp[-4].sym); // put tag in ctor
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4104 "src/parser.c"
    break;

  case 237: /* var_decl: "<identifier>"  */
#line 886 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4110 "src/parser.c"
    break;

  case 238: /* arg_decl: "<identifier>"  */
#line 888 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4116 "src/parser.c"
    break;

  case 240: /* fptr_arg_decl: %empty  */
#line 889 "src/gwion.y"
                                 { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4122 "src/parser.c"
    break;

  case 254: /* opt_exp: exp  */
#line 897 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4128 "src/parser.c"
    break;

  case 255: /* opt_exp: %empty  */
#line 897 "src/gwion.y"
                                   { (yyval.exp) = NULL; }
#line 4134 "src/parser.c"
    break;

  case 257: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 900 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4140 "src/parser.c"
    break;

  case 258: /* con_exp: log_or_exp "?:" con_exp  */
#line 902 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4146 "src/parser.c"
    break;

  case 260: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 904 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4152 "src/parser.c"
    break;

  case 262: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 905 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4158 "src/parser.c"
    break;

  case 264: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 906 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4164 "src/parser.c"
    break;

  case 266: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 907 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4170 "src/parser.c"
    break;

  case 268: /* and_exp: and_exp "&" eq_exp  */
#line 908 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4176 "src/parser.c"
    break;

  case 270: /* eq_exp: eq_exp eq_op rel_exp  */
#line 909 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4182 "src/parser.c"
    break;

  case 272: /* rel_exp: rel_exp rel_op shift_exp  */
#line 910 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4188 "src/parser.c"
    break;

  case 274: /* shift_exp: shift_exp shift_op add_exp  */
#line 911 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4194 "src/parser.c"
    break;

  case 276: /* add_exp: add_exp add_op mul_exp  */
#line 912 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4200 "src/parser.c"
    break;

  case 278: /* mul_exp: mul_exp mul_op dur_exp  */
#line 913 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4206 "src/parser.c"
    break;

  case 280: /* dur_exp: dur_exp "::" cast_exp  */
#line 914 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4212 "src/parser.c"
    break;

  case 282: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 917 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4218 "src/parser.c"
    break;

  case 289: /* unary_exp: unary_op unary_exp  */
#line 924 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4224 "src/parser.c"
    break;

  case 290: /* unary_exp: "spork" unary_exp  */
#line 925 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4230 "src/parser.c"
    break;

  case 291: /* unary_exp: "fork" unary_exp  */
#line 926 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4236 "src/parser.c"
    break;

  case 292: /* unary_exp: "new" type_decl_exp call_paren  */
#line 927 "src/gwion.y"
                                   {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].type_decl), (yyvsp[0].exp) ?: new_prim_nil(mpool(arg), (yylsp[0])), (yyloc));
  }
#line 4244 "src/parser.c"
    break;

  case 293: /* unary_exp: "new" type_decl_exp  */
#line 930 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4250 "src/parser.c"
    break;

  case 294: /* unary_exp: "spork" code_list  */
#line 931 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4256 "src/parser.c"
    break;

  case 295: /* unary_exp: "fork" code_list  */
#line 932 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4262 "src/parser.c"
    break;

  case 296: /* unary_exp: "spork" captures code_list  */
#line 933 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4268 "src/parser.c"
    break;

  case 297: /* unary_exp: "fork" captures code_list  */
#line 934 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4274 "src/parser.c"
    break;

  case 298: /* unary_exp: "$" type_decl_empty  */
#line 935 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4280 "src/parser.c"
    break;

  case 299: /* lambda_list: "<identifier>"  */
#line 938 "src/gwion.y"
    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){.tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_INI(Arg, (yyval.arg_list), a); }
#line 4288 "src/parser.c"
    break;

  case 300: /* lambda_list: lambda_list "<identifier>"  */
#line 941 "src/gwion.y"
                    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){ .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_END(Arg, (yyval.arg_list), (yyvsp[-1].arg_list), a);
}
#line 4297 "src/parser.c"
    break;

  case 301: /* lambda_arg: "\\" lambda_list  */
#line 946 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4303 "src/parser.c"
    break;

  case 302: /* lambda_arg: "\\"  */
#line 946 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4309 "src/parser.c"
    break;

  case 304: /* tmplarg: type_decl_empty  */
#line 949 "src/gwion.y"
                         {
    (yyval.tmplarg) = (TmplArg) { .d = { .td = (yyvsp[0].type_decl)}, .type = tmplarg_td};
  }
#line 4317 "src/parser.c"
    break;

  case 305: /* tmplarg: tmplarg_exp  */
#line 952 "src/gwion.y"
                {
    (yyval.tmplarg) = (TmplArg) { .d = { .exp = (yyvsp[0].exp)}, .type = tmplarg_exp};
  }
#line 4325 "src/parser.c"
    break;

  case 306: /* tmplarg_list: tmplarg  */
#line 956 "src/gwion.y"
                           { YYLIST_INI(TmplArg, (yyval.tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4331 "src/parser.c"
    break;

  case 307: /* tmplarg_list: tmplarg_list "," tmplarg  */
#line 957 "src/gwion.y"
                           { YYLIST_END(TmplArg, (yyval.tmplarg_list), (yyvsp[-2].tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4337 "src/parser.c"
    break;

  case 308: /* call_paren: "(" exp ")"  */
#line 960 "src/gwion.y"
            { (yyval.exp) = (yyvsp[-1].exp); }
#line 4343 "src/parser.c"
    break;

  case 309: /* call_paren: "(" ")"  */
#line 961 "src/gwion.y"
        { (yyval.exp) = NULL; }
#line 4349 "src/parser.c"
    break;

  case 312: /* dot_exp: post_exp "." "<identifier>"  */
#line 965 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expressions"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4362 "src/parser.c"
    break;

  case 314: /* post_exp: post_exp array_exp  */
#line 976 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4368 "src/parser.c"
    break;

  case 315: /* post_exp: post_exp range  */
#line 978 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4374 "src/parser.c"
    break;

  case 316: /* post_exp: post_exp call_template call_paren  */
#line 980 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].tmplarg_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].tmplarg_list)); }
#line 4381 "src/parser.c"
    break;

  case 317: /* post_exp: post_exp post_op  */
#line 983 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4387 "src/parser.c"
    break;

  case 318: /* post_exp: dot_exp  */
#line 984 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4393 "src/parser.c"
    break;

  case 319: /* interp_exp: "<interp string end>"  */
#line 988 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4399 "src/parser.c"
    break;

  case 320: /* interp_exp: "<interp string lit>" interp_exp  */
#line 989 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4405 "src/parser.c"
    break;

  case 321: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 990 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4411 "src/parser.c"
    break;

  case 322: /* interp: "${" interp_exp  */
#line 992 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4417 "src/parser.c"
    break;

  case 323: /* interp: interp "${" interp_exp  */
#line 993 "src/gwion.y"
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
#line 4432 "src/parser.c"
    break;

  case 324: /* capture: "<identifier>"  */
#line 1004 "src/gwion.y"
            { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }};}
#line 4438 "src/parser.c"
    break;

  case 325: /* capture: "&" "<identifier>"  */
#line 1004 "src/gwion.y"
                                                                           { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }, .is_ref = true }; }
#line 4444 "src/parser.c"
    break;

  case 326: /* capture_list: capture  */
#line 1006 "src/gwion.y"
                       { YYLIST_INI(Capture, (yyval.captures), (yyvsp[0].capture)); }
#line 4450 "src/parser.c"
    break;

  case 327: /* capture_list: capture_list capture  */
#line 1007 "src/gwion.y"
                       { YYLIST_END(Capture, (yyval.captures), (yyvsp[-1].captures), (yyvsp[0].capture)); }
#line 4456 "src/parser.c"
    break;

  case 328: /* captures: ":" capture_list ":"  */
#line 1008 "src/gwion.y"
                               { (yyval.captures) = (yyvsp[-1].captures); }
#line 4462 "src/parser.c"
    break;

  case 329: /* captures: %empty  */
#line 1008 "src/gwion.y"
                                                      { (yyval.captures) = NULL; }
#line 4468 "src/parser.c"
    break;

  case 332: /* basic_exp: number  */
#line 1012 "src/gwion.y"
                         {
  (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc)); 
  (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4477 "src/parser.c"
    break;

  case 333: /* basic_exp: "<float>"  */
#line 1016 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4483 "src/parser.c"
    break;

  case 334: /* basic_exp: "<litteral string>"  */
#line 1017 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4489 "src/parser.c"
    break;

  case 335: /* basic_exp: "<litteral char>"  */
#line 1018 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4495 "src/parser.c"
    break;

  case 336: /* prim_exp: "<identifier>"  */
#line 1021 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4501 "src/parser.c"
    break;

  case 338: /* prim_exp: interp  */
#line 1023 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4507 "src/parser.c"
    break;

  case 339: /* prim_exp: "[" opt_exp array_lit_ed  */
#line 1024 "src/gwion.y"
                             { 
    if(!(yyvsp[-1].exp)) {
      parser_error(&(yylsp[-2]), arg, "must provide values/expressions for array [...]", 0);
      YYERROR;
    }
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4520 "src/parser.c"
    break;

  case 340: /* prim_exp: "{" dict_list "}"  */
#line 1032 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4526 "src/parser.c"
    break;

  case 341: /* prim_exp: range  */
#line 1033 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4532 "src/parser.c"
    break;

  case 342: /* prim_exp: "<<<" exp ">>>"  */
#line 1034 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4538 "src/parser.c"
    break;

  case 343: /* prim_exp: "(" exp ")"  */
#line 1035 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4544 "src/parser.c"
    break;

  case 344: /* prim_exp: "`foo`"  */
#line 1036 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last =  { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4555 "src/parser.c"
    break;

  case 345: /* prim_exp: lambda_arg captures code_list  */
#line 1042 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4561 "src/parser.c"
    break;

  case 346: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1043 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4567 "src/parser.c"
    break;

  case 347: /* prim_exp: "(" op_op ")"  */
#line 1044 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4573 "src/parser.c"
    break;

  case 348: /* prim_exp: "perform" opt_id  */
#line 1045 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4579 "src/parser.c"
    break;

  case 349: /* prim_exp: "(" ")"  */
#line 1046 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4585 "src/parser.c"
    break;


#line 4589 "src/parser.c"

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

#line 1048 "src/gwion.y"

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
