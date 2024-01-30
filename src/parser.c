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
  YYSYMBOL_STMT_ASSOC = 125,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 126,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 127,                 /* $accept  */
  YYSYMBOL_ast = 128,                      /* ast  */
  YYSYMBOL_section_list = 129,             /* section_list  */
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
  YYSYMBOL_variable = 225,                 /* variable  */
  YYSYMBOL_variable_list = 226,            /* variable_list  */
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
  YYSYMBOL_tmplarg_list = 256,             /* tmplarg_list  */
  YYSYMBOL_call_paren = 257,               /* call_paren  */
  YYSYMBOL_post_op = 258,                  /* post_op  */
  YYSYMBOL_dot_exp = 259,                  /* dot_exp  */
  YYSYMBOL_post_exp = 260,                 /* post_exp  */
  YYSYMBOL_interp_exp = 261,               /* interp_exp  */
  YYSYMBOL_interp = 262,                   /* interp  */
  YYSYMBOL_capture = 263,                  /* capture  */
  YYSYMBOL_capture_list = 264,             /* capture_list  */
  YYSYMBOL_captures = 265,                 /* captures  */
  YYSYMBOL_array_lit_ed = 266,             /* array_lit_ed  */
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
#define YYLAST   2536

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  350
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  624

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
       0,   202,   202,   203,   206,   207,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   222,   224,   231,   240,
     240,   240,   242,   248,   255,   262,   266,   266,   267,   267,
     269,   274,   275,   277,   283,   290,   291,   293,   294,   296,
     299,   299,   300,   300,   302,   305,   311,   311,   312,   312,
     313,   322,   322,   324,   328,   333,   337,   342,   346,   355,
     367,   375,   376,   387,   389,   390,   393,   395,   399,   400,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   432,   432,   441,   446,   446,   447,   451,
     467,   472,   472,   473,   473,   476,   477,   484,   485,   488,
     493,   493,   496,   508,   509,   511,   522,   533,   534,   538,
     547,   557,   567,   578,   590,   605,   614,   626,   640,   649,
     660,   660,   662,   667,   671,   676,   682,   687,   693,   694,
     704,   705,   706,   707,   709,   709,   711,   711,   711,   711,
     711,   714,   715,   718,   722,   723,   724,   728,   729,   732,
     733,   734,   738,   738,   739,   740,   741,   747,   747,   748,
     748,   750,   751,   755,   759,   761,   762,   762,   764,   764,
     766,   767,   770,   771,   772,   773,   776,   776,   778,   778,
     781,   786,   793,   799,   807,   816,   816,   816,   816,   816,
     818,   828,   837,   847,   853,   853,   855,   857,   859,   862,
     862,   862,   863,   869,   876,   885,   886,   900,   901,   905,
     906,   909,   909,   909,   910,   911,   911,   914,   915,   917,
     917,   919,   919,   922,   926,   928,   929,   932,   941,   943,
     944,   944,   946,   946,   947,   947,   947,   947,   948,   948,
     949,   949,   950,   950,   950,   952,   952,   953,   954,   956,
     959,   959,   960,   960,   961,   961,   962,   962,   963,   963,
     964,   964,   965,   965,   966,   966,   967,   967,   968,   968,
     969,   969,   971,   971,   974,   974,   974,   975,   975,   978,
     979,   980,   981,   982,   985,   986,   987,   988,   989,   990,
     993,   996,  1001,  1001,  1003,  1004,  1007,  1011,  1012,  1015,
    1016,  1018,  1018,  1020,  1029,  1030,  1032,  1034,  1037,  1039,
    1043,  1044,  1045,  1047,  1048,  1059,  1059,  1061,  1062,  1063,
    1063,  1064,  1064,  1067,  1071,  1072,  1073,  1076,  1077,  1078,
    1079,  1087,  1088,  1089,  1090,  1091,  1097,  1098,  1099,  1100,
    1101
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
  "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "ast", "section_list",
  "section", "class_flag", "class_def", "class_body", "trait_def",
  "number", "decimal", "prim_def", "class_ext", "traits", "extend_def",
  "id_list", "specialized", "specialized_list", "stmt_list", "fptr_base",
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
  "type_decl_flag2", "variable", "variable_list", "union_def", "var_decl",
  "arg_decl", "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op",
  "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
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

#define YYPACT_NINF (-470)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-253)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     840,  -470,  1612,  1769,   948,   277,  -470,    63,  -470,  1377,
    -470,    87,   108,   128,  2276,   277,  1475,  -470,  -470,  1377,
      64,   168,   277,   277,   145,   276,   145,   277,  -470,  -470,
     277,   277,  -470,   105,  1377,   136,     2,   140,  -470,  -470,
    -470,  -470,  -470,  1728,  -470,  -470,  -470,  -470,  -470,  -470,
    -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,
     276,   276,   316,   316,  2276,  -470,  -470,  -470,   191,   840,
    -470,  -470,  -470,  -470,  -470,  -470,  1377,  -470,   277,  -470,
    -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,   236,  -470,
    -470,  -470,    40,  -470,  -470,   198,    57,  -470,  -470,  -470,
    -470,  2401,  -470,  -470,  -470,   277,  -470,  -470,   -20,   157,
     161,   164,   169,   -34,   246,   103,   162,   142,   187,   193,
    2380,  -470,   205,  -470,  -470,   118,   224,  -470,  -470,  -470,
    2276,  -470,   289,   301,  -470,  -470,  -470,  -470,  -470,  -470,
    -470,  -470,  -470,  -470,  -470,  -470,  -470,   303,  -470,   306,
    -470,  -470,  -470,  -470,  2276,   225,   226,  -470,  1056,    35,
     307,  -470,  -470,  -470,  -470,   317,  -470,  -470,   217,   252,
    2276,   242,  2317,  1516,   248,   327,   256,  -470,   341,   313,
    -470,  -470,  -470,   263,   300,   265,  -470,   273,   277,  -470,
      44,  -470,   264,   245,   319,   195,  -470,   350,    19,  -470,
     281,   360,   276,   286,   279,  -470,  -470,   287,   367,   291,
    2276,  1728,  -470,   309,  -470,  -470,  -470,   373,  1164,   -27,
    -470,  -470,   374,  -470,  -470,   374,   282,  -470,  -470,  -470,
     276,  2276,  -470,  -470,   382,  -470,  2276,  2276,  2276,  2276,
     338,   317,  2417,    97,   276,   276,  2276,  2380,  2380,  2380,
    2380,  2380,  2380,  -470,  -470,  2380,  2380,  2380,  -470,  2380,
    -470,  2380,  2380,   276,  -470,   378,  1769,   308,    54,   373,
    -470,  -470,  -470,  1728,    74,  -470,  -470,   385,  1865,  -470,
    -470,  -470,  -470,  2276,  -470,   244,   171,  -470,   276,  -470,
     276,   388,  2276,   392,    17,  1516,    27,   377,   387,  -470,
    -470,  -470,   313,   290,   364,  -470,  -470,   290,   314,   276,
     245,   326,  -470,    19,  -470,  -470,  -470,  1906,  -470,   405,
    -470,  -470,   356,   251,   391,   335,   290,   326,  -470,   276,
     414,  -470,   368,  -470,  1728,  2002,  -470,  -470,  1272,  -470,
     345,  -470,   -21,  1164,  -470,  -470,  -470,   346,   424,  -470,
    -470,  -470,  -470,  -470,   317,   428,   206,   317,   290,   290,
    -470,  -470,   290,    49,   340,  -470,   157,   161,   164,   169,
     -34,   246,   103,   162,   142,   187,   193,  -470,  1164,  -470,
      28,  -470,  -470,  -470,  -470,   153,  -470,  -470,  -470,  -470,
    -470,   430,    59,  -470,   358,  -470,   260,  -470,  -470,   363,
     365,  1377,   436,  2276,  1377,  2043,   369,   434,  2276,  -470,
     159,    43,    64,  -470,     5,   400,  -470,   314,   326,   215,
     290,  -470,  -470,   298,  -470,  -470,   442,  2139,  -470,   450,
    -470,   358,  -470,   270,   375,   379,   453,   290,   447,    56,
    -470,   456,   455,   276,  -470,  -470,  -470,   457,  -470,  -470,
    -470,  -470,   290,  1377,   462,  -470,  -470,  -470,  -470,   461,
     463,   464,  -470,  -470,   393,  2380,    41,   467,    54,  -470,
    -470,  2276,  -470,   376,   276,  -470,   290,   290,   460,  -470,
      71,  -470,  1377,   465,   384,  -470,  2276,   458,   459,  -470,
    -470,   361,  -470,   477,  1377,   276,   475,   314,  -470,   196,
     276,   314,   215,   482,  -470,   608,  -470,   360,  -470,   404,
    -470,  -470,  -470,  -470,   276,  -470,  -470,  -470,  -470,  -470,
     278,  -470,   276,   374,   483,  -470,   466,  -470,  -470,   276,
     276,   276,  -470,  -470,  -470,  2180,  -470,  -470,  -470,  2276,
    -470,   360,  -470,  1377,  1377,  -470,  1377,   434,    76,  2276,
     394,  1377,   409,    43,   484,  -470,   410,  -470,  -470,    12,
    -470,  -470,   215,  -470,  -470,   724,   391,  -470,  -470,   493,
     415,  -470,   209,   421,  -470,  -470,   374,  2276,   499,   500,
     497,   503,  -470,    -7,   502,  -470,  -470,  -470,  2276,  1377,
    -470,  1377,  -470,  -470,  -470,  -470,  -470,   504,  -470,  -470,
    -470,   505,  -470,   507,  -470,  -470,  -470,  -470,    -7,  -470,
     276,  -470,  -470,  -470,    92,  -470,  1377,  -470,  -470,  -470,
     508,  1377,  -470,  -470
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   137,     0,   256,     0,   185,   231,     0,   117,     0,
     118,     0,     0,     0,     0,   185,     0,   130,   131,     0,
     102,     0,   185,   185,   177,     0,   204,   185,    48,    49,
     185,   185,   228,     0,     0,   303,     0,     0,   227,    23,
     334,   335,   336,     0,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,   337,   311,   284,   312,   285,
       0,     0,     0,     0,     0,   288,   287,   345,     0,     2,
       4,     8,     9,   333,    15,    10,     6,    13,   185,    14,
      85,    88,    37,    92,    91,    90,    11,    86,     0,    83,
      89,    84,     0,    87,    82,     0,   138,   342,   140,   209,
     210,     0,   211,     7,   232,   185,    12,   164,   257,   260,
     262,   264,   266,   268,   270,   272,   274,   276,   278,   280,
       0,   282,   330,   286,   319,   289,   339,   338,   314,   350,
       0,   250,   284,   285,   253,   254,   150,   146,   247,   245,
     246,   244,   147,   248,   249,   148,   149,     0,   195,     0,
     197,   196,   199,   198,     0,   255,     0,    66,     0,   138,
       0,   178,   175,   180,   181,     0,   179,   183,   182,   187,
       0,     0,     0,     0,     0,     0,     0,   133,     0,     0,
     101,   349,    95,     0,   187,     0,   176,     0,   185,   215,
       0,    54,     0,   145,   219,   223,   225,    52,     0,   205,
       0,     0,     0,     0,     0,   127,   300,   302,     0,     0,
     256,     0,   320,     0,   323,   299,    53,   294,     0,     0,
     295,   291,     0,   296,   292,     0,     0,     1,     5,    38,
       0,     0,   135,    24,     0,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   256,     0,     0,     0,
       0,     0,     0,   242,   243,     0,     0,     0,   251,     0,
     252,     0,     0,     0,   290,     0,     0,     0,     0,     0,
     315,   316,   318,     0,     0,   344,   348,     0,     0,   332,
     331,   340,    67,     0,   341,     0,     0,   184,     0,   186,
       0,     0,     0,   337,     0,     0,     0,     0,     0,   132,
      96,    98,   100,   174,   187,   189,    16,   174,    28,     0,
     145,     0,   217,     0,   221,   222,   224,     0,   162,   163,
      51,   226,     0,     0,    42,     0,   174,     0,   301,    62,
       0,   255,     0,   321,     0,     0,   293,    68,     0,   325,
       0,   327,     0,     0,   297,   298,   343,     0,     0,   134,
     139,   143,   141,   142,     0,     0,     0,     0,   174,   174,
     207,   206,   174,     0,     0,   259,   261,   263,   265,   267,
     269,   271,   273,   275,   277,   279,   281,   283,     0,   346,
       0,   313,   305,   306,   307,     0,   304,   317,   324,   161,
     160,     0,   157,   168,     0,    57,     0,   191,   190,     0,
       0,     0,     0,     0,     0,     0,     0,   230,     0,   113,
       0,     0,   102,    99,     0,    27,   188,    28,     0,     0,
     174,   218,    31,     0,   220,   154,     0,     0,   156,     0,
     170,   241,    64,     0,     0,    43,     0,   174,     0,     0,
      59,    61,     0,    62,    81,   322,   310,     0,    69,   326,
     329,   328,   174,     0,     0,   208,   213,   212,   203,     0,
       0,     0,   238,   165,     0,     0,   138,   151,     0,   144,
     159,     0,   239,    56,     0,   167,   174,   174,   128,   120,
       0,   125,     0,     0,     0,   229,     0,   111,   116,   114,
     105,     0,   107,   104,     0,     0,     0,    28,    35,     0,
       0,    28,     0,    29,    21,     0,    22,     0,    30,     0,
     155,    25,   240,    63,     0,   169,    40,    41,    45,    39,
       0,    93,     0,     0,     0,   309,    46,   119,   214,     0,
       0,     0,   166,   258,   347,     0,   152,   308,   158,     0,
      58,     0,    44,     0,     0,   121,     0,   230,     0,     0,
       0,     0,     0,   103,     0,    97,     0,   173,    33,     0,
     171,    26,     0,    18,    20,     0,    42,    32,    65,   215,
       0,   235,     0,     0,    60,   193,     0,     0,     0,     0,
       0,     0,   153,    55,     0,   129,   126,   122,     0,     0,
     110,     0,   115,   106,   108,   109,    34,     0,    36,    17,
      19,     0,   233,     0,   237,   236,    94,   192,    47,    50,
       0,   201,   202,   194,     0,   123,   112,   172,   216,   234,
       0,     0,   200,   124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -470,  -470,    10,   -64,   201,  -470,  -469,  -470,   -86,   194,
    -470,  -470,  -346,  -470,  -298,   -41,  -470,    -3,  -470,  -470,
     -47,  -470,  -470,  -470,  -470,  -470,   -58,    20,    45,  -278,
    -470,  -470,    78,     9,  -470,  -470,   -59,  -470,    -9,  -470,
    -470,  -470,   220,  -470,  -470,  -470,   112,  -470,   -28,  -470,
    -470,  -470,   116,  -470,  -470,   357,  -470,  -470,  -470,  -470,
    -470,  -152,    32,     8,  -171,  -470,  -188,  -470,    58,   402,
    -470,     0,  -209,  -454,  -279,    73,  -470,   362,  -470,    11,
    -164,  -470,  -470,  -470,   294,   292,  -470,  -470,  -470,   343,
    -470,   218,  -470,   347,  -470,   -23,    -8,  -470,   -31,  -470,
    -470,    79,   107,  -470,  -470,  -101,  -100,  -102,   -99,  -155,
    -236,  -470,   296,   297,   302,   299,   304,   293,   295,   305,
     310,   311,   312,   -84,   -12,  -470,  -470,  -470,    85,  -470,
    -239,   -98,  -470,  -470,  -192,  -470,   212,  -470,   -19,  -470,
    -260,  -470
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,    69,    70,   183,    71,   506,    72,    73,   234,
      74,   501,   419,    75,   423,   498,   499,    76,   201,   435,
     436,   165,    77,   578,    78,    79,   191,   217,   394,   440,
     396,   441,   442,   432,   433,    80,   220,    81,    82,    83,
     573,    84,   301,   412,   302,    85,   181,   554,   492,   493,
      86,   550,   409,   410,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,   269,   148,   270,   319,   160,    97,
     320,    98,   286,   324,   415,   166,   187,   167,   168,   184,
     290,   306,    99,   100,   149,   243,   101,   102,   103,   193,
     194,   195,   316,   196,   197,   104,   486,   105,   571,   572,
     106,   463,   473,   513,   255,   150,   151,   152,   153,   156,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   207,   122,   383,   384,   385,
     336,   123,   124,   125,   214,   126,   341,   342,   222,   281,
     127,   128
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     171,   158,   198,   216,   223,   228,   233,   395,   386,   318,
     179,   365,   159,   256,   259,   257,   169,   244,   261,   333,
     305,   295,   312,   404,   188,   205,   176,   272,   417,   439,
     387,   406,   356,   563,   147,   155,   467,   198,   198,   236,
     162,   202,   203,   232,   225,   236,   175,   438,   178,   188,
     221,   224,   534,   566,   335,   332,   339,   495,   496,   188,
     509,   236,   339,   471,   495,   597,   521,   229,   170,   253,
     192,   502,   246,   450,   254,   213,   247,   544,   198,   459,
     460,   388,   589,   461,   340,   208,   237,   584,   497,   230,
     340,   364,   172,   599,   248,   497,   226,   186,   621,   199,
     360,    39,   189,   265,    39,   215,    32,   343,   264,   209,
     237,   238,   239,   173,    38,    39,   245,    40,    41,    42,
     503,   407,   278,  -145,   464,   266,   490,   189,   237,   283,
     190,   428,   462,   174,   237,   238,   239,   189,   274,   421,
     416,   507,   445,   405,   359,   454,   242,   180,   458,   229,
     237,   558,   237,   238,   239,   562,   244,   468,   519,   238,
     239,   469,   267,   344,   237,   190,   345,   237,   283,   237,
     488,   182,   347,   526,   397,   238,   239,   238,   239,   198,
     294,   343,   408,   162,   361,   237,   277,   363,   204,   238,
     239,   227,   238,   239,   238,   239,   540,   541,   542,   309,
     559,   235,   291,    56,   560,    58,   379,   198,   386,   456,
     238,   239,   143,   144,   188,   338,   343,   198,   504,   206,
     604,   198,   198,   210,   185,   505,   159,   398,   200,   533,
     260,   134,   135,   268,   279,   280,   233,   351,   352,   353,
     198,   231,   331,   213,   574,   198,   131,   325,   258,   188,
     393,   579,   580,   581,   161,   162,   188,   430,     8,   249,
      10,    32,   198,   348,   474,   198,   475,   198,   350,    38,
     256,   259,   257,   250,   514,   261,   515,   251,   331,   536,
     252,   188,   262,   188,   263,   242,   198,   314,   315,   362,
     273,   392,   569,   288,   289,  -251,    32,   457,   380,   219,
     198,   508,   509,    32,    38,   213,   198,  -252,   377,   275,
     391,    38,   276,   382,   161,   162,   163,   164,   284,   278,
     190,     2,   285,     3,   402,   491,   218,   189,    32,   229,
      32,   296,   620,   399,   189,   400,    38,   297,    38,   298,
     338,   304,   289,   188,   299,   300,   303,    20,   307,   426,
     138,   139,   140,   141,   420,   190,   308,   317,   311,   189,
     268,   569,   190,   313,   322,   323,   213,   447,   431,   326,
     328,    35,   329,   327,   330,   338,   334,    39,   335,    40,
      41,    42,    43,   346,   343,   349,   466,   190,   378,   190,
      32,   381,   478,   389,   401,   481,   403,   411,    38,    55,
     408,    56,    57,    58,    59,   414,   289,    60,   418,   422,
     219,   480,   427,    61,    62,    63,    64,    39,   437,   443,
     198,   189,   434,    56,    57,    58,    59,   444,   449,   452,
     453,   455,    65,    66,   465,   354,    67,   483,   470,   479,
     487,   472,   216,   500,   527,   198,   476,   485,   477,   190,
     467,   198,   484,   511,    65,    66,   518,   520,   516,   426,
     522,   523,   517,   525,   575,   528,   529,   491,   530,   531,
     539,   546,   198,   545,   535,   543,   462,   198,   547,   274,
     552,   553,   549,   557,   551,   555,   509,   567,   591,   576,
     577,   198,   593,   596,   548,   595,   602,   198,   603,   198,
     606,   228,   609,   611,   610,   613,   198,   198,   198,   612,
     619,   618,   617,   382,   622,   565,   429,   607,   598,   601,
     561,   524,   413,   568,   494,   594,   489,   271,   292,   538,
     287,   424,   355,   310,   585,   586,   358,   587,   512,   588,
     556,   605,   592,   532,   366,   321,   367,   583,   371,   198,
     369,   372,   368,   537,   451,     0,   370,     0,     0,   431,
       0,     0,   373,     0,     0,   570,     0,   426,     0,   374,
       0,     0,   375,     0,   376,     0,     0,     0,     0,     0,
     615,   590,     0,     0,     0,   608,     0,   198,   616,     0,
       0,     0,     0,     0,     0,     0,   614,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   229,     0,     0,
       0,     1,   623,     2,     0,     3,     0,   570,     4,   564,
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
       0,     3,     0,     0,     4,   600,     5,     6,     7,     0,
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
       0,     3,    65,    66,     4,   337,    67,     6,     7,     0,
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
       0,     0,     0,     0,    61,    62,    63,    64,   177,     0,
       2,     0,     3,     0,     0,   130,     0,     0,     6,     0,
       0,     0,     0,    65,    66,     0,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
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
       2,     0,     3,   390,     0,   130,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,   425,     0,   130,    32,     0,     6,
      35,     0,     0,     0,     0,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,    32,     0,
       0,    35,    61,    62,    63,    64,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     2,   446,     3,
       0,     0,   130,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,   482,
       3,     0,     0,   130,    32,     0,     6,    35,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,    32,     0,     0,    35,    61,
      62,    63,    64,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     2,     0,     3,   510,     0,   130,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,   582,     0,
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
      40,    41,    42,    43,     0,     2,     0,     3,     0,     0,
     130,     0,    65,    66,     0,     0,    67,     0,     0,     0,
     293,     0,    56,    57,    58,    59,   188,     0,    60,     0,
       0,    20,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,    35,     0,    67,     0,     0,
       0,    39,   240,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,   357,     0,     0,     0,    61,    62,    63,
      64,     0,     0,     0,   189,     0,    56,    57,    58,    59,
       0,     0,     0,     0,     0,     0,    65,    66,   241,     0,
      67,   131,    56,   258,    58,   260,   134,   135,     0,     0,
     136,     0,   190,     0,     0,     0,     0,    65,    66,     0,
     137,   138,   139,   140,   141,   142,   143,   144,     0,     0,
       0,     0,     0,     0,     0,   145,   146
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    61,    63,    69,    92,   285,   268,   197,
      19,   247,     4,   114,   116,   115,     5,   101,   117,   211,
     184,   173,   193,     6,     5,    34,    15,   125,   307,   327,
     269,     4,   241,   502,     2,     3,     8,    60,    61,     4,
      38,    30,    31,     3,    63,     4,    14,   326,    16,     5,
      62,    63,    11,   507,     5,   210,    83,    52,    53,     5,
       4,     4,    83,     4,    52,    53,    10,    76,     5,   103,
      25,   417,    92,    94,   108,    43,    96,     6,   101,   358,
     359,   273,     6,   362,   111,    83,    93,   541,    83,    78,
     111,   246,     5,   562,   114,    83,    64,    24,     6,    26,
       3,    61,    83,   122,    61,    60,    52,    10,   120,    36,
      93,   118,   119,     5,    60,    61,   105,    63,    64,    65,
     418,    94,    94,     5,   363,     7,    83,    83,    93,    94,
     111,   319,    83,     5,    93,   118,   119,    83,   130,   310,
     304,   420,   334,   295,   242,   354,   101,    83,   357,   158,
      93,   497,    93,   118,   119,   501,   240,     4,   437,   118,
     119,     8,    44,   222,    93,   111,   225,    93,    94,    93,
      11,     3,   230,   452,     3,   118,   119,   118,   119,   202,
     172,    10,    23,    38,   243,    93,   154,   245,    83,   118,
     119,     0,   118,   119,   118,   119,   474,   476,   477,   188,
       4,     3,   170,    85,     8,    87,   265,   230,   468,     3,
     118,   119,   109,   110,     5,   218,    10,   240,     3,    83,
      11,   244,   245,    83,    23,    10,   218,   286,    27,   465,
      88,    89,    90,   115,     8,     9,   322,   237,   238,   239,
     263,     5,   210,   211,   522,   268,    84,   202,    86,     5,
       6,   529,   530,   531,    37,    38,     5,     6,    16,   102,
      18,    52,   285,   231,     4,   288,     6,   290,   236,    60,
     371,   373,   372,   112,     4,   374,     6,   113,   246,   467,
     111,     5,    95,     5,    91,   240,   309,    92,    93,   244,
      66,   283,    83,    41,    42,     6,    52,   356,   266,    94,
     323,     3,     4,    52,    60,   273,   329,     6,   263,     6,
     278,    60,     6,   268,    37,    38,    39,    40,    11,    94,
     111,     5,     5,     7,   292,   411,    10,    83,    52,   338,
      52,    83,   610,   288,    83,   290,    60,    10,    60,    83,
     343,    41,    42,     5,     3,    32,    83,    31,    83,   317,
     104,   105,   106,   107,   309,   111,    83,     7,    94,    83,
     115,    83,   111,    44,    83,     5,   334,   335,   323,    83,
      83,    55,     5,    94,    83,   378,    67,    61,     5,    63,
      64,    65,    66,   101,    10,     3,   378,   111,    10,   111,
      52,    83,   401,     8,     6,   404,     4,    10,    60,    83,
      23,    85,    86,    87,    88,   115,    42,    91,    94,    83,
      94,   403,     7,    97,    98,    99,   100,    61,    83,     5,
     443,    83,    31,    85,    86,    87,    88,    59,    83,    83,
       6,     3,   116,   117,    94,    97,   120,   405,     8,     3,
     408,    83,   500,    43,   453,   468,    83,    13,    83,   111,
       8,   474,    83,     3,   116,   117,     3,    10,    83,   427,
       4,     6,    83,     6,   523,     3,     5,   553,     5,     5,
      94,     6,   495,   482,     7,    15,    83,   500,    94,   471,
     119,     4,    24,     8,    25,   494,     4,    83,    94,     6,
      24,   514,    83,    83,   486,    11,     3,   520,    83,   522,
      79,   565,     3,     6,     4,     3,   529,   530,   531,     6,
       3,     6,     8,   468,     6,   505,   322,   576,   559,   566,
     500,   443,   302,   514,   412,   553,   410,   125,   171,   471,
     168,   313,   240,   190,   543,   544,   242,   546,   431,   547,
     495,   572,   551,   464,   248,   198,   249,   539,   255,   572,
     251,   256,   250,   468,   342,    -1,   252,    -1,    -1,   514,
      -1,    -1,   257,    -1,    -1,   520,    -1,   535,    -1,   259,
      -1,    -1,   261,    -1,   262,    -1,    -1,    -1,    -1,    -1,
     589,   549,    -1,    -1,    -1,   577,    -1,   610,   591,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   588,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   616,    -1,    -1,
      -1,     3,   621,     5,    -1,     7,    -1,   572,    10,    11,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
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
      63,    64,    65,    66,    -1,     5,    -1,     7,    -1,    -1,
      10,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,     5,    -1,    91,    -1,
      -1,    31,    -1,    -1,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,   117,    55,    -1,   120,    -1,    -1,
      -1,    61,    41,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    56,    -1,    -1,    -1,    97,    98,    99,
     100,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    97,    -1,
     120,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      93,    -1,   111,    -1,    -1,    -1,    -1,   116,   117,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,   119
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
      83,   189,   236,   261,    67,     5,   257,    11,   144,    83,
     111,   263,   264,    10,   163,   163,   101,   153,   189,     3,
     189,   198,   198,   198,    97,   212,   199,    56,   211,   258,
       3,   163,   155,   153,   236,   237,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   155,    10,   163,
     189,    83,   155,   254,   255,   256,   267,   257,   261,     8,
       8,   189,   190,     6,   155,   156,   157,     3,   163,   155,
     155,     6,   189,     4,     6,   188,     4,    94,    23,   179,
     180,    10,   170,   169,   115,   201,   207,   201,    94,   139,
     155,   191,    83,   141,   218,     8,   189,     7,   193,   136,
       6,   155,   160,   161,    31,   146,   147,    83,   201,   141,
     156,   158,   159,     5,    59,   261,     6,   189,    11,    83,
      94,   263,    83,     6,   199,     3,     3,   163,   199,   201,
     201,   201,    83,   228,   257,    94,   190,     8,     4,     8,
       8,     4,    83,   229,     4,     6,    83,    83,   165,     3,
     190,   165,     6,   189,    83,    13,   223,   189,    11,   179,
      83,   135,   175,   176,   173,    52,    53,    83,   142,   143,
      43,   138,   139,   141,     3,    10,   133,   201,     3,     4,
       8,     3,   229,   230,     4,     6,    83,    83,     3,   201,
      10,    10,     4,     6,   159,     6,   201,   165,     3,     5,
       5,     5,   228,   237,    11,     7,   193,   255,   195,    94,
     156,   201,   201,    15,     6,   165,     6,    94,   190,    24,
     178,    25,   119,     4,   174,   165,   155,     8,   139,     4,
       8,   154,   139,   133,    11,   129,   200,    83,   160,    83,
     155,   225,   226,   167,   156,   163,     6,    24,   150,   156,
     156,   156,     8,   190,   200,   165,   165,   165,   223,     6,
     189,    94,   165,    83,   175,    11,    83,    53,   142,   133,
      11,   147,     3,    83,    11,   225,    79,   163,   190,     3,
       4,     6,     6,     3,   190,   165,   144,     8,     6,     3,
     156,     6,     6,   165
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
     164,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   167,   166,   168,   170,   169,   171,   171,
     172,   173,   173,   174,   174,   175,   175,   176,   176,   177,
     178,   178,   179,   180,   180,   181,   181,   182,   182,   183,
     183,   183,   183,   183,   183,   183,   183,   184,   185,   185,
     186,   186,   187,   187,   187,   187,   188,   188,   189,   189,
     190,   190,   190,   190,   191,   191,   192,   192,   192,   192,
     192,   193,   193,   193,   194,   194,   194,   195,   195,   196,
     196,   196,   197,   197,   198,   198,   198,   199,   199,   200,
     200,   201,   201,   201,   201,   202,   203,   203,   204,   204,
     205,   205,   206,   206,   206,   206,   207,   207,   208,   208,
     209,   209,   209,   209,   210,   211,   211,   211,   211,   211,
     212,   212,   212,   212,   213,   213,   214,   214,   214,   215,
     215,   215,   215,   215,   215,   216,   216,   217,   217,   218,
     218,   219,   219,   219,   220,   221,   221,   222,   222,   223,
     223,   224,   224,   225,   225,   226,   226,   227,   228,   229,
     230,   230,   231,   231,   232,   232,   232,   232,   233,   233,
     234,   234,   235,   235,   235,   236,   236,   237,   237,   237,
     238,   238,   239,   239,   240,   240,   241,   241,   242,   242,
     243,   243,   244,   244,   245,   245,   246,   246,   247,   247,
     248,   248,   249,   249,   250,   250,   250,   250,   250,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     252,   252,   253,   253,   254,   255,   255,   256,   256,   257,
     257,   258,   258,   259,   260,   260,   260,   260,   260,   260,
     261,   261,   261,   262,   262,   263,   263,   264,   264,   265,
     265,   266,   266,   267,   267,   267,   267,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268
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
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     7,     2,     0,     4,     1,     2,
       3,     1,     0,     1,     0,     1,     3,     1,     3,     7,
       2,     0,     5,     1,     2,     7,     5,     1,     1,     5,
       5,     6,     7,     8,    10,     5,     7,     2,     5,     7,
       1,     1,     3,     2,     3,     2,     2,     1,     1,     3,
       1,     3,     3,     3,     3,     0,     1,     1,     1,     1,
       1,     3,     4,     5,     2,     3,     2,     3,     5,     5,
       4,     4,     1,     1,     1,     4,     5,     3,     2,     3,
       2,     3,     5,     3,     0,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     0,     2,     1,
       4,     4,     7,     6,     8,     1,     1,     1,     1,     1,
       8,     6,     6,     3,     1,     2,     3,     3,     4,     1,
       1,     1,     4,     4,     5,     1,     7,     2,     3,     1,
       3,     1,     1,     0,     2,     1,     2,     1,     1,     1,
       0,     1,     1,     2,     3,     1,     2,     7,     1,     1,
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
#line 202 "src/gwion.y"
                  { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2572 "src/parser.c"
    break;

  case 3: /* ast: %empty  */
#line 203 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2578 "src/parser.c"
    break;

  case 4: /* section_list: section  */
#line 206 "src/gwion.y"
            { YYLIST_INI(Section, (yyval.ast), (yyvsp[0].section)); }
#line 2584 "src/parser.c"
    break;

  case 5: /* section_list: section_list section  */
#line 207 "src/gwion.y"
                         { YYLIST_END(Section, (yyval.ast), (yyvsp[-1].ast), (yyvsp[0].section)); }
#line 2590 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 210 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2596 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 211 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def));  }
#line 2602 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 212 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2608 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 213 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2614 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 214 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2620 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 215 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2626 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 216 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2632 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 217 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2638 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 218 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2644 "src/parser.c"
    break;

  case 15: /* section: prim_def  */
#line 219 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def)); }
#line 2650 "src/parser.c"
    break;

  case 16: /* class_flag: flag modifier  */
#line 222 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2656 "src/parser.c"
    break;

  case 17: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits class_body  */
#line 225 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-2].type_decl), (yyvsp[0].ast), (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2667 "src/parser.c"
    break;

  case 18: /* class_def: "struct" class_flag "<identifier>" decl_template traits class_body  */
#line 232 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-4].flag), (yyvsp[-3].sym), NULL, (yyvsp[0].ast), (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2679 "src/parser.c"
    break;

  case 19: /* class_body: "{" section_list "}"  */
#line 240 "src/gwion.y"
                                   { (yyval.ast) = (yyvsp[-1].ast); }
#line 2685 "src/parser.c"
    break;

  case 20: /* class_body: "{" "}"  */
#line 240 "src/gwion.y"
                                                          { (yyval.ast) = NULL; }
#line 2691 "src/parser.c"
    break;

  case 21: /* class_body: ";"  */
#line 240 "src/gwion.y"
                                                                               { (yyval.ast) = NULL; }
#line 2697 "src/parser.c"
    break;

  case 22: /* trait_def: "trait" opt_global "<identifier>" traits class_body  */
#line 243 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2706 "src/parser.c"
    break;

  case 23: /* number: INTEGER  */
#line 248 "src/gwion.y"
                {
  if((yyvsp[0].yyint).num < 0 || (yyvsp[0].yyint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type);
}
#line 2717 "src/parser.c"
    break;

  case 24: /* decimal: number  */
#line 255 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2728 "src/parser.c"
    break;

  case 25: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 263 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2736 "src/parser.c"
    break;

  case 26: /* class_ext: "extends" type_decl_exp  */
#line 266 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2742 "src/parser.c"
    break;

  case 27: /* class_ext: %empty  */
#line 266 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2748 "src/parser.c"
    break;

  case 28: /* traits: %empty  */
#line 267 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2754 "src/parser.c"
    break;

  case 29: /* traits: ":" id_list  */
#line 267 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2760 "src/parser.c"
    break;

  case 30: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 269 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2768 "src/parser.c"
    break;

  case 31: /* id_list: "<identifier>"  */
#line 274 "src/gwion.y"
                 { YYLIST_INI(Symbol, (yyval.id_list), (yyvsp[0].sym)); }
#line 2774 "src/parser.c"
    break;

  case 32: /* id_list: id_list "," "<identifier>"  */
#line 275 "src/gwion.y"
                 { YYLIST_END(Symbol, (yyval.id_list), (yyvsp[-2].id_list), (yyvsp[0].sym)); }
#line 2780 "src/parser.c"
    break;

  case 33: /* specialized: "<identifier>" traits  */
#line 277 "src/gwion.y"
                       {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1])),
        .traits = (yyvsp[0].id_list),
      };
  }
#line 2791 "src/parser.c"
    break;

  case 34: /* specialized: "const" type_decl_empty "<identifier>"  */
#line 283 "src/gwion.y"
                               {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[0].sym), (yylsp[-1])),
        .td = (yyvsp[-1].type_decl),
      };
  }
#line 2802 "src/parser.c"
    break;

  case 35: /* specialized_list: specialized  */
#line 290 "src/gwion.y"
                              { YYLIST_INI(Specialized, (yyval.specialized_list), (yyvsp[0].specialized)); }
#line 2808 "src/parser.c"
    break;

  case 36: /* specialized_list: specialized_list "," specialized  */
#line 291 "src/gwion.y"
                                     { YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), (yyvsp[0].specialized)); }
#line 2814 "src/parser.c"
    break;

  case 37: /* stmt_list: stmt  */
#line 293 "src/gwion.y"
                   { YYLIST_INI(struct Stmt_, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 2820 "src/parser.c"
    break;

  case 38: /* stmt_list: stmt_list stmt  */
#line 294 "src/gwion.y"
                   { YYLIST_END(struct Stmt_, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 2826 "src/parser.c"
    break;

  case 39: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 296 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2833 "src/parser.c"
    break;

  case 40: /* _func_effects: "perform" "<identifier>"  */
#line 299 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2839 "src/parser.c"
    break;

  case 41: /* _func_effects: _func_effects "<identifier>"  */
#line 299 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2845 "src/parser.c"
    break;

  case 42: /* func_effects: %empty  */
#line 300 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2851 "src/parser.c"
    break;

  case 43: /* func_effects: _func_effects  */
#line 300 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2857 "src/parser.c"
    break;

  case 44: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 302 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2864 "src/parser.c"
    break;

  case 45: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 305 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2874 "src/parser.c"
    break;

  case 46: /* typedef_when: %empty  */
#line 311 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2880 "src/parser.c"
    break;

  case 47: /* typedef_when: "when" binary_exp  */
#line 311 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2886 "src/parser.c"
    break;

  case 48: /* type_def_type: "typedef"  */
#line 312 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2892 "src/parser.c"
    break;

  case 49: /* type_def_type: "distinct"  */
#line 312 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2898 "src/parser.c"
    break;

  case 50: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 313 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2911 "src/parser.c"
    break;

  case 51: /* type_decl_array: type_decl array  */
#line 322 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2917 "src/parser.c"
    break;

  case 53: /* type_decl_exp: type_decl_array  */
#line 324 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2925 "src/parser.c"
    break;

  case 54: /* type_decl_empty: type_decl_array  */
#line 328 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2933 "src/parser.c"
    break;

  case 55: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 333 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .var = MK_VAR((yyvsp[-3].type_decl), (yyvsp[-2].var_decl)), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2942 "src/parser.c"
    break;

  case 56: /* arg: type_decl_empty arg_decl  */
#line 337 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) };
    (yyval.default_args).flag = fbflag_none;
  }
#line 2951 "src/parser.c"
    break;

  case 57: /* arg_list: arg  */
#line 342 "src/gwion.y"
         {
       YYLIST_INI(Arg, (yyval.default_args).args, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2960 "src/parser.c"
    break;

  case 58: /* arg_list: arg_list "," arg  */
#line 346 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2972 "src/parser.c"
    break;

  case 59: /* locale_arg: arg  */
#line 355 "src/gwion.y"
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
#line 2989 "src/parser.c"
    break;

  case 60: /* locale_arg: locale_arg "," arg  */
#line 367 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3001 "src/parser.c"
    break;

  case 62: /* locale_list: %empty  */
#line 376 "src/gwion.y"
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
#line 3016 "src/parser.c"
    break;

  case 63: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 387 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) }; }
#line 3022 "src/parser.c"
    break;

  case 64: /* fptr_list: fptr_arg  */
#line 389 "src/gwion.y"
                         { YYLIST_INI(Arg, (yyval.arg_list), (yyvsp[0].arg)); }
#line 3028 "src/parser.c"
    break;

  case 65: /* fptr_list: fptr_list "," fptr_arg  */
#line 390 "src/gwion.y"
                         { YYLIST_END(Arg, (yyval.arg_list), (yyvsp[-2].arg_list), (yyvsp[0].arg)); }
#line 3034 "src/parser.c"
    break;

  case 66: /* code_stmt: "{" "}"  */
#line 393 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .loc = (yyloc)}; }
#line 3041 "src/parser.c"
    break;

  case 67: /* code_stmt: "{" stmt_list "}"  */
#line 395 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .loc = (yyloc)}; }
#line 3048 "src/parser.c"
    break;

  case 68: /* code_list: "{" "}"  */
#line 399 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 0); }
#line 3054 "src/parser.c"
    break;

  case 69: /* code_list: "{" stmt_list "}"  */
#line 400 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3060 "src/parser.c"
    break;

  case 70: /* stmt_pp: "<comment>"  */
#line 403 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyloc), .data = (yyvsp[0].sval)); }
#line 3066 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#include"  */
#line 404 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyloc), .data = (yyvsp[0].sval)); }
#line 3072 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#define"  */
#line 405 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3078 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#pragma"  */
#line 406 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3084 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#undef"  */
#line 407 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3090 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#ifdef"  */
#line 408 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3096 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#ifndef"  */
#line 409 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3102 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#else"  */
#line 410 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyloc), .data = (yyvsp[0].sval)); }
#line 3108 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#if"  */
#line 411 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3114 "src/parser.c"
    break;

  case 79: /* stmt_pp: "\n"  */
#line 412 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl, (yyloc), .data = (yyvsp[0].sval)); }
#line 3120 "src/parser.c"
    break;

  case 80: /* stmt_pp: "import"  */
#line 413 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyloc), .data = (yyvsp[0].sval)); }
#line 3126 "src/parser.c"
    break;

  case 81: /* stmt_pp: LOCALE_INI "<identifier>" opt_exp LOCALE_END  */
#line 415 "src/gwion.y"
    { (yyval.stmt) = MK_STMT_PP(locale, (yyloc), .xid = (yyvsp[-2].sym), .exp = (yyvsp[-1].exp)); }
#line 3132 "src/parser.c"
    break;

  case 93: /* $@1: %empty  */
#line 432 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3138 "src/parser.c"
    break;

  case 94: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 432 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .tag = MK_TAG((yyvsp[-5].sym), (yylsp[-2])),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
  };
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_spread, .d = { .stmt_spread = spread }, .loc = (yylsp[-5])};
}
#line 3151 "src/parser.c"
    break;

  case 95: /* retry_stmt: "retry" ";"  */
#line 441 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .loc=(yylsp[-1])};
}
#line 3161 "src/parser.c"
    break;

  case 96: /* $@2: %empty  */
#line 446 "src/gwion.y"
                  { arg->handling = true; }
#line 3167 "src/parser.c"
    break;

  case 97: /* handler: "handle" $@2 opt_id stmt  */
#line 446 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .tag = MK_TAG((yyvsp[-1].sym), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }; arg->handling = false; }
#line 3173 "src/parser.c"
    break;

  case 98: /* handler_list: handler  */
#line 447 "src/gwion.y"
                      {
    YYLIST_INI(Handler, (yyval.handler_list).handlers, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).tag.sym;
  }
#line 3182 "src/parser.c"
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
#line 3203 "src/parser.c"
    break;

  case 100: /* try_stmt: "try" stmt handler_list  */
#line 467 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .loc = (yylsp[-2])};
}
#line 3212 "src/parser.c"
    break;

  case 102: /* opt_id: %empty  */
#line 472 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3218 "src/parser.c"
    break;

  case 104: /* opt_comma: %empty  */
#line 473 "src/gwion.y"
                 {}
#line 3224 "src/parser.c"
    break;

  case 105: /* enum_value: "<identifier>"  */
#line 476 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }; }
#line 3230 "src/parser.c"
    break;

  case 106: /* enum_value: number "<dynamic_operator>" "<identifier>"  */
#line 477 "src/gwion.y"
                                           { 
            if (strcmp(s_name((yyvsp[-1].sym)), ":=>")) {
              parser_error(&(yylsp[-2]), arg, "enum value must be set with :=>", 0x0240); YYERROR;
          }
            (yyval.enum_value) = (EnumValue) {.tag = MK_TAG((yyvsp[0].sym), (yylsp[0])), .gwint = (yyvsp[-2].gwint), .set = true };
          }
#line 3241 "src/parser.c"
    break;

  case 107: /* enum_list: enum_value  */
#line 484 "src/gwion.y"
                            { YYLIST_INI(EnumValue, (yyval.enum_list), (yyvsp[0].enum_value)); }
#line 3247 "src/parser.c"
    break;

  case 108: /* enum_list: enum_list "," enum_value  */
#line 485 "src/gwion.y"
                            { YYLIST_END(EnumValue, (yyval.enum_list), (yyvsp[-2].enum_list), (yyvsp[0].enum_value)) ;}
#line 3253 "src/parser.c"
    break;

  case 109: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 488 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3262 "src/parser.c"
    break;

  case 110: /* when_exp: "when" exp  */
#line 493 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3268 "src/parser.c"
    break;

  case 111: /* when_exp: %empty  */
#line 493 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3274 "src/parser.c"
    break;

  case 112: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 496 "src/gwion.y"
                                      {
    (yyval.stmt) = (struct Stmt_) {
      .stmt_type = 0,//ae_stmt_match, // ????
      .d = { .stmt_match = {
        .cond = (yyvsp[-3].exp),
        .when = (yyvsp[-2].exp),
        .list = (yyvsp[0].stmt_list)
      }},
      .loc = (yylsp[-4])
    };
}
#line 3290 "src/parser.c"
    break;

  case 113: /* match_list: match_case_stmt  */
#line 508 "src/gwion.y"
                            { YYLIST_INI(struct Stmt_, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 3296 "src/parser.c"
    break;

  case 114: /* match_list: match_list match_case_stmt  */
#line 509 "src/gwion.y"
                             { YYLIST_END(struct Stmt_, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 3302 "src/parser.c"
    break;

  case 115: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 511 "src/gwion.y"
                                                        {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-5].exp),
      .list  = (yyvsp[-3].stmt_list),
      .where = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    }},
    .loc = (yylsp[-6])
  };
}
#line 3317 "src/parser.c"
    break;

  case 116: /* match_stmt: "match" exp "{" match_list "}"  */
#line 522 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .loc = (yylsp[-4])
  };
}
#line 3331 "src/parser.c"
    break;

  case 117: /* flow: "while"  */
#line 533 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3337 "src/parser.c"
    break;

  case 118: /* flow: "until"  */
#line 534 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3343 "src/parser.c"
    break;

  case 119: /* loop_stmt: flow "(" exp ")" stmt  */
#line 539 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .loc = (yylsp[-4])
    };
  }
#line 3356 "src/parser.c"
    break;

  case 120: /* loop_stmt: "do" stmt flow exp ";"  */
#line 548 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .loc = (yylsp[-4])
    };
  }
#line 3370 "src/parser.c"
    break;

  case 121: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 558 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .loc = (yylsp[-5])
    };
  }
#line 3384 "src/parser.c"
    break;

  case 122: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 568 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-4].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c3 = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .loc = (yylsp[-6])
    };
  }
#line 3399 "src/parser.c"
    break;

  case 123: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 579 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_each,
      .d = { .stmt_each = {
        .tag = MK_TAG((yyvsp[-5].sym), (yylsp[-5])),
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .loc = (yylsp[-7])
    };
// what to do with opt_var?
// list rem?
  }
#line 3415 "src/parser.c"
    break;

  case 124: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 591 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_each,
      .d = { .stmt_each = {
        .tag = MK_TAG((yyvsp[-5].sym), (yylsp[-7])),
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .loc = (yylsp[-9])
    };
    (yyval.stmt).d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
    (yyval.stmt).d.stmt_each.idx->var = (Var_Decl){.tag=MK_TAG((yyvsp[-7].sym), (yylsp[-7]))};
    (yyval.stmt).d.stmt_each.idx->is_var = (yyvsp[-3].yybool);
// what to do with opt_var?
// list rem?
  }
#line 3434 "src/parser.c"
    break;

  case 125: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 606 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .loc = (yylsp[-4])
    };
  }
#line 3447 "src/parser.c"
    break;

  case 126: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 615 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .loc = (yylsp[-6])
    };
    (yyval.stmt).d.stmt_loop.idx = mp_malloc(mpool(arg), EachIdx);
    (yyval.stmt).d.stmt_loop.idx->var = (Var_Decl){ .tag = MK_TAG((yyvsp[-4].sym), (yylsp[-4])) };
  }
#line 3462 "src/parser.c"
    break;

  case 127: /* defer_stmt: "defer" stmt  */
#line 626 "src/gwion.y"
                         {
    const loc_t loc = defer_stmt(&(yyvsp[0].stmt));
    if(loc.first.line) {
      // defer could maybe return the position
      parser_error(&loc, arg, "return statement in defer", 0x0209);
      YYERROR;
    }
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_defer,
    .d = { .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }},
    .loc = (yylsp[-1])
  };
}
#line 3479 "src/parser.c"
    break;

  case 128: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 641 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .loc = (yylsp[-4])
    };
  }
#line 3492 "src/parser.c"
    break;

  case 129: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 650 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .loc = (yylsp[-6])
    };
  }
#line 3506 "src/parser.c"
    break;

  case 130: /* breaks: "break"  */
#line 660 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3512 "src/parser.c"
    break;

  case 131: /* breaks: "continue"  */
#line 660 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3518 "src/parser.c"
    break;

  case 132: /* jump_stmt: "return" exp ";"  */
#line 662 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .loc = (yylsp[-2])
    };
  }
#line 3528 "src/parser.c"
    break;

  case 133: /* jump_stmt: "return" ";"  */
#line 667 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .loc = (yylsp[-1])
    };
  }
#line 3537 "src/parser.c"
    break;

  case 134: /* jump_stmt: breaks decimal ";"  */
#line 671 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].gwint).num }},
      .loc = (yylsp[-2])
    };
  }
#line 3547 "src/parser.c"
    break;

  case 135: /* jump_stmt: breaks ";"  */
#line 676 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .loc = (yylsp[-1]) };
  }
#line 3556 "src/parser.c"
    break;

  case 136: /* exp_stmt: exp ";"  */
#line 682 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .loc = (yylsp[-1])
    };
  }
#line 3566 "src/parser.c"
    break;

  case 137: /* exp_stmt: ";"  */
#line 687 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .loc = (yylsp[0])
    };
  }
#line 3575 "src/parser.c"
    break;

  case 138: /* exp: binary_exp  */
#line 693 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3581 "src/parser.c"
    break;

  case 139: /* exp: binary_exp "," exp  */
#line 695 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3593 "src/parser.c"
    break;

  case 141: /* binary_exp: binary_exp "@" decl_exp  */
#line 705 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3599 "src/parser.c"
    break;

  case 142: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 706 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3605 "src/parser.c"
    break;

  case 143: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 707 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3611 "src/parser.c"
    break;

  case 144: /* call_template: ":[" tmplarg_list "]"  */
#line 709 "src/gwion.y"
                                     { (yyval.tmplarg_list) = (yyvsp[-1].tmplarg_list); }
#line 3617 "src/parser.c"
    break;

  case 145: /* call_template: %empty  */
#line 709 "src/gwion.y"
                                                    { (yyval.tmplarg_list) = NULL; }
#line 3623 "src/parser.c"
    break;

  case 151: /* array_exp: "[" exp "]"  */
#line 714 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3629 "src/parser.c"
    break;

  case 152: /* array_exp: "[" exp "]" array_exp  */
#line 715 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3637 "src/parser.c"
    break;

  case 153: /* array_exp: "[" exp "]" "[" "]"  */
#line 718 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3643 "src/parser.c"
    break;

  case 154: /* array_empty: "[" "]"  */
#line 722 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3649 "src/parser.c"
    break;

  case 155: /* array_empty: array_empty "[" "]"  */
#line 723 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3655 "src/parser.c"
    break;

  case 156: /* array_empty: array_empty array_exp  */
#line 724 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3661 "src/parser.c"
    break;

  case 157: /* dict_list: binary_exp ":" binary_exp  */
#line 728 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3667 "src/parser.c"
    break;

  case 158: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 729 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3673 "src/parser.c"
    break;

  case 159: /* range: "[" exp ":" exp "]"  */
#line 732 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3679 "src/parser.c"
    break;

  case 160: /* range: "[" exp ":" "]"  */
#line 733 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3685 "src/parser.c"
    break;

  case 161: /* range: "[" ":" exp "]"  */
#line 734 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3691 "src/parser.c"
    break;

  case 165: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 740 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3697 "src/parser.c"
    break;

  case 166: /* decl_exp: type_decl_flag2 flag type_decl_array call_paren var_decl  */
#line 741 "src/gwion.y"
                                                             {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-2].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-4].flag) | (yyvsp[-3].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1]));
  }
#line 3707 "src/parser.c"
    break;

  case 167: /* func_args: "(" arg_list ")"  */
#line 747 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3713 "src/parser.c"
    break;

  case 168: /* func_args: "(" ")"  */
#line 747 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3719 "src/parser.c"
    break;

  case 169: /* fptr_args: "(" fptr_list ")"  */
#line 748 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3725 "src/parser.c"
    break;

  case 170: /* fptr_args: "(" ")"  */
#line 748 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3731 "src/parser.c"
    break;

  case 171: /* decl_template: ":[" specialized_list "]"  */
#line 750 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3737 "src/parser.c"
    break;

  case 172: /* decl_template: ":[" specialized_list "," "..." "]"  */
#line 751 "src/gwion.y"
                                                    {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-3].specialized_list), spec);
}
#line 3746 "src/parser.c"
    break;

  case 173: /* decl_template: ":[" "..." "]"  */
#line 755 "src/gwion.y"
                                {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_INI(Specialized, (yyval.specialized_list), spec);
}
#line 3755 "src/parser.c"
    break;

  case 174: /* decl_template: %empty  */
#line 759 "src/gwion.y"
               { (yyval.specialized_list) = NULL; }
#line 3761 "src/parser.c"
    break;

  case 175: /* global: "global"  */
#line 761 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3767 "src/parser.c"
    break;

  case 177: /* opt_global: %empty  */
#line 762 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3773 "src/parser.c"
    break;

  case 178: /* storage_flag: "static"  */
#line 764 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3779 "src/parser.c"
    break;

  case 180: /* access_flag: "private"  */
#line 766 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3785 "src/parser.c"
    break;

  case 181: /* access_flag: "protect"  */
#line 767 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3791 "src/parser.c"
    break;

  case 182: /* flag: access_flag  */
#line 770 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3797 "src/parser.c"
    break;

  case 183: /* flag: storage_flag  */
#line 771 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3803 "src/parser.c"
    break;

  case 184: /* flag: access_flag storage_flag  */
#line 772 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3809 "src/parser.c"
    break;

  case 185: /* flag: %empty  */
#line 773 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3815 "src/parser.c"
    break;

  case 186: /* final: "final"  */
#line 776 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3821 "src/parser.c"
    break;

  case 187: /* final: %empty  */
#line 776 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3827 "src/parser.c"
    break;

  case 188: /* modifier: "abstract" final  */
#line 778 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3833 "src/parser.c"
    break;

  case 190: /* func_def_base: "fun" func_base func_args code_list  */
#line 781 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3843 "src/parser.c"
    break;

  case 191: /* func_def_base: "fun" func_base func_args ";"  */
#line 786 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3855 "src/parser.c"
    break;

  case 192: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 793 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3866 "src/parser.c"
    break;

  case 193: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 799 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3877 "src/parser.c"
    break;

  case 194: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 808 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3889 "src/parser.c"
    break;

  case 200: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 819 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3903 "src/parser.c"
    break;

  case 201: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 829 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3916 "src/parser.c"
    break;

  case 202: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 838 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3930 "src/parser.c"
    break;

  case 203: /* op_base: type_decl_empty OPID_A func_args  */
#line 848 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3939 "src/parser.c"
    break;

  case 204: /* operator: "operator"  */
#line 853 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3945 "src/parser.c"
    break;

  case 205: /* operator: "operator" global  */
#line 853 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3951 "src/parser.c"
    break;

  case 206: /* op_def: operator op_base code_list  */
#line 856 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3957 "src/parser.c"
    break;

  case 207: /* op_def: operator op_base ";"  */
#line 858 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3963 "src/parser.c"
    break;

  case 208: /* op_def: operator "abstract" op_base ";"  */
#line 860 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3969 "src/parser.c"
    break;

  case 212: /* func_def: operator "new" func_args code_list  */
#line 864 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 3979 "src/parser.c"
    break;

  case 213: /* func_def: operator "new" func_args ";"  */
#line 870 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3990 "src/parser.c"
    break;

  case 214: /* func_def: operator "abstract" "new" func_args ";"  */
#line 877 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4001 "src/parser.c"
    break;

  case 215: /* type_decl_base: "<identifier>"  */
#line 885 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4007 "src/parser.c"
    break;

  case 216: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 886 "src/gwion.y"
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
#line 4023 "src/parser.c"
    break;

  case 217: /* type_decl_tmpl: type_decl_base call_template  */
#line 900 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 4029 "src/parser.c"
    break;

  case 218: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 901 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 4035 "src/parser.c"
    break;

  case 220: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 906 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4041 "src/parser.c"
    break;

  case 221: /* option: "?"  */
#line 909 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4047 "src/parser.c"
    break;

  case 222: /* option: OPTIONS  */
#line 909 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4053 "src/parser.c"
    break;

  case 223: /* option: %empty  */
#line 909 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 4059 "src/parser.c"
    break;

  case 224: /* type_decl_opt: type_decl_noflag option  */
#line 910 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4065 "src/parser.c"
    break;

  case 226: /* type_decl: type_decl_flag type_decl_opt  */
#line 911 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4071 "src/parser.c"
    break;

  case 227: /* type_decl_flag: "late"  */
#line 914 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4077 "src/parser.c"
    break;

  case 228: /* type_decl_flag: "const"  */
#line 915 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4083 "src/parser.c"
    break;

  case 229: /* opt_var: "var"  */
#line 917 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4089 "src/parser.c"
    break;

  case 230: /* opt_var: %empty  */
#line 917 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4095 "src/parser.c"
    break;

  case 231: /* type_decl_flag2: "var"  */
#line 919 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4101 "src/parser.c"
    break;

  case 233: /* variable: "<identifier>" ";"  */
#line 922 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.variable) = (Variable) { .td = td, .vd = { .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))}};
}
#line 4110 "src/parser.c"
    break;

  case 234: /* variable: type_decl_empty "<identifier>" ";"  */
#line 926 "src/gwion.y"
                         { (yyval.variable) = (Variable) { .td = (yyvsp[-2].type_decl), .vd = { .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))}};}
#line 4116 "src/parser.c"
    break;

  case 235: /* variable_list: variable  */
#line 928 "src/gwion.y"
                         { YYLIST_INI(Variable, (yyval.variable_list), (yyvsp[0].variable)); }
#line 4122 "src/parser.c"
    break;

  case 236: /* variable_list: variable_list variable  */
#line 929 "src/gwion.y"
                         { YYLIST_END(Variable, (yyval.variable_list), (yyvsp[-1].variable_list), (yyvsp[0].variable)); }
#line 4128 "src/parser.c"
    break;

  case 237: /* union_def: "union" flag "<identifier>" decl_template "{" variable_list "}"  */
#line 932 "src/gwion.y"
                                                        {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].variable_list), (yylsp[-4]));
      (yyval.union_def)->tag.sym = (yyvsp[-4].sym); // put tag in ctor
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4140 "src/parser.c"
    break;

  case 238: /* var_decl: "<identifier>"  */
#line 941 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4146 "src/parser.c"
    break;

  case 239: /* arg_decl: "<identifier>"  */
#line 943 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4152 "src/parser.c"
    break;

  case 241: /* fptr_arg_decl: %empty  */
#line 944 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4158 "src/parser.c"
    break;

  case 255: /* opt_exp: exp  */
#line 952 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4164 "src/parser.c"
    break;

  case 256: /* opt_exp: %empty  */
#line 952 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4170 "src/parser.c"
    break;

  case 258: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 955 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4176 "src/parser.c"
    break;

  case 259: /* con_exp: log_or_exp "?:" con_exp  */
#line 957 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4182 "src/parser.c"
    break;

  case 261: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 959 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4188 "src/parser.c"
    break;

  case 263: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 960 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4194 "src/parser.c"
    break;

  case 265: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 961 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4200 "src/parser.c"
    break;

  case 267: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 962 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4206 "src/parser.c"
    break;

  case 269: /* and_exp: and_exp "&" eq_exp  */
#line 963 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4212 "src/parser.c"
    break;

  case 271: /* eq_exp: eq_exp eq_op rel_exp  */
#line 964 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4218 "src/parser.c"
    break;

  case 273: /* rel_exp: rel_exp rel_op shift_exp  */
#line 965 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4224 "src/parser.c"
    break;

  case 275: /* shift_exp: shift_exp shift_op add_exp  */
#line 966 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4230 "src/parser.c"
    break;

  case 277: /* add_exp: add_exp add_op mul_exp  */
#line 967 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4236 "src/parser.c"
    break;

  case 279: /* mul_exp: mul_exp mul_op dur_exp  */
#line 968 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4242 "src/parser.c"
    break;

  case 281: /* dur_exp: dur_exp "::" cast_exp  */
#line 969 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4248 "src/parser.c"
    break;

  case 283: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 972 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4254 "src/parser.c"
    break;

  case 290: /* unary_exp: unary_op unary_exp  */
#line 979 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4260 "src/parser.c"
    break;

  case 291: /* unary_exp: "spork" unary_exp  */
#line 980 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4266 "src/parser.c"
    break;

  case 292: /* unary_exp: "fork" unary_exp  */
#line 981 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4272 "src/parser.c"
    break;

  case 293: /* unary_exp: "new" type_decl_exp call_paren  */
#line 982 "src/gwion.y"
                                   {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].type_decl), (yyvsp[0].exp) ?: new_prim_nil(mpool(arg), (yylsp[0])), (yyloc));
  }
#line 4280 "src/parser.c"
    break;

  case 294: /* unary_exp: "new" type_decl_exp  */
#line 985 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4286 "src/parser.c"
    break;

  case 295: /* unary_exp: "spork" code_list  */
#line 986 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4292 "src/parser.c"
    break;

  case 296: /* unary_exp: "fork" code_list  */
#line 987 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4298 "src/parser.c"
    break;

  case 297: /* unary_exp: "spork" captures code_list  */
#line 988 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4304 "src/parser.c"
    break;

  case 298: /* unary_exp: "fork" captures code_list  */
#line 989 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4310 "src/parser.c"
    break;

  case 299: /* unary_exp: "$" type_decl_empty  */
#line 990 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4316 "src/parser.c"
    break;

  case 300: /* lambda_list: "<identifier>"  */
#line 993 "src/gwion.y"
    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){.tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_INI(Arg, (yyval.arg_list), a); }
#line 4324 "src/parser.c"
    break;

  case 301: /* lambda_list: lambda_list "<identifier>"  */
#line 996 "src/gwion.y"
                    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){ .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_END(Arg, (yyval.arg_list), (yyvsp[-1].arg_list), a);
}
#line 4333 "src/parser.c"
    break;

  case 302: /* lambda_arg: "\\" lambda_list  */
#line 1001 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4339 "src/parser.c"
    break;

  case 303: /* lambda_arg: "\\"  */
#line 1001 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4345 "src/parser.c"
    break;

  case 305: /* tmplarg: type_decl_empty  */
#line 1004 "src/gwion.y"
                         {
    (yyval.tmplarg) = (TmplArg) { .d = { .td = (yyvsp[0].type_decl)}, .type = tmplarg_td};
  }
#line 4353 "src/parser.c"
    break;

  case 306: /* tmplarg: tmplarg_exp  */
#line 1007 "src/gwion.y"
                {
    (yyval.tmplarg) = (TmplArg) { .d = { .exp = (yyvsp[0].exp)}, .type = tmplarg_exp};
  }
#line 4361 "src/parser.c"
    break;

  case 307: /* tmplarg_list: tmplarg  */
#line 1011 "src/gwion.y"
                           { YYLIST_INI(TmplArg, (yyval.tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4367 "src/parser.c"
    break;

  case 308: /* tmplarg_list: tmplarg_list "," tmplarg  */
#line 1012 "src/gwion.y"
                           { YYLIST_END(TmplArg, (yyval.tmplarg_list), (yyvsp[-2].tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4373 "src/parser.c"
    break;

  case 309: /* call_paren: "(" exp ")"  */
#line 1015 "src/gwion.y"
            { (yyval.exp) = (yyvsp[-1].exp); }
#line 4379 "src/parser.c"
    break;

  case 310: /* call_paren: "(" ")"  */
#line 1016 "src/gwion.y"
        { (yyval.exp) = NULL; }
#line 4385 "src/parser.c"
    break;

  case 313: /* dot_exp: post_exp "." "<identifier>"  */
#line 1020 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expressions"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4398 "src/parser.c"
    break;

  case 315: /* post_exp: post_exp array_exp  */
#line 1031 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4404 "src/parser.c"
    break;

  case 316: /* post_exp: post_exp range  */
#line 1033 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4410 "src/parser.c"
    break;

  case 317: /* post_exp: post_exp call_template call_paren  */
#line 1035 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].tmplarg_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].tmplarg_list)); }
#line 4417 "src/parser.c"
    break;

  case 318: /* post_exp: post_exp post_op  */
#line 1038 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4423 "src/parser.c"
    break;

  case 319: /* post_exp: dot_exp  */
#line 1039 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4429 "src/parser.c"
    break;

  case 320: /* interp_exp: "<interp string end>"  */
#line 1043 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4435 "src/parser.c"
    break;

  case 321: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1044 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4441 "src/parser.c"
    break;

  case 322: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1045 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4447 "src/parser.c"
    break;

  case 323: /* interp: "${" interp_exp  */
#line 1047 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4453 "src/parser.c"
    break;

  case 324: /* interp: interp "${" interp_exp  */
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
#line 4468 "src/parser.c"
    break;

  case 325: /* capture: "<identifier>"  */
#line 1059 "src/gwion.y"
            { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }};}
#line 4474 "src/parser.c"
    break;

  case 326: /* capture: "&" "<identifier>"  */
#line 1059 "src/gwion.y"
                                                                           { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }, .is_ref = true }; }
#line 4480 "src/parser.c"
    break;

  case 327: /* capture_list: capture  */
#line 1061 "src/gwion.y"
                       { YYLIST_INI(Capture, (yyval.captures), (yyvsp[0].capture)); }
#line 4486 "src/parser.c"
    break;

  case 328: /* capture_list: capture_list capture  */
#line 1062 "src/gwion.y"
                       { YYLIST_END(Capture, (yyval.captures), (yyvsp[-1].captures), (yyvsp[0].capture)); }
#line 4492 "src/parser.c"
    break;

  case 329: /* captures: ":" capture_list ":"  */
#line 1063 "src/gwion.y"
                               { (yyval.captures) = (yyvsp[-1].captures); }
#line 4498 "src/parser.c"
    break;

  case 330: /* captures: %empty  */
#line 1063 "src/gwion.y"
                                               { (yyval.captures) = NULL; }
#line 4504 "src/parser.c"
    break;

  case 333: /* basic_exp: number  */
#line 1067 "src/gwion.y"
                         {
  (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc)); 
  (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4513 "src/parser.c"
    break;

  case 334: /* basic_exp: "<float>"  */
#line 1071 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4519 "src/parser.c"
    break;

  case 335: /* basic_exp: "<litteral string>"  */
#line 1072 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4525 "src/parser.c"
    break;

  case 336: /* basic_exp: "<litteral char>"  */
#line 1073 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4531 "src/parser.c"
    break;

  case 337: /* prim_exp: "<identifier>"  */
#line 1076 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4537 "src/parser.c"
    break;

  case 339: /* prim_exp: interp  */
#line 1078 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4543 "src/parser.c"
    break;

  case 340: /* prim_exp: "[" opt_exp array_lit_ed  */
#line 1079 "src/gwion.y"
                             { 
    if(!(yyvsp[-1].exp)) {
      parser_error(&(yylsp[-2]), arg, "must provide values/expressions for array [...]", 0);
      YYERROR;
    }
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4556 "src/parser.c"
    break;

  case 341: /* prim_exp: "{" dict_list "}"  */
#line 1087 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4562 "src/parser.c"
    break;

  case 342: /* prim_exp: range  */
#line 1088 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4568 "src/parser.c"
    break;

  case 343: /* prim_exp: "<<<" exp ">>>"  */
#line 1089 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4574 "src/parser.c"
    break;

  case 344: /* prim_exp: "(" exp ")"  */
#line 1090 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4580 "src/parser.c"
    break;

  case 345: /* prim_exp: "`foo`"  */
#line 1091 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last =  { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4591 "src/parser.c"
    break;

  case 346: /* prim_exp: lambda_arg captures code_list  */
#line 1097 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4597 "src/parser.c"
    break;

  case 347: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1098 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4603 "src/parser.c"
    break;

  case 348: /* prim_exp: "(" op_op ")"  */
#line 1099 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4609 "src/parser.c"
    break;

  case 349: /* prim_exp: "perform" opt_id  */
#line 1100 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4615 "src/parser.c"
    break;

  case 350: /* prim_exp: "(" ")"  */
#line 1101 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4621 "src/parser.c"
    break;


#line 4625 "src/parser.c"

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

#line 1103 "src/gwion.y"

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
