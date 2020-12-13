/* A Bison parser, made by GNU Bison 3.7.2.51-de63.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2.51-de63"

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
#line 7 "src/gwion.y"

#include <math.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "bison_compat.h"
#include "parser.h"
#include "lexer.h"

#define YYERROR_VERBOSE
#define YYMALLOC xmalloc
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))
#define GET_LOC(a) loc_cpy(mpool(arg), a)
ANN void gwion_error(loc_t, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);

#line 94 "src/parser.c"

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
  YYSYMBOL_GOTO = 21,                      /* "goto"  */
  YYSYMBOL_MATCH = 22,                     /* "match"  */
  YYSYMBOL_CASE = 23,                      /* "case"  */
  YYSYMBOL_WHEN = 24,                      /* "when"  */
  YYSYMBOL_WHERE = 25,                     /* "where"  */
  YYSYMBOL_ENUM = 26,                      /* "enum"  */
  YYSYMBOL_TRETURN = 27,                   /* "return"  */
  YYSYMBOL_BREAK = 28,                     /* "break"  */
  YYSYMBOL_CONTINUE = 29,                  /* "continue"  */
  YYSYMBOL_CLASS = 30,                     /* "class"  */
  YYSYMBOL_STRUCT = 31,                    /* "struct"  */
  YYSYMBOL_STATIC = 32,                    /* "static"  */
  YYSYMBOL_GLOBAL = 33,                    /* "global"  */
  YYSYMBOL_PRIVATE = 34,                   /* "private"  */
  YYSYMBOL_PROTECT = 35,                   /* "protect"  */
  YYSYMBOL_ABSTRACT = 36,                  /* "abstract"  */
  YYSYMBOL_FINAL = 37,                     /* "final"  */
  YYSYMBOL_EXTENDS = 38,                   /* "extends"  */
  YYSYMBOL_DOT = 39,                       /* "."  */
  YYSYMBOL_OPERATOR = 40,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 41,                   /* "typedef"  */
  YYSYMBOL_FUNCDEF = 42,                   /* "funcdef"  */
  YYSYMBOL_NOELSE = 43,                    /* NOELSE  */
  YYSYMBOL_UNION = 44,                     /* "union"  */
  YYSYMBOL_CONSTT = 45,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 46,                   /* "..."  */
  YYSYMBOL_VARLOOP = 47,                   /* "varloop"  */
  YYSYMBOL_BACKSLASH = 48,                 /* "\\"  */
  YYSYMBOL_OPID_A = 49,                    /* OPID_A  */
  YYSYMBOL_OPID_D = 50,                    /* OPID_D  */
  YYSYMBOL_REF = 51,                       /* "ref"  */
  YYSYMBOL_NUM = 52,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 53,                    /* FLOATT  */
  YYSYMBOL_STRING_LIT = 54,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 55,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 56,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 57,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 58,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 59,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 60,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 61,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 62,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 63,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 64,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 65,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 66,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 67,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 68,                  /* "#if"  */
  YYSYMBOL_PP_NL = 69,                     /* "\n"  */
  YYSYMBOL_PP_REQUIRE = 70,                /* "require"  */
  YYSYMBOL_71_operator_id_ = 71,           /* "@<operator id>"  */
  YYSYMBOL_72_operator_id_ = 72,           /* ".<operator id>"  */
  YYSYMBOL_ID = 73,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 74,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 75,                  /* "++"  */
  YYSYMBOL_MINUS = 76,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 77,                /* "--"  */
  YYSYMBOL_TIMES = 78,                     /* "*"  */
  YYSYMBOL_DIVIDE = 79,                    /* "/"  */
  YYSYMBOL_PERCENT = 80,                   /* "%"  */
  YYSYMBOL_DOLLAR = 81,                    /* "$"  */
  YYSYMBOL_QUESTION = 82,                  /* "?"  */
  YYSYMBOL_OPTIONS = 83,                   /* OPTIONS  */
  YYSYMBOL_COLON = 84,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 85,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 86,             /* "?:"  */
  YYSYMBOL_NEW = 87,                       /* "new"  */
  YYSYMBOL_SPORK = 88,                     /* "spork"  */
  YYSYMBOL_FORK = 89,                      /* "fork"  */
  YYSYMBOL_TYPEOF = 90,                    /* "typeof"  */
  YYSYMBOL_L_HACK = 91,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 92,                    /* ">>>"  */
  YYSYMBOL_AND = 93,                       /* "&&"  */
  YYSYMBOL_EQ = 94,                        /* "=="  */
  YYSYMBOL_GE = 95,                        /* ">="  */
  YYSYMBOL_GT = 96,                        /* ">"  */
  YYSYMBOL_LE = 97,                        /* "<="  */
  YYSYMBOL_LT = 98,                        /* "<"  */
  YYSYMBOL_NEQ = 99,                       /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 100,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 101,              /* ">>"  */
  YYSYMBOL_S_AND = 102,                    /* "&"  */
  YYSYMBOL_S_OR = 103,                     /* "|"  */
  YYSYMBOL_S_XOR = 104,                    /* "^"  */
  YYSYMBOL_OR = 105,                       /* "||"  */
  YYSYMBOL_TMPL = 106,                     /* ":["  */
  YYSYMBOL_TILDA = 107,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 108,              /* "!"  */
  YYSYMBOL_DYNOP = 109,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 110,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 111,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 112,                   /* UTIMES  */
  YYSYMBOL_113_ = 113,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 114,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 115,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 116,                 /* $accept  */
  YYSYMBOL_prg = 117,                      /* prg  */
  YYSYMBOL_ast = 118,                      /* ast  */
  YYSYMBOL_section = 119,                  /* section  */
  YYSYMBOL_class_type = 120,               /* class_type  */
  YYSYMBOL_class_def = 121,                /* class_def  */
  YYSYMBOL_class_ext = 122,                /* class_ext  */
  YYSYMBOL_class_body = 123,               /* class_body  */
  YYSYMBOL_id_list = 124,                  /* id_list  */
  YYSYMBOL_stmt_list = 125,                /* stmt_list  */
  YYSYMBOL_fptr_base = 126,                /* fptr_base  */
  YYSYMBOL_func_base = 127,                /* func_base  */
  YYSYMBOL_fptr_def = 128,                 /* fptr_def  */
  YYSYMBOL_type_def = 129,                 /* type_def  */
  YYSYMBOL_type_decl_array = 130,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 131,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 132,          /* type_decl_empty  */
  YYSYMBOL_arg = 133,                      /* arg  */
  YYSYMBOL_arg_list = 134,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 135,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 136,                /* fptr_list  */
  YYSYMBOL_code_stmt = 137,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 138,                  /* stmt_pp  */
  YYSYMBOL_stmt = 139,                     /* stmt  */
  YYSYMBOL_opt_id = 140,                   /* opt_id  */
  YYSYMBOL_enum_def = 141,                 /* enum_def  */
  YYSYMBOL_label_stmt = 142,               /* label_stmt  */
  YYSYMBOL_goto_stmt = 143,                /* goto_stmt  */
  YYSYMBOL_when_exp = 144,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 145,          /* match_case_stmt  */
  YYSYMBOL_match_list = 146,               /* match_list  */
  YYSYMBOL_where_stmt = 147,               /* where_stmt  */
  YYSYMBOL_match_stmt = 148,               /* match_stmt  */
  YYSYMBOL_flow = 149,                     /* flow  */
  YYSYMBOL_loop_stmt = 150,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 151,             /* varloop_stmt  */
  YYSYMBOL_selection_stmt = 152,           /* selection_stmt  */
  YYSYMBOL_breaks = 153,                   /* breaks  */
  YYSYMBOL_jump_stmt = 154,                /* jump_stmt  */
  YYSYMBOL__exp_stmt = 155,                /* _exp_stmt  */
  YYSYMBOL_exp_stmt = 156,                 /* exp_stmt  */
  YYSYMBOL_exp = 157,                      /* exp  */
  YYSYMBOL_binary_exp = 158,               /* binary_exp  */
  YYSYMBOL_call_template = 159,            /* call_template  */
  YYSYMBOL_op = 160,                       /* op  */
  YYSYMBOL_array_exp = 161,                /* array_exp  */
  YYSYMBOL_array_empty = 162,              /* array_empty  */
  YYSYMBOL_range = 163,                    /* range  */
  YYSYMBOL_array = 164,                    /* array  */
  YYSYMBOL_decl_exp = 165,                 /* decl_exp  */
  YYSYMBOL_func_args = 166,                /* func_args  */
  YYSYMBOL_fptr_args = 167,                /* fptr_args  */
  YYSYMBOL_arg_type = 168,                 /* arg_type  */
  YYSYMBOL_decl_template = 169,            /* decl_template  */
  YYSYMBOL_global = 170,                   /* global  */
  YYSYMBOL_storage_flag = 171,             /* storage_flag  */
  YYSYMBOL_access_flag = 172,              /* access_flag  */
  YYSYMBOL_flag = 173,                     /* flag  */
  YYSYMBOL_final = 174,                    /* final  */
  YYSYMBOL_modifier = 175,                 /* modifier  */
  YYSYMBOL_func_def_base = 176,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 177,            /* abstract_fdef  */
  YYSYMBOL_op_op = 178,                    /* op_op  */
  YYSYMBOL_op_base = 179,                  /* op_base  */
  YYSYMBOL_operator = 180,                 /* operator  */
  YYSYMBOL_op_def = 181,                   /* op_def  */
  YYSYMBOL_func_def = 182,                 /* func_def  */
  YYSYMBOL_ref = 183,                      /* ref  */
  YYSYMBOL_type_decl_tmpl = 184,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 185,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 186,         /* type_decl_noflag  */
  YYSYMBOL_option = 187,                   /* option  */
  YYSYMBOL_type_decl_opt = 188,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 189,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 190,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 191,          /* type_decl_flag2  */
  YYSYMBOL_union_list = 192,               /* union_list  */
  YYSYMBOL_union_def = 193,                /* union_def  */
  YYSYMBOL_var_decl_list = 194,            /* var_decl_list  */
  YYSYMBOL_var_decl = 195,                 /* var_decl  */
  YYSYMBOL_arg_decl = 196,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 197,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 198,                    /* eq_op  */
  YYSYMBOL_rel_op = 199,                   /* rel_op  */
  YYSYMBOL_shift_op = 200,                 /* shift_op  */
  YYSYMBOL_add_op = 201,                   /* add_op  */
  YYSYMBOL_mul_op = 202,                   /* mul_op  */
  YYSYMBOL_opt_exp = 203,                  /* opt_exp  */
  YYSYMBOL_con_exp = 204,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 205,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 206,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 207,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 208,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 209,                  /* and_exp  */
  YYSYMBOL_eq_exp = 210,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 211,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 212,                /* shift_exp  */
  YYSYMBOL_add_exp = 213,                  /* add_exp  */
  YYSYMBOL_mul_exp = 214,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 215,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 216,                 /* cast_exp  */
  YYSYMBOL_unary_op = 217,                 /* unary_op  */
  YYSYMBOL_unary_exp = 218,                /* unary_exp  */
  YYSYMBOL_lambda_list = 219,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 220,               /* lambda_arg  */
  YYSYMBOL_type_list = 221,                /* type_list  */
  YYSYMBOL_call_paren = 222,               /* call_paren  */
  YYSYMBOL_post_op = 223,                  /* post_op  */
  YYSYMBOL_dot_exp = 224,                  /* dot_exp  */
  YYSYMBOL_post_exp = 225,                 /* post_exp  */
  YYSYMBOL_interp_exp = 226,               /* interp_exp  */
  YYSYMBOL_interp = 227,                   /* interp  */
  YYSYMBOL_typeof_exp = 228,               /* typeof_exp  */
  YYSYMBOL_prim_exp = 229                  /* prim_exp  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  177
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1541

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  116
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  280
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  460

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   370


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
     115
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   149,   149,   150,   153,   154,   158,   159,   160,   161,
     162,   163,   164,   167,   167,   169,   180,   180,   182,   182,
     184,   184,   186,   187,   189,   192,   195,   201,   208,   208,
     210,   214,   219,   220,   222,   223,   232,   233,   233,   240,
     241,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   271,   271,   274,   277,   279,   281,   281,   284,
     292,   293,   295,   295,   297,   305,   306,   309,   311,   313,
     315,   317,   319,   323,   326,   328,   333,   334,   335,   338,
     339,   342,   342,   345,   346,   350,   351,   354,   355,   356,
     357,   360,   360,   362,   362,   362,   362,   365,   366,   367,
     371,   372,   373,   377,   378,   379,   382,   382,   384,   385,
     387,   387,   388,   388,   389,   389,   391,   391,   393,   395,
     395,   397,   398,   401,   402,   403,   404,   407,   407,   409,
     409,   412,   419,   428,   428,   428,   428,   428,   430,   432,
     434,   439,   445,   445,   446,   449,   449,   449,   451,   451,
     454,   458,   459,   463,   464,   467,   467,   467,   468,   469,
     469,   472,   473,   474,   476,   476,   478,   479,   482,   492,
     493,   496,   497,   499,   500,   501,   502,   502,   504,   504,
     505,   505,   505,   505,   506,   506,   507,   507,   508,   508,
     508,   510,   510,   511,   512,   514,   517,   517,   518,   518,
     519,   519,   520,   520,   521,   521,   522,   522,   523,   523,
     524,   524,   525,   525,   526,   526,   527,   527,   529,   529,
     532,   532,   532,   533,   533,   533,   533,   536,   537,   538,
     539,   540,   541,   542,   545,   546,   547,   547,   550,   551,
     555,   555,   557,   557,   559,   568,   569,   571,   573,   576,
     578,   580,   584,   585,   586,   588,   589,   600,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\";\"", "\",\"",
  "\"(\"", "\")\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"fun\"",
  "\"var\"", "\"if\"", "\"else\"", "\"while\"", "\"do\"", "\"until\"",
  "\"repeat\"", "\"for\"", "\"foreach\"", "\"goto\"", "\"match\"",
  "\"case\"", "\"when\"", "\"where\"", "\"enum\"", "\"return\"",
  "\"break\"", "\"continue\"", "\"class\"", "\"struct\"", "\"static\"",
  "\"global\"", "\"private\"", "\"protect\"", "\"abstract\"", "\"final\"",
  "\"extends\"", "\".\"", "\"operator\"", "\"typedef\"", "\"funcdef\"",
  "NOELSE", "\"union\"", "\"const\"", "\"...\"", "\"varloop\"", "\"\\\\\"",
  "OPID_A", "OPID_D", "\"ref\"", "\"<integer>\"", "FLOATT",
  "\"<litteral string>\"", "\"<litteral char>\"", "\"`\"",
  "\"<interp string>\"", "INTERP_EXP", "\"<interp string>`\"",
  "\"<comment>\"", "\"#include\"", "\"#define\"", "\"#pragma\"",
  "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"", "\"#if\"",
  "\"\\n\"", "\"require\"", "\"@<operator id>\"", "\".<operator id>\"",
  "\"<identifier>\"", "\"+\"", "\"++\"", "\"-\"", "\"--\"", "\"*\"",
  "\"/\"", "\"%\"", "\"$\"", "\"?\"", "OPTIONS", "\":\"", "\"::\"",
  "\"?:\"", "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"", "\"<<<\"",
  "\">>>\"", "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"", "\"<\"",
  "\"!=\"", "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"", "\"||\"",
  "\":[\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"", "RANGE_EMPTY",
  "UMINUS", "UTIMES", "\"=\"", "STMT_ASSOC", "STMT_NOASSOC", "$accept",
  "prg", "ast", "section", "class_type", "class_def", "class_ext",
  "class_body", "id_list", "stmt_list", "fptr_base", "func_base",
  "fptr_def", "type_def", "type_decl_array", "type_decl_exp",
  "type_decl_empty", "arg", "arg_list", "fptr_arg", "fptr_list",
  "code_stmt", "stmt_pp", "stmt", "opt_id", "enum_def", "label_stmt",
  "goto_stmt", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "selection_stmt",
  "breaks", "jump_stmt", "_exp_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "range", "array",
  "decl_exp", "func_args", "fptr_args", "arg_type", "decl_template",
  "global", "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "ref", "type_decl_tmpl", "type_decl_next",
  "type_decl_noflag", "option", "type_decl_opt", "type_decl",
  "type_decl_flag", "type_decl_flag2", "union_list", "union_def",
  "var_decl_list", "var_decl", "arg_decl", "fptr_arg_decl", "eq_op",
  "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp",
  "cast_exp", "unary_op", "unary_exp", "lambda_list", "lambda_arg",
  "type_list", "call_paren", "post_op", "dot_exp", "post_exp",
  "interp_exp", "interp", "typeof_exp", "prim_exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
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
     365,   366,   367,   368,   369,   370
};
#endif

#define YYPACT_NINF (-327)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-103)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     424,    27,   201,   774,   530,    18,  -327,    28,  -327,   627,
    -327,    32,    41,    49,    33,  1296,    18,  1296,  -327,  -327,
    -327,  -327,    70,    18,    18,    18,    67,  1296,    55,  -327,
    -327,  -327,  -327,  -327,   832,  -327,  -327,  -327,  -327,  -327,
    -327,  -327,  -327,  -327,  -327,  -327,    48,  -327,  -327,  -327,
    -327,    25,    25,   124,   124,   129,  1296,  -327,  -327,   136,
    -327,   424,    18,  -327,  -327,  -327,  -327,  -327,  -327,  1450,
    -327,  -327,  -327,  -327,   132,  -327,  -327,  -327,   142,  -327,
    -327,  -327,   143,    22,  -327,   140,  -327,  -327,  -327,  -327,
    -327,   280,  -327,  -327,  -327,    18,  -327,  -327,     3,    46,
      52,    53,    56,   -55,    65,    -9,   -10,   -19,    80,    85,
    1353,  -327,   124,  -327,  -327,    24,   111,  -327,  -327,  -327,
    -327,   162,  -327,   163,  -327,  1296,    30,  -327,   164,  -327,
    -327,  -327,  -327,   167,  -327,  -327,    61,    74,  1296,    40,
    1296,   716,   126,   177,   174,   112,   183,  -327,    25,   182,
      25,   117,  -327,    26,    55,  -327,   832,  -327,   133,  -327,
    -327,    86,  -327,  -327,   154,  -327,    34,  -327,   188,   -41,
    -327,  -327,  -327,  -327,  -327,  1296,   109,  -327,  -327,    84,
    -327,  1296,  -327,  -327,  1296,  1296,  1296,  1296,   890,  -327,
    -327,  -327,  1316,   124,    25,    25,  1296,  1353,  1353,  1353,
    1353,  1353,  1353,  -327,  -327,  1353,  -327,  -327,  -327,  -327,
    1353,  -327,  -327,  1353,  -327,  -327,  1353,  -327,  -327,  -327,
    1353,  1353,    25,  -327,  -327,   948,   137,  -327,    25,   200,
    -327,  -327,  -327,   832,  1353,  -327,   203,   202,  1006,  -327,
      25,    37,  -327,    25,  -327,    25,   209,  1296,   211,   716,
    -327,   145,  -327,   197,  -327,   213,  -327,   150,    25,    37,
     151,   120,  -327,  -327,  -327,   832,  -327,   155,  -327,  -327,
    -327,  1064,  -327,  -327,   221,  -327,  -327,  -327,   156,   224,
    -327,  -327,  -327,  -327,  -327,   223,   167,  -327,  -327,  -327,
    -327,  -327,   227,  -327,  -327,  -327,  -327,   230,  -327,   231,
     166,  -327,   153,  -327,    46,    52,    53,    56,   -55,    65,
      -9,   -10,   -19,    80,    85,  -327,  -327,   236,   233,  1122,
    -327,  -327,  -327,  -327,  1180,  -327,  -327,   234,  -327,   239,
     171,  -327,   242,   124,   172,   185,   627,   247,   627,  1238,
     175,  1296,   197,   250,   189,   120,   257,  -327,   171,   260,
     120,   189,   255,  -327,  -327,  -327,   120,   627,   261,    25,
      25,    25,   188,  -327,   262,  1353,    25,  -327,  -327,   263,
    -327,  -327,    25,   188,   184,  -327,  -327,   120,   120,   256,
    -327,  -327,   627,   266,  1296,   249,  -327,   258,   271,   270,
     278,    25,  -327,  -327,  -327,  -327,   276,    25,   248,  -327,
    -327,   281,   288,   289,  -327,   166,  -327,  -327,  -327,  -327,
    -327,   140,  1296,   182,  -327,   627,  -327,   627,    13,  1296,
     212,   627,  -327,   189,  -327,  -327,  -327,  -327,   214,   277,
      25,   290,    25,   124,  -327,  -327,   -25,    37,  -327,  -327,
     627,  -327,   627,  -327,  -327,    25,  -327,  -327,   424,   291,
    -327,   298,  -327,  -327,  -327,  -327,   292,  -327,  -327,  -327
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    92,     0,     0,     0,   136,   174,     0,    75,     0,
      76,     0,     0,     0,     0,     0,   136,    86,    87,    88,
      13,    14,   152,   136,   136,   136,   172,     0,   247,   171,
     269,   270,   272,   273,     0,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   268,   252,   230,   253,
     231,     0,     0,   234,   235,     0,     0,   236,   233,     0,
       2,     4,   136,     8,     6,    11,    12,    55,    60,    22,
       9,    56,    57,    58,     0,    53,    61,    54,     0,    59,
      94,    52,     0,    95,   116,   117,   275,   274,    97,   155,
     156,     0,   157,     7,   175,   136,    10,   118,   203,   206,
     208,   210,   212,   214,   216,   218,   220,   222,   224,   226,
       0,   228,     0,   232,   261,   237,   271,   280,   255,    91,
     279,     0,   268,     0,   110,     0,     0,    39,     0,   129,
     128,   131,   132,     0,   130,   134,   133,   138,     0,     0,
       0,     0,   158,     0,     0,    63,     0,   153,     0,     0,
       0,     0,   173,     0,   244,   246,     0,   262,     0,   265,
      65,   102,    31,   243,   161,   163,   167,   169,    29,     0,
     164,    30,   240,   241,   242,     0,     0,     1,     5,   138,
      23,     0,    90,    93,     0,     0,     0,     0,     0,   112,
     234,   235,     0,     0,     0,     0,   202,     0,     0,     0,
       0,     0,     0,   188,   189,     0,   193,   191,   192,   190,
       0,   194,   195,     0,   196,   197,     0,   198,   199,   200,
       0,     0,     0,   238,   278,     0,     0,   260,     0,     0,
     256,   257,   259,     0,     0,   277,     0,   107,     0,    40,
     121,     0,   135,     0,   137,     0,     0,     0,     0,     0,
     159,     0,    66,     0,    62,     0,    89,     0,   123,     0,
       0,   127,    83,   245,   263,     0,   160,     0,   165,   166,
     168,     0,    28,   170,     0,   276,   139,   140,     0,     0,
      96,    98,   100,    99,   111,     0,     0,   106,   103,   104,
     105,   143,     0,   145,   144,   147,   146,     0,   154,     0,
       0,   201,     0,   205,   207,   209,   211,   213,   215,   217,
     219,   221,   223,   225,   227,   229,   254,   248,     0,     0,
     258,   266,   239,   115,     0,   108,   114,     0,    34,   120,
       0,   125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,     0,   127,    37,   122,   187,     0,
     127,     0,     0,   264,   162,   267,   127,     0,     0,     0,
       0,     0,   181,   119,   180,     0,     0,   101,   251,     0,
     109,   113,     0,   183,    33,   124,   141,   127,   127,    84,
      78,    82,     0,     0,     0,    68,    71,    73,    20,     0,
       0,     0,   186,    36,    26,    24,     0,     0,    17,    77,
     151,     0,     0,     0,   182,     0,   204,   249,   250,    35,
     185,   184,     0,     0,    25,     0,    79,     0,     0,     0,
       0,     0,    74,     0,    64,    27,    38,   126,   176,     0,
       0,     0,     0,     0,   150,   179,    32,     0,    85,    80,
       0,    67,     0,    72,    21,     0,   178,    16,    19,     0,
     149,     0,    81,    69,   177,    18,     0,   148,   142,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -327,  -327,   -57,  -327,  -327,  -327,  -327,  -327,  -326,    -4,
    -327,  -327,  -327,  -327,   -36,  -127,   -43,  -282,  -327,  -327,
     -87,   -40,  -327,    -8,  -327,  -327,  -327,  -327,  -327,  -327,
     -37,  -327,  -327,   168,  -327,  -327,  -327,  -327,  -327,   305,
    -120,     0,   -20,   149,  -327,   -73,   -62,   206,  -159,   -99,
      31,  -101,  -248,  -309,   294,   186,  -327,    57,   139,  -327,
    -327,  -327,  -327,  -327,  -327,  -327,  -327,  -327,  -327,    60,
    -327,  -327,   160,  -218,   -24,  -327,  -122,  -327,   -72,  -327,
     -16,  -327,  -327,   148,   152,   158,   169,  -327,  -187,  -327,
     161,   135,   146,   159,   141,   147,   165,   134,   173,   157,
     144,   272,   -90,   208,  -327,     5,  -327,   -92,  -327,  -327,
    -138,  -327,   -46,  -327
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,    60,    61,    62,    63,   431,   456,   389,    64,
     149,   133,    65,    66,   162,   172,   317,   328,   329,   346,
     347,    67,    68,    69,   255,    70,    71,    72,   420,   342,
     343,   422,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   229,   291,    84,    85,    86,    87,    88,
     241,   259,   333,   352,   134,   135,   136,   137,   245,   278,
      89,    90,   292,   193,    91,    92,    93,   251,   164,   165,
     166,   270,   167,   168,    94,    95,   429,    96,   363,   364,
     374,   393,   205,   210,   213,   216,   220,   302,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   155,   112,   318,   320,   113,   114,   115,
     159,   116,   117,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     128,   139,   123,   126,   178,   170,   170,   153,   163,   272,
     303,   349,   189,   173,   174,   144,   171,   146,   264,   440,
     223,   249,   330,   232,   185,   396,   184,   169,   169,  -102,
    -103,   225,   161,   138,   158,     4,   390,   140,   237,   203,
     348,   395,   230,   331,   204,   170,   141,   398,   192,    55,
     129,   130,   131,   132,   142,     8,   176,    10,   186,   217,
     218,   219,   185,   226,   214,   180,   215,   169,   413,   414,
      26,   185,   224,   145,   227,   185,    29,   401,   402,   403,
     148,   150,   151,   332,   187,   196,   281,   282,   283,   197,
     409,   211,   212,   129,   130,   321,   186,   444,   161,    47,
     297,    49,   170,   130,   170,   186,   143,   260,   198,   186,
     243,   244,   257,   262,   238,    55,   268,   269,   152,   179,
     276,   244,   187,   170,   169,   236,   169,   353,   154,   339,
     228,   187,   160,     4,   175,   187,   177,   181,   246,   199,
     248,   330,   330,   330,   322,   182,   183,   188,   170,   170,
     449,   299,   195,   298,   330,   200,   158,   201,   202,   300,
     206,   207,   208,   209,   325,   221,   222,   233,   234,   235,
     169,   169,   240,   348,   239,   274,   170,   250,   406,   315,
     252,   279,   170,   253,   280,   254,   256,   258,   285,   451,
     261,   265,   228,   267,   170,   271,   301,   170,   169,   170,
     334,   275,   335,   404,   169,   319,     2,   120,     3,   324,
     316,   323,   170,     6,   330,   336,   169,   338,   340,   169,
     341,   169,   344,   345,   350,   126,   351,   355,   161,   356,
     357,   237,   359,   158,   169,   360,   361,   365,   327,   362,
     366,   367,   371,   372,   373,   377,    26,   337,   375,    28,
     380,   121,    29,    30,    31,    32,    33,    34,   378,   384,
     387,   391,   388,   394,   397,   158,   405,   400,   412,   408,
     415,   285,   417,   419,   122,   423,    47,    48,    49,    50,
     424,   425,    51,   421,   427,   432,   430,   446,    52,    53,
      54,    55,    56,   376,   433,   434,   442,   457,   445,   448,
     410,   458,   459,   447,   426,   386,   119,   247,    57,    58,
     266,   411,   437,   170,   170,   170,   147,   358,   277,   369,
     170,   231,   242,   454,   285,    26,   170,   354,   379,   273,
     381,    29,   392,   435,   305,   169,   169,   169,   189,   383,
     293,   385,   169,   308,   294,   170,   306,   311,   169,   399,
     295,   170,   309,   161,   428,    47,    48,    49,    50,   304,
     307,   296,   263,   194,   418,   314,     0,   169,   190,   191,
      55,   407,     0,   169,   416,   310,     0,   313,     0,     0,
       0,     0,     0,     0,   170,     0,   170,    57,    58,   312,
       0,   455,   436,   450,   171,     0,     0,     0,     0,   170,
       0,     0,   428,     0,     0,     0,   169,   438,   169,   439,
       0,     0,     0,   443,     0,     0,     0,     0,     0,   441,
       0,   169,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,   452,     4,     0,     5,     6,     7,   453,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,     0,    25,    26,
       0,    27,    28,     0,     0,    29,    30,    31,    32,    33,
      34,     0,     0,     0,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,    46,     0,    47,
      48,    49,    50,     0,     0,    51,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    58,     1,     0,     2,     0,     3,     0,     4,
     127,     0,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,    28,     0,
       0,    29,    30,    31,    32,    33,    34,     0,     0,     0,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     0,     0,    46,     0,    47,    48,    49,    50,     0,
       0,    51,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     4,    57,    58,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,     0,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,    28,     0,     0,    29,    30,
      31,    32,    33,    34,     0,     0,     0,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
      46,     0,    47,    48,    49,    50,     0,     0,    51,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,     1,
       0,     2,     0,     3,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,    57,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    28,     0,     0,    29,    30,    31,
      32,    33,    34,     0,     0,     0,     0,     0,     0,     2,
       0,     3,   124,     0,     0,     0,     6,     0,     0,   122,
       0,    47,    48,    49,    50,     0,     0,    51,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    28,    57,    58,    29,    30,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,     0,   122,     0,    47,
      48,    49,    50,     0,     0,    51,     0,     0,   125,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      28,    57,    58,    29,    30,    31,    32,    33,    34,   156,
       0,   157,     0,     0,     0,     2,     0,     3,   284,     0,
       0,     0,     6,     0,     0,   122,     0,    47,    48,    49,
      50,     0,     0,    51,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    28,    57,
      58,    29,    30,    31,    32,    33,    34,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       6,     0,     0,   122,     0,    47,    48,    49,    50,     0,
       0,    51,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    28,    57,    58,    29,
      30,    31,    32,    33,    34,     0,     0,     0,     0,     0,
       0,     2,     0,     3,   326,     0,     0,     0,     6,     0,
       0,   122,     0,    47,    48,    49,    50,     0,     0,    51,
       0,     0,   125,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    28,    57,    58,    29,    30,    31,
      32,    33,    34,     0,     0,     0,     0,     0,     0,     2,
       0,     3,   124,     0,     0,     0,     6,     0,     0,   122,
       0,    47,    48,    49,    50,     0,     0,    51,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    28,    57,    58,    29,    30,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     2,   368,     3,
       0,     0,     0,     0,     6,     0,     0,   122,     0,    47,
      48,    49,    50,     0,     0,    51,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      28,    57,    58,    29,    30,    31,    32,    33,    34,     0,
       0,     0,     0,     0,     0,     2,     0,     3,   370,     0,
       0,     0,     6,     0,     0,   122,     0,    47,    48,    49,
      50,     0,     0,    51,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    28,    57,
      58,    29,    30,    31,    32,    33,    34,     0,     0,     0,
       0,     0,     0,     2,   382,     3,     0,     0,     0,     0,
       6,     0,     0,   122,     0,    47,    48,    49,    50,     0,
       0,    51,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    28,    57,    58,    29,
      30,    31,    32,    33,    34,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     0,     0,     0,     0,     6,     0,
       0,   122,     0,    47,    48,    49,    50,     0,     0,    51,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    28,    57,    58,    29,    30,    31,
      32,    33,    34,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,     0,     0,   286,     0,     0,     0,   122,
       0,    47,    48,    49,    50,     0,     0,    51,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     0,
     214,    47,   215,    49,   217,   218,   219,     0,     0,   287,
       0,    28,     0,    57,    58,    30,    31,    32,    33,    34,
     288,   206,   207,   208,   209,   289,   211,   212,     0,     0,
       0,     0,     0,     0,     0,   290,   122,     0,    47,    48,
      49,    50,     0,     0,    51,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     4,
      57,    58,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,    28,     0,
       0,    29,    30,    31,    32,    33,    34,     0,     0,     0,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     0,     0,    46,     0,    47,     0,    49,     0,     0,
       0,    51,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56
};

static const yytype_int16 yycheck[] =
{
       4,     9,     2,     3,    61,    51,    52,    27,    51,   168,
     197,   259,    85,    53,    54,    15,    52,    17,   156,     6,
     110,   141,   240,   115,    49,   351,     4,    51,    52,     5,
       3,     7,    73,     5,    34,     9,   345,     5,     8,    94,
     258,   350,   115,     6,    99,    91,     5,   356,    91,    90,
      32,    33,    34,    35,     5,    15,    56,    17,    83,    78,
      79,    80,    49,    39,    74,    69,    76,    91,   377,   378,
      45,    49,   112,    16,    50,    49,    51,   359,   360,   361,
      23,    24,    25,    46,   109,    82,   185,   186,   187,    86,
     372,   100,   101,    32,    33,   233,    83,   423,    73,    75,
     192,    77,   148,    33,   150,    83,    73,   150,   105,    83,
      36,    37,   148,   153,    84,    90,    82,    83,    51,    62,
      36,    37,   109,   169,   148,   125,   150,   265,    73,   249,
     106,   109,    84,     9,     5,   109,     0,     5,   138,    93,
     140,   359,   360,   361,   234,     3,     3,     7,   194,   195,
     432,   194,    95,   193,   372,   103,   156,   104,   102,   195,
      95,    96,    97,    98,   237,    85,    81,    56,     6,     6,
     194,   195,     5,   391,    10,   175,   222,    51,   365,   222,
       3,   181,   228,     9,   184,    73,     3,     5,   188,   437,
      73,    58,   106,    39,   240,     7,   196,   243,   222,   245,
     243,    92,   245,   362,   228,     5,     5,     6,     7,     7,
      73,     8,   258,    12,   432,     6,   240,     6,    73,   243,
      23,   245,     9,    73,    73,   225,   106,     6,    73,    73,
       6,     8,     5,   233,   258,     5,     5,    84,   238,    73,
       4,     8,     8,     4,    73,    73,    45,   247,     6,    48,
       3,    50,    51,    52,    53,    54,    55,    56,    73,    84,
      10,     4,    73,     3,     9,   265,     4,     6,    84,     6,
      14,   271,     6,    24,    73,     4,    75,    76,    77,    78,
      10,     3,    81,    25,     8,     4,    38,    10,    87,    88,
      89,    90,    91,   333,     6,     6,    84,     6,    84,     9,
     373,     3,    10,   430,   391,   342,     1,   139,   107,   108,
     161,   373,   413,   359,   360,   361,    22,   286,   179,   319,
     366,   115,   136,   445,   324,    45,   372,   267,   336,   169,
     338,    51,   348,   405,   199,   359,   360,   361,   411,   339,
     192,   341,   366,   202,   192,   391,   200,   213,   372,   357,
     192,   397,   205,    73,   397,    75,    76,    77,    78,   198,
     201,   192,   154,    91,   384,   221,    -1,   391,    88,    89,
      90,   366,    -1,   397,   382,   210,    -1,   220,    -1,    -1,
      -1,    -1,    -1,    -1,   430,    -1,   432,   107,   108,   216,
      -1,   448,   412,   433,   430,    -1,    -1,    -1,    -1,   445,
      -1,    -1,   445,    -1,    -1,    -1,   430,   415,   432,   417,
      -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,   419,
      -1,   445,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,   440,     9,    -1,    11,    12,    13,   442,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    -1,    44,    45,
      -1,    47,    48,    -1,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,   108,     3,    -1,     5,    -1,     7,    -1,     9,
      10,    -1,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,
      -1,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    -1,    73,    -1,    75,    76,    77,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,     9,   107,   108,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    47,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,     3,
      -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    48,   107,   108,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    -1,    81,    -1,    -1,    84,    -1,
      -1,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      48,   107,   108,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      -1,    -1,    12,    -1,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,   107,
     108,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    73,    -1,    75,    76,    77,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    48,   107,   108,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    -1,    81,
      -1,    -1,    84,    -1,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,   107,   108,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    48,   107,   108,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      48,   107,   108,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      -1,    -1,    12,    -1,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,   107,
     108,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    73,    -1,    75,    76,    77,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    48,   107,   108,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,   107,   108,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      -1,    48,    -1,   107,   108,    52,    53,    54,    55,    56,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    73,    -1,    75,    76,
      77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,     9,
     107,   108,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,
      -1,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    26,    27,    28,    29,
      30,    31,    40,    41,    42,    44,    45,    47,    48,    51,
      52,    53,    54,    55,    56,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    73,    75,    76,    77,
      78,    81,    87,    88,    89,    90,    91,   107,   108,   117,
     118,   119,   120,   121,   125,   128,   129,   137,   138,   139,
     141,   142,   143,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   161,   162,   163,   164,   165,   176,
     177,   180,   181,   182,   190,   191,   193,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   220,   223,   224,   225,   227,   228,   229,   155,
       6,    50,    73,   157,     8,    84,   157,    10,   125,    32,
      33,    34,    35,   127,   170,   171,   172,   173,     5,   139,
       5,     5,     5,    73,   157,   173,   157,   170,   173,   126,
     173,   173,    51,   158,    73,   219,    57,    59,   157,   226,
      84,    73,   130,   132,   184,   185,   186,   188,   189,   190,
     228,   130,   131,   137,   137,     5,   157,     0,   118,   173,
     125,     5,     3,     3,     4,    49,    83,   109,     7,   161,
      88,    89,   132,   179,   217,   173,    82,    86,   105,    93,
     103,   104,   102,    94,    99,   198,    95,    96,    97,    98,
     199,   100,   101,   200,    74,    76,   201,    78,    79,    80,
     202,    85,    81,   218,   137,     7,    39,    50,   106,   159,
     161,   163,   223,    56,     6,     6,   157,     8,    84,    10,
       5,   166,   171,    36,    37,   174,   157,   149,   157,   156,
      51,   183,     3,     9,    73,   140,     3,   130,     5,   167,
     132,    73,   137,   219,   226,    58,   159,    39,    82,    83,
     187,     7,   164,   188,   157,    92,    36,   174,   175,   157,
     157,   165,   165,   165,     8,   157,    49,    83,    94,    99,
     109,   160,   178,   199,   200,   201,   202,   223,   137,   132,
     130,   157,   203,   204,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   132,    73,   132,   221,     5,
     222,   226,   218,     8,     7,   161,     8,   157,   133,   134,
     189,     6,    46,   168,   132,   132,     6,   157,     6,   156,
      73,    23,   145,   146,     9,    73,   135,   136,   189,   168,
      73,   106,   169,   226,   185,     6,    73,     6,   166,     5,
       5,     5,    73,   194,   195,    84,     4,     8,     6,   157,
       8,     8,     4,    73,   196,     6,   137,    73,    73,   139,
       3,   139,     6,   157,    84,   157,   146,    10,    73,   124,
     169,     4,   196,   197,     3,   169,   124,     9,   169,   139,
       6,   133,   133,   133,   164,     4,   204,   221,     6,   133,
     161,   162,    84,   169,   169,    14,   139,     6,   158,    24,
     144,    25,   147,     4,    10,     3,   136,     8,   132,   192,
      38,   122,     4,     6,     6,   194,   158,   167,   139,   139,
       6,   157,    84,   139,   124,    84,    10,   131,     9,   133,
     137,   168,   139,   125,   192,   118,   123,     6,     3,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   116,   117,   117,   118,   118,   119,   119,   119,   119,
     119,   119,   119,   120,   120,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   127,   128,   129,   130,   130,
     131,   132,   133,   133,   134,   134,   135,   136,   136,   137,
     137,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   140,   140,   141,   142,   143,   144,   144,   145,
     146,   146,   147,   147,   148,   149,   149,   150,   150,   150,
     150,   150,   150,   151,   152,   152,   153,   153,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   158,
     158,   159,   159,   160,   160,   160,   160,   161,   161,   161,
     162,   162,   162,   163,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   169,   169,   170,   171,
     171,   172,   172,   173,   173,   173,   173,   174,   174,   175,
     175,   176,   177,   178,   178,   178,   178,   178,   179,   179,
     179,   179,   180,   180,   181,   182,   182,   182,   183,   183,
     184,   185,   185,   186,   186,   187,   187,   187,   188,   189,
     189,   190,   190,   190,   191,   191,   192,   192,   193,   194,
     194,   195,   195,   196,   196,   196,   197,   197,   198,   198,
     199,   199,   199,   199,   200,   200,   201,   201,   202,   202,
     202,   203,   203,   204,   204,   204,   205,   205,   206,   206,
     207,   207,   208,   208,   209,   209,   210,   210,   211,   211,
     212,   212,   213,   213,   214,   214,   215,   215,   216,   216,
     217,   217,   217,   217,   217,   217,   217,   218,   218,   218,
     218,   218,   218,   218,   219,   219,   220,   220,   221,   221,
     222,   222,   223,   223,   224,   225,   225,   225,   225,   225,
     225,   225,   226,   226,   226,   227,   227,   228,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     9,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     5,     5,     6,     2,     1,
       1,     1,     4,     2,     1,     3,     2,     1,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     2,     3,     2,     0,     5,
       1,     2,     2,     0,     6,     1,     1,     5,     5,     6,
       7,     8,     5,     3,     5,     7,     1,     1,     1,     3,
       2,     2,     1,     2,     1,     1,     3,     1,     3,     3,
       3,     3,     0,     1,     1,     1,     1,     3,     4,     5,
       2,     3,     2,     5,     4,     4,     1,     1,     1,     4,
       2,     1,     2,     1,     2,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     0,     1,
       1,     5,     9,     1,     1,     1,     1,     1,     7,     6,
       5,     4,     1,     2,     3,     1,     1,     1,     0,     1,
       2,     1,     3,     1,     1,     1,     1,     0,     2,     1,
       2,     1,     1,     2,     1,     1,     1,     3,     7,     3,
       1,     1,     2,     1,     2,     2,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     5,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       2,     2,     2,     2,     1,     2,     2,     1,     1,     3,
       3,     2,     1,     1,     3,     1,     2,     2,     3,     2,
       2,     1,     1,     2,     3,     2,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     2,
       1
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
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Scanner* arg)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_ast: /* ast  */
#line 146 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1728 "src/parser.c"
        break;

      default:
        break;
    }
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
#line 149 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2029 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 150 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2035 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 153 "src/gwion.y"
            { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2041 "src/parser.c"
    break;

  case 5: /* ast: section ast  */
#line 154 "src/gwion.y"
                { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)) : new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2047 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 158 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2053 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 159 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2059 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 160 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2065 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 161 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2071 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 162 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2077 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 163 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2083 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 164 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2089 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 167 "src/gwion.y"
                  { (yyval.cflag) = cflag_none; }
#line 2095 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 167 "src/gwion.y"
                                                { (yyval.cflag) = cflag_struct; }
#line 2101 "src/parser.c"
    break;

  case 15: /* class_def: class_type flag modifier "<identifier>" decl_template class_ext "{" class_body "}"  */
#line 170 "src/gwion.y"
    {
      if((yyvsp[-8].cflag) == cflag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-8].cflag) | (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      if((yyvsp[-8].cflag))
        (yyval.class_def)->cflag |= cflag_struct;
  }
#line 2115 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 180 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2121 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 180 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2127 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 182 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2133 "src/parser.c"
    break;

  case 20: /* id_list: "<identifier>"  */
#line 184 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); }
#line 2139 "src/parser.c"
    break;

  case 21: /* id_list: "<identifier>" "," id_list  */
#line 184 "src/gwion.y"
                                                                      { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list)); }
#line 2145 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 186 "src/gwion.y"
                                   { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2151 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt stmt_list  */
#line 187 "src/gwion.y"
                                  { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2157 "src/parser.c"
    break;

  case 24: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 189 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2164 "src/parser.c"
    break;

  case 25: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 192 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2171 "src/parser.c"
    break;

  case 26: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 195 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2181 "src/parser.c"
    break;

  case 27: /* type_def: "typedef" flag type_decl_array "<identifier>" decl_template ";"  */
#line 201 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2192 "src/parser.c"
    break;

  case 28: /* type_decl_array: type_decl array  */
#line 208 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2198 "src/parser.c"
    break;

  case 30: /* type_decl_exp: type_decl_array  */
#line 210 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2206 "src/parser.c"
    break;

  case 31: /* type_decl_empty: type_decl_array  */
#line 214 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2214 "src/parser.c"
    break;

  case 32: /* arg: type_decl arg_decl ":" binary_exp  */
#line 219 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2220 "src/parser.c"
    break;

  case 33: /* arg: type_decl arg_decl  */
#line 220 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2226 "src/parser.c"
    break;

  case 34: /* arg_list: arg  */
#line 222 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2232 "src/parser.c"
    break;

  case 35: /* arg_list: arg_list "," arg  */
#line 223 "src/gwion.y"
                        {
     Arg_List last = (yyvsp[-2].arg_list);
     while(last->next)
       last = last->next;
     if(last->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
     last->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 2245 "src/parser.c"
    break;

  case 36: /* fptr_arg: type_decl fptr_arg_decl  */
#line 232 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2251 "src/parser.c"
    break;

  case 37: /* fptr_list: fptr_arg  */
#line 233 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2257 "src/parser.c"
    break;

  case 38: /* fptr_list: fptr_arg "," fptr_list  */
#line 233 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2267 "src/parser.c"
    break;

  case 39: /* code_stmt: "{" "}"  */
#line 240 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2273 "src/parser.c"
    break;

  case 40: /* code_stmt: "{" stmt_list "}"  */
#line 241 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), GET_LOC(&(yyloc))); }
#line 2279 "src/parser.c"
    break;

  case 41: /* stmt_pp: "<comment>"  */
#line 245 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2285 "src/parser.c"
    break;

  case 42: /* stmt_pp: "#include"  */
#line 246 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2291 "src/parser.c"
    break;

  case 43: /* stmt_pp: "#define"  */
#line 247 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2297 "src/parser.c"
    break;

  case 44: /* stmt_pp: "#pragma"  */
#line 248 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2303 "src/parser.c"
    break;

  case 45: /* stmt_pp: "#undef"  */
#line 249 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2309 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#ifdef"  */
#line 250 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2315 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#ifndef"  */
#line 251 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2321 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#else"  */
#line 252 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2327 "src/parser.c"
    break;

  case 49: /* stmt_pp: "#if"  */
#line 253 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2333 "src/parser.c"
    break;

  case 50: /* stmt_pp: "\n"  */
#line 254 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2339 "src/parser.c"
    break;

  case 51: /* stmt_pp: "require"  */
#line 255 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2345 "src/parser.c"
    break;

  case 63: /* opt_id: %empty  */
#line 271 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2351 "src/parser.c"
    break;

  case 64: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 274 "src/gwion.y"
                                           { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-4].flag); }
#line 2358 "src/parser.c"
    break;

  case 65: /* label_stmt: "<identifier>" ":"  */
#line 277 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2364 "src/parser.c"
    break;

  case 66: /* goto_stmt: "goto" "<identifier>" ";"  */
#line 279 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2370 "src/parser.c"
    break;

  case 67: /* when_exp: "when" exp  */
#line 281 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2376 "src/parser.c"
    break;

  case 68: /* when_exp: %empty  */
#line 281 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2382 "src/parser.c"
    break;

  case 69: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 284 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2393 "src/parser.c"
    break;

  case 70: /* match_list: match_case_stmt  */
#line 292 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2399 "src/parser.c"
    break;

  case 71: /* match_list: match_case_stmt match_list  */
#line 293 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2405 "src/parser.c"
    break;

  case 72: /* where_stmt: "where" stmt  */
#line 295 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2411 "src/parser.c"
    break;

  case 73: /* where_stmt: %empty  */
#line 295 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2417 "src/parser.c"
    break;

  case 74: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 297 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2428 "src/parser.c"
    break;

  case 75: /* flow: "while"  */
#line 305 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2434 "src/parser.c"
    break;

  case 76: /* flow: "until"  */
#line 306 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2440 "src/parser.c"
    break;

  case 77: /* loop_stmt: flow "(" exp ")" stmt  */
#line 310 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0, GET_LOC(&(yyloc))); }
#line 2446 "src/parser.c"
    break;

  case 78: /* loop_stmt: "do" stmt flow exp ";"  */
#line 312 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1, GET_LOC(&(yyloc))); }
#line 2452 "src/parser.c"
    break;

  case 79: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 314 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2458 "src/parser.c"
    break;

  case 80: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 316 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2464 "src/parser.c"
    break;

  case 81: /* loop_stmt: "foreach" "(" ref "<identifier>" ":" binary_exp ")" stmt  */
#line 318 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); (yyval.stmt)->d.stmt_each.is_ptr = (yyvsp[-5].ival); }
#line 2470 "src/parser.c"
    break;

  case 82: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 320 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2476 "src/parser.c"
    break;

  case 83: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 323 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2482 "src/parser.c"
    break;

  case 84: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 327 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2488 "src/parser.c"
    break;

  case 85: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 329 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), GET_LOC(&(yyloc))); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2494 "src/parser.c"
    break;

  case 86: /* breaks: "return"  */
#line 333 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2500 "src/parser.c"
    break;

  case 87: /* breaks: "break"  */
#line 334 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2506 "src/parser.c"
    break;

  case 88: /* breaks: "continue"  */
#line 335 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2512 "src/parser.c"
    break;

  case 89: /* jump_stmt: "return" exp ";"  */
#line 338 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 2518 "src/parser.c"
    break;

  case 90: /* jump_stmt: breaks ";"  */
#line 339 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2524 "src/parser.c"
    break;

  case 91: /* _exp_stmt: ";" _exp_stmt  */
#line 342 "src/gwion.y"
                               { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2530 "src/parser.c"
    break;

  case 92: /* _exp_stmt: ";"  */
#line 342 "src/gwion.y"
                                                        { (yyval.stmt) = NULL; }
#line 2536 "src/parser.c"
    break;

  case 93: /* exp_stmt: exp ";"  */
#line 345 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 2542 "src/parser.c"
    break;

  case 94: /* exp_stmt: _exp_stmt  */
#line 346 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2548 "src/parser.c"
    break;

  case 96: /* exp: binary_exp "," exp  */
#line 351 "src/gwion.y"
                         { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2554 "src/parser.c"
    break;

  case 98: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 355 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2560 "src/parser.c"
    break;

  case 99: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 356 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2566 "src/parser.c"
    break;

  case 100: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 357 "src/gwion.y"
                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2572 "src/parser.c"
    break;

  case 101: /* call_template: ":[" type_list "]"  */
#line 360 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2578 "src/parser.c"
    break;

  case 102: /* call_template: %empty  */
#line 360 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2584 "src/parser.c"
    break;

  case 107: /* array_exp: "[" exp "]"  */
#line 365 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2590 "src/parser.c"
    break;

  case 108: /* array_exp: "[" exp "]" array_exp  */
#line 366 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2596 "src/parser.c"
    break;

  case 109: /* array_exp: "[" exp "]" "[" "]"  */
#line 367 "src/gwion.y"
                                     { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2602 "src/parser.c"
    break;

  case 110: /* array_empty: "[" "]"  */
#line 371 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2608 "src/parser.c"
    break;

  case 111: /* array_empty: array_empty "[" "]"  */
#line 372 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2614 "src/parser.c"
    break;

  case 112: /* array_empty: array_empty array_exp  */
#line 373 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2620 "src/parser.c"
    break;

  case 113: /* range: "[" exp ":" exp "]"  */
#line 377 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2626 "src/parser.c"
    break;

  case 114: /* range: "[" exp ":" "]"  */
#line 378 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2632 "src/parser.c"
    break;

  case 115: /* range: "[" ":" exp "]"  */
#line 379 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2638 "src/parser.c"
    break;

  case 119: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 385 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), GET_LOC(&(yyloc))); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2644 "src/parser.c"
    break;

  case 120: /* func_args: "(" arg_list  */
#line 387 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2650 "src/parser.c"
    break;

  case 121: /* func_args: "("  */
#line 387 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2656 "src/parser.c"
    break;

  case 122: /* fptr_args: "(" fptr_list  */
#line 388 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2662 "src/parser.c"
    break;

  case 123: /* fptr_args: "("  */
#line 388 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2668 "src/parser.c"
    break;

  case 124: /* arg_type: "..." ")"  */
#line 389 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 2674 "src/parser.c"
    break;

  case 125: /* arg_type: ")"  */
#line 389 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 2680 "src/parser.c"
    break;

  case 126: /* decl_template: ":[" id_list "]"  */
#line 391 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2686 "src/parser.c"
    break;

  case 127: /* decl_template: %empty  */
#line 391 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2692 "src/parser.c"
    break;

  case 128: /* global: "global"  */
#line 393 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = 1; }
#line 2698 "src/parser.c"
    break;

  case 129: /* storage_flag: "static"  */
#line 395 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2704 "src/parser.c"
    break;

  case 131: /* access_flag: "private"  */
#line 397 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2710 "src/parser.c"
    break;

  case 132: /* access_flag: "protect"  */
#line 398 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2716 "src/parser.c"
    break;

  case 133: /* flag: access_flag  */
#line 401 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2722 "src/parser.c"
    break;

  case 134: /* flag: storage_flag  */
#line 402 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2728 "src/parser.c"
    break;

  case 135: /* flag: access_flag storage_flag  */
#line 403 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2734 "src/parser.c"
    break;

  case 136: /* flag: %empty  */
#line 404 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 2740 "src/parser.c"
    break;

  case 137: /* final: "final"  */
#line 407 "src/gwion.y"
             { (yyval.flag) = ae_flag_final; }
#line 2746 "src/parser.c"
    break;

  case 138: /* final: %empty  */
#line 407 "src/gwion.y"
                                       { (yyval.flag) = ae_flag_none; }
#line 2752 "src/parser.c"
    break;

  case 139: /* modifier: "abstract"  */
#line 409 "src/gwion.y"
                   { (yyval.flag) = ae_flag_abstract; }
#line 2758 "src/parser.c"
    break;

  case 141: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 412 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc)));
  }
#line 2768 "src/parser.c"
    break;

  case 142: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 420 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract);
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL, GET_LOC(&(yyloc)));
    }
#line 2780 "src/parser.c"
    break;

  case 148: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 431 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 2786 "src/parser.c"
    break;

  case 149: /* op_base: type_decl_empty post_op "(" arg ")" code_stmt  */
#line 433 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_none); }
#line 2792 "src/parser.c"
    break;

  case 150: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 435 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 2801 "src/parser.c"
    break;

  case 151: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 440 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 2810 "src/parser.c"
    break;

  case 152: /* operator: "operator"  */
#line 445 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 2816 "src/parser.c"
    break;

  case 153: /* operator: "operator" global  */
#line 445 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 2822 "src/parser.c"
    break;

  case 154: /* op_def: operator op_base code_stmt  */
#line 447 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc))); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 2828 "src/parser.c"
    break;

  case 157: /* func_def: op_def  */
#line 449 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 2834 "src/parser.c"
    break;

  case 158: /* ref: %empty  */
#line 451 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 2840 "src/parser.c"
    break;

  case 159: /* ref: "ref"  */
#line 451 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 2846 "src/parser.c"
    break;

  case 160: /* type_decl_tmpl: "<identifier>" call_template  */
#line 454 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), GET_LOC(&(yyloc))); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 2852 "src/parser.c"
    break;

  case 162: /* type_decl_next: type_decl_tmpl "." type_decl_next  */
#line 459 "src/gwion.y"
                                      { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 2858 "src/parser.c"
    break;

  case 163: /* type_decl_noflag: type_decl_next  */
#line 463 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2864 "src/parser.c"
    break;

  case 164: /* type_decl_noflag: typeof_exp  */
#line 464 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2870 "src/parser.c"
    break;

  case 165: /* option: "?"  */
#line 467 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 2876 "src/parser.c"
    break;

  case 166: /* option: OPTIONS  */
#line 467 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 2882 "src/parser.c"
    break;

  case 167: /* option: %empty  */
#line 467 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 2888 "src/parser.c"
    break;

  case 168: /* type_decl_opt: type_decl_noflag option  */
#line 468 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option |= (yyvsp[0].uval); }
#line 2894 "src/parser.c"
    break;

  case 170: /* type_decl: type_decl_flag type_decl_opt  */
#line 469 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 2900 "src/parser.c"
    break;

  case 171: /* type_decl_flag: "ref"  */
#line 472 "src/gwion.y"
        { (yyval.flag) = ae_flag_ref; }
#line 2906 "src/parser.c"
    break;

  case 172: /* type_decl_flag: "const"  */
#line 473 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 2912 "src/parser.c"
    break;

  case 173: /* type_decl_flag: "const" "ref"  */
#line 474 "src/gwion.y"
               { (yyval.flag) = ae_flag_const | ae_flag_ref; }
#line 2918 "src/parser.c"
    break;

  case 174: /* type_decl_flag2: "var"  */
#line 476 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 2924 "src/parser.c"
    break;

  case 176: /* union_list: type_decl_empty  */
#line 478 "src/gwion.y"
                            { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 2930 "src/parser.c"
    break;

  case 177: /* union_list: type_decl_empty ":" union_list  */
#line 479 "src/gwion.y"
                                   { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 2936 "src/parser.c"
    break;

  case 178: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 482 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].type_list), GET_LOC(&(yyloc)));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 2948 "src/parser.c"
    break;

  case 179: /* var_decl_list: var_decl "," var_decl_list  */
#line 492 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2954 "src/parser.c"
    break;

  case 180: /* var_decl_list: var_decl  */
#line 493 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2960 "src/parser.c"
    break;

  case 181: /* var_decl: "<identifier>"  */
#line 496 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2966 "src/parser.c"
    break;

  case 182: /* var_decl: "<identifier>" array  */
#line 497 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2972 "src/parser.c"
    break;

  case 183: /* arg_decl: "<identifier>"  */
#line 499 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2978 "src/parser.c"
    break;

  case 184: /* arg_decl: "<identifier>" array_empty  */
#line 500 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2984 "src/parser.c"
    break;

  case 185: /* arg_decl: "<identifier>" array_exp  */
#line 501 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2990 "src/parser.c"
    break;

  case 187: /* fptr_arg_decl: %empty  */
#line 502 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, GET_LOC(&(yyloc))); }
#line 2996 "src/parser.c"
    break;

  case 202: /* opt_exp: %empty  */
#line 510 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 3002 "src/parser.c"
    break;

  case 204: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 513 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3008 "src/parser.c"
    break;

  case 205: /* con_exp: log_or_exp "?:" con_exp  */
#line 515 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3014 "src/parser.c"
    break;

  case 207: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 517 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3020 "src/parser.c"
    break;

  case 209: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 518 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3026 "src/parser.c"
    break;

  case 211: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 519 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3032 "src/parser.c"
    break;

  case 213: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 520 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3038 "src/parser.c"
    break;

  case 215: /* and_exp: and_exp "&" eq_exp  */
#line 521 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3044 "src/parser.c"
    break;

  case 217: /* eq_exp: eq_exp eq_op rel_exp  */
#line 522 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3050 "src/parser.c"
    break;

  case 219: /* rel_exp: rel_exp rel_op shift_exp  */
#line 523 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3056 "src/parser.c"
    break;

  case 221: /* shift_exp: shift_exp shift_op add_exp  */
#line 524 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3062 "src/parser.c"
    break;

  case 223: /* add_exp: add_exp add_op mul_exp  */
#line 525 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3068 "src/parser.c"
    break;

  case 225: /* mul_exp: mul_exp mul_op dur_exp  */
#line 526 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3074 "src/parser.c"
    break;

  case 227: /* dur_exp: dur_exp "::" cast_exp  */
#line 527 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3080 "src/parser.c"
    break;

  case 229: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 530 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), GET_LOC(&(yyloc))); }
#line 3086 "src/parser.c"
    break;

  case 238: /* unary_exp: unary_op unary_exp  */
#line 537 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3092 "src/parser.c"
    break;

  case 239: /* unary_exp: "(" OPID_D ")" unary_exp  */
#line 538 "src/gwion.y"
                                   { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3098 "src/parser.c"
    break;

  case 240: /* unary_exp: "new" type_decl_exp  */
#line 539 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), GET_LOC(&(yyloc))); }
#line 3104 "src/parser.c"
    break;

  case 241: /* unary_exp: "spork" code_stmt  */
#line 540 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3110 "src/parser.c"
    break;

  case 242: /* unary_exp: "fork" code_stmt  */
#line 541 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3116 "src/parser.c"
    break;

  case 243: /* unary_exp: "$" type_decl_empty  */
#line 542 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), GET_LOC(&(yyloc))); }
#line 3122 "src/parser.c"
    break;

  case 244: /* lambda_list: "<identifier>"  */
#line 545 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3128 "src/parser.c"
    break;

  case 245: /* lambda_list: "<identifier>" lambda_list  */
#line 546 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3134 "src/parser.c"
    break;

  case 246: /* lambda_arg: "\\" lambda_list  */
#line 547 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3140 "src/parser.c"
    break;

  case 247: /* lambda_arg: "\\"  */
#line 547 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3146 "src/parser.c"
    break;

  case 248: /* type_list: type_decl_empty  */
#line 550 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3152 "src/parser.c"
    break;

  case 249: /* type_list: type_decl_empty "," type_list  */
#line 551 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3158 "src/parser.c"
    break;

  case 250: /* call_paren: "(" exp ")"  */
#line 555 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3164 "src/parser.c"
    break;

  case 251: /* call_paren: "(" ")"  */
#line 555 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3170 "src/parser.c"
    break;

  case 254: /* dot_exp: post_exp "." "<identifier>"  */
#line 559 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    gwion_error(&(yyloc), arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), GET_LOC(&(yyloc)));
}
#line 3183 "src/parser.c"
    break;

  case 256: /* post_exp: post_exp array_exp  */
#line 570 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3189 "src/parser.c"
    break;

  case 257: /* post_exp: post_exp range  */
#line 572 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3195 "src/parser.c"
    break;

  case 258: /* post_exp: post_exp call_template call_paren  */
#line 574 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), GET_LOC(&(yyloc)));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3202 "src/parser.c"
    break;

  case 259: /* post_exp: post_exp post_op  */
#line 577 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3208 "src/parser.c"
    break;

  case 260: /* post_exp: post_exp OPID_D  */
#line 579 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3214 "src/parser.c"
    break;

  case 261: /* post_exp: dot_exp  */
#line 580 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3220 "src/parser.c"
    break;

  case 262: /* interp_exp: "<interp string>`"  */
#line 584 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3226 "src/parser.c"
    break;

  case 263: /* interp_exp: "<interp string>" interp_exp  */
#line 585 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), GET_LOC(&(yyloc))); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3232 "src/parser.c"
    break;

  case 264: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 586 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3238 "src/parser.c"
    break;

  case 265: /* interp: "`" interp_exp  */
#line 588 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3244 "src/parser.c"
    break;

  case 266: /* interp: interp "`" interp_exp  */
#line 589 "src/gwion.y"
                                 {
  if(!(yyvsp[0].exp)->next) {
    char c[strlen((yyvsp[-2].exp)->d.prim.d.str) + strlen((yyvsp[0].exp)->d.prim.d.str) + 1];
    sprintf(c, "%s%s\n", (yyvsp[-2].exp)->d.prim.d.str, (yyvsp[0].exp)->d.prim.d.str);
    (yyvsp[-2].exp)->d.prim.d.str = s_name(insert_symbol(c));
    (yyvsp[-2].exp)->pos->last = (yyvsp[0].exp)->pos->last;
    free_exp(mpool(arg), (yyvsp[0].exp));
  } else
  (yyvsp[-2].exp)->next = (yyvsp[0].exp);
}
#line 3259 "src/parser.c"
    break;

  case 267: /* typeof_exp: "typeof" "(" exp ")"  */
#line 600 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3265 "src/parser.c"
    break;

  case 268: /* prim_exp: "<identifier>"  */
#line 603 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3271 "src/parser.c"
    break;

  case 269: /* prim_exp: "<integer>"  */
#line 604 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3277 "src/parser.c"
    break;

  case 270: /* prim_exp: FLOATT  */
#line 605 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3283 "src/parser.c"
    break;

  case 271: /* prim_exp: interp  */
#line 606 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3289 "src/parser.c"
    break;

  case 272: /* prim_exp: "<litteral string>"  */
#line 607 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3295 "src/parser.c"
    break;

  case 273: /* prim_exp: "<litteral char>"  */
#line 608 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3301 "src/parser.c"
    break;

  case 274: /* prim_exp: array  */
#line 609 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3307 "src/parser.c"
    break;

  case 275: /* prim_exp: range  */
#line 610 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3313 "src/parser.c"
    break;

  case 276: /* prim_exp: "<<<" exp ">>>"  */
#line 611 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3319 "src/parser.c"
    break;

  case 277: /* prim_exp: "(" exp ")"  */
#line 612 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3325 "src/parser.c"
    break;

  case 278: /* prim_exp: lambda_arg code_stmt  */
#line 613 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3331 "src/parser.c"
    break;

  case 279: /* prim_exp: "(" ")"  */
#line 614 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3337 "src/parser.c"
    break;

  case 280: /* prim_exp: typeof_exp  */
#line 615 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3343 "src/parser.c"
    break;


#line 3347 "src/parser.c"

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
      yyerror (&yylloc, arg, YY_("syntax error"));
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


#if !defined yyoverflow
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

  return yyresult;
}

#line 617 "src/gwion.y"

