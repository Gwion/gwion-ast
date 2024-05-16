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
  YYSYMBOL_USING = 61,                     /* "using"  */
  YYSYMBOL_INTEGER = 62,                   /* INTEGER  */
  YYSYMBOL_63_integer_ = 63,               /* "<integer>"  */
  YYSYMBOL_FLOATT = 64,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 65,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 66,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 67,              /* "${"  */
  YYSYMBOL_INTERP_EXP = 68,                /* INTERP_EXP  */
  YYSYMBOL_PP_COMMENT = 69,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 70,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 71,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 72,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 73,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 74,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 75,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 76,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 77,                  /* "#if"  */
  YYSYMBOL_PP_NL = 78,                     /* "\n"  */
  YYSYMBOL_PP_IMPORT = 79,                 /* "import"  */
  YYSYMBOL_SPREAD = 80,                    /* "}..."  */
  YYSYMBOL_INTERP_LIT = 81,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 82,                /* "<interp string end>"  */
  YYSYMBOL_83_operator_id_ = 83,           /* "@<operator id>"  */
  YYSYMBOL_ID = 84,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 85,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 86,                  /* "++"  */
  YYSYMBOL_MINUS = 87,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 88,                /* "--"  */
  YYSYMBOL_TIMES = 89,                     /* "*"  */
  YYSYMBOL_DIVIDE = 90,                    /* "/"  */
  YYSYMBOL_PERCENT = 91,                   /* "%"  */
  YYSYMBOL_DOLLAR = 92,                    /* "$"  */
  YYSYMBOL_QUESTION = 93,                  /* "?"  */
  YYSYMBOL_OPTIONS = 94,                   /* OPTIONS  */
  YYSYMBOL_COLON = 95,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 96,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 97,             /* "?:"  */
  YYSYMBOL_NEW = 98,                       /* "new"  */
  YYSYMBOL_SPORK = 99,                     /* "spork"  */
  YYSYMBOL_FORK = 100,                     /* "fork"  */
  YYSYMBOL_L_HACK = 101,                   /* "<<<"  */
  YYSYMBOL_R_HACK = 102,                   /* ">>>"  */
  YYSYMBOL_AND = 103,                      /* "&&"  */
  YYSYMBOL_EQ = 104,                       /* "=="  */
  YYSYMBOL_GE = 105,                       /* ">="  */
  YYSYMBOL_GT = 106,                       /* ">"  */
  YYSYMBOL_LE = 107,                       /* "<="  */
  YYSYMBOL_LT = 108,                       /* "<"  */
  YYSYMBOL_NEQ = 109,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 110,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 111,              /* ">>"  */
  YYSYMBOL_S_AND = 112,                    /* "&"  */
  YYSYMBOL_S_OR = 113,                     /* "|"  */
  YYSYMBOL_S_XOR = 114,                    /* "^"  */
  YYSYMBOL_OR = 115,                       /* "||"  */
  YYSYMBOL_TMPL = 116,                     /* ":["  */
  YYSYMBOL_TILDA = 117,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 118,              /* "!"  */
  YYSYMBOL_AROBASE = 119,                  /* "@"  */
  YYSYMBOL_DYNOP = 120,                    /* "<dynamic_operator>"  */
  YYSYMBOL_LOCALE_EXP = 121,               /* "`foo`"  */
  YYSYMBOL_RANGE_EMPTY = 122,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 123,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 124,                   /* UTIMES  */
  YYSYMBOL_125_ = 125,                     /* "="  */
  YYSYMBOL_SECTION_LIST = 126,             /* SECTION_LIST  */
  YYSYMBOL_STMT_LIST3 = 127,               /* STMT_LIST3  */
  YYSYMBOL_STMT_LIST2 = 128,               /* STMT_LIST2  */
  YYSYMBOL_STMT_LIST1 = 129,               /* STMT_LIST1  */
  YYSYMBOL_YYACCEPT = 130,                 /* $accept  */
  YYSYMBOL_ast = 131,                      /* ast  */
  YYSYMBOL_section_list = 132,             /* section_list  */
  YYSYMBOL_section = 133,                  /* section  */
  YYSYMBOL_class_flag = 134,               /* class_flag  */
  YYSYMBOL_class_def = 135,                /* class_def  */
  YYSYMBOL_class_body = 136,               /* class_body  */
  YYSYMBOL_trait_def = 137,                /* trait_def  */
  YYSYMBOL_number = 138,                   /* number  */
  YYSYMBOL_decimal = 139,                  /* decimal  */
  YYSYMBOL_prim_def = 140,                 /* prim_def  */
  YYSYMBOL_class_ext = 141,                /* class_ext  */
  YYSYMBOL_traits = 142,                   /* traits  */
  YYSYMBOL_extend_def = 143,               /* extend_def  */
  YYSYMBOL_id_list = 144,                  /* id_list  */
  YYSYMBOL_specialized = 145,              /* specialized  */
  YYSYMBOL_specialized_list = 146,         /* specialized_list  */
  YYSYMBOL_stmt_list = 147,                /* stmt_list  */
  YYSYMBOL_fptr_base = 148,                /* fptr_base  */
  YYSYMBOL__func_effects = 149,            /* _func_effects  */
  YYSYMBOL_func_effects = 150,             /* func_effects  */
  YYSYMBOL_func_base = 151,                /* func_base  */
  YYSYMBOL_fptr_def = 152,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 153,             /* typedef_when  */
  YYSYMBOL_type_def_type = 154,            /* type_def_type  */
  YYSYMBOL_type_def = 155,                 /* type_def  */
  YYSYMBOL_type_decl_array = 156,          /* type_decl_array  */
  YYSYMBOL_arg = 157,                      /* arg  */
  YYSYMBOL_arg_list = 158,                 /* arg_list  */
  YYSYMBOL_locale_arg = 159,               /* locale_arg  */
  YYSYMBOL_locale_list = 160,              /* locale_list  */
  YYSYMBOL_code_stmt = 161,                /* code_stmt  */
  YYSYMBOL_code_list = 162,                /* code_list  */
  YYSYMBOL_stmt_pp = 163,                  /* stmt_pp  */
  YYSYMBOL_stmt = 164,                     /* stmt  */
  YYSYMBOL_spread_stmt = 165,              /* spread_stmt  */
  YYSYMBOL_166_1 = 166,                    /* $@1  */
  YYSYMBOL_using_stmt = 167,               /* using_stmt  */
  YYSYMBOL_retry_stmt = 168,               /* retry_stmt  */
  YYSYMBOL_handler = 169,                  /* handler  */
  YYSYMBOL_handler_list = 170,             /* handler_list  */
  YYSYMBOL_try_stmt = 171,                 /* try_stmt  */
  YYSYMBOL_opt_id = 172,                   /* opt_id  */
  YYSYMBOL_opt_comma = 173,                /* opt_comma  */
  YYSYMBOL_enum_value = 174,               /* enum_value  */
  YYSYMBOL_enum_list = 175,                /* enum_list  */
  YYSYMBOL_enum_def = 176,                 /* enum_def  */
  YYSYMBOL_when_exp = 177,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 178,          /* match_case_stmt  */
  YYSYMBOL_match_list = 179,               /* match_list  */
  YYSYMBOL_match_stmt = 180,               /* match_stmt  */
  YYSYMBOL_flow = 181,                     /* flow  */
  YYSYMBOL_loop_stmt = 182,                /* loop_stmt  */
  YYSYMBOL_defer_stmt = 183,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 184,           /* selection_stmt  */
  YYSYMBOL_breaks = 185,                   /* breaks  */
  YYSYMBOL_jump_stmt = 186,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 187,                 /* exp_stmt  */
  YYSYMBOL_exp = 188,                      /* exp  */
  YYSYMBOL_binary_exp = 189,               /* binary_exp  */
  YYSYMBOL_call_template = 190,            /* call_template  */
  YYSYMBOL_op = 191,                       /* op  */
  YYSYMBOL_array_exp = 192,                /* array_exp  */
  YYSYMBOL_array_empty = 193,              /* array_empty  */
  YYSYMBOL_dict_list = 194,                /* dict_list  */
  YYSYMBOL_range = 195,                    /* range  */
  YYSYMBOL_array = 196,                    /* array  */
  YYSYMBOL_decl_exp = 197,                 /* decl_exp  */
  YYSYMBOL_func_args = 198,                /* func_args  */
  YYSYMBOL_decl_template = 199,            /* decl_template  */
  YYSYMBOL_global = 200,                   /* global  */
  YYSYMBOL_opt_global = 201,               /* opt_global  */
  YYSYMBOL_storage_flag = 202,             /* storage_flag  */
  YYSYMBOL_access_flag = 203,              /* access_flag  */
  YYSYMBOL_flag = 204,                     /* flag  */
  YYSYMBOL_final = 205,                    /* final  */
  YYSYMBOL_modifier = 206,                 /* modifier  */
  YYSYMBOL_func_def_base = 207,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 208,            /* abstract_fdef  */
  YYSYMBOL_op_op = 209,                    /* op_op  */
  YYSYMBOL_op_base = 210,                  /* op_base  */
  YYSYMBOL_operator = 211,                 /* operator  */
  YYSYMBOL_op_def = 212,                   /* op_def  */
  YYSYMBOL_func_def = 213,                 /* func_def  */
  YYSYMBOL_type_decl_base = 214,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 215,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 216,         /* type_decl_noflag  */
  YYSYMBOL_option = 217,                   /* option  */
  YYSYMBOL_type_decl_opt = 218,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 219,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 220,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 221,          /* type_decl_flag2  */
  YYSYMBOL_variable = 222,                 /* variable  */
  YYSYMBOL_variable_list = 223,            /* variable_list  */
  YYSYMBOL_union_def = 224,                /* union_def  */
  YYSYMBOL_var_decl = 225,                 /* var_decl  */
  YYSYMBOL_arg_decl = 226,                 /* arg_decl  */
  YYSYMBOL_eq_op = 227,                    /* eq_op  */
  YYSYMBOL_rel_op = 228,                   /* rel_op  */
  YYSYMBOL_shift_op = 229,                 /* shift_op  */
  YYSYMBOL_add_op = 230,                   /* add_op  */
  YYSYMBOL_mul_op = 231,                   /* mul_op  */
  YYSYMBOL_opt_exp = 232,                  /* opt_exp  */
  YYSYMBOL_con_exp = 233,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 234,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 235,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 236,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 237,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 238,                  /* and_exp  */
  YYSYMBOL_eq_exp = 239,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 240,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 241,                /* shift_exp  */
  YYSYMBOL_add_exp = 242,                  /* add_exp  */
  YYSYMBOL_mul_exp = 243,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 244,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 245,                 /* cast_exp  */
  YYSYMBOL_unary_op = 246,                 /* unary_op  */
  YYSYMBOL_unary_exp = 247,                /* unary_exp  */
  YYSYMBOL_lambda_list = 248,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 249,               /* lambda_arg  */
  YYSYMBOL_tmplarg_exp = 250,              /* tmplarg_exp  */
  YYSYMBOL_tmplarg = 251,                  /* tmplarg  */
  YYSYMBOL_tmplarg_list = 252,             /* tmplarg_list  */
  YYSYMBOL_call_paren = 253,               /* call_paren  */
  YYSYMBOL_post_op = 254,                  /* post_op  */
  YYSYMBOL_dot_exp = 255,                  /* dot_exp  */
  YYSYMBOL_post_exp = 256,                 /* post_exp  */
  YYSYMBOL_interp_exp = 257,               /* interp_exp  */
  YYSYMBOL_interp = 258,                   /* interp  */
  YYSYMBOL_capture = 259,                  /* capture  */
  YYSYMBOL_capture_list = 260,             /* capture_list  */
  YYSYMBOL_captures = 261,                 /* captures  */
  YYSYMBOL_array_lit_ed = 262,             /* array_lit_ed  */
  YYSYMBOL_basic_exp = 263,                /* basic_exp  */
  YYSYMBOL_prim_exp = 264                  /* prim_exp  */
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
#define YYLAST   2752

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  135
/* YYNRULES -- Number of rules.  */
#define YYNRULES  345
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  624

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   384


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
     125,   126,   127,   128,   129
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
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     412,   412,   421,   424,   428,   433,   435,   436,   440,   444,
     447,   447,   448,   448,   451,   452,   456,   457,   460,   465,
     465,   468,   477,   478,   480,   489,   498,   499,   503,   510,
     518,   526,   535,   544,   554,   561,   570,   577,   584,   593,
     593,   595,   596,   597,   598,   601,   602,   605,   606,   616,
     617,   618,   619,   621,   621,   623,   623,   623,   623,   623,
     626,   627,   630,   634,   635,   636,   640,   641,   644,   645,
     646,   650,   650,   651,   652,   653,   659,   659,   662,   663,
     667,   671,   673,   674,   674,   676,   676,   678,   679,   682,
     683,   684,   685,   688,   688,   690,   690,   693,   697,   702,
     708,   716,   725,   725,   725,   725,   725,   727,   735,   742,
     750,   756,   756,   758,   760,   762,   765,   765,   765,   766,
     771,   776,   783,   784,   798,   799,   803,   804,   807,   807,
     807,   808,   809,   809,   812,   813,   815,   815,   818,   822,
     824,   825,   828,   837,   839,   840,   844,   844,   845,   845,
     845,   845,   846,   846,   847,   847,   848,   848,   848,   850,
     850,   851,   852,   854,   856,   859,   859,   860,   860,   861,
     861,   862,   862,   863,   863,   864,   864,   865,   865,   866,
     866,   867,   867,   868,   868,   869,   869,   871,   871,   874,
     874,   874,   875,   875,   878,   879,   880,   881,   882,   885,
     886,   887,   888,   889,   890,   893,   896,   901,   901,   903,
     904,   907,   911,   912,   915,   916,   918,   918,   920,   924,
     925,   927,   929,   932,   934,   938,   939,   940,   942,   943,
     954,   954,   956,   957,   958,   958,   959,   959,   962,   966,
     967,   968,   971,   972,   973,   974,   978,   979,   980,   981,
     982,   988,   989,   990,   991,   992
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
  "OPID_A", "LOCALE", "LOCALE_INI", "LOCALE_END", "late", "using",
  "INTEGER", "<integer>", "<float>", "<litteral string>",
  "<litteral char>", "${", "INTERP_EXP", "<comment>", "#include",
  "#define", "#pragma", "#undef", "#ifdef", "#ifndef", "#else", "#if",
  "\n", "import", "}...", "<interp string lit>", "<interp string end>",
  "@<operator id>", "<identifier>", "+", "++", "-", "--", "*", "/", "%",
  "$", "?", "OPTIONS", ":", "::", "?:", "new", "spork", "fork", "<<<",
  ">>>", "&&", "==", ">=", ">", "<=", "<", "!=", "<<", ">>", "&", "|", "^",
  "||", ":[", "~", "!", "@", "<dynamic_operator>", "`foo`", "RANGE_EMPTY",
  "UMINUS", "UTIMES", "=", "SECTION_LIST", "STMT_LIST3", "STMT_LIST2",
  "STMT_LIST1", "$accept", "ast", "section_list", "section", "class_flag",
  "class_def", "class_body", "trait_def", "number", "decimal", "prim_def",
  "class_ext", "traits", "extend_def", "id_list", "specialized",
  "specialized_list", "stmt_list", "fptr_base", "_func_effects",
  "func_effects", "func_base", "fptr_def", "typedef_when", "type_def_type",
  "type_def", "type_decl_array", "arg", "arg_list", "locale_arg",
  "locale_list", "code_stmt", "code_list", "stmt_pp", "stmt",
  "spread_stmt", "$@1", "using_stmt", "retry_stmt", "handler",
  "handler_list", "try_stmt", "opt_id", "opt_comma", "enum_value",
  "enum_list", "enum_def", "when_exp", "match_case_stmt", "match_list",
  "match_stmt", "flow", "loop_stmt", "defer_stmt", "selection_stmt",
  "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template",
  "op", "array_exp", "array_empty", "dict_list", "range", "array",
  "decl_exp", "func_args", "decl_template", "global", "opt_global",
  "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "type_decl_base", "type_decl_tmpl",
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

#define YYPACT_NINF (-456)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-247)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     920,  -456,  1712,  1965,  1029,   279,  -456,    45,  -456,  1462,
    -456,    70,   104,   113,  2421,   279,   357,  -456,  -456,  1462,
     -24,   123,   279,   279,   121,   138,   121,   279,  -456,  -456,
     279,   279,  -456,    85,  1462,    98,    26,   111,  -456,   236,
    -456,  -456,  -456,  -456,  1829,  -456,  -456,  -456,  -456,  -456,
    -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,
    -456,   138,   138,  2525,  2525,  2421,  -456,  -456,  -456,   203,
     567,  -456,  -456,  -456,  -456,  -456,  -456,  1568,  -456,   279,
    -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,
     227,  -456,  -456,  -456,    59,  -456,  -456,   202,    68,  -456,
    -456,  -456,  -456,   287,  -456,  -456,  -456,   279,  -456,  -456,
     200,   108,   122,   135,   152,    74,   219,   166,    11,   218,
     173,   182,  2631,  -456,   189,  -456,  -456,    56,   222,  -456,
    -456,  -456,  2421,  -456,   294,   296,  -456,  -456,  -456,  -456,
    -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,  -456,   306,
    -456,   316,  -456,  -456,  -456,  -456,  2421,   238,   278,  -456,
    1138,    33,   126,  -456,  -456,  -456,  -456,   293,  -456,  -456,
     292,   302,  2421,   120,  2485,  1648,   -13,   325,   261,  -456,
     356,   329,  -456,  -456,  -456,   281,   308,   284,  -456,   285,
     279,  -456,    47,   277,   247,   333,   262,  -456,   371,    35,
    -456,   295,   293,   138,   297,   288,  -456,  -456,   300,   375,
     303,  2421,   291,   386,  1829,  -456,   322,  -456,  -456,   387,
    1247,     0,  -456,  -456,   381,  -456,  -456,   381,   298,  -456,
    -456,  -456,  -456,   138,  2421,  -456,  -456,   390,  -456,  2421,
    2421,  2421,  2421,   437,   293,  1758,   205,   138,   138,  2590,
    2631,  2631,  2631,  2631,  2631,  2631,  -456,  -456,  2631,  2631,
    2631,  -456,  2631,  -456,  2631,  2631,   138,  -456,   384,  1893,
     311,   201,   387,  -456,   389,  -456,  -456,  -456,  1829,    82,
    -456,  -456,   394,  2037,  -456,  -456,  -456,  -456,  2421,  2421,
    -456,   254,   206,  -456,   138,  -456,   138,   391,  2421,   403,
     392,  1648,   406,   327,   318,   393,   404,  -456,   -24,  -456,
     329,   304,   376,  -456,  -456,   304,   332,   138,   247,   345,
    -456,    35,  -456,  -456,  -456,  2101,  -456,  -456,   368,   402,
     350,   304,   345,  -456,   138,   430,  -456,   377,    39,  -456,
    -456,  1829,  2165,  -456,  -456,  1356,  -456,  -456,   -10,  1247,
    -456,  -456,  -456,   353,   432,  -456,  -456,  -456,  -456,  -456,
     293,   436,   211,   293,   304,   304,  -456,  -456,   304,    50,
    2631,   352,  -456,   108,   122,   135,   152,    74,   219,   166,
      11,   218,   173,   182,  -456,  1247,  -456,  -456,    34,  -456,
    -456,  -456,  -456,    89,  -456,  -456,  2229,  -456,  -456,  -456,
    -456,   440,    55,   118,  -456,   366,  -456,   188,  -456,  -456,
     370,   379,  1462,   449,  2421,  1462,  2293,     0,  -456,  2421,
    2421,  -456,    72,   382,  1462,  -456,    38,   397,  -456,   332,
     345,   237,   304,  -456,  -456,   354,  -456,   451,   458,   385,
     388,   462,   304,   460,   268,  -456,   464,   465,   138,  -456,
     470,   473,    29,  -456,  -456,   471,  -456,  -456,  -456,   304,
    1462,   477,  -456,  -456,  -456,  -456,   476,   478,   480,  -456,
    -456,   407,  -456,  2631,    77,   479,   201,  -456,  -456,  -456,
    2421,  -456,   395,   138,  -456,   304,   304,   472,  -456,   486,
    -456,  1462,   488,   400,   492,   481,   475,  -456,   409,  -456,
     498,  -456,   138,   499,   332,  -456,    61,   138,   332,   237,
     502,  -456,   803,  -456,   293,  -456,   425,  -456,  -456,  -456,
    -456,  -456,   239,  -456,   138,   381,   507,  -456,  -456,  -456,
     490,  -456,  -456,   138,   138,   138,  -456,  -456,  -456,  2357,
    -456,  -456,    55,  2421,  -456,   293,  -456,  1462,  1462,  -456,
    1462,  2421,  1462,  2421,   420,  1462,   368,   382,   505,   433,
    -456,  -456,    24,  -456,   511,  -456,   237,  -456,  -456,   686,
     402,  -456,   517,   438,  -456,    81,   447,  -456,  -456,   381,
    2421,   525,   526,   523,   527,  -456,    55,   528,  -456,  -456,
    -456,   530,  -456,  -456,  1462,  -456,  -456,  -456,  -456,  -456,
    -456,  -456,  -456,  -456,   531,  -456,   529,  -456,  -456,  -456,
    -456,  -456,  -456,   138,  -456,  -456,  -456,  1462,  1462,  -456,
    -456,   534,  -456,  -456
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   136,     0,   250,     0,   182,   226,     0,   116,     0,
     117,     0,     0,     0,     0,   182,     0,   129,   130,     0,
     101,     0,   182,   182,   174,     0,   201,   182,    49,    50,
     182,   182,   225,     0,     0,   298,     0,     0,   224,     0,
      24,   329,   330,   331,     0,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,   332,   306,   279,   307,
     280,     0,     0,     0,     0,     0,   283,   282,   340,     0,
       0,     4,     9,    10,   328,    16,    11,     7,    14,   182,
      15,    81,    84,    38,    88,    89,    87,    86,    12,    82,
       0,    79,    85,    80,     0,    83,    78,     0,   137,   337,
     139,   206,   207,     0,   208,     8,   227,   182,    13,   163,
     251,   255,   257,   259,   261,   263,   265,   267,   269,   271,
     273,   275,     0,   277,   325,   281,   314,   284,   334,   333,
     309,   345,     0,   244,   279,   280,   247,   248,   149,   145,
     241,   239,   240,   238,   146,   242,   243,   147,   148,     0,
     192,     0,   194,   193,   196,   195,     0,   249,     0,    62,
       0,   137,     0,   175,   172,   177,   178,     0,   176,   180,
     179,   184,     0,     0,     0,     0,     0,     0,     0,   132,
       0,     0,   100,   344,    95,     0,   184,     0,   173,     0,
     182,   212,     0,     0,   144,   216,   220,   222,    53,     0,
     202,     0,     0,     0,     0,     0,   126,   295,   297,     0,
       0,   250,   212,     0,     0,   315,     0,   318,   294,   289,
       0,     0,   290,   286,     0,   291,   287,     0,     0,     1,
       6,     5,    39,     0,     0,   134,    25,     0,   135,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,   237,     0,     0,
       0,   245,     0,   246,     0,     0,     0,   285,     0,     0,
       0,     0,     0,   161,   162,   311,   310,   313,     0,     0,
     339,   343,     0,     0,   327,   326,   335,    63,     0,     0,
     336,     0,     0,   181,     0,   183,     0,     0,     0,   332,
       0,     0,   320,     0,     0,     0,     0,   131,   101,    97,
      99,   171,   184,   186,    17,   171,    29,     0,   144,     0,
     214,     0,   218,   219,   221,     0,    52,   223,     0,    43,
       0,   171,     0,   296,    61,     0,   249,     0,     0,    92,
     316,     0,     0,   288,    64,     0,   320,   322,     0,     0,
     292,   293,   338,     0,     0,   133,   138,   142,   140,   141,
       0,     0,     0,     0,   171,   171,   204,   203,   171,     0,
       0,     0,   254,   256,   258,   260,   262,   264,   266,   268,
     270,   272,   274,   276,   278,     0,   341,   153,     0,   308,
     300,   301,   302,     0,   299,   312,     0,   155,   319,   160,
     159,     0,   156,     0,   167,   235,    56,     0,   188,   187,
       0,     0,     0,     0,     0,     0,     0,     0,   321,     0,
       0,   112,     0,     0,     0,    98,     0,    28,   185,    29,
       0,     0,   171,   215,    32,     0,   217,     0,     0,     0,
      44,     0,   171,     0,     0,    58,    60,     0,    61,    77,
     332,   314,   144,   317,   305,     0,    65,   324,   323,   171,
       0,     0,   205,   210,   209,   200,     0,     0,     0,   233,
     164,     0,   253,     0,   137,   150,     0,   143,   154,   158,
       0,   234,    55,     0,   166,   171,   171,   127,   119,     0,
     124,     0,     0,     0,     0,   110,   115,   113,   104,   106,
     103,    96,     0,     0,    29,    36,     0,     0,    29,     0,
      30,    22,     0,    23,     0,    31,     0,    26,    41,    42,
      46,    40,     0,    90,     0,     0,     0,    94,    93,   304,
      47,   118,   211,     0,     0,     0,   165,   252,   342,     0,
     151,   303,   157,     0,    57,     0,    45,     0,     0,   120,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     170,    34,     0,   168,     0,    27,     0,    19,    21,     0,
      43,    33,   212,     0,   230,     0,     0,    59,   190,     0,
       0,     0,     0,     0,     0,   152,    54,     0,   128,   125,
     121,     0,   122,   109,     0,   114,   105,   107,   108,    35,
      37,   169,    18,    20,     0,   228,     0,   232,   231,    91,
     189,    48,    51,     0,   198,   199,   191,     0,   111,   213,
     229,     0,   123,   197
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -456,  -456,    22,   -66,   235,  -456,  -455,  -456,   -89,   214,
    -456,  -456,  -388,  -456,  -275,   -18,  -456,    -3,  -456,  -456,
     -25,  -456,  -456,  -456,  -456,  -456,   -14,  -279,  -456,  -456,
      99,  -456,   -61,  -456,    -9,  -456,  -456,  -456,  -456,   240,
    -456,  -456,   245,  -456,    -1,  -456,  -456,  -456,   136,  -456,
    -456,   396,  -456,  -456,  -456,  -456,  -456,  -144,    12,    16,
    -164,  -456,  -247,  -456,  -456,  -120,   359,   100,  -193,  -286,
     155,  -456,   378,  -456,    28,  -154,  -456,  -456,  -456,   315,
     319,  -456,  -456,  -456,   372,  -456,   250,  -456,   367,   536,
     -23,  -456,    -2,  -456,  -456,   105,  -456,  -456,  -108,  -104,
    -101,   -98,   412,  -231,  -456,   331,   326,   346,   351,   349,
     348,   358,   347,   364,   383,   365,   -79,     3,  -456,  -456,
    -456,   159,  -456,  -237,  -121,   273,   310,  -191,  -456,  -187,
    -456,   -11,  -456,  -249,  -456
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    69,    70,    71,   185,    72,   513,    73,    74,   237,
      75,   508,   431,    76,   435,   505,   506,    77,   202,   440,
     441,   167,    78,   581,    79,    80,   405,   445,   407,   446,
     447,    81,   222,    82,    83,    84,   576,    85,    86,   309,
     310,    87,   183,   558,   499,   500,    88,   554,   421,   422,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     272,   150,   273,   274,   162,    99,   276,   100,   292,   427,
     168,   189,   169,   170,   186,   296,   314,   101,   102,   151,
     246,   103,   104,   105,   194,   195,   196,   324,   197,   198,
     106,   107,   574,   575,   108,   470,   482,   258,   152,   153,
     154,   155,   158,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   208,   124,
     391,   392,   393,   343,   125,   126,   127,   217,   128,   304,
     348,   224,   286,   129,   130
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     173,   160,   199,   225,   231,   236,   277,   275,   259,   329,
     181,   193,   406,   260,   149,   157,   199,   262,   371,   372,
     161,   264,   394,   340,   247,   206,   177,   397,   180,   429,
     320,   301,   313,   171,   347,   395,   269,   239,   199,   199,
     190,   509,   475,   178,     2,   443,     3,   218,   219,   132,
     172,   362,   190,   227,   567,   342,   216,   444,   203,   204,
     182,  -144,   235,   269,   164,   562,   223,   226,   232,   563,
      20,   302,   239,   270,   346,   174,   502,   228,   466,   467,
     199,   239,   468,   496,   346,   457,   190,   398,   538,   245,
     502,   503,   607,   476,    35,   420,   133,   477,   261,   303,
     270,    40,   303,    41,    42,    43,    44,   233,   504,   175,
     209,   602,   303,   268,   564,    57,   561,    59,   176,   191,
     566,    40,   504,   450,   365,   267,   184,   240,   288,   283,
     289,   191,   471,    32,   469,   248,     8,   290,    10,   472,
      65,    38,    57,   190,    59,   271,   514,   192,   279,   240,
     453,   232,   241,   242,   433,   510,   521,   416,   428,   164,
      68,   458,   240,   350,   247,   572,   351,   461,   282,   205,
     465,   240,   271,   530,   241,   242,   240,   288,   256,   188,
     199,   200,   207,   257,   297,   367,   300,   241,   242,   330,
      32,   210,   483,   192,   484,   211,   241,   242,    38,   545,
     546,   241,   242,   229,   544,   238,   190,   386,   366,   408,
     199,   252,   240,   480,   463,   349,   349,   345,   317,   353,
     199,   349,   191,   336,   199,   199,   216,   394,   540,   245,
     493,   409,   234,   368,   369,   253,   161,   241,   242,   236,
     511,   190,   537,   199,   190,   577,   354,   512,   199,   254,
     192,   356,   384,    32,   582,   583,   584,   390,   187,   190,
     404,    38,   201,    40,   255,    41,    42,    43,   199,   265,
     259,   199,   516,   199,   266,   260,   145,   146,   523,   262,
     410,   388,   411,   264,   221,   191,   284,   285,    32,   278,
     216,    32,   190,   249,   199,   401,    38,   250,   291,    38,
    -245,   464,  -246,   432,   402,   403,    32,   263,   136,   137,
     413,   199,   280,   192,    38,   251,   163,   164,   165,   166,
     212,   570,   281,   572,   140,   141,   142,   143,   243,   163,
     164,   277,   275,   283,   621,   305,   232,   437,   191,    32,
     357,   358,   359,   294,   295,   306,   345,    38,   192,   312,
     295,   192,   587,   216,   455,   322,   323,   515,   516,   307,
     179,   308,     2,   271,     3,   311,   192,   132,   315,   316,
       6,   191,   319,    57,    58,    59,    60,   321,   325,   328,
     334,   331,   345,   332,   333,   244,   338,   335,    20,   339,
     341,   349,   342,   355,   385,   389,   396,   412,   415,   192,
     352,   474,   399,   487,    66,    67,   490,   414,   437,    32,
     417,   418,    35,   419,   423,   501,   420,    38,   295,    40,
     426,    41,    42,    43,    44,   199,   489,   430,   492,   434,
      40,   494,   495,   439,   442,   448,   449,   459,   460,   462,
     507,    56,   190,    57,    58,    59,    60,   473,   479,    61,
     481,   531,   488,   199,   485,    62,    63,    64,    65,   475,
     199,   517,   390,   486,   578,   520,   498,   596,   524,   518,
     522,   525,   519,   527,    66,    67,   528,   529,    68,   199,
     532,   533,   549,   534,   199,   535,   539,   547,   559,    32,
     543,   469,   548,   565,   550,   551,   542,    38,   552,   199,
     555,   199,   557,   231,   556,   553,   516,   560,   573,   571,
     199,   199,   199,   579,   580,   594,   598,   599,   610,   601,
     605,   191,   606,    57,    58,    59,    60,   609,   612,   614,
     613,   616,   620,   615,   569,   360,   617,   619,   588,   589,
     623,   590,   438,   592,   600,   604,   595,   526,   293,   192,
     425,   437,   199,   424,    66,    67,   597,   326,   497,   586,
     364,   573,   361,   591,   318,   593,   327,    -2,   230,   298,
       1,   436,     2,   608,     3,   213,   536,     4,   374,     5,
       6,     7,   373,     8,     9,    10,    11,    12,    13,    14,
     199,   618,   611,    15,    16,    17,    18,    19,    20,   375,
      21,    22,    23,    24,   377,   376,   378,   380,   622,   232,
      25,   451,    26,    27,    28,    29,    30,   379,    31,    32,
      33,    34,    35,   337,    36,    37,   381,    38,    39,    40,
     383,    41,    42,    43,    44,   541,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,   382,   452,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,    61,
       0,     0,     0,     0,     0,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,     0,   230,    68,     1,
       0,     2,     0,     3,     0,     0,     4,   603,     5,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,    15,    16,    17,    18,    19,    20,     0,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,    25,
       0,    26,    27,    28,    29,    30,     0,    31,    32,    33,
      34,    35,     0,    36,    37,     0,    38,    39,    40,     0,
      41,    42,    43,    44,     0,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     0,     0,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    67,     0,     1,    68,     2,     0,
       3,     0,     0,     4,   568,     5,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
      16,    17,    18,    19,    20,     0,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     0,    25,     0,    26,    27,
      28,    29,    30,     0,    31,    32,    33,    34,    35,     0,
      36,    37,     0,    38,    39,    40,     0,    41,    42,    43,
      44,     0,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     0,     0,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,    67,     0,     1,    68,     2,     0,     3,     0,     0,
       4,     0,     5,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,    15,    16,    17,    18,
      19,    20,     0,    21,    22,    23,    24,     0,     0,     0,
       0,     0,     0,    25,     0,    26,    27,    28,    29,    30,
       0,    31,    32,    33,    34,    35,     0,    36,    37,     0,
      38,    39,    40,     0,    41,    42,    43,    44,     0,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       0,     0,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,    61,     0,     0,     0,     0,     0,    62,    63,
      64,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,    66,    67,     4,
     159,    68,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,    40,     0,    41,    42,    43,    44,     0,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     0,
       0,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,    66,    67,     4,   287,
      68,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,     0,     0,    37,     0,    38,    39,
      40,     0,    41,    42,    43,    44,     0,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,     0,
       0,     0,    56,     0,    57,    58,    59,    60,     0,     0,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,    66,    67,     4,   344,    68,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,     0,     0,    37,     0,    38,    39,    40,
       0,    41,    42,    43,    44,     0,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     0,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,    61,
       0,     0,     0,     0,     0,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     0,     3,    66,    67,     4,   456,    68,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,     0,     0,    37,     0,    38,    39,    40,     0,
      41,    42,    43,    44,     0,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     0,     0,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
       0,     0,     4,    66,    67,     6,     7,    68,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,    35,     0,     0,
      37,     0,    38,    39,    40,     0,    41,    42,    43,    44,
       0,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,     0,     0,     0,    56,     0,    57,    58,
      59,    60,     0,     0,    61,     0,     0,     0,     0,     0,
      62,    63,    64,    65,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,     0,     0,     4,    66,
      67,     6,     7,    68,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,     0,     0,    37,     0,    38,    39,
      40,     0,    41,    42,    43,    44,     0,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,     0,
       0,     1,    56,     2,    57,     3,    59,     0,   132,     0,
      61,     6,     0,     0,     0,     0,    62,    63,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,    35,     0,     0,     0,     0,    38,     0,
      40,     0,    41,    42,    43,    44,     0,     2,   131,     3,
       0,     0,   132,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    56,     0,    57,    58,    59,    60,     0,     0,
      61,     0,     0,    20,     0,     0,    62,    63,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    66,    67,    35,     0,    68,
       0,     0,    38,     0,    40,     0,    41,    42,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,   133,    57,   134,
      59,   135,   136,   137,    61,     0,   138,     0,     0,     0,
      62,    63,    64,    65,   363,     0,   139,   140,   141,   142,
     143,   144,   145,   146,     0,     0,     0,     0,     0,    66,
      67,   147,   148,    68,     2,     0,     3,     0,     0,   132,
       0,     0,     6,   133,    57,   261,    59,   263,   136,   137,
       0,     0,   138,     0,     0,     0,     0,     0,     0,     0,
      20,     0,   139,   140,   141,   142,   143,   144,   145,   146,
       0,     0,     0,     0,     0,     0,     0,   147,   148,     0,
       0,    32,     0,     0,    35,     0,     0,     0,     0,    38,
       0,    40,     0,    41,    42,    43,    44,     0,     2,     0,
       3,   387,     0,   132,     0,     0,     6,     0,     0,     0,
     214,   215,     0,    56,     0,    57,    58,    59,    60,     0,
       0,    61,     0,     0,    20,     0,     0,    62,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    66,    67,    35,     0,
      68,     0,     0,    38,     0,    40,     0,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     0,     0,   132,     0,    56,     6,    57,
      58,    59,    60,     0,     0,    61,     0,     0,   156,     0,
       0,    62,    63,    64,    65,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,    67,     0,     0,    68,     0,     0,    32,     0,     0,
      35,     0,     0,     0,     0,    38,     0,    40,     0,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,   400,     0,   132,     0,    56,
       6,    57,    58,    59,    60,     0,     0,    61,     0,     0,
     156,     0,     0,    62,    63,    64,    65,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,     0,     0,    68,     0,     0,    32,
       0,     0,    35,     0,     0,     0,     0,    38,     0,    40,
       0,    41,    42,    43,    44,     0,     2,     0,     3,   387,
       0,   132,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,    61,
       0,     0,    20,     0,     0,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    66,    67,    35,     0,    68,     0,
       0,    38,     0,    40,     0,    41,    42,    43,    44,     0,
       2,   454,     3,     0,     0,   132,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,    61,     0,     0,    20,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    66,    67,
      35,     0,    68,     0,     0,    38,     0,    40,     0,    41,
      42,    43,    44,     0,     2,     0,     3,   478,     0,   132,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,    61,     0,     0,
      20,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    66,    67,    35,     0,    68,     0,     0,    38,
       0,    40,     0,    41,    42,    43,    44,     0,     2,   491,
       3,     0,     0,   132,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,    61,     0,     0,    20,     0,     0,    62,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    66,    67,    35,     0,
      68,     0,     0,    38,     0,    40,     0,    41,    42,    43,
      44,     0,     2,     0,     3,   585,     0,   132,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,    61,     0,     0,    20,     0,
       0,    62,    63,    64,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      66,    67,    35,     0,    68,     0,     0,    38,     0,    40,
       0,    41,    42,    43,    44,     0,     2,     0,     3,     0,
       0,   132,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,    61,
       0,     0,    20,     0,     0,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    66,    67,    35,     0,    68,     0,
       0,    38,     0,    40,     0,    41,    42,    43,    44,     0,
       2,     0,     3,     0,     0,   132,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,    61,     0,     0,    20,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     0,     0,   220,     0,    32,    66,    67,
      35,     0,    68,     0,     0,    38,     0,    40,     0,    41,
      42,    43,    44,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   299,
       0,    57,    58,    59,    60,     0,     0,    61,     0,     0,
      35,     0,     0,    62,    63,    64,    65,    40,     0,    41,
      42,    43,    44,     0,     0,     2,     0,     3,     0,     0,
     132,     0,    66,    67,     0,     0,    68,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,    61,     0,     0,
     221,    20,     0,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,   132,    66,    67,     0,    35,    68,     0,     0,     0,
       0,     0,    40,     0,    41,    42,    43,    44,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,    61,     0,     0,   370,    35,     0,    62,    63,
      64,    65,     0,    40,     0,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    67,     0,
       0,    68,     0,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,    67,
       0,     0,    68
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    64,    70,    94,   127,   127,   116,   202,
      19,    25,   291,   117,     2,     3,    39,   118,   249,   250,
       4,   119,   271,   214,   103,    34,    14,   274,    16,   315,
     194,   175,   186,     5,   221,   272,     7,     4,    61,    62,
       5,   429,     8,    15,     5,   331,     7,    61,    62,    10,
       5,   244,     5,    64,   509,     5,    44,   332,    30,    31,
      84,     5,     3,     7,    38,     4,    63,    64,    77,     8,
      31,    84,     4,    44,    84,     5,    52,    65,   364,   365,
     103,     4,   368,    11,    84,    95,     5,   278,    11,   103,
      52,    53,    11,     4,    55,    23,    85,     8,    87,   112,
      44,    62,   112,    64,    65,    66,    67,    79,    84,     5,
      84,   566,   112,   124,    53,    86,   504,    88,     5,    84,
     508,    62,    84,    84,   245,   122,     3,    94,    95,    95,
       4,    84,   369,    52,    84,   107,    16,    11,    18,   370,
     101,    60,    86,     5,    88,   116,   432,   112,   132,    94,
     341,   160,   119,   120,   318,   430,   442,   301,   312,    38,
     121,   348,    94,   224,   243,    84,   227,   360,   156,    84,
     363,    94,   116,   459,   119,   120,    94,    95,   104,    24,
     203,    26,    84,   109,   172,   246,   174,   119,   120,   203,
      52,    36,     4,   112,     6,    84,   119,   120,    60,   485,
     486,   119,   120,     0,   483,     3,     5,   268,     3,     3,
     233,   103,    94,    95,     3,    10,    10,   220,   190,   233,
     243,    10,    84,   211,   247,   248,   214,   476,   475,   243,
     417,   292,     5,   247,   248,   113,   220,   119,   120,   328,
       3,     5,   473,   266,     5,   524,   234,    10,   271,   114,
     112,   239,   266,    52,   533,   534,   535,   271,    23,     5,
       6,    60,    27,    62,   112,    64,    65,    66,   291,    96,
     378,   294,     4,   296,    92,   379,   110,   111,    10,   380,
     294,   269,   296,   381,    95,    84,     8,     9,    52,    67,
     278,    52,     5,    93,   317,   283,    60,    97,     5,    60,
       6,   362,     6,   317,   288,   289,    52,    89,    90,    91,
     298,   334,     6,   112,    60,   115,    37,    38,    39,    40,
      84,   514,     6,    84,   105,   106,   107,   108,    41,    37,
      38,   452,   452,    95,   613,    10,   345,   325,    84,    52,
     240,   241,   242,    41,    42,    84,   349,    60,   112,    41,
      42,   112,   545,   341,   342,    93,    94,     3,     4,     3,
       3,    32,     5,   116,     7,    84,   112,    10,    84,    84,
      13,    84,    95,    86,    87,    88,    89,    44,     7,    84,
       5,    84,   385,    95,    84,    98,    95,    84,    31,     3,
      68,    10,     5,     3,    10,    84,     7,     6,     6,   112,
     102,   385,     8,   412,   117,   118,   415,     4,   396,    52,
       4,    84,    55,    95,    10,   424,    23,    60,    42,    62,
     116,    64,    65,    66,    67,   448,   414,    95,   416,    84,
      62,   419,   420,    31,    84,     5,    59,    84,     6,     3,
      43,    84,     5,    86,    87,    88,    89,    95,     8,    92,
      84,   460,     3,   476,    84,    98,    99,   100,   101,     8,
     483,     3,   476,    84,   525,     3,    84,   556,     4,    84,
      10,     6,    84,     3,   117,   118,     3,     6,   121,   502,
       3,     5,   491,     5,   507,     5,     7,    15,   502,    52,
      95,    84,     6,   507,     6,    95,   480,    60,     6,   522,
      25,   524,     4,   569,    95,    24,     4,     8,   522,    84,
     533,   534,   535,     6,    24,    95,    11,    84,   579,     8,
       3,    84,    84,    86,    87,    88,    89,    80,     3,     6,
       4,     3,     3,     6,   512,    98,     6,     6,   547,   548,
       6,   550,   328,   552,   562,   570,   555,   448,   170,   112,
     310,   539,   575,   308,   117,   118,   557,   198,   422,   543,
     245,   575,   243,   551,   192,   553,   199,     0,     1,   173,
       3,   321,     5,   575,     7,    39,   471,    10,   252,    12,
      13,    14,   251,    16,    17,    18,    19,    20,    21,    22,
     613,   594,   580,    26,    27,    28,    29,    30,    31,   253,
      33,    34,    35,    36,   255,   254,   258,   260,   617,   618,
      43,   338,    45,    46,    47,    48,    49,   259,    51,    52,
      53,    54,    55,   211,    57,    58,   262,    60,    61,    62,
     265,    64,    65,    66,    67,   476,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,   264,   338,    -1,
      -1,    84,    -1,    86,    87,    88,    89,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,   118,    -1,     1,   121,     3,
      -1,     5,    -1,     7,    -1,    -1,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    57,    58,    -1,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,   118,    -1,     3,   121,     5,    -1,
       7,    -1,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    -1,
      57,    58,    -1,    60,    61,    62,    -1,    64,    65,    66,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    88,    89,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,   118,    -1,     3,   121,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    -1,    57,    58,    -1,
      60,    61,    62,    -1,    64,    65,    66,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,   117,   118,    10,
      11,   121,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,   117,   118,    10,    11,
     121,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    -1,    64,    65,    66,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,   117,   118,    10,    11,   121,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    62,
      -1,    64,    65,    66,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    84,    -1,    86,    87,    88,    89,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,   117,   118,    10,    11,   121,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
      -1,    -1,    10,   117,   118,    13,    14,   121,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    60,    61,    62,    -1,    64,    65,    66,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,
      88,    89,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,    -1,    -1,    10,   117,
     118,    13,    14,   121,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    -1,    64,    65,    66,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    -1,
      -1,     3,    84,     5,    86,     7,    88,    -1,    10,    -1,
      92,    13,    -1,    -1,    -1,    -1,    98,    99,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    -1,
      62,    -1,    64,    65,    66,    67,    -1,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    -1,    -1,
      92,    -1,    -1,    31,    -1,    -1,    98,    99,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,   117,   118,    55,    -1,   121,
      -1,    -1,    60,    -1,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,    56,    -1,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,   117,
     118,   119,   120,   121,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    13,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,   104,   105,   106,   107,   108,   109,   110,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
      -1,    62,    -1,    64,    65,    66,    67,    -1,     5,    -1,
       7,     8,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,
      81,    82,    -1,    84,    -1,    86,    87,    88,    89,    -1,
      -1,    92,    -1,    -1,    31,    -1,    -1,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,   117,   118,    55,    -1,
     121,    -1,    -1,    60,    -1,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    10,    -1,    84,    13,    86,
      87,    88,    89,    -1,    -1,    92,    -1,    -1,    95,    -1,
      -1,    98,    99,   100,   101,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,   118,    -1,    -1,   121,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    60,    -1,    62,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,     8,    -1,    10,    -1,    84,
      13,    86,    87,    88,    89,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    99,   100,   101,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,   118,    -1,    -1,   121,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    -1,    62,
      -1,    64,    65,    66,    67,    -1,     5,    -1,     7,     8,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    87,    88,    89,    -1,    -1,    92,
      -1,    -1,    31,    -1,    -1,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,   117,   118,    55,    -1,   121,    -1,
      -1,    60,    -1,    62,    -1,    64,    65,    66,    67,    -1,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,
      89,    -1,    -1,    92,    -1,    -1,    31,    -1,    -1,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,   117,   118,
      55,    -1,   121,    -1,    -1,    60,    -1,    62,    -1,    64,
      65,    66,    67,    -1,     5,    -1,     7,     8,    -1,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    -1,    -1,    92,    -1,    -1,
      31,    -1,    -1,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,   117,   118,    55,    -1,   121,    -1,    -1,    60,
      -1,    62,    -1,    64,    65,    66,    67,    -1,     5,     6,
       7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,    -1,
      -1,    92,    -1,    -1,    31,    -1,    -1,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,   117,   118,    55,    -1,
     121,    -1,    -1,    60,    -1,    62,    -1,    64,    65,    66,
      67,    -1,     5,    -1,     7,     8,    -1,    10,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    88,    89,    -1,    -1,    92,    -1,    -1,    31,    -1,
      -1,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
     117,   118,    55,    -1,   121,    -1,    -1,    60,    -1,    62,
      -1,    64,    65,    66,    67,    -1,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    87,    88,    89,    -1,    -1,    92,
      -1,    -1,    31,    -1,    -1,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,   117,   118,    55,    -1,   121,    -1,
      -1,    60,    -1,    62,    -1,    64,    65,    66,    67,    -1,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,
      89,    -1,    -1,    92,    -1,    -1,    31,    -1,    -1,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    10,    -1,    52,   117,   118,
      55,    -1,   121,    -1,    -1,    60,    -1,    62,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    -1,    -1,    92,    -1,    -1,
      55,    -1,    -1,    98,    99,   100,   101,    62,    -1,    64,
      65,    66,    67,    -1,    -1,     5,    -1,     7,    -1,    -1,
      10,    -1,   117,   118,    -1,    -1,   121,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    -1,    -1,    92,    -1,    -1,
      95,    31,    -1,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    10,   117,   118,    -1,    55,   121,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,
      -1,    -1,    92,    -1,    -1,    95,    55,    -1,    98,    99,
     100,   101,    -1,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,    -1,
      -1,   121,    -1,    -1,    -1,    84,    -1,    86,    87,    88,
      89,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,
      -1,    -1,   121
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,    10,    12,    13,    14,    16,    17,
      18,    19,    20,    21,    22,    26,    27,    28,    29,    30,
      31,    33,    34,    35,    36,    43,    45,    46,    47,    48,
      49,    51,    52,    53,    54,    55,    57,    58,    60,    61,
      62,    64,    65,    66,    67,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    84,    86,    87,    88,
      89,    92,    98,    99,   100,   101,   117,   118,   121,   131,
     132,   133,   135,   137,   138,   140,   143,   147,   152,   154,
     155,   161,   163,   164,   165,   167,   168,   171,   176,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   195,
     197,   207,   208,   211,   212,   213,   220,   221,   224,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   249,   254,   255,   256,   258,   263,
     264,     6,    10,    85,    87,    89,    90,    91,    94,   104,
     105,   106,   107,   108,   109,   110,   111,   119,   120,   188,
     191,   209,   228,   229,   230,   231,    95,   188,   232,    11,
     147,   189,   194,    37,    38,    39,    40,   151,   200,   202,
     203,   204,     5,   164,     5,     5,     5,   188,   204,     3,
     188,   164,    84,   172,     3,   134,   204,   134,   200,   201,
       5,    84,   112,   156,   214,   215,   216,   218,   219,   220,
     200,   134,   148,   204,   204,    84,   164,    84,   248,    84,
     200,    84,    84,   219,    81,    82,   188,   257,   156,   156,
      10,    95,   162,   247,   261,   162,   247,   261,   188,     0,
       1,   133,   164,   204,     5,     3,   138,   139,     3,     4,
      94,   119,   120,    41,    98,   156,   210,   246,   204,    93,
      97,   115,   103,   113,   114,   112,   104,   109,   227,   228,
     229,    87,   230,    89,   231,    96,    92,   247,   261,     7,
      44,   116,   190,   192,   193,   195,   196,   254,    67,   189,
       6,     6,   188,    95,     8,     9,   262,    11,    95,     4,
      11,     5,   198,   202,    41,    42,   205,   188,   181,    84,
     188,   187,    84,   112,   259,    10,    84,     3,    32,   169,
     170,    84,    41,   205,   206,    84,    84,   204,   214,    95,
     190,    44,    93,    94,   217,     7,   196,   218,    84,   198,
     156,    84,    95,    84,     5,    84,   188,   232,    95,     3,
     257,    68,     5,   253,    11,   147,    84,   259,   260,    10,
     162,   162,   102,   156,   188,     3,   188,   197,   197,   197,
      98,   210,   198,    56,   209,   254,     3,   162,   156,   156,
      95,   233,   233,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   156,    10,   162,     8,   188,    84,
     156,   250,   251,   252,   263,   253,     7,   192,   257,     8,
       8,   188,   189,   189,     6,   156,   157,   158,     3,   162,
     156,   156,     6,   188,     4,     6,   187,     4,    84,    95,
      23,   178,   179,    10,   172,   169,   116,   199,   205,   199,
      95,   142,   156,   190,    84,   144,   216,   188,   139,    31,
     149,   150,    84,   199,   144,   157,   159,   160,     5,    59,
      84,   255,   256,   257,     6,   188,    11,    95,   259,    84,
       6,   198,     3,     3,   162,   198,   199,   199,   199,    84,
     225,   253,   233,    95,   189,     8,     4,     8,     8,     8,
      95,    84,   226,     4,     6,    84,    84,   164,     3,   188,
     164,     6,   188,   259,   188,   188,    11,   178,    84,   174,
     175,   164,    52,    53,    84,   145,   146,    43,   141,   142,
     144,     3,    10,   136,   199,     3,     4,     3,    84,    84,
       3,   199,    10,    10,     4,     6,   160,     3,     3,     6,
     199,   164,     3,     5,     5,     5,   225,   233,    11,     7,
     192,   251,   189,    95,   157,   199,   199,    15,     6,   164,
       6,    95,     6,    24,   177,    25,    95,     4,   173,   156,
       8,   142,     4,     8,    53,   156,   142,   136,    11,   132,
     198,    84,    84,   156,   222,   223,   166,   157,   162,     6,
      24,   153,   157,   157,   157,     8,   189,   198,   164,   164,
     164,   188,   164,   188,    95,   164,   138,   174,    11,    84,
     145,     8,   136,    11,   150,     3,    84,    11,   222,    80,
     162,   188,     3,     4,     6,     6,     3,     6,   147,     6,
       3,   157,   164,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   130,   131,   131,   132,   132,   132,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   134,   135,   135,
     136,   136,   136,   137,   138,   139,   140,   141,   141,   142,
     142,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     148,   149,   149,   150,   150,   151,   152,   153,   153,   154,
     154,   155,   156,   156,   157,   157,   158,   158,   159,   159,
     160,   160,   161,   161,   162,   162,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     166,   165,   167,   167,   167,   168,   169,   170,   170,   171,
     172,   172,   173,   173,   174,   174,   175,   175,   176,   177,
     177,   178,   179,   179,   180,   180,   181,   181,   182,   182,
     182,   182,   182,   182,   182,   182,   183,   184,   184,   185,
     185,   186,   186,   186,   186,   187,   187,   188,   188,   189,
     189,   189,   189,   190,   190,   191,   191,   191,   191,   191,
     192,   192,   192,   193,   193,   193,   194,   194,   195,   195,
     195,   196,   196,   197,   197,   197,   198,   198,   199,   199,
     199,   199,   200,   201,   201,   202,   202,   203,   203,   204,
     204,   204,   204,   205,   205,   206,   206,   207,   207,   207,
     207,   208,   209,   209,   209,   209,   209,   210,   210,   210,
     210,   211,   211,   212,   212,   212,   213,   213,   213,   213,
     213,   213,   214,   214,   215,   215,   216,   216,   217,   217,
     217,   218,   219,   219,   220,   220,   221,   221,   222,   222,
     223,   223,   224,   225,   226,   226,   227,   227,   228,   228,
     228,   228,   229,   229,   230,   230,   231,   231,   231,   232,
     232,   233,   233,   233,   233,   234,   234,   235,   235,   236,
     236,   237,   237,   238,   238,   239,   239,   240,   240,   241,
     241,   242,   242,   243,   243,   244,   244,   245,   245,   246,
     246,   246,   246,   246,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   248,   248,   249,   249,   250,
     251,   251,   252,   252,   253,   253,   254,   254,   255,   256,
     256,   256,   256,   256,   256,   257,   257,   257,   258,   258,
     259,   259,   260,   260,   261,   261,   262,   262,   263,   263,
     263,   263,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     3,     5,     5,     2,     3,     1,     2,     3,
       1,     0,     1,     0,     1,     3,     1,     3,     7,     2,
       0,     5,     1,     2,     7,     5,     1,     1,     5,     5,
       6,     7,     7,     9,     5,     7,     2,     5,     7,     1,
       1,     3,     2,     3,     2,     2,     1,     1,     3,     1,
       3,     3,     3,     3,     0,     1,     1,     1,     1,     1,
       3,     4,     5,     2,     3,     2,     3,     5,     5,     4,
       4,     1,     1,     1,     4,     5,     3,     2,     3,     4,
       3,     0,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     2,     0,     1,     0,     2,     1,     4,     4,     7,
       6,     8,     1,     1,     1,     1,     1,     8,     6,     6,
       3,     1,     2,     3,     3,     4,     1,     1,     1,     4,
       4,     5,     1,     7,     2,     3,     1,     3,     1,     1,
       0,     2,     1,     2,     1,     1,     1,     1,     2,     3,
       1,     2,     7,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     5,     4,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     3,     2,
       2,     2,     3,     3,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     3,     3,     2,     1,     1,     3,     1,
       2,     2,     3,     2,     1,     1,     2,     3,     2,     3,
       1,     2,     1,     2,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       1,     3,     5,     3,     2,     2
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
#line 2607 "src/parser.c"
    break;

  case 3: /* ast: %empty  */
#line 204 "src/gwion.y"
           { (yyval.ast) = NULL; }
#line 2613 "src/parser.c"
    break;

  case 4: /* section_list: section  */
#line 207 "src/gwion.y"
            { YYLIST_INI(Section, (yyval.ast), (yyvsp[0].section)); }
#line 2619 "src/parser.c"
    break;

  case 5: /* section_list: section_list section  */
#line 208 "src/gwion.y"
                                            { YYLIST_END(Section, (yyval.ast), (yyvsp[-1].ast), (yyvsp[0].section)); }
#line 2625 "src/parser.c"
    break;

  case 7: /* section: stmt_list  */
#line 212 "src/gwion.y"
                                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list), (yylsp[0])); }
#line 2631 "src/parser.c"
    break;

  case 8: /* section: func_def  */
#line 213 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def), (yylsp[0]));  }
#line 2637 "src/parser.c"
    break;

  case 9: /* section: class_def  */
#line 214 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def), (yylsp[0])); }
#line 2643 "src/parser.c"
    break;

  case 10: /* section: trait_def  */
#line 215 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def), (yylsp[0])); }
#line 2649 "src/parser.c"
    break;

  case 11: /* section: extend_def  */
#line 216 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def), (yylsp[0])); }
#line 2655 "src/parser.c"
    break;

  case 12: /* section: enum_def  */
#line 217 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def), (yylsp[0])); }
#line 2661 "src/parser.c"
    break;

  case 13: /* section: union_def  */
#line 218 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def), (yylsp[0])); }
#line 2667 "src/parser.c"
    break;

  case 14: /* section: fptr_def  */
#line 219 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def), (yylsp[0])); }
#line 2673 "src/parser.c"
    break;

  case 15: /* section: type_def  */
#line 220 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def), (yylsp[0])); }
#line 2679 "src/parser.c"
    break;

  case 16: /* section: prim_def  */
#line 221 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def), (yylsp[0])); }
#line 2685 "src/parser.c"
    break;

  case 17: /* class_flag: flag modifier  */
#line 224 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2691 "src/parser.c"
    break;

  case 18: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits class_body  */
#line 227 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-5].flag), MK_TAG((yyvsp[-4].sym), (yylsp[-4])), (yyvsp[-2].type_decl), (yyvsp[0].ast));
      if((yyvsp[-3].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2702 "src/parser.c"
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
#line 2714 "src/parser.c"
    break;

  case 20: /* class_body: "{" section_list "}"  */
#line 242 "src/gwion.y"
                                   { (yyval.ast) = (yyvsp[-1].ast); }
#line 2720 "src/parser.c"
    break;

  case 21: /* class_body: "{" "}"  */
#line 242 "src/gwion.y"
                                                          { (yyval.ast) = NULL; }
#line 2726 "src/parser.c"
    break;

  case 22: /* class_body: ";"  */
#line 242 "src/gwion.y"
                                                                               { (yyval.ast) = NULL; }
#line 2732 "src/parser.c"
    break;

  case 23: /* trait_def: "trait" opt_global "<identifier>" traits class_body  */
#line 245 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2741 "src/parser.c"
    break;

  case 24: /* number: INTEGER  */
#line 250 "src/gwion.y"
                {
  if((yyvsp[0].yyint).num < 0 || (yyvsp[0].yyint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type);
}
#line 2752 "src/parser.c"
    break;

  case 25: /* decimal: number  */
#line 257 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2763 "src/parser.c"
    break;

  case 26: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 265 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2771 "src/parser.c"
    break;

  case 27: /* class_ext: "extends" type_decl_array  */
#line 268 "src/gwion.y"
                                      { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2777 "src/parser.c"
    break;

  case 28: /* class_ext: %empty  */
#line 268 "src/gwion.y"
                                                            { (yyval.type_decl) = NULL; }
#line 2783 "src/parser.c"
    break;

  case 29: /* traits: %empty  */
#line 269 "src/gwion.y"
               { (yyval.id_list) = NULL; }
#line 2789 "src/parser.c"
    break;

  case 30: /* traits: ":" id_list  */
#line 269 "src/gwion.y"
                                            { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2795 "src/parser.c"
    break;

  case 31: /* extend_def: "extends" type_decl_array ":" id_list ";"  */
#line 271 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2803 "src/parser.c"
    break;

  case 32: /* id_list: "<identifier>"  */
#line 276 "src/gwion.y"
                 { YYLIST_INI(Symbol, (yyval.id_list), (yyvsp[0].sym)); }
#line 2809 "src/parser.c"
    break;

  case 33: /* id_list: id_list "," "<identifier>"  */
#line 277 "src/gwion.y"
                 { YYLIST_END(Symbol, (yyval.id_list), (yyvsp[-2].id_list), (yyvsp[0].sym)); }
#line 2815 "src/parser.c"
    break;

  case 34: /* specialized: "<identifier>" traits  */
#line 279 "src/gwion.y"
                       {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1])),
        .traits = (yyvsp[0].id_list),
      };
  }
#line 2826 "src/parser.c"
    break;

  case 35: /* specialized: "const" type_decl_array "<identifier>"  */
#line 285 "src/gwion.y"
                               {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])),
        .td = (yyvsp[-1].type_decl),
      };
  }
#line 2837 "src/parser.c"
    break;

  case 36: /* specialized_list: specialized  */
#line 292 "src/gwion.y"
                              { YYLIST_INI(Specialized, (yyval.specialized_list), (yyvsp[0].specialized)); }
#line 2843 "src/parser.c"
    break;

  case 37: /* specialized_list: specialized_list "," specialized  */
#line 293 "src/gwion.y"
                                     { YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), (yyvsp[0].specialized)); }
#line 2849 "src/parser.c"
    break;

  case 38: /* stmt_list: stmt  */
#line 295 "src/gwion.y"
                                   { YYLIST_INI(Stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 2855 "src/parser.c"
    break;

  case 39: /* stmt_list: stmt_list stmt  */
#line 296 "src/gwion.y"
                                   { YYLIST_END(Stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 2861 "src/parser.c"
    break;

  case 40: /* fptr_base: flag type_decl_array "<identifier>" decl_template  */
#line 298 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2868 "src/parser.c"
    break;

  case 41: /* _func_effects: "perform" "<identifier>"  */
#line 301 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2874 "src/parser.c"
    break;

  case 42: /* _func_effects: _func_effects "<identifier>"  */
#line 301 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2880 "src/parser.c"
    break;

  case 43: /* func_effects: %empty  */
#line 302 "src/gwion.y"
                     { (yyval.vector).ptr = NULL; }
#line 2886 "src/parser.c"
    break;

  case 44: /* func_effects: _func_effects  */
#line 302 "src/gwion.y"
                                                        { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2892 "src/parser.c"
    break;

  case 45: /* func_base: flag final type_decl_array "<identifier>" decl_template  */
#line 304 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2899 "src/parser.c"
    break;

  case 46: /* fptr_def: "funptr" fptr_base func_args func_effects ";"  */
#line 307 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2909 "src/parser.c"
    break;

  case 47: /* typedef_when: %empty  */
#line 313 "src/gwion.y"
                     { (yyval.exp) = NULL;}
#line 2915 "src/parser.c"
    break;

  case 48: /* typedef_when: "when" exp  */
#line 313 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2921 "src/parser.c"
    break;

  case 49: /* type_def_type: "typedef"  */
#line 314 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2927 "src/parser.c"
    break;

  case 50: /* type_def_type: "distinct"  */
#line 314 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2933 "src/parser.c"
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
#line 2946 "src/parser.c"
    break;

  case 52: /* type_decl_array: type_decl array  */
#line 324 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2952 "src/parser.c"
    break;

  case 54: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 327 "src/gwion.y"
                                            {
    (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-3].type_decl), (yyvsp[-2].var_decl)), .exp = (yyvsp[0].exp) };
  }
#line 2960 "src/parser.c"
    break;

  case 55: /* arg: type_decl_array arg_decl  */
#line 330 "src/gwion.y"
                             {
    (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) };
  }
#line 2968 "src/parser.c"
    break;

  case 56: /* arg_list: arg  */
#line 334 "src/gwion.y"
         {
       YYLIST_INI(Arg, (yyval.arg_list), (yyvsp[0].arg));
     }
#line 2976 "src/parser.c"
    break;

  case 57: /* arg_list: arg_list "," arg  */
#line 337 "src/gwion.y"
                              {
     mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
     (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 2985 "src/parser.c"
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
#line 3001 "src/parser.c"
    break;

  case 59: /* locale_arg: locale_arg "," arg  */
#line 354 "src/gwion.y"
                                {
     mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
     (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 3010 "src/parser.c"
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
#line 3025 "src/parser.c"
    break;

  case 62: /* code_stmt: "{" "}"  */
#line 372 "src/gwion.y"
            {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc)); }
#line 3032 "src/parser.c"
    break;

  case 63: /* code_stmt: "{" stmt_list "}"  */
#line 374 "src/gwion.y"
                      {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc), .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) });}
#line 3039 "src/parser.c"
    break;

  case 64: /* code_list: "{" "}"  */
#line 378 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), Stmt, 0); }
#line 3045 "src/parser.c"
    break;

  case 65: /* code_list: "{" stmt_list "}"  */
#line 379 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3051 "src/parser.c"
    break;

  case 66: /* stmt_pp: "<comment>"  */
#line 382 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyloc), .data = (yyvsp[0].sval)); }
#line 3057 "src/parser.c"
    break;

  case 67: /* stmt_pp: "#include"  */
#line 383 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyloc), .data = (yyvsp[0].sval)); }
#line 3063 "src/parser.c"
    break;

  case 68: /* stmt_pp: "#define"  */
#line 384 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3069 "src/parser.c"
    break;

  case 69: /* stmt_pp: "#pragma"  */
#line 385 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3075 "src/parser.c"
    break;

  case 70: /* stmt_pp: "#undef"  */
#line 386 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3081 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#ifdef"  */
#line 387 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3087 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#ifndef"  */
#line 388 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3093 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#else"  */
#line 389 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyloc), .data = (yyvsp[0].sval)); }
#line 3099 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#if"  */
#line 390 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3105 "src/parser.c"
    break;

  case 75: /* stmt_pp: "\n"  */
#line 391 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl, (yyloc), .data = (yyvsp[0].sval)); }
#line 3111 "src/parser.c"
    break;

  case 76: /* stmt_pp: "import"  */
#line 392 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyloc), .data = (yyvsp[0].sval)); }
#line 3117 "src/parser.c"
    break;

  case 77: /* stmt_pp: LOCALE_INI "<identifier>" opt_exp LOCALE_END  */
#line 394 "src/gwion.y"
    { (yyval.stmt) = MK_STMT_PP(locale, (yyloc), .xid = (yyvsp[-2].sym), .exp = (yyvsp[-1].exp)); }
#line 3123 "src/parser.c"
    break;

  case 90: /* $@1: %empty  */
#line 412 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3129 "src/parser.c"
    break;

  case 91: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 412 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .tag = MK_TAG((yyvsp[-5].sym), (yylsp[-5])),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
  };
  (yyval.stmt) = MK_STMT(ae_stmt_spread, (yylsp[-5]), .stmt_spread = spread);
}
#line 3142 "src/parser.c"
    break;

  case 92: /* using_stmt: "using" type_decl ";"  */
#line 421 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_using, (yyloc));
    (yyval.stmt).d.stmt_using.d.td = (yyvsp[-1].type_decl);
    }
#line 3150 "src/parser.c"
    break;

  case 93: /* using_stmt: "using" "<identifier>" ":" dot_exp ";"  */
#line 424 "src/gwion.y"
                                       { (yyval.stmt) = MK_STMT(ae_stmt_using, (yyloc));
    (yyval.stmt).d.stmt_using.d.exp = (yyvsp[-1].exp);
    (yyval.stmt).d.stmt_using.alias = MK_TAG((yyvsp[-3].sym), (yylsp[-3]));
  }
#line 3159 "src/parser.c"
    break;

  case 94: /* using_stmt: "using" "<identifier>" ":" "<identifier>" ";"  */
#line 428 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_using, (yyloc));
    (yyval.stmt).d.stmt_using.d.exp = new_prim_id(mpool(arg), (yyvsp[-1].sym), (yylsp[-1]));
    (yyval.stmt).d.stmt_using.alias = MK_TAG((yyvsp[-3].sym), (yylsp[-3]));
  }
#line 3168 "src/parser.c"
    break;

  case 95: /* retry_stmt: "retry" ";"  */
#line 433 "src/gwion.y"
                        { (yyval.stmt) = MK_STMT(ae_stmt_retry, (yylsp[-1])); }
#line 3174 "src/parser.c"
    break;

  case 96: /* handler: "handle" opt_id stmt  */
#line 435 "src/gwion.y"
                              { (yyval.handler) = (Handler){ .tag = MK_TAG((yyvsp[-1].sym), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-2])), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }; }
#line 3180 "src/parser.c"
    break;

  case 97: /* handler_list: handler  */
#line 436 "src/gwion.y"
                      {
    YYLIST_INI(Handler, (yyval.handler_list).handlers, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).tag.sym;
  }
#line 3189 "src/parser.c"
    break;

  case 98: /* handler_list: handler_list handler  */
#line 440 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].handler_list).handlers, Handler, (yyvsp[0].handler));
    (yyval.handler_list) = (yyvsp[-1].handler_list);
  }
#line 3198 "src/parser.c"
    break;

  case 99: /* try_stmt: "try" stmt handler_list  */
#line 444 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_try, (yylsp[-2]),
   .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers});}
#line 3205 "src/parser.c"
    break;

  case 101: /* opt_id: %empty  */
#line 447 "src/gwion.y"
                    { (yyval.sym) = NULL; }
#line 3211 "src/parser.c"
    break;

  case 103: /* opt_comma: %empty  */
#line 448 "src/gwion.y"
                        {}
#line 3217 "src/parser.c"
    break;

  case 104: /* enum_value: "<identifier>"  */
#line 451 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }; }
#line 3223 "src/parser.c"
    break;

  case 105: /* enum_value: "<identifier>" ":" number  */
#line 452 "src/gwion.y"
                          { 
            (yyval.enum_value) = (EnumValue) {.tag = MK_TAG((yyvsp[-2].sym), (yylsp[-2])), .gwint = (yyvsp[0].gwint), .set = true };
          }
#line 3231 "src/parser.c"
    break;

  case 106: /* enum_list: enum_value  */
#line 456 "src/gwion.y"
                            { YYLIST_INI(EnumValue, (yyval.enum_list), (yyvsp[0].enum_value)); }
#line 3237 "src/parser.c"
    break;

  case 107: /* enum_list: enum_list "," enum_value  */
#line 457 "src/gwion.y"
                            { YYLIST_END(EnumValue, (yyval.enum_list), (yyvsp[-2].enum_list), (yyvsp[0].enum_value)) ;}
#line 3243 "src/parser.c"
    break;

  case 108: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 460 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3252 "src/parser.c"
    break;

  case 109: /* when_exp: "when" exp  */
#line 465 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3258 "src/parser.c"
    break;

  case 110: /* when_exp: %empty  */
#line 465 "src/gwion.y"
                                           { (yyval.exp) = NULL; }
#line 3264 "src/parser.c"
    break;

  case 111: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 468 "src/gwion.y"
                                      {
    (yyval.stmt) = MK_STMT(0 /*ae_stmt_match*/, (yylsp[-4]),
      .stmt_match = {
        .cond = (yyvsp[-3].exp),
        .when = (yyvsp[-2].exp),
        .list = (yyvsp[0].stmt_list)
    });
}
#line 3277 "src/parser.c"
    break;

  case 112: /* match_list: match_case_stmt  */
#line 477 "src/gwion.y"
                            { YYLIST_INI(Stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 3283 "src/parser.c"
    break;

  case 113: /* match_list: match_list match_case_stmt  */
#line 478 "src/gwion.y"
                             { YYLIST_END(Stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 3289 "src/parser.c"
    break;

  case 114: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 480 "src/gwion.y"
                                                        {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-6]),
    .stmt_match = {
      .cond  = (yyvsp[-5].exp),
      .list  = (yyvsp[-3].stmt_list),
      .where = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  });
}
#line 3302 "src/parser.c"
    break;

  case 115: /* match_stmt: "match" exp "{" match_list "}"  */
#line 489 "src/gwion.y"
                               {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-4]),
    .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
  });
}
#line 3314 "src/parser.c"
    break;

  case 116: /* flow: "while"  */
#line 498 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3320 "src/parser.c"
    break;

  case 117: /* flow: "until"  */
#line 499 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3326 "src/parser.c"
    break;

  case 118: /* loop_stmt: flow "(" exp ")" stmt  */
#line 504 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-4].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3337 "src/parser.c"
    break;

  case 119: /* loop_stmt: "do" stmt flow exp ";"  */
#line 511 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
    });
  }
#line 3349 "src/parser.c"
    break;

  case 120: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 519 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-5]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3361 "src/parser.c"
    break;

  case 121: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 527 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-6]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-4].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c3 = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3374 "src/parser.c"
    break;

  case 122: /* loop_stmt: "foreach" "(" capture ":" exp ")" stmt  */
#line 536 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-6]),
      .stmt_each = {
        .var = (yyvsp[-4].capture).var,
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .is_ref = (yyvsp[-4].capture).is_ref
    });
  }
#line 3387 "src/parser.c"
    break;

  case 123: /* loop_stmt: "foreach" "(" "<identifier>" "," capture ":" exp ")" stmt  */
#line 545 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-8]),
      .stmt_each = {
        .var = (yyvsp[-4].capture).var,
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .idx = (Var_Decl){.tag=MK_TAG((yyvsp[-6].sym), (yylsp[-6]))},
        .is_ref = (yyvsp[-4].capture).is_ref
    });
  }
#line 3401 "src/parser.c"
    break;

  case 124: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 555 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-4]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
  }
#line 3412 "src/parser.c"
    break;

  case 125: /* loop_stmt: "repeat" "(" "<identifier>" "," exp ")" stmt  */
#line 562 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-6]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
    (yyval.stmt).d.stmt_loop.idx = (Var_Decl){ .tag = MK_TAG((yyvsp[-4].sym), (yylsp[-4])) };
  }
#line 3424 "src/parser.c"
    break;

  case 126: /* defer_stmt: "defer" stmt  */
#line 570 "src/gwion.y"
                         {
    (yyval.stmt) = MK_STMT(ae_stmt_defer, (yylsp[-1]),
      .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
}
#line 3434 "src/parser.c"
    break;

  case 127: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 578 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-4]),
      .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3445 "src/parser.c"
    break;

  case 128: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 585 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-6]),
      .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3457 "src/parser.c"
    break;

  case 129: /* breaks: "break"  */
#line 593 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3463 "src/parser.c"
    break;

  case 130: /* breaks: "continue"  */
#line 593 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3469 "src/parser.c"
    break;

  case 131: /* jump_stmt: "return" exp ";"  */
#line 595 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-2]), (yyvsp[-1].exp)); }
#line 3475 "src/parser.c"
    break;

  case 132: /* jump_stmt: "return" ";"  */
#line 596 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-1]), NULL); }
#line 3481 "src/parser.c"
    break;

  case 133: /* jump_stmt: breaks decimal ";"  */
#line 597 "src/gwion.y"
                         { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-2]), .stmt_index = { .idx = (yyvsp[-1].gwint).num });}
#line 3487 "src/parser.c"
    break;

  case 134: /* jump_stmt: breaks ";"  */
#line 598 "src/gwion.y"
               { (yyval.stmt) = MK_STMT((yyvsp[-1].stmt_t), (yylsp[-1]), .stmt_index = { .idx = -1 });}
#line 3493 "src/parser.c"
    break;

  case 135: /* exp_stmt: exp ";"  */
#line 601 "src/gwion.y"
            { (yyval.stmt) = MK_STMT_EXP((yylsp[-1]), (yyvsp[-1].exp)); }
#line 3499 "src/parser.c"
    break;

  case 136: /* exp_stmt: ";"  */
#line 602 "src/gwion.y"
            { (yyval.stmt) = MK_STMT(ae_stmt_exp, (yylsp[0])); }
#line 3505 "src/parser.c"
    break;

  case 137: /* exp: binary_exp  */
#line 605 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3511 "src/parser.c"
    break;

  case 138: /* exp: binary_exp "," exp  */
#line 607 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3523 "src/parser.c"
    break;

  case 140: /* binary_exp: binary_exp "@" decl_exp  */
#line 617 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3529 "src/parser.c"
    break;

  case 141: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 618 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3535 "src/parser.c"
    break;

  case 142: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 619 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3541 "src/parser.c"
    break;

  case 143: /* call_template: ":[" tmplarg_list "]"  */
#line 621 "src/gwion.y"
                                     { (yyval.tmplarg_list) = (yyvsp[-1].tmplarg_list); }
#line 3547 "src/parser.c"
    break;

  case 144: /* call_template: %empty  */
#line 621 "src/gwion.y"
                                                           { (yyval.tmplarg_list) = NULL; }
#line 3553 "src/parser.c"
    break;

  case 150: /* array_exp: "[" exp "]"  */
#line 626 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3559 "src/parser.c"
    break;

  case 151: /* array_exp: "[" exp "]" array_exp  */
#line 627 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3567 "src/parser.c"
    break;

  case 152: /* array_exp: "[" exp "]" "[" "]"  */
#line 630 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3573 "src/parser.c"
    break;

  case 153: /* array_empty: "[" "]"  */
#line 634 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3579 "src/parser.c"
    break;

  case 154: /* array_empty: array_empty "[" "]"  */
#line 635 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3585 "src/parser.c"
    break;

  case 155: /* array_empty: array_empty array_exp  */
#line 636 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3591 "src/parser.c"
    break;

  case 156: /* dict_list: binary_exp ":" binary_exp  */
#line 640 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3597 "src/parser.c"
    break;

  case 157: /* dict_list: dict_list "," binary_exp ":" binary_exp  */
#line 641 "src/gwion.y"
                                            { (yyvsp[-4].exp)->next->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3603 "src/parser.c"
    break;

  case 158: /* range: "[" exp ":" exp "]"  */
#line 644 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3609 "src/parser.c"
    break;

  case 159: /* range: "[" exp ":" "]"  */
#line 645 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3615 "src/parser.c"
    break;

  case 160: /* range: "[" ":" exp "]"  */
#line 646 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3621 "src/parser.c"
    break;

  case 164: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 652 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3627 "src/parser.c"
    break;

  case 165: /* decl_exp: type_decl_flag2 flag type_decl_array call_paren var_decl  */
#line 653 "src/gwion.y"
                                                             {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-2].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-4].flag) | (yyvsp[-3].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1]));
  }
#line 3637 "src/parser.c"
    break;

  case 166: /* func_args: "(" arg_list ")"  */
#line 659 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3643 "src/parser.c"
    break;

  case 167: /* func_args: "(" ")"  */
#line 659 "src/gwion.y"
                                                   { (yyval.arg_list) = NULL; }
#line 3649 "src/parser.c"
    break;

  case 168: /* decl_template: ":[" specialized_list "]"  */
#line 662 "src/gwion.y"
                            { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3655 "src/parser.c"
    break;

  case 169: /* decl_template: ":[" specialized_list "..." "]"  */
#line 663 "src/gwion.y"
                                              {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), spec);
}
#line 3664 "src/parser.c"
    break;

  case 170: /* decl_template: ":[" "..." "]"  */
#line 667 "src/gwion.y"
                                {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_INI(Specialized, (yyval.specialized_list), spec);
}
#line 3673 "src/parser.c"
    break;

  case 171: /* decl_template: %empty  */
#line 671 "src/gwion.y"
                      { (yyval.specialized_list) = NULL; }
#line 3679 "src/parser.c"
    break;

  case 172: /* global: "global"  */
#line 673 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3685 "src/parser.c"
    break;

  case 174: /* opt_global: %empty  */
#line 674 "src/gwion.y"
                            { (yyval.flag) = ae_flag_none; }
#line 3691 "src/parser.c"
    break;

  case 175: /* storage_flag: "static"  */
#line 676 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3697 "src/parser.c"
    break;

  case 177: /* access_flag: "private"  */
#line 678 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3703 "src/parser.c"
    break;

  case 178: /* access_flag: "protect"  */
#line 679 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3709 "src/parser.c"
    break;

  case 179: /* flag: access_flag  */
#line 682 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3715 "src/parser.c"
    break;

  case 180: /* flag: storage_flag  */
#line 683 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3721 "src/parser.c"
    break;

  case 181: /* flag: access_flag storage_flag  */
#line 684 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3727 "src/parser.c"
    break;

  case 182: /* flag: %empty  */
#line 685 "src/gwion.y"
           { (yyval.flag) = ae_flag_none; }
#line 3733 "src/parser.c"
    break;

  case 183: /* final: "final"  */
#line 688 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3739 "src/parser.c"
    break;

  case 184: /* final: %empty  */
#line 688 "src/gwion.y"
                                                { (yyval.flag) = ae_flag_none; }
#line 3745 "src/parser.c"
    break;

  case 185: /* modifier: "abstract" final  */
#line 690 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3751 "src/parser.c"
    break;

  case 187: /* func_def_base: "fun" func_base func_args code_list  */
#line 693 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].arg_list);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3760 "src/parser.c"
    break;

  case 188: /* func_def_base: "fun" func_base func_args ";"  */
#line 697 "src/gwion.y"
                                     {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].arg_list);
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3770 "src/parser.c"
    break;

  case 189: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 702 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].arg_list), (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale;
   (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3781 "src/parser.c"
    break;

  case 190: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 708 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3792 "src/parser.c"
    break;

  case 191: /* abstract_fdef: "fun" flag "abstract" type_decl_array "<identifier>" decl_template func_args ";"  */
#line 717 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3804 "src/parser.c"
    break;

  case 197: /* op_base: type_decl_array op_op decl_template "(" arg "," arg ")"  */
#line 728 "src/gwion.y"
    {
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].arg);
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3816 "src/parser.c"
    break;

  case 198: /* op_base: type_decl_array post_op decl_template "(" arg ")"  */
#line 736 "src/gwion.y"
    {
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].arg));
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3827 "src/parser.c"
    break;

  case 199: /* op_base: unary_op type_decl_array decl_template "(" arg ")"  */
#line 743 "src/gwion.y"
    {
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].arg));
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3839 "src/parser.c"
    break;

  case 200: /* op_base: type_decl_array OPID_A func_args  */
#line 751 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].arg_list), ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3848 "src/parser.c"
    break;

  case 201: /* operator: "operator"  */
#line 756 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3854 "src/parser.c"
    break;

  case 202: /* operator: "operator" global  */
#line 756 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3860 "src/parser.c"
    break;

  case 203: /* op_def: operator op_base code_list  */
#line 759 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3866 "src/parser.c"
    break;

  case 204: /* op_def: operator op_base ";"  */
#line 761 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3872 "src/parser.c"
    break;

  case 205: /* op_def: operator "abstract" op_base ";"  */
#line 763 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3878 "src/parser.c"
    break;

  case 209: /* func_def: operator "new" func_args code_list  */
#line 767 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-3].flag), (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 3887 "src/parser.c"
    break;

  case 210: /* func_def: operator "new" func_args ";"  */
#line 772 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3896 "src/parser.c"
    break;

  case 211: /* func_def: operator "abstract" "new" func_args ";"  */
#line 777 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 3905 "src/parser.c"
    break;

  case 212: /* type_decl_base: "<identifier>"  */
#line 783 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3911 "src/parser.c"
    break;

  case 213: /* type_decl_base: "(" flag type_decl_array decl_template func_args func_effects ")"  */
#line 784 "src/gwion.y"
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
#line 3927 "src/parser.c"
    break;

  case 214: /* type_decl_tmpl: type_decl_base call_template  */
#line 798 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 3933 "src/parser.c"
    break;

  case 215: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 799 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 3939 "src/parser.c"
    break;

  case 217: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 804 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3945 "src/parser.c"
    break;

  case 218: /* option: "?"  */
#line 807 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3951 "src/parser.c"
    break;

  case 219: /* option: OPTIONS  */
#line 807 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3957 "src/parser.c"
    break;

  case 220: /* option: %empty  */
#line 807 "src/gwion.y"
                                                                        { (yyval.uval) = 0; }
#line 3963 "src/parser.c"
    break;

  case 221: /* type_decl_opt: type_decl_noflag option  */
#line 808 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3969 "src/parser.c"
    break;

  case 223: /* type_decl: type_decl_flag type_decl_opt  */
#line 809 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3975 "src/parser.c"
    break;

  case 224: /* type_decl_flag: "late"  */
#line 812 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3981 "src/parser.c"
    break;

  case 225: /* type_decl_flag: "const"  */
#line 813 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3987 "src/parser.c"
    break;

  case 226: /* type_decl_flag2: "var"  */
#line 815 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3993 "src/parser.c"
    break;

  case 228: /* variable: "<identifier>" ";"  */
#line 818 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.variable) = MK_VAR(td, (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});
}
#line 4002 "src/parser.c"
    break;

  case 229: /* variable: type_decl_array "<identifier>" ";"  */
#line 822 "src/gwion.y"
                         { (yyval.variable) = MK_VAR((yyvsp[-2].type_decl), (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});}
#line 4008 "src/parser.c"
    break;

  case 230: /* variable_list: variable  */
#line 824 "src/gwion.y"
                         { YYLIST_INI(Variable, (yyval.variable_list), (yyvsp[0].variable)); }
#line 4014 "src/parser.c"
    break;

  case 231: /* variable_list: variable_list variable  */
#line 825 "src/gwion.y"
                         { YYLIST_END(Variable, (yyval.variable_list), (yyvsp[-1].variable_list), (yyvsp[0].variable)); }
#line 4020 "src/parser.c"
    break;

  case 232: /* union_def: "union" flag "<identifier>" decl_template "{" variable_list "}"  */
#line 828 "src/gwion.y"
                                                        {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].variable_list), (yylsp[-4]));
      (yyval.union_def)->tag.sym = (yyvsp[-4].sym); // put tag in ctor
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4032 "src/parser.c"
    break;

  case 233: /* var_decl: "<identifier>"  */
#line 837 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4038 "src/parser.c"
    break;

  case 234: /* arg_decl: "<identifier>"  */
#line 839 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4044 "src/parser.c"
    break;

  case 235: /* arg_decl: %empty  */
#line 840 "src/gwion.y"
                 { (yyval.var_decl) = (struct Var_Decl_) {
            .tag = { .sym = NULL, .loc = {.first = arg->pos, .last = arg->pos }}};
        }
#line 4052 "src/parser.c"
    break;

  case 249: /* opt_exp: exp  */
#line 850 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4058 "src/parser.c"
    break;

  case 250: /* opt_exp: %empty  */
#line 850 "src/gwion.y"
                                   { (yyval.exp) = NULL; }
#line 4064 "src/parser.c"
    break;

  case 252: /* con_exp: log_or_exp "?" con_exp ":" con_exp  */
#line 853 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4070 "src/parser.c"
    break;

  case 253: /* con_exp: log_or_exp "?" ":" con_exp  */
#line 855 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-3].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4076 "src/parser.c"
    break;

  case 254: /* con_exp: log_or_exp "?:" con_exp  */
#line 857 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4082 "src/parser.c"
    break;

  case 256: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 859 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4088 "src/parser.c"
    break;

  case 258: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 860 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4094 "src/parser.c"
    break;

  case 260: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 861 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4100 "src/parser.c"
    break;

  case 262: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 862 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4106 "src/parser.c"
    break;

  case 264: /* and_exp: and_exp "&" eq_exp  */
#line 863 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4112 "src/parser.c"
    break;

  case 266: /* eq_exp: eq_exp eq_op rel_exp  */
#line 864 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4118 "src/parser.c"
    break;

  case 268: /* rel_exp: rel_exp rel_op shift_exp  */
#line 865 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4124 "src/parser.c"
    break;

  case 270: /* shift_exp: shift_exp shift_op add_exp  */
#line 866 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4130 "src/parser.c"
    break;

  case 272: /* add_exp: add_exp add_op mul_exp  */
#line 867 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4136 "src/parser.c"
    break;

  case 274: /* mul_exp: mul_exp mul_op dur_exp  */
#line 868 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4142 "src/parser.c"
    break;

  case 276: /* dur_exp: dur_exp "::" cast_exp  */
#line 869 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4148 "src/parser.c"
    break;

  case 278: /* cast_exp: cast_exp "$" type_decl_array  */
#line 872 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4154 "src/parser.c"
    break;

  case 285: /* unary_exp: unary_op unary_exp  */
#line 879 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4160 "src/parser.c"
    break;

  case 286: /* unary_exp: "spork" unary_exp  */
#line 880 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4166 "src/parser.c"
    break;

  case 287: /* unary_exp: "fork" unary_exp  */
#line 881 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4172 "src/parser.c"
    break;

  case 288: /* unary_exp: "new" type_decl_array call_paren  */
#line 882 "src/gwion.y"
                                     {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].type_decl), (yyvsp[0].exp) ?: new_prim_nil(mpool(arg), (yylsp[0])), (yyloc));
  }
#line 4180 "src/parser.c"
    break;

  case 289: /* unary_exp: "new" type_decl_array  */
#line 885 "src/gwion.y"
                          {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4186 "src/parser.c"
    break;

  case 290: /* unary_exp: "spork" code_list  */
#line 886 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4192 "src/parser.c"
    break;

  case 291: /* unary_exp: "fork" code_list  */
#line 887 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4198 "src/parser.c"
    break;

  case 292: /* unary_exp: "spork" captures code_list  */
#line 888 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4204 "src/parser.c"
    break;

  case 293: /* unary_exp: "fork" captures code_list  */
#line 889 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4210 "src/parser.c"
    break;

  case 294: /* unary_exp: "$" type_decl_array  */
#line 890 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4216 "src/parser.c"
    break;

  case 295: /* lambda_list: "<identifier>"  */
#line 893 "src/gwion.y"
    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){.tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_INI(Arg, (yyval.arg_list), a); }
#line 4224 "src/parser.c"
    break;

  case 296: /* lambda_list: lambda_list "<identifier>"  */
#line 896 "src/gwion.y"
                    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){ .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_END(Arg, (yyval.arg_list), (yyvsp[-1].arg_list), a);
}
#line 4233 "src/parser.c"
    break;

  case 297: /* lambda_arg: "\\" lambda_list  */
#line 901 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4239 "src/parser.c"
    break;

  case 298: /* lambda_arg: "\\"  */
#line 901 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4245 "src/parser.c"
    break;

  case 300: /* tmplarg: type_decl_array  */
#line 904 "src/gwion.y"
                         {
    (yyval.tmplarg) = (TmplArg) { .d = { .td = (yyvsp[0].type_decl)}, .type = tmplarg_td};
  }
#line 4253 "src/parser.c"
    break;

  case 301: /* tmplarg: tmplarg_exp  */
#line 907 "src/gwion.y"
                {
    (yyval.tmplarg) = (TmplArg) { .d = { .exp = (yyvsp[0].exp)}, .type = tmplarg_exp};
  }
#line 4261 "src/parser.c"
    break;

  case 302: /* tmplarg_list: tmplarg  */
#line 911 "src/gwion.y"
                           { YYLIST_INI(TmplArg, (yyval.tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4267 "src/parser.c"
    break;

  case 303: /* tmplarg_list: tmplarg_list "," tmplarg  */
#line 912 "src/gwion.y"
                           { YYLIST_END(TmplArg, (yyval.tmplarg_list), (yyvsp[-2].tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4273 "src/parser.c"
    break;

  case 304: /* call_paren: "(" exp ")"  */
#line 915 "src/gwion.y"
            { (yyval.exp) = (yyvsp[-1].exp); }
#line 4279 "src/parser.c"
    break;

  case 305: /* call_paren: "(" ")"  */
#line 916 "src/gwion.y"
        { (yyval.exp) = NULL; }
#line 4285 "src/parser.c"
    break;

  case 308: /* dot_exp: post_exp "." "<identifier>"  */
#line 920 "src/gwion.y"
                         {
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4293 "src/parser.c"
    break;

  case 310: /* post_exp: post_exp array  */
#line 926 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4299 "src/parser.c"
    break;

  case 311: /* post_exp: post_exp range  */
#line 928 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4305 "src/parser.c"
    break;

  case 312: /* post_exp: post_exp call_template call_paren  */
#line 930 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].tmplarg_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].tmplarg_list)); }
#line 4312 "src/parser.c"
    break;

  case 313: /* post_exp: post_exp post_op  */
#line 933 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4318 "src/parser.c"
    break;

  case 314: /* post_exp: dot_exp  */
#line 934 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4324 "src/parser.c"
    break;

  case 315: /* interp_exp: "<interp string end>"  */
#line 938 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4330 "src/parser.c"
    break;

  case 316: /* interp_exp: "<interp string lit>" interp_exp  */
#line 939 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4336 "src/parser.c"
    break;

  case 317: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 940 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4342 "src/parser.c"
    break;

  case 318: /* interp: "${" interp_exp  */
#line 942 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4348 "src/parser.c"
    break;

  case 319: /* interp: interp "${" interp_exp  */
#line 943 "src/gwion.y"
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
#line 4363 "src/parser.c"
    break;

  case 320: /* capture: "<identifier>"  */
#line 954 "src/gwion.y"
            { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }};}
#line 4369 "src/parser.c"
    break;

  case 321: /* capture: "&" "<identifier>"  */
#line 954 "src/gwion.y"
                                                                           { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }, .is_ref = true }; }
#line 4375 "src/parser.c"
    break;

  case 322: /* capture_list: capture  */
#line 956 "src/gwion.y"
                       { YYLIST_INI(Capture, (yyval.captures), (yyvsp[0].capture)); }
#line 4381 "src/parser.c"
    break;

  case 323: /* capture_list: capture_list capture  */
#line 957 "src/gwion.y"
                       { YYLIST_END(Capture, (yyval.captures), (yyvsp[-1].captures), (yyvsp[0].capture)); }
#line 4387 "src/parser.c"
    break;

  case 324: /* captures: ":" capture_list ":"  */
#line 958 "src/gwion.y"
                               { (yyval.captures) = (yyvsp[-1].captures); }
#line 4393 "src/parser.c"
    break;

  case 325: /* captures: %empty  */
#line 958 "src/gwion.y"
                                                      { (yyval.captures) = NULL; }
#line 4399 "src/parser.c"
    break;

  case 328: /* basic_exp: number  */
#line 962 "src/gwion.y"
                         {
  (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc)); 
  (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4408 "src/parser.c"
    break;

  case 329: /* basic_exp: "<float>"  */
#line 966 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4414 "src/parser.c"
    break;

  case 330: /* basic_exp: "<litteral string>"  */
#line 967 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4420 "src/parser.c"
    break;

  case 331: /* basic_exp: "<litteral char>"  */
#line 968 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4426 "src/parser.c"
    break;

  case 332: /* prim_exp: "<identifier>"  */
#line 971 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4432 "src/parser.c"
    break;

  case 334: /* prim_exp: interp  */
#line 973 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4438 "src/parser.c"
    break;

  case 335: /* prim_exp: "[" opt_exp array_lit_ed  */
#line 974 "src/gwion.y"
                             { 
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4447 "src/parser.c"
    break;

  case 336: /* prim_exp: "{" dict_list "}"  */
#line 978 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4453 "src/parser.c"
    break;

  case 337: /* prim_exp: range  */
#line 979 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4459 "src/parser.c"
    break;

  case 338: /* prim_exp: "<<<" exp ">>>"  */
#line 980 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4465 "src/parser.c"
    break;

  case 339: /* prim_exp: "(" exp ")"  */
#line 981 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4471 "src/parser.c"
    break;

  case 340: /* prim_exp: "`foo`"  */
#line 982 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last =  { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4482 "src/parser.c"
    break;

  case 341: /* prim_exp: lambda_arg captures code_list  */
#line 988 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4488 "src/parser.c"
    break;

  case 342: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 989 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4494 "src/parser.c"
    break;

  case 343: /* prim_exp: "(" op_op ")"  */
#line 990 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4500 "src/parser.c"
    break;

  case 344: /* prim_exp: "perform" opt_id  */
#line 991 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4506 "src/parser.c"
    break;

  case 345: /* prim_exp: "(" ")"  */
#line 992 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4512 "src/parser.c"
    break;


#line 4516 "src/parser.c"

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

#line 994 "src/gwion.y"

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
  char *_explain = strchr(_main, ',');
  if(_explain) {
    _main[_explain - _main] = '\0';
    _explain += 2;
  }
  scanner_error(scan, _main, _explain, *loc, error_code);
  loc_t _loc = { scan->old, scan->old};
  const char *syntaxerr = YY_("syntax error");
  if(!strncmp(_main, syntaxerr, strlen(syntaxerr)))
    scanner_secondary(scan, "check around here", _loc);
  return 0;
}
