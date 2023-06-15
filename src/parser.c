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
  YYSYMBOL_DECIMAL = 61,                   /* DECIMAL  */
  YYSYMBOL_BINARY = 62,                    /* BINARY  */
  YYSYMBOL_HEXA = 63,                      /* HEXA  */
  YYSYMBOL_OCTAL = 64,                     /* OCTAL  */
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
  YYSYMBOL_PP_IMPORT = 81,                 /* "import"  */
  YYSYMBOL_SPREAD = 82,                    /* "}..."  */
  YYSYMBOL_INTERP_LIT = 83,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 84,                /* "<interp string end>"  */
  YYSYMBOL_85_operator_id_ = 85,           /* "@<operator id>"  */
  YYSYMBOL_ID = 86,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 87,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 88,                  /* "++"  */
  YYSYMBOL_MINUS = 89,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 90,                /* "--"  */
  YYSYMBOL_TIMES = 91,                     /* "*"  */
  YYSYMBOL_DIVIDE = 92,                    /* "/"  */
  YYSYMBOL_PERCENT = 93,                   /* "%"  */
  YYSYMBOL_DOLLAR = 94,                    /* "$"  */
  YYSYMBOL_QUESTION = 95,                  /* "?"  */
  YYSYMBOL_OPTIONS = 96,                   /* OPTIONS  */
  YYSYMBOL_COLON = 97,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 98,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 99,             /* "?:"  */
  YYSYMBOL_NEW = 100,                      /* "new"  */
  YYSYMBOL_SPORK = 101,                    /* "spork"  */
  YYSYMBOL_FORK = 102,                     /* "fork"  */
  YYSYMBOL_L_HACK = 103,                   /* "<<<"  */
  YYSYMBOL_R_HACK = 104,                   /* ">>>"  */
  YYSYMBOL_AND = 105,                      /* "&&"  */
  YYSYMBOL_EQ = 106,                       /* "=="  */
  YYSYMBOL_GE = 107,                       /* ">="  */
  YYSYMBOL_GT = 108,                       /* ">"  */
  YYSYMBOL_LE = 109,                       /* "<="  */
  YYSYMBOL_LT = 110,                       /* "<"  */
  YYSYMBOL_NEQ = 111,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 112,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 113,              /* ">>"  */
  YYSYMBOL_S_AND = 114,                    /* "&"  */
  YYSYMBOL_S_OR = 115,                     /* "|"  */
  YYSYMBOL_S_XOR = 116,                    /* "^"  */
  YYSYMBOL_OR = 117,                       /* "||"  */
  YYSYMBOL_TMPL = 118,                     /* ":["  */
  YYSYMBOL_TILDA = 119,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 120,              /* "!"  */
  YYSYMBOL_AROBASE = 121,                  /* "@"  */
  YYSYMBOL_DYNOP = 122,                    /* "<dynamic_operator>"  */
  YYSYMBOL_LOCALE_EXP = 123,               /* "`foo`"  */
  YYSYMBOL_RANGE_EMPTY = 124,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 125,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 126,                   /* UTIMES  */
  YYSYMBOL_127_ = 127,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 128,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 129,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 130,                 /* $accept  */
  YYSYMBOL_prg = 131,                      /* prg  */
  YYSYMBOL_ast = 132,                      /* ast  */
  YYSYMBOL_section = 133,                  /* section  */
  YYSYMBOL_class_flag = 134,               /* class_flag  */
  YYSYMBOL_class_def = 135,                /* class_def  */
  YYSYMBOL_trait_stmt = 136,               /* trait_stmt  */
  YYSYMBOL_trait_stmt_list = 137,          /* trait_stmt_list  */
  YYSYMBOL_trait_section = 138,            /* trait_section  */
  YYSYMBOL_trait_ast = 139,                /* trait_ast  */
  YYSYMBOL_trait_body = 140,               /* trait_body  */
  YYSYMBOL_trait_def = 141,                /* trait_def  */
  YYSYMBOL_integer = 142,                  /* integer  */
  YYSYMBOL_number = 143,                   /* number  */
  YYSYMBOL_decimal = 144,                  /* decimal  */
  YYSYMBOL_prim_def = 145,                 /* prim_def  */
  YYSYMBOL_class_ext = 146,                /* class_ext  */
  YYSYMBOL_traits = 147,                   /* traits  */
  YYSYMBOL_extend_def = 148,               /* extend_def  */
  YYSYMBOL_class_body = 149,               /* class_body  */
  YYSYMBOL_id_list = 150,                  /* id_list  */
  YYSYMBOL_specialized_list = 151,         /* specialized_list  */
  YYSYMBOL_stmt_list = 152,                /* stmt_list  */
  YYSYMBOL_fptr_base = 153,                /* fptr_base  */
  YYSYMBOL__func_effects = 154,            /* _func_effects  */
  YYSYMBOL_func_effects = 155,             /* func_effects  */
  YYSYMBOL_func_base = 156,                /* func_base  */
  YYSYMBOL_fptr_def = 157,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 158,             /* typedef_when  */
  YYSYMBOL_type_def_type = 159,            /* type_def_type  */
  YYSYMBOL_type_def = 160,                 /* type_def  */
  YYSYMBOL_type_decl_array = 161,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 162,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 163,          /* type_decl_empty  */
  YYSYMBOL_arg = 164,                      /* arg  */
  YYSYMBOL_arg_list = 165,                 /* arg_list  */
  YYSYMBOL_locale_arg = 166,               /* locale_arg  */
  YYSYMBOL_locale_list = 167,              /* locale_list  */
  YYSYMBOL_fptr_arg = 168,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 169,                /* fptr_list  */
  YYSYMBOL_code_stmt = 170,                /* code_stmt  */
  YYSYMBOL_code_list = 171,                /* code_list  */
  YYSYMBOL_stmt_pp = 172,                  /* stmt_pp  */
  YYSYMBOL_stmt = 173,                     /* stmt  */
  YYSYMBOL_spread_stmt = 174,              /* spread_stmt  */
  YYSYMBOL_175_1 = 175,                    /* $@1  */
  YYSYMBOL_retry_stmt = 176,               /* retry_stmt  */
  YYSYMBOL_handler = 177,                  /* handler  */
  YYSYMBOL_178_2 = 178,                    /* $@2  */
  YYSYMBOL_handler_list = 179,             /* handler_list  */
  YYSYMBOL_try_stmt = 180,                 /* try_stmt  */
  YYSYMBOL_opt_id = 181,                   /* opt_id  */
  YYSYMBOL_opt_comma = 182,                /* opt_comma  */
  YYSYMBOL_enum_value = 183,               /* enum_value  */
  YYSYMBOL_enum_list = 184,                /* enum_list  */
  YYSYMBOL_enum_def = 185,                 /* enum_def  */
  YYSYMBOL_when_exp = 186,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 187,          /* match_case_stmt  */
  YYSYMBOL_match_list = 188,               /* match_list  */
  YYSYMBOL_match_stmt = 189,               /* match_stmt  */
  YYSYMBOL_flow = 190,                     /* flow  */
  YYSYMBOL_loop_stmt = 191,                /* loop_stmt  */
  YYSYMBOL_defer_stmt = 192,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 193,           /* selection_stmt  */
  YYSYMBOL_breaks = 194,                   /* breaks  */
  YYSYMBOL_jump_stmt = 195,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 196,                 /* exp_stmt  */
  YYSYMBOL_exp = 197,                      /* exp  */
  YYSYMBOL_binary_exp = 198,               /* binary_exp  */
  YYSYMBOL_call_template = 199,            /* call_template  */
  YYSYMBOL_op = 200,                       /* op  */
  YYSYMBOL_array_exp = 201,                /* array_exp  */
  YYSYMBOL_array_empty = 202,              /* array_empty  */
  YYSYMBOL_dict_list = 203,                /* dict_list  */
  YYSYMBOL_range = 204,                    /* range  */
  YYSYMBOL_array = 205,                    /* array  */
  YYSYMBOL_decl_exp = 206,                 /* decl_exp  */
  YYSYMBOL_func_args = 207,                /* func_args  */
  YYSYMBOL_fptr_args = 208,                /* fptr_args  */
  YYSYMBOL_decl_template = 209,            /* decl_template  */
  YYSYMBOL_global = 210,                   /* global  */
  YYSYMBOL_opt_global = 211,               /* opt_global  */
  YYSYMBOL_storage_flag = 212,             /* storage_flag  */
  YYSYMBOL_access_flag = 213,              /* access_flag  */
  YYSYMBOL_flag = 214,                     /* flag  */
  YYSYMBOL_final = 215,                    /* final  */
  YYSYMBOL_modifier = 216,                 /* modifier  */
  YYSYMBOL_func_def_base = 217,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 218,            /* abstract_fdef  */
  YYSYMBOL_op_op = 219,                    /* op_op  */
  YYSYMBOL_op_base = 220,                  /* op_base  */
  YYSYMBOL_operator = 221,                 /* operator  */
  YYSYMBOL_op_def = 222,                   /* op_def  */
  YYSYMBOL_func_def = 223,                 /* func_def  */
  YYSYMBOL_type_decl_base = 224,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 225,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 226,         /* type_decl_noflag  */
  YYSYMBOL_option = 227,                   /* option  */
  YYSYMBOL_type_decl_opt = 228,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 229,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 230,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 231,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 232,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 233,               /* union_decl  */
  YYSYMBOL_union_list = 234,               /* union_list  */
  YYSYMBOL_union_def = 235,                /* union_def  */
  YYSYMBOL_var_decl = 236,                 /* var_decl  */
  YYSYMBOL_arg_decl = 237,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 238,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 239,                    /* eq_op  */
  YYSYMBOL_rel_op = 240,                   /* rel_op  */
  YYSYMBOL_shift_op = 241,                 /* shift_op  */
  YYSYMBOL_add_op = 242,                   /* add_op  */
  YYSYMBOL_mul_op = 243,                   /* mul_op  */
  YYSYMBOL_opt_exp = 244,                  /* opt_exp  */
  YYSYMBOL_con_exp = 245,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 246,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 247,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 248,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 249,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 250,                  /* and_exp  */
  YYSYMBOL_eq_exp = 251,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 252,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 253,                /* shift_exp  */
  YYSYMBOL_add_exp = 254,                  /* add_exp  */
  YYSYMBOL_mul_exp = 255,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 256,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 257,                 /* cast_exp  */
  YYSYMBOL_unary_op = 258,                 /* unary_op  */
  YYSYMBOL_unary_exp = 259,                /* unary_exp  */
  YYSYMBOL_lambda_list = 260,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 261,               /* lambda_arg  */
  YYSYMBOL_type_list = 262,                /* type_list  */
  YYSYMBOL_call_paren = 263,               /* call_paren  */
  YYSYMBOL_post_op = 264,                  /* post_op  */
  YYSYMBOL_dot_exp = 265,                  /* dot_exp  */
  YYSYMBOL_post_exp = 266,                 /* post_exp  */
  YYSYMBOL_interp_exp = 267,               /* interp_exp  */
  YYSYMBOL_interp = 268,                   /* interp  */
  YYSYMBOL_capture = 269,                  /* capture  */
  YYSYMBOL__captures = 270,                /* _captures  */
  YYSYMBOL_captures = 271,                 /* captures  */
  YYSYMBOL_array_lit_end = 272,            /* array_lit_end  */
  YYSYMBOL_prim_exp = 273                  /* prim_exp  */
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
#define YYFINAL  230
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2694

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  144
/* YYNRULES -- Number of rules.  */
#define YYNRULES  358
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  638

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
       0,   188,   188,   189,   192,   196,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   214,   216,   223,   232,
     236,   237,   241,   247,   248,   252,   256,   261,   261,   263,
     269,   270,   271,   272,   274,   281,   288,   292,   292,   293,
     293,   295,   300,   300,   302,   307,   313,   321,   327,   331,
     336,   339,   339,   340,   340,   342,   345,   351,   351,   352,
     352,   353,   362,   362,   364,   368,   373,   377,   382,   387,
     396,   407,   415,   416,   426,   428,   432,   438,   440,   444,
     445,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   461,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   478,   478,   488,   493,   493,
     494,   499,   515,   520,   520,   521,   521,   524,   525,   531,
     536,   542,   547,   547,   550,   562,   566,   571,   582,   593,
     594,   598,   607,   617,   627,   638,   651,   669,   678,   692,
     706,   715,   726,   726,   728,   733,   737,   742,   748,   753,
     759,   760,   771,   772,   773,   774,   777,   777,   779,   779,
     779,   779,   779,   782,   783,   786,   790,   791,   792,   796,
     797,   800,   801,   802,   806,   806,   807,   808,   809,   815,
     815,   816,   816,   818,   819,   825,   830,   832,   833,   833,
     835,   835,   837,   838,   841,   842,   843,   844,   847,   847,
     849,   849,   852,   857,   864,   870,   878,   887,   887,   887,
     887,   887,   889,   899,   908,   918,   924,   924,   926,   928,
     930,   933,   933,   933,   934,   940,   947,   956,   957,   971,
     972,   976,   977,   980,   980,   980,   981,   982,   982,   985,
     986,   988,   988,   990,   990,   993,   997,   999,  1003,  1009,
    1018,  1020,  1021,  1021,  1023,  1023,  1024,  1024,  1024,  1024,
    1025,  1025,  1026,  1026,  1027,  1027,  1027,  1029,  1029,  1030,
    1031,  1033,  1036,  1036,  1037,  1037,  1038,  1038,  1039,  1039,
    1040,  1040,  1041,  1041,  1042,  1042,  1043,  1043,  1044,  1044,
    1045,  1045,  1046,  1046,  1048,  1048,  1051,  1051,  1051,  1052,
    1052,  1055,  1056,  1057,  1058,  1059,  1062,  1063,  1064,  1065,
    1066,  1067,  1070,  1075,  1080,  1080,  1083,  1087,  1093,  1093,
    1095,  1095,  1097,  1106,  1107,  1109,  1111,  1114,  1116,  1120,
    1121,  1122,  1124,  1125,  1136,  1136,  1138,  1139,  1140,  1140,
    1141,  1141,  1143,  1144,  1147,  1148,  1149,  1150,  1151,  1159,
    1160,  1161,  1162,  1163,  1169,  1170,  1171,  1172,  1173
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
  "OPID_A", "LOCALE", "LOCALE_INI", "LOCALE_END", "late", "DECIMAL",
  "BINARY", "HEXA", "OCTAL", "<integer>", "<float>", "<litteral string>",
  "<litteral char>", "${", "INTERP_EXP", "<comment>", "#include",
  "#define", "#pragma", "#undef", "#ifdef", "#ifndef", "#else", "#if",
  "\n", "import", "}...", "<interp string lit>", "<interp string end>",
  "@<operator id>", "<identifier>", "+", "++", "-", "--", "*", "/", "%",
  "$", "?", "OPTIONS", ":", "::", "?:", "new", "spork", "fork", "<<<",
  ">>>", "&&", "==", ">=", ">", "<=", "<", "!=", "<<", ">>", "&", "|", "^",
  "||", ":[", "~", "!", "@", "<dynamic_operator>", "`foo`", "RANGE_EMPTY",
  "UMINUS", "UTIMES", "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg",
  "ast", "section", "class_flag", "class_def", "trait_stmt",
  "trait_stmt_list", "trait_section", "trait_ast", "trait_body",
  "trait_def", "integer", "number", "decimal", "prim_def", "class_ext",
  "traits", "extend_def", "class_body", "id_list", "specialized_list",
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
  "type_decl_flag", "opt_var", "type_decl_flag2", "union_decl",
  "union_list", "union_def", "var_decl", "arg_decl", "fptr_arg_decl",
  "eq_op", "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp",
  "cast_exp", "unary_op", "unary_exp", "lambda_list", "lambda_arg",
  "type_list", "call_paren", "post_op", "dot_exp", "post_exp",
  "interp_exp", "interp", "capture", "_captures", "captures",
  "array_lit_end", "prim_exp", YY_NULLPTR
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384
};
#endif

#define YYPACT_NINF (-472)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-265)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     616,  -472,  1715,  1878,   727,   135,  -472,    45,  -472,  1168,
    -472,    78,   123,   150,  2439,   135,  1572,  -472,  -472,  1168,
     115,   204,   135,   135,   192,   273,   192,   135,  -472,  -472,
     135,   135,  -472,   148,  1168,   151,    -6,   158,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  1834,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,  -472,   273,   273,   462,   462,  2439,  -472,  -472,
    -472,   247,   616,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    1168,  -472,   135,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
    -472,  -472,   256,  -472,  -472,  -472,   130,  -472,  -472,   281,
      27,  -472,  -472,  -472,  -472,   266,  -472,  -472,  -472,   135,
    -472,  -472,   -18,   174,   173,   211,   215,   -33,   190,   147,
     117,   149,   232,   238,  2571,  -472,   237,  -472,  -472,    96,
     269,  -472,  -472,  2439,  -472,   329,   333,  -472,  -472,  -472,
    -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,  -472,
     334,  -472,   337,  -472,  -472,  -472,  -472,  2439,   248,   258,
    -472,   838,    23,   336,  -472,  -472,  -472,  -472,   339,  -472,
    -472,   245,   260,  2439,   197,  2505,  1616,   264,   341,   272,
    -472,   346,   328,  -472,  -472,  -472,   275,   263,   277,  -472,
     279,   135,  -472,    46,  -472,   271,   252,   325,   224,  -472,
     364,   102,  -472,   287,   369,   273,   289,   280,  -472,  -472,
     290,   374,   295,  1977,  1834,  -472,   314,  -472,  -472,  -472,
     383,   949,   -27,  -472,  -472,   379,  -472,  -472,   379,   291,
    -472,  -472,  -472,   273,  2439,  -472,  -472,   388,  -472,  2439,
    2439,  2439,  2439,   312,   339,   327,    58,   273,   273,  2439,
    2571,  2571,  2571,  2571,  2571,  2571,  -472,  -472,  2571,  2571,
    2571,  -472,  2571,  -472,  2571,  2571,   273,  -472,   384,  1878,
     318,   273,   401,  -472,  -472,  -472,  1834,   142,  -472,  -472,
     399,  2043,  -472,  -472,  -472,  -472,  2439,  -472,    52,    88,
    -472,   273,  -472,   273,   402,  2439,   407,    29,  1616,    66,
     390,   412,  -472,  -472,  -472,   328,   306,   385,  -472,  -472,
     306,   331,   273,   252,   343,  -472,   102,  -472,  -472,  -472,
    2109,  -472,   418,  -472,  -472,   251,   194,   410,   344,   306,
     343,  -472,   273,   437,  -472,   387,  -472,  1834,  2439,  -472,
    1060,  -472,   357,  -472,   -30,   949,  -472,  -472,  -472,   365,
     444,  -472,  -472,  -472,  -472,  -472,   339,   451,   103,   339,
     306,   306,  -472,  -472,   306,    50,  -472,   358,  -472,   174,
     173,   211,   215,   -33,   190,   147,   117,   149,   232,   238,
    -472,   949,  -472,    20,  -472,  -472,    56,  2175,  -472,  -472,
    -472,  -472,   448,    35,  -472,   371,  -472,   213,  -472,  -472,
     372,   375,  1168,   459,  2439,  1168,  2241,   377,   452,  2439,
    -472,   179,   230,   115,  -472,    -7,   423,  -472,   331,   343,
     167,   306,  -472,  -472,   320,  -472,  -472,   460,  2307,  -472,
     467,  -472,   371,  -472,   217,   393,   394,   468,   306,   463,
      34,  -472,   472,   476,   273,  -472,  -472,   477,  -472,  -472,
    -472,  -472,   306,  1168,   481,  -472,  -472,  -472,  -472,   480,
     483,   485,  2439,  -472,  -472,  2571,    25,   479,   273,  -472,
    -472,   486,  -472,  2439,  -472,   397,   273,  -472,   306,   306,
     487,  -472,    39,  -472,  1168,   489,   404,  -472,  2439,   488,
     471,  -472,  -472,   381,  -472,   501,  1168,   502,   331,   101,
     273,   331,   499,   507,  -472,  1370,  -472,   369,  -472,   427,
    -472,  -472,  -472,  -472,   273,  -472,  -472,  -472,  -472,  -472,
     276,  -472,   273,   379,   508,  -472,   491,  -472,  -472,   273,
     273,   273,   510,  -472,  -472,  2373,  -472,  -472,  -472,  -472,
    2439,  -472,   369,  -472,  1168,  1168,  -472,  1168,   452,    47,
    2439,   422,  1168,   434,   230,   511,  -472,  -472,  -472,    16,
    -472,  -472,   517,   616,  -472,  1471,  -472,  1269,  -472,  -472,
    -472,   410,  -472,  -472,   518,   446,  -472,   176,   457,  -472,
    -472,   379,  2439,   530,   536,   538,   539,   456,  -472,   -11,
     543,  -472,  -472,  -472,  2439,  1168,  -472,  1168,  -472,  -472,
    -472,  -472,   541,   331,   616,   616,   544,  -472,  -472,  -472,
     551,  -472,   555,  -472,  -472,  -472,  -472,   -11,  -472,   273,
    -472,  -472,  -472,  -472,    57,  -472,  1168,  -472,  -472,   549,
    -472,  -472,  -472,   560,  1168,  -472,  -472,  -472
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   149,     0,   268,     0,   197,   243,     0,   129,     0,
     130,     0,     0,     0,     0,   197,     0,   142,   143,     0,
     114,     0,   197,   197,   189,     0,   216,   197,    59,    60,
     197,   197,   240,     0,     0,   315,     0,     0,   239,    30,
      31,    32,    33,   344,   346,   347,     0,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,   342,   320,
     296,   321,   297,     0,     0,     0,     0,     0,   300,   299,
     353,     0,     2,     4,     8,     9,    34,   343,    15,    10,
       6,    13,   197,    14,    97,   100,    48,   104,   103,   102,
      11,    98,     0,    95,   101,    96,     0,    99,    94,     0,
     150,   350,   152,   221,   222,     0,   223,     7,   244,   197,
      12,   176,   269,   272,   274,   276,   278,   280,   282,   284,
     286,   288,   290,   292,     0,   294,   339,   298,   328,   301,
     345,   323,   358,     0,   262,   296,   297,   265,   266,   162,
     158,   259,   257,   258,   256,   159,   260,   261,   160,   161,
       0,   207,     0,   209,   208,   211,   210,     0,   267,     0,
      77,     0,   150,     0,   190,   187,   192,   193,     0,   191,
     195,   194,   199,     0,     0,     0,     0,     0,     0,     0,
     145,     0,     0,   113,   357,   107,     0,   199,     0,   188,
       0,   197,   227,     0,    65,     0,   157,   231,   235,   237,
      63,     0,   217,     0,     0,     0,     0,     0,   139,   312,
     314,     0,     0,     0,     0,   329,     0,   332,   311,    64,
     306,     0,     0,   307,   303,     0,   308,   304,     0,     0,
       1,     5,    49,     0,     0,   147,    35,     0,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   268,
       0,     0,     0,     0,     0,     0,   254,   255,     0,     0,
       0,   263,     0,   264,     0,     0,     0,   302,     0,     0,
       0,     0,     0,   324,   325,   327,     0,     0,   352,   356,
       0,     0,   341,   340,   348,    78,     0,   349,     0,     0,
     196,     0,   198,     0,     0,     0,   342,     0,     0,     0,
       0,     0,   144,   108,   110,   112,   186,   199,   201,    16,
     186,    39,     0,   157,     0,   229,     0,   233,   234,   236,
       0,   174,   175,    62,   238,     0,     0,    53,     0,   186,
       0,   313,    73,     0,    93,     0,   330,     0,   268,    79,
       0,   334,     0,   336,     0,     0,   309,   310,   351,     0,
       0,   146,   151,   155,   153,   154,     0,     0,     0,     0,
     186,   186,   219,   218,   186,     0,   267,     0,   271,   273,
     275,   277,   279,   281,   283,   285,   287,   289,   291,   293,
     295,     0,   354,     0,   322,   316,     0,     0,   326,   333,
     173,   172,     0,   169,   180,     0,    68,     0,   203,   202,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
     125,     0,     0,   114,   111,     0,    38,   200,    39,     0,
       0,   186,   230,    44,     0,   232,   166,     0,     0,   168,
       0,   182,   253,    75,     0,     0,    54,     0,   186,     0,
       0,    70,    72,     0,    73,    92,   331,     0,    80,   335,
     338,   337,   186,     0,     0,   220,   225,   224,   215,     0,
       0,     0,   268,   250,   177,     0,   150,   163,     0,   156,
     319,     0,   171,     0,   251,    67,     0,   179,   186,   186,
     140,   132,     0,   137,     0,     0,     0,   241,     0,   123,
     128,   126,   117,     0,   119,   116,     0,     0,    39,     0,
       0,    39,     0,    40,    28,     0,    29,     0,    41,     0,
     167,    36,   252,    74,     0,   181,    51,    52,    56,    50,
       0,   105,     0,     0,     0,   305,    57,   131,   226,     0,
       0,     0,     0,   270,   355,     0,   164,   317,   318,   170,
       0,    69,     0,    55,     0,     0,   133,     0,   242,     0,
       0,     0,     0,     0,   115,     0,   109,   185,    46,     0,
     183,    37,     0,    43,    21,    23,    25,     0,    20,    19,
      24,    53,    45,    76,   227,     0,   247,     0,     0,    71,
     205,     0,     0,     0,     0,     0,     0,     0,   165,    66,
       0,   141,   138,   134,     0,     0,   122,     0,   127,   118,
     120,   121,     0,    39,    43,    42,     0,    22,    27,    26,
       0,   245,     0,   249,   248,   106,   204,    58,    61,     0,
     213,   214,   178,   206,     0,   135,   124,   184,    47,     0,
      18,   228,   246,     0,     0,    17,   212,   136
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -472,  -472,   547,   -68,    99,  -472,     2,  -472,     3,  -472,
    -472,  -472,  -472,   -90,   243,  -472,  -472,  -406,  -472,   -35,
    -304,  -472,    -3,  -472,  -472,     4,  -472,  -472,  -472,  -472,
    -472,   -53,    71,   -16,  -273,  -472,  -472,   128,    59,  -472,
    -472,   -63,  -451,    -9,  -472,  -472,  -472,   274,  -472,  -472,
    -472,   161,  -472,    22,  -472,  -472,  -472,   166,  -472,  -472,
     406,  -472,  -472,  -472,  -472,  -472,  -168,    72,     1,  -172,
    -472,  -193,  -472,   105,   455,  -472,    11,  -192,  -470,  -267,
     172,  -472,   416,  -472,    18,  -165,  -472,  -472,  -472,   345,
     348,  -472,  -472,  -471,   395,  -472,   282,  -472,   391,  -472,
     -23,    41,  -472,    24,  -472,  -472,     6,   165,  -472,  -472,
    -105,  -103,  -100,  -104,  -230,  -232,  -472,   349,   347,   350,
     351,   353,   352,   354,   342,   356,   340,   355,   -84,     0,
    -472,  -472,  -472,  -472,   -87,  -472,  -472,  -200,  -472,   262,
    -472,   -36,  -472,  -472
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    71,   605,    73,   186,    74,   564,   565,   566,   567,
     506,    75,    76,    77,   237,    78,   501,   420,    79,   606,
     424,   499,    80,   204,   436,   437,   168,    81,   583,    82,
      83,   194,   220,   395,   441,   397,   442,   443,   433,   434,
      84,   223,    85,    86,    87,   578,    88,   304,   413,   305,
      89,   184,   555,   494,   495,    90,   551,   410,   411,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   272,
     151,   273,   322,   163,   101,   323,   102,   289,   327,   416,
     169,   190,   170,   171,   187,   293,   309,   103,   104,   152,
     246,   105,   106,   107,   196,   197,   198,   319,   199,   200,
     108,   488,   109,   576,   577,   110,   464,   475,   513,   258,
     153,   154,   155,   156,   159,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     210,   126,   386,   388,   127,   128,   129,   217,   130,   343,
     344,   225,   284,   131
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     174,   161,   201,   226,   231,   162,   236,   321,   298,   195,
     182,   219,   502,   259,   336,   396,   260,   264,   368,   367,
     262,   247,   308,   172,   315,   208,   440,   239,   467,   239,
     228,   239,   165,   179,   570,   405,   534,   571,   509,   473,
     201,   201,   275,   418,   521,   545,   497,   218,   205,   206,
     173,   191,   358,   595,   568,   462,   341,   191,   394,   341,
     468,   362,   439,   634,   469,   224,   227,   450,   345,   602,
     407,   232,   590,   256,   150,   158,   389,   249,   257,   498,
     211,   250,   201,   175,   342,   240,   178,   342,   181,   245,
     268,   398,   558,   459,   460,   562,   570,   461,   345,   251,
     233,  -157,   603,   269,    32,   559,   456,   191,   447,   560,
     241,   242,    38,   345,   568,   503,   568,   281,   216,   240,
     286,   240,   188,   240,   267,   240,   203,   248,   176,   429,
     406,   240,   192,   235,   277,   240,   463,   446,   192,   229,
     270,   422,   417,   240,   241,   242,   241,   242,   241,   242,
     241,   242,   232,   240,   507,   177,   241,   242,   361,   247,
     241,   242,   346,   408,   454,   347,   193,   458,   241,   242,
     504,   519,   164,   165,   166,   167,   297,   505,   241,   242,
     349,   191,   201,   363,    59,   526,    61,   613,   192,   328,
     490,    39,    40,    41,    42,   365,   189,   628,   202,   191,
     431,   183,   409,   541,   134,   382,   261,   185,   212,   312,
     201,   542,   543,     8,   271,    10,   193,   476,   340,   477,
     201,   514,   162,   515,   201,   201,   399,   245,    32,   280,
     165,   364,   532,   533,   207,   236,    38,   209,   240,   286,
     263,   137,   138,   201,   213,   294,    32,   230,   201,   579,
     380,   353,   354,   355,    38,   385,   584,   585,   586,   146,
     147,   234,   574,   241,   242,   201,   282,   283,   201,   259,
     201,   191,   260,   264,   536,   400,   262,   401,   191,   252,
     192,   191,   164,   165,   238,   335,   216,   393,   253,   201,
     193,    39,    40,    41,    42,   457,   421,   141,   142,   143,
     144,   291,   292,   201,   307,   292,   350,   243,   193,   201,
     432,   352,    39,    40,    41,    42,   492,   191,    32,   317,
     318,   366,   493,   508,   509,    32,    38,   254,    32,   255,
     265,   232,   266,    38,   222,  -263,    38,   569,   276,  -264,
     278,   383,   340,   279,   288,   281,   633,   287,   216,   302,
     299,   300,   192,   392,    59,    60,    61,    62,   301,   192,
     303,   306,   574,   310,    32,   311,   244,   403,   314,   316,
     271,   320,    38,   325,   326,   329,   331,   330,   340,   332,
     193,   333,   466,   359,   337,    68,    69,   193,   338,   345,
     193,   351,   427,   480,   381,   348,   483,   569,   192,   569,
      59,    60,    61,    62,   384,   482,   387,   390,   402,   216,
     366,   404,   356,   409,   134,    59,   261,    61,   263,   137,
     138,   201,   412,   139,   415,   428,   193,   292,   419,   423,
     438,    68,    69,   140,   141,   142,   143,   144,   145,   146,
     147,   435,   444,   449,   527,   201,   445,   219,   148,   149,
     453,   452,   537,   201,   455,   465,   472,   474,   478,   471,
     580,   479,   481,   486,   493,   487,   500,     2,   467,     3,
     511,   518,   221,   520,   277,   546,   522,   201,   485,   516,
     517,   489,   523,   525,   528,   529,   535,   556,   530,   549,
     531,   201,   538,    20,   540,   547,   552,   201,   432,   201,
     427,   548,   544,   553,   575,   554,   201,   201,   201,   563,
     557,   509,   550,   572,   581,   582,   587,    35,   616,   597,
     599,   611,   601,    39,    40,    41,    42,   604,    43,    44,
      45,    46,   612,   618,   366,   591,   592,   231,   593,   615,
     619,   589,   463,   598,   620,   621,   623,    72,    58,   627,
      59,    60,    61,    62,   201,   630,    63,   631,   632,   222,
     635,   575,    64,    65,    66,    67,   636,   607,   430,   629,
     609,   561,   524,   573,   496,   610,   600,   491,   539,   414,
     295,    68,    69,   617,   274,    70,   625,   290,   313,   594,
     360,   357,   324,   622,   626,   624,   201,   512,   425,   370,
     369,   614,   376,   371,   378,   372,   451,   427,   373,     0,
     374,     0,     0,   375,     0,     0,     0,   232,   377,     1,
     379,     2,   596,     3,     0,   637,     4,     0,     5,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,    15,    16,    17,    18,    19,    20,     0,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,    25,
       0,    26,    27,    28,    29,    30,     0,    31,    32,    33,
      34,    35,     0,    36,    37,     0,    38,    39,    40,    41,
      42,     0,    43,    44,    45,    46,     0,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     0,     0,
       0,     0,    58,     0,    59,    60,    61,    62,     0,     0,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,    68,    69,     4,   160,    70,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,     0,     0,    37,     0,    38,    39,    40,
      41,    42,     0,    43,    44,    45,    46,     0,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,     0,
       0,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,    63,     0,     0,     0,     0,     0,    64,    65,    66,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,    68,    69,     4,   285,
      70,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,     0,     0,    37,     0,    38,    39,
      40,    41,    42,     0,    43,    44,    45,    46,     0,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,    58,     0,    59,    60,    61,    62,
       0,     0,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,    68,    69,     4,
     339,    70,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,    40,    41,    42,     0,    43,    44,    45,    46,     0,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,    58,     0,    59,    60,    61,
      62,     0,     0,    63,     0,     0,     0,     0,     0,    64,
      65,    66,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     3,    68,    69,
       4,   448,    70,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,     0,     0,    37,     0,
      38,    39,    40,    41,    42,     0,    43,    44,    45,    46,
       0,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     0,     0,     0,     0,    58,     0,    59,    60,
      61,    62,     0,     0,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,     0,     0,     4,    68,
      69,     6,     7,    70,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,     0,     0,    37,     0,    38,    39,
      40,    41,    42,     0,    43,    44,    45,    46,     0,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,    58,     0,    59,    60,    61,    62,
       0,     0,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,     1,     0,     2,     0,     3,     0,     0,   133,
     608,     5,     6,     0,     0,     0,     0,    68,    69,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,     0,     0,
       0,    32,     0,     0,    35,     0,    36,    37,     0,    38,
      39,    40,    41,    42,     0,    43,    44,    45,    46,     0,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,    58,     0,    59,    60,    61,
      62,     0,     0,    63,     0,     0,     0,     0,     0,    64,
      65,    66,    67,     1,     0,     2,     0,     3,     0,     0,
     133,     0,     5,     6,     0,     0,     0,     0,    68,    69,
       0,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,    32,     0,     0,    35,     0,    36,    37,     0,
      38,    39,    40,    41,    42,     0,    43,    44,    45,    46,
       0,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     0,     0,     0,     0,    58,     0,    59,    60,
      61,    62,     0,     0,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,     1,     0,     2,     0,     3,     0,
       0,   133,     0,     0,     6,     0,     0,     0,     0,    68,
      69,     0,     0,    70,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,    35,     0,     0,    37,
       0,    38,    39,    40,    41,    42,     0,    43,    44,    45,
      46,     0,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,     0,     0,     0,     0,    58,     0,    59,
      60,    61,    62,     0,     0,    63,     0,     0,     0,     0,
       0,    64,    65,    66,    67,   180,     0,     2,     0,     3,
       0,     0,   133,     0,     0,     6,     0,     0,     0,     0,
      68,    69,     0,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     0,     3,    32,     0,   133,    35,     0,     6,
       0,     0,    38,    39,    40,    41,    42,     0,    43,    44,
      45,    46,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
      59,    60,    61,    62,     0,     0,    63,     0,    32,     0,
       0,    35,    64,    65,    66,    67,    38,    39,    40,    41,
      42,     0,    43,    44,    45,    46,     0,     0,     0,     0,
       0,    68,    69,     0,     0,    70,     0,     0,     0,     0,
       0,     0,    58,     0,    59,    60,    61,    62,     0,     0,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
       2,   132,     3,     0,     0,   133,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    68,    69,     0,     0,    70,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
      35,     0,     0,     0,     0,    38,    39,    40,    41,    42,
       0,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,   134,    59,   135,    61,   136,   137,   138,    63,
       0,   139,     0,     0,     0,    64,    65,    66,    67,     0,
       0,   140,   141,   142,   143,   144,   145,   146,   147,     0,
       0,     0,     0,     0,    68,    69,   148,   149,    70,     2,
       0,     3,     0,     0,   133,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,    32,     0,   133,    35,
       0,     6,     0,     0,    38,    39,    40,    41,    42,     0,
      43,    44,    45,    46,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,   214,   215,     0,
      58,     0,    59,    60,    61,    62,     0,     0,    63,     0,
      32,     0,     0,    35,    64,    65,    66,    67,    38,    39,
      40,    41,    42,     0,    43,    44,    45,    46,     0,     0,
       0,     0,     0,    68,    69,     0,     0,    70,     0,     0,
       0,     0,     0,     0,    58,     0,    59,    60,    61,    62,
       0,     0,    63,     0,     0,   157,     0,     0,    64,    65,
      66,    67,     2,     0,     3,     0,     0,   133,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    68,    69,     0,
       0,    70,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,    35,     0,     0,     0,   334,    38,    39,    40,
      41,    42,     0,    43,    44,    45,    46,     0,     2,     0,
       3,   391,     0,   133,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,    63,     0,     0,    20,     0,     0,    64,    65,    66,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    68,    69,    35,     0,
      70,     0,     0,    38,    39,    40,    41,    42,     0,    43,
      44,    45,    46,     0,     2,     0,     3,   426,     0,   133,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    58,
       0,    59,    60,    61,    62,     0,     0,    63,     0,     0,
      20,     0,     0,    64,    65,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    68,    69,    35,     0,    70,     0,     0,    38,
      39,    40,    41,    42,     0,    43,    44,    45,    46,     0,
       2,   470,     3,     0,     0,   133,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    58,     0,    59,    60,    61,
      62,     0,     0,    63,     0,     0,    20,     0,     0,    64,
      65,    66,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    68,    69,
      35,     0,    70,     0,     0,    38,    39,    40,    41,    42,
       0,    43,    44,    45,    46,     0,     2,   484,     3,     0,
       0,   133,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    58,     0,    59,    60,    61,    62,     0,     0,    63,
       0,     0,    20,     0,     0,    64,    65,    66,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    68,    69,    35,     0,    70,     0,
       0,    38,    39,    40,    41,    42,     0,    43,    44,    45,
      46,     0,     2,     0,     3,   510,     0,   133,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    58,     0,    59,
      60,    61,    62,     0,     0,    63,     0,     0,    20,     0,
       0,    64,    65,    66,    67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      68,    69,    35,     0,    70,     0,     0,    38,    39,    40,
      41,    42,     0,    43,    44,    45,    46,     0,     2,     0,
       3,   588,     0,   133,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,    63,     0,     0,    20,     0,     0,    64,    65,    66,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    68,    69,    35,     0,
      70,     0,     0,    38,    39,    40,    41,    42,     0,    43,
      44,    45,    46,     0,     2,     0,     3,     0,     0,   133,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    58,
       0,    59,    60,    61,    62,     0,     0,    63,     0,     0,
      20,     0,     0,    64,    65,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    68,    69,    35,     0,    70,     0,     0,    38,
      39,    40,    41,    42,     0,    43,    44,    45,    46,     0,
       2,     0,     3,     0,     0,   133,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    58,     0,    59,    60,    61,
      62,     0,     0,    63,     0,     0,    20,     0,     0,    64,
      65,    66,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    68,    69,
      35,     0,    70,     0,     0,    38,    39,    40,    41,    42,
       0,    43,    44,    45,    46,     0,     2,     0,     3,     0,
       0,   133,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   296,     0,    59,    60,    61,    62,     0,     0,    63,
       0,     0,    20,     0,     0,    64,    65,    66,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,    35,     0,    70,     0,
       0,     0,    39,    40,    41,    42,     0,    43,    44,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,    59,
      60,    61,    62,     0,     0,    63,     0,     0,     0,     0,
       0,    64,    65,    66,    67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,    69,     0,     0,    70
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    66,    72,     4,    96,   200,   176,    25,
      19,    64,   418,   118,   214,   288,   119,   121,   250,   249,
     120,   105,   187,     5,   196,    34,   330,     4,     8,     4,
      66,     4,    38,    15,   505,     6,    11,   507,     4,     4,
      63,    64,   129,   310,    10,     6,    53,    63,    30,    31,
       5,     5,   244,     6,   505,     5,    86,     5,     6,    86,
       4,     3,   329,     6,     8,    65,    66,    97,    10,    53,
       4,    80,   542,   106,     2,     3,   276,    95,   111,    86,
      86,    99,   105,     5,   114,    96,    14,   114,    16,   105,
     126,     3,   498,   360,   361,   501,   567,   364,    10,   117,
      82,     5,    86,     7,    52,     4,     3,     5,   338,     8,
     121,   122,    60,    10,   565,   419,   567,    97,    46,    96,
      97,    96,    23,    96,   124,    96,    27,   109,     5,   322,
     298,    96,    86,     3,   133,    96,    86,   337,    86,    67,
      44,   313,   307,    96,   121,   122,   121,   122,   121,   122,
     121,   122,   161,    96,   421,     5,   121,   122,   245,   243,
     121,   122,   225,    97,   356,   228,   114,   359,   121,   122,
       3,   438,    37,    38,    39,    40,   175,    10,   121,   122,
     233,     5,   205,   246,    88,   452,    90,    11,    86,   205,
      11,    61,    62,    63,    64,   248,    24,   603,    26,     5,
       6,    86,    23,   476,    87,   268,    89,     3,    36,   191,
     233,   478,   479,    16,   118,    18,   114,     4,   221,     6,
     243,     4,   221,     6,   247,   248,   289,   243,    52,   157,
      38,   247,   462,   465,    86,   325,    60,    86,    96,    97,
      91,    92,    93,   266,    86,   173,    52,     0,   271,   522,
     266,   240,   241,   242,    60,   271,   529,   530,   531,   112,
     113,     5,    86,   121,   122,   288,     8,     9,   291,   374,
     293,     5,   375,   377,   467,   291,   376,   293,     5,   105,
      86,     5,    37,    38,     3,   213,   214,   286,   115,   312,
     114,    61,    62,    63,    64,   358,   312,   107,   108,   109,
     110,    41,    42,   326,    41,    42,   234,    41,   114,   332,
     326,   239,    61,    62,    63,    64,    86,     5,    52,    95,
      96,   249,   412,     3,     4,    52,    60,   116,    52,   114,
      98,   340,    94,    60,    97,     6,    60,   505,    69,     6,
       6,   269,   345,     6,     5,    97,   619,    11,   276,     3,
      86,    10,    86,   281,    88,    89,    90,    91,    86,    86,
      32,    86,    86,    86,    52,    86,   100,   295,    97,    44,
     118,     7,    60,    86,     5,    86,    86,    97,   381,     5,
     114,    86,   381,    56,    70,   119,   120,   114,     5,    10,
     114,     3,   320,   402,    10,   104,   405,   565,    86,   567,
      88,    89,    90,    91,    86,   404,     5,     8,     6,   337,
     338,     4,   100,    23,    87,    88,    89,    90,    91,    92,
      93,   444,    10,    96,   118,     7,   114,    42,    97,    86,
      86,   119,   120,   106,   107,   108,   109,   110,   111,   112,
     113,    31,     5,    86,   453,   468,    59,   500,   121,   122,
       6,    86,   468,   476,     3,    97,     8,    86,    86,   387,
     523,    86,     3,    86,   554,    13,    43,     5,     8,     7,
       3,     3,    10,    10,   473,   484,     4,   500,   406,    86,
      86,   409,     6,     6,     3,     5,     7,   496,     5,   488,
       5,   514,     6,    31,    97,     6,    25,   520,   514,   522,
     428,    97,    15,   122,   520,     4,   529,   530,   531,    10,
       8,     4,    24,    86,     6,    24,     6,    55,   581,    97,
      86,     3,    11,    61,    62,    63,    64,    10,    66,    67,
      68,    69,    86,     3,   462,   544,   545,   605,   547,    82,
       4,   540,    86,   552,     6,     6,     3,     0,    86,     8,
      88,    89,    90,    91,   577,    11,    94,     6,     3,    97,
      11,   577,   100,   101,   102,   103,     6,   565,   325,   604,
     567,   500,   444,   514,   413,   571,   554,   411,   473,   305,
     174,   119,   120,   582,   129,   123,   595,   171,   193,   548,
     245,   243,   201,   587,   597,   594,   619,   432,   316,   252,
     251,   577,   260,   253,   264,   254,   344,   535,   255,    -1,
     258,    -1,    -1,   259,    -1,    -1,    -1,   626,   262,     3,
     265,     5,   550,     7,    -1,   634,    10,    -1,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    57,    58,    -1,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    -1,
      -1,    -1,    86,    -1,    88,    89,    90,    91,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,   119,   120,    10,    11,   123,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,   119,   120,    10,    11,
     123,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,   119,   120,    10,
      11,   123,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,
      91,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,     7,   119,   120,
      10,    11,   123,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,
      90,    91,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,    -1,    -1,    10,   119,
     120,    13,    14,   123,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,   100,   101,
     102,   103,     3,    -1,     5,    -1,     7,    -1,    -1,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,   119,   120,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    -1,    57,    58,    -1,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,
      91,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,   100,
     101,   102,   103,     3,    -1,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,   119,   120,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    57,    58,    -1,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,
      90,    91,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
     100,   101,   102,   103,     3,    -1,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,   119,
     120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      -1,    60,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    -1,    -1,    -1,    86,    -1,    88,
      89,    90,    91,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,   100,   101,   102,   103,     3,    -1,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
     119,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,    52,    -1,    10,    55,    -1,    13,
      -1,    -1,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      88,    89,    90,    91,    -1,    -1,    94,    -1,    52,    -1,
      -1,    55,   100,   101,   102,   103,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,   119,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    88,    89,    90,    91,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      -1,    96,    -1,    -1,    -1,   100,   101,   102,   103,    -1,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    52,    -1,    10,    55,
      -1,    13,    -1,    -1,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      86,    -1,    88,    89,    90,    91,    -1,    -1,    94,    -1,
      52,    -1,    -1,    55,   100,   101,   102,   103,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,   119,   120,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,
      -1,    -1,    94,    -1,    -1,    97,    -1,    -1,   100,   101,
     102,   103,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    -1,     5,    -1,
       7,     8,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,    -1,
      -1,    94,    -1,    -1,    31,    -1,    -1,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,   119,   120,    55,    -1,
     123,    -1,    -1,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    -1,     5,    -1,     7,     8,    -1,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    88,    89,    90,    91,    -1,    -1,    94,    -1,    -1,
      31,    -1,    -1,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,   119,   120,    55,    -1,   123,    -1,    -1,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    -1,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,
      91,    -1,    -1,    94,    -1,    -1,    31,    -1,    -1,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,   119,   120,
      55,    -1,   123,    -1,    -1,    60,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    -1,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    88,    89,    90,    91,    -1,    -1,    94,
      -1,    -1,    31,    -1,    -1,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,   119,   120,    55,    -1,   123,    -1,
      -1,    60,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    -1,     5,    -1,     7,     8,    -1,    10,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    88,
      89,    90,    91,    -1,    -1,    94,    -1,    -1,    31,    -1,
      -1,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
     119,   120,    55,    -1,   123,    -1,    -1,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    -1,     5,    -1,
       7,     8,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,    -1,
      -1,    94,    -1,    -1,    31,    -1,    -1,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,   119,   120,    55,    -1,
     123,    -1,    -1,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    -1,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    88,    89,    90,    91,    -1,    -1,    94,    -1,    -1,
      31,    -1,    -1,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,   119,   120,    55,    -1,   123,    -1,    -1,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    -1,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,
      91,    -1,    -1,    94,    -1,    -1,    31,    -1,    -1,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,   119,   120,
      55,    -1,   123,    -1,    -1,    60,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    -1,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    88,    89,    90,    91,    -1,    -1,    94,
      -1,    -1,    31,    -1,    -1,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,    55,    -1,   123,    -1,
      -1,    -1,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    88,
      89,    90,    91,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,   120,    -1,    -1,   123
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,    10,    12,    13,    14,    16,    17,
      18,    19,    20,    21,    22,    26,    27,    28,    29,    30,
      31,    33,    34,    35,    36,    43,    45,    46,    47,    48,
      49,    51,    52,    53,    54,    55,    57,    58,    60,    61,
      62,    63,    64,    66,    67,    68,    69,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    86,    88,
      89,    90,    91,    94,   100,   101,   102,   103,   119,   120,
     123,   131,   132,   133,   135,   141,   142,   143,   145,   148,
     152,   157,   159,   160,   170,   172,   173,   174,   176,   180,
     185,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   204,   206,   217,   218,   221,   222,   223,   230,   232,
     235,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   261,   264,   265,   266,
     268,   273,     6,    10,    87,    89,    91,    92,    93,    96,
     106,   107,   108,   109,   110,   111,   112,   113,   121,   122,
     197,   200,   219,   240,   241,   242,   243,    97,   197,   244,
      11,   152,   198,   203,    37,    38,    39,    40,   156,   210,
     212,   213,   214,     5,   173,     5,     5,     5,   197,   214,
       3,   197,   173,    86,   181,     3,   134,   214,   134,   210,
     211,     5,    86,   114,   161,   163,   224,   225,   226,   228,
     229,   230,   210,   134,   153,   214,   214,    86,   173,    86,
     260,    86,   210,    86,    83,    84,   197,   267,   163,   161,
     162,    10,    97,   171,   259,   271,   171,   259,   271,   197,
       0,   133,   173,   214,     5,     3,   143,   144,     3,     4,
      96,   121,   122,    41,   100,   163,   220,   258,   214,    95,
      99,   117,   105,   115,   116,   114,   106,   111,   239,   240,
     241,    89,   242,    91,   243,    98,    94,   259,   271,     7,
      44,   118,   199,   201,   204,   264,    69,   198,     6,     6,
     197,    97,     8,     9,   272,    11,    97,    11,     5,   207,
     212,    41,    42,   215,   197,   190,    86,   198,   196,    86,
      10,    86,     3,    32,   177,   179,    86,    41,   215,   216,
      86,    86,   214,   224,    97,   199,    44,    95,    96,   227,
       7,   201,   202,   205,   228,    86,     5,   208,   163,    86,
      97,    86,     5,    86,    59,   197,   267,    70,     5,    11,
     152,    86,   114,   269,   270,    10,   171,   171,   104,   161,
     197,     3,   197,   206,   206,   206,   100,   220,   207,    56,
     219,   264,     3,   171,   163,   161,   197,   244,   245,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     163,    10,   171,   197,    86,   163,   262,     5,   263,   267,
       8,     8,   197,   198,     6,   163,   164,   165,     3,   171,
     163,   163,     6,   197,     4,     6,   196,     4,    97,    23,
     187,   188,    10,   178,   177,   118,   209,   215,   209,    97,
     147,   163,   199,    86,   150,   226,     8,   197,     7,   201,
     144,     6,   163,   168,   169,    31,   154,   155,    86,   209,
     150,   164,   166,   167,     5,    59,   267,   244,    11,    86,
      97,   269,    86,     6,   207,     3,     3,   171,   207,   209,
     209,   209,     5,    86,   236,    97,   198,     8,     4,     8,
       6,   197,     8,     4,    86,   237,     4,     6,    86,    86,
     173,     3,   198,   173,     6,   197,    86,    13,   231,   197,
      11,   187,    86,   143,   183,   184,   181,    53,    86,   151,
      43,   146,   147,   150,     3,    10,   140,   209,     3,     4,
       8,     3,   237,   238,     4,     6,    86,    86,     3,   209,
      10,    10,     4,     6,   167,     6,   209,   173,     3,     5,
       5,     5,   244,   245,    11,     7,   201,   163,     6,   203,
      97,   164,   209,   209,    15,     6,   173,     6,    97,   198,
      24,   186,    25,   122,     4,   182,   173,     8,   147,     4,
       8,   162,   147,    10,   136,   137,   138,   139,   172,   196,
     223,   208,    86,   168,    86,   163,   233,   234,   175,   164,
     171,     6,    24,   158,   164,   164,   164,     6,     8,   198,
     208,   173,   173,   173,   231,     6,   197,    97,   173,    86,
     183,    11,    53,    86,    10,   132,   149,   136,    11,   138,
     155,     3,    86,    11,   233,    82,   171,   198,     3,     4,
       6,     6,   236,     3,   198,   173,   152,     8,   147,   149,
      11,     6,     3,   164,     6,    11,     6,   173
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   130,   131,   131,   132,   132,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   141,
     142,   142,   142,   142,   143,   144,   145,   146,   146,   147,
     147,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     153,   154,   154,   155,   155,   156,   157,   158,   158,   159,
     159,   160,   161,   161,   162,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   169,   169,   170,   170,   171,
     171,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   175,   174,   176,   178,   177,
     179,   179,   180,   181,   181,   182,   182,   183,   183,   184,
     184,   185,   186,   186,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   191,   191,   191,   191,   191,   191,   192,
     193,   193,   194,   194,   195,   195,   195,   195,   196,   196,
     197,   197,   198,   198,   198,   198,   199,   199,   200,   200,
     200,   200,   200,   201,   201,   201,   202,   202,   202,   203,
     203,   204,   204,   204,   205,   205,   206,   206,   206,   207,
     207,   208,   208,   209,   209,   209,   209,   210,   211,   211,
     212,   212,   213,   213,   214,   214,   214,   214,   215,   215,
     216,   216,   217,   217,   217,   217,   218,   219,   219,   219,
     219,   219,   220,   220,   220,   220,   221,   221,   222,   222,
     222,   223,   223,   223,   223,   223,   223,   224,   224,   225,
     225,   226,   226,   227,   227,   227,   228,   229,   229,   230,
     230,   231,   231,   232,   232,   233,   233,   234,   234,   235,
     236,   237,   238,   238,   239,   239,   240,   240,   240,   240,
     241,   241,   242,   242,   243,   243,   243,   244,   244,   245,
     245,   245,   246,   246,   247,   247,   248,   248,   249,   249,
     250,   250,   251,   251,   252,   252,   253,   253,   254,   254,
     255,   255,   256,   256,   257,   257,   258,   258,   258,   258,
     258,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   260,   260,   261,   261,   262,   262,   263,   263,
     264,   264,   265,   266,   266,   266,   266,   266,   266,   267,
     267,   267,   268,   268,   269,   269,   270,   270,   271,   271,
     272,   272,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     9,     8,     1,
       1,     1,     2,     1,     1,     1,     2,     3,     1,     5,
       1,     1,     1,     1,     1,     1,     5,     2,     0,     0,
       2,     5,     1,     0,     1,     3,     2,     4,     1,     2,
       4,     2,     2,     0,     1,     5,     5,     0,     2,     1,
       1,     7,     2,     1,     1,     1,     4,     2,     1,     3,
       1,     3,     1,     0,     2,     1,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     7,     2,     0,     4,
       1,     2,     3,     1,     0,     1,     0,     1,     3,     1,
       3,     7,     2,     0,     5,     1,     2,     7,     5,     1,
       1,     5,     5,     6,     7,     8,    10,     5,     7,     2,
       5,     7,     1,     1,     3,     2,     3,     2,     2,     1,
       1,     3,     1,     3,     3,     3,     3,     0,     1,     1,
       1,     1,     1,     3,     4,     5,     2,     3,     2,     3,
       5,     5,     4,     4,     1,     1,     1,     4,     7,     3,
       2,     3,     2,     3,     5,     3,     0,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     0,
       2,     1,     4,     4,     7,     6,     8,     1,     1,     1,
       1,     1,     8,     6,     6,     3,     1,     2,     3,     3,
       4,     1,     1,     1,     4,     4,     5,     1,     7,     2,
       3,     1,     3,     1,     1,     0,     2,     1,     2,     1,
       1,     1,     0,     1,     1,     2,     3,     1,     2,     7,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       5,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     5,     2,     2,     2,     3,
       3,     2,     1,     2,     2,     1,     1,     3,     3,     2,
       1,     1,     3,     1,     2,     2,     3,     2,     1,     1,
       2,     3,     2,     3,     1,     2,     1,     2,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
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
#line 188 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2605 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 189 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2611 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 192 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2620 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 196 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2629 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 202 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2635 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 203 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2641 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 204 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2647 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 205 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2653 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 206 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2659 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 207 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2665 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 208 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2671 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 209 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2677 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 210 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2683 "src/parser.c"
    break;

  case 15: /* section: prim_def  */
#line 211 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def)); }
#line 2689 "src/parser.c"
    break;

  case 16: /* class_flag: flag modifier  */
#line 214 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2695 "src/parser.c"
    break;

  case 17: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 217 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2706 "src/parser.c"
    break;

  case 18: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 224 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2718 "src/parser.c"
    break;

  case 19: /* trait_stmt: exp_stmt  */
#line 232 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2728 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt  */
#line 237 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2737 "src/parser.c"
    break;

  case 22: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 241 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2746 "src/parser.c"
    break;

  case 23: /* trait_section: trait_stmt_list  */
#line 247 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2752 "src/parser.c"
    break;

  case 24: /* trait_section: func_def  */
#line 248 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2758 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_section  */
#line 252 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2767 "src/parser.c"
    break;

  case 26: /* trait_ast: trait_ast trait_section  */
#line 256 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2776 "src/parser.c"
    break;

  case 27: /* trait_body: "{" trait_ast "}"  */
#line 261 "src/gwion.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 2782 "src/parser.c"
    break;

  case 28: /* trait_body: ";"  */
#line 261 "src/gwion.y"
                                                   { (yyval.ast) = NULL; }
#line 2788 "src/parser.c"
    break;

  case 29: /* trait_def: "trait" opt_global "<identifier>" traits trait_body  */
#line 264 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2797 "src/parser.c"
    break;

  case 30: /* integer: DECIMAL  */
#line 269 "src/gwion.y"
                 { (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type); }
#line 2803 "src/parser.c"
    break;

  case 31: /* integer: BINARY  */
#line 270 "src/gwion.y"
                 { (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type); }
#line 2809 "src/parser.c"
    break;

  case 32: /* integer: HEXA  */
#line 271 "src/gwion.y"
                 { (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type); }
#line 2815 "src/parser.c"
    break;

  case 33: /* integer: OCTAL  */
#line 272 "src/gwion.y"
                 { (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type); }
#line 2821 "src/parser.c"
    break;

  case 34: /* number: integer  */
#line 274 "src/gwion.y"
                {
  if((yyvsp[0].gwint).num < 0 || (yyvsp[0].gwint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2832 "src/parser.c"
    break;

  case 35: /* decimal: number  */
#line 281 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2843 "src/parser.c"
    break;

  case 36: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 289 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2851 "src/parser.c"
    break;

  case 37: /* class_ext: "extends" type_decl_exp  */
#line 292 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2857 "src/parser.c"
    break;

  case 38: /* class_ext: %empty  */
#line 292 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2863 "src/parser.c"
    break;

  case 39: /* traits: %empty  */
#line 293 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2869 "src/parser.c"
    break;

  case 40: /* traits: ":" id_list  */
#line 293 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2875 "src/parser.c"
    break;

  case 41: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 295 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2883 "src/parser.c"
    break;

  case 43: /* class_body: %empty  */
#line 300 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2889 "src/parser.c"
    break;

  case 44: /* id_list: "<identifier>"  */
#line 303 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), Symbol, 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2898 "src/parser.c"
    break;

  case 45: /* id_list: id_list "," "<identifier>"  */
#line 308 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2907 "src/parser.c"
    break;

  case 46: /* specialized_list: "<identifier>" traits  */
#line 313 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2920 "src/parser.c"
    break;

  case 47: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 321 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2930 "src/parser.c"
    break;

  case 48: /* stmt_list: stmt  */
#line 327 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2939 "src/parser.c"
    break;

  case 49: /* stmt_list: stmt_list stmt  */
#line 331 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2948 "src/parser.c"
    break;

  case 50: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 336 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2955 "src/parser.c"
    break;

  case 51: /* _func_effects: "perform" "<identifier>"  */
#line 339 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2961 "src/parser.c"
    break;

  case 52: /* _func_effects: _func_effects "<identifier>"  */
#line 339 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2967 "src/parser.c"
    break;

  case 53: /* func_effects: %empty  */
#line 340 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2973 "src/parser.c"
    break;

  case 54: /* func_effects: _func_effects  */
#line 340 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2979 "src/parser.c"
    break;

  case 55: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 342 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2986 "src/parser.c"
    break;

  case 56: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 345 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2996 "src/parser.c"
    break;

  case 57: /* typedef_when: %empty  */
#line 351 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 3002 "src/parser.c"
    break;

  case 58: /* typedef_when: "when" binary_exp  */
#line 351 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3008 "src/parser.c"
    break;

  case 59: /* type_def_type: "typedef"  */
#line 352 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 3014 "src/parser.c"
    break;

  case 60: /* type_def_type: "distinct"  */
#line 352 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 3020 "src/parser.c"
    break;

  case 61: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 353 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 3033 "src/parser.c"
    break;

  case 62: /* type_decl_array: type_decl array  */
#line 362 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 3039 "src/parser.c"
    break;

  case 64: /* type_decl_exp: type_decl_array  */
#line 364 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3047 "src/parser.c"
    break;

  case 65: /* type_decl_empty: type_decl_array  */
#line 368 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3055 "src/parser.c"
    break;

  case 66: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 373 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 3064 "src/parser.c"
    break;

  case 67: /* arg: type_decl_empty arg_decl  */
#line 377 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 3073 "src/parser.c"
    break;

  case 68: /* arg_list: arg  */
#line 382 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 3083 "src/parser.c"
    break;

  case 69: /* arg_list: arg_list "," arg  */
#line 387 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3095 "src/parser.c"
    break;

  case 70: /* locale_arg: arg  */
#line 396 "src/gwion.y"
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
#line 3111 "src/parser.c"
    break;

  case 71: /* locale_arg: locale_arg "," arg  */
#line 407 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3123 "src/parser.c"
    break;

  case 73: /* locale_list: %empty  */
#line 416 "src/gwion.y"
    {
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
    }
#line 3137 "src/parser.c"
    break;

  case 74: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 426 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 3143 "src/parser.c"
    break;

  case 75: /* fptr_list: fptr_arg  */
#line 428 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 3152 "src/parser.c"
    break;

  case 76: /* fptr_list: fptr_list "," fptr_arg  */
#line 432 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 3161 "src/parser.c"
    break;

  case 77: /* code_stmt: "{" "}"  */
#line 438 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 3168 "src/parser.c"
    break;

  case 78: /* code_stmt: "{" stmt_list "}"  */
#line 440 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 3175 "src/parser.c"
    break;

  case 79: /* code_list: "{" "}"  */
#line 444 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 0); }
#line 3181 "src/parser.c"
    break;

  case 80: /* code_list: "{" stmt_list "}"  */
#line 445 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3187 "src/parser.c"
    break;

  case 81: /* stmt_pp: "<comment>"  */
#line 448 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 3193 "src/parser.c"
    break;

  case 82: /* stmt_pp: "#include"  */
#line 449 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 3199 "src/parser.c"
    break;

  case 83: /* stmt_pp: "#define"  */
#line 450 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 3205 "src/parser.c"
    break;

  case 84: /* stmt_pp: "#pragma"  */
#line 451 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 3211 "src/parser.c"
    break;

  case 85: /* stmt_pp: "#undef"  */
#line 452 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 3217 "src/parser.c"
    break;

  case 86: /* stmt_pp: "#ifdef"  */
#line 453 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 3223 "src/parser.c"
    break;

  case 87: /* stmt_pp: "#ifndef"  */
#line 454 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 3229 "src/parser.c"
    break;

  case 88: /* stmt_pp: "#else"  */
#line 455 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 3235 "src/parser.c"
    break;

  case 89: /* stmt_pp: "#if"  */
#line 456 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 3241 "src/parser.c"
    break;

  case 90: /* stmt_pp: "\n"  */
#line 457 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 3247 "src/parser.c"
    break;

  case 91: /* stmt_pp: "import"  */
#line 458 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 3253 "src/parser.c"
    break;

  case 92: /* stmt_pp: LOCALE_INI "<identifier>" exp LOCALE_END  */
#line 459 "src/gwion.y"
                                 { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = (yyvsp[-1].exp), .xid = (yyvsp[-2].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-3]) }; }
#line 3260 "src/parser.c"
    break;

  case 93: /* stmt_pp: LOCALE_INI "<identifier>" LOCALE_END  */
#line 461 "src/gwion.y"
                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = (yyvsp[-1].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-2]) }; }
#line 3267 "src/parser.c"
    break;

  case 105: /* $@1: %empty  */
#line 478 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3273 "src/parser.c"
    break;

  case 106: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 478 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .xid = (yyvsp[-5].sym),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
    .pos = (yylsp[-2]).first
  };
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_spread, .d = { .stmt_spread = spread }, .pos = (yylsp[-5])};
}
#line 3287 "src/parser.c"
    break;

  case 107: /* retry_stmt: "retry" ";"  */
#line 488 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3297 "src/parser.c"
    break;

  case 108: /* $@2: %empty  */
#line 493 "src/gwion.y"
                  { arg->handling = true; }
#line 3303 "src/parser.c"
    break;

  case 109: /* handler: "handle" $@2 opt_id stmt  */
#line 493 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3309 "src/parser.c"
    break;

  case 110: /* handler_list: handler  */
#line 494 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), Handler, 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3319 "src/parser.c"
    break;

  case 111: /* handler_list: handler_list handler  */
#line 499 "src/gwion.y"
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
#line 3340 "src/parser.c"
    break;

  case 112: /* try_stmt: "try" stmt handler_list  */
#line 515 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3349 "src/parser.c"
    break;

  case 114: /* opt_id: %empty  */
#line 520 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3355 "src/parser.c"
    break;

  case 116: /* opt_comma: %empty  */
#line 521 "src/gwion.y"
                 {}
#line 3361 "src/parser.c"
    break;

  case 117: /* enum_value: "<identifier>"  */
#line 524 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .xid = (yyvsp[0].sym) }; }
#line 3367 "src/parser.c"
    break;

  case 118: /* enum_value: number "<dynamic_operator>" "<identifier>"  */
#line 525 "src/gwion.y"
                                           { 
            if (strcmp(s_name((yyvsp[-1].sym)), ":=>")) {
              parser_error(&(yylsp[-2]), arg, "enum value must be set with :=>", 0x0240); YYERROR;
          }
            (yyval.enum_value) = (EnumValue) {.xid = (yyvsp[0].sym), .gwint = (yyvsp[-2].gwint), .set = true };
          }
#line 3378 "src/parser.c"
    break;

  case 119: /* enum_list: enum_value  */
#line 532 "src/gwion.y"
  {
    (yyval.enum_list) = new_mp_vector(mpool(arg), EnumValue, 1);
    mp_vector_set((yyval.enum_list), EnumValue, 0, (yyvsp[0].enum_value));
  }
#line 3387 "src/parser.c"
    break;

  case 120: /* enum_list: enum_list "," enum_value  */
#line 537 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].enum_list), EnumValue, (yyvsp[0].enum_value));
    (yyval.enum_list) = (yyvsp[-2].enum_list);
  }
#line 3396 "src/parser.c"
    break;

  case 121: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 542 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3405 "src/parser.c"
    break;

  case 122: /* when_exp: "when" exp  */
#line 547 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3411 "src/parser.c"
    break;

  case 123: /* when_exp: %empty  */
#line 547 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3417 "src/parser.c"
    break;

  case 124: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 550 "src/gwion.y"
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
#line 3433 "src/parser.c"
    break;

  case 125: /* match_list: match_case_stmt  */
#line 562 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3442 "src/parser.c"
    break;

  case 126: /* match_list: match_list match_case_stmt  */
#line 566 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3451 "src/parser.c"
    break;

  case 127: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 571 "src/gwion.y"
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
#line 3466 "src/parser.c"
    break;

  case 128: /* match_stmt: "match" exp "{" match_list "}"  */
#line 582 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3480 "src/parser.c"
    break;

  case 129: /* flow: "while"  */
#line 593 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3486 "src/parser.c"
    break;

  case 130: /* flow: "until"  */
#line 594 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3492 "src/parser.c"
    break;

  case 131: /* loop_stmt: flow "(" exp ")" stmt  */
#line 599 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3505 "src/parser.c"
    break;

  case 132: /* loop_stmt: "do" stmt flow exp ";"  */
#line 608 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3519 "src/parser.c"
    break;

  case 133: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 618 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3533 "src/parser.c"
    break;

  case 134: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 628 "src/gwion.y"
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
#line 3548 "src/parser.c"
    break;

  case 135: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 639 "src/gwion.y"
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
#line 3565 "src/parser.c"
    break;

  case 136: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 652 "src/gwion.y"
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
#line 3587 "src/parser.c"
    break;

  case 137: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 670 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3600 "src/parser.c"
    break;

  case 138: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 679 "src/gwion.y"
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
#line 3617 "src/parser.c"
    break;

  case 139: /* defer_stmt: "defer" stmt  */
#line 692 "src/gwion.y"
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
#line 3634 "src/parser.c"
    break;

  case 140: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 707 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3647 "src/parser.c"
    break;

  case 141: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 716 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3661 "src/parser.c"
    break;

  case 142: /* breaks: "break"  */
#line 726 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3667 "src/parser.c"
    break;

  case 143: /* breaks: "continue"  */
#line 726 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3673 "src/parser.c"
    break;

  case 144: /* jump_stmt: "return" exp ";"  */
#line 728 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3683 "src/parser.c"
    break;

  case 145: /* jump_stmt: "return" ";"  */
#line 733 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3692 "src/parser.c"
    break;

  case 146: /* jump_stmt: breaks decimal ";"  */
#line 737 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].gwint).num }},
      .pos = (yylsp[-2])
    };
  }
#line 3702 "src/parser.c"
    break;

  case 147: /* jump_stmt: breaks ";"  */
#line 742 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3711 "src/parser.c"
    break;

  case 148: /* exp_stmt: exp ";"  */
#line 748 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3721 "src/parser.c"
    break;

  case 149: /* exp_stmt: ";"  */
#line 753 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3730 "src/parser.c"
    break;

  case 150: /* exp: binary_exp  */
#line 759 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3736 "src/parser.c"
    break;

  case 151: /* exp: binary_exp "," exp  */
#line 761 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3748 "src/parser.c"
    break;

  case 153: /* binary_exp: binary_exp "@" decl_exp  */
#line 772 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3754 "src/parser.c"
    break;

  case 154: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 773 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3760 "src/parser.c"
    break;

  case 155: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 774 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3766 "src/parser.c"
    break;

  case 156: /* call_template: ":[" type_list "]"  */
#line 777 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3772 "src/parser.c"
    break;

  case 157: /* call_template: %empty  */
#line 777 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3778 "src/parser.c"
    break;

  case 163: /* array_exp: "[" exp "]"  */
#line 782 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3784 "src/parser.c"
    break;

  case 164: /* array_exp: "[" exp "]" array_exp  */
#line 783 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3792 "src/parser.c"
    break;

  case 165: /* array_exp: "[" exp "]" "[" "]"  */
#line 786 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3798 "src/parser.c"
    break;

  case 166: /* array_empty: "[" "]"  */
#line 790 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3804 "src/parser.c"
    break;

  case 167: /* array_empty: array_empty "[" "]"  */
#line 791 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3810 "src/parser.c"
    break;

  case 168: /* array_empty: array_empty array_exp  */
#line 792 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3816 "src/parser.c"
    break;

  case 169: /* dict_list: binary_exp ":" binary_exp  */
#line 796 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3822 "src/parser.c"
    break;

  case 170: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 797 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3828 "src/parser.c"
    break;

  case 171: /* range: "[" exp ":" exp "]"  */
#line 800 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3834 "src/parser.c"
    break;

  case 172: /* range: "[" exp ":" "]"  */
#line 801 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3840 "src/parser.c"
    break;

  case 173: /* range: "[" ":" exp "]"  */
#line 802 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3846 "src/parser.c"
    break;

  case 177: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 808 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3852 "src/parser.c"
    break;

  case 178: /* decl_exp: type_decl_flag2 flag type_decl_array "(" opt_exp ")" var_decl  */
#line 809 "src/gwion.y"
                                                                  {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-4].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-6].flag) | (yyvsp[-5].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-2].exp) ?: new_prim_nil(mpool(arg), (yylsp[-2]));
  }
#line 3862 "src/parser.c"
    break;

  case 179: /* func_args: "(" arg_list ")"  */
#line 815 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3868 "src/parser.c"
    break;

  case 180: /* func_args: "(" ")"  */
#line 815 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3874 "src/parser.c"
    break;

  case 181: /* fptr_args: "(" fptr_list ")"  */
#line 816 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3880 "src/parser.c"
    break;

  case 182: /* fptr_args: "(" ")"  */
#line 816 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3886 "src/parser.c"
    break;

  case 183: /* decl_template: ":[" specialized_list "]"  */
#line 818 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3892 "src/parser.c"
    break;

  case 184: /* decl_template: ":[" specialized_list "," "..." "]"  */
#line 819 "src/gwion.y"
                                                    {
  (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  Specialized spec = { .xid = insert_symbol("...") };
  mp_vector_add(mpool(arg), &(yyval.specialized_list), Specialized, spec);

}
#line 3903 "src/parser.c"
    break;

  case 185: /* decl_template: ":[" "..." "]"  */
#line 825 "src/gwion.y"
                                {
  Specialized spec = { .xid = insert_symbol("...") };
  (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
  mp_vector_set((yyval.specialized_list), Specialized, 0, spec);
}
#line 3913 "src/parser.c"
    break;

  case 186: /* decl_template: %empty  */
#line 830 "src/gwion.y"
               { (yyval.specialized_list) = NULL; }
#line 3919 "src/parser.c"
    break;

  case 187: /* global: "global"  */
#line 832 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3925 "src/parser.c"
    break;

  case 189: /* opt_global: %empty  */
#line 833 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3931 "src/parser.c"
    break;

  case 190: /* storage_flag: "static"  */
#line 835 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3937 "src/parser.c"
    break;

  case 192: /* access_flag: "private"  */
#line 837 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3943 "src/parser.c"
    break;

  case 193: /* access_flag: "protect"  */
#line 838 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3949 "src/parser.c"
    break;

  case 194: /* flag: access_flag  */
#line 841 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3955 "src/parser.c"
    break;

  case 195: /* flag: storage_flag  */
#line 842 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3961 "src/parser.c"
    break;

  case 196: /* flag: access_flag storage_flag  */
#line 843 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3967 "src/parser.c"
    break;

  case 197: /* flag: %empty  */
#line 844 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3973 "src/parser.c"
    break;

  case 198: /* final: "final"  */
#line 847 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3979 "src/parser.c"
    break;

  case 199: /* final: %empty  */
#line 847 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3985 "src/parser.c"
    break;

  case 200: /* modifier: "abstract" final  */
#line 849 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3991 "src/parser.c"
    break;

  case 202: /* func_def_base: "fun" func_base func_args code_list  */
#line 852 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 4001 "src/parser.c"
    break;

  case 203: /* func_def_base: "fun" func_base func_args ";"  */
#line 857 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 4013 "src/parser.c"
    break;

  case 204: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 864 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 4024 "src/parser.c"
    break;

  case 205: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 870 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 4035 "src/parser.c"
    break;

  case 206: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 879 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4047 "src/parser.c"
    break;

  case 212: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 890 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 4061 "src/parser.c"
    break;

  case 213: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 900 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4074 "src/parser.c"
    break;

  case 214: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 909 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4088 "src/parser.c"
    break;

  case 215: /* op_base: type_decl_empty OPID_A func_args  */
#line 919 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 4097 "src/parser.c"
    break;

  case 216: /* operator: "operator"  */
#line 924 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 4103 "src/parser.c"
    break;

  case 217: /* operator: "operator" global  */
#line 924 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 4109 "src/parser.c"
    break;

  case 218: /* op_def: operator op_base code_list  */
#line 927 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 4115 "src/parser.c"
    break;

  case 219: /* op_def: operator op_base ";"  */
#line 929 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 4121 "src/parser.c"
    break;

  case 220: /* op_def: operator "abstract" op_base ";"  */
#line 931 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 4127 "src/parser.c"
    break;

  case 224: /* func_def: operator "new" func_args code_list  */
#line 935 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 4137 "src/parser.c"
    break;

  case 225: /* func_def: operator "new" func_args ";"  */
#line 941 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4148 "src/parser.c"
    break;

  case 226: /* func_def: operator "abstract" "new" func_args ";"  */
#line 948 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4159 "src/parser.c"
    break;

  case 227: /* type_decl_base: "<identifier>"  */
#line 956 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4165 "src/parser.c"
    break;

  case 228: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 957 "src/gwion.y"
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
#line 4181 "src/parser.c"
    break;

  case 229: /* type_decl_tmpl: type_decl_base call_template  */
#line 971 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4187 "src/parser.c"
    break;

  case 230: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 972 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4193 "src/parser.c"
    break;

  case 232: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 977 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4199 "src/parser.c"
    break;

  case 233: /* option: "?"  */
#line 980 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4205 "src/parser.c"
    break;

  case 234: /* option: OPTIONS  */
#line 980 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4211 "src/parser.c"
    break;

  case 235: /* option: %empty  */
#line 980 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 4217 "src/parser.c"
    break;

  case 236: /* type_decl_opt: type_decl_noflag option  */
#line 981 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4223 "src/parser.c"
    break;

  case 238: /* type_decl: type_decl_flag type_decl_opt  */
#line 982 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4229 "src/parser.c"
    break;

  case 239: /* type_decl_flag: "late"  */
#line 985 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4235 "src/parser.c"
    break;

  case 240: /* type_decl_flag: "const"  */
#line 986 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4241 "src/parser.c"
    break;

  case 241: /* opt_var: "var"  */
#line 988 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4247 "src/parser.c"
    break;

  case 242: /* opt_var: %empty  */
#line 988 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4253 "src/parser.c"
    break;

  case 243: /* type_decl_flag2: "var"  */
#line 990 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4259 "src/parser.c"
    break;

  case 245: /* union_decl: "<identifier>" ";"  */
#line 993 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 4268 "src/parser.c"
    break;

  case 246: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 997 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 4274 "src/parser.c"
    break;

  case 247: /* union_list: union_decl  */
#line 999 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), Union_Member, 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 4283 "src/parser.c"
    break;

  case 248: /* union_list: union_list union_decl  */
#line 1003 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 4292 "src/parser.c"
    break;

  case 249: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 1009 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4304 "src/parser.c"
    break;

  case 250: /* var_decl: "<identifier>"  */
#line 1018 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4310 "src/parser.c"
    break;

  case 251: /* arg_decl: "<identifier>"  */
#line 1020 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4316 "src/parser.c"
    break;

  case 253: /* fptr_arg_decl: %empty  */
#line 1021 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4322 "src/parser.c"
    break;

  case 267: /* opt_exp: exp  */
#line 1029 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4328 "src/parser.c"
    break;

  case 268: /* opt_exp: %empty  */
#line 1029 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4334 "src/parser.c"
    break;

  case 270: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 1032 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4340 "src/parser.c"
    break;

  case 271: /* con_exp: log_or_exp "?:" con_exp  */
#line 1034 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4346 "src/parser.c"
    break;

  case 273: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 1036 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4352 "src/parser.c"
    break;

  case 275: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 1037 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4358 "src/parser.c"
    break;

  case 277: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 1038 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4364 "src/parser.c"
    break;

  case 279: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 1039 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4370 "src/parser.c"
    break;

  case 281: /* and_exp: and_exp "&" eq_exp  */
#line 1040 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4376 "src/parser.c"
    break;

  case 283: /* eq_exp: eq_exp eq_op rel_exp  */
#line 1041 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4382 "src/parser.c"
    break;

  case 285: /* rel_exp: rel_exp rel_op shift_exp  */
#line 1042 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4388 "src/parser.c"
    break;

  case 287: /* shift_exp: shift_exp shift_op add_exp  */
#line 1043 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4394 "src/parser.c"
    break;

  case 289: /* add_exp: add_exp add_op mul_exp  */
#line 1044 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4400 "src/parser.c"
    break;

  case 291: /* mul_exp: mul_exp mul_op dur_exp  */
#line 1045 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4406 "src/parser.c"
    break;

  case 293: /* dur_exp: dur_exp "::" cast_exp  */
#line 1046 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4412 "src/parser.c"
    break;

  case 295: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 1049 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4418 "src/parser.c"
    break;

  case 302: /* unary_exp: unary_op unary_exp  */
#line 1056 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4424 "src/parser.c"
    break;

  case 303: /* unary_exp: "spork" unary_exp  */
#line 1057 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4430 "src/parser.c"
    break;

  case 304: /* unary_exp: "fork" unary_exp  */
#line 1058 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4436 "src/parser.c"
    break;

  case 305: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 1059 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4444 "src/parser.c"
    break;

  case 306: /* unary_exp: "new" type_decl_exp  */
#line 1062 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4450 "src/parser.c"
    break;

  case 307: /* unary_exp: "spork" code_list  */
#line 1063 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4456 "src/parser.c"
    break;

  case 308: /* unary_exp: "fork" code_list  */
#line 1064 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4462 "src/parser.c"
    break;

  case 309: /* unary_exp: "spork" captures code_list  */
#line 1065 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4468 "src/parser.c"
    break;

  case 310: /* unary_exp: "fork" captures code_list  */
#line 1066 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4474 "src/parser.c"
    break;

  case 311: /* unary_exp: "$" type_decl_empty  */
#line 1067 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4480 "src/parser.c"
    break;

  case 312: /* lambda_list: "<identifier>"  */
#line 1070 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4490 "src/parser.c"
    break;

  case 313: /* lambda_list: lambda_list "<identifier>"  */
#line 1075 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4500 "src/parser.c"
    break;

  case 314: /* lambda_arg: "\\" lambda_list  */
#line 1080 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4506 "src/parser.c"
    break;

  case 315: /* lambda_arg: "\\"  */
#line 1080 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4512 "src/parser.c"
    break;

  case 316: /* type_list: type_decl_empty  */
#line 1083 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), Type_Decl*, 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4521 "src/parser.c"
    break;

  case 317: /* type_list: type_list "," type_decl_empty  */
#line 1087 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4530 "src/parser.c"
    break;

  case 318: /* call_paren: "(" exp ")"  */
#line 1093 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4536 "src/parser.c"
    break;

  case 319: /* call_paren: "(" ")"  */
#line 1093 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4542 "src/parser.c"
    break;

  case 322: /* dot_exp: post_exp "." "<identifier>"  */
#line 1097 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4555 "src/parser.c"
    break;

  case 324: /* post_exp: post_exp array_exp  */
#line 1108 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4561 "src/parser.c"
    break;

  case 325: /* post_exp: post_exp range  */
#line 1110 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4567 "src/parser.c"
    break;

  case 326: /* post_exp: post_exp call_template call_paren  */
#line 1112 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4574 "src/parser.c"
    break;

  case 327: /* post_exp: post_exp post_op  */
#line 1115 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4580 "src/parser.c"
    break;

  case 328: /* post_exp: dot_exp  */
#line 1116 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4586 "src/parser.c"
    break;

  case 329: /* interp_exp: "<interp string end>"  */
#line 1120 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4592 "src/parser.c"
    break;

  case 330: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1121 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4598 "src/parser.c"
    break;

  case 331: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1122 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4604 "src/parser.c"
    break;

  case 332: /* interp: "${" interp_exp  */
#line 1124 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4610 "src/parser.c"
    break;

  case 333: /* interp: interp "${" interp_exp  */
#line 1125 "src/gwion.y"
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
#line 4625 "src/parser.c"
    break;

  case 334: /* capture: "<identifier>"  */
#line 1136 "src/gwion.y"
            { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .pos = (yylsp[0]) };}
#line 4631 "src/parser.c"
    break;

  case 335: /* capture: "&" "<identifier>"  */
#line 1136 "src/gwion.y"
                                                                { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .is_ref = true, .pos = (yylsp[0]) }; }
#line 4637 "src/parser.c"
    break;

  case 336: /* _captures: capture  */
#line 1138 "src/gwion.y"
                   { (yyval.captures) = new_mp_vector(mpool(arg), Capture, 1); mp_vector_set((yyval.captures), Capture, 0, (yyvsp[0].capture)); }
#line 4643 "src/parser.c"
    break;

  case 337: /* _captures: _captures capture  */
#line 1139 "src/gwion.y"
                            { mp_vector_add(mpool(arg), &(yyvsp[-1].captures), Capture, (yyvsp[0].capture)); (yyval.captures) = (yyvsp[-1].captures); }
#line 4649 "src/parser.c"
    break;

  case 338: /* captures: ":" _captures ":"  */
#line 1140 "src/gwion.y"
                            { (yyval.captures) = (yyvsp[-1].captures); }
#line 4655 "src/parser.c"
    break;

  case 339: /* captures: %empty  */
#line 1140 "src/gwion.y"
                                            { (yyval.captures) = NULL; }
#line 4661 "src/parser.c"
    break;

  case 342: /* prim_exp: "<identifier>"  */
#line 1143 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4667 "src/parser.c"
    break;

  case 343: /* prim_exp: number  */
#line 1144 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc));
    (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4675 "src/parser.c"
    break;

  case 344: /* prim_exp: "<float>"  */
#line 1147 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4681 "src/parser.c"
    break;

  case 345: /* prim_exp: interp  */
#line 1148 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4687 "src/parser.c"
    break;

  case 346: /* prim_exp: "<litteral string>"  */
#line 1149 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4693 "src/parser.c"
    break;

  case 347: /* prim_exp: "<litteral char>"  */
#line 1150 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4699 "src/parser.c"
    break;

  case 348: /* prim_exp: "[" opt_exp array_lit_end  */
#line 1151 "src/gwion.y"
                              { 
    if(!(yyvsp[-1].exp)) {
      parser_error(&(yylsp[-2]), arg, "must provide values/expressions for array [...]", 0);
      YYERROR;
    }
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4712 "src/parser.c"
    break;

  case 349: /* prim_exp: "{" dict_list "}"  */
#line 1159 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4718 "src/parser.c"
    break;

  case 350: /* prim_exp: range  */
#line 1160 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4724 "src/parser.c"
    break;

  case 351: /* prim_exp: "<<<" exp ">>>"  */
#line 1161 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4730 "src/parser.c"
    break;

  case 352: /* prim_exp: "(" exp ")"  */
#line 1162 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4736 "src/parser.c"
    break;

  case 353: /* prim_exp: "`foo`"  */
#line 1163 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last = { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4747 "src/parser.c"
    break;

  case 354: /* prim_exp: lambda_arg captures code_list  */
#line 1169 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4753 "src/parser.c"
    break;

  case 355: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1170 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg->st, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4759 "src/parser.c"
    break;

  case 356: /* prim_exp: "(" op_op ")"  */
#line 1171 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4765 "src/parser.c"
    break;

  case 357: /* prim_exp: "perform" opt_id  */
#line 1172 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4771 "src/parser.c"
    break;

  case 358: /* prim_exp: "(" ")"  */
#line 1173 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4777 "src/parser.c"
    break;


#line 4781 "src/parser.c"

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

#line 1175 "src/gwion.y"

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
