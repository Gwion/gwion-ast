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

#define LIST_FIRST(a)  map_set(&arg->map, (m_uint)a, (m_uint)a);

#define LIST_NEXT(a, b, t, c)                      \
  a = b;                                           \
  const t next = c;                                \
  const t list = (t)map_get(&arg->map, (m_uint)a); \
  list->next = next;                               \
  map_set(&arg->map, (m_uint) a, (m_uint)next);    \

#define LIST_REM(a) map_remove(&arg->map, (m_uint)a);

ANN int gwion_error(loc_t*, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);

#line 105 "src/parser.c"

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
  YYSYMBOL_MATCH = 21,                     /* "match"  */
  YYSYMBOL_CASE = 22,                      /* "case"  */
  YYSYMBOL_WHEN = 23,                      /* "when"  */
  YYSYMBOL_WHERE = 24,                     /* "where"  */
  YYSYMBOL_ENUM = 25,                      /* "enum"  */
  YYSYMBOL_TRETURN = 26,                   /* "return"  */
  YYSYMBOL_BREAK = 27,                     /* "break"  */
  YYSYMBOL_CONTINUE = 28,                  /* "continue"  */
  YYSYMBOL_CLASS = 29,                     /* "class"  */
  YYSYMBOL_STRUCT = 30,                    /* "struct"  */
  YYSYMBOL_STATIC = 31,                    /* "static"  */
  YYSYMBOL_GLOBAL = 32,                    /* "global"  */
  YYSYMBOL_PRIVATE = 33,                   /* "private"  */
  YYSYMBOL_PROTECT = 34,                   /* "protect"  */
  YYSYMBOL_ABSTRACT = 35,                  /* "abstract"  */
  YYSYMBOL_FINAL = 36,                     /* "final"  */
  YYSYMBOL_EXTENDS = 37,                   /* "extends"  */
  YYSYMBOL_DOT = 38,                       /* "."  */
  YYSYMBOL_OPERATOR = 39,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 40,                   /* "typedef"  */
  YYSYMBOL_FUNCDEF = 41,                   /* "funcdef"  */
  YYSYMBOL_NOELSE = 42,                    /* NOELSE  */
  YYSYMBOL_UNION = 43,                     /* "union"  */
  YYSYMBOL_CONSTT = 44,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 45,                   /* "..."  */
  YYSYMBOL_VARLOOP = 46,                   /* "varloop"  */
  YYSYMBOL_BACKSLASH = 47,                 /* "\\"  */
  YYSYMBOL_OPID_A = 48,                    /* OPID_A  */
  YYSYMBOL_OPID_E = 49,                    /* OPID_E  */
  YYSYMBOL_LATE = 50,                      /* "LATE"  */
  YYSYMBOL_NUM = 51,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 52,                    /* FLOATT  */
  YYSYMBOL_STRING_LIT = 53,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 54,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 55,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 56,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 57,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 58,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 59,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 60,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 61,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 62,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 63,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 64,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 65,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 66,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 67,                  /* "#if"  */
  YYSYMBOL_PP_NL = 68,                     /* "\n"  */
  YYSYMBOL_PP_REQUIRE = 69,                /* "require"  */
  YYSYMBOL_70_operator_id_ = 70,           /* "@<operator id>"  */
  YYSYMBOL_71_operator_id_ = 71,           /* "&<operator id>"  */
  YYSYMBOL_ID = 72,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 73,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 74,                  /* "++"  */
  YYSYMBOL_MINUS = 75,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 76,                /* "--"  */
  YYSYMBOL_TIMES = 77,                     /* "*"  */
  YYSYMBOL_DIVIDE = 78,                    /* "/"  */
  YYSYMBOL_PERCENT = 79,                   /* "%"  */
  YYSYMBOL_DOLLAR = 80,                    /* "$"  */
  YYSYMBOL_QUESTION = 81,                  /* "?"  */
  YYSYMBOL_OPTIONS = 82,                   /* OPTIONS  */
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
  YYSYMBOL_when_exp = 141,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 142,          /* match_case_stmt  */
  YYSYMBOL_match_list = 143,               /* match_list  */
  YYSYMBOL_where_stmt = 144,               /* where_stmt  */
  YYSYMBOL_match_stmt = 145,               /* match_stmt  */
  YYSYMBOL_flow = 146,                     /* flow  */
  YYSYMBOL_loop_stmt = 147,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 148,             /* varloop_stmt  */
  YYSYMBOL_selection_stmt = 149,           /* selection_stmt  */
  YYSYMBOL_breaks = 150,                   /* breaks  */
  YYSYMBOL_jump_stmt = 151,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 152,                 /* exp_stmt  */
  YYSYMBOL_exp = 153,                      /* exp  */
  YYSYMBOL_binary_exp = 154,               /* binary_exp  */
  YYSYMBOL_call_template = 155,            /* call_template  */
  YYSYMBOL_op = 156,                       /* op  */
  YYSYMBOL_array_exp = 157,                /* array_exp  */
  YYSYMBOL_array_empty = 158,              /* array_empty  */
  YYSYMBOL_range = 159,                    /* range  */
  YYSYMBOL_array = 160,                    /* array  */
  YYSYMBOL_decl_exp = 161,                 /* decl_exp  */
  YYSYMBOL_func_args = 162,                /* func_args  */
  YYSYMBOL_fptr_args = 163,                /* fptr_args  */
  YYSYMBOL_arg_type = 164,                 /* arg_type  */
  YYSYMBOL_decl_template = 165,            /* decl_template  */
  YYSYMBOL_global = 166,                   /* global  */
  YYSYMBOL_storage_flag = 167,             /* storage_flag  */
  YYSYMBOL_access_flag = 168,              /* access_flag  */
  YYSYMBOL_flag = 169,                     /* flag  */
  YYSYMBOL_final = 170,                    /* final  */
  YYSYMBOL_modifier = 171,                 /* modifier  */
  YYSYMBOL_func_def_base = 172,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 173,            /* abstract_fdef  */
  YYSYMBOL_op_op = 174,                    /* op_op  */
  YYSYMBOL_op_base = 175,                  /* op_base  */
  YYSYMBOL_operator = 176,                 /* operator  */
  YYSYMBOL_op_def = 177,                   /* op_def  */
  YYSYMBOL_func_def = 178,                 /* func_def  */
  YYSYMBOL_type_decl_tmpl = 179,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 180,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 181,         /* type_decl_noflag  */
  YYSYMBOL_option = 182,                   /* option  */
  YYSYMBOL_type_decl_opt = 183,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 184,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 185,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 186,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 187,               /* union_decl  */
  YYSYMBOL_union_list = 188,               /* union_list  */
  YYSYMBOL_union_def = 189,                /* union_def  */
  YYSYMBOL_var_decl_list = 190,            /* var_decl_list  */
  YYSYMBOL_var_decl = 191,                 /* var_decl  */
  YYSYMBOL_arg_decl = 192,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 193,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 194,                    /* eq_op  */
  YYSYMBOL_rel_op = 195,                   /* rel_op  */
  YYSYMBOL_shift_op = 196,                 /* shift_op  */
  YYSYMBOL_add_op = 197,                   /* add_op  */
  YYSYMBOL_mul_op = 198,                   /* mul_op  */
  YYSYMBOL_opt_exp = 199,                  /* opt_exp  */
  YYSYMBOL_con_exp = 200,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 201,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 202,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 203,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 204,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 205,                  /* and_exp  */
  YYSYMBOL_eq_exp = 206,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 207,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 208,                /* shift_exp  */
  YYSYMBOL_add_exp = 209,                  /* add_exp  */
  YYSYMBOL_mul_exp = 210,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 211,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 212,                 /* cast_exp  */
  YYSYMBOL_unary_op = 213,                 /* unary_op  */
  YYSYMBOL_unary_exp = 214,                /* unary_exp  */
  YYSYMBOL_lambda_list = 215,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 216,               /* lambda_arg  */
  YYSYMBOL_type_list = 217,                /* type_list  */
  YYSYMBOL_call_paren = 218,               /* call_paren  */
  YYSYMBOL_post_op = 219,                  /* post_op  */
  YYSYMBOL_dot_exp = 220,                  /* dot_exp  */
  YYSYMBOL_post_exp = 221,                 /* post_exp  */
  YYSYMBOL_interp_exp = 222,               /* interp_exp  */
  YYSYMBOL_interp = 223,                   /* interp  */
  YYSYMBOL_typeof_exp = 224,               /* typeof_exp  */
  YYSYMBOL_prim_exp = 225                  /* prim_exp  */
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
#define YYFINAL  170
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1725

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  274
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  453

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
       0,   162,   162,   163,   166,   167,   171,   172,   173,   174,
     175,   176,   177,   180,   180,   182,   193,   193,   195,   195,
     197,   198,   200,   201,   203,   206,   209,   215,   222,   222,
     224,   228,   233,   234,   236,   237,   243,   244,   244,   247,
     248,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   266,   267,   268,   269,   270,   271,   272,   273,
     276,   276,   279,   285,   285,   288,   298,   299,   301,   301,
     303,   313,   314,   317,   319,   321,   323,   325,   327,   331,
     334,   336,   340,   340,   342,   343,   344,   345,   349,   350,
     354,   355,   358,   359,   360,   361,   364,   364,   366,   366,
     366,   366,   369,   370,   374,   378,   379,   380,   384,   385,
     386,   389,   389,   391,   392,   394,   394,   395,   395,   396,
     396,   398,   398,   400,   402,   402,   404,   405,   408,   409,
     410,   411,   414,   414,   416,   416,   419,   426,   435,   435,
     435,   435,   435,   437,   439,   441,   446,   452,   452,   453,
     456,   456,   456,   459,   463,   464,   468,   469,   472,   472,
     472,   473,   474,   474,   477,   478,   480,   480,   483,   487,
     489,   490,   493,   503,   504,   507,   508,   510,   511,   512,
     513,   513,   515,   515,   516,   516,   516,   516,   517,   517,
     518,   518,   519,   519,   519,   521,   521,   522,   523,   525,
     528,   528,   529,   529,   530,   530,   531,   531,   532,   532,
     533,   533,   534,   534,   535,   535,   536,   536,   537,   537,
     538,   538,   540,   540,   543,   543,   543,   544,   544,   544,
     544,   547,   548,   549,   550,   551,   552,   553,   556,   557,
     558,   558,   561,   562,   566,   566,   568,   568,   570,   579,
     580,   582,   584,   587,   589,   591,   595,   596,   597,   599,
     600,   611,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626
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
  "\"repeat\"", "\"for\"", "\"foreach\"", "\"match\"", "\"case\"",
  "\"when\"", "\"where\"", "\"enum\"", "\"return\"", "\"break\"",
  "\"continue\"", "\"class\"", "\"struct\"", "\"static\"", "\"global\"",
  "\"private\"", "\"protect\"", "\"abstract\"", "\"final\"", "\"extends\"",
  "\".\"", "\"operator\"", "\"typedef\"", "\"funcdef\"", "NOELSE",
  "\"union\"", "\"const\"", "\"...\"", "\"varloop\"", "\"\\\\\"", "OPID_A",
  "OPID_E", "\"LATE\"", "\"<integer>\"", "FLOATT", "\"<litteral string>\"",
  "\"<litteral char>\"", "\"`\"", "\"<interp string>\"", "INTERP_EXP",
  "\"<interp string>`\"", "\"<comment>\"", "\"#include\"", "\"#define\"",
  "\"#pragma\"", "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"",
  "\"#if\"", "\"\\n\"", "\"require\"", "\"@<operator id>\"",
  "\"&<operator id>\"", "\"<identifier>\"", "\"+\"", "\"++\"", "\"-\"",
  "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "OPTIONS",
  "\":\"", "\"::\"", "\"?:\"", "\"new\"", "\"spork\"", "\"fork\"",
  "\"typeof\"", "\"<<<\"", "\">>>\"", "\"&&\"", "\"==\"", "\">=\"",
  "\">\"", "\"<=\"", "\"<\"", "\"!=\"", "\"<<\"", "\">>\"", "\"&\"",
  "\"|\"", "\"^\"", "\"||\"", "\":[\"", "\"~\"", "\"!\"",
  "\"<dynamic_operator>\"", "RANGE_EMPTY", "UMINUS", "UTIMES", "\"=\"",
  "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg", "ast", "section",
  "class_type", "class_def", "class_ext", "class_body", "id_list",
  "stmt_list", "fptr_base", "func_base", "fptr_def", "type_def",
  "type_decl_array", "type_decl_exp", "type_decl_empty", "arg", "arg_list",
  "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt", "opt_id",
  "enum_def", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "selection_stmt",
  "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template",
  "op", "array_exp", "array_empty", "range", "array", "decl_exp",
  "func_args", "fptr_args", "arg_type", "decl_template", "global",
  "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "type_decl_tmpl", "type_decl_next",
  "type_decl_noflag", "option", "type_decl_opt", "type_decl",
  "type_decl_flag", "type_decl_flag2", "union_decl", "union_list",
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

#define YYPACT_NINF (-311)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     431,  -311,  1069,   947,   536,   130,  -311,    67,  -311,   737,
    -311,    82,    99,   109,  1557,   130,   825,  -311,  -311,  -311,
    -311,    50,   130,   130,   130,  -311,  1557,    45,  1618,  -311,
    -311,  -311,  -311,  -311,  1008,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,     1,     1,    84,    84,   120,  1557,  -311,  -311,   136,
     431,  -311,   130,  -311,   737,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,   142,  -311,  -311,  -311,    40,  -311,  -311,   139,
     -16,  -311,   144,  -311,  -311,  -311,  -311,  -311,   172,  -311,
    -311,  -311,   130,  -311,  -311,   -35,    63,    57,    70,    75,
     -19,   102,   121,    83,    88,   103,   111,  1618,  -311,    84,
    -311,  -311,    21,   140,  -311,  -311,  -311,    59,  -311,  1557,
      27,  -311,   641,  -311,  -311,  -311,  -311,   196,  -311,  -311,
     192,   190,  1557,   162,  1557,   886,   138,    74,   158,  -311,
     232,  -311,     1,   209,     1,   161,    14,    45,  -311,  -311,
    1008,  -311,    29,  -311,   123,  -311,  -311,   201,  -311,   156,
    -311,   236,   -18,  -311,  -311,  -311,  -311,  -311,  1557,    20,
    -311,  -311,   206,  -311,  1557,  -311,   249,  -311,  1557,  1557,
    1557,  1557,  1130,  -311,  -311,  -311,   788,    84,     1,     1,
    1557,  1618,  1618,  1618,  1618,  1618,  1618,  -311,  -311,  1618,
    -311,  -311,  -311,  -311,  1618,  -311,  -311,  1618,  -311,  -311,
    1618,  -311,  -311,  -311,  1618,  1618,     1,  -311,  -311,  1191,
     181,  -311,     1,   250,  -311,  -311,  -311,  1008,  -311,    77,
     251,  1252,  -311,     1,    43,  -311,     1,  -311,     1,   177,
    1557,   182,   886,   171,   235,  -311,   254,  -311,   193,     1,
      43,   194,   159,  -311,  -311,  -311,  1008,  -311,   195,  -311,
    -311,  -311,  1313,  -311,  -311,   202,  -311,  -311,  -311,   197,
     203,  -311,   -16,  -311,  -311,  -311,  -311,   101,   196,  -311,
    -311,  -311,  -311,  -311,   263,  -311,  -311,  -311,  -311,   265,
    -311,   266,   200,   269,   191,  -311,    63,    57,    70,    75,
     -19,   102,   121,    83,    88,   103,   111,  -311,  -311,   271,
     268,  1374,  -311,  -311,  -311,  1435,  -311,  -311,   129,  -311,
     273,   208,  -311,   275,    84,   210,   212,   737,   247,   737,
    1496,  1557,  1557,  -311,    58,   213,   159,  -311,   279,   208,
     283,   159,   213,   278,  -311,  -311,  -311,   159,   737,   285,
       1,     1,     1,   236,  -311,   288,  1618,     1,  -311,  -311,
     207,  -311,  -311,     1,   236,   214,  -311,  -311,   159,   159,
     280,  -311,  -311,   737,   211,    12,    53,   272,  -311,  -311,
      54,   286,     1,  -311,  -311,  -311,  -311,   131,    17,   256,
    -311,  -311,   291,   292,   293,  -311,   200,  -311,  -311,  -311,
    -311,  -311,   144,  1557,   209,  -311,   737,  -311,   737,   737,
    1557,   217,   737,  -311,   229,  -311,  -311,  -311,  -311,    18,
     230,    17,   294,     1,   296,     1,  -311,  -311,  -311,   -16,
      43,  -311,  -311,  -311,   269,   737,  -311,  -311,  -311,   300,
    -311,  -311,  -311,   431,   303,   309,   737,  -311,   431,   304,
    -311,  -311,  -311
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    89,     0,     0,     0,   131,   166,     0,    71,     0,
      72,     0,     0,     0,     0,   131,     0,    82,    83,    13,
      14,   147,   131,   131,   131,   165,     0,   241,     0,   164,
     263,   264,   266,   267,     0,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   262,   246,   224,   247,
     225,     0,     0,   228,   229,     0,     0,   230,   227,     0,
       2,     4,   131,     8,     6,    11,    12,    55,    58,    22,
       9,    56,     0,    53,    59,    54,     0,    57,    52,     0,
      90,   111,   112,   269,   268,    92,   150,   151,     0,   152,
       7,   167,   131,    10,   113,   197,   200,   202,   204,   206,
     208,   210,   212,   214,   216,   218,   220,     0,   222,     0,
     226,   255,   231,   265,   274,   249,   273,     0,   105,     0,
       0,    39,     0,   124,   123,   126,   127,     0,   125,   129,
     128,   133,     0,     0,     0,     0,     0,     0,    61,    85,
       0,   148,     0,     0,     0,     0,     0,   238,   240,   233,
       0,   256,     0,   259,    97,    31,   237,   154,   156,   160,
     162,    29,     0,   157,    30,   234,   235,   236,     0,     0,
       1,     5,   133,    23,     0,    87,     0,    88,     0,     0,
       0,     0,     0,   107,   228,   229,     0,     0,     0,     0,
     196,     0,     0,     0,     0,     0,     0,   182,   183,     0,
     187,   185,   186,   184,     0,   188,   189,     0,   190,   191,
       0,   192,   193,   194,     0,     0,     0,   232,   272,     0,
       0,   254,     0,     0,   250,   251,   253,     0,   271,     0,
     102,     0,    40,   116,     0,   130,     0,   132,     0,     0,
       0,     0,     0,     0,     0,    60,     0,    84,     0,   118,
       0,     0,   122,    79,   239,   257,     0,   153,     0,   158,
     159,   161,     0,    28,   163,     0,   270,   134,   135,     0,
       0,    86,    91,    93,    95,    94,   106,     0,     0,   101,
      98,    99,   100,   138,     0,   140,   139,   142,   141,     0,
     149,     0,     0,   195,     0,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   219,   221,   223,   248,   242,
       0,     0,   252,   260,   110,     0,   103,   109,     0,    34,
     115,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,     0,     0,   122,    37,   117,   181,
       0,   122,     0,     0,   258,   155,   261,   122,     0,     0,
       0,     0,     0,   175,   114,   174,     0,     0,    96,   245,
       0,   104,   108,     0,   177,    33,   119,   136,   122,   122,
      80,    74,    78,     0,     0,     0,    64,    69,    67,    20,
       0,     0,     0,   180,    36,    26,    24,     0,     0,    17,
      73,   146,     0,     0,     0,   176,     0,   198,   243,   244,
      35,   179,   178,     0,     0,    25,     0,    75,     0,     0,
       0,     0,     0,    70,     0,    62,    27,    38,   121,    97,
       0,   170,     0,     0,     0,     0,   144,   145,   173,    32,
       0,    81,    76,    77,    63,     0,    68,    21,   168,     0,
     171,   172,    16,    19,     0,     0,    65,   169,    18,     0,
     143,   137,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -311,  -311,  -127,   -56,  -311,  -311,  -311,  -311,   -25,    -3,
    -311,  -311,  -311,  -311,   -43,  -102,   -36,  -310,  -311,   -60,
    -311,   -34,  -311,    -9,  -311,  -311,  -311,   -11,  -311,  -311,
    -311,   198,  -311,  -311,  -311,  -311,  -311,  -118,     0,   -21,
     215,  -311,   -76,   -40,   216,  -149,   -10,    47,   -75,  -237,
    -220,   312,   204,  -311,    15,   163,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,    78,  -311,  -311,   175,  -222,
      -4,  -311,  -311,   -81,  -311,   -55,  -311,     3,  -311,  -311,
     157,   164,   165,   168,  -311,  -181,  -311,   153,   167,   155,
     160,   166,   169,   152,   150,   148,   147,   151,   277,    -6,
     220,  -311,     6,  -311,   -83,  -311,  -311,  -125,  -311,   -44,
    -311
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,    60,    61,    62,    63,   424,   449,   380,    64,
     143,   127,    65,    66,   155,   165,   309,   319,   320,   337,
     338,    67,    68,    69,   246,    70,   411,   333,   334,   413,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
     257,   283,    81,    82,    83,    84,    85,   234,   250,   324,
     343,   128,   129,   130,   131,   238,   269,    86,    87,   284,
     187,    88,    89,    90,   157,   158,   159,   261,   160,   161,
      91,    92,   421,   422,    93,   354,   355,   365,   384,   199,
     204,   207,   210,   214,   294,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     148,   109,   310,   312,   110,   111,   112,   153,   113,   114,
     115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     133,   122,   117,   120,   171,   146,   183,   163,   163,   164,
     295,   321,   263,   340,   137,   156,   140,   242,   409,   166,
     167,   438,   149,     4,   178,   255,   -97,   339,   219,   226,
     138,   178,   179,   178,   152,   230,   224,   142,   144,   145,
     392,   393,   394,   175,   163,    25,   190,   162,   162,   322,
     191,    29,   186,   400,   154,   173,   169,   178,   414,   220,
     179,    25,   179,   178,   415,   228,   180,    29,   377,   192,
     221,    55,   132,   154,   197,   218,   410,   172,   178,   198,
     332,   178,   124,   244,   162,   314,   256,   134,   323,   419,
      55,   176,   181,     4,   180,    47,   180,    49,   163,   248,
     163,   217,   313,   289,   135,   178,    55,   189,   251,   230,
     231,   266,   253,   173,   136,   444,   381,   147,   163,   229,
     181,   386,   181,   222,   330,   168,   222,   389,   321,   321,
     321,   344,   239,   178,   241,   414,   170,   362,   162,   418,
     162,   321,   177,   178,   163,   163,   292,   174,   404,   405,
     152,   182,   291,   290,   316,   193,   208,   272,   209,   194,
     339,   123,   124,   125,   126,   211,   212,   213,   265,   273,
     274,   275,   163,   195,   270,   397,   196,     8,   163,    10,
     307,   178,   277,   327,   162,   162,   178,   215,   329,   163,
     293,   216,   163,   445,   163,   227,   200,   201,   202,   203,
     325,   233,   326,   321,   395,   163,   178,   178,   346,   348,
     243,   178,   162,   399,   249,   178,    25,   408,   162,   120,
     205,   206,    29,   123,   124,   236,   237,   152,   222,   162,
     245,   318,   162,   252,   162,   247,   178,   259,   260,   258,
     328,   267,   237,   262,   154,   162,    47,    48,    49,    50,
     371,   178,   271,   308,   331,   311,   152,   332,   315,   184,
     185,    55,   277,   335,   342,   336,   341,   154,   350,   347,
     351,   352,   353,   178,   356,   357,   358,   363,    57,    58,
     364,   366,   368,   382,   369,   379,   385,   388,   401,   416,
     367,   391,   396,   423,   406,   425,   412,   403,   426,   427,
     435,   437,   439,   447,   441,   443,   163,   163,   163,   450,
     375,   360,   451,   163,   452,   277,   448,   387,   370,   163,
     372,   442,   417,   378,   402,   349,   183,   223,   225,   430,
     374,   240,   376,   141,   235,   268,   345,   264,   163,   390,
     440,   428,   383,   285,   163,   296,   162,   162,   162,   298,
     286,   287,   420,   162,   288,   299,   302,   303,   304,   162,
     297,   305,   300,   398,   407,   188,   306,   254,   301,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   162,   163,
     164,   163,   429,     0,   162,   420,     0,     0,     0,     0,
       0,     0,   171,     0,     0,     0,     0,   431,     0,   432,
     433,     0,     0,   436,     0,     0,     0,     0,     0,     0,
     434,     0,     0,     0,     0,     0,     0,   162,     0,   162,
       0,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,     0,     1,     0,     2,   173,     3,     0,
       4,     0,     5,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,    23,     0,    24,    25,     0,    26,    27,     0,
      28,    29,    30,    31,    32,    33,    34,     0,     0,     0,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     0,     0,    46,     0,    47,    48,    49,    50,     0,
       0,    51,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,    58,     1,
       0,     2,     0,     3,     0,     4,   121,     0,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,    26,    27,     0,    28,    29,    30,    31,    32,
      33,    34,     0,     0,     0,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,    46,     0,
      47,    48,    49,    50,     0,     0,    51,     0,     0,     0,
       0,     0,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    58,     1,     0,     2,     0,     3,     0,
       4,   232,     0,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,    27,     0,
      28,    29,    30,    31,    32,    33,    34,     0,     0,     0,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     0,     0,    46,     0,    47,    48,    49,    50,     0,
       0,    51,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     4,    57,    58,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    26,    27,     0,    28,    29,    30,    31,
      32,    33,    34,     0,     0,     0,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     0,     0,    46,
       0,    47,    48,    49,    50,     0,     0,    51,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,   139,     0,
       2,     0,     3,     0,     0,     0,   278,     6,     0,     0,
       0,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   208,    47,   209,    49,   211,   212,   213,     0,    25,
     279,     0,    27,     0,    28,    29,    30,    31,    32,    33,
      34,   280,   200,   201,   202,   203,   281,   205,   206,     1,
       0,     2,     0,     3,     0,     0,   282,    46,     6,    47,
      48,    49,    50,     0,     0,    51,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    57,    58,    27,     0,    28,    29,    30,    31,    32,
      33,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,   118,     0,     0,    46,     6,
      47,    48,    49,    50,     0,     0,    51,     0,     0,     0,
       0,     0,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    57,    58,    27,     0,    28,    29,    30,    31,
      32,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     0,     0,    46,
       6,    47,    48,    49,    50,     0,     0,    51,     0,     0,
     119,     0,     0,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    57,    58,    27,     0,    28,    29,    30,
      31,    32,    33,    34,   150,     0,   151,     0,     0,     0,
       0,     0,     0,     0,     2,   116,     3,     0,     0,     0,
      46,     6,    47,    48,    49,    50,     0,     0,    51,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    57,    58,    27,     0,    28,    29,
      30,    31,    32,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,   276,     0,
       0,    46,     6,    47,    48,    49,    50,     0,     0,    51,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    57,    58,    27,     0,    28,
      29,    30,    31,    32,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,     0,    46,     6,    47,    48,    49,    50,     0,     0,
      51,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    57,    58,    27,     0,
      28,    29,    30,    31,    32,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
     317,     0,     0,    46,     6,    47,    48,    49,    50,     0,
       0,    51,     0,     0,   119,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    57,    58,    27,
       0,    28,    29,    30,    31,    32,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,   118,     0,     0,    46,     6,    47,    48,    49,    50,
       0,     0,    51,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    57,    58,
      27,     0,    28,    29,    30,    31,    32,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
     359,     3,     0,     0,     0,    46,     6,    47,    48,    49,
      50,     0,     0,    51,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    57,
      58,    27,     0,    28,    29,    30,    31,    32,    33,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,   361,     0,     0,    46,     6,    47,    48,
      49,    50,     0,     0,    51,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      57,    58,    27,     0,    28,    29,    30,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,   373,     3,     0,     0,     0,    46,     6,    47,
      48,    49,    50,     0,     0,    51,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    57,    58,    27,     0,    28,    29,    30,    31,    32,
      33,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     0,     0,     0,    46,     6,
      47,    48,    49,    50,     0,     0,    51,     0,     0,     0,
       0,     0,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    57,    58,    27,     0,    28,    29,    30,    31,
      32,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     0,     0,    46,
       0,    47,    48,    49,    50,     0,     0,    51,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    58,    27,     0,    28,     0,    30,
      31,    32,    33,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,     0,    47,    48,    49,    50,     0,     0,    51,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,    58
};

static const yytype_int16 yycheck[] =
{
       9,     4,     2,     3,    60,    26,    82,    51,    52,    52,
     191,   233,   161,   250,    14,    51,    16,   135,     6,    53,
      54,     3,    28,     9,     4,   150,     5,   249,     7,   112,
      15,     4,    48,     4,    34,     8,   112,    22,    23,    24,
     350,   351,   352,     3,    88,    44,    81,    51,    52,     6,
      85,    50,    88,   363,    72,    64,    56,     4,     4,    38,
      48,    44,    48,     4,    10,     6,    82,    50,    10,   104,
      49,    89,     5,    72,    93,   109,    23,    62,     4,    98,
      22,     4,    32,     9,    88,     8,    57,     5,    45,    72,
      89,    51,   108,     9,    82,    74,    82,    76,   142,   142,
     144,   107,   227,   186,     5,     4,    89,    92,   144,     8,
      83,    91,   146,   122,     5,   425,   336,    72,   162,   119,
     108,   341,   108,   105,   242,     5,   105,   347,   350,   351,
     352,   256,   132,     4,   134,     4,     0,     8,   142,     8,
     144,   363,     3,     4,   188,   189,   189,     5,   368,   369,
     150,     7,   188,   187,   230,    92,    73,   178,    75,   102,
     382,    31,    32,    33,    34,    77,    78,    79,   168,   179,
     180,   181,   216,   103,   174,   356,   101,    15,   222,    17,
     216,     4,   182,     6,   188,   189,     4,    84,     6,   233,
     190,    80,   236,   430,   238,    55,    94,    95,    96,    97,
     236,     5,   238,   425,   353,   249,     4,     4,     6,     6,
      72,     4,   216,     6,     5,     4,    44,     6,   222,   219,
      99,   100,    50,    31,    32,    35,    36,   227,   105,   233,
      72,   231,   236,    72,   238,     3,     4,    81,    82,    38,
     240,    35,    36,     7,    72,   249,    74,    75,    76,    77,
       3,     4,     3,    72,    83,     5,   256,    22,     7,    87,
      88,    89,   262,     9,   105,    72,    72,    72,     5,    72,
       5,     5,    72,     4,    83,     4,     8,     4,   106,   107,
      72,     6,    72,     4,    72,    72,     3,     9,   364,     3,
     324,     6,     4,    37,    14,     4,    24,    83,     6,     6,
      83,    72,    72,     3,    10,     9,   350,   351,   352,     6,
     331,   311,     3,   357,    10,   315,   443,   342,   327,   363,
     329,   423,   382,   334,   364,   278,   402,   112,   112,   404,
     330,   133,   332,    21,   130,   172,   258,   162,   382,   348,
     421,   396,   339,   186,   388,   192,   350,   351,   352,   194,
     186,   186,   388,   357,   186,   195,   204,   207,   210,   363,
     193,   214,   196,   357,   373,    88,   215,   147,   199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,   382,   423,
     423,   425,   403,    -1,   388,   421,    -1,    -1,    -1,    -1,
      -1,    -1,   448,    -1,    -1,    -1,    -1,   406,    -1,   408,
     409,    -1,    -1,   412,    -1,    -1,    -1,    -1,    -1,    -1,
     410,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,   423,
      -1,   425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,    -1,     3,    -1,     5,   446,     7,    -1,
       9,    -1,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    47,    -1,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    72,    -1,    74,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,     3,
      -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,   107,     3,    -1,     5,    -1,     7,    -1,
       9,    10,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,    -1,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    72,    -1,    74,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,     9,   106,   107,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,     3,    -1,
       5,    -1,     7,    -1,    -1,    -1,    48,    12,    -1,    -1,
      -1,    -1,    -1,   106,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    -1,    44,
      82,    -1,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    93,    94,    95,    96,    97,    98,    99,   100,     3,
      -1,     5,    -1,     7,    -1,    -1,   108,    72,    12,    74,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,   106,   107,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,     8,    -1,    -1,    72,    12,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,   106,   107,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    72,
      12,    74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,
      83,    -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,   106,   107,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      72,    12,    74,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,   106,   107,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      -1,    72,    12,    74,    75,    76,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,   106,   107,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    72,    12,    74,    75,    76,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,   106,   107,    47,    -1,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    72,    12,    74,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,   106,   107,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    72,    12,    74,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,   106,   107,
      47,    -1,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    -1,    -1,    -1,    72,    12,    74,    75,    76,
      77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,   106,
     107,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,     8,    -1,    -1,    72,    12,    74,    75,
      76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
     106,   107,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,    -1,    -1,    -1,    72,    12,    74,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,   106,   107,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    72,    12,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,   106,   107,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,   107,    47,    -1,    49,    -1,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,   107
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    39,    40,    41,    43,    44,    46,    47,    49,    50,
      51,    52,    53,    54,    55,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    72,    74,    75,    76,
      77,    80,    86,    87,    88,    89,    90,   106,   107,   116,
     117,   118,   119,   120,   124,   127,   128,   136,   137,   138,
     140,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   157,   158,   159,   160,   161,   172,   173,   176,   177,
     178,   185,   186,   189,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   216,
     219,   220,   221,   223,   224,   225,     6,   153,     8,    83,
     153,    10,   124,    31,    32,    33,    34,   126,   166,   167,
     168,   169,     5,   138,     5,     5,     5,   153,   169,     3,
     153,   166,   169,   125,   169,   169,   154,    72,   215,   214,
      56,    58,   153,   222,    72,   129,   131,   179,   180,   181,
     183,   184,   185,   224,   129,   130,   136,   136,     5,   153,
       0,   118,   169,   138,     5,     3,    51,     3,     4,    48,
      82,   108,     7,   157,    87,    88,   131,   175,   213,   169,
      81,    85,   104,    92,   102,   103,   101,    93,    98,   194,
      94,    95,    96,    97,   195,    99,   100,   196,    73,    75,
     197,    77,    78,    79,   198,    84,    80,   214,   136,     7,
      38,    49,   105,   155,   157,   159,   219,    55,     6,   153,
       8,    83,    10,     5,   162,   167,    35,    36,   170,   153,
     146,   153,   152,    72,     9,    72,   139,     3,   129,     5,
     163,   131,    72,   136,   215,   222,    57,   155,    38,    81,
      82,   182,     7,   160,   183,   153,    91,    35,   170,   171,
     153,     3,   154,   161,   161,   161,     8,   153,    48,    82,
      93,    98,   108,   156,   174,   195,   196,   197,   198,   219,
     136,   131,   129,   153,   199,   200,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   131,    72,   131,
     217,     5,   218,   222,     8,     7,   157,     8,   153,   132,
     133,   184,     6,    45,   164,   131,   131,     6,   153,     6,
     152,    83,    22,   142,   143,     9,    72,   134,   135,   184,
     164,    72,   105,   165,   222,   180,     6,    72,     6,   162,
       5,     5,     5,    72,   190,   191,    83,     4,     8,     6,
     153,     8,     8,     4,    72,   192,     6,   136,    72,    72,
     138,     3,   138,     6,   153,   154,   153,    10,   142,    72,
     123,   165,     4,   192,   193,     3,   165,   123,     9,   165,
     138,     6,   132,   132,   132,   160,     4,   200,   217,     6,
     132,   157,   158,    83,   165,   165,    14,   138,     6,     6,
      23,   141,    24,   144,     4,    10,     3,   134,     8,    72,
     131,   187,   188,    37,   121,     4,     6,     6,   190,   154,
     163,   138,   138,   138,   153,    83,   138,    72,     3,    72,
     188,    10,   130,     9,   132,   164,   124,     3,   117,   122,
       6,     3,    10
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
     139,   139,   140,   141,   141,   142,   143,   143,   144,   144,
     145,   146,   146,   147,   147,   147,   147,   147,   147,   148,
     149,   149,   150,   150,   151,   151,   151,   151,   152,   152,
     153,   153,   154,   154,   154,   154,   155,   155,   156,   156,
     156,   156,   157,   157,   157,   158,   158,   158,   159,   159,
     159,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   167,   167,   168,   168,   169,   169,
     169,   169,   170,   170,   171,   171,   172,   173,   174,   174,
     174,   174,   174,   175,   175,   175,   175,   176,   176,   177,
     178,   178,   178,   179,   180,   180,   181,   181,   182,   182,
     182,   183,   184,   184,   185,   185,   186,   186,   187,   187,
     188,   188,   189,   190,   190,   191,   191,   192,   192,   192,
     193,   193,   194,   194,   195,   195,   195,   195,   196,   196,
     197,   197,   198,   198,   198,   199,   199,   200,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   212,   213,   213,   213,   213,   213,   213,
     213,   214,   214,   214,   214,   214,   214,   214,   215,   215,
     216,   216,   217,   217,   218,   218,   219,   219,   220,   221,
     221,   221,   221,   221,   221,   221,   222,   222,   222,   223,
     223,   224,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225
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
       1,     0,     6,     2,     0,     5,     1,     2,     2,     0,
       6,     1,     1,     5,     5,     6,     7,     7,     5,     3,
       5,     7,     1,     1,     3,     2,     3,     2,     2,     1,
       1,     3,     1,     3,     3,     3,     3,     0,     1,     1,
       1,     1,     3,     4,     5,     2,     3,     2,     5,     4,
       4,     1,     1,     1,     4,     2,     1,     2,     1,     2,
       1,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     0,     1,     1,     5,     9,     1,     1,
       1,     1,     1,     7,     5,     5,     4,     1,     2,     3,
       1,     1,     1,     2,     1,     3,     1,     1,     1,     1,
       0,     2,     1,     2,     1,     1,     1,     1,     2,     3,
       1,     2,     7,     3,     1,     1,     2,     1,     2,     2,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     5,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     1,     2,
       2,     1,     1,     3,     3,     2,     1,     1,     3,     1,
       2,     2,     3,     2,     2,     1,     1,     2,     3,     2,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     2,     1
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
#line 159 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1766 "src/parser.c"
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
#line 162 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2067 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 163 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2073 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 166 "src/gwion.y"
            { (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2079 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 167 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2085 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 171 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2091 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 172 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2097 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 173 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2103 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 174 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2109 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 175 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2115 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 176 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2121 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 177 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2127 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 180 "src/gwion.y"
                  { (yyval.cflag) = cflag_none; }
#line 2133 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 180 "src/gwion.y"
                                                { (yyval.cflag) = cflag_struct; }
#line 2139 "src/parser.c"
    break;

  case 15: /* class_def: class_type flag modifier "<identifier>" decl_template class_ext "{" class_body "}"  */
#line 183 "src/gwion.y"
    {
      if((yyvsp[-8].cflag) == cflag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-8].cflag) | (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), (yyloc));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      if((yyvsp[-8].cflag))
        (yyval.class_def)->cflag |= cflag_struct;
  }
#line 2153 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 193 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2159 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 193 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2165 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 195 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2171 "src/parser.c"
    break;

  case 20: /* id_list: "<identifier>"  */
#line 197 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2177 "src/parser.c"
    break;

  case 21: /* id_list: id_list "," "<identifier>"  */
#line 198 "src/gwion.y"
                           { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2183 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 200 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2189 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt_list stmt  */
#line 201 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2195 "src/parser.c"
    break;

  case 24: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 203 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2202 "src/parser.c"
    break;

  case 25: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 206 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2209 "src/parser.c"
    break;

  case 26: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 209 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2219 "src/parser.c"
    break;

  case 27: /* type_def: "typedef" flag type_decl_array "<identifier>" decl_template ";"  */
#line 215 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2230 "src/parser.c"
    break;

  case 28: /* type_decl_array: type_decl array  */
#line 222 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2236 "src/parser.c"
    break;

  case 30: /* type_decl_exp: type_decl_array  */
#line 224 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2244 "src/parser.c"
    break;

  case 31: /* type_decl_empty: type_decl_array  */
#line 228 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2252 "src/parser.c"
    break;

  case 32: /* arg: type_decl arg_decl ":" binary_exp  */
#line 233 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2258 "src/parser.c"
    break;

  case 33: /* arg: type_decl arg_decl  */
#line 234 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2264 "src/parser.c"
    break;

  case 34: /* arg_list: arg  */
#line 236 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2270 "src/parser.c"
    break;

  case 35: /* arg_list: arg_list "," arg  */
#line 237 "src/gwion.y"
                        {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
   }
#line 2280 "src/parser.c"
    break;

  case 36: /* fptr_arg: type_decl fptr_arg_decl  */
#line 243 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2286 "src/parser.c"
    break;

  case 37: /* fptr_list: fptr_arg  */
#line 244 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2292 "src/parser.c"
    break;

  case 38: /* fptr_list: fptr_list "," fptr_arg  */
#line 244 "src/gwion.y"
                                                                           { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2298 "src/parser.c"
    break;

  case 39: /* code_stmt: "{" "}"  */
#line 247 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2304 "src/parser.c"
    break;

  case 40: /* code_stmt: "{" stmt_list "}"  */
#line 248 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2310 "src/parser.c"
    break;

  case 41: /* stmt_pp: "<comment>"  */
#line 252 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2316 "src/parser.c"
    break;

  case 42: /* stmt_pp: "#include"  */
#line 253 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2322 "src/parser.c"
    break;

  case 43: /* stmt_pp: "#define"  */
#line 254 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2328 "src/parser.c"
    break;

  case 44: /* stmt_pp: "#pragma"  */
#line 255 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2334 "src/parser.c"
    break;

  case 45: /* stmt_pp: "#undef"  */
#line 256 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2340 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#ifdef"  */
#line 257 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2346 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#ifndef"  */
#line 258 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2352 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#else"  */
#line 259 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2358 "src/parser.c"
    break;

  case 49: /* stmt_pp: "#if"  */
#line 260 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2364 "src/parser.c"
    break;

  case 50: /* stmt_pp: "\n"  */
#line 261 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2370 "src/parser.c"
    break;

  case 51: /* stmt_pp: "require"  */
#line 262 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), (yyloc)); }
#line 2376 "src/parser.c"
    break;

  case 61: /* opt_id: %empty  */
#line 276 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2382 "src/parser.c"
    break;

  case 62: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 279 "src/gwion.y"
                                           {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2392 "src/parser.c"
    break;

  case 63: /* when_exp: "when" exp  */
#line 285 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2398 "src/parser.c"
    break;

  case 64: /* when_exp: %empty  */
#line 285 "src/gwion.y"
                                               { (yyval.exp) = NULL; }
#line 2404 "src/parser.c"
    break;

  case 65: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 288 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 2417 "src/parser.c"
    break;

  case 66: /* match_list: match_case_stmt  */
#line 298 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2423 "src/parser.c"
    break;

  case 67: /* match_list: match_list match_case_stmt  */
#line 299 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2429 "src/parser.c"
    break;

  case 68: /* where_stmt: "where" stmt  */
#line 301 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2435 "src/parser.c"
    break;

  case 69: /* where_stmt: %empty  */
#line 301 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2441 "src/parser.c"
    break;

  case 70: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 303 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 2454 "src/parser.c"
    break;

  case 71: /* flow: "while"  */
#line 313 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2460 "src/parser.c"
    break;

  case 72: /* flow: "until"  */
#line 314 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2466 "src/parser.c"
    break;

  case 73: /* loop_stmt: flow "(" exp ")" stmt  */
#line 318 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2472 "src/parser.c"
    break;

  case 74: /* loop_stmt: "do" stmt flow exp ";"  */
#line 320 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1, (yyloc)); LIST_REM((yyvsp[-2].ival)) }
#line 2478 "src/parser.c"
    break;

  case 75: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 322 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 2484 "src/parser.c"
    break;

  case 76: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 324 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2490 "src/parser.c"
    break;

  case 77: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 326 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2496 "src/parser.c"
    break;

  case 78: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 328 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2502 "src/parser.c"
    break;

  case 79: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 331 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2508 "src/parser.c"
    break;

  case 80: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 335 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2514 "src/parser.c"
    break;

  case 81: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 337 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 2520 "src/parser.c"
    break;

  case 82: /* breaks: "break"  */
#line 340 "src/gwion.y"
                  { (yyval.ival) = ae_stmt_break; }
#line 2526 "src/parser.c"
    break;

  case 83: /* breaks: "continue"  */
#line 340 "src/gwion.y"
                                                      { (yyval.ival) = ae_stmt_continue; }
#line 2532 "src/parser.c"
    break;

  case 84: /* jump_stmt: "return" exp ";"  */
#line 342 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2538 "src/parser.c"
    break;

  case 85: /* jump_stmt: "return" ";"  */
#line 343 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 2544 "src/parser.c"
    break;

  case 86: /* jump_stmt: breaks "<integer>" ";"  */
#line 344 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 2550 "src/parser.c"
    break;

  case 87: /* jump_stmt: breaks ";"  */
#line 345 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 2556 "src/parser.c"
    break;

  case 88: /* exp_stmt: exp ";"  */
#line 349 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2562 "src/parser.c"
    break;

  case 89: /* exp_stmt: ";"  */
#line 350 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 2568 "src/parser.c"
    break;

  case 90: /* exp: binary_exp  */
#line 354 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 2574 "src/parser.c"
    break;

  case 91: /* exp: exp "," binary_exp  */
#line 355 "src/gwion.y"
                         { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 2580 "src/parser.c"
    break;

  case 93: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 359 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2586 "src/parser.c"
    break;

  case 94: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 360 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2592 "src/parser.c"
    break;

  case 95: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 361 "src/gwion.y"
                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2598 "src/parser.c"
    break;

  case 96: /* call_template: ":[" type_list "]"  */
#line 364 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2604 "src/parser.c"
    break;

  case 97: /* call_template: %empty  */
#line 364 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2610 "src/parser.c"
    break;

  case 102: /* array_exp: "[" exp "]"  */
#line 369 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 2616 "src/parser.c"
    break;

  case 103: /* array_exp: "[" exp "]" array_exp  */
#line 370 "src/gwion.y"
                                {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 2625 "src/parser.c"
    break;

  case 104: /* array_exp: "[" exp "]" "[" "]"  */
#line 374 "src/gwion.y"
                                     { LIST_REM(2) gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2631 "src/parser.c"
    break;

  case 105: /* array_empty: "[" "]"  */
#line 378 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2637 "src/parser.c"
    break;

  case 106: /* array_empty: array_empty "[" "]"  */
#line 379 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2643 "src/parser.c"
    break;

  case 107: /* array_empty: array_empty array_exp  */
#line 380 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2649 "src/parser.c"
    break;

  case 108: /* range: "[" exp ":" exp "]"  */
#line 384 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM(2) LIST_REM((yyvsp[-1].exp)) }
#line 2655 "src/parser.c"
    break;

  case 109: /* range: "[" exp ":" "]"  */
#line 385 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 2661 "src/parser.c"
    break;

  case 110: /* range: "[" ":" exp "]"  */
#line 386 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 2667 "src/parser.c"
    break;

  case 114: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 392 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2673 "src/parser.c"
    break;

  case 115: /* func_args: "(" arg_list  */
#line 394 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 2679 "src/parser.c"
    break;

  case 116: /* func_args: "("  */
#line 394 "src/gwion.y"
                                                                { (yyval.arg_list) = NULL; }
#line 2685 "src/parser.c"
    break;

  case 117: /* fptr_args: "(" fptr_list  */
#line 395 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 2691 "src/parser.c"
    break;

  case 118: /* fptr_args: "("  */
#line 395 "src/gwion.y"
                                                               { (yyval.arg_list) = NULL; }
#line 2697 "src/parser.c"
    break;

  case 119: /* arg_type: "..." ")"  */
#line 396 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 2703 "src/parser.c"
    break;

  case 120: /* arg_type: ")"  */
#line 396 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 2709 "src/parser.c"
    break;

  case 121: /* decl_template: ":[" id_list "]"  */
#line 398 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); LIST_REM(2) }
#line 2715 "src/parser.c"
    break;

  case 122: /* decl_template: %empty  */
#line 398 "src/gwion.y"
                                                              { (yyval.id_list) = NULL; }
#line 2721 "src/parser.c"
    break;

  case 123: /* global: "global"  */
#line 400 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = 1; }
#line 2727 "src/parser.c"
    break;

  case 124: /* storage_flag: "static"  */
#line 402 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2733 "src/parser.c"
    break;

  case 126: /* access_flag: "private"  */
#line 404 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2739 "src/parser.c"
    break;

  case 127: /* access_flag: "protect"  */
#line 405 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2745 "src/parser.c"
    break;

  case 128: /* flag: access_flag  */
#line 408 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2751 "src/parser.c"
    break;

  case 129: /* flag: storage_flag  */
#line 409 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2757 "src/parser.c"
    break;

  case 130: /* flag: access_flag storage_flag  */
#line 410 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2763 "src/parser.c"
    break;

  case 131: /* flag: %empty  */
#line 411 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 2769 "src/parser.c"
    break;

  case 132: /* final: "final"  */
#line 414 "src/gwion.y"
             { (yyval.flag) = ae_flag_final; }
#line 2775 "src/parser.c"
    break;

  case 133: /* final: %empty  */
#line 414 "src/gwion.y"
                                       { (yyval.flag) = ae_flag_none; }
#line 2781 "src/parser.c"
    break;

  case 134: /* modifier: "abstract"  */
#line 416 "src/gwion.y"
                   { (yyval.flag) = ae_flag_abstract; }
#line 2787 "src/parser.c"
    break;

  case 136: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 419 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), (yyloc));
  }
#line 2797 "src/parser.c"
    break;

  case 137: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 427 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract);
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL, (yyloc));
    }
#line 2809 "src/parser.c"
    break;

  case 143: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 438 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 2815 "src/parser.c"
    break;

  case 144: /* op_base: type_decl_empty post_op "(" arg ")"  */
#line 440 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-1].arg_list), ae_flag_none); }
#line 2821 "src/parser.c"
    break;

  case 145: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 442 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 2830 "src/parser.c"
    break;

  case 146: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 447 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 2839 "src/parser.c"
    break;

  case 147: /* operator: "operator"  */
#line 452 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 2845 "src/parser.c"
    break;

  case 148: /* operator: "operator" global  */
#line 452 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 2851 "src/parser.c"
    break;

  case 149: /* op_def: operator op_base code_stmt  */
#line 454 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt), (yyloc)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 2857 "src/parser.c"
    break;

  case 152: /* func_def: op_def  */
#line 456 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 2863 "src/parser.c"
    break;

  case 153: /* type_decl_tmpl: "<identifier>" call_template  */
#line 459 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 2869 "src/parser.c"
    break;

  case 155: /* type_decl_next: type_decl_tmpl "." type_decl_next  */
#line 464 "src/gwion.y"
                                      { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 2875 "src/parser.c"
    break;

  case 156: /* type_decl_noflag: type_decl_next  */
#line 468 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2881 "src/parser.c"
    break;

  case 157: /* type_decl_noflag: typeof_exp  */
#line 469 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 2887 "src/parser.c"
    break;

  case 158: /* option: "?"  */
#line 472 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 2893 "src/parser.c"
    break;

  case 159: /* option: OPTIONS  */
#line 472 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 2899 "src/parser.c"
    break;

  case 160: /* option: %empty  */
#line 472 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 2905 "src/parser.c"
    break;

  case 161: /* type_decl_opt: type_decl_noflag option  */
#line 473 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option |= (yyvsp[0].uval); }
#line 2911 "src/parser.c"
    break;

  case 163: /* type_decl: type_decl_flag type_decl_opt  */
#line 474 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 2917 "src/parser.c"
    break;

  case 164: /* type_decl_flag: "LATE"  */
#line 477 "src/gwion.y"
         { (yyval.flag) = ae_flag_late; }
#line 2923 "src/parser.c"
    break;

  case 165: /* type_decl_flag: "const"  */
#line 478 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 2929 "src/parser.c"
    break;

  case 166: /* type_decl_flag2: "var"  */
#line 480 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 2935 "src/parser.c"
    break;

  case 168: /* union_decl: "<identifier>" ";"  */
#line 483 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yyloc));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yyloc));
}
#line 2944 "src/parser.c"
    break;

  case 169: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 487 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 2950 "src/parser.c"
    break;

  case 171: /* union_list: union_decl union_list  */
#line 490 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 2956 "src/parser.c"
    break;

  case 172: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 493 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yyloc));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 2968 "src/parser.c"
    break;

  case 173: /* var_decl_list: var_decl "," var_decl_list  */
#line 503 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2974 "src/parser.c"
    break;

  case 174: /* var_decl_list: var_decl  */
#line 504 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2980 "src/parser.c"
    break;

  case 175: /* var_decl: "<identifier>"  */
#line 507 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 2986 "src/parser.c"
    break;

  case 176: /* var_decl: "<identifier>" array  */
#line 508 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 2992 "src/parser.c"
    break;

  case 177: /* arg_decl: "<identifier>"  */
#line 510 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 2998 "src/parser.c"
    break;

  case 178: /* arg_decl: "<identifier>" array_empty  */
#line 511 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3004 "src/parser.c"
    break;

  case 179: /* arg_decl: "<identifier>" array_exp  */
#line 512 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3010 "src/parser.c"
    break;

  case 181: /* fptr_arg_decl: %empty  */
#line 513 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3016 "src/parser.c"
    break;

  case 195: /* opt_exp: exp  */
#line 521 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3022 "src/parser.c"
    break;

  case 196: /* opt_exp: %empty  */
#line 521 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3028 "src/parser.c"
    break;

  case 198: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 524 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3034 "src/parser.c"
    break;

  case 199: /* con_exp: log_or_exp "?:" con_exp  */
#line 526 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3040 "src/parser.c"
    break;

  case 201: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 528 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3046 "src/parser.c"
    break;

  case 203: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 529 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3052 "src/parser.c"
    break;

  case 205: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 530 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3058 "src/parser.c"
    break;

  case 207: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 531 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3064 "src/parser.c"
    break;

  case 209: /* and_exp: and_exp "&" eq_exp  */
#line 532 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3070 "src/parser.c"
    break;

  case 211: /* eq_exp: eq_exp eq_op rel_exp  */
#line 533 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3076 "src/parser.c"
    break;

  case 213: /* rel_exp: rel_exp rel_op shift_exp  */
#line 534 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3082 "src/parser.c"
    break;

  case 215: /* shift_exp: shift_exp shift_op add_exp  */
#line 535 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3088 "src/parser.c"
    break;

  case 217: /* add_exp: add_exp add_op mul_exp  */
#line 536 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3094 "src/parser.c"
    break;

  case 219: /* mul_exp: mul_exp mul_op dur_exp  */
#line 537 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3100 "src/parser.c"
    break;

  case 221: /* dur_exp: dur_exp "::" cast_exp  */
#line 538 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3106 "src/parser.c"
    break;

  case 223: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 541 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3112 "src/parser.c"
    break;

  case 232: /* unary_exp: unary_op unary_exp  */
#line 548 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3118 "src/parser.c"
    break;

  case 233: /* unary_exp: OPID_E unary_exp  */
#line 549 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3124 "src/parser.c"
    break;

  case 234: /* unary_exp: "new" type_decl_exp  */
#line 550 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), (yyloc)); }
#line 3130 "src/parser.c"
    break;

  case 235: /* unary_exp: "spork" code_stmt  */
#line 551 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3136 "src/parser.c"
    break;

  case 236: /* unary_exp: "fork" code_stmt  */
#line 552 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3142 "src/parser.c"
    break;

  case 237: /* unary_exp: "$" type_decl_empty  */
#line 553 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yyloc)); }
#line 3148 "src/parser.c"
    break;

  case 238: /* lambda_list: "<identifier>"  */
#line 556 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)), NULL); }
#line 3154 "src/parser.c"
    break;

  case 239: /* lambda_list: "<identifier>" lambda_list  */
#line 557 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yyloc)), (yyvsp[0].arg_list)); }
#line 3160 "src/parser.c"
    break;

  case 240: /* lambda_arg: "\\" lambda_list  */
#line 558 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3166 "src/parser.c"
    break;

  case 241: /* lambda_arg: "\\"  */
#line 558 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3172 "src/parser.c"
    break;

  case 242: /* type_list: type_decl_empty  */
#line 561 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3178 "src/parser.c"
    break;

  case 243: /* type_list: type_decl_empty "," type_list  */
#line 562 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3184 "src/parser.c"
    break;

  case 244: /* call_paren: "(" exp ")"  */
#line 566 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3190 "src/parser.c"
    break;

  case 245: /* call_paren: "(" ")"  */
#line 566 "src/gwion.y"
                                                                         { (yyval.exp) = NULL; }
#line 3196 "src/parser.c"
    break;

  case 248: /* dot_exp: post_exp "." "<identifier>"  */
#line 570 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    gwion_error(&(yyloc), arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3209 "src/parser.c"
    break;

  case 250: /* post_exp: post_exp array_exp  */
#line 581 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3215 "src/parser.c"
    break;

  case 251: /* post_exp: post_exp range  */
#line 583 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3221 "src/parser.c"
    break;

  case 252: /* post_exp: post_exp call_template call_paren  */
#line 585 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3228 "src/parser.c"
    break;

  case 253: /* post_exp: post_exp post_op  */
#line 588 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3234 "src/parser.c"
    break;

  case 254: /* post_exp: post_exp OPID_E  */
#line 590 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3240 "src/parser.c"
    break;

  case 255: /* post_exp: dot_exp  */
#line 591 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3246 "src/parser.c"
    break;

  case 256: /* interp_exp: "<interp string>`"  */
#line 595 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3252 "src/parser.c"
    break;

  case 257: /* interp_exp: "<interp string>" interp_exp  */
#line 596 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3258 "src/parser.c"
    break;

  case 258: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 597 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3264 "src/parser.c"
    break;

  case 259: /* interp: "`" interp_exp  */
#line 599 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3270 "src/parser.c"
    break;

  case 260: /* interp: interp "`" interp_exp  */
#line 600 "src/gwion.y"
                                 {
  if(!(yyvsp[0].exp)->next) {
    char c[strlen((yyvsp[-2].exp)->d.prim.d.str) + strlen((yyvsp[0].exp)->d.prim.d.str) + 1];
    sprintf(c, "%s%s\n", (yyvsp[-2].exp)->d.prim.d.str, (yyvsp[0].exp)->d.prim.d.str);
    (yyvsp[-2].exp)->d.prim.d.str = s_name(insert_symbol(c));
    (yyvsp[-2].exp)->pos.last = (yyvsp[0].exp)->pos.last;
    free_exp(mpool(arg), (yyvsp[0].exp));
  } else
  (yyvsp[-2].exp)->next = (yyvsp[0].exp);
}
#line 3285 "src/parser.c"
    break;

  case 261: /* typeof_exp: "typeof" "(" exp ")"  */
#line 611 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 3291 "src/parser.c"
    break;

  case 262: /* prim_exp: "<identifier>"  */
#line 614 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3297 "src/parser.c"
    break;

  case 263: /* prim_exp: "<integer>"  */
#line 615 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 3303 "src/parser.c"
    break;

  case 264: /* prim_exp: FLOATT  */
#line 616 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 3309 "src/parser.c"
    break;

  case 265: /* prim_exp: interp  */
#line 617 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 3315 "src/parser.c"
    break;

  case 266: /* prim_exp: "<litteral string>"  */
#line 618 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3321 "src/parser.c"
    break;

  case 267: /* prim_exp: "<litteral char>"  */
#line 619 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3327 "src/parser.c"
    break;

  case 268: /* prim_exp: array  */
#line 620 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 3333 "src/parser.c"
    break;

  case 269: /* prim_exp: range  */
#line 621 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 3339 "src/parser.c"
    break;

  case 270: /* prim_exp: "<<<" exp ">>>"  */
#line 622 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 3345 "src/parser.c"
    break;

  case 271: /* prim_exp: "(" exp ")"  */
#line 623 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3351 "src/parser.c"
    break;

  case 272: /* prim_exp: lambda_arg code_stmt  */
#line 624 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yyloc)); }
#line 3357 "src/parser.c"
    break;

  case 273: /* prim_exp: "(" ")"  */
#line 625 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 3363 "src/parser.c"
    break;

  case 274: /* prim_exp: typeof_exp  */
#line 626 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3369 "src/parser.c"
    break;


#line 3373 "src/parser.c"

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

#line 628 "src/gwion.y"

