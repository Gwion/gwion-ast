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
  YYSYMBOL_IMPORT = 62,                    /* "import"  */
  YYSYMBOL_NAMED = 63,                     /* "="  */
  YYSYMBOL_INTEGER = 64,                   /* INTEGER  */
  YYSYMBOL_65_integer_ = 65,               /* "<integer>"  */
  YYSYMBOL_FLOATT = 66,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 67,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 68,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 69,              /* "${"  */
  YYSYMBOL_INTERP_EXP = 70,                /* INTERP_EXP  */
  YYSYMBOL_PP_COMMENT = 71,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 72,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 73,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 74,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 75,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 76,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 77,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 78,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 79,                  /* "#if"  */
  YYSYMBOL_PP_NL = 80,                     /* "\n"  */
  YYSYMBOL_SPREAD = 81,                    /* "}..."  */
  YYSYMBOL_INTERP_LIT = 82,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 83,                /* "<interp string end>"  */
  YYSYMBOL_84_operator_id_ = 84,           /* "@<operator id>"  */
  YYSYMBOL_ID = 85,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 86,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 87,                  /* "++"  */
  YYSYMBOL_MINUS = 88,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 89,                /* "--"  */
  YYSYMBOL_TIMES = 90,                     /* "*"  */
  YYSYMBOL_DIVIDE = 91,                    /* "/"  */
  YYSYMBOL_PERCENT = 92,                   /* "%"  */
  YYSYMBOL_DOLLAR = 93,                    /* "$"  */
  YYSYMBOL_QUESTION = 94,                  /* "?"  */
  YYSYMBOL_OPTIONS = 95,                   /* OPTIONS  */
  YYSYMBOL_COLON = 96,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 97,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 98,             /* "?:"  */
  YYSYMBOL_NEW = 99,                       /* "new"  */
  YYSYMBOL_SPORK = 100,                    /* "spork"  */
  YYSYMBOL_FORK = 101,                     /* "fork"  */
  YYSYMBOL_L_HACK = 102,                   /* "<<<"  */
  YYSYMBOL_R_HACK = 103,                   /* ">>>"  */
  YYSYMBOL_AND = 104,                      /* "&&"  */
  YYSYMBOL_EQ = 105,                       /* "=="  */
  YYSYMBOL_GE = 106,                       /* ">="  */
  YYSYMBOL_GT = 107,                       /* ">"  */
  YYSYMBOL_LE = 108,                       /* "<="  */
  YYSYMBOL_LT = 109,                       /* "<"  */
  YYSYMBOL_NEQ = 110,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 111,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 112,              /* ">>"  */
  YYSYMBOL_S_AND = 113,                    /* "&"  */
  YYSYMBOL_S_OR = 114,                     /* "|"  */
  YYSYMBOL_S_XOR = 115,                    /* "^"  */
  YYSYMBOL_OR = 116,                       /* "||"  */
  YYSYMBOL_TMPL = 117,                     /* ":["  */
  YYSYMBOL_TILDA = 118,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 119,              /* "!"  */
  YYSYMBOL_AROBASE = 120,                  /* "@"  */
  YYSYMBOL_DYNOP = 121,                    /* "<dynamic_operator>"  */
  YYSYMBOL_LOCALE_EXP = 122,               /* "`foo`"  */
  YYSYMBOL_RANGE_EMPTY = 123,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 124,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 125,                   /* UTIMES  */
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
  YYSYMBOL_extends = 141,                  /* extends  */
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
  YYSYMBOL_import_item = 168,              /* import_item  */
  YYSYMBOL_import_list = 169,              /* import_list  */
  YYSYMBOL_import_stmt = 170,              /* import_stmt  */
  YYSYMBOL_retry_stmt = 171,               /* retry_stmt  */
  YYSYMBOL_handler = 172,                  /* handler  */
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
  YYSYMBOL_decl_template = 202,            /* decl_template  */
  YYSYMBOL_global = 203,                   /* global  */
  YYSYMBOL_opt_global = 204,               /* opt_global  */
  YYSYMBOL_storage_flag = 205,             /* storage_flag  */
  YYSYMBOL_access_flag = 206,              /* access_flag  */
  YYSYMBOL_flag = 207,                     /* flag  */
  YYSYMBOL_final = 208,                    /* final  */
  YYSYMBOL_modifier = 209,                 /* modifier  */
  YYSYMBOL_func_def_base = 210,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 211,            /* abstract_fdef  */
  YYSYMBOL_op_op = 212,                    /* op_op  */
  YYSYMBOL_op_base = 213,                  /* op_base  */
  YYSYMBOL_operator = 214,                 /* operator  */
  YYSYMBOL_op_def = 215,                   /* op_def  */
  YYSYMBOL_func_def = 216,                 /* func_def  */
  YYSYMBOL_type_decl_base = 217,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 218,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 219,         /* type_decl_noflag  */
  YYSYMBOL_option = 220,                   /* option  */
  YYSYMBOL_type_decl_opt = 221,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 222,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 223,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 224,          /* type_decl_flag2  */
  YYSYMBOL_variable = 225,                 /* variable  */
  YYSYMBOL_variable_list = 226,            /* variable_list  */
  YYSYMBOL_union_def = 227,                /* union_def  */
  YYSYMBOL_var_decl = 228,                 /* var_decl  */
  YYSYMBOL_arg_decl = 229,                 /* arg_decl  */
  YYSYMBOL_eq_op = 230,                    /* eq_op  */
  YYSYMBOL_rel_op = 231,                   /* rel_op  */
  YYSYMBOL_shift_op = 232,                 /* shift_op  */
  YYSYMBOL_add_op = 233,                   /* add_op  */
  YYSYMBOL_mul_op = 234,                   /* mul_op  */
  YYSYMBOL_opt_exp = 235,                  /* opt_exp  */
  YYSYMBOL_con_exp = 236,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 237,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 238,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 239,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 240,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 241,                  /* and_exp  */
  YYSYMBOL_eq_exp = 242,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 243,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 244,                /* shift_exp  */
  YYSYMBOL_add_exp = 245,                  /* add_exp  */
  YYSYMBOL_mul_exp = 246,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 247,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 248,                 /* cast_exp  */
  YYSYMBOL_unary_op = 249,                 /* unary_op  */
  YYSYMBOL_unary_exp = 250,                /* unary_exp  */
  YYSYMBOL_lambda_list = 251,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 252,               /* lambda_arg  */
  YYSYMBOL_tmplarg_exp = 253,              /* tmplarg_exp  */
  YYSYMBOL_tmplarg = 254,                  /* tmplarg  */
  YYSYMBOL_tmplarg_list = 255,             /* tmplarg_list  */
  YYSYMBOL_call_paren = 256,               /* call_paren  */
  YYSYMBOL_post_op = 257,                  /* post_op  */
  YYSYMBOL_dot_exp = 258,                  /* dot_exp  */
  YYSYMBOL_post_exp = 259,                 /* post_exp  */
  YYSYMBOL_interp_exp = 260,               /* interp_exp  */
  YYSYMBOL_interp = 261,                   /* interp  */
  YYSYMBOL_capture = 262,                  /* capture  */
  YYSYMBOL_capture_list = 263,             /* capture_list  */
  YYSYMBOL_captures = 264,                 /* captures  */
  YYSYMBOL_array_lit_ed = 265,             /* array_lit_ed  */
  YYSYMBOL_basic_exp = 266,                /* basic_exp  */
  YYSYMBOL_prim_exp = 267                  /* prim_exp  */
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
#define YYFINAL  234
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2971

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  138
/* YYNRULES -- Number of rules.  */
#define YYNRULES  356
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  642

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
       0,   207,   207,   208,   211,   212,   213,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   228,   230,   237,
     246,   246,   246,   248,   254,   261,   268,   272,   272,   273,
     273,   275,   280,   281,   283,   289,   296,   297,   299,   300,
     302,   305,   305,   306,   306,   308,   311,   317,   317,   318,
     318,   319,   328,   328,   331,   334,   338,   341,   347,   358,
     363,   363,   376,   378,   382,   383,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     416,   416,   425,   428,   432,   437,   441,   446,   454,   458,
     463,   466,   472,   474,   475,   479,   483,   486,   486,   487,
     487,   490,   491,   495,   496,   497,   500,   505,   505,   508,
     517,   518,   520,   529,   538,   539,   543,   550,   558,   566,
     575,   584,   594,   601,   610,   617,   624,   633,   633,   635,
     636,   637,   638,   641,   642,   645,   646,   656,   657,   658,
     659,   660,   662,   662,   664,   664,   664,   664,   664,   667,
     668,   671,   675,   676,   677,   681,   682,   685,   686,   687,
     691,   691,   692,   693,   694,   700,   700,   703,   704,   708,
     712,   714,   715,   715,   717,   717,   719,   720,   723,   724,
     725,   726,   729,   729,   731,   731,   734,   738,   743,   749,
     757,   766,   766,   766,   766,   766,   768,   776,   783,   791,
     797,   797,   799,   801,   803,   806,   806,   806,   807,   812,
     817,   824,   825,   839,   840,   844,   845,   848,   848,   848,
     849,   850,   850,   853,   854,   856,   856,   859,   863,   864,
     865,   866,   869,   878,   880,   881,   885,   885,   886,   886,
     886,   886,   887,   887,   888,   888,   889,   889,   889,   891,
     891,   892,   893,   895,   897,   900,   900,   901,   901,   902,
     902,   903,   903,   904,   904,   905,   905,   906,   906,   907,
     907,   908,   908,   909,   909,   910,   910,   912,   912,   915,
     915,   915,   916,   916,   919,   920,   921,   922,   923,   926,
     927,   928,   929,   930,   931,   934,   937,   942,   942,   944,
     944,   945,   948,   952,   953,   956,   957,   959,   959,   961,
     965,   966,   968,   970,   973,   975,   979,   980,   981,   983,
     984,   995,   995,   997,   998,   999,   999,  1000,  1000,  1003,
    1007,  1008,  1009,  1012,  1013,  1014,  1015,  1019,  1020,  1021,
    1022,  1023,  1029,  1030,  1031,  1032,  1033
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
  "import", "=", "INTEGER", "<integer>", "<float>", "<litteral string>",
  "<litteral char>", "${", "INTERP_EXP", "<comment>", "#include",
  "#define", "#pragma", "#undef", "#ifdef", "#ifndef", "#else", "#if",
  "\n", "}...", "<interp string lit>", "<interp string end>",
  "@<operator id>", "<identifier>", "+", "++", "-", "--", "*", "/", "%",
  "$", "?", "OPTIONS", ":", "::", "?:", "new", "spork", "fork", "<<<",
  ">>>", "&&", "==", ">=", ">", "<=", "<", "!=", "<<", ">>", "&", "|", "^",
  "||", ":[", "~", "!", "@", "<dynamic_operator>", "`foo`", "RANGE_EMPTY",
  "UMINUS", "UTIMES", "SECTION_LIST", "STMT_LIST3", "STMT_LIST2",
  "STMT_LIST1", "$accept", "ast", "section_list", "section", "class_flag",
  "class_def", "class_body", "trait_def", "number", "decimal", "prim_def",
  "extends", "traits", "extend_def", "id_list", "specialized",
  "specialized_list", "stmt_list", "fptr_base", "_func_effects",
  "func_effects", "func_base", "fptr_def", "typedef_when", "type_def_type",
  "type_def", "type_decl_array", "arg", "arg_list", "locale_arg",
  "locale_list", "code_stmt", "code_list", "stmt_pp", "stmt",
  "spread_stmt", "$@1", "using_stmt", "import_item", "import_list",
  "import_stmt", "retry_stmt", "handler", "handler_list", "try_stmt",
  "opt_id", "opt_comma", "enum_value", "enum_list", "enum_def", "when_exp",
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

#define YYPACT_NINF (-433)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-257)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     856,  -433,  1850,  2084,  1084,   259,  -433,    80,  -433,  1521,
    -433,   105,   118,   146,  2525,   259,  1709,  -433,  -433,  1521,
      12,    72,   259,   259,   123,   201,   123,   259,  -433,  -433,
     259,   259,  -433,   103,  1521,   106,    70,   135,  -433,   208,
     163,  -433,  -433,  -433,  -433,  1968,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,   110,  -433,  -433,  -433,
    -433,   201,   201,   320,   320,  2525,  -433,  -433,  -433,   154,
     618,  -433,  -433,  -433,  -433,  -433,   162,  -433,  1628,  -433,
     259,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,   196,  -433,  -433,  -433,    76,  -433,  -433,   279,
      79,  -433,  -433,  -433,  -433,   218,  -433,  -433,  -433,   259,
    -433,  -433,    99,   187,   209,   180,   188,   147,   233,   122,
     116,   228,   229,   239,  2760,  -433,   238,  -433,  -433,    42,
     276,  -433,  -433,  -433,  2525,  -433,   344,   346,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,   359,  -433,   363,  -433,  -433,  -433,  -433,  2525,   277,
     267,  -433,  1194,    37,   107,  -433,  -433,  -433,  -433,   378,
    -433,  -433,   291,   315,  2525,   286,  2590,  1752,    -1,   372,
     300,  -433,   387,   361,  -433,  -433,  -433,   306,   317,   309,
    -433,   311,   259,  -433,    49,  -433,   280,   355,   266,  -433,
     394,    57,  -433,   319,   378,   201,   321,   322,  -433,  -433,
     330,   397,   340,  2525,   331,   425,    45,  1968,  -433,   367,
    -433,  2525,  -433,   424,  1304,  -433,     8,  -433,  -433,   421,
    -433,  -433,   421,   337,  -433,  -433,  -433,   348,  -433,   201,
    2525,  -433,  -433,   438,  -433,  2525,  2655,  2655,  2655,   498,
     378,  2850,    91,   201,   201,  2694,  2760,  2760,  2760,  2760,
    2760,  2760,  -433,  -433,  2760,  2760,  2760,  -433,  2760,  -433,
    2760,  2760,   201,  -433,   433,  2011,   362,   310,   424,  -433,
     437,  -433,  -433,  -433,  1968,    88,  -433,  -433,   441,  2127,
    -433,  -433,  -433,  -433,  2525,  2525,  -433,    54,   184,  -433,
     201,  -433,   201,   439,  2525,    41,   440,  1752,   446,   366,
     356,   430,   444,  -433,    12,  -433,   361,   338,   414,  -433,
    -433,   338,   370,   201,   280,  -433,    57,  -433,  -433,  -433,
    2200,  -433,  -433,   399,   427,   379,   338,   348,  -433,   201,
     463,  -433,   410,    58,  -433,  -433,   386,  -433,  1968,    90,
    2265,  -433,  -433,  1414,  -433,  -433,    -4,  1304,  -433,  -433,
    -433,  -433,   360,   388,   466,  -433,  -433,  -433,  -433,  -433,
     378,   472,   193,   378,   338,   338,  -433,  -433,   338,    61,
    2760,   380,  -433,   187,   209,   180,   188,   147,   233,   122,
     116,   228,   229,   239,  -433,  1304,  -433,  -433,    56,  -433,
    -433,  -433,  -433,   265,   276,  -433,  -433,  2330,  -433,  -433,
    -433,  -433,   471,    90,   151,  -433,   408,  -433,   318,  -433,
    -433,   413,   415,  1521,   479,  2525,  1521,  2395,     8,  -433,
    2525,  2525,  -433,    67,   412,  1521,  -433,    35,   456,  -433,
     370,   348,   253,   338,  -433,  -433,   493,   499,   419,   420,
     503,   338,   502,    92,  -433,   504,   508,   201,  -433,   506,
     513,    30,   422,  -433,   364,  -433,  -433,   514,  -433,  -433,
    -433,  -433,   434,   338,  1521,   518,  -433,  -433,  -433,  -433,
     517,   520,   524,  -433,  -433,   445,  -433,  2760,    69,   516,
     310,  -433,  -433,  -433,  2525,  -433,   435,   201,  -433,   338,
     338,   521,  -433,   526,  -433,  1521,   527,   442,   529,   515,
     512,  -433,   447,  -433,  -433,   536,  -433,   201,   533,   370,
    -433,    63,   370,   253,   538,  -433,   974,  -433,   378,  -433,
    -433,  -433,  -433,  -433,  2841,  -433,   201,   421,   539,  -433,
    -433,   393,  -433,   386,  -433,  -433,   522,  -433,  -433,   201,
     201,   201,  -433,  -433,  -433,  2460,  -433,  -433,    90,  2525,
    -433,   378,  -433,  1521,  1521,  -433,  1521,  2525,  1521,  2525,
     448,  1521,   399,   462,   537,   464,  -433,  -433,    20,  -433,
     543,   253,  -433,  -433,   738,   427,   549,   468,  -433,  -433,
    2812,   475,  -433,  -433,   421,   368,   377,  -433,  2525,   558,
     559,   560,   562,  -433,    90,   561,  -433,  -433,  -433,   563,
    -433,  -433,  1521,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,   564,  -433,   568,  -433,  -433,  -433,  -433,  -433,
    -433,   201,  -433,  -433,  -433,  1521,  1521,  -433,  -433,   567,
    -433,  -433
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   144,     0,   260,     0,   191,   235,     0,   124,     0,
     125,     0,     0,     0,     0,   191,     0,   137,   138,     0,
     108,     0,   191,   191,   183,     0,   210,   191,    49,    50,
     191,   191,   234,     0,     0,   308,     0,     0,   233,     0,
       0,    24,   340,   341,   342,     0,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,   343,   317,   289,   318,
     290,     0,     0,     0,     0,     0,   293,   292,   351,     0,
       0,     4,     9,    10,   339,    16,     0,    11,     7,    14,
     191,    15,    80,    83,    38,    87,    88,    89,    86,    85,
      12,    81,     0,    78,    84,    79,     0,    82,    77,     0,
     145,   348,   147,   215,   216,     0,   217,     8,   236,   191,
      13,   172,   261,   265,   267,   269,   271,   273,   275,   277,
     279,   281,   283,   285,     0,   287,   336,   291,   325,   294,
     345,   344,   320,   356,     0,   254,   289,   290,   257,   258,
     158,   154,   251,   249,   250,   248,   155,   252,   253,   156,
     157,     0,   201,     0,   203,   202,   205,   204,     0,   259,
       0,    62,     0,   145,     0,   184,   181,   186,   187,     0,
     185,   189,   188,   193,     0,     0,     0,     0,     0,     0,
       0,   140,     0,     0,   107,   355,   102,     0,   193,     0,
     182,     0,   191,   221,     0,    27,   153,   225,   229,   231,
      53,     0,   211,     0,     0,     0,     0,     0,   134,   305,
     307,     0,     0,   260,   221,     0,     0,     0,   326,     0,
     329,     0,   304,   299,     0,   343,     0,   300,   296,     0,
     301,   297,     0,     0,     1,     6,     5,     0,    39,     0,
       0,   142,    25,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,   247,     0,     0,     0,   255,     0,   256,
       0,     0,     0,   295,     0,     0,     0,     0,     0,   170,
     171,   322,   321,   324,     0,     0,   350,   354,     0,     0,
     338,   337,   346,    63,     0,     0,   347,     0,     0,   190,
       0,   192,     0,     0,     0,   343,     0,     0,   331,     0,
       0,     0,     0,   139,   108,   104,   106,   180,   193,   195,
      17,   180,    29,     0,   153,   223,     0,   227,   228,   230,
       0,    52,   232,     0,    43,     0,   180,     0,   306,    61,
       0,   259,     0,     0,    92,   100,     0,   327,     0,   148,
       0,   298,    64,     0,   331,   333,     0,     0,   302,   303,
     349,    32,     0,     0,     0,   141,   146,   151,   149,   150,
       0,     0,     0,     0,   180,   180,   213,   212,   180,     0,
       0,     0,   264,   266,   268,   270,   272,   274,   276,   278,
     280,   282,   284,   286,   288,     0,   352,   162,     0,   319,
     311,   312,   313,     0,   310,   309,   323,     0,   164,   330,
     169,   168,     0,   165,     0,   176,   245,    56,     0,   197,
     196,     0,     0,     0,     0,     0,     0,     0,     0,   332,
       0,     0,   120,     0,     0,     0,   105,     0,    28,   194,
      29,     0,     0,   180,   224,   226,     0,     0,     0,    44,
       0,   180,     0,     0,    58,    60,     0,    61,    76,   343,
     325,   153,    95,    98,     0,   328,   316,     0,    65,   335,
     334,    31,     0,   180,     0,     0,   214,   219,   218,   209,
       0,     0,     0,   243,   173,     0,   263,     0,   145,   159,
       0,   152,   163,   167,     0,   244,    55,     0,   175,   180,
     180,   135,   127,     0,   132,     0,     0,     0,     0,   118,
     123,   121,   111,   115,   113,   110,   103,     0,     0,    29,
      36,     0,    29,     0,    30,    22,    28,    23,     0,    26,
      41,    42,    46,    40,     0,    90,     0,     0,     0,    94,
      93,     0,   101,     0,   315,    33,    47,   126,   220,     0,
       0,     0,   174,   262,   353,     0,   160,   314,   166,     0,
      57,     0,    45,     0,     0,   128,     0,     0,     0,     0,
       0,     0,     0,   109,     0,     0,   179,    34,     0,   177,
       0,     0,    19,    21,     0,    43,   221,     0,   239,   240,
       0,     0,    59,   199,     0,   343,   325,    99,     0,     0,
       0,     0,     0,   161,    54,     0,   136,   133,   129,     0,
     130,   117,     0,   122,   112,   114,   116,    35,    37,   178,
      18,    20,     0,   237,     0,   242,   241,    91,   198,    48,
      51,     0,   207,   208,   200,     0,   119,   222,   238,     0,
     131,   206
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -433,  -433,    39,   -67,   258,  -433,  -432,  -433,   -91,   243,
    -433,   139,  -384,  -433,  -297,     0,  -433,    -3,  -433,  -433,
      -6,  -433,  -433,  -433,  -433,  -433,   -10,  -285,  -433,  -433,
     124,  -433,   -60,  -404,    -9,  -433,  -433,  -433,    46,  -433,
    -433,  -433,   268,  -433,  -433,   278,  -433,     9,  -433,  -433,
    -433,   157,  -433,  -433,   416,  -433,  -433,  -433,  -433,  -433,
    -142,     5,    16,  -153,  -433,  -253,  -433,  -433,  -118,   395,
     101,  -195,  -275,   181,  -433,   426,  -433,    27,  -152,  -433,
    -433,  -433,   342,   345,  -433,  -433,  -433,   402,  -433,   273,
    -433,   400,   565,   -23,  -433,    10,  -433,  -433,   117,  -433,
    -433,  -105,  -102,  -106,  -103,   392,  -232,  -433,   349,   352,
     353,   347,   354,   350,   357,   358,   365,   343,   371,   -72,
      13,  -433,  -433,  -433,   130,  -433,  -234,  -123,  -314,  -309,
    -186,  -255,  -200,  -433,   -11,  -433,  -249,  -433
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    69,    70,    71,   187,    72,   527,    73,    74,   243,
      75,    76,   442,    77,   362,   520,   521,    78,   204,   449,
     450,   169,    79,   599,    80,    81,   416,   454,   418,   455,
     456,    82,   227,    83,    84,    85,   591,    86,   463,   464,
      87,    88,   315,   316,    89,   185,   574,   514,   515,    90,
     570,   432,   433,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   278,   152,   279,   280,   164,   101,   282,
     102,   298,   438,   170,   191,   171,   172,   188,   302,   320,
     103,   104,   153,   252,   105,   106,   107,   196,   197,   198,
     329,   199,   200,   108,   109,   589,   590,   110,   484,   496,
     264,   154,   155,   156,   157,   160,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   210,   126,   401,   402,   403,   351,   127,   128,   129,
     220,   130,   310,   356,   229,   292,   131,   132
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     175,   162,   201,   236,   230,   242,   283,   151,   159,   334,
     183,   281,   417,   265,   268,   195,   201,   266,   270,   179,
     163,   182,   404,   381,   382,   208,   355,   408,   405,   460,
     513,   347,   173,   253,   461,   307,   319,   275,   201,   201,
     453,   245,   180,   325,   406,   425,   440,  -153,   345,   275,
     219,   222,   223,   232,   192,   372,   523,   205,   206,   192,
     415,   452,   192,     2,   489,     3,   350,   578,   134,   238,
     233,   579,   517,   245,   276,   186,   228,   231,   510,   241,
     554,   354,   201,   245,   308,   174,   276,   517,   518,    20,
     431,   582,   469,   354,   376,   251,   472,   184,   409,   480,
     481,   357,   535,   482,   221,   519,    32,   239,   166,   309,
     176,   295,   309,    35,    38,   274,   580,    57,   296,    59,
     519,   309,    41,   177,    42,    43,    44,    45,   375,    57,
     588,    59,   246,   294,   193,   577,   254,   273,   581,   193,
      41,   346,   193,   459,   524,   485,   483,   277,   486,   620,
     285,   178,   289,   238,   234,   211,   470,   247,   248,   277,
      65,   166,   465,   288,   246,   427,   439,   194,   528,   358,
     194,   444,   359,   221,   246,   475,   533,   253,   479,   303,
      68,   306,   201,   246,   294,   246,   588,   419,   207,   247,
     248,   209,   377,   255,   357,   335,   477,   256,   546,   247,
     248,   240,   135,   357,   267,   190,   192,   202,   247,   248,
     247,   248,   560,   192,   396,   257,   201,   212,   341,   323,
     213,   353,   219,   192,   561,   562,   201,   596,   507,   363,
     201,   201,   461,   147,   148,   404,   556,   349,   420,   251,
     163,   405,   242,   378,   379,   364,   246,   494,   216,   201,
     366,   592,   262,    32,   201,   553,   525,   263,   237,   249,
      32,    38,   394,   526,   600,   601,   602,   400,    38,   490,
      32,   247,   248,   491,   201,   290,   291,   201,    38,   201,
     398,   189,   244,   265,   268,   203,   193,   266,   270,   219,
     421,   258,   422,   214,   412,   260,   165,   166,   167,   168,
     201,   261,     8,   193,    10,    57,    58,    59,    60,   424,
     413,   414,   478,   443,   194,   192,   201,   250,   269,   138,
     139,   194,   497,   259,   498,     2,   271,     3,   165,   166,
     224,   194,   272,   585,   226,   446,    66,    67,   283,   142,
     143,   144,   145,   281,   238,   284,   639,   367,   368,   369,
    -255,    20,  -256,   219,   353,   467,   300,   301,   318,   301,
     327,   328,    32,   471,   472,   286,   605,   542,   543,   287,
      38,   -97,   -97,   289,    41,    35,    42,    43,    44,    45,
     -96,   -96,   311,   297,    41,   312,    42,    43,    44,    45,
     313,   317,   353,   314,   321,   193,   322,   277,     2,   326,
       3,   330,   339,   134,   333,   225,   336,    57,    58,    59,
      60,   488,   446,    61,   501,   338,   226,   504,   337,    62,
      63,    64,    65,   194,    20,   340,   516,   343,   344,   350,
     503,   357,   506,   361,   201,   508,   509,   348,    66,    67,
     360,   365,    68,   395,   407,   423,   426,   399,    35,   410,
     428,   429,   430,   431,   434,   437,   301,    41,   448,    42,
      43,    44,    45,    41,   451,   547,   441,   201,   457,   458,
      37,   462,   474,   473,   201,   476,   487,   593,   595,   493,
     400,   614,   502,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   495,   201,    65,   565,   512,   499,    25,
     500,   489,   529,   192,   530,   531,   532,   575,   536,   539,
     558,   201,   534,   201,   537,    68,   540,   236,   541,   545,
     544,   548,   549,   555,   587,   550,   201,   201,   201,   551,
     483,   559,   564,   566,   628,   568,   563,   571,   567,   569,
     573,   576,   472,   572,   612,   594,   598,   512,   616,   617,
      32,   619,   623,   624,   606,   607,   627,   608,    38,   610,
     446,   630,   613,   631,   634,   584,   632,   201,   633,   635,
     637,   638,   609,   641,   611,   604,   447,   522,   618,   622,
     587,   538,   615,   193,   436,    57,    58,    59,    60,   597,
     511,   304,   435,   374,   371,   331,   324,   370,   299,   445,
     626,   332,   552,   629,   215,   342,   383,   386,   201,   636,
     384,   194,   385,   392,   388,   387,    66,    67,    -2,   235,
     557,     1,   389,     2,   390,     3,   640,   238,     4,     0,
       5,     6,     7,   391,     8,     9,    10,    11,    12,    13,
      14,     0,   393,     0,    15,    16,    17,    18,    19,    20,
       0,    21,    22,    23,    24,     0,     0,     0,     0,     0,
       0,    25,     0,    26,    27,    28,    29,    30,     0,    31,
      32,    33,    34,    35,     0,    36,    37,     0,    38,    39,
      40,     0,    41,     0,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     0,
       0,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,    61,     0,     0,   -28,     0,     0,    62,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,    67,     0,   235,
      68,     1,     0,     2,     0,     3,     0,     0,     4,   621,
       5,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,    16,    17,    18,    19,    20,
       0,    21,    22,    23,    24,     0,     0,     0,     0,     0,
       0,    25,     0,    26,    27,    28,    29,    30,     0,    31,
      32,    33,    34,    35,     0,    36,    37,     0,    38,    39,
      40,     0,    41,     0,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     0,
       0,     0,     0,    56,     0,    57,    58,    59,    60,     0,
       0,    61,     0,     0,   -28,     0,     0,    62,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,    67,     0,     1,
      68,     2,     0,     3,     0,     0,     4,     0,     5,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,    15,    16,    17,    18,    19,    20,     0,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,    25,
       0,    26,    27,    28,    29,    30,     0,    31,    32,    33,
      34,    35,     0,    36,    37,     0,    38,    39,    40,     0,
      41,     0,    42,    43,    44,    45,     0,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     0,     0,
       0,    56,     0,    57,    58,    59,    60,     0,     0,    61,
       0,     0,   -28,     0,     0,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,     0,     1,    68,     2,
       0,     3,     0,     0,     4,   583,     5,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
      15,    16,    17,    18,    19,    20,     0,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,    25,     0,    26,
      27,    28,    29,    30,     0,    31,    32,    33,    34,    35,
       0,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,     0,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,    66,    67,     4,   161,    68,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
       0,     0,    37,     0,    38,    39,    40,     0,    41,     0,
      42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,     0,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,    66,    67,     4,   293,    68,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
       0,     0,    37,     0,    38,    39,    40,     0,    41,     0,
      42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,     0,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,    66,    67,     4,   352,    68,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
       0,     0,    37,     0,    38,    39,    40,     0,    41,     0,
      42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,     0,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,    66,    67,     4,   468,    68,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
       0,     0,    37,     0,    38,    39,    40,     0,    41,     0,
      42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,     0,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     2,     0,     3,     0,
       0,     4,    66,    67,     6,     7,    68,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,    19,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,     0,     0,    37,
       0,    38,    39,    40,     0,    41,     0,    42,    43,    44,
      45,     0,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,     0,     0,     0,    56,     0,    57,    58,
      59,    60,     0,     0,    61,     0,     0,     0,     0,     0,
      62,    63,    64,    65,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,     0,     0,     4,    66,
      67,     6,     7,    68,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,     0,     0,    37,     0,    38,    39,
      40,     0,    41,     0,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     0,
       0,     0,   181,    56,     2,    57,     3,    59,     0,   134,
       0,    61,     6,     0,     0,     0,     0,    62,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,     1,     0,     2,     0,     3,
       0,    32,   134,     0,    35,     6,     0,     0,     0,    38,
       0,     0,     0,    41,     0,    42,    43,    44,    45,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,    57,    58,    59,    60,
       0,     0,    61,     0,    32,     0,     0,    35,    62,    63,
      64,    65,    38,     0,     0,     0,    41,     0,    42,    43,
      44,    45,     0,     0,     0,     0,     0,    66,    67,     0,
       0,    68,     0,     0,     0,     0,     0,    56,     0,    57,
      58,    59,    60,     0,     0,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,     2,   133,     3,     0,     0,
     134,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      66,    67,     0,     0,    68,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,    35,     0,     0,     0,     0,
      38,     0,     0,     0,    41,     0,    42,    43,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,   135,    57,   136,    59,
     137,   138,   139,    61,     0,   140,     0,     0,     0,    62,
      63,    64,    65,     0,     0,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,    66,    67,
     149,   150,    68,     2,     0,     3,     0,     0,   134,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,   397,
      32,   134,     0,    35,     6,     0,     0,     0,    38,     0,
       0,     0,    41,     0,    42,    43,    44,    45,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
     217,   218,     0,    56,     0,    57,    58,    59,    60,     0,
       0,    61,     0,    32,     0,     0,    35,    62,    63,    64,
      65,    38,     0,     0,     0,    41,     0,    42,    43,    44,
      45,     0,     0,     0,     0,     0,    66,    67,     0,     2,
      68,     3,     0,     0,   134,     0,    56,     6,    57,    58,
      59,    60,     0,     0,    61,     0,     0,   158,     0,     0,
      62,    63,    64,    65,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      67,     0,     2,    68,     3,   411,    32,   134,     0,    35,
       6,     0,     0,     0,    38,     0,     0,     0,    41,     0,
      42,    43,    44,    45,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,    57,    58,    59,    60,     0,     0,    61,     0,    32,
     158,     0,    35,    62,    63,    64,    65,    38,     0,     0,
       0,    41,     0,    42,    43,    44,    45,     0,     0,     0,
       0,     0,    66,    67,     0,     2,    68,     3,   397,     0,
     134,     0,    56,     6,    57,    58,    59,    60,     0,     0,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    67,     0,     0,    68,
       0,     0,    32,     0,     0,    35,     0,     0,     0,     0,
      38,     0,     0,     0,    41,     0,    42,    43,    44,    45,
       2,   466,     3,     0,     0,   134,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,    61,     0,     0,    20,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    66,    67,
      35,     0,    68,     0,     0,    38,     0,     0,     0,    41,
       0,    42,    43,    44,    45,     2,     0,     3,   492,     0,
     134,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,    61,     0,
       0,    20,     0,     0,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    66,    67,    35,     0,    68,     0,     0,
      38,     0,     0,     0,    41,     0,    42,    43,    44,    45,
       2,   505,     3,     0,     0,   134,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,    61,     0,     0,    20,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    66,    67,
      35,     0,    68,     0,     0,    38,     0,     0,     0,    41,
       0,    42,    43,    44,    45,     2,     0,     3,   603,     0,
     134,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,    61,     0,
       0,    20,     0,     0,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    66,    67,    35,     0,    68,     0,     0,
      38,     0,     0,     0,    41,     0,    42,    43,    44,    45,
       2,     0,     3,     0,     0,   134,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    56,     0,    57,    58,    59,
      60,     0,     0,    61,     0,     0,    20,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    66,    67,
      35,     0,    68,     0,     0,    38,     0,     0,     0,    41,
       0,    42,    43,    44,    45,     2,     0,     3,     0,     0,
     134,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      56,     0,    57,    58,    59,    60,     0,     0,    61,     0,
       0,    20,     0,     0,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    66,    67,    35,     0,    68,     0,     0,
      38,     0,     0,     0,    41,     0,    42,    43,    44,    45,
       2,     0,     3,     0,     0,   134,     0,     0,     6,     0,
       0,     0,     0,     0,     0,   305,     0,    57,    58,    59,
      60,     0,     0,    61,     0,     0,    20,     0,     0,    62,
      63,    64,    65,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     0,     0,   134,     0,     0,    32,    66,    67,
      35,     0,    68,     0,     0,    38,     0,     0,     0,    41,
       0,    42,    43,    44,    45,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,     0,    57,    58,    59,    60,     0,     0,    61,    35,
       0,     0,     0,     0,    62,    63,    64,    65,    41,     0,
      42,    43,    44,    45,     0,     2,     0,     3,     0,     0,
     134,     0,     0,    66,    67,     0,     0,    68,     0,   225,
       0,    57,    58,    59,    60,     0,     0,    61,     0,     0,
     380,    20,     0,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,     0,    35,    68,   192,     0,     0,
       0,     0,     0,   625,    41,     0,    42,    43,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   192,    57,    58,    59,
      60,     0,     0,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,     0,    32,     0,     0,     0,     0,     0,
      37,     0,    38,     0,     0,     0,     0,     0,    66,    67,
       0,     0,    68,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    32,     0,     0,     0,   586,     0,    37,
       0,    38,     0,     0,     0,     0,   373,     0,     0,     0,
       0,     0,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,     0,     0,   194,   586,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,    57,   267,    59,
     269,   138,   139,     0,     0,   140,     0,     0,     0,     0,
       0,     0,     0,     0,   194,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
     149,   150
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    70,    64,    96,   129,     2,     3,   204,
      19,   129,   297,   118,   120,    25,    39,   119,   121,    14,
       4,    16,   277,   255,   256,    34,   226,   280,   277,   343,
     434,   217,     5,   105,   343,   177,   188,     7,    61,    62,
     337,     4,    15,   196,   278,     4,   321,     5,     3,     7,
      45,    61,    62,    64,     5,   250,   440,    30,    31,     5,
       6,   336,     5,     5,     8,     7,     5,     4,    10,    78,
      65,     8,    52,     4,    44,     3,    63,    64,    11,     3,
      11,    85,   105,     4,    85,     5,    44,    52,    53,    31,
      23,   523,    96,    85,     3,   105,     4,    85,   284,   374,
     375,    10,    10,   378,    63,    85,    52,    80,    38,   113,
       5,     4,   113,    55,    60,   126,    53,    87,    11,    89,
      85,   113,    64,     5,    66,    67,    68,    69,   251,    87,
     534,    89,    95,    96,    85,   519,   109,   124,   522,    85,
      64,    96,    85,    85,   441,   379,    85,   117,   380,   581,
     134,     5,    96,   162,     0,    85,   356,   120,   121,   117,
     102,    38,   348,   158,    95,   307,   318,   113,   443,   229,
     113,   324,   232,    63,    95,   370,   451,   249,   373,   174,
     122,   176,   205,    95,    96,    95,   590,     3,    85,   120,
     121,    85,   252,    94,    10,   205,     3,    98,   473,   120,
     121,     5,    86,    10,    88,    24,     5,    26,   120,   121,
     120,   121,   497,     5,   274,   116,   239,    36,   213,   192,
      85,   224,   217,     5,   499,   500,   249,   541,   428,   239,
     253,   254,   541,   111,   112,   490,   489,   221,   298,   249,
     224,   490,   333,   253,   254,   240,    95,    96,    85,   272,
     245,   536,   105,    52,   277,   487,     3,   110,    96,    41,
      52,    60,   272,    10,   549,   550,   551,   277,    60,     4,
      52,   120,   121,     8,   297,     8,     9,   300,    60,   302,
     275,    23,     3,   388,   390,    27,    85,   389,   391,   284,
     300,   104,   302,    85,   289,   115,    37,    38,    39,    40,
     323,   113,    16,    85,    18,    87,    88,    89,    90,   304,
     294,   295,   372,   323,   113,     5,   339,    99,    90,    91,
      92,   113,     4,   114,     6,     5,    97,     7,    37,    38,
      10,   113,    93,   528,    96,   330,   118,   119,   461,   106,
     107,   108,   109,   461,   353,    69,   631,   246,   247,   248,
       6,    31,     6,   348,   357,   350,    41,    42,    41,    42,
      94,    95,    52,     3,     4,     6,   561,     3,     4,     6,
      60,     3,     4,    96,    64,    55,    66,    67,    68,    69,
       3,     4,    10,     5,    64,    85,    66,    67,    68,    69,
       3,    85,   395,    32,    85,    85,    85,   117,     5,    44,
       7,     7,     5,    10,    85,    85,    85,    87,    88,    89,
      90,   395,   407,    93,   423,    85,    96,   426,    96,    99,
     100,   101,   102,   113,    31,    85,   435,    96,     3,     5,
     425,    10,   427,    85,   457,   430,   431,    70,   118,   119,
     103,     3,   122,    10,     7,     6,     6,    85,    55,     8,
       4,    85,    96,    23,    10,   117,    42,    64,    31,    66,
      67,    68,    69,    64,    85,   474,    96,   490,     5,    59,
      58,    85,     6,    85,   497,     3,    96,   537,    85,     8,
     490,   572,     3,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    85,   517,   102,   505,    85,    85,    43,
      85,     8,     3,     5,    85,    85,     3,   517,     4,     3,
     494,   534,    10,   536,     6,   122,     3,   584,    96,    85,
       6,     3,     5,     7,   534,     5,   549,   550,   551,     5,
      85,    96,     6,     6,   594,     6,    15,    25,    96,    24,
       4,     8,     4,    96,    96,     6,    24,    85,    11,    85,
      52,     8,     3,    85,   563,   564,    81,   566,    60,   568,
     555,     3,   571,     4,     3,   526,     6,   590,     6,     6,
       6,     3,   567,     6,   569,   559,   333,   438,   578,   585,
     590,   457,   573,    85,   316,    87,    88,    89,    90,   543,
     433,   175,   314,   251,   249,   200,   194,    99,   172,   326,
     590,   201,   485,   598,    39,   213,   257,   260,   631,   612,
     258,   113,   259,   270,   264,   261,   118,   119,     0,     1,
     490,     3,   265,     5,   266,     7,   635,   636,    10,    -1,
      12,    13,    14,   268,    16,    17,    18,    19,    20,    21,
      22,    -1,   271,    -1,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    -1,    57,    58,    -1,    60,    61,
      62,    -1,    64,    -1,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,    -1,
      -1,    93,    -1,    -1,    96,    -1,    -1,    99,   100,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,   119,    -1,     1,
     122,     3,    -1,     5,    -1,     7,    -1,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    -1,    57,    58,    -1,    60,    61,
      62,    -1,    64,    -1,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,    -1,
      -1,    93,    -1,    -1,    96,    -1,    -1,    99,   100,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,   119,    -1,     3,
     122,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    57,    58,    -1,    60,    61,    62,    -1,
      64,    -1,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    89,    90,    -1,    -1,    93,
      -1,    -1,    96,    -1,    -1,    99,   100,   101,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,     3,   122,     5,
      -1,     7,    -1,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    57,    58,    -1,    60,    61,    62,    -1,    64,    -1,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,   118,   119,    10,    11,   122,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    64,    -1,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,   118,   119,    10,    11,   122,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    64,    -1,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,   118,   119,    10,    11,   122,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    64,    -1,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,   118,   119,    10,    11,   122,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    64,    -1,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,
      -1,    10,   118,   119,    13,    14,   122,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    60,    61,    62,    -1,    64,    -1,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,    -1,    -1,    10,   118,
     119,    13,    14,   122,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    -1,    64,    -1,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,     3,    85,     5,    87,     7,    89,    -1,    10,
      -1,    93,    13,    -1,    -1,    -1,    -1,    99,   100,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
      -1,    52,    10,    -1,    55,    13,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    64,    -1,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      -1,    -1,    93,    -1,    52,    -1,    -1,    55,    99,   100,
     101,   102,    60,    -1,    -1,    -1,    64,    -1,    66,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,   118,   119,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    99,   100,   101,   102,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    64,    -1,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    95,    -1,    -1,    -1,    99,
     100,   101,   102,    -1,    -1,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,   118,   119,
     120,   121,   122,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
      52,    10,    -1,    55,    13,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    64,    -1,    66,    67,    68,    69,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    -1,    85,    -1,    87,    88,    89,    90,    -1,
      -1,    93,    -1,    52,    -1,    -1,    55,    99,   100,   101,
     102,    60,    -1,    -1,    -1,    64,    -1,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,   118,   119,    -1,     5,
     122,     7,    -1,    -1,    10,    -1,    85,    13,    87,    88,
      89,    90,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,   100,   101,   102,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
     119,    -1,     5,   122,     7,     8,    52,    10,    -1,    55,
      13,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,    52,
      96,    -1,    55,    99,   100,   101,   102,    60,    -1,    -1,
      -1,    64,    -1,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,   118,   119,    -1,     5,   122,     7,     8,    -1,
      10,    -1,    85,    13,    87,    88,    89,    90,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,   122,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    64,    -1,    66,    67,    68,    69,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    -1,    -1,    93,    -1,    -1,    31,    -1,    -1,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,   118,   119,
      55,    -1,   122,    -1,    -1,    60,    -1,    -1,    -1,    64,
      -1,    66,    67,    68,    69,     5,    -1,     7,     8,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,
      -1,    31,    -1,    -1,    99,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,   118,   119,    55,    -1,   122,    -1,    -1,
      60,    -1,    -1,    -1,    64,    -1,    66,    67,    68,    69,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    -1,    -1,    93,    -1,    -1,    31,    -1,    -1,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,   118,   119,
      55,    -1,   122,    -1,    -1,    60,    -1,    -1,    -1,    64,
      -1,    66,    67,    68,    69,     5,    -1,     7,     8,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,
      -1,    31,    -1,    -1,    99,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,   118,   119,    55,    -1,   122,    -1,    -1,
      60,    -1,    -1,    -1,    64,    -1,    66,    67,    68,    69,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    -1,    -1,    93,    -1,    -1,    31,    -1,    -1,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,   118,   119,
      55,    -1,   122,    -1,    -1,    60,    -1,    -1,    -1,    64,
      -1,    66,    67,    68,    69,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,
      -1,    31,    -1,    -1,    99,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,   118,   119,    55,    -1,   122,    -1,    -1,
      60,    -1,    -1,    -1,    64,    -1,    66,    67,    68,    69,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    -1,    -1,    93,    -1,    -1,    31,    -1,    -1,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    52,   118,   119,
      55,    -1,   122,    -1,    -1,    60,    -1,    -1,    -1,    64,
      -1,    66,    67,    68,    69,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    -1,    -1,    93,    55,
      -1,    -1,    -1,    -1,    99,   100,   101,   102,    64,    -1,
      66,    67,    68,    69,    -1,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,   118,   119,    -1,    -1,   122,    -1,    85,
      -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,    -1,
      96,    31,    -1,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,   119,    -1,    55,   122,     5,    -1,    -1,
      -1,    -1,    -1,    11,    64,    -1,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,     5,    87,    88,    89,
      90,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    99,
     100,   101,   102,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    -1,   118,   119,
      -1,    -1,   122,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    52,    -1,    -1,    -1,    85,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,   113,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,   121
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,    10,    12,    13,    14,    16,    17,
      18,    19,    20,    21,    22,    26,    27,    28,    29,    30,
      31,    33,    34,    35,    36,    43,    45,    46,    47,    48,
      49,    51,    52,    53,    54,    55,    57,    58,    60,    61,
      62,    64,    66,    67,    68,    69,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    85,    87,    88,    89,
      90,    93,    99,   100,   101,   102,   118,   119,   122,   131,
     132,   133,   135,   137,   138,   140,   141,   143,   147,   152,
     154,   155,   161,   163,   164,   165,   167,   170,   171,   174,
     179,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   198,   200,   210,   211,   214,   215,   216,   223,   224,
     227,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   252,   257,   258,   259,
     261,   266,   267,     6,    10,    86,    88,    90,    91,    92,
      95,   105,   106,   107,   108,   109,   110,   111,   112,   120,
     121,   191,   194,   212,   231,   232,   233,   234,    96,   191,
     235,    11,   147,   192,   197,    37,    38,    39,    40,   151,
     203,   205,   206,   207,     5,   164,     5,     5,     5,   191,
     207,     3,   191,   164,    85,   175,     3,   134,   207,   134,
     203,   204,     5,    85,   113,   156,   217,   218,   219,   221,
     222,   223,   203,   134,   148,   207,   207,    85,   164,    85,
     251,    85,   203,    85,    85,   222,    85,    82,    83,   191,
     260,    63,   156,   156,    10,    85,    96,   162,   250,   264,
     162,   250,   264,   191,     0,     1,   133,    96,   164,   207,
       5,     3,   138,   139,     3,     4,    95,   120,   121,    41,
      99,   156,   213,   249,   207,    94,    98,   116,   104,   114,
     115,   113,   105,   110,   230,   231,   232,    88,   233,    90,
     234,    97,    93,   250,   264,     7,    44,   117,   193,   195,
     196,   198,   199,   257,    69,   192,     6,     6,   191,    96,
       8,     9,   265,    11,    96,     4,    11,     5,   201,   205,
      41,    42,   208,   191,   184,    85,   191,   190,    85,   113,
     262,    10,    85,     3,    32,   172,   173,    85,    41,   208,
     209,    85,    85,   207,   217,   193,    44,    94,    95,   220,
       7,   199,   221,    85,   201,   156,    85,    96,    85,     5,
      85,   191,   235,    96,     3,     3,    96,   260,    70,   192,
       5,   256,    11,   147,    85,   262,   263,    10,   162,   162,
     103,    85,   144,   156,   191,     3,   191,   200,   200,   200,
      99,   213,   201,    56,   212,   257,     3,   162,   156,   156,
      96,   236,   236,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   156,    10,   162,     8,   191,    85,
     156,   253,   254,   255,   261,   266,   256,     7,   195,   260,
       8,     8,   191,   192,   192,     6,   156,   157,   158,     3,
     162,   156,   156,     6,   191,     4,     6,   190,     4,    85,
      96,    23,   181,   182,    10,   175,   172,   117,   202,   208,
     202,    96,   142,   156,   193,   219,   191,   139,    31,   149,
     150,    85,   202,   144,   157,   159,   160,     5,    59,    85,
     258,   259,    85,   168,   169,   260,     6,   191,    11,    96,
     262,     3,     4,    85,     6,   201,     3,     3,   162,   201,
     202,   202,   202,    85,   228,   256,   236,    96,   192,     8,
       4,     8,     8,     8,    96,    85,   229,     4,     6,    85,
      85,   164,     3,   191,   164,     6,   191,   262,   191,   191,
      11,   181,    85,   163,   177,   178,   164,    52,    53,    85,
     145,   146,   141,   142,   144,     3,    10,   136,   202,     3,
      85,    85,     3,   202,    10,    10,     4,     6,   160,     3,
       3,    96,     3,     4,     6,    85,   202,   164,     3,     5,
       5,     5,   228,   236,    11,     7,   195,   254,   192,    96,
     157,   202,   202,    15,     6,   164,     6,    96,     6,    24,
     180,    25,    96,     4,   176,   156,     8,   142,     4,     8,
      53,   142,   136,    11,   132,   201,    85,   156,   163,   225,
     226,   166,   157,   162,     6,    85,   258,   168,    24,   153,
     157,   157,   157,     8,   192,   201,   164,   164,   164,   191,
     164,   191,    96,   164,   138,   177,    11,    85,   145,     8,
     136,    11,   150,     3,    85,    11,   225,    81,   162,   191,
       3,     4,     6,     6,     3,     6,   147,     6,     3,   157,
     164,     6
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
     163,   163,   163,   163,   163,   163,   163,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     166,   165,   167,   167,   167,   168,   168,   168,   169,   169,
     170,   170,   171,   172,   173,   173,   174,   175,   175,   176,
     176,   177,   177,   178,   178,   178,   179,   180,   180,   181,
     182,   182,   183,   183,   184,   184,   185,   185,   185,   185,
     185,   185,   185,   185,   186,   187,   187,   188,   188,   189,
     189,   189,   189,   190,   190,   191,   191,   192,   192,   192,
     192,   192,   193,   193,   194,   194,   194,   194,   194,   195,
     195,   195,   196,   196,   196,   197,   197,   198,   198,   198,
     199,   199,   200,   200,   200,   201,   201,   202,   202,   202,
     202,   203,   204,   204,   205,   205,   206,   206,   207,   207,
     207,   207,   208,   208,   209,   209,   210,   210,   210,   210,
     211,   212,   212,   212,   212,   212,   213,   213,   213,   213,
     214,   214,   215,   215,   215,   216,   216,   216,   216,   216,
     216,   217,   217,   218,   218,   219,   219,   220,   220,   220,
     221,   222,   222,   223,   223,   224,   224,   225,   225,   225,
     226,   226,   227,   228,   229,   229,   230,   230,   231,   231,
     231,   231,   232,   232,   233,   233,   234,   234,   234,   235,
     235,   236,   236,   236,   236,   237,   237,   238,   238,   239,
     239,   240,   240,   241,   241,   242,   242,   243,   243,   244,
     244,   245,   245,   246,   246,   247,   247,   248,   248,   249,
     249,   249,   249,   249,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   251,   251,   252,   252,   253,
     253,   254,   254,   255,   255,   256,   256,   257,   257,   258,
     259,   259,   259,   259,   259,   259,   260,   260,   260,   261,
     261,   262,   262,   263,   263,   264,   264,   265,   265,   266,
     266,   266,   266,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     7,     6,
       3,     2,     1,     5,     1,     1,     5,     2,     0,     0,
       2,     4,     1,     3,     2,     3,     1,     3,     1,     2,
       4,     2,     2,     0,     1,     5,     5,     0,     2,     1,
       1,     7,     2,     1,     4,     2,     1,     3,     1,     3,
       1,     0,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     3,     5,     5,     1,     3,     3,     1,     3,
       3,     5,     2,     3,     1,     2,     3,     1,     0,     1,
       0,     1,     3,     1,     3,     1,     7,     2,     0,     5,
       1,     2,     7,     5,     1,     1,     5,     5,     6,     7,
       7,     9,     5,     7,     2,     5,     7,     1,     1,     3,
       2,     3,     2,     2,     1,     1,     3,     1,     3,     3,
       3,     3,     3,     0,     1,     1,     1,     1,     1,     3,
       4,     5,     2,     3,     2,     3,     5,     5,     4,     4,
       1,     1,     1,     4,     5,     3,     2,     3,     4,     3,
       0,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     0,     2,     1,     4,     4,     7,     6,
       8,     1,     1,     1,     1,     1,     8,     6,     6,     3,
       1,     2,     3,     3,     4,     1,     1,     1,     4,     4,
       5,     1,     7,     2,     3,     1,     3,     1,     1,     0,
       2,     1,     2,     1,     1,     1,     1,     2,     3,     1,
       1,     2,     7,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     5,     4,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     3,     2,
       2,     2,     3,     3,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     1,     1,     3,
       1,     2,     2,     3,     2,     1,     1,     2,     3,     2,
       3,     1,     2,     1,     2,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     1,     3,     5,     3,     2,     2
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
#line 207 "src/gwion.y"
                  { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2663 "src/parser.c"
    break;

  case 3: /* ast: %empty  */
#line 208 "src/gwion.y"
           { (yyval.ast) = NULL; }
#line 2669 "src/parser.c"
    break;

  case 4: /* section_list: section  */
#line 211 "src/gwion.y"
            { YYLIST_INI(Section, (yyval.ast), (yyvsp[0].section)); }
#line 2675 "src/parser.c"
    break;

  case 5: /* section_list: section_list section  */
#line 212 "src/gwion.y"
                                            { YYLIST_END(Section, (yyval.ast), (yyvsp[-1].ast), (yyvsp[0].section)); }
#line 2681 "src/parser.c"
    break;

  case 7: /* section: stmt_list  */
#line 216 "src/gwion.y"
                                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list), (yylsp[0])); }
#line 2687 "src/parser.c"
    break;

  case 8: /* section: func_def  */
#line 217 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def), (yylsp[0]));  }
#line 2693 "src/parser.c"
    break;

  case 9: /* section: class_def  */
#line 218 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def), (yylsp[0])); }
#line 2699 "src/parser.c"
    break;

  case 10: /* section: trait_def  */
#line 219 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def), (yylsp[0])); }
#line 2705 "src/parser.c"
    break;

  case 11: /* section: extend_def  */
#line 220 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def), (yylsp[0])); }
#line 2711 "src/parser.c"
    break;

  case 12: /* section: enum_def  */
#line 221 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def), (yylsp[0])); }
#line 2717 "src/parser.c"
    break;

  case 13: /* section: union_def  */
#line 222 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def), (yylsp[0])); }
#line 2723 "src/parser.c"
    break;

  case 14: /* section: fptr_def  */
#line 223 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def), (yylsp[0])); }
#line 2729 "src/parser.c"
    break;

  case 15: /* section: type_def  */
#line 224 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def), (yylsp[0])); }
#line 2735 "src/parser.c"
    break;

  case 16: /* section: prim_def  */
#line 225 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def), (yylsp[0])); }
#line 2741 "src/parser.c"
    break;

  case 17: /* class_flag: flag modifier  */
#line 228 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2747 "src/parser.c"
    break;

  case 18: /* class_def: "class" class_flag "<identifier>" decl_template extends traits class_body  */
#line 231 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-5].flag), MK_TAG((yyvsp[-4].sym), (yylsp[-4])), (yyvsp[-2].type_decl), (yyvsp[0].ast));
      if((yyvsp[-3].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2758 "src/parser.c"
    break;

  case 19: /* class_def: "struct" class_flag "<identifier>" decl_template traits class_body  */
#line 238 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-4].flag), MK_TAG((yyvsp[-3].sym), (yylsp[-3])), NULL, (yyvsp[0].ast));
      if((yyvsp[-2].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2770 "src/parser.c"
    break;

  case 20: /* class_body: "{" section_list "}"  */
#line 246 "src/gwion.y"
                                   { (yyval.ast) = (yyvsp[-1].ast); }
#line 2776 "src/parser.c"
    break;

  case 21: /* class_body: "{" "}"  */
#line 246 "src/gwion.y"
                                                          { (yyval.ast) = NULL; }
#line 2782 "src/parser.c"
    break;

  case 22: /* class_body: ";"  */
#line 246 "src/gwion.y"
                                                                               { (yyval.ast) = NULL; }
#line 2788 "src/parser.c"
    break;

  case 23: /* trait_def: "trait" opt_global "<identifier>" traits class_body  */
#line 249 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2797 "src/parser.c"
    break;

  case 24: /* number: INTEGER  */
#line 254 "src/gwion.y"
                {
  if((yyvsp[0].yyint).num < 0 || (yyvsp[0].yyint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type);
}
#line 2808 "src/parser.c"
    break;

  case 25: /* decimal: number  */
#line 261 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2819 "src/parser.c"
    break;

  case 26: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 269 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2827 "src/parser.c"
    break;

  case 27: /* extends: "extends" type_decl_array  */
#line 272 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2833 "src/parser.c"
    break;

  case 28: /* extends: %empty  */
#line 272 "src/gwion.y"
                                                          { (yyval.type_decl) = NULL; }
#line 2839 "src/parser.c"
    break;

  case 29: /* traits: %empty  */
#line 273 "src/gwion.y"
               { (yyval.id_list) = NULL; }
#line 2845 "src/parser.c"
    break;

  case 30: /* traits: ":" id_list  */
#line 273 "src/gwion.y"
                                            { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2851 "src/parser.c"
    break;

  case 31: /* extend_def: extends ":" id_list ";"  */
#line 275 "src/gwion.y"
                                    {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2859 "src/parser.c"
    break;

  case 32: /* id_list: "<identifier>"  */
#line 280 "src/gwion.y"
                 { YYLIST_INI(Symbol, (yyval.id_list), (yyvsp[0].sym)); }
#line 2865 "src/parser.c"
    break;

  case 33: /* id_list: id_list "," "<identifier>"  */
#line 281 "src/gwion.y"
                 { YYLIST_END(Symbol, (yyval.id_list), (yyvsp[-2].id_list), (yyvsp[0].sym)); }
#line 2871 "src/parser.c"
    break;

  case 34: /* specialized: "<identifier>" traits  */
#line 283 "src/gwion.y"
                       {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1])),
        .traits = (yyvsp[0].id_list),
      };
  }
#line 2882 "src/parser.c"
    break;

  case 35: /* specialized: "const" type_decl_array "<identifier>"  */
#line 289 "src/gwion.y"
                               {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])),
        .td = (yyvsp[-1].type_decl),
      };
  }
#line 2893 "src/parser.c"
    break;

  case 36: /* specialized_list: specialized  */
#line 296 "src/gwion.y"
                              { YYLIST_INI(Specialized, (yyval.specialized_list), (yyvsp[0].specialized)); }
#line 2899 "src/parser.c"
    break;

  case 37: /* specialized_list: specialized_list "," specialized  */
#line 297 "src/gwion.y"
                                     { YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), (yyvsp[0].specialized)); }
#line 2905 "src/parser.c"
    break;

  case 38: /* stmt_list: stmt  */
#line 299 "src/gwion.y"
                                   { YYLIST_INI(Stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 2911 "src/parser.c"
    break;

  case 39: /* stmt_list: stmt_list stmt  */
#line 300 "src/gwion.y"
                                   { YYLIST_END(Stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 2917 "src/parser.c"
    break;

  case 40: /* fptr_base: flag type_decl_array "<identifier>" decl_template  */
#line 302 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2924 "src/parser.c"
    break;

  case 41: /* _func_effects: "perform" "<identifier>"  */
#line 305 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2930 "src/parser.c"
    break;

  case 42: /* _func_effects: _func_effects "<identifier>"  */
#line 305 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2936 "src/parser.c"
    break;

  case 43: /* func_effects: %empty  */
#line 306 "src/gwion.y"
                     { (yyval.vector).ptr = NULL; }
#line 2942 "src/parser.c"
    break;

  case 44: /* func_effects: _func_effects  */
#line 306 "src/gwion.y"
                                                        { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2948 "src/parser.c"
    break;

  case 45: /* func_base: flag final type_decl_array "<identifier>" decl_template  */
#line 308 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2955 "src/parser.c"
    break;

  case 46: /* fptr_def: "funptr" fptr_base func_args func_effects ";"  */
#line 311 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2965 "src/parser.c"
    break;

  case 47: /* typedef_when: %empty  */
#line 317 "src/gwion.y"
                     { (yyval.exp) = NULL;}
#line 2971 "src/parser.c"
    break;

  case 48: /* typedef_when: "when" exp  */
#line 317 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2977 "src/parser.c"
    break;

  case 49: /* type_def_type: "typedef"  */
#line 318 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2983 "src/parser.c"
    break;

  case 50: /* type_def_type: "distinct"  */
#line 318 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2989 "src/parser.c"
    break;

  case 51: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 319 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 3002 "src/parser.c"
    break;

  case 52: /* type_decl_array: type_decl array  */
#line 328 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 3008 "src/parser.c"
    break;

  case 54: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 331 "src/gwion.y"
                                            {
    (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-3].type_decl), (yyvsp[-2].var_decl)), .exp = (yyvsp[0].exp) };
  }
#line 3016 "src/parser.c"
    break;

  case 55: /* arg: type_decl_array arg_decl  */
#line 334 "src/gwion.y"
                             {
    (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) };
  }
#line 3024 "src/parser.c"
    break;

  case 56: /* arg_list: arg  */
#line 338 "src/gwion.y"
         {
       YYLIST_INI(Arg, (yyval.arg_list), (yyvsp[0].arg));
     }
#line 3032 "src/parser.c"
    break;

  case 57: /* arg_list: arg_list "," arg  */
#line 341 "src/gwion.y"
                              {
     mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
     (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 3041 "src/parser.c"
    break;

  case 58: /* locale_arg: arg  */
#line 347 "src/gwion.y"
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
#line 3057 "src/parser.c"
    break;

  case 59: /* locale_arg: locale_arg "," arg  */
#line 358 "src/gwion.y"
                                {
     mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
     (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 3066 "src/parser.c"
    break;

  case 61: /* locale_list: %empty  */
#line 364 "src/gwion.y"
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
#line 3081 "src/parser.c"
    break;

  case 62: /* code_stmt: "{" "}"  */
#line 376 "src/gwion.y"
            {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc)); }
#line 3088 "src/parser.c"
    break;

  case 63: /* code_stmt: "{" stmt_list "}"  */
#line 378 "src/gwion.y"
                      {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc), .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) });}
#line 3095 "src/parser.c"
    break;

  case 64: /* code_list: "{" "}"  */
#line 382 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), Stmt, 0); }
#line 3101 "src/parser.c"
    break;

  case 65: /* code_list: "{" stmt_list "}"  */
#line 383 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3107 "src/parser.c"
    break;

  case 66: /* stmt_pp: "<comment>"  */
#line 386 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyloc), .data = (yyvsp[0].sval)); }
#line 3113 "src/parser.c"
    break;

  case 67: /* stmt_pp: "#include"  */
#line 387 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyloc), .data = (yyvsp[0].sval)); }
#line 3119 "src/parser.c"
    break;

  case 68: /* stmt_pp: "#define"  */
#line 388 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3125 "src/parser.c"
    break;

  case 69: /* stmt_pp: "#pragma"  */
#line 389 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3131 "src/parser.c"
    break;

  case 70: /* stmt_pp: "#undef"  */
#line 390 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3137 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#ifdef"  */
#line 391 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3143 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#ifndef"  */
#line 392 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3149 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#else"  */
#line 393 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyloc), .data = (yyvsp[0].sval)); }
#line 3155 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#if"  */
#line 394 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3161 "src/parser.c"
    break;

  case 75: /* stmt_pp: "\n"  */
#line 395 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl, (yyloc), .data = (yyvsp[0].sval)); }
#line 3167 "src/parser.c"
    break;

  case 76: /* stmt_pp: LOCALE_INI "<identifier>" opt_exp LOCALE_END  */
#line 397 "src/gwion.y"
    { (yyval.stmt) = MK_STMT_PP(locale, (yyloc), .xid = (yyvsp[-2].sym), .exp = (yyvsp[-1].exp)); }
#line 3173 "src/parser.c"
    break;

  case 90: /* $@1: %empty  */
#line 416 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3179 "src/parser.c"
    break;

  case 91: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 416 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .tag = MK_TAG((yyvsp[-5].sym), (yylsp[-5])),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
  };
  (yyval.stmt) = MK_STMT(ae_stmt_spread, (yylsp[-5]), .stmt_spread = spread);
}
#line 3192 "src/parser.c"
    break;

  case 92: /* using_stmt: "using" type_decl ";"  */
#line 425 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_using, (yyloc));
    (yyval.stmt).d.stmt_using.d.td = (yyvsp[-1].type_decl);
    }
#line 3200 "src/parser.c"
    break;

  case 93: /* using_stmt: "using" "<identifier>" ":" dot_exp ";"  */
#line 428 "src/gwion.y"
                                       { (yyval.stmt) = MK_STMT(ae_stmt_using, (yyloc));
    (yyval.stmt).d.stmt_using.d.exp = (yyvsp[-1].exp);
    (yyval.stmt).d.stmt_using.tag = MK_TAG((yyvsp[-3].sym), (yylsp[-3]));
  }
#line 3209 "src/parser.c"
    break;

  case 94: /* using_stmt: "using" "<identifier>" ":" "<identifier>" ";"  */
#line 432 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_using, (yyloc));
    (yyval.stmt).d.stmt_using.d.exp = new_prim_id(mpool(arg), (yyvsp[-1].sym), (yylsp[-1]));
    (yyval.stmt).d.stmt_using.tag = MK_TAG((yyvsp[-3].sym), (yylsp[-3]));
  }
#line 3218 "src/parser.c"
    break;

  case 95: /* import_item: "<identifier>"  */
#line 437 "src/gwion.y"
                {
    (yyval.import_item) = (struct Stmt_Using_) {
      .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))
    };
  }
#line 3228 "src/parser.c"
    break;

  case 96: /* import_item: "<identifier>" ":" dot_exp  */
#line 441 "src/gwion.y"
                            {
    (yyval.import_item) = (struct Stmt_Using_) {
      .tag = MK_TAG((yyvsp[-2].sym), (yylsp[-2])),
      .d = { .exp = (yyvsp[0].exp) }
    };
  }
#line 3239 "src/parser.c"
    break;

  case 97: /* import_item: "<identifier>" ":" "<identifier>"  */
#line 446 "src/gwion.y"
                       {
    (yyval.import_item) = (struct Stmt_Using_) {
      .tag = MK_TAG((yyvsp[-2].sym), (yylsp[-2])),
      .d = { .exp = new_prim_id(mpool(arg), (yyvsp[0].sym), (yylsp[0])) }
    };
  }
#line 3250 "src/parser.c"
    break;

  case 98: /* import_list: import_item  */
#line 454 "src/gwion.y"
                         {
    (yyval.import_list) = new_mp_vector(mpool(arg), struct Stmt_Using_, 1);
    mp_vector_set((yyval.import_list), struct Stmt_Using_, 0, (yyvsp[0].import_item));
  }
#line 3259 "src/parser.c"
    break;

  case 99: /* import_list: import_list "," import_item  */
#line 458 "src/gwion.y"
                                         {
    mp_vector_add(mpool(arg), &(yyvsp[-2].import_list), struct Stmt_Using_, (yyvsp[0].import_item));
    (yyval.import_list) = (yyvsp[-2].import_list);
  }
#line 3268 "src/parser.c"
    break;

  case 100: /* import_stmt: "import" "<identifier>" ";"  */
#line 463 "src/gwion.y"
                             {
    (yyval.stmt) = MK_STMT(ae_stmt_import, (yyloc));
    (yyval.stmt).d.stmt_import.tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]));
  }
#line 3277 "src/parser.c"
    break;

  case 101: /* import_stmt: "import" "<identifier>" ":" import_list ";"  */
#line 466 "src/gwion.y"
                                      {
    (yyval.stmt) = MK_STMT(ae_stmt_import, (yyloc));
    (yyval.stmt).d.stmt_import.tag = MK_TAG((yyvsp[-3].sym), (yylsp[-3]));
    (yyval.stmt).d.stmt_import.selection = (yyvsp[-1].import_list);
  }
#line 3287 "src/parser.c"
    break;

  case 102: /* retry_stmt: "retry" ";"  */
#line 472 "src/gwion.y"
                        { (yyval.stmt) = MK_STMT(ae_stmt_retry, (yylsp[-1])); }
#line 3293 "src/parser.c"
    break;

  case 103: /* handler: "handle" opt_id stmt  */
#line 474 "src/gwion.y"
                              { (yyval.handler) = (Handler){ .tag = MK_TAG((yyvsp[-1].sym), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-2])), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }; }
#line 3299 "src/parser.c"
    break;

  case 104: /* handler_list: handler  */
#line 475 "src/gwion.y"
                      {
    YYLIST_INI(Handler, (yyval.handler_list).handlers, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).tag.sym;
  }
#line 3308 "src/parser.c"
    break;

  case 105: /* handler_list: handler_list handler  */
#line 479 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].handler_list).handlers, Handler, (yyvsp[0].handler));
    (yyval.handler_list) = (yyvsp[-1].handler_list);
  }
#line 3317 "src/parser.c"
    break;

  case 106: /* try_stmt: "try" stmt handler_list  */
#line 483 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_try, (yylsp[-2]),
   .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers});}
#line 3324 "src/parser.c"
    break;

  case 108: /* opt_id: %empty  */
#line 486 "src/gwion.y"
                    { (yyval.sym) = NULL; }
#line 3330 "src/parser.c"
    break;

  case 110: /* opt_comma: %empty  */
#line 487 "src/gwion.y"
                        {}
#line 3336 "src/parser.c"
    break;

  case 111: /* enum_value: "<identifier>"  */
#line 490 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }; }
#line 3342 "src/parser.c"
    break;

  case 112: /* enum_value: "<identifier>" ":" number  */
#line 491 "src/gwion.y"
                          { 
            (yyval.enum_value) = (EnumValue) {.tag = MK_TAG((yyvsp[-2].sym), (yylsp[-2])), .gwint = (yyvsp[0].gwint), .set = true };
          }
#line 3350 "src/parser.c"
    break;

  case 113: /* enum_list: enum_value  */
#line 495 "src/gwion.y"
                            { YYLIST_INI(EnumValue, (yyval.enum_list), (yyvsp[0].enum_value)); }
#line 3356 "src/parser.c"
    break;

  case 114: /* enum_list: enum_list "," enum_value  */
#line 496 "src/gwion.y"
                            { YYLIST_END(EnumValue, (yyval.enum_list), (yyvsp[-2].enum_list), (yyvsp[0].enum_value)) ;}
#line 3362 "src/parser.c"
    break;

  case 115: /* enum_list: stmt_pp  */
#line 497 "src/gwion.y"
          { return 0;}
#line 3368 "src/parser.c"
    break;

  case 116: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 500 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3377 "src/parser.c"
    break;

  case 117: /* when_exp: "when" exp  */
#line 505 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3383 "src/parser.c"
    break;

  case 118: /* when_exp: %empty  */
#line 505 "src/gwion.y"
                                           { (yyval.exp) = NULL; }
#line 3389 "src/parser.c"
    break;

  case 119: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 508 "src/gwion.y"
                                      {
    (yyval.stmt) = MK_STMT(0 /*ae_stmt_match*/, (yylsp[-4]),
      .stmt_match = {
        .cond = (yyvsp[-3].exp),
        .when = (yyvsp[-2].exp),
        .list = (yyvsp[0].stmt_list)
    });
}
#line 3402 "src/parser.c"
    break;

  case 120: /* match_list: match_case_stmt  */
#line 517 "src/gwion.y"
                            { YYLIST_INI(Stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 3408 "src/parser.c"
    break;

  case 121: /* match_list: match_list match_case_stmt  */
#line 518 "src/gwion.y"
                             { YYLIST_END(Stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 3414 "src/parser.c"
    break;

  case 122: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 520 "src/gwion.y"
                                                        {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-6]),
    .stmt_match = {
      .cond  = (yyvsp[-5].exp),
      .list  = (yyvsp[-3].stmt_list),
      .where = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  });
}
#line 3427 "src/parser.c"
    break;

  case 123: /* match_stmt: "match" exp "{" match_list "}"  */
#line 529 "src/gwion.y"
                               {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-4]),
    .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
  });
}
#line 3439 "src/parser.c"
    break;

  case 124: /* flow: "while"  */
#line 538 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3445 "src/parser.c"
    break;

  case 125: /* flow: "until"  */
#line 539 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3451 "src/parser.c"
    break;

  case 126: /* loop_stmt: flow "(" exp ")" stmt  */
#line 544 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-4].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3462 "src/parser.c"
    break;

  case 127: /* loop_stmt: "do" stmt flow exp ";"  */
#line 551 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
    });
  }
#line 3474 "src/parser.c"
    break;

  case 128: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 559 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-5]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3486 "src/parser.c"
    break;

  case 129: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 567 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-6]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-4].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c3 = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3499 "src/parser.c"
    break;

  case 130: /* loop_stmt: "foreach" "(" capture ":" exp ")" stmt  */
#line 576 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-6]),
      .stmt_each = {
        .var = (yyvsp[-4].capture).var,
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .is_ref = (yyvsp[-4].capture).is_ref
    });
  }
#line 3512 "src/parser.c"
    break;

  case 131: /* loop_stmt: "foreach" "(" "<identifier>" "," capture ":" exp ")" stmt  */
#line 585 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-8]),
      .stmt_each = {
        .var = (yyvsp[-4].capture).var,
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .idx = (Var_Decl){.tag=MK_TAG((yyvsp[-6].sym), (yylsp[-6]))},
        .is_ref = (yyvsp[-4].capture).is_ref
    });
  }
#line 3526 "src/parser.c"
    break;

  case 132: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 595 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-4]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
  }
#line 3537 "src/parser.c"
    break;

  case 133: /* loop_stmt: "repeat" "(" "<identifier>" "," exp ")" stmt  */
#line 602 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-6]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
    (yyval.stmt).d.stmt_loop.idx = (Var_Decl){ .tag = MK_TAG((yyvsp[-4].sym), (yylsp[-4])) };
  }
#line 3549 "src/parser.c"
    break;

  case 134: /* defer_stmt: "defer" stmt  */
#line 610 "src/gwion.y"
                         {
    (yyval.stmt) = MK_STMT(ae_stmt_defer, (yylsp[-1]),
      .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
}
#line 3559 "src/parser.c"
    break;

  case 135: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 618 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-4]),
      .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3570 "src/parser.c"
    break;

  case 136: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 625 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-6]),
      .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3582 "src/parser.c"
    break;

  case 137: /* breaks: "break"  */
#line 633 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3588 "src/parser.c"
    break;

  case 138: /* breaks: "continue"  */
#line 633 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3594 "src/parser.c"
    break;

  case 139: /* jump_stmt: "return" exp ";"  */
#line 635 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-2]), (yyvsp[-1].exp)); }
#line 3600 "src/parser.c"
    break;

  case 140: /* jump_stmt: "return" ";"  */
#line 636 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-1]), NULL); }
#line 3606 "src/parser.c"
    break;

  case 141: /* jump_stmt: breaks decimal ";"  */
#line 637 "src/gwion.y"
                         { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-2]), .stmt_index = { .idx = (yyvsp[-1].gwint).num });}
#line 3612 "src/parser.c"
    break;

  case 142: /* jump_stmt: breaks ";"  */
#line 638 "src/gwion.y"
               { (yyval.stmt) = MK_STMT((yyvsp[-1].stmt_t), (yylsp[-1]), .stmt_index = { .idx = -1 });}
#line 3618 "src/parser.c"
    break;

  case 143: /* exp_stmt: exp ";"  */
#line 641 "src/gwion.y"
            { (yyval.stmt) = MK_STMT_EXP((yylsp[-1]), (yyvsp[-1].exp)); }
#line 3624 "src/parser.c"
    break;

  case 144: /* exp_stmt: ";"  */
#line 642 "src/gwion.y"
            { (yyval.stmt) = MK_STMT(ae_stmt_exp, (yylsp[0])); }
#line 3630 "src/parser.c"
    break;

  case 145: /* exp: binary_exp  */
#line 645 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3636 "src/parser.c"
    break;

  case 146: /* exp: binary_exp "," exp  */
#line 647 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3648 "src/parser.c"
    break;

  case 148: /* binary_exp: "<identifier>" "=" binary_exp  */
#line 657 "src/gwion.y"
                      { (yyval.exp) = new_exp_named(mpool(arg), (yyvsp[0].exp), MK_TAG((yyvsp[-2].sym), (yylsp[-2])), (yyloc));}
#line 3654 "src/parser.c"
    break;

  case 149: /* binary_exp: binary_exp "@" decl_exp  */
#line 658 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3660 "src/parser.c"
    break;

  case 150: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 659 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3666 "src/parser.c"
    break;

  case 151: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 660 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3672 "src/parser.c"
    break;

  case 152: /* call_template: ":[" tmplarg_list "]"  */
#line 662 "src/gwion.y"
                                     { (yyval.tmplarg_list) = (yyvsp[-1].tmplarg_list); }
#line 3678 "src/parser.c"
    break;

  case 153: /* call_template: %empty  */
#line 662 "src/gwion.y"
                                                           { (yyval.tmplarg_list) = NULL; }
#line 3684 "src/parser.c"
    break;

  case 159: /* array_exp: "[" exp "]"  */
#line 667 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3690 "src/parser.c"
    break;

  case 160: /* array_exp: "[" exp "]" array_exp  */
#line 668 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3698 "src/parser.c"
    break;

  case 161: /* array_exp: "[" exp "]" "[" "]"  */
#line 671 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3704 "src/parser.c"
    break;

  case 162: /* array_empty: "[" "]"  */
#line 675 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3710 "src/parser.c"
    break;

  case 163: /* array_empty: array_empty "[" "]"  */
#line 676 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3716 "src/parser.c"
    break;

  case 164: /* array_empty: array_empty array_exp  */
#line 677 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3722 "src/parser.c"
    break;

  case 165: /* dict_list: binary_exp ":" binary_exp  */
#line 681 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3728 "src/parser.c"
    break;

  case 166: /* dict_list: dict_list "," binary_exp ":" binary_exp  */
#line 682 "src/gwion.y"
                                            { (yyvsp[-4].exp)->next->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3734 "src/parser.c"
    break;

  case 167: /* range: "[" exp ":" exp "]"  */
#line 685 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3740 "src/parser.c"
    break;

  case 168: /* range: "[" exp ":" "]"  */
#line 686 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3746 "src/parser.c"
    break;

  case 169: /* range: "[" ":" exp "]"  */
#line 687 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3752 "src/parser.c"
    break;

  case 173: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 693 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3758 "src/parser.c"
    break;

  case 174: /* decl_exp: type_decl_flag2 flag type_decl_array call_paren var_decl  */
#line 694 "src/gwion.y"
                                                             {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-2].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-4].flag) | (yyvsp[-3].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1]));
  }
#line 3768 "src/parser.c"
    break;

  case 175: /* func_args: "(" arg_list ")"  */
#line 700 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3774 "src/parser.c"
    break;

  case 176: /* func_args: "(" ")"  */
#line 700 "src/gwion.y"
                                                   { (yyval.arg_list) = NULL; }
#line 3780 "src/parser.c"
    break;

  case 177: /* decl_template: ":[" specialized_list "]"  */
#line 703 "src/gwion.y"
                            { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3786 "src/parser.c"
    break;

  case 178: /* decl_template: ":[" specialized_list "..." "]"  */
#line 704 "src/gwion.y"
                                              {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), spec);
}
#line 3795 "src/parser.c"
    break;

  case 179: /* decl_template: ":[" "..." "]"  */
#line 708 "src/gwion.y"
                                {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_INI(Specialized, (yyval.specialized_list), spec);
}
#line 3804 "src/parser.c"
    break;

  case 180: /* decl_template: %empty  */
#line 712 "src/gwion.y"
                      { (yyval.specialized_list) = NULL; }
#line 3810 "src/parser.c"
    break;

  case 181: /* global: "global"  */
#line 714 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3816 "src/parser.c"
    break;

  case 183: /* opt_global: %empty  */
#line 715 "src/gwion.y"
                            { (yyval.flag) = ae_flag_none; }
#line 3822 "src/parser.c"
    break;

  case 184: /* storage_flag: "static"  */
#line 717 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3828 "src/parser.c"
    break;

  case 186: /* access_flag: "private"  */
#line 719 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3834 "src/parser.c"
    break;

  case 187: /* access_flag: "protect"  */
#line 720 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3840 "src/parser.c"
    break;

  case 188: /* flag: access_flag  */
#line 723 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3846 "src/parser.c"
    break;

  case 189: /* flag: storage_flag  */
#line 724 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3852 "src/parser.c"
    break;

  case 190: /* flag: access_flag storage_flag  */
#line 725 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3858 "src/parser.c"
    break;

  case 191: /* flag: %empty  */
#line 726 "src/gwion.y"
           { (yyval.flag) = ae_flag_none; }
#line 3864 "src/parser.c"
    break;

  case 192: /* final: "final"  */
#line 729 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3870 "src/parser.c"
    break;

  case 193: /* final: %empty  */
#line 729 "src/gwion.y"
                                                { (yyval.flag) = ae_flag_none; }
#line 3876 "src/parser.c"
    break;

  case 194: /* modifier: "abstract" final  */
#line 731 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3882 "src/parser.c"
    break;

  case 196: /* func_def_base: "fun" func_base func_args code_list  */
#line 734 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].arg_list);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3891 "src/parser.c"
    break;

  case 197: /* func_def_base: "fun" func_base func_args ";"  */
#line 738 "src/gwion.y"
                                     {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].arg_list);
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3901 "src/parser.c"
    break;

  case 198: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 743 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].arg_list), (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale;
   (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3912 "src/parser.c"
    break;

  case 199: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 749 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3923 "src/parser.c"
    break;

  case 200: /* abstract_fdef: "fun" flag "abstract" type_decl_array "<identifier>" decl_template func_args ";"  */
#line 758 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3935 "src/parser.c"
    break;

  case 206: /* op_base: type_decl_array op_op decl_template "(" arg "," arg ")"  */
#line 769 "src/gwion.y"
    {
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].arg);
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3947 "src/parser.c"
    break;

  case 207: /* op_base: type_decl_array post_op decl_template "(" arg ")"  */
#line 777 "src/gwion.y"
    {
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].arg));
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3958 "src/parser.c"
    break;

  case 208: /* op_base: unary_op type_decl_array decl_template "(" arg ")"  */
#line 784 "src/gwion.y"
    {
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].arg));
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3970 "src/parser.c"
    break;

  case 209: /* op_base: type_decl_array OPID_A func_args  */
#line 792 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].arg_list), ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3979 "src/parser.c"
    break;

  case 210: /* operator: "operator"  */
#line 797 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3985 "src/parser.c"
    break;

  case 211: /* operator: "operator" global  */
#line 797 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3991 "src/parser.c"
    break;

  case 212: /* op_def: operator op_base code_list  */
#line 800 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3997 "src/parser.c"
    break;

  case 213: /* op_def: operator op_base ";"  */
#line 802 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 4003 "src/parser.c"
    break;

  case 214: /* op_def: operator "abstract" op_base ";"  */
#line 804 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 4009 "src/parser.c"
    break;

  case 218: /* func_def: operator "new" func_args code_list  */
#line 808 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-3].flag), (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 4018 "src/parser.c"
    break;

  case 219: /* func_def: operator "new" func_args ";"  */
#line 813 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4027 "src/parser.c"
    break;

  case 220: /* func_def: operator "abstract" "new" func_args ";"  */
#line 818 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4036 "src/parser.c"
    break;

  case 221: /* type_decl_base: "<identifier>"  */
#line 824 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4042 "src/parser.c"
    break;

  case 222: /* type_decl_base: "(" flag type_decl_array decl_template func_args func_effects ")"  */
#line 825 "src/gwion.y"
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
#line 4058 "src/parser.c"
    break;

  case 223: /* type_decl_tmpl: type_decl_base call_template  */
#line 839 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 4064 "src/parser.c"
    break;

  case 224: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 840 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 4070 "src/parser.c"
    break;

  case 226: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 845 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4076 "src/parser.c"
    break;

  case 227: /* option: "?"  */
#line 848 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4082 "src/parser.c"
    break;

  case 228: /* option: OPTIONS  */
#line 848 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4088 "src/parser.c"
    break;

  case 229: /* option: %empty  */
#line 848 "src/gwion.y"
                                                                        { (yyval.uval) = 0; }
#line 4094 "src/parser.c"
    break;

  case 230: /* type_decl_opt: type_decl_noflag option  */
#line 849 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4100 "src/parser.c"
    break;

  case 232: /* type_decl: type_decl_flag type_decl_opt  */
#line 850 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4106 "src/parser.c"
    break;

  case 233: /* type_decl_flag: "late"  */
#line 853 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4112 "src/parser.c"
    break;

  case 234: /* type_decl_flag: "const"  */
#line 854 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4118 "src/parser.c"
    break;

  case 235: /* type_decl_flag2: "var"  */
#line 856 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4124 "src/parser.c"
    break;

  case 237: /* variable: "<identifier>" ";"  */
#line 859 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.variable) = MK_VAR(td, (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});
}
#line 4133 "src/parser.c"
    break;

  case 238: /* variable: type_decl_array "<identifier>" ";"  */
#line 863 "src/gwion.y"
                         { (yyval.variable) = MK_VAR((yyvsp[-2].type_decl), (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});}
#line 4139 "src/parser.c"
    break;

  case 239: /* variable: stmt_pp  */
#line 864 "src/gwion.y"
          { return 0;}
#line 4145 "src/parser.c"
    break;

  case 240: /* variable_list: variable  */
#line 865 "src/gwion.y"
                        { YYLIST_INI(Variable, (yyval.variable_list), (yyvsp[0].variable)); }
#line 4151 "src/parser.c"
    break;

  case 241: /* variable_list: variable_list variable  */
#line 866 "src/gwion.y"
                         { YYLIST_END(Variable, (yyval.variable_list), (yyvsp[-1].variable_list), (yyvsp[0].variable)); }
#line 4157 "src/parser.c"
    break;

  case 242: /* union_def: "union" flag "<identifier>" decl_template "{" variable_list "}"  */
#line 869 "src/gwion.y"
                                                        {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].variable_list), (yylsp[-4]));
      (yyval.union_def)->tag.sym = (yyvsp[-4].sym); // put tag in ctor
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4169 "src/parser.c"
    break;

  case 243: /* var_decl: "<identifier>"  */
#line 878 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4175 "src/parser.c"
    break;

  case 244: /* arg_decl: "<identifier>"  */
#line 880 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4181 "src/parser.c"
    break;

  case 245: /* arg_decl: %empty  */
#line 881 "src/gwion.y"
                 { (yyval.var_decl) = (struct Var_Decl_) {
            .tag = { .sym = NULL, .loc = {.first = arg->pos, .last = arg->pos }}};
        }
#line 4189 "src/parser.c"
    break;

  case 259: /* opt_exp: exp  */
#line 891 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4195 "src/parser.c"
    break;

  case 260: /* opt_exp: %empty  */
#line 891 "src/gwion.y"
                                   { (yyval.exp) = NULL; }
#line 4201 "src/parser.c"
    break;

  case 262: /* con_exp: log_or_exp "?" con_exp ":" con_exp  */
#line 894 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4207 "src/parser.c"
    break;

  case 263: /* con_exp: log_or_exp "?" ":" con_exp  */
#line 896 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-3].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4213 "src/parser.c"
    break;

  case 264: /* con_exp: log_or_exp "?:" con_exp  */
#line 898 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4219 "src/parser.c"
    break;

  case 266: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 900 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4225 "src/parser.c"
    break;

  case 268: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 901 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4231 "src/parser.c"
    break;

  case 270: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 902 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4237 "src/parser.c"
    break;

  case 272: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 903 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4243 "src/parser.c"
    break;

  case 274: /* and_exp: and_exp "&" eq_exp  */
#line 904 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4249 "src/parser.c"
    break;

  case 276: /* eq_exp: eq_exp eq_op rel_exp  */
#line 905 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4255 "src/parser.c"
    break;

  case 278: /* rel_exp: rel_exp rel_op shift_exp  */
#line 906 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4261 "src/parser.c"
    break;

  case 280: /* shift_exp: shift_exp shift_op add_exp  */
#line 907 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4267 "src/parser.c"
    break;

  case 282: /* add_exp: add_exp add_op mul_exp  */
#line 908 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4273 "src/parser.c"
    break;

  case 284: /* mul_exp: mul_exp mul_op dur_exp  */
#line 909 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4279 "src/parser.c"
    break;

  case 286: /* dur_exp: dur_exp "::" cast_exp  */
#line 910 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4285 "src/parser.c"
    break;

  case 288: /* cast_exp: cast_exp "$" type_decl_array  */
#line 913 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4291 "src/parser.c"
    break;

  case 295: /* unary_exp: unary_op unary_exp  */
#line 920 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4297 "src/parser.c"
    break;

  case 296: /* unary_exp: "spork" unary_exp  */
#line 921 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4303 "src/parser.c"
    break;

  case 297: /* unary_exp: "fork" unary_exp  */
#line 922 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4309 "src/parser.c"
    break;

  case 298: /* unary_exp: "new" type_decl_array call_paren  */
#line 923 "src/gwion.y"
                                     {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].type_decl), (yyvsp[0].exp) ?: new_prim_nil(mpool(arg), (yylsp[0])), (yyloc));
  }
#line 4317 "src/parser.c"
    break;

  case 299: /* unary_exp: "new" type_decl_array  */
#line 926 "src/gwion.y"
                          {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4323 "src/parser.c"
    break;

  case 300: /* unary_exp: "spork" code_list  */
#line 927 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4329 "src/parser.c"
    break;

  case 301: /* unary_exp: "fork" code_list  */
#line 928 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4335 "src/parser.c"
    break;

  case 302: /* unary_exp: "spork" captures code_list  */
#line 929 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4341 "src/parser.c"
    break;

  case 303: /* unary_exp: "fork" captures code_list  */
#line 930 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4347 "src/parser.c"
    break;

  case 304: /* unary_exp: "$" type_decl_array  */
#line 931 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4353 "src/parser.c"
    break;

  case 305: /* lambda_list: "<identifier>"  */
#line 934 "src/gwion.y"
    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){.tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_INI(Arg, (yyval.arg_list), a); }
#line 4361 "src/parser.c"
    break;

  case 306: /* lambda_list: lambda_list "<identifier>"  */
#line 937 "src/gwion.y"
                    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){ .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_END(Arg, (yyval.arg_list), (yyvsp[-1].arg_list), a);
}
#line 4370 "src/parser.c"
    break;

  case 307: /* lambda_arg: "\\" lambda_list  */
#line 942 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4376 "src/parser.c"
    break;

  case 308: /* lambda_arg: "\\"  */
#line 942 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4382 "src/parser.c"
    break;

  case 311: /* tmplarg: type_decl_array  */
#line 945 "src/gwion.y"
                         {
    (yyval.tmplarg) = (TmplArg) { .d = { .td = (yyvsp[0].type_decl)}, .type = tmplarg_td};
  }
#line 4390 "src/parser.c"
    break;

  case 312: /* tmplarg: tmplarg_exp  */
#line 948 "src/gwion.y"
                {
    (yyval.tmplarg) = (TmplArg) { .d = { .exp = (yyvsp[0].exp)}, .type = tmplarg_exp};
  }
#line 4398 "src/parser.c"
    break;

  case 313: /* tmplarg_list: tmplarg  */
#line 952 "src/gwion.y"
                           { YYLIST_INI(TmplArg, (yyval.tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4404 "src/parser.c"
    break;

  case 314: /* tmplarg_list: tmplarg_list "," tmplarg  */
#line 953 "src/gwion.y"
                           { YYLIST_END(TmplArg, (yyval.tmplarg_list), (yyvsp[-2].tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4410 "src/parser.c"
    break;

  case 315: /* call_paren: "(" exp ")"  */
#line 956 "src/gwion.y"
            { (yyval.exp) = (yyvsp[-1].exp); }
#line 4416 "src/parser.c"
    break;

  case 316: /* call_paren: "(" ")"  */
#line 957 "src/gwion.y"
        { (yyval.exp) = NULL; }
#line 4422 "src/parser.c"
    break;

  case 319: /* dot_exp: post_exp "." "<identifier>"  */
#line 961 "src/gwion.y"
                         {
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), MK_TAG((yyvsp[0].sym), (yylsp[0])), (yyloc));
}
#line 4430 "src/parser.c"
    break;

  case 321: /* post_exp: post_exp array  */
#line 967 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4436 "src/parser.c"
    break;

  case 322: /* post_exp: post_exp range  */
#line 969 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4442 "src/parser.c"
    break;

  case 323: /* post_exp: post_exp call_template call_paren  */
#line 971 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].tmplarg_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].tmplarg_list)); }
#line 4449 "src/parser.c"
    break;

  case 324: /* post_exp: post_exp post_op  */
#line 974 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4455 "src/parser.c"
    break;

  case 325: /* post_exp: dot_exp  */
#line 975 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4461 "src/parser.c"
    break;

  case 326: /* interp_exp: "<interp string end>"  */
#line 979 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4467 "src/parser.c"
    break;

  case 327: /* interp_exp: "<interp string lit>" interp_exp  */
#line 980 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4473 "src/parser.c"
    break;

  case 328: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 981 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4479 "src/parser.c"
    break;

  case 329: /* interp: "${" interp_exp  */
#line 983 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4485 "src/parser.c"
    break;

  case 330: /* interp: interp "${" interp_exp  */
#line 984 "src/gwion.y"
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
#line 4500 "src/parser.c"
    break;

  case 331: /* capture: "<identifier>"  */
#line 995 "src/gwion.y"
            { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }};}
#line 4506 "src/parser.c"
    break;

  case 332: /* capture: "&" "<identifier>"  */
#line 995 "src/gwion.y"
                                                                           { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }, .is_ref = true }; }
#line 4512 "src/parser.c"
    break;

  case 333: /* capture_list: capture  */
#line 997 "src/gwion.y"
                       { YYLIST_INI(Capture, (yyval.captures), (yyvsp[0].capture)); }
#line 4518 "src/parser.c"
    break;

  case 334: /* capture_list: capture_list capture  */
#line 998 "src/gwion.y"
                       { YYLIST_END(Capture, (yyval.captures), (yyvsp[-1].captures), (yyvsp[0].capture)); }
#line 4524 "src/parser.c"
    break;

  case 335: /* captures: ":" capture_list ":"  */
#line 999 "src/gwion.y"
                               { (yyval.captures) = (yyvsp[-1].captures); }
#line 4530 "src/parser.c"
    break;

  case 336: /* captures: %empty  */
#line 999 "src/gwion.y"
                                                      { (yyval.captures) = NULL; }
#line 4536 "src/parser.c"
    break;

  case 339: /* basic_exp: number  */
#line 1003 "src/gwion.y"
                         {
  (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc)); 
  (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4545 "src/parser.c"
    break;

  case 340: /* basic_exp: "<float>"  */
#line 1007 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4551 "src/parser.c"
    break;

  case 341: /* basic_exp: "<litteral string>"  */
#line 1008 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4557 "src/parser.c"
    break;

  case 342: /* basic_exp: "<litteral char>"  */
#line 1009 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4563 "src/parser.c"
    break;

  case 343: /* prim_exp: "<identifier>"  */
#line 1012 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4569 "src/parser.c"
    break;

  case 345: /* prim_exp: interp  */
#line 1014 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4575 "src/parser.c"
    break;

  case 346: /* prim_exp: "[" opt_exp array_lit_ed  */
#line 1015 "src/gwion.y"
                             { 
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4584 "src/parser.c"
    break;

  case 347: /* prim_exp: "{" dict_list "}"  */
#line 1019 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4590 "src/parser.c"
    break;

  case 348: /* prim_exp: range  */
#line 1020 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4596 "src/parser.c"
    break;

  case 349: /* prim_exp: "<<<" exp ">>>"  */
#line 1021 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4602 "src/parser.c"
    break;

  case 350: /* prim_exp: "(" exp ")"  */
#line 1022 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4608 "src/parser.c"
    break;

  case 351: /* prim_exp: "`foo`"  */
#line 1023 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last =  { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4619 "src/parser.c"
    break;

  case 352: /* prim_exp: lambda_arg captures code_list  */
#line 1029 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4625 "src/parser.c"
    break;

  case 353: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1030 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4631 "src/parser.c"
    break;

  case 354: /* prim_exp: "(" op_op ")"  */
#line 1031 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4637 "src/parser.c"
    break;

  case 355: /* prim_exp: "perform" opt_id  */
#line 1032 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4643 "src/parser.c"
    break;

  case 356: /* prim_exp: "(" ")"  */
#line 1033 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4649 "src/parser.c"
    break;


#line 4653 "src/parser.c"

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

#line 1035 "src/gwion.y"

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
