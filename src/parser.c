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
  YYSYMBOL_arg = 156,                      /* arg  */
  YYSYMBOL_arg_list = 157,                 /* arg_list  */
  YYSYMBOL_locale_arg = 158,               /* locale_arg  */
  YYSYMBOL_locale_list = 159,              /* locale_list  */
  YYSYMBOL_code_stmt = 160,                /* code_stmt  */
  YYSYMBOL_code_list = 161,                /* code_list  */
  YYSYMBOL_stmt_pp = 162,                  /* stmt_pp  */
  YYSYMBOL_stmt = 163,                     /* stmt  */
  YYSYMBOL_spread_stmt = 164,              /* spread_stmt  */
  YYSYMBOL_165_1 = 165,                    /* $@1  */
  YYSYMBOL_retry_stmt = 166,               /* retry_stmt  */
  YYSYMBOL_handler = 167,                  /* handler  */
  YYSYMBOL_handler_list = 168,             /* handler_list  */
  YYSYMBOL_try_stmt = 169,                 /* try_stmt  */
  YYSYMBOL_opt_id = 170,                   /* opt_id  */
  YYSYMBOL_opt_comma = 171,                /* opt_comma  */
  YYSYMBOL_enum_value = 172,               /* enum_value  */
  YYSYMBOL_enum_list = 173,                /* enum_list  */
  YYSYMBOL_enum_def = 174,                 /* enum_def  */
  YYSYMBOL_when_exp = 175,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 176,          /* match_case_stmt  */
  YYSYMBOL_match_list = 177,               /* match_list  */
  YYSYMBOL_match_stmt = 178,               /* match_stmt  */
  YYSYMBOL_flow = 179,                     /* flow  */
  YYSYMBOL_loop_stmt = 180,                /* loop_stmt  */
  YYSYMBOL_defer_stmt = 181,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 182,           /* selection_stmt  */
  YYSYMBOL_breaks = 183,                   /* breaks  */
  YYSYMBOL_jump_stmt = 184,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 185,                 /* exp_stmt  */
  YYSYMBOL_exp = 186,                      /* exp  */
  YYSYMBOL_binary_exp = 187,               /* binary_exp  */
  YYSYMBOL_call_template = 188,            /* call_template  */
  YYSYMBOL_op = 189,                       /* op  */
  YYSYMBOL_array_exp = 190,                /* array_exp  */
  YYSYMBOL_array_empty = 191,              /* array_empty  */
  YYSYMBOL_dict_list = 192,                /* dict_list  */
  YYSYMBOL_range = 193,                    /* range  */
  YYSYMBOL_array = 194,                    /* array  */
  YYSYMBOL_decl_exp = 195,                 /* decl_exp  */
  YYSYMBOL_func_args = 196,                /* func_args  */
  YYSYMBOL_decl_template = 197,            /* decl_template  */
  YYSYMBOL_global = 198,                   /* global  */
  YYSYMBOL_opt_global = 199,               /* opt_global  */
  YYSYMBOL_storage_flag = 200,             /* storage_flag  */
  YYSYMBOL_access_flag = 201,              /* access_flag  */
  YYSYMBOL_flag = 202,                     /* flag  */
  YYSYMBOL_final = 203,                    /* final  */
  YYSYMBOL_modifier = 204,                 /* modifier  */
  YYSYMBOL_func_def_base = 205,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 206,            /* abstract_fdef  */
  YYSYMBOL_op_op = 207,                    /* op_op  */
  YYSYMBOL_op_base = 208,                  /* op_base  */
  YYSYMBOL_operator = 209,                 /* operator  */
  YYSYMBOL_op_def = 210,                   /* op_def  */
  YYSYMBOL_func_def = 211,                 /* func_def  */
  YYSYMBOL_type_decl_base = 212,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 213,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 214,         /* type_decl_noflag  */
  YYSYMBOL_option = 215,                   /* option  */
  YYSYMBOL_type_decl_opt = 216,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 217,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 218,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 219,          /* type_decl_flag2  */
  YYSYMBOL_variable = 220,                 /* variable  */
  YYSYMBOL_variable_list = 221,            /* variable_list  */
  YYSYMBOL_union_def = 222,                /* union_def  */
  YYSYMBOL_var_decl = 223,                 /* var_decl  */
  YYSYMBOL_arg_decl = 224,                 /* arg_decl  */
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
  YYSYMBOL_tmplarg_exp = 248,              /* tmplarg_exp  */
  YYSYMBOL_tmplarg = 249,                  /* tmplarg  */
  YYSYMBOL_tmplarg_list = 250,             /* tmplarg_list  */
  YYSYMBOL_call_paren = 251,               /* call_paren  */
  YYSYMBOL_post_op = 252,                  /* post_op  */
  YYSYMBOL_dot_exp = 253,                  /* dot_exp  */
  YYSYMBOL_post_exp = 254,                 /* post_exp  */
  YYSYMBOL_interp_exp = 255,               /* interp_exp  */
  YYSYMBOL_interp = 256,                   /* interp  */
  YYSYMBOL_capture = 257,                  /* capture  */
  YYSYMBOL_capture_list = 258,             /* capture_list  */
  YYSYMBOL_captures = 259,                 /* captures  */
  YYSYMBOL_array_lit_ed = 260,             /* array_lit_ed  */
  YYSYMBOL_basic_exp = 261,                /* basic_exp  */
  YYSYMBOL_prim_exp = 262                  /* prim_exp  */
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
#define YYFINAL  225
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2773

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  340
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  611

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
       0,   203,   203,   204,   207,   208,   209,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   224,   226,   233,
     242,   242,   242,   244,   250,   257,   264,   268,   268,   269,
     269,   271,   276,   277,   279,   285,   292,   293,   295,   296,
     298,   301,   301,   302,   302,   304,   307,   313,   313,   314,
     314,   315,   324,   324,   327,   330,   334,   337,   343,   354,
     359,   359,   372,   374,   378,   379,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   411,
     411,   420,   422,   423,   427,   431,   434,   434,   435,   435,
     438,   439,   443,   444,   447,   452,   452,   455,   464,   465,
     467,   476,   485,   486,   490,   497,   505,   513,   522,   531,
     541,   548,   557,   569,   576,   585,   585,   587,   588,   589,
     590,   593,   594,   597,   598,   608,   609,   610,   611,   613,
     613,   615,   615,   615,   615,   615,   618,   619,   622,   626,
     627,   628,   632,   633,   636,   637,   638,   642,   642,   643,
     644,   645,   651,   651,   654,   655,   659,   663,   665,   666,
     666,   668,   668,   670,   671,   674,   675,   676,   677,   680,
     680,   682,   682,   685,   689,   694,   700,   708,   717,   717,
     717,   717,   717,   719,   727,   734,   742,   748,   748,   750,
     752,   754,   757,   757,   757,   758,   763,   768,   775,   776,
     790,   791,   795,   796,   799,   799,   799,   800,   801,   801,
     804,   805,   807,   807,   810,   814,   816,   817,   820,   829,
     831,   832,   836,   836,   837,   837,   837,   837,   838,   838,
     839,   839,   840,   840,   840,   842,   842,   843,   844,   846,
     849,   849,   850,   850,   851,   851,   852,   852,   853,   853,
     854,   854,   855,   855,   856,   856,   857,   857,   858,   858,
     859,   859,   861,   861,   864,   864,   864,   865,   865,   868,
     869,   870,   871,   872,   875,   876,   877,   878,   879,   880,
     883,   886,   891,   891,   893,   894,   897,   901,   902,   905,
     906,   908,   908,   910,   914,   915,   917,   919,   922,   924,
     928,   929,   930,   932,   933,   944,   944,   946,   947,   948,
     948,   949,   949,   952,   956,   957,   958,   961,   962,   963,
     964,   968,   969,   970,   971,   972,   978,   979,   980,   981,
     982
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
  "type_decl_array", "arg", "arg_list", "locale_arg", "locale_list",
  "code_stmt", "code_list", "stmt_pp", "stmt", "spread_stmt", "$@1",
  "retry_stmt", "handler", "handler_list", "try_stmt", "opt_id",
  "opt_comma", "enum_value", "enum_list", "enum_def", "when_exp",
  "match_case_stmt", "match_list", "match_stmt", "flow", "loop_stmt",
  "defer_stmt", "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp",
  "binary_exp", "call_template", "op", "array_exp", "array_empty",
  "dict_list", "range", "array", "decl_exp", "func_args", "decl_template",
  "global", "opt_global", "storage_flag", "access_flag", "flag", "final",
  "modifier", "func_def_base", "abstract_fdef", "op_op", "op_base",
  "operator", "op_def", "func_def", "type_decl_base", "type_decl_tmpl",
  "type_decl_noflag", "option", "type_decl_opt", "type_decl",
  "type_decl_flag", "type_decl_flag2", "variable", "variable_list",
  "union_def", "var_decl", "arg_decl", "eq_op", "rel_op", "shift_op",
  "add_op", "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
  "inc_or_exp", "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp",
  "add_exp", "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp",
  "lambda_list", "lambda_arg", "tmplarg_exp", "tmplarg", "tmplarg_list",
  "call_paren", "post_op", "dot_exp", "post_exp", "interp_exp", "interp",
  "capture", "capture_list", "captures", "array_lit_ed", "basic_exp",
  "prim_exp", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-447)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-243)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     937,  -447,  1795,  2048,  1045,   215,  -447,    75,  -447,  1474,
    -447,    83,   103,   136,  2500,   215,  1658,  -447,  -447,  1474,
       2,    69,   215,   215,   115,   231,   115,   215,  -447,  -447,
     215,   215,  -447,    82,  1474,   106,    38,   128,  -447,  -447,
    -447,  -447,  -447,  1911,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
     231,   231,   303,   303,  2500,  -447,  -447,  -447,   200,   587,
    -447,  -447,  -447,  -447,  -447,  -447,  1579,  -447,   215,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,   209,  -447,
    -447,  -447,    54,  -447,  -447,   223,    44,  -447,  -447,  -447,
    -447,   232,  -447,  -447,  -447,   215,  -447,  -447,    79,   156,
     149,   152,   163,   127,   221,    67,    32,   153,   176,   214,
    2636,  -447,   188,  -447,  -447,    25,   234,  -447,  -447,  -447,
    2500,  -447,   310,   315,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,   316,  -447,   317,
    -447,  -447,  -447,  -447,  2500,   237,   254,  -447,  1153,    20,
     177,  -447,  -447,  -447,  -447,   327,  -447,  -447,   250,   257,
    2500,   117,  2596,  1699,   -13,   323,   255,  -447,   334,   307,
    -447,  -447,  -447,   258,   262,   261,  -447,   263,   215,  -447,
      34,   251,   238,   312,   203,  -447,   340,    68,  -447,   271,
     327,   231,   274,   265,  -447,  -447,   277,   356,   279,  2500,
    1911,  -447,   296,  -447,  -447,   360,  1261,    -6,  -447,  -447,
     361,  -447,  -447,   361,   272,  -447,  -447,  -447,  -447,   231,
    2500,  -447,  -447,   369,  -447,  2500,  2500,  2500,  2500,   365,
     327,  2654,   191,   231,   231,  2500,  2636,  2636,  2636,  2636,
    2636,  2636,  -447,  -447,  2636,  2636,  2636,  -447,  2636,  -447,
    2636,  2636,   231,  -447,   364,  1952,   293,    59,   360,  -447,
     370,  -447,  -447,  -447,  1911,    73,  -447,  -447,   372,  2089,
    -447,  -447,  -447,  -447,  2500,  2500,  -447,   120,   192,  -447,
     231,  -447,   231,   375,  2500,   374,   376,  1699,   379,   301,
     291,   382,   377,  -447,     2,  -447,   307,   278,   350,  -447,
    -447,   278,   304,   231,   238,   324,  -447,    68,  -447,  -447,
    -447,  2185,  -447,  -447,   345,   378,   328,   278,   324,  -447,
     231,   390,  -447,   351,  -447,  1911,  2226,  -447,  -447,  1369,
    -447,  -447,   -12,  1261,  -447,  -447,  -447,   329,   407,  -447,
    -447,  -447,  -447,  -447,   327,   411,   194,   327,   278,   278,
    -447,  -447,   278,    49,   321,  -447,   156,   149,   152,   163,
     127,   221,    67,    32,   153,   176,   214,  -447,  1261,  -447,
    -447,    33,  -447,  -447,  -447,  -447,    55,  -447,  -447,  2322,
    -447,  -447,  -447,  -447,   408,   -25,    80,  -447,   338,  -447,
     253,  -447,  -447,   343,   346,  1474,   427,  2500,  1474,  2363,
      -6,  -447,  2500,  2500,  -447,    63,   348,  1474,  -447,    13,
     389,  -447,   304,   324,   212,   278,  -447,  -447,   308,  -447,
     425,   431,   352,   353,   434,   278,   428,    93,  -447,   435,
     437,   231,  -447,  -447,  -447,   438,  -447,  -447,  -447,   278,
    1474,   442,  -447,  -447,  -447,  -447,   441,   451,   452,  -447,
    -447,   357,  2636,    36,   440,    59,  -447,  -447,  -447,  2500,
    -447,   366,   231,  -447,   278,   278,   443,  -447,   455,  -447,
    1474,   457,   371,   458,   445,   447,  -447,   373,  -447,   462,
    -447,   231,   466,   304,  -447,    47,   231,   304,   212,   471,
    -447,   821,  -447,   327,  -447,   394,  -447,  -447,  -447,  -447,
    -447,   241,  -447,   231,   361,   472,  -447,   459,  -447,  -447,
     231,   231,   231,  -447,  -447,  -447,  2459,  -447,  -447,   -25,
    2500,  -447,   327,  -447,  1474,  1474,  -447,  1474,  2500,  1474,
    2500,   385,  1474,   345,   348,   473,   403,  -447,  -447,     4,
    -447,   479,  -447,   212,  -447,  -447,   705,   378,  -447,   486,
     409,  -447,    23,   412,  -447,  -447,   361,  2500,   491,   492,
     489,   495,  -447,   -25,   499,  -447,  -447,  -447,   497,  -447,
    -447,  1474,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,   498,  -447,   502,  -447,  -447,  -447,  -447,  -447,  -447,
     231,  -447,  -447,  -447,  1474,  1474,  -447,  -447,   500,  -447,
    -447
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   132,     0,   246,     0,   178,   222,     0,   112,     0,
     113,     0,     0,     0,     0,   178,     0,   125,   126,     0,
      97,     0,   178,   178,   170,     0,   197,   178,    49,    50,
     178,   178,   221,     0,     0,   293,     0,     0,   220,    24,
     324,   325,   326,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,   327,   301,   274,   302,   275,
       0,     0,     0,     0,     0,   278,   277,   335,     0,     0,
       4,     9,    10,   323,    16,    11,     7,    14,   178,    15,
      81,    84,    38,    88,    87,    86,    12,    82,     0,    79,
      85,    80,     0,    83,    78,     0,   133,   332,   135,   202,
     203,     0,   204,     8,   223,   178,    13,   159,   247,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   268,   270,
       0,   272,   320,   276,   309,   279,   329,   328,   304,   340,
       0,   240,   274,   275,   243,   244,   145,   141,   237,   235,
     236,   234,   142,   238,   239,   143,   144,     0,   188,     0,
     190,   189,   192,   191,     0,   245,     0,    62,     0,   133,
       0,   171,   168,   173,   174,     0,   172,   176,   175,   180,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
      96,   339,    91,     0,   180,     0,   169,     0,   178,   208,
       0,     0,   140,   212,   216,   218,    53,     0,   198,     0,
       0,     0,     0,     0,   122,   290,   292,     0,     0,   246,
       0,   310,     0,   313,   289,   284,     0,     0,   285,   281,
       0,   286,   282,     0,     0,     1,     6,     5,    39,     0,
       0,   130,    25,     0,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   246,     0,     0,     0,     0,
       0,     0,   232,   233,     0,     0,     0,   241,     0,   242,
       0,     0,     0,   280,     0,     0,     0,     0,     0,   157,
     158,   306,   305,   308,     0,     0,   334,   338,     0,     0,
     322,   321,   330,    63,     0,     0,   331,     0,     0,   177,
       0,   179,     0,     0,     0,   327,     0,     0,   315,     0,
       0,     0,     0,   127,    97,    93,    95,   167,   180,   182,
      17,   167,    29,     0,   140,     0,   210,     0,   214,   215,
     217,     0,    52,   219,     0,    43,     0,   167,     0,   291,
      61,     0,   245,     0,   311,     0,     0,   283,    64,     0,
     315,   317,     0,     0,   287,   288,   333,     0,     0,   129,
     134,   138,   136,   137,     0,     0,     0,     0,   167,   167,
     200,   199,   167,     0,     0,   249,   251,   253,   255,   257,
     259,   261,   263,   265,   267,   269,   271,   273,     0,   336,
     149,     0,   303,   295,   296,   297,     0,   294,   307,     0,
     151,   314,   156,   155,     0,   152,     0,   163,   231,    56,
       0,   184,   183,     0,     0,     0,     0,     0,     0,     0,
       0,   316,     0,     0,   108,     0,     0,     0,    94,     0,
      28,   181,    29,     0,     0,   167,   211,    32,     0,   213,
       0,     0,     0,    44,     0,   167,     0,     0,    58,    60,
       0,    61,    77,   312,   300,     0,    65,   319,   318,   167,
       0,     0,   201,   206,   205,   196,     0,     0,     0,   229,
     160,     0,     0,   133,   146,     0,   139,   150,   154,     0,
     230,    55,     0,   162,   167,   167,   123,   115,     0,   120,
       0,     0,     0,     0,   106,   111,   109,   100,   102,    99,
      92,     0,     0,    29,    36,     0,     0,    29,     0,    30,
      22,     0,    23,     0,    31,     0,    26,    41,    42,    46,
      40,     0,    89,     0,     0,     0,   299,    47,   114,   207,
       0,     0,     0,   161,   248,   337,     0,   147,   298,   153,
       0,    57,     0,    45,     0,     0,   116,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,   166,    34,     0,
     164,     0,    27,     0,    19,    21,     0,    43,    33,   208,
       0,   226,     0,     0,    59,   186,     0,     0,     0,     0,
       0,     0,   148,    54,     0,   124,   121,   117,     0,   118,
     105,     0,   110,   101,   103,   104,    35,    37,   165,    18,
      20,     0,   224,     0,   228,   227,    90,   185,    48,    51,
       0,   194,   195,   187,     0,   107,   209,   225,     0,   119,
     193
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -447,  -447,     7,   -63,   211,  -447,  -446,  -447,   -84,   185,
    -447,  -447,  -341,  -447,  -295,   -39,  -447,    -3,  -447,  -447,
     -46,  -447,  -447,  -447,  -447,  -447,   -11,  -245,  -447,  -447,
      71,  -447,   -59,  -447,    -9,  -447,  -447,  -447,   207,  -447,
    -447,   210,  -447,   -29,  -447,  -447,  -447,   101,  -447,  -447,
     347,  -447,  -447,  -447,  -447,  -447,  -151,    15,     1,  -166,
    -447,  -254,  -447,  -447,   392,   325,    11,  -197,  -267,   160,
    -447,   354,  -447,    31,  -161,  -447,  -447,  -447,   282,   280,
    -447,  -447,  -447,   330,  -447,   217,  -447,   332,  -447,   -23,
    -447,   -38,  -447,  -447,    66,  -447,  -447,  -105,  -102,  -101,
     -96,  -156,  -239,  -447,   285,   287,   288,   286,   289,   284,
     290,   292,   294,   283,   281,   -89,    39,  -447,  -447,  -447,
      81,  -447,  -233,   -98,  -447,  -447,  -190,  -447,  -198,  -447,
     -18,  -447,  -256,  -447
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,    69,    70,   183,    71,   502,    72,    73,   233,
      74,   497,   424,    75,   428,   494,   495,    76,   200,   433,
     434,   165,    77,   568,    78,    79,   398,   438,   400,   439,
     440,    80,   218,    81,    82,    83,   563,    84,   305,   306,
      85,   181,   545,   488,   489,    86,   541,   414,   415,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,   268,
     148,   269,   270,   160,    97,   272,    98,   288,   420,   166,
     187,   167,   168,   184,   292,   310,    99,   100,   149,   242,
     101,   102,   103,   192,   193,   194,   320,   195,   196,   104,
     105,   561,   562,   106,   460,   471,   254,   150,   151,   152,
     153,   156,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   206,   122,   384,
     385,   386,   337,   123,   124,   125,   213,   126,   300,   342,
     220,   282,   127,   128
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     171,   158,   197,   325,   221,   159,   227,   365,   232,   255,
     179,   387,   243,   256,   191,   258,   390,   147,   155,   341,
     334,   260,   297,   309,   235,   204,   316,   273,   188,   175,
    -140,   178,   265,   437,   594,   388,   169,   197,   197,   188,
     235,   464,   399,   356,   422,   223,   176,   525,   235,   214,
     215,   549,   554,   333,   336,   550,   491,   231,   212,   465,
     436,   201,   202,   466,   188,   491,   492,   228,   236,   266,
     298,   340,   182,   188,   485,    32,   162,   340,   197,   224,
     170,   498,   447,    38,   391,   180,   413,   493,   172,   364,
     241,   456,   457,   237,   238,   458,   493,   505,   299,   299,
     551,   219,   222,   512,   264,   299,   559,   589,   173,   229,
      56,    32,    58,   236,   284,    39,   131,   189,   257,    38,
      39,   207,    40,    41,    42,   188,   397,   279,   499,   236,
     461,   275,   459,     8,   190,    10,   244,   236,   237,   238,
     267,   174,   189,   359,   448,   443,   409,   421,   426,   228,
     243,   189,   548,   162,   237,   238,   553,   451,   503,   263,
     455,   344,   237,   238,   345,   203,   236,   284,   510,   278,
     190,   245,    32,   236,   469,   246,   143,   144,   197,   190,
      38,   285,   517,   361,   186,   293,   198,   296,   286,   205,
     326,   237,   238,   247,   360,   401,   208,   453,   237,   238,
     225,   343,   343,   189,   343,   379,   197,   532,   533,   387,
     527,   209,   482,   339,   230,   500,   197,   159,   347,   313,
     197,   197,   501,   524,   332,   212,   234,   531,   241,   402,
     252,   190,   362,   363,   185,   253,   188,   188,   199,   197,
     232,   259,   134,   135,   197,   348,   188,   351,   352,   353,
     350,   377,   161,   162,   163,   164,   383,   472,   248,   473,
     332,   249,   280,   281,   197,   250,   255,   197,   564,   197,
     256,   261,   258,   239,   251,   569,   570,   571,   260,   403,
     381,   404,   217,    32,    32,   395,   396,   161,   162,   212,
     197,    38,    38,    32,   394,   318,   319,   454,   290,   291,
     274,    38,   425,   308,   291,   262,   557,   197,     2,   406,
       3,   504,   505,   216,   189,   189,  -241,    56,    57,    58,
      59,  -242,   276,   277,   559,   138,   139,   140,   141,   240,
     228,   279,   287,   301,    20,   574,   430,   303,   302,   304,
     339,   307,   190,   190,   311,   315,   312,   321,    65,    66,
     212,   445,   190,   267,   324,   608,   317,   327,    35,   328,
     329,   330,   331,   335,    39,   336,    40,    41,    42,    43,
     188,   343,   349,   346,   378,   339,   382,   389,   407,   463,
     392,   405,   408,   410,   411,   412,    55,   416,    56,    57,
      58,    59,   291,   419,    60,   441,   476,   217,   423,   479,
      61,    62,    63,    64,   430,   413,    39,   427,   490,   432,
     442,   435,   449,   450,   452,   462,   468,    32,   197,    65,
      66,   470,   478,    67,   481,    38,   474,   483,   484,   475,
     477,   487,   496,   464,   506,   507,   508,   509,   511,   513,
     459,   518,   197,   514,   516,   519,   520,   526,   189,   197,
      56,    57,    58,    59,   383,   565,   521,   522,   534,   583,
     530,   535,   354,   537,   539,   538,   544,   543,   197,   540,
     529,   536,   542,   197,   547,   505,   190,   558,   566,   581,
     546,    65,    66,   567,   585,   552,   586,   588,   197,   592,
     197,   596,   593,   227,   599,   601,   600,   197,   197,   197,
     560,   602,   603,   604,   606,   607,   610,   597,   556,   431,
     587,   591,   515,   418,   417,   584,   486,   271,   294,   355,
     314,   322,   289,   358,   595,   575,   576,   523,   577,   323,
     579,   573,   366,   582,   429,   367,   369,   368,   371,   197,
     370,   430,   376,   375,     0,   372,   528,     0,   373,     0,
       0,   560,   374,   578,     0,   580,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   605,     0,
       0,     0,   598,     0,     0,     0,     0,    -2,   226,     0,
       1,     0,     2,     0,     3,   609,   228,     4,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,    15,    16,    17,    18,    19,    20,     0,
      21,    22,    23,    24,     0,     0,     0,     0,     0,     0,
      25,     0,    26,    27,    28,    29,    30,     0,    31,    32,
      33,    34,    35,     0,    36,    37,     0,    38,    39,     0,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,   226,    67,     1,     0,
       2,     0,     3,     0,     0,     4,   590,     5,     6,     7,
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
       0,     4,   555,     5,     6,     7,     0,     8,     9,    10,
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
       1,    67,     2,     0,     3,     0,     0,     4,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,    15,    16,    17,    18,    19,    20,     0,
      21,    22,    23,    24,     0,     0,     0,     0,     0,     0,
      25,     0,    26,    27,    28,    29,    30,     0,    31,    32,
      33,    34,    35,     0,    36,    37,     0,    38,    39,     0,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,    65,    66,     4,   157,    67,     6,     7,
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
       3,    65,    66,     4,   283,    67,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,    34,    35,     0,
       0,    37,     0,    38,    39,     0,    40,    41,    42,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     2,     0,     3,    65,
      66,     4,   338,    67,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,    19,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,     0,     0,    37,
       0,    38,    39,     0,    40,    41,    42,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,    65,    66,     4,
     446,    67,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,     0,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,     0,     0,     4,    65,    66,     6,     7,    67,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
       0,     0,    37,     0,    38,    39,     0,    40,    41,    42,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,     0,     0,     4,
      65,    66,     6,     7,    67,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,     0,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,   177,    55,     2,    56,     3,    58,     0,   130,     0,
      60,     6,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
       0,     0,     1,     0,     2,     0,     3,     0,     0,   130,
      32,     0,     6,    35,     0,     0,     0,     0,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,    32,     0,     0,    35,    61,    62,    63,    64,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       2,   129,     3,     0,     0,   130,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
      35,     0,     0,     0,     0,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,   131,
      56,   132,    58,   133,   134,   135,    60,     0,   136,     0,
       0,     0,    61,    62,    63,    64,     0,     0,   137,   138,
     139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
       0,    65,    66,   145,   146,    67,     2,     0,     3,     0,
       0,   130,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
     380,     0,   130,    32,     0,     6,    35,     0,     0,     0,
       0,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,   210,   211,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,    32,     0,     0,    35,    61,    62,
      63,    64,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,   154,     0,     0,    61,
      62,    63,    64,     2,     0,     3,     0,     0,   130,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,   393,     0,   130,
      32,     0,     6,    35,     0,     0,     0,     0,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,    32,   154,     0,    35,    61,    62,    63,    64,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       2,     0,     3,   380,     0,   130,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,   444,     3,     0,     0,   130,    32,     0,     6,
      35,     0,     0,     0,     0,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,    32,     0,
       0,    35,    61,    62,    63,    64,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     2,     0,     3,
     467,     0,   130,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,   480,
       3,     0,     0,   130,    32,     0,     6,    35,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,    32,     0,     0,    35,    61,
      62,    63,    64,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     2,     0,     3,   572,     0,   130,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
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
       0,     2,     0,     3,     0,     0,   130,     0,    32,     0,
       0,    35,     0,     0,     0,     0,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,    35,     0,    61,    62,    63,    64,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
     357,     0,    65,    66,     0,     0,    67,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     0,   131,    56,
     257,    58,   259,   134,   135,     0,     0,   136,     0,     0,
       0,     0,    65,    66,     0,     0,    67,   137,   138,   139,
     140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
       0,     0,   145,   146
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,   200,    63,     4,    69,   246,    92,   114,
      19,   267,   101,   115,    25,   116,   270,     2,     3,   217,
     210,   117,   173,   184,     4,    34,   192,   125,     5,    14,
       5,    16,     7,   328,    11,   268,     5,    60,    61,     5,
       4,     8,   287,   240,   311,    63,    15,    11,     4,    60,
      61,     4,   498,   209,     5,     8,    52,     3,    43,     4,
     327,    30,    31,     8,     5,    52,    53,    76,    93,    44,
      83,    83,     3,     5,    11,    52,    38,    83,   101,    64,
       5,   422,    94,    60,   274,    83,    23,    83,     5,   245,
     101,   358,   359,   118,   119,   362,    83,     4,   111,   111,
      53,    62,    63,    10,   122,   111,    83,   553,     5,    78,
      85,    52,    87,    93,    94,    61,    84,    83,    86,    60,
      61,    83,    63,    64,    65,     5,     6,    94,   423,    93,
     363,   130,    83,    16,   111,    18,   105,    93,   118,   119,
     115,     5,    83,   241,   342,   335,   297,   308,   314,   158,
     239,    83,   493,    38,   118,   119,   497,   354,   425,   120,
     357,   220,   118,   119,   223,    83,    93,    94,   435,   154,
     111,    92,    52,    93,    94,    96,   109,   110,   201,   111,
      60,     4,   449,   242,    24,   170,    26,   172,    11,    83,
     201,   118,   119,   114,     3,     3,    36,     3,   118,   119,
       0,    10,    10,    83,    10,   264,   229,   474,   475,   465,
     464,    83,   410,   216,     5,     3,   239,   216,   229,   188,
     243,   244,    10,   462,   209,   210,     3,   472,   239,   288,
     103,   111,   243,   244,    23,   108,     5,     5,    27,   262,
     324,    88,    89,    90,   267,   230,     5,   236,   237,   238,
     235,   262,    37,    38,    39,    40,   267,     4,   102,     6,
     245,   112,     8,     9,   287,   113,   371,   290,   513,   292,
     372,    95,   373,    41,   111,   520,   521,   522,   374,   290,
     265,   292,    94,    52,    52,   284,   285,    37,    38,   274,
     313,    60,    60,    52,   279,    92,    93,   356,    41,    42,
      66,    60,   313,    41,    42,    91,   503,   330,     5,   294,
       7,     3,     4,    10,    83,    83,     6,    85,    86,    87,
      88,     6,     6,     6,    83,   104,   105,   106,   107,    97,
     339,    94,     5,    10,    31,   532,   321,     3,    83,    32,
     343,    83,   111,   111,    83,    94,    83,     7,   116,   117,
     335,   336,   111,   115,    83,   600,    44,    83,    55,    94,
      83,     5,    83,    67,    61,     5,    63,    64,    65,    66,
       5,    10,     3,   101,    10,   378,    83,     7,     4,   378,
       8,     6,     6,     4,    83,    94,    83,    10,    85,    86,
      87,    88,    42,   115,    91,     5,   405,    94,    94,   408,
      97,    98,    99,   100,   389,    23,    61,    83,   417,    31,
      59,    83,    83,     6,     3,    94,     8,    52,   441,   116,
     117,    83,   407,   120,   409,    60,    83,   412,   413,    83,
       3,    83,    43,     8,     3,    83,    83,     3,    10,     4,
      83,   450,   465,     6,     6,     3,     5,     7,    83,   472,
      85,    86,    87,    88,   465,   514,     5,     5,    15,   543,
      94,     6,    97,     6,     6,    94,     4,    94,   491,    24,
     469,   480,    25,   496,     8,     4,   111,    83,     6,    94,
     491,   116,   117,    24,    11,   496,    83,     8,   511,     3,
     513,    79,    83,   556,     3,     6,     4,   520,   521,   522,
     511,     6,     3,     6,     6,     3,     6,   566,   501,   324,
     549,   557,   441,   306,   304,   544,   415,   125,   171,   239,
     190,   196,   168,   241,   562,   534,   535,   461,   537,   197,
     539,   530,   247,   542,   317,   248,   250,   249,   254,   562,
     251,   526,   261,   260,    -1,   255,   465,    -1,   256,    -1,
      -1,   562,   258,   538,    -1,   540,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   600,   581,    -1,
      -1,    -1,   567,    -1,    -1,    -1,    -1,     0,     1,    -1,
       3,    -1,     5,    -1,     7,   604,   605,    10,    -1,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    -1,    57,    58,    -1,    60,    61,    -1,
      63,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,   117,    -1,     1,   120,     3,    -1,
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
      -1,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
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
       3,   120,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    -1,    57,    58,    -1,    60,    61,    -1,
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
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,   116,
     117,    10,    11,   120,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,    -1,    -1,    10,   116,   117,    13,    14,   120,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,    -1,    -1,    10,
     116,   117,    13,    14,   120,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,     3,    83,     5,    85,     7,    87,    -1,    10,    -1,
      91,    13,    -1,    -1,    -1,    -1,    97,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
      -1,    -1,     3,    -1,     5,    -1,     7,    -1,    -1,    10,
      52,    -1,    13,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    52,    -1,    -1,    55,    97,    98,    99,   100,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    -1,
      -1,    -1,    97,    98,    99,   100,    -1,    -1,   103,   104,
     105,   106,   107,   108,   109,   110,    -1,    -1,    -1,    -1,
      -1,   116,   117,   118,   119,   120,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,    -1,    10,    52,    -1,    13,    55,    -1,    -1,    -1,
      -1,    60,    61,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    52,    -1,    -1,    55,    97,    98,
      99,   100,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,   120,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,
      98,    99,   100,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,    10,
      52,    -1,    13,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    52,    94,    -1,    55,    97,    98,    99,   100,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,
       5,    -1,     7,     8,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,
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
      97,    98,    99,   100,     5,    -1,     7,     8,    -1,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,
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
      -1,     5,    -1,     7,    -1,    -1,    10,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    55,    -1,    97,    98,    99,   100,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,    -1,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    93,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,   119
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
     160,   162,   163,   164,   166,   169,   174,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   193,   195,   205,
     206,   209,   210,   211,   218,   219,   222,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   247,   252,   253,   254,   256,   261,   262,     6,
      10,    84,    86,    88,    89,    90,    93,   103,   104,   105,
     106,   107,   108,   109,   110,   118,   119,   186,   189,   207,
     226,   227,   228,   229,    94,   186,   230,    11,   146,   187,
     192,    37,    38,    39,    40,   150,   198,   200,   201,   202,
       5,   163,     5,     5,     5,   186,   202,     3,   186,   163,
      83,   170,     3,   133,   202,   133,   198,   199,     5,    83,
     111,   155,   212,   213,   214,   216,   217,   218,   198,   133,
     147,   202,   202,    83,   163,    83,   246,    83,   198,    83,
      80,    81,   186,   255,   155,   155,    10,    94,   161,   245,
     259,   161,   245,   259,   186,     0,     1,   132,   163,   202,
       5,     3,   137,   138,     3,     4,    93,   118,   119,    41,
      97,   155,   208,   244,   202,    92,    96,   114,   102,   112,
     113,   111,   103,   108,   225,   226,   227,    86,   228,    88,
     229,    95,    91,   245,   259,     7,    44,   115,   188,   190,
     191,   193,   194,   252,    66,   187,     6,     6,   186,    94,
       8,     9,   260,    11,    94,     4,    11,     5,   196,   200,
      41,    42,   203,   186,   179,    83,   186,   185,    83,   111,
     257,    10,    83,     3,    32,   167,   168,    83,    41,   203,
     204,    83,    83,   202,   212,    94,   188,    44,    92,    93,
     215,     7,   194,   216,    83,   196,   155,    83,    94,    83,
       5,    83,   186,   230,   255,    67,     5,   251,    11,   146,
      83,   257,   258,    10,   161,   161,   101,   155,   186,     3,
     186,   195,   195,   195,    97,   208,   196,    56,   207,   252,
       3,   161,   155,   155,   230,   231,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   155,    10,   161,
       8,   186,    83,   155,   248,   249,   250,   261,   251,     7,
     190,   255,     8,     8,   186,   187,   187,     6,   155,   156,
     157,     3,   161,   155,   155,     6,   186,     4,     6,   185,
       4,    83,    94,    23,   176,   177,    10,   170,   167,   115,
     197,   203,   197,    94,   141,   155,   188,    83,   143,   214,
     186,   138,    31,   148,   149,    83,   197,   143,   156,   158,
     159,     5,    59,   255,     6,   186,    11,    94,   257,    83,
       6,   196,     3,     3,   161,   196,   197,   197,   197,    83,
     223,   251,    94,   187,     8,     4,     8,     8,     8,    94,
      83,   224,     4,     6,    83,    83,   163,     3,   186,   163,
       6,   186,   257,   186,   186,    11,   176,    83,   172,   173,
     163,    52,    53,    83,   144,   145,    43,   140,   141,   143,
       3,    10,   135,   197,     3,     4,     3,    83,    83,     3,
     197,    10,    10,     4,     6,   159,     6,   197,   163,     3,
       5,     5,     5,   223,   231,    11,     7,   190,   249,   187,
      94,   156,   197,   197,    15,     6,   163,     6,    94,     6,
      24,   175,    25,    94,     4,   171,   155,     8,   141,     4,
       8,    53,   155,   141,   135,    11,   131,   196,    83,    83,
     155,   220,   221,   165,   156,   161,     6,    24,   152,   156,
     156,   156,     8,   187,   196,   163,   163,   163,   186,   163,
     186,    94,   163,   137,   172,    11,    83,   144,     8,   135,
      11,   149,     3,    83,    11,   220,    79,   161,   186,     3,
       4,     6,     6,     3,     6,   146,     6,     3,   156,   163,
       6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   129,   130,   130,   131,   131,   131,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   133,   134,   134,
     135,   135,   135,   136,   137,   138,   139,   140,   140,   141,
     141,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     147,   148,   148,   149,   149,   150,   151,   152,   152,   153,
     153,   154,   155,   155,   156,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   165,
     164,   166,   167,   168,   168,   169,   170,   170,   171,   171,
     172,   172,   173,   173,   174,   175,   175,   176,   177,   177,
     178,   178,   179,   179,   180,   180,   180,   180,   180,   180,
     180,   180,   181,   182,   182,   183,   183,   184,   184,   184,
     184,   185,   185,   186,   186,   187,   187,   187,   187,   188,
     188,   189,   189,   189,   189,   189,   190,   190,   190,   191,
     191,   191,   192,   192,   193,   193,   193,   194,   194,   195,
     195,   195,   196,   196,   197,   197,   197,   197,   198,   199,
     199,   200,   200,   201,   201,   202,   202,   202,   202,   203,
     203,   204,   204,   205,   205,   205,   205,   206,   207,   207,
     207,   207,   207,   208,   208,   208,   208,   209,   209,   210,
     210,   210,   211,   211,   211,   211,   211,   211,   212,   212,
     213,   213,   214,   214,   215,   215,   215,   216,   217,   217,
     218,   218,   219,   219,   220,   220,   221,   221,   222,   223,
     224,   224,   225,   225,   226,   226,   226,   226,   227,   227,
     228,   228,   229,   229,   229,   230,   230,   231,   231,   231,
     232,   232,   233,   233,   234,   234,   235,   235,   236,   236,
     237,   237,   238,   238,   239,   239,   240,   240,   241,   241,
     242,   242,   243,   243,   244,   244,   244,   244,   244,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     246,   246,   247,   247,   248,   249,   249,   250,   250,   251,
     251,   252,   252,   253,   254,   254,   254,   254,   254,   254,
     255,   255,   255,   256,   256,   257,   257,   258,   258,   259,
     259,   260,   260,   261,   261,   261,   261,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     7,     6,
       3,     2,     1,     5,     1,     1,     5,     2,     0,     0,
       2,     5,     1,     3,     2,     3,     1,     3,     1,     2,
       4,     2,     2,     0,     1,     5,     5,     0,     2,     1,
       1,     7,     2,     1,     4,     2,     1,     3,     1,     3,
       1,     0,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       7,     2,     3,     1,     2,     3,     1,     0,     1,     0,
       1,     3,     1,     3,     7,     2,     0,     5,     1,     2,
       7,     5,     1,     1,     5,     5,     6,     7,     7,     9,
       5,     7,     2,     5,     7,     1,     1,     3,     2,     3,
       2,     2,     1,     1,     3,     1,     3,     3,     3,     3,
       0,     1,     1,     1,     1,     1,     3,     4,     5,     2,
       3,     2,     3,     5,     5,     4,     4,     1,     1,     1,
       4,     5,     3,     2,     3,     4,     3,     0,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     2,     0,     1,
       0,     2,     1,     4,     4,     7,     6,     8,     1,     1,
       1,     1,     1,     8,     6,     6,     3,     1,     2,     3,
       3,     4,     1,     1,     1,     4,     4,     5,     1,     7,
       2,     3,     1,     3,     1,     1,     0,     2,     1,     2,
       1,     1,     1,     1,     2,     3,     1,     2,     7,     1,
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
#line 203 "src/gwion.y"
                  { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2605 "src/parser.c"
    break;

  case 3: /* ast: %empty  */
#line 204 "src/gwion.y"
           { (yyval.ast) = NULL; }
#line 2611 "src/parser.c"
    break;

  case 4: /* section_list: section  */
#line 207 "src/gwion.y"
            { YYLIST_INI(Section, (yyval.ast), (yyvsp[0].section)); }
#line 2617 "src/parser.c"
    break;

  case 5: /* section_list: section_list section  */
#line 208 "src/gwion.y"
                                            { YYLIST_END(Section, (yyval.ast), (yyvsp[-1].ast), (yyvsp[0].section)); }
#line 2623 "src/parser.c"
    break;

  case 7: /* section: stmt_list  */
#line 212 "src/gwion.y"
                                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list), (yylsp[0])); }
#line 2629 "src/parser.c"
    break;

  case 8: /* section: func_def  */
#line 213 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def), (yylsp[0]));  }
#line 2635 "src/parser.c"
    break;

  case 9: /* section: class_def  */
#line 214 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def), (yylsp[0])); }
#line 2641 "src/parser.c"
    break;

  case 10: /* section: trait_def  */
#line 215 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def), (yylsp[0])); }
#line 2647 "src/parser.c"
    break;

  case 11: /* section: extend_def  */
#line 216 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def), (yylsp[0])); }
#line 2653 "src/parser.c"
    break;

  case 12: /* section: enum_def  */
#line 217 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def), (yylsp[0])); }
#line 2659 "src/parser.c"
    break;

  case 13: /* section: union_def  */
#line 218 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def), (yylsp[0])); }
#line 2665 "src/parser.c"
    break;

  case 14: /* section: fptr_def  */
#line 219 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def), (yylsp[0])); }
#line 2671 "src/parser.c"
    break;

  case 15: /* section: type_def  */
#line 220 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def), (yylsp[0])); }
#line 2677 "src/parser.c"
    break;

  case 16: /* section: prim_def  */
#line 221 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def), (yylsp[0])); }
#line 2683 "src/parser.c"
    break;

  case 17: /* class_flag: flag modifier  */
#line 224 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2689 "src/parser.c"
    break;

  case 18: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits class_body  */
#line 227 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-5].flag), MK_TAG((yyvsp[-4].sym), (yylsp[-4])), (yyvsp[-2].type_decl), (yyvsp[0].ast));
      if((yyvsp[-3].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2700 "src/parser.c"
    break;

  case 19: /* class_def: "struct" class_flag "<identifier>" decl_template traits class_body  */
#line 234 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-4].flag), MK_TAG((yyvsp[-3].sym), (yylsp[-3])), NULL, (yyvsp[0].ast));
      if((yyvsp[-2].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2712 "src/parser.c"
    break;

  case 20: /* class_body: "{" section_list "}"  */
#line 242 "src/gwion.y"
                                   { (yyval.ast) = (yyvsp[-1].ast); }
#line 2718 "src/parser.c"
    break;

  case 21: /* class_body: "{" "}"  */
#line 242 "src/gwion.y"
                                                          { (yyval.ast) = NULL; }
#line 2724 "src/parser.c"
    break;

  case 22: /* class_body: ";"  */
#line 242 "src/gwion.y"
                                                                               { (yyval.ast) = NULL; }
#line 2730 "src/parser.c"
    break;

  case 23: /* trait_def: "trait" opt_global "<identifier>" traits class_body  */
#line 245 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2739 "src/parser.c"
    break;

  case 24: /* number: INTEGER  */
#line 250 "src/gwion.y"
                {
  if((yyvsp[0].yyint).num < 0 || (yyvsp[0].yyint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type);
}
#line 2750 "src/parser.c"
    break;

  case 25: /* decimal: number  */
#line 257 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2761 "src/parser.c"
    break;

  case 26: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 265 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2769 "src/parser.c"
    break;

  case 27: /* class_ext: "extends" type_decl_array  */
#line 268 "src/gwion.y"
                                      { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2775 "src/parser.c"
    break;

  case 28: /* class_ext: %empty  */
#line 268 "src/gwion.y"
                                                            { (yyval.type_decl) = NULL; }
#line 2781 "src/parser.c"
    break;

  case 29: /* traits: %empty  */
#line 269 "src/gwion.y"
               { (yyval.id_list) = NULL; }
#line 2787 "src/parser.c"
    break;

  case 30: /* traits: ":" id_list  */
#line 269 "src/gwion.y"
                                            { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2793 "src/parser.c"
    break;

  case 31: /* extend_def: "extends" type_decl_array ":" id_list ";"  */
#line 271 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2801 "src/parser.c"
    break;

  case 32: /* id_list: "<identifier>"  */
#line 276 "src/gwion.y"
                 { YYLIST_INI(Symbol, (yyval.id_list), (yyvsp[0].sym)); }
#line 2807 "src/parser.c"
    break;

  case 33: /* id_list: id_list "," "<identifier>"  */
#line 277 "src/gwion.y"
                 { YYLIST_END(Symbol, (yyval.id_list), (yyvsp[-2].id_list), (yyvsp[0].sym)); }
#line 2813 "src/parser.c"
    break;

  case 34: /* specialized: "<identifier>" traits  */
#line 279 "src/gwion.y"
                       {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1])),
        .traits = (yyvsp[0].id_list),
      };
  }
#line 2824 "src/parser.c"
    break;

  case 35: /* specialized: "const" type_decl_array "<identifier>"  */
#line 285 "src/gwion.y"
                               {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])),
        .td = (yyvsp[-1].type_decl),
      };
  }
#line 2835 "src/parser.c"
    break;

  case 36: /* specialized_list: specialized  */
#line 292 "src/gwion.y"
                              { YYLIST_INI(Specialized, (yyval.specialized_list), (yyvsp[0].specialized)); }
#line 2841 "src/parser.c"
    break;

  case 37: /* specialized_list: specialized_list "," specialized  */
#line 293 "src/gwion.y"
                                     { YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), (yyvsp[0].specialized)); }
#line 2847 "src/parser.c"
    break;

  case 38: /* stmt_list: stmt  */
#line 295 "src/gwion.y"
                                   { YYLIST_INI(Stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 2853 "src/parser.c"
    break;

  case 39: /* stmt_list: stmt_list stmt  */
#line 296 "src/gwion.y"
                                   { YYLIST_END(Stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 2859 "src/parser.c"
    break;

  case 40: /* fptr_base: flag type_decl_array "<identifier>" decl_template  */
#line 298 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2866 "src/parser.c"
    break;

  case 41: /* _func_effects: "perform" "<identifier>"  */
#line 301 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2872 "src/parser.c"
    break;

  case 42: /* _func_effects: _func_effects "<identifier>"  */
#line 301 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2878 "src/parser.c"
    break;

  case 43: /* func_effects: %empty  */
#line 302 "src/gwion.y"
                     { (yyval.vector).ptr = NULL; }
#line 2884 "src/parser.c"
    break;

  case 44: /* func_effects: _func_effects  */
#line 302 "src/gwion.y"
                                                        { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2890 "src/parser.c"
    break;

  case 45: /* func_base: flag final type_decl_array "<identifier>" decl_template  */
#line 304 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2897 "src/parser.c"
    break;

  case 46: /* fptr_def: "funptr" fptr_base func_args func_effects ";"  */
#line 307 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2907 "src/parser.c"
    break;

  case 47: /* typedef_when: %empty  */
#line 313 "src/gwion.y"
                     { (yyval.exp) = NULL;}
#line 2913 "src/parser.c"
    break;

  case 48: /* typedef_when: "when" exp  */
#line 313 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2919 "src/parser.c"
    break;

  case 49: /* type_def_type: "typedef"  */
#line 314 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2925 "src/parser.c"
    break;

  case 50: /* type_def_type: "distinct"  */
#line 314 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2931 "src/parser.c"
    break;

  case 51: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 315 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2944 "src/parser.c"
    break;

  case 52: /* type_decl_array: type_decl array  */
#line 324 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2950 "src/parser.c"
    break;

  case 54: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 327 "src/gwion.y"
                                            {
    (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-3].type_decl), (yyvsp[-2].var_decl)), .exp = (yyvsp[0].exp) };
  }
#line 2958 "src/parser.c"
    break;

  case 55: /* arg: type_decl_array arg_decl  */
#line 330 "src/gwion.y"
                             {
    (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) };
  }
#line 2966 "src/parser.c"
    break;

  case 56: /* arg_list: arg  */
#line 334 "src/gwion.y"
         {
       YYLIST_INI(Arg, (yyval.arg_list), (yyvsp[0].arg));
     }
#line 2974 "src/parser.c"
    break;

  case 57: /* arg_list: arg_list "," arg  */
#line 337 "src/gwion.y"
                              {
     mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
     (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 2983 "src/parser.c"
    break;

  case 58: /* locale_arg: arg  */
#line 343 "src/gwion.y"
        {
       (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 2);
       Arg self = {
         .var = MK_VAR(
            new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
            (struct Var_Decl_) { .tag = MK_TAG(insert_symbol("self"), (yyloc))}),
         .exp = NULL
       };
       mp_vector_set((yyval.arg_list), Arg, 0, self);
       mp_vector_set((yyval.arg_list), Arg, 1, (yyvsp[0].arg));
     }
#line 2999 "src/parser.c"
    break;

  case 59: /* locale_arg: locale_arg "," arg  */
#line 354 "src/gwion.y"
                                {
     mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
     (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 3008 "src/parser.c"
    break;

  case 61: /* locale_list: %empty  */
#line 360 "src/gwion.y"
    {
       Arg self = {
          MK_VAR(
            new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
            (struct Var_Decl_) { .tag = MK_TAG(insert_symbol("self"), (yyloc))}
          ),
         .exp = NULL
       };
       YYLIST_INI(Arg, (yyval.arg_list), self);
    }
#line 3023 "src/parser.c"
    break;

  case 62: /* code_stmt: "{" "}"  */
#line 372 "src/gwion.y"
            {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc)); }
#line 3030 "src/parser.c"
    break;

  case 63: /* code_stmt: "{" stmt_list "}"  */
#line 374 "src/gwion.y"
                      {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc), .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) });}
#line 3037 "src/parser.c"
    break;

  case 64: /* code_list: "{" "}"  */
#line 378 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), Stmt, 0); }
#line 3043 "src/parser.c"
    break;

  case 65: /* code_list: "{" stmt_list "}"  */
#line 379 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3049 "src/parser.c"
    break;

  case 66: /* stmt_pp: "<comment>"  */
#line 382 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyloc), .data = (yyvsp[0].sval)); }
#line 3055 "src/parser.c"
    break;

  case 67: /* stmt_pp: "#include"  */
#line 383 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyloc), .data = (yyvsp[0].sval)); }
#line 3061 "src/parser.c"
    break;

  case 68: /* stmt_pp: "#define"  */
#line 384 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3067 "src/parser.c"
    break;

  case 69: /* stmt_pp: "#pragma"  */
#line 385 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3073 "src/parser.c"
    break;

  case 70: /* stmt_pp: "#undef"  */
#line 386 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3079 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#ifdef"  */
#line 387 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3085 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#ifndef"  */
#line 388 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3091 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#else"  */
#line 389 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyloc), .data = (yyvsp[0].sval)); }
#line 3097 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#if"  */
#line 390 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3103 "src/parser.c"
    break;

  case 75: /* stmt_pp: "\n"  */
#line 391 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl, (yyloc), .data = (yyvsp[0].sval)); }
#line 3109 "src/parser.c"
    break;

  case 76: /* stmt_pp: "import"  */
#line 392 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyloc), .data = (yyvsp[0].sval)); }
#line 3115 "src/parser.c"
    break;

  case 77: /* stmt_pp: LOCALE_INI "<identifier>" opt_exp LOCALE_END  */
#line 394 "src/gwion.y"
    { (yyval.stmt) = MK_STMT_PP(locale, (yyloc), .xid = (yyvsp[-2].sym), .exp = (yyvsp[-1].exp)); }
#line 3121 "src/parser.c"
    break;

  case 89: /* $@1: %empty  */
#line 411 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3127 "src/parser.c"
    break;

  case 90: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 411 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .tag = MK_TAG((yyvsp[-5].sym), (yylsp[-5])),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
  };
  (yyval.stmt) = MK_STMT(ae_stmt_spread, (yylsp[-5]), .stmt_spread = spread);
}
#line 3140 "src/parser.c"
    break;

  case 91: /* retry_stmt: "retry" ";"  */
#line 420 "src/gwion.y"
                        { (yyval.stmt) = MK_STMT(ae_stmt_retry, (yylsp[-1])); }
#line 3146 "src/parser.c"
    break;

  case 92: /* handler: "handle" opt_id stmt  */
#line 422 "src/gwion.y"
                              { (yyval.handler) = (Handler){ .tag = MK_TAG((yyvsp[-1].sym), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-2])), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }; }
#line 3152 "src/parser.c"
    break;

  case 93: /* handler_list: handler  */
#line 423 "src/gwion.y"
                      {
    YYLIST_INI(Handler, (yyval.handler_list).handlers, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).tag.sym;
  }
#line 3161 "src/parser.c"
    break;

  case 94: /* handler_list: handler_list handler  */
#line 427 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].handler_list).handlers, Handler, (yyvsp[0].handler));
    (yyval.handler_list) = (yyvsp[-1].handler_list);
  }
#line 3170 "src/parser.c"
    break;

  case 95: /* try_stmt: "try" stmt handler_list  */
#line 431 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_try, (yylsp[-2]),
   .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers});}
#line 3177 "src/parser.c"
    break;

  case 97: /* opt_id: %empty  */
#line 434 "src/gwion.y"
                    { (yyval.sym) = NULL; }
#line 3183 "src/parser.c"
    break;

  case 99: /* opt_comma: %empty  */
#line 435 "src/gwion.y"
                        {}
#line 3189 "src/parser.c"
    break;

  case 100: /* enum_value: "<identifier>"  */
#line 438 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }; }
#line 3195 "src/parser.c"
    break;

  case 101: /* enum_value: "<identifier>" ":" number  */
#line 439 "src/gwion.y"
                          { 
            (yyval.enum_value) = (EnumValue) {.tag = MK_TAG((yyvsp[-2].sym), (yylsp[-2])), .gwint = (yyvsp[0].gwint), .set = true };
          }
#line 3203 "src/parser.c"
    break;

  case 102: /* enum_list: enum_value  */
#line 443 "src/gwion.y"
                            { YYLIST_INI(EnumValue, (yyval.enum_list), (yyvsp[0].enum_value)); }
#line 3209 "src/parser.c"
    break;

  case 103: /* enum_list: enum_list "," enum_value  */
#line 444 "src/gwion.y"
                            { YYLIST_END(EnumValue, (yyval.enum_list), (yyvsp[-2].enum_list), (yyvsp[0].enum_value)) ;}
#line 3215 "src/parser.c"
    break;

  case 104: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 447 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3224 "src/parser.c"
    break;

  case 105: /* when_exp: "when" exp  */
#line 452 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3230 "src/parser.c"
    break;

  case 106: /* when_exp: %empty  */
#line 452 "src/gwion.y"
                                           { (yyval.exp) = NULL; }
#line 3236 "src/parser.c"
    break;

  case 107: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 455 "src/gwion.y"
                                      {
    (yyval.stmt) = MK_STMT(0 /*ae_stmt_match*/, (yylsp[-4]),
      .stmt_match = {
        .cond = (yyvsp[-3].exp),
        .when = (yyvsp[-2].exp),
        .list = (yyvsp[0].stmt_list)
    });
}
#line 3249 "src/parser.c"
    break;

  case 108: /* match_list: match_case_stmt  */
#line 464 "src/gwion.y"
                            { YYLIST_INI(Stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 3255 "src/parser.c"
    break;

  case 109: /* match_list: match_list match_case_stmt  */
#line 465 "src/gwion.y"
                             { YYLIST_END(Stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 3261 "src/parser.c"
    break;

  case 110: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 467 "src/gwion.y"
                                                        {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-6]),
    .stmt_match = {
      .cond  = (yyvsp[-5].exp),
      .list  = (yyvsp[-3].stmt_list),
      .where = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  });
}
#line 3274 "src/parser.c"
    break;

  case 111: /* match_stmt: "match" exp "{" match_list "}"  */
#line 476 "src/gwion.y"
                               {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-4]),
    .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
  });
}
#line 3286 "src/parser.c"
    break;

  case 112: /* flow: "while"  */
#line 485 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3292 "src/parser.c"
    break;

  case 113: /* flow: "until"  */
#line 486 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3298 "src/parser.c"
    break;

  case 114: /* loop_stmt: flow "(" exp ")" stmt  */
#line 491 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-4].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3309 "src/parser.c"
    break;

  case 115: /* loop_stmt: "do" stmt flow exp ";"  */
#line 498 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
    });
  }
#line 3321 "src/parser.c"
    break;

  case 116: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 506 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-5]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3333 "src/parser.c"
    break;

  case 117: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 514 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-6]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-4].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c3 = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3346 "src/parser.c"
    break;

  case 118: /* loop_stmt: "foreach" "(" capture ":" exp ")" stmt  */
#line 523 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-6]),
      .stmt_each = {
        .var = (yyvsp[-4].capture).var,
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .is_ref = (yyvsp[-4].capture).is_ref
    });
  }
#line 3359 "src/parser.c"
    break;

  case 119: /* loop_stmt: "foreach" "(" "<identifier>" "," capture ":" exp ")" stmt  */
#line 532 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-8]),
      .stmt_each = {
        .var = (yyvsp[-4].capture).var,
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .idx = (Var_Decl){.tag=MK_TAG((yyvsp[-6].sym), (yylsp[-6]))},
        .is_ref = (yyvsp[-4].capture).is_ref
    });
  }
#line 3373 "src/parser.c"
    break;

  case 120: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 542 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-4]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
  }
#line 3384 "src/parser.c"
    break;

  case 121: /* loop_stmt: "repeat" "(" "<identifier>" "," exp ")" stmt  */
#line 549 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-6]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
    (yyval.stmt).d.stmt_loop.idx = (Var_Decl){ .tag = MK_TAG((yyvsp[-4].sym), (yylsp[-4])) };
  }
#line 3396 "src/parser.c"
    break;

  case 122: /* defer_stmt: "defer" stmt  */
#line 557 "src/gwion.y"
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
#line 3411 "src/parser.c"
    break;

  case 123: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 570 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-4]),
      .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3422 "src/parser.c"
    break;

  case 124: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 577 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-6]),
      .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3434 "src/parser.c"
    break;

  case 125: /* breaks: "break"  */
#line 585 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3440 "src/parser.c"
    break;

  case 126: /* breaks: "continue"  */
#line 585 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3446 "src/parser.c"
    break;

  case 127: /* jump_stmt: "return" exp ";"  */
#line 587 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-2]), (yyvsp[-1].exp)); }
#line 3452 "src/parser.c"
    break;

  case 128: /* jump_stmt: "return" ";"  */
#line 588 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-1]), NULL); }
#line 3458 "src/parser.c"
    break;

  case 129: /* jump_stmt: breaks decimal ";"  */
#line 589 "src/gwion.y"
                         { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-2]), .stmt_index = { .idx = (yyvsp[-1].gwint).num });}
#line 3464 "src/parser.c"
    break;

  case 130: /* jump_stmt: breaks ";"  */
#line 590 "src/gwion.y"
               { (yyval.stmt) = MK_STMT((yyvsp[-1].stmt_t), (yylsp[-1]), .stmt_index = { .idx = -1 });}
#line 3470 "src/parser.c"
    break;

  case 131: /* exp_stmt: exp ";"  */
#line 593 "src/gwion.y"
            { (yyval.stmt) = MK_STMT_EXP((yylsp[-1]), (yyvsp[-1].exp)); }
#line 3476 "src/parser.c"
    break;

  case 132: /* exp_stmt: ";"  */
#line 594 "src/gwion.y"
            { (yyval.stmt) = MK_STMT(ae_stmt_exp, (yylsp[0])); }
#line 3482 "src/parser.c"
    break;

  case 133: /* exp: binary_exp  */
#line 597 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3488 "src/parser.c"
    break;

  case 134: /* exp: binary_exp "," exp  */
#line 599 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3500 "src/parser.c"
    break;

  case 136: /* binary_exp: binary_exp "@" decl_exp  */
#line 609 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3506 "src/parser.c"
    break;

  case 137: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 610 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3512 "src/parser.c"
    break;

  case 138: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 611 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3518 "src/parser.c"
    break;

  case 139: /* call_template: ":[" tmplarg_list "]"  */
#line 613 "src/gwion.y"
                                     { (yyval.tmplarg_list) = (yyvsp[-1].tmplarg_list); }
#line 3524 "src/parser.c"
    break;

  case 140: /* call_template: %empty  */
#line 613 "src/gwion.y"
                                                           { (yyval.tmplarg_list) = NULL; }
#line 3530 "src/parser.c"
    break;

  case 146: /* array_exp: "[" exp "]"  */
#line 618 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3536 "src/parser.c"
    break;

  case 147: /* array_exp: "[" exp "]" array_exp  */
#line 619 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3544 "src/parser.c"
    break;

  case 148: /* array_exp: "[" exp "]" "[" "]"  */
#line 622 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3550 "src/parser.c"
    break;

  case 149: /* array_empty: "[" "]"  */
#line 626 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3556 "src/parser.c"
    break;

  case 150: /* array_empty: array_empty "[" "]"  */
#line 627 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3562 "src/parser.c"
    break;

  case 151: /* array_empty: array_empty array_exp  */
#line 628 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3568 "src/parser.c"
    break;

  case 152: /* dict_list: binary_exp ":" binary_exp  */
#line 632 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3574 "src/parser.c"
    break;

  case 153: /* dict_list: dict_list "," binary_exp ":" binary_exp  */
#line 633 "src/gwion.y"
                                            { (yyvsp[-4].exp)->next->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3580 "src/parser.c"
    break;

  case 154: /* range: "[" exp ":" exp "]"  */
#line 636 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3586 "src/parser.c"
    break;

  case 155: /* range: "[" exp ":" "]"  */
#line 637 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3592 "src/parser.c"
    break;

  case 156: /* range: "[" ":" exp "]"  */
#line 638 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3598 "src/parser.c"
    break;

  case 160: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 644 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3604 "src/parser.c"
    break;

  case 161: /* decl_exp: type_decl_flag2 flag type_decl_array call_paren var_decl  */
#line 645 "src/gwion.y"
                                                             {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-2].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-4].flag) | (yyvsp[-3].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1]));
  }
#line 3614 "src/parser.c"
    break;

  case 162: /* func_args: "(" arg_list ")"  */
#line 651 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3620 "src/parser.c"
    break;

  case 163: /* func_args: "(" ")"  */
#line 651 "src/gwion.y"
                                                   { (yyval.arg_list) = NULL; }
#line 3626 "src/parser.c"
    break;

  case 164: /* decl_template: ":[" specialized_list "]"  */
#line 654 "src/gwion.y"
                            { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3632 "src/parser.c"
    break;

  case 165: /* decl_template: ":[" specialized_list "..." "]"  */
#line 655 "src/gwion.y"
                                              {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), spec);
}
#line 3641 "src/parser.c"
    break;

  case 166: /* decl_template: ":[" "..." "]"  */
#line 659 "src/gwion.y"
                                {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_INI(Specialized, (yyval.specialized_list), spec);
}
#line 3650 "src/parser.c"
    break;

  case 167: /* decl_template: %empty  */
#line 663 "src/gwion.y"
                      { (yyval.specialized_list) = NULL; }
#line 3656 "src/parser.c"
    break;

  case 168: /* global: "global"  */
#line 665 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3662 "src/parser.c"
    break;

  case 170: /* opt_global: %empty  */
#line 666 "src/gwion.y"
                            { (yyval.flag) = ae_flag_none; }
#line 3668 "src/parser.c"
    break;

  case 171: /* storage_flag: "static"  */
#line 668 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3674 "src/parser.c"
    break;

  case 173: /* access_flag: "private"  */
#line 670 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3680 "src/parser.c"
    break;

  case 174: /* access_flag: "protect"  */
#line 671 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3686 "src/parser.c"
    break;

  case 175: /* flag: access_flag  */
#line 674 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3692 "src/parser.c"
    break;

  case 176: /* flag: storage_flag  */
#line 675 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3698 "src/parser.c"
    break;

  case 177: /* flag: access_flag storage_flag  */
#line 676 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3704 "src/parser.c"
    break;

  case 178: /* flag: %empty  */
#line 677 "src/gwion.y"
           { (yyval.flag) = ae_flag_none; }
#line 3710 "src/parser.c"
    break;

  case 179: /* final: "final"  */
#line 680 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3716 "src/parser.c"
    break;

  case 180: /* final: %empty  */
#line 680 "src/gwion.y"
                                                { (yyval.flag) = ae_flag_none; }
#line 3722 "src/parser.c"
    break;

  case 181: /* modifier: "abstract" final  */
#line 682 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3728 "src/parser.c"
    break;

  case 183: /* func_def_base: "fun" func_base func_args code_list  */
#line 685 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].arg_list);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3737 "src/parser.c"
    break;

  case 184: /* func_def_base: "fun" func_base func_args ";"  */
#line 689 "src/gwion.y"
                                     {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].arg_list);
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3747 "src/parser.c"
    break;

  case 185: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 694 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].arg_list), (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale;
   (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3758 "src/parser.c"
    break;

  case 186: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 700 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3769 "src/parser.c"
    break;

  case 187: /* abstract_fdef: "fun" flag "abstract" type_decl_array "<identifier>" decl_template func_args ";"  */
#line 709 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3781 "src/parser.c"
    break;

  case 193: /* op_base: type_decl_array op_op decl_template "(" arg "," arg ")"  */
#line 720 "src/gwion.y"
    {
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].arg);
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3793 "src/parser.c"
    break;

  case 194: /* op_base: type_decl_array post_op decl_template "(" arg ")"  */
#line 728 "src/gwion.y"
    {
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].arg));
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3804 "src/parser.c"
    break;

  case 195: /* op_base: unary_op type_decl_array decl_template "(" arg ")"  */
#line 735 "src/gwion.y"
    {
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].arg));
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3816 "src/parser.c"
    break;

  case 196: /* op_base: type_decl_array OPID_A func_args  */
#line 743 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].arg_list), ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3825 "src/parser.c"
    break;

  case 197: /* operator: "operator"  */
#line 748 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3831 "src/parser.c"
    break;

  case 198: /* operator: "operator" global  */
#line 748 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3837 "src/parser.c"
    break;

  case 199: /* op_def: operator op_base code_list  */
#line 751 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3843 "src/parser.c"
    break;

  case 200: /* op_def: operator op_base ";"  */
#line 753 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3849 "src/parser.c"
    break;

  case 201: /* op_def: operator "abstract" op_base ";"  */
#line 755 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3855 "src/parser.c"
    break;

  case 205: /* func_def: operator "new" func_args code_list  */
#line 759 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-3].flag), (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 3864 "src/parser.c"
    break;

  case 206: /* func_def: operator "new" func_args ";"  */
#line 764 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3873 "src/parser.c"
    break;

  case 207: /* func_def: operator "abstract" "new" func_args ";"  */
#line 769 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 3882 "src/parser.c"
    break;

  case 208: /* type_decl_base: "<identifier>"  */
#line 775 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3888 "src/parser.c"
    break;

  case 209: /* type_decl_base: "(" flag type_decl_array decl_template func_args func_effects ")"  */
#line 776 "src/gwion.y"
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
#line 3904 "src/parser.c"
    break;

  case 210: /* type_decl_tmpl: type_decl_base call_template  */
#line 790 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 3910 "src/parser.c"
    break;

  case 211: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 791 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 3916 "src/parser.c"
    break;

  case 213: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 796 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3922 "src/parser.c"
    break;

  case 214: /* option: "?"  */
#line 799 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3928 "src/parser.c"
    break;

  case 215: /* option: OPTIONS  */
#line 799 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3934 "src/parser.c"
    break;

  case 216: /* option: %empty  */
#line 799 "src/gwion.y"
                                                                        { (yyval.uval) = 0; }
#line 3940 "src/parser.c"
    break;

  case 217: /* type_decl_opt: type_decl_noflag option  */
#line 800 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3946 "src/parser.c"
    break;

  case 219: /* type_decl: type_decl_flag type_decl_opt  */
#line 801 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3952 "src/parser.c"
    break;

  case 220: /* type_decl_flag: "late"  */
#line 804 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3958 "src/parser.c"
    break;

  case 221: /* type_decl_flag: "const"  */
#line 805 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3964 "src/parser.c"
    break;

  case 222: /* type_decl_flag2: "var"  */
#line 807 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3970 "src/parser.c"
    break;

  case 224: /* variable: "<identifier>" ";"  */
#line 810 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.variable) = MK_VAR(td, (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});
}
#line 3979 "src/parser.c"
    break;

  case 225: /* variable: type_decl_array "<identifier>" ";"  */
#line 814 "src/gwion.y"
                         { (yyval.variable) = MK_VAR((yyvsp[-2].type_decl), (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});}
#line 3985 "src/parser.c"
    break;

  case 226: /* variable_list: variable  */
#line 816 "src/gwion.y"
                         { YYLIST_INI(Variable, (yyval.variable_list), (yyvsp[0].variable)); }
#line 3991 "src/parser.c"
    break;

  case 227: /* variable_list: variable_list variable  */
#line 817 "src/gwion.y"
                         { YYLIST_END(Variable, (yyval.variable_list), (yyvsp[-1].variable_list), (yyvsp[0].variable)); }
#line 3997 "src/parser.c"
    break;

  case 228: /* union_def: "union" flag "<identifier>" decl_template "{" variable_list "}"  */
#line 820 "src/gwion.y"
                                                        {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].variable_list), (yylsp[-4]));
      (yyval.union_def)->tag.sym = (yyvsp[-4].sym); // put tag in ctor
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4009 "src/parser.c"
    break;

  case 229: /* var_decl: "<identifier>"  */
#line 829 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4015 "src/parser.c"
    break;

  case 230: /* arg_decl: "<identifier>"  */
#line 831 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4021 "src/parser.c"
    break;

  case 231: /* arg_decl: %empty  */
#line 832 "src/gwion.y"
                 { (yyval.var_decl) = (struct Var_Decl_) {
            .tag = { .loc = {.first = arg->pos, .last = arg->pos }}};
        }
#line 4029 "src/parser.c"
    break;

  case 245: /* opt_exp: exp  */
#line 842 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4035 "src/parser.c"
    break;

  case 246: /* opt_exp: %empty  */
#line 842 "src/gwion.y"
                                   { (yyval.exp) = NULL; }
#line 4041 "src/parser.c"
    break;

  case 248: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 845 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4047 "src/parser.c"
    break;

  case 249: /* con_exp: log_or_exp "?:" con_exp  */
#line 847 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4053 "src/parser.c"
    break;

  case 251: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 849 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4059 "src/parser.c"
    break;

  case 253: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 850 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4065 "src/parser.c"
    break;

  case 255: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 851 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4071 "src/parser.c"
    break;

  case 257: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 852 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4077 "src/parser.c"
    break;

  case 259: /* and_exp: and_exp "&" eq_exp  */
#line 853 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4083 "src/parser.c"
    break;

  case 261: /* eq_exp: eq_exp eq_op rel_exp  */
#line 854 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4089 "src/parser.c"
    break;

  case 263: /* rel_exp: rel_exp rel_op shift_exp  */
#line 855 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4095 "src/parser.c"
    break;

  case 265: /* shift_exp: shift_exp shift_op add_exp  */
#line 856 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4101 "src/parser.c"
    break;

  case 267: /* add_exp: add_exp add_op mul_exp  */
#line 857 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4107 "src/parser.c"
    break;

  case 269: /* mul_exp: mul_exp mul_op dur_exp  */
#line 858 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4113 "src/parser.c"
    break;

  case 271: /* dur_exp: dur_exp "::" cast_exp  */
#line 859 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4119 "src/parser.c"
    break;

  case 273: /* cast_exp: cast_exp "$" type_decl_array  */
#line 862 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4125 "src/parser.c"
    break;

  case 280: /* unary_exp: unary_op unary_exp  */
#line 869 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4131 "src/parser.c"
    break;

  case 281: /* unary_exp: "spork" unary_exp  */
#line 870 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4137 "src/parser.c"
    break;

  case 282: /* unary_exp: "fork" unary_exp  */
#line 871 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4143 "src/parser.c"
    break;

  case 283: /* unary_exp: "new" type_decl_array call_paren  */
#line 872 "src/gwion.y"
                                     {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].type_decl), (yyvsp[0].exp) ?: new_prim_nil(mpool(arg), (yylsp[0])), (yyloc));
  }
#line 4151 "src/parser.c"
    break;

  case 284: /* unary_exp: "new" type_decl_array  */
#line 875 "src/gwion.y"
                          {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4157 "src/parser.c"
    break;

  case 285: /* unary_exp: "spork" code_list  */
#line 876 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4163 "src/parser.c"
    break;

  case 286: /* unary_exp: "fork" code_list  */
#line 877 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4169 "src/parser.c"
    break;

  case 287: /* unary_exp: "spork" captures code_list  */
#line 878 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4175 "src/parser.c"
    break;

  case 288: /* unary_exp: "fork" captures code_list  */
#line 879 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4181 "src/parser.c"
    break;

  case 289: /* unary_exp: "$" type_decl_array  */
#line 880 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4187 "src/parser.c"
    break;

  case 290: /* lambda_list: "<identifier>"  */
#line 883 "src/gwion.y"
    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){.tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_INI(Arg, (yyval.arg_list), a); }
#line 4195 "src/parser.c"
    break;

  case 291: /* lambda_list: lambda_list "<identifier>"  */
#line 886 "src/gwion.y"
                    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){ .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_END(Arg, (yyval.arg_list), (yyvsp[-1].arg_list), a);
}
#line 4204 "src/parser.c"
    break;

  case 292: /* lambda_arg: "\\" lambda_list  */
#line 891 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4210 "src/parser.c"
    break;

  case 293: /* lambda_arg: "\\"  */
#line 891 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4216 "src/parser.c"
    break;

  case 295: /* tmplarg: type_decl_array  */
#line 894 "src/gwion.y"
                         {
    (yyval.tmplarg) = (TmplArg) { .d = { .td = (yyvsp[0].type_decl)}, .type = tmplarg_td};
  }
#line 4224 "src/parser.c"
    break;

  case 296: /* tmplarg: tmplarg_exp  */
#line 897 "src/gwion.y"
                {
    (yyval.tmplarg) = (TmplArg) { .d = { .exp = (yyvsp[0].exp)}, .type = tmplarg_exp};
  }
#line 4232 "src/parser.c"
    break;

  case 297: /* tmplarg_list: tmplarg  */
#line 901 "src/gwion.y"
                           { YYLIST_INI(TmplArg, (yyval.tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4238 "src/parser.c"
    break;

  case 298: /* tmplarg_list: tmplarg_list "," tmplarg  */
#line 902 "src/gwion.y"
                           { YYLIST_END(TmplArg, (yyval.tmplarg_list), (yyvsp[-2].tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4244 "src/parser.c"
    break;

  case 299: /* call_paren: "(" exp ")"  */
#line 905 "src/gwion.y"
            { (yyval.exp) = (yyvsp[-1].exp); }
#line 4250 "src/parser.c"
    break;

  case 300: /* call_paren: "(" ")"  */
#line 906 "src/gwion.y"
        { (yyval.exp) = NULL; }
#line 4256 "src/parser.c"
    break;

  case 303: /* dot_exp: post_exp "." "<identifier>"  */
#line 910 "src/gwion.y"
                         {
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4264 "src/parser.c"
    break;

  case 305: /* post_exp: post_exp array  */
#line 916 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4270 "src/parser.c"
    break;

  case 306: /* post_exp: post_exp range  */
#line 918 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4276 "src/parser.c"
    break;

  case 307: /* post_exp: post_exp call_template call_paren  */
#line 920 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].tmplarg_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].tmplarg_list)); }
#line 4283 "src/parser.c"
    break;

  case 308: /* post_exp: post_exp post_op  */
#line 923 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4289 "src/parser.c"
    break;

  case 309: /* post_exp: dot_exp  */
#line 924 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4295 "src/parser.c"
    break;

  case 310: /* interp_exp: "<interp string end>"  */
#line 928 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4301 "src/parser.c"
    break;

  case 311: /* interp_exp: "<interp string lit>" interp_exp  */
#line 929 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4307 "src/parser.c"
    break;

  case 312: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 930 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4313 "src/parser.c"
    break;

  case 313: /* interp: "${" interp_exp  */
#line 932 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4319 "src/parser.c"
    break;

  case 314: /* interp: interp "${" interp_exp  */
#line 933 "src/gwion.y"
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
#line 4334 "src/parser.c"
    break;

  case 315: /* capture: "<identifier>"  */
#line 944 "src/gwion.y"
            { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }};}
#line 4340 "src/parser.c"
    break;

  case 316: /* capture: "&" "<identifier>"  */
#line 944 "src/gwion.y"
                                                                           { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }, .is_ref = true }; }
#line 4346 "src/parser.c"
    break;

  case 317: /* capture_list: capture  */
#line 946 "src/gwion.y"
                       { YYLIST_INI(Capture, (yyval.captures), (yyvsp[0].capture)); }
#line 4352 "src/parser.c"
    break;

  case 318: /* capture_list: capture_list capture  */
#line 947 "src/gwion.y"
                       { YYLIST_END(Capture, (yyval.captures), (yyvsp[-1].captures), (yyvsp[0].capture)); }
#line 4358 "src/parser.c"
    break;

  case 319: /* captures: ":" capture_list ":"  */
#line 948 "src/gwion.y"
                               { (yyval.captures) = (yyvsp[-1].captures); }
#line 4364 "src/parser.c"
    break;

  case 320: /* captures: %empty  */
#line 948 "src/gwion.y"
                                                      { (yyval.captures) = NULL; }
#line 4370 "src/parser.c"
    break;

  case 323: /* basic_exp: number  */
#line 952 "src/gwion.y"
                         {
  (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc)); 
  (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4379 "src/parser.c"
    break;

  case 324: /* basic_exp: "<float>"  */
#line 956 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4385 "src/parser.c"
    break;

  case 325: /* basic_exp: "<litteral string>"  */
#line 957 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4391 "src/parser.c"
    break;

  case 326: /* basic_exp: "<litteral char>"  */
#line 958 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4397 "src/parser.c"
    break;

  case 327: /* prim_exp: "<identifier>"  */
#line 961 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4403 "src/parser.c"
    break;

  case 329: /* prim_exp: interp  */
#line 963 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4409 "src/parser.c"
    break;

  case 330: /* prim_exp: "[" opt_exp array_lit_ed  */
#line 964 "src/gwion.y"
                             { 
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4418 "src/parser.c"
    break;

  case 331: /* prim_exp: "{" dict_list "}"  */
#line 968 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4424 "src/parser.c"
    break;

  case 332: /* prim_exp: range  */
#line 969 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4430 "src/parser.c"
    break;

  case 333: /* prim_exp: "<<<" exp ">>>"  */
#line 970 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4436 "src/parser.c"
    break;

  case 334: /* prim_exp: "(" exp ")"  */
#line 971 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4442 "src/parser.c"
    break;

  case 335: /* prim_exp: "`foo`"  */
#line 972 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last =  { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4453 "src/parser.c"
    break;

  case 336: /* prim_exp: lambda_arg captures code_list  */
#line 978 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4459 "src/parser.c"
    break;

  case 337: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 979 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4465 "src/parser.c"
    break;

  case 338: /* prim_exp: "(" op_op ")"  */
#line 980 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4471 "src/parser.c"
    break;

  case 339: /* prim_exp: "perform" opt_id  */
#line 981 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4477 "src/parser.c"
    break;

  case 340: /* prim_exp: "(" ")"  */
#line 982 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4483 "src/parser.c"
    break;


#line 4487 "src/parser.c"

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

#line 984 "src/gwion.y"

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
  const char *syntaxerr = YY_("syntax error");
  if(!strncmp(_main, syntaxerr, strlen(syntaxerr)))
    scanner_secondary(scan, "check around here", _loc);
  return 0;
}
