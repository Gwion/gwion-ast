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
  YYSYMBOL_COLON = 83,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 84,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 85,             /* "?:"  */
  YYSYMBOL_NEW = 86,                       /* "new"  */
  YYSYMBOL_SPORK = 87,                     /* "spork"  */
  YYSYMBOL_FORK = 88,                      /* "fork"  */
  YYSYMBOL_TYPEOF = 89,                    /* "typeof"  */
  YYSYMBOL_L_HACK = 90,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 91,                    /* ">>>"  */
  YYSYMBOL_AND = 92,                       /* "&&"  */
  YYSYMBOL_EQ = 93,                        /* "=="  */
  YYSYMBOL_GE = 94,                        /* ">="  */
  YYSYMBOL_GT = 95,                        /* ">"  */
  YYSYMBOL_LE = 96,                        /* "<="  */
  YYSYMBOL_LT = 97,                        /* "<"  */
  YYSYMBOL_NEQ = 98,                       /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 99,                /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 100,              /* ">>"  */
  YYSYMBOL_S_AND = 101,                    /* "&"  */
  YYSYMBOL_S_OR = 102,                     /* "|"  */
  YYSYMBOL_S_XOR = 103,                    /* "^"  */
  YYSYMBOL_OR = 104,                       /* "||"  */
  YYSYMBOL_TMPL = 105,                     /* ":["  */
  YYSYMBOL_TILDA = 106,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 107,              /* "!"  */
  YYSYMBOL_DYNOP = 108,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 109,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 110,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 111,                   /* UTIMES  */
  YYSYMBOL_112_ = 112,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 113,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 114,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 115,                 /* $accept  */
  YYSYMBOL_prg = 116,                      /* prg  */
  YYSYMBOL_ast = 117,                      /* ast  */
  YYSYMBOL_section = 118,                  /* section  */
  YYSYMBOL_class_type = 119,               /* class_type  */
  YYSYMBOL_class_def = 120,                /* class_def  */
  YYSYMBOL_class_ext = 121,                /* class_ext  */
  YYSYMBOL_class_body = 122,               /* class_body  */
  YYSYMBOL_id_list = 123,                  /* id_list  */
  YYSYMBOL_stmt_list = 124,                /* stmt_list  */
  YYSYMBOL_fptr_base = 125,                /* fptr_base  */
  YYSYMBOL_func_base = 126,                /* func_base  */
  YYSYMBOL_fptr_def = 127,                 /* fptr_def  */
  YYSYMBOL_type_def = 128,                 /* type_def  */
  YYSYMBOL_type_decl_array = 129,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 130,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 131,          /* type_decl_empty  */
  YYSYMBOL_arg = 132,                      /* arg  */
  YYSYMBOL_arg_list = 133,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 134,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 135,                /* fptr_list  */
  YYSYMBOL_code_stmt = 136,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 137,                  /* stmt_pp  */
  YYSYMBOL_stmt = 138,                     /* stmt  */
  YYSYMBOL_opt_id = 139,                   /* opt_id  */
  YYSYMBOL_enum_def = 140,                 /* enum_def  */
  YYSYMBOL_label_stmt = 141,               /* label_stmt  */
  YYSYMBOL_goto_stmt = 142,                /* goto_stmt  */
  YYSYMBOL_when_exp = 143,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 144,          /* match_case_stmt  */
  YYSYMBOL_match_list = 145,               /* match_list  */
  YYSYMBOL_where_stmt = 146,               /* where_stmt  */
  YYSYMBOL_match_stmt = 147,               /* match_stmt  */
  YYSYMBOL_flow = 148,                     /* flow  */
  YYSYMBOL_loop_stmt = 149,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 150,             /* varloop_stmt  */
  YYSYMBOL_selection_stmt = 151,           /* selection_stmt  */
  YYSYMBOL_breaks = 152,                   /* breaks  */
  YYSYMBOL_jump_stmt = 153,                /* jump_stmt  */
  YYSYMBOL__exp_stmt = 154,                /* _exp_stmt  */
  YYSYMBOL_exp_stmt = 155,                 /* exp_stmt  */
  YYSYMBOL_exp = 156,                      /* exp  */
  YYSYMBOL_binary_exp = 157,               /* binary_exp  */
  YYSYMBOL_call_template = 158,            /* call_template  */
  YYSYMBOL_op = 159,                       /* op  */
  YYSYMBOL_array_exp = 160,                /* array_exp  */
  YYSYMBOL_array_empty = 161,              /* array_empty  */
  YYSYMBOL_range = 162,                    /* range  */
  YYSYMBOL_array = 163,                    /* array  */
  YYSYMBOL_decl_exp = 164,                 /* decl_exp  */
  YYSYMBOL_func_args = 165,                /* func_args  */
  YYSYMBOL_fptr_args = 166,                /* fptr_args  */
  YYSYMBOL_arg_type = 167,                 /* arg_type  */
  YYSYMBOL_decl_template = 168,            /* decl_template  */
  YYSYMBOL_global = 169,                   /* global  */
  YYSYMBOL_storage_flag = 170,             /* storage_flag  */
  YYSYMBOL_access_flag = 171,              /* access_flag  */
  YYSYMBOL_flag = 172,                     /* flag  */
  YYSYMBOL_final = 173,                    /* final  */
  YYSYMBOL_modifier = 174,                 /* modifier  */
  YYSYMBOL_func_def_base = 175,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 176,            /* abstract_fdef  */
  YYSYMBOL_op_op = 177,                    /* op_op  */
  YYSYMBOL_op_base = 178,                  /* op_base  */
  YYSYMBOL_operator = 179,                 /* operator  */
  YYSYMBOL_op_def = 180,                   /* op_def  */
  YYSYMBOL_func_def = 181,                 /* func_def  */
  YYSYMBOL_ref = 182,                      /* ref  */
  YYSYMBOL_type_decl_tmpl = 183,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 184,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 185,         /* type_decl_noflag  */
  YYSYMBOL_opt_type = 186,                 /* opt_type  */
  YYSYMBOL_type_decl_opt = 187,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 188,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 189,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 190,          /* type_decl_flag2  */
  YYSYMBOL_union_list = 191,               /* union_list  */
  YYSYMBOL_union_def = 192,                /* union_def  */
  YYSYMBOL_var_decl_list = 193,            /* var_decl_list  */
  YYSYMBOL_var_decl = 194,                 /* var_decl  */
  YYSYMBOL_arg_decl = 195,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 196,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 197,                    /* eq_op  */
  YYSYMBOL_rel_op = 198,                   /* rel_op  */
  YYSYMBOL_shift_op = 199,                 /* shift_op  */
  YYSYMBOL_add_op = 200,                   /* add_op  */
  YYSYMBOL_mul_op = 201,                   /* mul_op  */
  YYSYMBOL_opt_exp = 202,                  /* opt_exp  */
  YYSYMBOL_con_exp = 203,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 204,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 205,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 206,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 207,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 208,                  /* and_exp  */
  YYSYMBOL_eq_exp = 209,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 210,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 211,                /* shift_exp  */
  YYSYMBOL_add_exp = 212,                  /* add_exp  */
  YYSYMBOL_mul_exp = 213,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 214,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 215,                 /* cast_exp  */
  YYSYMBOL_unary_op = 216,                 /* unary_op  */
  YYSYMBOL_unary_exp = 217,                /* unary_exp  */
  YYSYMBOL_lambda_list = 218,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 219,               /* lambda_arg  */
  YYSYMBOL_type_list = 220,                /* type_list  */
  YYSYMBOL_call_paren = 221,               /* call_paren  */
  YYSYMBOL_post_op = 222,                  /* post_op  */
  YYSYMBOL_dot_exp = 223,                  /* dot_exp  */
  YYSYMBOL_post_exp = 224,                 /* post_exp  */
  YYSYMBOL_interp_exp = 225,               /* interp_exp  */
  YYSYMBOL_interp = 226,                   /* interp  */
  YYSYMBOL_typeof_exp = 227,               /* typeof_exp  */
  YYSYMBOL_prim_exp = 228                  /* prim_exp  */
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
#define YYLAST   1585

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  277
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  456

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   369


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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   147,   147,   148,   151,   152,   156,   157,   158,   159,
     160,   161,   162,   165,   165,   167,   178,   178,   180,   180,
     182,   182,   184,   185,   187,   190,   193,   199,   206,   206,
     208,   212,   217,   218,   220,   221,   230,   231,   231,   238,
     239,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   269,   269,   272,   275,   277,   279,   279,   282,
     290,   291,   293,   293,   295,   303,   304,   307,   309,   311,
     313,   315,   317,   321,   324,   326,   331,   332,   333,   336,
     337,   340,   340,   343,   344,   348,   349,   352,   353,   354,
     357,   357,   359,   359,   359,   362,   363,   364,   368,   369,
     370,   374,   375,   376,   379,   379,   381,   382,   384,   384,
     385,   385,   386,   386,   388,   388,   390,   392,   392,   394,
     395,   398,   399,   400,   401,   404,   404,   406,   406,   409,
     416,   425,   425,   425,   425,   425,   427,   429,   431,   436,
     442,   442,   443,   446,   446,   446,   448,   448,   451,   455,
     456,   460,   461,   463,   463,   464,   465,   465,   468,   469,
     470,   472,   472,   474,   475,   478,   488,   489,   492,   493,
     495,   496,   497,   498,   498,   500,   500,   501,   501,   501,
     501,   502,   502,   503,   503,   504,   504,   504,   506,   506,
     507,   508,   510,   513,   513,   514,   514,   515,   515,   516,
     516,   517,   517,   518,   518,   519,   519,   520,   520,   521,
     521,   522,   522,   523,   523,   525,   525,   528,   528,   528,
     529,   529,   529,   529,   532,   533,   534,   535,   536,   537,
     538,   541,   542,   543,   543,   546,   547,   551,   551,   553,
     553,   555,   564,   565,   567,   569,   572,   574,   576,   580,
     581,   582,   584,   585,   596,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   611
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
  "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"", "\"::\"", "\"?:\"",
  "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"", "\"<<<\"", "\">>>\"",
  "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"", "\"<\"", "\"!=\"",
  "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"", "\"||\"", "\":[\"",
  "\"~\"", "\"!\"", "\"<dynamic_operator>\"", "RANGE_EMPTY", "UMINUS",
  "UTIMES", "\"=\"", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg", "ast",
  "section", "class_type", "class_def", "class_ext", "class_body",
  "id_list", "stmt_list", "fptr_base", "func_base", "fptr_def", "type_def",
  "type_decl_array", "type_decl_exp", "type_decl_empty", "arg", "arg_list",
  "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt", "opt_id",
  "enum_def", "label_stmt", "goto_stmt", "when_exp", "match_case_stmt",
  "match_list", "where_stmt", "match_stmt", "flow", "loop_stmt",
  "varloop_stmt", "selection_stmt", "breaks", "jump_stmt", "_exp_stmt",
  "exp_stmt", "exp", "binary_exp", "call_template", "op", "array_exp",
  "array_empty", "range", "array", "decl_exp", "func_args", "fptr_args",
  "arg_type", "decl_template", "global", "storage_flag", "access_flag",
  "flag", "final", "modifier", "func_def_base", "abstract_fdef", "op_op",
  "op_base", "operator", "op_def", "func_def", "ref", "type_decl_tmpl",
  "type_decl_next", "type_decl_noflag", "opt_type", "type_decl_opt",
  "type_decl", "type_decl_flag", "type_decl_flag2", "union_list",
  "union_def", "var_decl_list", "var_decl", "arg_decl", "fptr_arg_decl",
  "eq_op", "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
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
     365,   366,   367,   368,   369
};
#endif

#define YYPACT_NINF (-322)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-102)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     424,    26,   773,   830,   529,    85,  -322,    37,  -322,   625,
    -322,    63,    69,    72,    13,  1343,    85,  1343,  -322,  -322,
    -322,  -322,    55,    85,    85,    85,    61,  1343,    28,  -322,
    -322,  -322,  -322,  -322,   887,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,    23,  -322,  -322,  -322,
    -322,     3,     3,   106,   106,   116,  1343,  -322,  -322,   129,
    -322,   424,    85,  -322,  -322,  -322,  -322,  -322,  -322,  1495,
    -322,  -322,  -322,  -322,   126,  -322,  -322,  -322,   130,  -322,
    -322,  -322,   133,    18,  -322,   132,  -322,  -322,  -322,  -322,
    -322,   174,  -322,  -322,  -322,    85,  -322,  -322,   -38,    65,
      48,    52,    59,   -43,    50,   -15,   -23,     1,    74,    78,
    1399,  -322,   106,  -322,  -322,    32,    97,  -322,  -322,  -322,
    -322,   156,  -322,   157,  -322,  1343,    33,  -322,   154,  -322,
    -322,  -322,  -322,   160,  -322,  -322,    58,    57,  1343,    45,
    1343,   713,   115,   164,   159,    96,   167,  -322,     3,   166,
       3,    99,  -322,    15,    28,  -322,   887,  -322,   120,  -322,
    -322,    75,  -322,  -322,   135,  -322,   103,  -322,   179,   -28,
    -322,  -322,  -322,  -322,  -322,  1343,    98,  -322,  -322,    60,
    -322,  1343,  -322,  -322,  1343,  1343,  1343,   944,  -322,  -322,
    -322,   208,   106,     3,   -28,  1343,  1399,  1399,  1399,  1399,
    1399,  1399,  -322,  -322,  1399,  -322,  -322,  -322,  -322,  1399,
    -322,  -322,  1399,  -322,  -322,  1399,  -322,  -322,  -322,  1399,
    1399,     3,  -322,  -322,  1001,   117,  -322,     3,   183,  -322,
    -322,  -322,   887,  1399,  -322,   184,   186,  1058,  -322,     3,
      27,  -322,     3,  -322,     3,   190,  1343,   192,   713,  -322,
     131,  -322,   180,  -322,   197,  -322,   134,     3,    27,   136,
     105,  -322,  -322,  -322,   887,  -322,   140,  -322,  -322,  1115,
    -322,  -322,   202,  -322,  -322,  -322,   142,   210,  -322,  -322,
    -322,  -322,   209,   160,  -322,  -322,  -322,  -322,   213,  -322,
    -322,  -322,  -322,   215,  -322,   216,   149,  -322,   144,  -322,
      65,    48,    52,    59,   -43,    50,   -15,   -23,     1,    74,
      78,  -322,  -322,   225,   222,  1172,  -322,  -322,  -322,  -322,
    1229,  -322,  -322,   223,  -322,   229,   161,  -322,   230,   106,
     162,   165,   625,   236,   625,  1286,   170,  1343,   180,   232,
     171,   105,   239,  -322,   161,   237,   105,   171,   245,  -322,
    -322,  -322,   105,   625,   242,     3,     3,     3,   179,  -322,
     241,  1399,     3,  -322,  -322,   249,  -322,  -322,     3,   179,
     173,  -322,  -322,   105,   105,   244,  -322,  -322,   625,   253,
    1343,   243,  -322,   235,   261,   256,   265,     3,  -322,  -322,
    -322,  -322,   262,     3,   233,  -322,  -322,   268,   267,   269,
    -322,   149,  -322,  -322,  -322,  -322,  -322,   132,  1343,   166,
    -322,   625,  -322,   625,    14,  1343,   191,   625,  -322,   171,
    -322,  -322,  -322,  -322,   193,   280,     3,   270,     3,   106,
    -322,  -322,   -21,    27,  -322,  -322,   625,  -322,   625,  -322,
    -322,     3,  -322,  -322,   424,   271,  -322,   275,  -322,  -322,
    -322,  -322,   281,  -322,  -322,  -322
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    92,     0,     0,     0,   134,   171,     0,    75,     0,
      76,     0,     0,     0,     0,     0,   134,    86,    87,    88,
      13,    14,   150,   134,   134,   134,   169,     0,   244,   168,
     266,   267,   269,   270,     0,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   265,   249,   227,   250,
     228,     0,     0,   231,   232,     0,     0,   233,   230,     0,
       2,     4,   134,     8,     6,    11,    12,    55,    60,    22,
       9,    56,    57,    58,     0,    53,    61,    54,     0,    59,
      94,    52,     0,    95,   114,   115,   272,   271,    97,   153,
     154,     0,   155,     7,   172,   134,    10,   116,   200,   203,
     205,   207,   209,   211,   213,   215,   217,   219,   221,   223,
       0,   225,     0,   229,   258,   234,   268,   277,   252,    91,
     276,     0,   265,     0,   108,     0,     0,    39,     0,   127,
     126,   129,   130,     0,   128,   132,   131,   136,     0,     0,
       0,     0,   156,     0,     0,    63,     0,   151,     0,     0,
       0,     0,   170,     0,   241,   243,     0,   259,     0,   262,
      65,   101,    31,   240,   159,   161,   164,   166,    28,     0,
     162,    30,   237,   238,   239,     0,     0,     1,     5,   136,
      23,     0,    90,    93,     0,     0,     0,     0,   110,   231,
     232,     0,     0,     0,     0,   199,     0,     0,     0,     0,
       0,     0,   185,   186,     0,   190,   188,   189,   187,     0,
     191,   192,     0,   193,   194,     0,   195,   196,   197,     0,
       0,     0,   235,   275,     0,     0,   257,     0,     0,   253,
     254,   256,     0,     0,   274,     0,   105,     0,    40,   119,
       0,   133,     0,   135,     0,     0,     0,     0,     0,   157,
       0,    66,     0,    62,     0,    89,     0,   121,     0,     0,
     125,    83,   242,   260,     0,   158,     0,   163,   165,     0,
      29,   167,     0,   273,   137,   138,     0,     0,    96,    98,
      99,   109,     0,     0,   102,   103,   104,   141,     0,   143,
     142,   145,   144,     0,   152,     0,     0,   198,     0,   202,
     204,   206,   208,   210,   212,   214,   216,   218,   220,   222,
     224,   226,   251,   245,     0,     0,   255,   263,   236,   113,
       0,   106,   112,     0,    34,   118,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,     0,
       0,   125,    37,   120,   184,     0,   125,     0,     0,   261,
     160,   264,   125,     0,     0,     0,     0,     0,   178,   117,
     177,     0,     0,   100,   248,     0,   107,   111,     0,   180,
      33,   122,   139,   125,   125,    84,    78,    82,     0,     0,
       0,    68,    71,    73,    20,     0,     0,     0,   183,    36,
      26,    24,     0,     0,    17,    77,   149,     0,     0,     0,
     179,     0,   201,   246,   247,    35,   182,   181,     0,     0,
      25,     0,    79,     0,     0,     0,     0,     0,    74,     0,
      64,    27,    38,   124,   173,     0,     0,     0,     0,     0,
     148,   176,    32,     0,    85,    80,     0,    67,     0,    72,
      21,     0,   175,    16,    19,     0,   147,     0,    81,    69,
     174,    18,     0,   146,   140,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -322,  -322,   -57,  -322,  -322,  -322,  -322,  -322,  -321,    -4,
    -322,  -322,  -322,  -322,   -44,  -134,   -42,  -298,  -322,  -322,
     -94,   -40,  -322,    -8,  -322,  -322,  -322,  -322,  -322,  -322,
     -41,  -322,  -322,   175,  -322,  -322,  -322,  -322,  -322,   294,
    -120,     0,   -22,   137,  -322,   -75,   -73,   185,  -157,   -86,
      16,  -100,  -242,  -263,   291,   182,  -322,     7,   143,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,    53,
    -322,  -322,  -142,  -214,   -16,  -322,  -116,  -322,   -80,  -322,
     -17,  -322,  -322,   138,   139,   145,   147,  -322,  -178,  -322,
     146,   151,   148,   128,   152,   127,   124,   122,   141,   125,
     153,   259,   -98,   200,  -322,    -7,  -322,   -77,  -322,  -322,
    -137,  -322,   -45,  -322
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,    60,    61,    62,    63,   427,   452,   385,    64,
     149,   133,    65,    66,   162,   172,   313,   324,   325,   342,
     343,    67,    68,    69,   254,    70,    71,    72,   416,   338,
     339,   418,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   228,   287,    84,    85,    86,    87,    88,
     240,   258,   329,   348,   134,   135,   136,   137,   244,   276,
      89,    90,   288,   192,    91,    92,    93,   250,   164,   165,
     166,   268,   167,   168,    94,    95,   425,    96,   359,   360,
     370,   389,   204,   209,   212,   215,   219,   298,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   155,   112,   314,   316,   113,   114,   115,
     159,   116,   117,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     128,   139,   123,   126,   178,   153,   170,   170,   171,   163,
     188,   270,   222,   173,   174,   144,   345,   146,   299,   263,
     436,   248,   184,   145,     4,   326,   392,   271,   185,  -102,
     148,   150,   151,   327,   158,   169,   169,  -101,   231,   224,
     229,   236,   138,   344,   195,   161,   170,   196,    26,   191,
     202,   213,   296,   214,    29,   203,   176,   397,   398,   399,
       8,    55,    10,   185,   185,   180,   197,   185,   140,   179,
     405,   225,   223,   328,   141,   169,   161,   142,   386,   216,
     217,   218,   226,   391,   210,   211,   143,   186,   130,   394,
     129,   130,    55,   242,   243,   317,   274,   243,   440,   279,
     280,   154,   194,   170,   256,   170,   160,    47,   259,    49,
     409,   410,   152,   261,   293,     4,   237,   129,   130,   131,
     132,   175,   186,   186,   170,   235,   186,   349,   335,   177,
     445,   181,   169,   182,   169,   318,   183,   227,   245,   187,
     247,   326,   326,   326,   205,   206,   207,   208,   170,   170,
     199,   295,   294,   232,   326,   200,   158,   198,   220,   221,
     201,   321,   233,   234,   238,   239,   249,   251,   252,   253,
     255,   257,   260,   344,   266,   272,   170,   169,   264,   311,
     227,   277,   170,   402,   278,   267,   269,   282,   315,   273,
     312,   447,   319,   320,   170,   297,   332,   170,   334,   170,
     330,   400,   331,   337,   336,   169,   340,   341,   351,   346,
     347,   169,   170,   161,   326,   352,   353,   236,   355,    26,
     356,   357,   358,   169,   126,    29,   169,   361,   169,   362,
     363,   367,   158,   368,   369,   373,   371,   323,   374,   376,
     390,   169,   383,   387,   384,   401,   333,   161,   396,    47,
      48,    49,    50,   380,   393,   404,   408,   283,   411,   413,
     417,   189,   190,    55,   158,   419,   420,   415,   421,   282,
     423,   426,   428,   429,   438,   430,   441,   453,   454,   444,
      57,    58,   213,    47,   214,    49,   216,   217,   218,   372,
     442,   455,   443,   422,   406,   119,   407,   382,   265,   354,
     230,   284,   205,   206,   207,   208,   285,   210,   211,   433,
     170,   170,   170,   147,   246,   365,   286,   170,   241,   350,
     282,   431,   275,   170,   375,   450,   377,   388,   303,   289,
     290,   305,   188,   306,   307,   379,   291,   381,   292,   169,
     169,   169,   170,   300,   309,   395,   169,   302,   170,   301,
     193,   424,   169,   304,   262,   403,   308,     0,   414,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     412,   169,     0,   310,     0,     0,     0,   169,     0,     0,
       0,   170,   171,   170,     0,     0,   432,   451,     0,   446,
       0,     0,     0,     0,     0,     0,   170,     0,     0,   424,
       0,     0,     0,   434,     0,   435,     0,     0,     0,   439,
     169,     0,   169,     0,     0,   437,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,     0,     1,   448,     2,
       0,     3,     0,     4,   449,     5,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,     0,    25,    26,
       0,    27,    28,     0,     0,    29,    30,    31,    32,    33,
      34,     0,     0,     0,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,    46,     0,    47,
      48,    49,    50,     0,     0,    51,     0,     0,     0,     0,
      52,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,    58,     1,     0,     2,     0,     3,     0,     4,   127,
       0,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,    28,     0,     0,
      29,    30,    31,    32,    33,    34,     0,     0,     0,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,     0,    46,     0,    47,    48,    49,    50,     0,     0,
      51,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,     0,     4,    57,    58,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,     0,    17,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,    28,     0,     0,    29,    30,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,    46,     0,
      47,    48,    49,    50,     0,     0,    51,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     1,     0,     2,     0,
       3,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    28,     0,     0,    29,    30,    31,    32,    33,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     2,   120,
       3,     0,     0,     0,     0,     6,   122,     0,    47,    48,
      49,    50,     0,     0,    51,     0,     0,     0,     0,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    57,
      58,    28,     0,   121,    29,    30,    31,    32,    33,    34,
       0,     0,     0,     0,     0,     2,     0,     3,   124,     0,
       0,     0,     6,     0,     0,     0,   122,     0,    47,    48,
      49,    50,     0,     0,    51,     0,     0,     0,     0,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    28,    57,
      58,    29,    30,    31,    32,    33,    34,     0,     0,     0,
       0,     0,     2,     0,     3,     0,     0,     0,     0,     6,
       0,     0,     0,   122,     0,    47,    48,    49,    50,     0,
       0,    51,     0,   125,     0,     0,    52,    53,    54,    55,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,    28,    57,    58,    29,    30,
      31,    32,    33,    34,   156,     0,   157,     0,     0,     2,
       0,     3,   281,     0,     0,     0,     6,     0,     0,     0,
     122,     0,    47,    48,    49,    50,     0,     0,    51,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    28,    57,    58,    29,    30,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,     0,     0,     6,     0,     0,     0,   122,     0,    47,
      48,    49,    50,     0,     0,    51,     0,     0,     0,     0,
      52,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    28,
      57,    58,    29,    30,    31,    32,    33,    34,     0,     0,
       0,     0,     0,     2,     0,     3,   322,     0,     0,     0,
       6,     0,     0,     0,   122,     0,    47,    48,    49,    50,
       0,     0,    51,     0,   125,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    28,    57,    58,    29,
      30,    31,    32,    33,    34,     0,     0,     0,     0,     0,
       2,     0,     3,   124,     0,     0,     0,     6,     0,     0,
       0,   122,     0,    47,    48,    49,    50,     0,     0,    51,
       0,     0,     0,     0,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,    28,    57,    58,    29,    30,    31,    32,
      33,    34,     0,     0,     0,     0,     0,     2,   364,     3,
       0,     0,     0,     0,     6,     0,     0,     0,   122,     0,
      47,    48,    49,    50,     0,     0,    51,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      28,    57,    58,    29,    30,    31,    32,    33,    34,     0,
       0,     0,     0,     0,     2,     0,     3,   366,     0,     0,
       0,     6,     0,     0,     0,   122,     0,    47,    48,    49,
      50,     0,     0,    51,     0,     0,     0,     0,    52,    53,
      54,    55,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,    28,    57,    58,
      29,    30,    31,    32,    33,    34,     0,     0,     0,     0,
       0,     2,   378,     3,     0,     0,     0,     0,     6,     0,
       0,     0,   122,     0,    47,    48,    49,    50,     0,     0,
      51,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    28,    57,    58,    29,    30,    31,
      32,    33,    34,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,     0,     0,     6,     0,     0,     0,   122,
       0,    47,    48,    49,    50,     0,     0,    51,     0,     0,
       0,     0,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    28,    57,    58,    29,    30,    31,    32,    33,    34,
       0,     0,     0,     0,     2,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,    47,    48,
      49,    50,     0,     0,    51,     0,     0,     0,     0,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,    57,
      58,    30,    31,    32,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,    47,    48,    49,    50,     0,     0,
      51,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     0,     4,    57,    58,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,     0,    17,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,    28,     0,     0,    29,    30,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,    46,     0,
      47,     0,    49,     0,     0,     0,    51,     0,     0,     0,
       0,    52,    53,    54,    55,    56
};

static const yytype_int16 yycheck[] =
{
       4,     9,     2,     3,    61,    27,    51,    52,    52,    51,
      85,   168,   110,    53,    54,    15,   258,    17,   196,   156,
       6,   141,     4,    16,     9,   239,   347,   169,    49,     3,
      23,    24,    25,     6,    34,    51,    52,     5,   115,     7,
     115,     8,     5,   257,    82,    73,    91,    85,    45,    91,
      93,    74,   194,    76,    51,    98,    56,   355,   356,   357,
      15,    89,    17,    49,    49,    69,   104,    49,     5,    62,
     368,    39,   112,    46,     5,    91,    73,     5,   341,    78,
      79,    80,    50,   346,    99,   100,    73,   108,    33,   352,
      32,    33,    89,    36,    37,   232,    36,    37,   419,   185,
     186,    73,    95,   148,   148,   150,    83,    75,   150,    77,
     373,   374,    51,   153,   191,     9,    83,    32,    33,    34,
      35,     5,   108,   108,   169,   125,   108,   264,   248,     0,
     428,     5,   148,     3,   150,   233,     3,   105,   138,     7,
     140,   355,   356,   357,    94,    95,    96,    97,   193,   194,
     102,   193,   192,    56,   368,   103,   156,    92,    84,    81,
     101,   236,     6,     6,    10,     5,    51,     3,     9,    73,
       3,     5,    73,   387,    39,   175,   221,   193,    58,   221,
     105,   181,   227,   361,   184,    82,     7,   187,     5,    91,
      73,   433,     8,     7,   239,   195,     6,   242,     6,   244,
     242,   358,   244,    23,    73,   221,     9,    73,     6,    73,
     105,   227,   257,    73,   428,    73,     6,     8,     5,    45,
       5,     5,    73,   239,   224,    51,   242,    83,   244,     4,
       8,     8,   232,     4,    73,    73,     6,   237,    73,     3,
       3,   257,    10,     4,    73,     4,   246,    73,     6,    75,
      76,    77,    78,    83,     9,     6,    83,    49,    14,     6,
      25,    87,    88,    89,   264,     4,    10,    24,     3,   269,
       8,    38,     4,     6,    83,     6,    83,     6,     3,     9,
     106,   107,    74,    75,    76,    77,    78,    79,    80,   329,
      10,    10,   426,   387,   369,     1,   369,   338,   161,   283,
     115,    93,    94,    95,    96,    97,    98,    99,   100,   409,
     355,   356,   357,    22,   139,   315,   108,   362,   136,   266,
     320,   401,   179,   368,   332,   441,   334,   344,   200,   191,
     191,   204,   407,   209,   212,   335,   191,   337,   191,   355,
     356,   357,   387,   197,   219,   353,   362,   199,   393,   198,
      91,   393,   368,   201,   154,   362,   215,    -1,   380,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     378,   387,    -1,   220,    -1,    -1,    -1,   393,    -1,    -1,
      -1,   426,   426,   428,    -1,    -1,   408,   444,    -1,   429,
      -1,    -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,   441,
      -1,    -1,    -1,   411,    -1,   413,    -1,    -1,    -1,   417,
     426,    -1,   428,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   441,    -1,     3,   436,     5,
      -1,     7,    -1,     9,   438,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    -1,    44,    45,
      -1,    47,    48,    -1,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,   107,     3,    -1,     5,    -1,     7,    -1,     9,    10,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    -1,    73,    -1,    75,    76,    77,    78,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,    -1,     9,   106,   107,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    47,    48,    -1,    -1,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,     3,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,   106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    48,    -1,    -1,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    73,    -1,    75,    76,
      77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,   106,
     107,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,   106,
     107,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    73,    -1,    75,    76,    77,    78,    -1,
      -1,    81,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    48,   106,   107,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    48,   106,   107,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,
     106,   107,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    83,    -1,    -1,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    48,   106,   107,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,   106,   107,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      48,   106,   107,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    48,   106,   107,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    73,    -1,    75,    76,    77,    78,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,   106,   107,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    48,   106,   107,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,   106,
     107,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    75,    76,    77,    78,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,     9,   106,   107,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    47,    48,    -1,    -1,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    -1,    73,    -1,
      75,    -1,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90
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
      78,    81,    86,    87,    88,    89,    90,   106,   107,   116,
     117,   118,   119,   120,   124,   127,   128,   136,   137,   138,
     140,   141,   142,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   160,   161,   162,   163,   164,   175,
     176,   179,   180,   181,   189,   190,   192,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   219,   222,   223,   224,   226,   227,   228,   154,
       6,    50,    73,   156,     8,    83,   156,    10,   124,    32,
      33,    34,    35,   126,   169,   170,   171,   172,     5,   138,
       5,     5,     5,    73,   156,   172,   156,   169,   172,   125,
     172,   172,    51,   157,    73,   218,    57,    59,   156,   225,
      83,    73,   129,   131,   183,   184,   185,   187,   188,   189,
     227,   129,   130,   136,   136,     5,   156,     0,   117,   172,
     124,     5,     3,     3,     4,    49,   108,     7,   160,    87,
      88,   131,   178,   216,   172,    82,    85,   104,    92,   102,
     103,   101,    93,    98,   197,    94,    95,    96,    97,   198,
      99,   100,   199,    74,    76,   200,    78,    79,    80,   201,
      84,    81,   217,   136,     7,    39,    50,   105,   158,   160,
     162,   222,    56,     6,     6,   156,     8,    83,    10,     5,
     165,   170,    36,    37,   173,   156,   148,   156,   155,    51,
     182,     3,     9,    73,   139,     3,   129,     5,   166,   131,
      73,   136,   218,   225,    58,   158,    39,    82,   186,     7,
     163,   187,   156,    91,    36,   173,   174,   156,   156,   164,
     164,     8,   156,    49,    93,    98,   108,   159,   177,   198,
     199,   200,   201,   222,   136,   131,   187,   156,   202,   203,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   131,    73,   131,   220,     5,   221,   225,   217,     8,
       7,   160,     8,   156,   132,   133,   188,     6,    46,   167,
     131,   131,     6,   156,     6,   155,    73,    23,   144,   145,
       9,    73,   134,   135,   188,   167,    73,   105,   168,   225,
     184,     6,    73,     6,   165,     5,     5,     5,    73,   193,
     194,    83,     4,     8,     6,   156,     8,     8,     4,    73,
     195,     6,   136,    73,    73,   138,     3,   138,     6,   156,
      83,   156,   145,    10,    73,   123,   168,     4,   195,   196,
       3,   168,   123,     9,   168,   138,     6,   132,   132,   132,
     163,     4,   203,   220,     6,   132,   160,   161,    83,   168,
     168,    14,   138,     6,   157,    24,   143,    25,   146,     4,
      10,     3,   135,     8,   131,   191,    38,   121,     4,     6,
       6,   193,   157,   166,   138,   138,     6,   156,    83,   138,
     123,    83,    10,   130,     9,   132,   136,   167,   138,   124,
     191,   117,   122,     6,     3,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   116,   117,   117,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   120,   121,   121,   122,   122,
     123,   123,   124,   124,   125,   126,   127,   128,   129,   129,
     130,   131,   132,   132,   133,   133,   134,   135,   135,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   139,   139,   140,   141,   142,   143,   143,   144,
     145,   145,   146,   146,   147,   148,   148,   149,   149,   149,
     149,   149,   149,   150,   151,   151,   152,   152,   152,   153,
     153,   154,   154,   155,   155,   156,   156,   157,   157,   157,
     158,   158,   159,   159,   159,   160,   160,   160,   161,   161,
     161,   162,   162,   162,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   169,   170,   170,   171,
     171,   172,   172,   172,   172,   173,   173,   174,   174,   175,
     176,   177,   177,   177,   177,   177,   178,   178,   178,   178,
     179,   179,   180,   181,   181,   181,   182,   182,   183,   184,
     184,   185,   185,   186,   186,   187,   188,   188,   189,   189,
     189,   190,   190,   191,   191,   192,   193,   193,   194,   194,
     195,   195,   195,   196,   196,   197,   197,   198,   198,   198,
     198,   199,   199,   200,   200,   201,   201,   201,   202,   202,
     203,   203,   203,   204,   204,   205,   205,   206,   206,   207,
     207,   208,   208,   209,   209,   210,   210,   211,   211,   212,
     212,   213,   213,   214,   214,   215,   215,   216,   216,   216,
     216,   216,   216,   216,   217,   217,   217,   217,   217,   217,
     217,   218,   218,   219,   219,   220,   220,   221,   221,   222,
     222,   223,   224,   224,   224,   224,   224,   224,   224,   225,
     225,   225,   226,   226,   227,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     9,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     5,     5,     6,     1,     2,
       1,     1,     4,     2,     1,     3,     2,     1,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     2,     3,     2,     0,     5,
       1,     2,     2,     0,     6,     1,     1,     5,     5,     6,
       7,     8,     5,     3,     5,     7,     1,     1,     1,     3,
       2,     2,     1,     2,     1,     1,     3,     1,     3,     3,
       3,     0,     1,     1,     1,     3,     4,     5,     2,     3,
       2,     5,     4,     4,     1,     1,     1,     4,     2,     1,
       2,     1,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     0,     1,     1,     5,
       9,     1,     1,     1,     1,     1,     7,     6,     5,     4,
       1,     2,     3,     1,     1,     1,     0,     1,     2,     1,
       3,     1,     1,     1,     0,     2,     1,     2,     1,     1,
       2,     1,     1,     1,     3,     7,     3,     1,     1,     2,
       1,     2,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     5,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     2,     2,     2,
       2,     1,     2,     2,     1,     1,     3,     3,     2,     1,
       1,     3,     1,     2,     2,     3,     2,     2,     1,     1,
       2,     3,     2,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     2,     1
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
#line 144 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1730 "src/parser.c"
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
#line 147 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2031 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 148 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2037 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 151 "src/gwion.y"
            { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2043 "src/parser.c"
    break;

  case 5: /* ast: section ast  */
#line 152 "src/gwion.y"
                { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)) : new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2049 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 156 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2055 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 157 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2061 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 158 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2067 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 159 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2073 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 160 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2079 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 161 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2085 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 162 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2091 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 165 "src/gwion.y"
                  { (yyval.cflag) = cflag_none; }
#line 2097 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 165 "src/gwion.y"
                                                { (yyval.cflag) = cflag_struct; }
#line 2103 "src/parser.c"
    break;

  case 15: /* class_def: class_type flag modifier "<identifier>" decl_template class_ext "{" class_body "}"  */
#line 168 "src/gwion.y"
    {
      if((yyvsp[-8].cflag) == cflag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-8].cflag) | (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      if((yyvsp[-8].cflag))
        (yyval.class_def)->cflag |= cflag_struct;
  }
#line 2117 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 178 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2123 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 178 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2129 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 180 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2135 "src/parser.c"
    break;

  case 20: /* id_list: "<identifier>"  */
#line 182 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); }
#line 2141 "src/parser.c"
    break;

  case 21: /* id_list: "<identifier>" "," id_list  */
#line 182 "src/gwion.y"
                                                                      { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list)); }
#line 2147 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 184 "src/gwion.y"
                                   { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2153 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt stmt_list  */
#line 185 "src/gwion.y"
                                  { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2159 "src/parser.c"
    break;

  case 24: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 187 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2166 "src/parser.c"
    break;

  case 25: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 190 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2173 "src/parser.c"
    break;

  case 26: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 193 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2183 "src/parser.c"
    break;

  case 27: /* type_def: "typedef" flag type_decl_array "<identifier>" decl_template ";"  */
#line 199 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2194 "src/parser.c"
    break;

  case 29: /* type_decl_array: type_decl array  */
#line 206 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2200 "src/parser.c"
    break;

  case 30: /* type_decl_exp: type_decl_array  */
#line 208 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2208 "src/parser.c"
    break;

  case 31: /* type_decl_empty: type_decl_array  */
#line 212 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2216 "src/parser.c"
    break;

  case 32: /* arg: type_decl arg_decl ":" binary_exp  */
#line 217 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2222 "src/parser.c"
    break;

  case 33: /* arg: type_decl arg_decl  */
#line 218 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2228 "src/parser.c"
    break;

  case 34: /* arg_list: arg  */
#line 220 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2234 "src/parser.c"
    break;

  case 35: /* arg_list: arg_list "," arg  */
#line 221 "src/gwion.y"
                        {
     Arg_List last = (yyvsp[-2].arg_list);
     while(last->next)
       last = last->next;
     if(last->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
     last->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 2247 "src/parser.c"
    break;

  case 36: /* fptr_arg: type_decl fptr_arg_decl  */
#line 230 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2253 "src/parser.c"
    break;

  case 37: /* fptr_list: fptr_arg  */
#line 231 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2259 "src/parser.c"
    break;

  case 38: /* fptr_list: fptr_arg "," fptr_list  */
#line 231 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2269 "src/parser.c"
    break;

  case 39: /* code_stmt: "{" "}"  */
#line 238 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2275 "src/parser.c"
    break;

  case 40: /* code_stmt: "{" stmt_list "}"  */
#line 239 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), GET_LOC(&(yyloc))); }
#line 2281 "src/parser.c"
    break;

  case 41: /* stmt_pp: "<comment>"  */
#line 243 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2287 "src/parser.c"
    break;

  case 42: /* stmt_pp: "#include"  */
#line 244 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2293 "src/parser.c"
    break;

  case 43: /* stmt_pp: "#define"  */
#line 245 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2299 "src/parser.c"
    break;

  case 44: /* stmt_pp: "#pragma"  */
#line 246 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2305 "src/parser.c"
    break;

  case 45: /* stmt_pp: "#undef"  */
#line 247 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2311 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#ifdef"  */
#line 248 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2317 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#ifndef"  */
#line 249 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2323 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#else"  */
#line 250 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2329 "src/parser.c"
    break;

  case 49: /* stmt_pp: "#if"  */
#line 251 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2335 "src/parser.c"
    break;

  case 50: /* stmt_pp: "\n"  */
#line 252 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2341 "src/parser.c"
    break;

  case 51: /* stmt_pp: "require"  */
#line 253 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2347 "src/parser.c"
    break;

  case 63: /* opt_id: %empty  */
#line 269 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2353 "src/parser.c"
    break;

  case 64: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 272 "src/gwion.y"
                                           { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-4].flag); }
#line 2360 "src/parser.c"
    break;

  case 65: /* label_stmt: "<identifier>" ":"  */
#line 275 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2366 "src/parser.c"
    break;

  case 66: /* goto_stmt: "goto" "<identifier>" ";"  */
#line 277 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2372 "src/parser.c"
    break;

  case 67: /* when_exp: "when" exp  */
#line 279 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2378 "src/parser.c"
    break;

  case 68: /* when_exp: %empty  */
#line 279 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2384 "src/parser.c"
    break;

  case 69: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 282 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2395 "src/parser.c"
    break;

  case 70: /* match_list: match_case_stmt  */
#line 290 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2401 "src/parser.c"
    break;

  case 71: /* match_list: match_case_stmt match_list  */
#line 291 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2407 "src/parser.c"
    break;

  case 72: /* where_stmt: "where" stmt  */
#line 293 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2413 "src/parser.c"
    break;

  case 73: /* where_stmt: %empty  */
#line 293 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2419 "src/parser.c"
    break;

  case 74: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 295 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2430 "src/parser.c"
    break;

  case 75: /* flow: "while"  */
#line 303 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2436 "src/parser.c"
    break;

  case 76: /* flow: "until"  */
#line 304 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2442 "src/parser.c"
    break;

  case 77: /* loop_stmt: flow "(" exp ")" stmt  */
#line 308 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0, GET_LOC(&(yyloc))); }
#line 2448 "src/parser.c"
    break;

  case 78: /* loop_stmt: "do" stmt flow exp ";"  */
#line 310 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1, GET_LOC(&(yyloc))); }
#line 2454 "src/parser.c"
    break;

  case 79: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 312 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2460 "src/parser.c"
    break;

  case 80: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 314 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2466 "src/parser.c"
    break;

  case 81: /* loop_stmt: "foreach" "(" ref "<identifier>" ":" binary_exp ")" stmt  */
#line 316 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); (yyval.stmt)->d.stmt_each.is_ptr = (yyvsp[-5].ival); }
#line 2472 "src/parser.c"
    break;

  case 82: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 318 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2478 "src/parser.c"
    break;

  case 83: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 321 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2484 "src/parser.c"
    break;

  case 84: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 325 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2490 "src/parser.c"
    break;

  case 85: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 327 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), GET_LOC(&(yyloc))); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2496 "src/parser.c"
    break;

  case 86: /* breaks: "return"  */
#line 331 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2502 "src/parser.c"
    break;

  case 87: /* breaks: "break"  */
#line 332 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2508 "src/parser.c"
    break;

  case 88: /* breaks: "continue"  */
#line 333 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2514 "src/parser.c"
    break;

  case 89: /* jump_stmt: "return" exp ";"  */
#line 336 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 2520 "src/parser.c"
    break;

  case 90: /* jump_stmt: breaks ";"  */
#line 337 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2526 "src/parser.c"
    break;

  case 91: /* _exp_stmt: ";" _exp_stmt  */
#line 340 "src/gwion.y"
                               { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2532 "src/parser.c"
    break;

  case 92: /* _exp_stmt: ";"  */
#line 340 "src/gwion.y"
                                                        { (yyval.stmt) = NULL; }
#line 2538 "src/parser.c"
    break;

  case 93: /* exp_stmt: exp ";"  */
#line 343 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 2544 "src/parser.c"
    break;

  case 94: /* exp_stmt: _exp_stmt  */
#line 344 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2550 "src/parser.c"
    break;

  case 96: /* exp: binary_exp "," exp  */
#line 349 "src/gwion.y"
                         { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2556 "src/parser.c"
    break;

  case 98: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 353 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2562 "src/parser.c"
    break;

  case 99: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 354 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2568 "src/parser.c"
    break;

  case 100: /* call_template: ":[" type_list "]"  */
#line 357 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2574 "src/parser.c"
    break;

  case 101: /* call_template: %empty  */
#line 357 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2580 "src/parser.c"
    break;

  case 105: /* array_exp: "[" exp "]"  */
#line 362 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2586 "src/parser.c"
    break;

  case 106: /* array_exp: "[" exp "]" array_exp  */
#line 363 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2592 "src/parser.c"
    break;

  case 107: /* array_exp: "[" exp "]" "[" "]"  */
#line 364 "src/gwion.y"
                                     { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2598 "src/parser.c"
    break;

  case 108: /* array_empty: "[" "]"  */
#line 368 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2604 "src/parser.c"
    break;

  case 109: /* array_empty: array_empty "[" "]"  */
#line 369 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2610 "src/parser.c"
    break;

  case 110: /* array_empty: array_empty array_exp  */
#line 370 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2616 "src/parser.c"
    break;

  case 111: /* range: "[" exp ":" exp "]"  */
#line 374 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2622 "src/parser.c"
    break;

  case 112: /* range: "[" exp ":" "]"  */
#line 375 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2628 "src/parser.c"
    break;

  case 113: /* range: "[" ":" exp "]"  */
#line 376 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2634 "src/parser.c"
    break;

  case 117: /* decl_exp: type_decl_flag2 flag type_decl_opt var_decl_list  */
#line 382 "src/gwion.y"
                                                     { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), GET_LOC(&(yyloc))); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2640 "src/parser.c"
    break;

  case 118: /* func_args: "(" arg_list  */
#line 384 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2646 "src/parser.c"
    break;

  case 119: /* func_args: "("  */
#line 384 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2652 "src/parser.c"
    break;

  case 120: /* fptr_args: "(" fptr_list  */
#line 385 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2658 "src/parser.c"
    break;

  case 121: /* fptr_args: "("  */
#line 385 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2664 "src/parser.c"
    break;

  case 122: /* arg_type: "..." ")"  */
#line 386 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 2670 "src/parser.c"
    break;

  case 123: /* arg_type: ")"  */
#line 386 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 2676 "src/parser.c"
    break;

  case 124: /* decl_template: ":[" id_list "]"  */
#line 388 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2682 "src/parser.c"
    break;

  case 125: /* decl_template: %empty  */
#line 388 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2688 "src/parser.c"
    break;

  case 126: /* global: "global"  */
#line 390 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = 1; }
#line 2694 "src/parser.c"
    break;

  case 127: /* storage_flag: "static"  */
#line 392 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2700 "src/parser.c"
    break;

  case 129: /* access_flag: "private"  */
#line 394 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2706 "src/parser.c"
    break;

  case 130: /* access_flag: "protect"  */
#line 395 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2712 "src/parser.c"
    break;

  case 131: /* flag: access_flag  */
#line 398 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2718 "src/parser.c"
    break;

  case 132: /* flag: storage_flag  */
#line 399 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2724 "src/parser.c"
    break;

  case 133: /* flag: access_flag storage_flag  */
#line 400 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2730 "src/parser.c"
    break;

  case 134: /* flag: %empty  */
#line 401 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 2736 "src/parser.c"
    break;

  case 135: /* final: "final"  */
#line 404 "src/gwion.y"
             { (yyval.flag) = ae_flag_final; }
#line 2742 "src/parser.c"
    break;

  case 136: /* final: %empty  */
#line 404 "src/gwion.y"
                                       { (yyval.flag) = ae_flag_none; }
#line 2748 "src/parser.c"
    break;

  case 137: /* modifier: "abstract"  */
#line 406 "src/gwion.y"
                   { (yyval.flag) = ae_flag_abstract; }
#line 2754 "src/parser.c"
    break;

  case 139: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 409 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc)));
  }
#line 2764 "src/parser.c"
    break;

  case 140: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 417 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract);
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL, GET_LOC(&(yyloc)));
    }
#line 2776 "src/parser.c"
    break;

  case 146: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 428 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 2782 "src/parser.c"
    break;

  case 147: /* op_base: type_decl_empty post_op "(" arg ")" code_stmt  */
#line 430 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_none); }
#line 2788 "src/parser.c"
    break;

  case 148: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 432 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 2797 "src/parser.c"
    break;

  case 149: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 437 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 2806 "src/parser.c"
    break;

  case 150: /* operator: "operator"  */
#line 442 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 2812 "src/parser.c"
    break;

  case 151: /* operator: "operator" global  */
#line 442 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 2818 "src/parser.c"
    break;

  case 152: /* op_def: operator op_base code_stmt  */
#line 444 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc))); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 2824 "src/parser.c"
    break;

  case 155: /* func_def: op_def  */
#line 446 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 2830 "src/parser.c"
    break;

  case 156: /* ref: %empty  */
#line 448 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 2836 "src/parser.c"
    break;

  case 157: /* ref: "ref"  */
#line 448 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 2842 "src/parser.c"
    break;

  case 158: /* type_decl_tmpl: "<identifier>" call_template  */
#line 451 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), GET_LOC(&(yyloc))); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 2848 "src/parser.c"
    break;

  case 160: /* type_decl_next: type_decl_tmpl "." type_decl_next  */
#line 456 "src/gwion.y"
                                      { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 2854 "src/parser.c"
    break;

  case 161: /* type_decl_noflag: type_decl_next  */
#line 460 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2860 "src/parser.c"
    break;

  case 162: /* type_decl_noflag: typeof_exp  */
#line 461 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2866 "src/parser.c"
    break;

  case 163: /* opt_type: "?"  */
#line 463 "src/gwion.y"
              { (yyval.flag) = ae_flag_optionnal; }
#line 2872 "src/parser.c"
    break;

  case 164: /* opt_type: %empty  */
#line 463 "src/gwion.y"
                                            { (yyval.flag) = ae_flag_none; }
#line 2878 "src/parser.c"
    break;

  case 165: /* type_decl_opt: type_decl_noflag opt_type  */
#line 464 "src/gwion.y"
                                         { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->flag |= (yyvsp[0].flag); }
#line 2884 "src/parser.c"
    break;

  case 167: /* type_decl: type_decl_flag type_decl_opt  */
#line 465 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 2890 "src/parser.c"
    break;

  case 168: /* type_decl_flag: "ref"  */
#line 468 "src/gwion.y"
        { (yyval.flag) = ae_flag_ref; }
#line 2896 "src/parser.c"
    break;

  case 169: /* type_decl_flag: "const"  */
#line 469 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 2902 "src/parser.c"
    break;

  case 170: /* type_decl_flag: "const" "ref"  */
#line 470 "src/gwion.y"
               { (yyval.flag) = ae_flag_const | ae_flag_ref; }
#line 2908 "src/parser.c"
    break;

  case 171: /* type_decl_flag2: "var"  */
#line 472 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 2914 "src/parser.c"
    break;

  case 173: /* union_list: type_decl_empty  */
#line 474 "src/gwion.y"
                            { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 2920 "src/parser.c"
    break;

  case 174: /* union_list: type_decl_empty ":" union_list  */
#line 475 "src/gwion.y"
                                   { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 2926 "src/parser.c"
    break;

  case 175: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 478 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].type_list), GET_LOC(&(yyloc)));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 2938 "src/parser.c"
    break;

  case 176: /* var_decl_list: var_decl "," var_decl_list  */
#line 488 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2944 "src/parser.c"
    break;

  case 177: /* var_decl_list: var_decl  */
#line 489 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2950 "src/parser.c"
    break;

  case 178: /* var_decl: "<identifier>"  */
#line 492 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2956 "src/parser.c"
    break;

  case 179: /* var_decl: "<identifier>" array  */
#line 493 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2962 "src/parser.c"
    break;

  case 180: /* arg_decl: "<identifier>"  */
#line 495 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2968 "src/parser.c"
    break;

  case 181: /* arg_decl: "<identifier>" array_empty  */
#line 496 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2974 "src/parser.c"
    break;

  case 182: /* arg_decl: "<identifier>" array_exp  */
#line 497 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2980 "src/parser.c"
    break;

  case 184: /* fptr_arg_decl: %empty  */
#line 498 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, GET_LOC(&(yyloc))); }
#line 2986 "src/parser.c"
    break;

  case 199: /* opt_exp: %empty  */
#line 506 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 2992 "src/parser.c"
    break;

  case 201: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 509 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2998 "src/parser.c"
    break;

  case 202: /* con_exp: log_or_exp "?:" con_exp  */
#line 511 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3004 "src/parser.c"
    break;

  case 204: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 513 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3010 "src/parser.c"
    break;

  case 206: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 514 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3016 "src/parser.c"
    break;

  case 208: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 515 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3022 "src/parser.c"
    break;

  case 210: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 516 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3028 "src/parser.c"
    break;

  case 212: /* and_exp: and_exp "&" eq_exp  */
#line 517 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3034 "src/parser.c"
    break;

  case 214: /* eq_exp: eq_exp eq_op rel_exp  */
#line 518 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3040 "src/parser.c"
    break;

  case 216: /* rel_exp: rel_exp rel_op shift_exp  */
#line 519 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3046 "src/parser.c"
    break;

  case 218: /* shift_exp: shift_exp shift_op add_exp  */
#line 520 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3052 "src/parser.c"
    break;

  case 220: /* add_exp: add_exp add_op mul_exp  */
#line 521 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3058 "src/parser.c"
    break;

  case 222: /* mul_exp: mul_exp mul_op dur_exp  */
#line 522 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3064 "src/parser.c"
    break;

  case 224: /* dur_exp: dur_exp "::" cast_exp  */
#line 523 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3070 "src/parser.c"
    break;

  case 226: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 526 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), GET_LOC(&(yyloc))); }
#line 3076 "src/parser.c"
    break;

  case 235: /* unary_exp: unary_op unary_exp  */
#line 533 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3082 "src/parser.c"
    break;

  case 236: /* unary_exp: "(" OPID_D ")" unary_exp  */
#line 534 "src/gwion.y"
                                   { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3088 "src/parser.c"
    break;

  case 237: /* unary_exp: "new" type_decl_exp  */
#line 535 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), GET_LOC(&(yyloc))); }
#line 3094 "src/parser.c"
    break;

  case 238: /* unary_exp: "spork" code_stmt  */
#line 536 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3100 "src/parser.c"
    break;

  case 239: /* unary_exp: "fork" code_stmt  */
#line 537 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3106 "src/parser.c"
    break;

  case 240: /* unary_exp: "$" type_decl_empty  */
#line 538 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), GET_LOC(&(yyloc))); }
#line 3112 "src/parser.c"
    break;

  case 241: /* lambda_list: "<identifier>"  */
#line 541 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3118 "src/parser.c"
    break;

  case 242: /* lambda_list: "<identifier>" lambda_list  */
#line 542 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3124 "src/parser.c"
    break;

  case 243: /* lambda_arg: "\\" lambda_list  */
#line 543 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3130 "src/parser.c"
    break;

  case 244: /* lambda_arg: "\\"  */
#line 543 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3136 "src/parser.c"
    break;

  case 245: /* type_list: type_decl_empty  */
#line 546 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3142 "src/parser.c"
    break;

  case 246: /* type_list: type_decl_empty "," type_list  */
#line 547 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3148 "src/parser.c"
    break;

  case 247: /* call_paren: "(" exp ")"  */
#line 551 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3154 "src/parser.c"
    break;

  case 248: /* call_paren: "(" ")"  */
#line 551 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3160 "src/parser.c"
    break;

  case 251: /* dot_exp: post_exp "." "<identifier>"  */
#line 555 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    gwion_error(&(yyloc), arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), GET_LOC(&(yyloc)));
}
#line 3173 "src/parser.c"
    break;

  case 253: /* post_exp: post_exp array_exp  */
#line 566 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3179 "src/parser.c"
    break;

  case 254: /* post_exp: post_exp range  */
#line 568 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3185 "src/parser.c"
    break;

  case 255: /* post_exp: post_exp call_template call_paren  */
#line 570 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), GET_LOC(&(yyloc)));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3192 "src/parser.c"
    break;

  case 256: /* post_exp: post_exp post_op  */
#line 573 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3198 "src/parser.c"
    break;

  case 257: /* post_exp: post_exp OPID_D  */
#line 575 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3204 "src/parser.c"
    break;

  case 258: /* post_exp: dot_exp  */
#line 576 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3210 "src/parser.c"
    break;

  case 259: /* interp_exp: "<interp string>`"  */
#line 580 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3216 "src/parser.c"
    break;

  case 260: /* interp_exp: "<interp string>" interp_exp  */
#line 581 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), GET_LOC(&(yyloc))); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3222 "src/parser.c"
    break;

  case 261: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 582 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3228 "src/parser.c"
    break;

  case 262: /* interp: "`" interp_exp  */
#line 584 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3234 "src/parser.c"
    break;

  case 263: /* interp: interp "`" interp_exp  */
#line 585 "src/gwion.y"
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
#line 3249 "src/parser.c"
    break;

  case 264: /* typeof_exp: "typeof" "(" exp ")"  */
#line 596 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3255 "src/parser.c"
    break;

  case 265: /* prim_exp: "<identifier>"  */
#line 599 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3261 "src/parser.c"
    break;

  case 266: /* prim_exp: "<integer>"  */
#line 600 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3267 "src/parser.c"
    break;

  case 267: /* prim_exp: FLOATT  */
#line 601 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3273 "src/parser.c"
    break;

  case 268: /* prim_exp: interp  */
#line 602 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3279 "src/parser.c"
    break;

  case 269: /* prim_exp: "<litteral string>"  */
#line 603 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3285 "src/parser.c"
    break;

  case 270: /* prim_exp: "<litteral char>"  */
#line 604 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3291 "src/parser.c"
    break;

  case 271: /* prim_exp: array  */
#line 605 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3297 "src/parser.c"
    break;

  case 272: /* prim_exp: range  */
#line 606 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3303 "src/parser.c"
    break;

  case 273: /* prim_exp: "<<<" exp ">>>"  */
#line 607 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3309 "src/parser.c"
    break;

  case 274: /* prim_exp: "(" exp ")"  */
#line 608 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3315 "src/parser.c"
    break;

  case 275: /* prim_exp: lambda_arg code_stmt  */
#line 609 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3321 "src/parser.c"
    break;

  case 276: /* prim_exp: "(" ")"  */
#line 610 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3327 "src/parser.c"
    break;

  case 277: /* prim_exp: typeof_exp  */
#line 611 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3333 "src/parser.c"
    break;


#line 3337 "src/parser.c"

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

#line 613 "src/gwion.y"

