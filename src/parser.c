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
#line 8 "src/gwion.y"

#include <math.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "bison_compat.h"
#include "parser.h"
#include "lexer.h"

#define YYERROR_VERBOSE
#define YYMALLOC xmalloc
#define gwion_error(a,b,c) parser_error(a,b,c, 0200)
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

ANN static int parser_error(loc_t*, Scanner*const, const char *, const uint);
ANN Symbol lambda_name(const Scanner*);

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
  YYSYMBOL_TRAIT = 31,                     /* "trait"  */
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
  YYSYMBOL_DISTINCT = 42,                  /* "distinct"  */
  YYSYMBOL_FUNCDEF = 43,                   /* "funcdef"  */
  YYSYMBOL_NOELSE = 44,                    /* NOELSE  */
  YYSYMBOL_UNION = 45,                     /* "union"  */
  YYSYMBOL_CONSTT = 46,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 47,                   /* "..."  */
  YYSYMBOL_VARLOOP = 48,                   /* "varloop"  */
  YYSYMBOL_DEFER = 49,                     /* "defer"  */
  YYSYMBOL_BACKSLASH = 50,                 /* "\\"  */
  YYSYMBOL_OPID_A = 51,                    /* OPID_A  */
  YYSYMBOL_OPID_E = 52,                    /* OPID_E  */
  YYSYMBOL_LATE = 53,                      /* "LATE"  */
  YYSYMBOL_NUM = 54,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 55,                    /* FLOATT  */
  YYSYMBOL_STRING_LIT = 56,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 57,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 58,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 59,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 60,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 61,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 62,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 63,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 64,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 65,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 66,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 67,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 68,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 69,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 70,                  /* "#if"  */
  YYSYMBOL_PP_NL = 71,                     /* "\n"  */
  YYSYMBOL_PP_REQUIRE = 72,                /* "require"  */
  YYSYMBOL_73_operator_id_ = 73,           /* "@<operator id>"  */
  YYSYMBOL_74_operator_id_ = 74,           /* "&<operator id>"  */
  YYSYMBOL_ID = 75,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 76,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 77,                  /* "++"  */
  YYSYMBOL_MINUS = 78,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 79,                /* "--"  */
  YYSYMBOL_TIMES = 80,                     /* "*"  */
  YYSYMBOL_DIVIDE = 81,                    /* "/"  */
  YYSYMBOL_PERCENT = 82,                   /* "%"  */
  YYSYMBOL_DOLLAR = 83,                    /* "$"  */
  YYSYMBOL_QUESTION = 84,                  /* "?"  */
  YYSYMBOL_OPTIONS = 85,                   /* OPTIONS  */
  YYSYMBOL_COLON = 86,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 87,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 88,             /* "?:"  */
  YYSYMBOL_NEW = 89,                       /* "new"  */
  YYSYMBOL_SPORK = 90,                     /* "spork"  */
  YYSYMBOL_FORK = 91,                      /* "fork"  */
  YYSYMBOL_L_HACK = 92,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 93,                    /* ">>>"  */
  YYSYMBOL_AND = 94,                       /* "&&"  */
  YYSYMBOL_EQ = 95,                        /* "=="  */
  YYSYMBOL_GE = 96,                        /* ">="  */
  YYSYMBOL_GT = 97,                        /* ">"  */
  YYSYMBOL_LE = 98,                        /* "<="  */
  YYSYMBOL_LT = 99,                        /* "<"  */
  YYSYMBOL_NEQ = 100,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 101,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 102,              /* ">>"  */
  YYSYMBOL_S_AND = 103,                    /* "&"  */
  YYSYMBOL_S_OR = 104,                     /* "|"  */
  YYSYMBOL_S_XOR = 105,                    /* "^"  */
  YYSYMBOL_OR = 106,                       /* "||"  */
  YYSYMBOL_TMPL = 107,                     /* ":["  */
  YYSYMBOL_TILDA = 108,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 109,              /* "!"  */
  YYSYMBOL_DYNOP = 110,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 111,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 112,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 113,                   /* UTIMES  */
  YYSYMBOL_114_ = 114,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 115,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 116,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 117,                 /* $accept  */
  YYSYMBOL_prg = 118,                      /* prg  */
  YYSYMBOL_ast = 119,                      /* ast  */
  YYSYMBOL_section = 120,                  /* section  */
  YYSYMBOL_class_flag = 121,               /* class_flag  */
  YYSYMBOL_class_def = 122,                /* class_def  */
  YYSYMBOL_class_ext = 123,                /* class_ext  */
  YYSYMBOL_traits = 124,                   /* traits  */
  YYSYMBOL_extend_body = 125,              /* extend_body  */
  YYSYMBOL_extend_def = 126,               /* extend_def  */
  YYSYMBOL_class_body = 127,               /* class_body  */
  YYSYMBOL_id_list = 128,                  /* id_list  */
  YYSYMBOL_stmt_list = 129,                /* stmt_list  */
  YYSYMBOL_fptr_base = 130,                /* fptr_base  */
  YYSYMBOL_func_base = 131,                /* func_base  */
  YYSYMBOL_fptr_def = 132,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 133,             /* typedef_when  */
  YYSYMBOL_type_def_type = 134,            /* type_def_type  */
  YYSYMBOL_type_def = 135,                 /* type_def  */
  YYSYMBOL_type_decl_array = 136,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 137,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 138,          /* type_decl_empty  */
  YYSYMBOL_arg = 139,                      /* arg  */
  YYSYMBOL_arg_list = 140,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 141,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 142,                /* fptr_list  */
  YYSYMBOL_code_stmt = 143,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 144,                  /* stmt_pp  */
  YYSYMBOL_stmt = 145,                     /* stmt  */
  YYSYMBOL_opt_id = 146,                   /* opt_id  */
  YYSYMBOL_enum_def = 147,                 /* enum_def  */
  YYSYMBOL_when_exp = 148,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 149,          /* match_case_stmt  */
  YYSYMBOL_match_list = 150,               /* match_list  */
  YYSYMBOL_where_stmt = 151,               /* where_stmt  */
  YYSYMBOL_match_stmt = 152,               /* match_stmt  */
  YYSYMBOL_flow = 153,                     /* flow  */
  YYSYMBOL_loop_stmt = 154,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 155,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 156,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 157,           /* selection_stmt  */
  YYSYMBOL_breaks = 158,                   /* breaks  */
  YYSYMBOL_jump_stmt = 159,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 160,                 /* exp_stmt  */
  YYSYMBOL_exp = 161,                      /* exp  */
  YYSYMBOL_binary_exp = 162,               /* binary_exp  */
  YYSYMBOL_call_template = 163,            /* call_template  */
  YYSYMBOL_op = 164,                       /* op  */
  YYSYMBOL_array_exp = 165,                /* array_exp  */
  YYSYMBOL_array_empty = 166,              /* array_empty  */
  YYSYMBOL_range = 167,                    /* range  */
  YYSYMBOL_array = 168,                    /* array  */
  YYSYMBOL_decl_exp = 169,                 /* decl_exp  */
  YYSYMBOL_func_args = 170,                /* func_args  */
  YYSYMBOL_fptr_args = 171,                /* fptr_args  */
  YYSYMBOL_arg_type = 172,                 /* arg_type  */
  YYSYMBOL_decl_template = 173,            /* decl_template  */
  YYSYMBOL_global = 174,                   /* global  */
  YYSYMBOL_storage_flag = 175,             /* storage_flag  */
  YYSYMBOL_access_flag = 176,              /* access_flag  */
  YYSYMBOL_flag = 177,                     /* flag  */
  YYSYMBOL_final = 178,                    /* final  */
  YYSYMBOL_modifier = 179,                 /* modifier  */
  YYSYMBOL_func_trait = 180,               /* func_trait  */
  YYSYMBOL_func_code = 181,                /* func_code  */
  YYSYMBOL_func_def_base = 182,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 183,            /* abstract_fdef  */
  YYSYMBOL_op_op = 184,                    /* op_op  */
  YYSYMBOL_op_base = 185,                  /* op_base  */
  YYSYMBOL_operator = 186,                 /* operator  */
  YYSYMBOL_op_def = 187,                   /* op_def  */
  YYSYMBOL_func_def = 188,                 /* func_def  */
  YYSYMBOL_ref = 189,                      /* ref  */
  YYSYMBOL_type_decl_tmpl = 190,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 191,         /* type_decl_noflag  */
  YYSYMBOL_option = 192,                   /* option  */
  YYSYMBOL_type_decl_opt = 193,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 194,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 195,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 196,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 197,               /* union_decl  */
  YYSYMBOL_union_list = 198,               /* union_list  */
  YYSYMBOL_union_def = 199,                /* union_def  */
  YYSYMBOL_var_decl_list = 200,            /* var_decl_list  */
  YYSYMBOL_var_decl = 201,                 /* var_decl  */
  YYSYMBOL_arg_decl = 202,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 203,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 204,                    /* eq_op  */
  YYSYMBOL_rel_op = 205,                   /* rel_op  */
  YYSYMBOL_shift_op = 206,                 /* shift_op  */
  YYSYMBOL_add_op = 207,                   /* add_op  */
  YYSYMBOL_mul_op = 208,                   /* mul_op  */
  YYSYMBOL_opt_exp = 209,                  /* opt_exp  */
  YYSYMBOL_con_exp = 210,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 211,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 212,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 213,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 214,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 215,                  /* and_exp  */
  YYSYMBOL_eq_exp = 216,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 217,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 218,                /* shift_exp  */
  YYSYMBOL_add_exp = 219,                  /* add_exp  */
  YYSYMBOL_mul_exp = 220,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 221,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 222,                 /* cast_exp  */
  YYSYMBOL_unary_op = 223,                 /* unary_op  */
  YYSYMBOL_unary_exp = 224,                /* unary_exp  */
  YYSYMBOL_lambda_list = 225,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 226,               /* lambda_arg  */
  YYSYMBOL_type_list = 227,                /* type_list  */
  YYSYMBOL_call_paren = 228,               /* call_paren  */
  YYSYMBOL_post_op = 229,                  /* post_op  */
  YYSYMBOL_dot_exp = 230,                  /* dot_exp  */
  YYSYMBOL_post_exp = 231,                 /* post_exp  */
  YYSYMBOL_interp_exp = 232,               /* interp_exp  */
  YYSYMBOL_interp = 233,                   /* interp  */
  YYSYMBOL_prim_exp = 234                  /* prim_exp  */
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
#define YYFINAL  177
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1667

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  118
/* YYNRULES -- Number of rules.  */
#define YYNRULES  291
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  496

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   371


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
     115,   116
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   163,   163,   164,   167,   168,   172,   173,   174,   175,
     176,   177,   178,   179,   182,   184,   191,   199,   212,   212,
     213,   213,   215,   219,   225,   233,   233,   235,   236,   238,
     239,   241,   244,   247,   253,   253,   254,   254,   255,   264,
     264,   266,   270,   275,   276,   278,   279,   285,   286,   286,
     289,   290,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   319,   319,   322,   328,   328,   331,   341,   342,
     344,   344,   346,   356,   357,   360,   362,   364,   366,   368,
     370,   376,   380,   382,   385,   387,   391,   391,   393,   394,
     395,   396,   400,   401,   405,   406,   409,   410,   411,   412,
     415,   415,   417,   417,   417,   417,   420,   421,   425,   429,
     430,   431,   435,   436,   437,   440,   440,   442,   443,   445,
     445,   446,   446,   447,   447,   449,   449,   451,   453,   453,
     455,   456,   459,   460,   461,   462,   465,   465,   467,   467,
     469,   469,   470,   470,   472,   483,   492,   492,   492,   492,
     492,   494,   496,   498,   503,   509,   509,   510,   513,   513,
     513,   515,   515,   517,   518,   522,   523,   526,   526,   526,
     527,   528,   528,   531,   532,   534,   534,   537,   541,   543,
     544,   547,   557,   558,   561,   562,   564,   565,   566,   567,
     567,   569,   569,   570,   570,   570,   570,   571,   571,   572,
     572,   573,   573,   573,   575,   575,   576,   577,   579,   582,
     582,   583,   583,   584,   584,   585,   585,   586,   586,   587,
     587,   588,   588,   589,   589,   590,   590,   591,   591,   592,
     592,   594,   594,   597,   597,   597,   598,   598,   598,   598,
     601,   602,   603,   604,   605,   606,   607,   610,   611,   612,
     612,   615,   616,   620,   620,   622,   622,   624,   633,   634,
     636,   638,   641,   643,   645,   649,   650,   651,   653,   654,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677
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
  "{", "}", "fun", "var", "if", "else", "while", "do", "until", "repeat",
  "for", "foreach", "match", "case", "when", "where", "enum", "return",
  "break", "continue", "class", "struct", "trait", "static", "global",
  "private", "protect", "abstract", "final", "extends", ".", "operator",
  "typedef", "distinct", "funcdef", "NOELSE", "union", "const", "...",
  "varloop", "defer", "\\", "OPID_A", "OPID_E", "LATE", "<integer>",
  "FLOATT", "<litteral string>", "<litteral char>", "`", "<interp string>",
  "INTERP_EXP", "<interp string>`", "<comment>", "#include", "#define",
  "#pragma", "#undef", "#ifdef", "#ifndef", "#else", "#if", "\n",
  "require", "@<operator id>", "&<operator id>", "<identifier>", "+", "++",
  "-", "--", "*", "/", "%", "$", "?", "OPTIONS", ":", "::", "?:", "new",
  "spork", "fork", "<<<", ">>>", "&&", "==", ">=", ">", "<=", "<", "!=",
  "<<", ">>", "&", "|", "^", "||", ":[", "~", "!", "<dynamic_operator>",
  "RANGE_EMPTY", "UMINUS", "UTIMES", "=", "STMT_ASSOC", "STMT_NOASSOC",
  "$accept", "prg", "ast", "section", "class_flag", "class_def",
  "class_ext", "traits", "extend_body", "extend_def", "class_body",
  "id_list", "stmt_list", "fptr_base", "func_base", "fptr_def",
  "typedef_when", "type_def_type", "type_def", "type_decl_array",
  "type_decl_exp", "type_decl_empty", "arg", "arg_list", "fptr_arg",
  "fptr_list", "code_stmt", "stmt_pp", "stmt", "opt_id", "enum_def",
  "when_exp", "match_case_stmt", "match_list", "where_stmt", "match_stmt",
  "flow", "loop_stmt", "varloop_stmt", "defer_stmt", "selection_stmt",
  "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template",
  "op", "array_exp", "array_empty", "range", "array", "decl_exp",
  "func_args", "fptr_args", "arg_type", "decl_template", "global",
  "storage_flag", "access_flag", "flag", "final", "modifier", "func_trait",
  "func_code", "func_def_base", "abstract_fdef", "op_op", "op_base",
  "operator", "op_def", "func_def", "ref", "type_decl_tmpl",
  "type_decl_noflag", "option", "type_decl_opt", "type_decl",
  "type_decl_flag", "type_decl_flag2", "union_decl", "union_list",
  "union_def", "var_decl_list", "var_decl", "arg_decl", "fptr_arg_decl",
  "eq_op", "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp",
  "cast_exp", "unary_op", "unary_exp", "lambda_list", "lambda_arg",
  "type_list", "call_paren", "post_op", "dot_exp", "post_exp",
  "interp_exp", "interp", "prim_exp", YY_NULLPTR
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
     365,   366,   367,   368,   369,   370,   371
};
#endif

#define YYPACT_NINF (-380)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-112)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     445,  -380,  1018,   898,   552,   140,  -380,    23,  -380,   757,
    -380,    61,    64,    82,  1498,   140,   177,  -380,  -380,   140,
     140,    -4,    63,  -380,  -380,   140,   140,  -380,  1498,   757,
      65,  1558,  -380,  -380,  -380,  -380,  -380,   958,  -380,  -380,
    -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,  -380,    -4,    -4,   146,   146,  1498,  -380,
    -380,   196,   445,  -380,  -380,  -380,   757,  -380,   140,  -380,
    -380,  -380,  -380,  -380,  -380,   217,  -380,  -380,  -380,  -380,
      40,  -380,  -380,   202,     3,  -380,   195,  -380,  -380,  -380,
    -380,  -380,   197,  -380,  -380,  -380,   140,  -380,  -380,    58,
     150,   121,   165,   168,   -42,    89,   118,   103,    88,   166,
     190,  1558,  -380,   146,  -380,  -380,    26,   220,  -380,  -380,
     191,  -380,  1498,    33,  -380,   659,  -380,  -380,  -380,  -380,
     274,  -380,  -380,   205,   209,  1498,   186,  1498,   838,   223,
     162,   226,  -380,   238,   227,   222,   228,   175,   180,   232,
     245,   163,  -380,   203,    51,  -380,   292,    -4,   233,    53,
      25,  -380,    65,  -380,  -380,   958,  -380,    47,  -380,  -380,
    -380,   310,  -380,  -380,  -380,  -380,    18,  -380,  -380,  -380,
      -4,  1498,  -380,   315,  -380,  1498,  1498,  1498,  1498,  1078,
    -380,  -380,  -380,   214,   146,    -4,    -4,  1498,  1558,  1558,
    1558,  1558,  1558,  1558,  -380,  -380,  1558,  -380,  -380,  -380,
    -380,  1558,  -380,  -380,  1558,  -380,  -380,  1558,  -380,  -380,
    -380,  1558,  1558,    -4,  -380,  -380,  1138,   244,  -380,    -4,
     316,  -380,  -380,  -380,   958,  -380,   113,   313,  1198,  -380,
      -4,    46,  -380,    -4,  -380,    -4,   207,  1498,    13,   838,
      22,   300,  -380,   318,  -380,   218,  -380,  -380,  -380,   218,
    -380,  -380,   175,    51,  -380,  -380,  -380,   253,   320,  -380,
      -4,    46,   257,   218,   218,  -380,  -380,  -380,   958,  1258,
    -380,  -380,   259,   208,  -380,     3,  -380,  -380,  -380,  -380,
     135,   274,  -380,  -380,  -380,  -380,  -380,   330,  -380,  -380,
    -380,  -380,   331,  -380,   332,   267,   339,   260,  -380,   150,
     121,   165,   168,   -42,    89,   118,   103,    88,   166,   190,
    -380,  -380,   340,   346,  1318,  -380,  -380,  -380,  1378,  -380,
    -380,   148,   272,  -380,   351,  -380,   350,   273,   285,   286,
     757,   258,   757,  1438,   287,  1498,  1498,  -380,    69,   253,
     253,   325,   203,  -380,  -380,  -380,   360,    52,   272,  -380,
     362,   364,   218,   203,   359,  -380,   218,   757,   366,    -4,
      -4,    -4,   310,  -380,   369,  1558,    -4,  -380,  -380,   211,
    -380,  -380,   310,   284,    -4,  -380,   299,    71,   218,   218,
     361,  -380,  -380,   757,   212,   290,    17,    77,   353,  -380,
     137,   154,    -4,   203,   371,   303,    45,  -380,  -380,  -380,
      -4,  -380,  -380,   372,    31,   363,  -380,  -380,   378,   379,
     381,  -380,   267,  -380,  -380,  -380,  -380,   195,  1498,  -380,
    -380,  -380,  -380,  -380,   292,  -380,   757,  -380,   757,  1498,
     757,  1498,   302,   757,  -380,  -380,  -380,  -380,   380,   445,
    -380,  -380,  -380,  -380,   445,    24,   317,    31,   383,  1498,
     387,    -4,  -380,  -380,  -380,     3,    46,  -380,  -380,    19,
    -380,   339,   757,  -380,   445,   445,   384,   386,  -380,   394,
    -380,  -380,     3,  -380,   392,   396,   757,   757,   390,  -380,
    -380,  -380,  -380,  -380,  -380,  -380
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   103,     0,     0,     0,   145,   185,     0,    83,     0,
      84,     0,     0,     0,     0,   145,     0,    96,    97,   145,
     145,     0,   165,    36,    37,   145,   145,   184,     0,     0,
     260,     0,   183,   281,   282,   284,   285,     0,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,   280,
     265,   243,   266,   244,     0,     0,   247,   248,     0,   249,
     246,     0,     2,     4,     8,     9,     6,    12,   145,    13,
      66,    69,    29,    10,    67,     0,    64,    70,    71,    65,
       0,    68,    63,     0,   104,   125,   126,   287,   286,   106,
     168,   169,     0,   170,     7,   186,   145,    11,   127,   216,
     219,   221,   223,   225,   227,   229,   231,   233,   235,   237,
     239,     0,   241,     0,   245,   274,   250,   283,   268,   291,
       0,   119,     0,     0,    50,     0,   138,   137,   140,   141,
       0,   139,   143,   142,   147,     0,     0,     0,     0,     0,
       0,    73,    99,     0,     0,   147,     0,   111,   171,     0,
     175,   179,   181,    20,     0,   166,     0,     0,     0,     0,
       0,    93,   257,   259,   252,     0,   275,     0,   278,    42,
     256,    40,    41,   253,   254,   255,     0,     1,     5,    30,
       0,     0,   101,     0,   102,     0,     0,     0,     0,     0,
     121,   247,   248,     0,     0,     0,     0,   215,     0,     0,
       0,     0,     0,     0,   201,   202,     0,   206,   204,   205,
     203,     0,   207,   208,     0,   209,   210,     0,   211,   212,
     213,     0,     0,     0,   251,   290,     0,     0,   273,     0,
       0,   269,   270,   272,     0,   289,     0,   116,     0,    51,
     130,     0,   144,     0,   146,     0,     0,     0,     0,     0,
       0,     0,    72,     0,    98,   136,   148,   149,    14,   136,
     173,   172,   111,     0,   177,   178,   180,     0,     0,   182,
     132,     0,     0,   136,   136,    92,   258,   276,     0,     0,
      39,   288,     0,     0,   100,   105,   107,   109,   108,   120,
       0,     0,   115,   112,   113,   114,   156,     0,   158,   157,
     160,   159,     0,   167,     0,     0,   214,     0,   218,   220,
     222,   224,   226,   228,   230,   232,   234,   236,   238,   240,
     242,   267,   261,     0,     0,   271,   279,   124,     0,   117,
     123,     0,     0,    45,   129,   134,     0,   150,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
       0,    19,    20,   174,   176,    27,    21,     0,   200,    48,
     131,     0,   136,    20,     0,   277,   136,     0,     0,     0,
       0,     0,   194,   128,   193,     0,     0,   110,   264,     0,
     118,   122,   196,    44,     0,   133,     0,     0,   136,   136,
      94,    86,    91,     0,     0,     0,     0,    76,    81,    79,
       0,     0,     0,    20,     0,     0,     0,    22,   199,    47,
       0,    33,    31,     0,     0,    34,    85,   164,     0,     0,
       0,   195,     0,   217,   262,   263,   198,   197,     0,    46,
     151,   153,   152,   154,     0,    32,     0,    87,     0,     0,
       0,     0,     0,     0,    82,    74,   135,    18,     0,    26,
      28,    24,    23,    49,    26,   111,     0,   189,     0,     0,
       0,     0,   162,   163,   192,    43,     0,    95,    88,     0,
      89,    75,     0,    80,    26,    25,     0,     0,   187,     0,
     190,   191,    35,    38,     0,     0,     0,    77,     0,    17,
      16,   188,   161,   155,    90,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -380,  -380,   401,   -59,   131,  -380,  -380,  -302,  -380,  -380,
    -379,   -86,    -3,  -380,  -380,  -380,  -380,  -380,  -380,   -31,
       0,   -45,  -325,  -380,    -7,  -380,   -46,  -380,    -9,  -380,
    -380,  -380,    56,  -380,  -380,  -380,   269,  -380,  -380,  -380,
    -380,  -380,  -380,  -117,     2,   -22,  -102,  -380,   -78,    27,
     291,  -164,     6,   117,   -24,  -259,  -244,   389,   280,  -380,
      57,   281,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,  -309,   266,  -380,   155,  -380,   265,   399,   -19,  -380,
    -380,   -36,  -380,     1,  -380,    66,  -380,  -380,   229,   235,
     239,   240,  -380,  -185,  -380,   236,   225,   243,   224,   237,
     230,   234,   241,   242,   246,   219,   347,     9,   289,  -380,
      70,  -380,   -84,  -380,  -380,  -148,  -380,  -380
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    61,   475,    63,   144,    64,   403,   268,   406,    65,
     476,   356,    66,   156,   130,    67,   460,    68,    69,   169,
     173,   322,   333,   334,   359,   360,    70,    71,    72,   253,
      73,   442,   347,   348,   444,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   260,   296,    85,    86,
      87,    88,    89,   241,   271,   337,   351,   131,   132,   133,
     145,   257,   258,   387,   433,    90,    91,   297,   194,    92,
      93,    94,   149,   150,   151,   266,   152,   171,    95,    96,
     457,   458,    97,   373,   374,   383,   409,   206,   211,   214,
     217,   221,   307,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   163,   113,
     323,   325,   114,   115,   116,   168,   117,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     136,   125,   154,   178,   120,   123,   160,   280,   190,   170,
     174,   175,   361,   308,   230,   352,   140,   277,   143,   342,
     161,   249,   185,   440,   172,   486,   344,   478,   135,   363,
     364,  -111,   233,   226,     4,   154,   154,   185,   231,   167,
     164,   237,    27,   182,   418,   419,   420,   193,   407,    32,
     404,   185,   335,   204,   186,   451,     5,   179,   205,   429,
     176,   413,   134,     5,   186,   227,   137,   225,   186,   138,
     186,   147,   141,   154,   431,   477,   186,    27,   228,   398,
       4,   185,   157,   159,    32,    22,   326,   139,   187,   256,
     244,   346,    22,   336,   183,   488,   127,   452,   187,   148,
     441,   448,   187,    50,   187,    52,   455,   278,   345,   302,
     187,   281,   272,   188,   275,   248,   179,   185,   412,   238,
     224,   327,   415,   188,   236,   180,   147,   188,   274,   188,
     365,   229,   343,   229,   148,   188,   484,   246,   154,   185,
     162,   405,   197,   237,   434,   435,   198,   445,   303,   282,
     304,   146,   185,   196,   148,     4,   381,   158,   405,   329,
     353,   154,   446,   285,   199,   305,   185,   167,   218,   219,
     220,   251,   126,   127,   128,   129,   154,   154,   320,   215,
     142,   216,     2,   283,     3,   207,   208,   209,   210,     6,
     423,   290,   286,   287,   288,   185,   177,   235,   338,   306,
     339,     8,   189,    10,   154,   184,   185,   485,   421,   332,
     154,   185,   185,   340,   367,   185,   185,   425,   438,   212,
     213,   154,   181,    27,   154,   201,   154,    30,   123,    31,
      32,    33,    34,    35,    36,    37,   167,   126,   127,   358,
     331,   254,   185,    27,   200,   243,   244,   264,   265,   341,
      32,   154,    49,   222,    50,    51,    52,    53,   256,   244,
      54,   391,   185,   400,   401,   291,    55,    56,    57,    58,
     202,   203,   147,   223,    50,    51,    52,    53,   234,   240,
     167,   290,   229,   148,   263,    59,    60,   191,   192,   267,
     215,    50,   216,    52,   218,   219,   220,   270,   250,   292,
     148,   252,   255,   259,   426,    59,    60,   262,   273,   293,
     207,   208,   209,   210,   294,   212,   213,   279,   284,   321,
     328,   324,   346,   396,   295,   350,   379,   349,   355,   357,
     290,   390,   362,   392,   366,   369,   370,   371,   332,   332,
     332,   432,   372,   185,   376,   394,   375,   382,   397,   190,
     154,   154,   154,   332,   377,   384,   385,   154,   416,   386,
     388,   389,   395,   402,   405,   154,   410,   411,   414,   456,
     428,   172,   417,   422,   430,   436,   439,   443,   450,   358,
     449,   454,   461,   154,   437,   462,   459,   463,   472,   474,
     483,   154,   479,   481,   489,   154,   490,   491,   492,   493,
     495,    62,   447,   453,   399,   247,   465,   232,   368,   427,
     466,   155,   456,   242,   261,   245,   178,   469,   354,   269,
     153,   480,   298,   464,   408,   310,   312,   467,   299,   468,
     332,   470,   300,   301,   473,   309,   314,   482,   154,   195,
     313,   319,   154,   471,   311,   315,   424,     0,     1,     0,
       2,   276,     3,     0,     4,   316,     5,     6,     7,   317,
       8,     9,    10,    11,    12,    13,    14,   318,     0,   487,
      15,    16,    17,    18,    19,     0,    20,   494,   179,     0,
       0,     0,     0,    21,     0,    22,    23,    24,    25,     0,
      26,    27,     0,    28,    29,    30,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,     0,
      49,     0,    50,    51,    52,    53,     0,     0,    54,     0,
       0,     0,     0,     0,    55,    56,    57,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,     1,     0,     2,     0,     3,
       0,     4,   124,     0,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,    29,    30,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,     0,    49,     0,    50,
      51,    52,    53,     0,     0,    54,     0,     0,     0,     0,
       0,    55,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,     1,     0,     2,     0,     3,     0,     4,   239,
       0,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,    29,    30,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,     0,    49,     0,    50,    51,    52,    53,
       0,     0,    54,     0,     0,     0,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     4,    59,    60,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,    29,    30,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       0,     0,    49,     0,    50,    51,    52,    53,     0,     0,
      54,     1,     0,     2,     0,     3,    55,    56,    57,    58,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,     0,     0,    30,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     2,     0,     3,   121,     0,     0,     0,
       6,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    59,    60,    30,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       6,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,   122,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    59,    60,    30,     0,
      31,    32,    33,    34,    35,    36,    37,   165,     0,   166,
       0,     0,     0,     2,   119,     3,     0,     0,     0,     0,
       6,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    59,    60,    30,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     2,     0,     3,   289,     0,     0,     0,
       6,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    59,    60,    30,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       6,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    59,    60,    30,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     2,     0,     3,   330,     0,     0,     0,
       6,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,   122,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    59,    60,    30,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     2,     0,     3,   121,     0,     0,     0,
       6,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    59,    60,    30,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     2,   378,     3,     0,     0,     0,     0,
       6,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    59,    60,    30,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     2,     0,     3,   380,     0,     0,     0,
       6,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    59,    60,    30,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     2,   393,     3,     0,     0,     0,     0,
       6,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    59,    60,    30,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       6,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    59,    60,    30,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       0,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    30,     0,
      31,     0,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60
};

static const yytype_int16 yycheck[] =
{
       9,     4,    21,    62,     2,     3,    28,   171,    86,    54,
      56,    57,   271,   198,   116,   259,    14,   165,    16,     6,
      29,   138,     4,     6,    55,     6,     4,     3,     5,   273,
     274,     5,   116,     7,     9,    54,    55,     4,   116,    37,
      31,     8,    46,     3,   369,   370,   371,    92,   357,    53,
     352,     4,     6,    95,    51,    10,    11,    66,   100,   384,
      58,   363,     5,    11,    51,    39,     5,   113,    51,     5,
      51,    75,    15,    92,     3,   454,    51,    46,    52,    10,
       9,     4,    25,    26,    53,    40,   234,     5,    85,    36,
      37,    22,    40,    47,    54,   474,    33,   406,    85,   103,
      23,   403,    85,    77,    85,    79,    75,    60,    86,   193,
      85,    93,   157,   110,   160,   137,   125,     4,   362,    86,
     111,     8,   366,   110,   122,    68,    75,   110,    75,   110,
     278,   107,   249,   107,   103,   110,   461,   135,   157,     4,
      75,     4,    84,     8,   388,   389,    88,    10,   194,   180,
     195,    20,     4,    96,   103,     9,     8,    26,     4,   237,
     262,   180,     8,   185,   106,   196,     4,   165,    80,    81,
      82,     9,    32,    33,    34,    35,   195,   196,   223,    76,
       3,    78,     5,   181,     7,    96,    97,    98,    99,    12,
     375,   189,   186,   187,   188,     4,     0,     6,   243,   197,
     245,    15,     7,    17,   223,     3,     4,   466,   372,   240,
     229,     4,     4,     6,     6,     4,     4,     6,     6,   101,
     102,   240,     5,    46,   243,   104,   245,    50,   226,    52,
      53,    54,    55,    56,    57,    58,   234,    32,    33,   270,
     238,     3,     4,    46,    94,    36,    37,    84,    85,   247,
      53,   270,    75,    87,    77,    78,    79,    80,    36,    37,
      83,     3,     4,   349,   350,    51,    89,    90,    91,    92,
     105,   103,    75,    83,    77,    78,    79,    80,    58,     5,
     278,   279,   107,   103,    39,   108,   109,    90,    91,    86,
      76,    77,    78,    79,    80,    81,    82,     5,    75,    85,
     103,    75,    75,    75,   382,   108,   109,    75,    75,    95,
      96,    97,    98,    99,   100,   101,   102,     7,     3,    75,
       7,     5,    22,   345,   110,   107,   324,     9,    75,     9,
     328,   340,    75,   342,    75,     5,     5,     5,   369,   370,
     371,   387,    75,     4,     4,   343,    86,    75,   346,   427,
     369,   370,   371,   384,     8,     4,     6,   376,   367,    86,
      75,    75,    75,    38,     4,   384,     4,     3,     9,   414,
      86,   402,     6,     4,    75,    14,    86,    24,    75,   410,
       9,     9,     4,   402,   393,     6,    23,     6,    86,     9,
       3,   410,    75,    10,    10,   414,    10,     3,     6,     3,
      10,     0,   402,   410,   348,   136,   428,   116,   291,   382,
     434,    22,   457,   133,   148,   134,   475,   439,   263,   154,
      21,   457,   193,   422,   358,   200,   202,   436,   193,   438,
     461,   440,   193,   193,   443,   199,   206,   459,   457,    92,
     203,   222,   461,   441,   201,   211,   376,    -1,     3,    -1,
       5,   162,     7,    -1,     9,   214,    11,    12,    13,   217,
      15,    16,    17,    18,    19,    20,    21,   221,    -1,   472,
      25,    26,    27,    28,    29,    -1,    31,   486,   487,    -1,
      -1,    -1,    -1,    38,    -1,    40,    41,    42,    43,    -1,
      45,    46,    -1,    48,    49,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    -1,
      75,    -1,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,   109,     3,    -1,     5,    -1,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75,    -1,    77,
      78,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,   109,     3,    -1,     5,    -1,     7,    -1,     9,    10,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    49,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    -1,    -1,    75,    -1,    77,    78,    79,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,     9,   108,   109,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    48,    49,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,    -1,
      83,     3,    -1,     5,    -1,     7,    89,    90,    91,    92,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,   108,   109,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,   108,   109,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,   108,   109,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,   108,   109,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,   108,   109,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,   108,   109,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,   108,   109,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,   108,   109,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,   108,   109,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,   108,   109,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,   108,   109,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,   109,    50,    -1,
      52,    -1,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,   109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      31,    38,    40,    41,    42,    43,    45,    46,    48,    49,
      50,    52,    53,    54,    55,    56,    57,    58,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    75,
      77,    78,    79,    80,    83,    89,    90,    91,    92,   108,
     109,   118,   119,   120,   122,   126,   129,   132,   134,   135,
     143,   144,   145,   147,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   165,   166,   167,   168,   169,
     182,   183,   186,   187,   188,   195,   196,   199,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   226,   229,   230,   231,   233,   234,     6,
     161,     8,    86,   161,    10,   129,    32,    33,    34,    35,
     131,   174,   175,   176,   177,     5,   145,     5,     5,     5,
     161,   177,     3,   161,   121,   177,   121,    75,   103,   189,
     190,   191,   193,   194,   195,   174,   130,   177,   121,   177,
     162,   145,    75,   225,   224,    59,    61,   161,   232,   136,
     138,   194,   136,   137,   143,   143,   161,     0,   120,   145,
     177,     5,     3,    54,     3,     4,    51,    85,   110,     7,
     165,    90,    91,   138,   185,   223,   177,    84,    88,   106,
      94,   104,   105,   103,    95,   100,   204,    96,    97,    98,
      99,   205,   101,   102,   206,    76,    78,   207,    80,    81,
      82,   208,    87,    83,   224,   143,     7,    39,    52,   107,
     163,   165,   167,   229,    58,     6,   161,     8,    86,    10,
       5,   170,   175,    36,    37,   178,   161,   153,   162,   160,
      75,     9,    75,   146,     3,    75,    36,   178,   179,    75,
     163,   189,    75,    39,    84,    85,   192,    86,   124,   193,
       5,   171,   138,    75,    75,   143,   225,   232,    60,     7,
     168,    93,   136,   161,     3,   162,   169,   169,   169,     8,
     161,    51,    85,    95,   100,   110,   164,   184,   205,   206,
     207,   208,   229,   143,   138,   136,   161,   209,   210,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     138,    75,   138,   227,     5,   228,   232,     8,     7,   165,
       8,   161,   136,   139,   140,     6,    47,   172,   138,   138,
       6,   161,     6,   160,     4,    86,    22,   149,   150,     9,
     107,   173,   173,   163,   191,    75,   128,     9,   136,   141,
     142,   172,    75,   173,   173,   232,    75,     6,   170,     5,
       5,     5,    75,   200,   201,    86,     4,     8,     6,   161,
       8,     8,    75,   202,     4,     6,    86,   180,    75,    75,
     145,     3,   145,     6,   161,    75,   162,   161,    10,   149,
     128,   128,    38,   123,   124,     4,   125,   188,   202,   203,
       4,     3,   173,   124,     9,   173,   145,     6,   139,   139,
     139,   168,     4,   210,   227,     6,   165,   166,    86,   139,
      75,     3,   143,   181,   173,   173,    14,   145,     6,    86,
       6,    23,   148,    24,   151,    10,     8,   137,   124,     9,
      75,    10,   188,   141,     9,    75,   138,   197,   198,    23,
     133,     4,     6,     6,   200,   162,   171,   145,   145,   162,
     145,   161,    86,   145,     9,   119,   127,   127,     3,    75,
     198,    10,   162,     3,   139,   172,     6,   129,   127,    10,
      10,     3,     6,     3,   145,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   117,   118,   118,   119,   119,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   122,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   127,   127,   128,   128,   129,
     129,   130,   131,   132,   133,   133,   134,   134,   135,   136,
     136,   137,   138,   139,   139,   140,   140,   141,   142,   142,
     143,   143,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   146,   146,   147,   148,   148,   149,   150,   150,
     151,   151,   152,   153,   153,   154,   154,   154,   154,   154,
     154,   154,   155,   156,   157,   157,   158,   158,   159,   159,
     159,   159,   160,   160,   161,   161,   162,   162,   162,   162,
     163,   163,   164,   164,   164,   164,   165,   165,   165,   166,
     166,   166,   167,   167,   167,   168,   168,   169,   169,   170,
     170,   171,   171,   172,   172,   173,   173,   174,   175,   175,
     176,   176,   177,   177,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   181,   182,   183,   184,   184,   184,   184,
     184,   185,   185,   185,   185,   186,   186,   187,   188,   188,
     188,   189,   189,   190,   190,   191,   191,   192,   192,   192,
     193,   194,   194,   195,   195,   196,   196,   197,   197,   198,
     198,   199,   200,   200,   201,   201,   202,   202,   202,   203,
     203,   204,   204,   205,   205,   205,   205,   206,   206,   207,
     207,   208,   208,   208,   209,   209,   210,   210,   210,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   215,   216,
     216,   217,   217,   218,   218,   219,   219,   220,   220,   221,
     221,   222,   222,   223,   223,   223,   223,   223,   223,   223,
     224,   224,   224,   224,   224,   224,   224,   225,   225,   226,
     226,   227,   227,   228,   228,   229,   229,   230,   231,   231,
     231,   231,   231,   231,   231,   232,   232,   232,   233,   233,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     9,     8,     8,     2,     0,
       0,     2,     1,     2,     6,     1,     0,     1,     3,     1,
       2,     4,     5,     5,     0,     2,     1,     1,     7,     2,
       1,     1,     1,     4,     2,     1,     3,     2,     1,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     2,     0,     5,     1,     2,
       2,     0,     6,     1,     1,     5,     5,     6,     7,     7,
       9,     5,     3,     2,     5,     7,     1,     1,     3,     2,
       3,     2,     2,     1,     1,     3,     1,     3,     3,     3,
       3,     0,     1,     1,     1,     1,     3,     4,     5,     2,
       3,     2,     5,     4,     4,     1,     1,     1,     4,     2,
       1,     2,     1,     2,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     0,     1,     1,
       0,     2,     1,     1,     6,     9,     1,     1,     1,     1,
       1,     7,     5,     5,     4,     1,     2,     3,     1,     1,
       1,     1,     2,     2,     3,     1,     3,     1,     1,     0,
       2,     1,     2,     1,     1,     1,     1,     2,     3,     1,
       2,     7,     3,     1,     1,     2,     1,     2,     2,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     5,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     1,     2,     2,
       1,     1,     3,     3,     2,     1,     1,     3,     1,     2,
       2,     3,     2,     2,     1,     1,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     2
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
#line 160 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1994 "src/parser.c"
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
#line 163 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2298 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 164 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2304 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 167 "src/gwion.y"
            { (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2310 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 168 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2316 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 172 "src/gwion.y"
                 { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2322 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 173 "src/gwion.y"
                 { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2328 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 174 "src/gwion.y"
                 { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2334 "src/parser.c"
    break;

  case 9: /* section: extend_def  */
#line 175 "src/gwion.y"
                 { (yyval.section) = new_section_extend(mpool(arg), (yyvsp[0].class_def)); }
#line 2340 "src/parser.c"
    break;

  case 10: /* section: enum_def  */
#line 176 "src/gwion.y"
                 { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2346 "src/parser.c"
    break;

  case 11: /* section: union_def  */
#line 177 "src/gwion.y"
                 { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2352 "src/parser.c"
    break;

  case 12: /* section: fptr_def  */
#line 178 "src/gwion.y"
                 { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2358 "src/parser.c"
    break;

  case 13: /* section: type_def  */
#line 179 "src/gwion.y"
                 { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2364 "src/parser.c"
    break;

  case 14: /* class_flag: flag modifier  */
#line 182 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2370 "src/parser.c"
    break;

  case 15: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 185 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].id_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2381 "src/parser.c"
    break;

  case 16: /* class_def: "union" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 192 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2393 "src/parser.c"
    break;

  case 17: /* class_def: "trait" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 200 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      (yyval.class_def)->cflag |= cflag_trait;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
      if(GET_FLAG((yyval.class_def), abstract)) {
        { scanner_secondary(arg, "abstract should not be used on ${/+trait{0} declaration", (yylsp[-6])); }
        UNSET_FLAG((yyval.class_def), abstract);
      }
    }
#line 2409 "src/parser.c"
    break;

  case 18: /* class_ext: "extends" type_decl_exp  */
#line 212 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2415 "src/parser.c"
    break;

  case 19: /* class_ext: %empty  */
#line 212 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2421 "src/parser.c"
    break;

  case 20: /* traits: %empty  */
#line 213 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2427 "src/parser.c"
    break;

  case 21: /* traits: ":" id_list  */
#line 213 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2433 "src/parser.c"
    break;

  case 22: /* extend_body: func_def  */
#line 215 "src/gwion.y"
             {
    Section * section= new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), section, NULL) : new_ast(mpool(arg), section, NULL); LIST_FIRST((yyval.ast))
  }
#line 2442 "src/parser.c"
    break;

  case 23: /* extend_body: extend_body func_def  */
#line 219 "src/gwion.y"
                         {
    Section * section = new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), section, NULL) : new_ast(mpool(arg), section, NULL))
  }
#line 2451 "src/parser.c"
    break;

  case 24: /* extend_def: "extends" type_decl traits "{" extend_body "}"  */
#line 225 "src/gwion.y"
                                                           {
  if((yyvsp[-3].id_list) && (yyvsp[-3].id_list)->next)
    { parser_error(&(yyloc), arg, "extensions must define at most trait", 0211); YYERROR;}
  (yyval.class_def) = new_class_def(mpool(arg), ae_flag_none, (yyvsp[-4].type_decl)->xid, (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-4]));
  (yyval.class_def)->traits = (yyvsp[-3].id_list);
}
#line 2462 "src/parser.c"
    break;

  case 26: /* class_body: %empty  */
#line 233 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2468 "src/parser.c"
    break;

  case 27: /* id_list: "<identifier>"  */
#line 235 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2474 "src/parser.c"
    break;

  case 28: /* id_list: id_list "," "<identifier>"  */
#line 236 "src/gwion.y"
                           { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2480 "src/parser.c"
    break;

  case 29: /* stmt_list: stmt  */
#line 238 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2486 "src/parser.c"
    break;

  case 30: /* stmt_list: stmt_list stmt  */
#line 239 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2492 "src/parser.c"
    break;

  case 31: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 241 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2499 "src/parser.c"
    break;

  case 32: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 244 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2506 "src/parser.c"
    break;

  case 33: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 247 "src/gwion.y"
                                                     {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2516 "src/parser.c"
    break;

  case 34: /* typedef_when: %empty  */
#line 253 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2522 "src/parser.c"
    break;

  case 35: /* typedef_when: "when" binary_exp  */
#line 253 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2528 "src/parser.c"
    break;

  case 36: /* type_def_type: "typedef"  */
#line 254 "src/gwion.y"
                         { (yyval.ival) = 0; }
#line 2534 "src/parser.c"
    break;

  case 37: /* type_def_type: "distinct"  */
#line 254 "src/gwion.y"
                                                  { (yyval.ival) = 1; }
#line 2540 "src/parser.c"
    break;

  case 38: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 255 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].id_list));
  (yyval.type_def)->distinct = (yyvsp[-6].ival);
}
#line 2553 "src/parser.c"
    break;

  case 39: /* type_decl_array: type_decl array  */
#line 264 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2559 "src/parser.c"
    break;

  case 41: /* type_decl_exp: type_decl_array  */
#line 266 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2567 "src/parser.c"
    break;

  case 42: /* type_decl_empty: type_decl_array  */
#line 270 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2575 "src/parser.c"
    break;

  case 43: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 275 "src/gwion.y"
                                            { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2581 "src/parser.c"
    break;

  case 44: /* arg: type_decl_array arg_decl  */
#line 276 "src/gwion.y"
                             { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2587 "src/parser.c"
    break;

  case 45: /* arg_list: arg  */
#line 278 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2593 "src/parser.c"
    break;

  case 46: /* arg_list: arg_list "," arg  */
#line 279 "src/gwion.y"
                        {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
   }
#line 2603 "src/parser.c"
    break;

  case 47: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 285 "src/gwion.y"
                                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2609 "src/parser.c"
    break;

  case 48: /* fptr_list: fptr_arg  */
#line 286 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2615 "src/parser.c"
    break;

  case 49: /* fptr_list: fptr_list "," fptr_arg  */
#line 286 "src/gwion.y"
                                                                           { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2621 "src/parser.c"
    break;

  case 50: /* code_stmt: "{" "}"  */
#line 289 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2627 "src/parser.c"
    break;

  case 51: /* code_stmt: "{" stmt_list "}"  */
#line 290 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2633 "src/parser.c"
    break;

  case 52: /* stmt_pp: "<comment>"  */
#line 294 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2639 "src/parser.c"
    break;

  case 53: /* stmt_pp: "#include"  */
#line 295 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2645 "src/parser.c"
    break;

  case 54: /* stmt_pp: "#define"  */
#line 296 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2651 "src/parser.c"
    break;

  case 55: /* stmt_pp: "#pragma"  */
#line 297 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2657 "src/parser.c"
    break;

  case 56: /* stmt_pp: "#undef"  */
#line 298 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2663 "src/parser.c"
    break;

  case 57: /* stmt_pp: "#ifdef"  */
#line 299 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2669 "src/parser.c"
    break;

  case 58: /* stmt_pp: "#ifndef"  */
#line 300 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2675 "src/parser.c"
    break;

  case 59: /* stmt_pp: "#else"  */
#line 301 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2681 "src/parser.c"
    break;

  case 60: /* stmt_pp: "#if"  */
#line 302 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2687 "src/parser.c"
    break;

  case 61: /* stmt_pp: "\n"  */
#line 303 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2693 "src/parser.c"
    break;

  case 62: /* stmt_pp: "require"  */
#line 304 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), (yyloc)); }
#line 2699 "src/parser.c"
    break;

  case 73: /* opt_id: %empty  */
#line 319 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2705 "src/parser.c"
    break;

  case 74: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 322 "src/gwion.y"
                                           {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2715 "src/parser.c"
    break;

  case 75: /* when_exp: "when" exp  */
#line 328 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2721 "src/parser.c"
    break;

  case 76: /* when_exp: %empty  */
#line 328 "src/gwion.y"
                                               { (yyval.exp) = NULL; }
#line 2727 "src/parser.c"
    break;

  case 77: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 331 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 2740 "src/parser.c"
    break;

  case 78: /* match_list: match_case_stmt  */
#line 341 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2746 "src/parser.c"
    break;

  case 79: /* match_list: match_list match_case_stmt  */
#line 342 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2752 "src/parser.c"
    break;

  case 80: /* where_stmt: "where" stmt  */
#line 344 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2758 "src/parser.c"
    break;

  case 81: /* where_stmt: %empty  */
#line 344 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2764 "src/parser.c"
    break;

  case 82: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 346 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 2777 "src/parser.c"
    break;

  case 83: /* flow: "while"  */
#line 356 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2783 "src/parser.c"
    break;

  case 84: /* flow: "until"  */
#line 357 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2789 "src/parser.c"
    break;

  case 85: /* loop_stmt: flow "(" exp ")" stmt  */
#line 361 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2795 "src/parser.c"
    break;

  case 86: /* loop_stmt: "do" stmt flow exp ";"  */
#line 363 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1, (yyloc)); LIST_REM((yyvsp[-2].ival)) }
#line 2801 "src/parser.c"
    break;

  case 87: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 365 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 2807 "src/parser.c"
    break;

  case 88: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 367 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2813 "src/parser.c"
    break;

  case 89: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 369 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2819 "src/parser.c"
    break;

  case 90: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" binary_exp ")" stmt  */
#line 371 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc));
        (yyval.stmt)->d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
        (yyval.stmt)->d.stmt_each.idx->sym = (yyvsp[-6].sym);
        (yyval.stmt)->d.stmt_each.idx->pos = (yylsp[-6]);
    }
#line 2829 "src/parser.c"
    break;

  case 91: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 377 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2835 "src/parser.c"
    break;

  case 92: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 380 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2841 "src/parser.c"
    break;

  case 93: /* defer_stmt: "defer" stmt  */
#line 382 "src/gwion.y"
                         { (yyval.stmt) = new_stmt_defer(mpool(arg), (yyvsp[0].stmt), (yyloc)); }
#line 2847 "src/parser.c"
    break;

  case 94: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 386 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2853 "src/parser.c"
    break;

  case 95: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 388 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 2859 "src/parser.c"
    break;

  case 96: /* breaks: "break"  */
#line 391 "src/gwion.y"
                  { (yyval.ival) = ae_stmt_break; }
#line 2865 "src/parser.c"
    break;

  case 97: /* breaks: "continue"  */
#line 391 "src/gwion.y"
                                                      { (yyval.ival) = ae_stmt_continue; }
#line 2871 "src/parser.c"
    break;

  case 98: /* jump_stmt: "return" exp ";"  */
#line 393 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2877 "src/parser.c"
    break;

  case 99: /* jump_stmt: "return" ";"  */
#line 394 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 2883 "src/parser.c"
    break;

  case 100: /* jump_stmt: breaks "<integer>" ";"  */
#line 395 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 2889 "src/parser.c"
    break;

  case 101: /* jump_stmt: breaks ";"  */
#line 396 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 2895 "src/parser.c"
    break;

  case 102: /* exp_stmt: exp ";"  */
#line 400 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2901 "src/parser.c"
    break;

  case 103: /* exp_stmt: ";"  */
#line 401 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 2907 "src/parser.c"
    break;

  case 104: /* exp: binary_exp  */
#line 405 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 2913 "src/parser.c"
    break;

  case 105: /* exp: exp "," binary_exp  */
#line 406 "src/gwion.y"
                         { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 2919 "src/parser.c"
    break;

  case 107: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 410 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2925 "src/parser.c"
    break;

  case 108: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 411 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2931 "src/parser.c"
    break;

  case 109: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 412 "src/gwion.y"
                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2937 "src/parser.c"
    break;

  case 110: /* call_template: ":[" type_list "]"  */
#line 415 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2943 "src/parser.c"
    break;

  case 111: /* call_template: %empty  */
#line 415 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2949 "src/parser.c"
    break;

  case 116: /* array_exp: "[" exp "]"  */
#line 420 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 2955 "src/parser.c"
    break;

  case 117: /* array_exp: "[" exp "]" array_exp  */
#line 421 "src/gwion.y"
                                {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0207); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 2964 "src/parser.c"
    break;

  case 118: /* array_exp: "[" exp "]" "[" "]"  */
#line 425 "src/gwion.y"
                                     { LIST_REM(2) parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0208); YYERROR; }
#line 2970 "src/parser.c"
    break;

  case 119: /* array_empty: "[" "]"  */
#line 429 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2976 "src/parser.c"
    break;

  case 120: /* array_empty: array_empty "[" "]"  */
#line 430 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2982 "src/parser.c"
    break;

  case 121: /* array_empty: array_empty array_exp  */
#line 431 "src/gwion.y"
                              { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0209); YYERROR; }
#line 2988 "src/parser.c"
    break;

  case 122: /* range: "[" exp ":" exp "]"  */
#line 435 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM(2) LIST_REM((yyvsp[-1].exp)) }
#line 2994 "src/parser.c"
    break;

  case 123: /* range: "[" exp ":" "]"  */
#line 436 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 3000 "src/parser.c"
    break;

  case 124: /* range: "[" ":" exp "]"  */
#line 437 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 3006 "src/parser.c"
    break;

  case 128: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 443 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3012 "src/parser.c"
    break;

  case 129: /* func_args: "(" arg_list  */
#line 445 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3018 "src/parser.c"
    break;

  case 130: /* func_args: "("  */
#line 445 "src/gwion.y"
                                                                { (yyval.arg_list) = NULL; }
#line 3024 "src/parser.c"
    break;

  case 131: /* fptr_args: "(" fptr_list  */
#line 446 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3030 "src/parser.c"
    break;

  case 132: /* fptr_args: "("  */
#line 446 "src/gwion.y"
                                                               { (yyval.arg_list) = NULL; }
#line 3036 "src/parser.c"
    break;

  case 133: /* arg_type: "..." ")"  */
#line 447 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 3042 "src/parser.c"
    break;

  case 134: /* arg_type: ")"  */
#line 447 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 3048 "src/parser.c"
    break;

  case 135: /* decl_template: ":[" id_list "]"  */
#line 449 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); LIST_REM(2) }
#line 3054 "src/parser.c"
    break;

  case 136: /* decl_template: %empty  */
#line 449 "src/gwion.y"
                                                              { (yyval.id_list) = NULL; }
#line 3060 "src/parser.c"
    break;

  case 137: /* global: "global"  */
#line 451 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = 1; }
#line 3066 "src/parser.c"
    break;

  case 138: /* storage_flag: "static"  */
#line 453 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3072 "src/parser.c"
    break;

  case 140: /* access_flag: "private"  */
#line 455 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3078 "src/parser.c"
    break;

  case 141: /* access_flag: "protect"  */
#line 456 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3084 "src/parser.c"
    break;

  case 142: /* flag: access_flag  */
#line 459 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3090 "src/parser.c"
    break;

  case 143: /* flag: storage_flag  */
#line 460 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3096 "src/parser.c"
    break;

  case 144: /* flag: access_flag storage_flag  */
#line 461 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3102 "src/parser.c"
    break;

  case 145: /* flag: %empty  */
#line 462 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3108 "src/parser.c"
    break;

  case 146: /* final: "final"  */
#line 465 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3114 "src/parser.c"
    break;

  case 147: /* final: %empty  */
#line 465 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3120 "src/parser.c"
    break;

  case 148: /* modifier: "abstract"  */
#line 467 "src/gwion.y"
                     { (yyval.flag) = ae_flag_abstract; }
#line 3126 "src/parser.c"
    break;

  case 150: /* func_trait: %empty  */
#line 469 "src/gwion.y"
            { (yyval.sym) = 0; }
#line 3132 "src/parser.c"
    break;

  case 151: /* func_trait: ":" "<identifier>"  */
#line 469 "src/gwion.y"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 3138 "src/parser.c"
    break;

  case 153: /* func_code: ";"  */
#line 470 "src/gwion.y"
                           { (yyval.stmt) = NULL; }
#line 3144 "src/parser.c"
    break;

  case 154: /* func_def_base: "fun" func_base func_args arg_type func_trait func_code  */
#line 472 "src/gwion.y"
                                                            {
    (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
    (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-4].func_base), (yyvsp[0].stmt));
    (yyval.func_def)->trait = (yyvsp[-1].sym);
    if(!(yyvsp[0].stmt)) {
      SET_FLAG((yyvsp[-4].func_base), abstract);
    }
  }
#line 3158 "src/parser.c"
    break;

  case 155: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 484 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3170 "src/parser.c"
    break;

  case 161: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 495 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none, (yylsp[-5])); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 3176 "src/parser.c"
    break;

  case 162: /* op_base: type_decl_empty post_op "(" arg ")"  */
#line 497 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-3])); }
#line 3182 "src/parser.c"
    break;

  case 163: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 499 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-4]));
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 3191 "src/parser.c"
    break;

  case 164: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 504 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3200 "src/parser.c"
    break;

  case 165: /* operator: "operator"  */
#line 509 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 3206 "src/parser.c"
    break;

  case 166: /* operator: "operator" global  */
#line 509 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 3212 "src/parser.c"
    break;

  case 167: /* op_def: operator op_base code_stmt  */
#line 511 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3218 "src/parser.c"
    break;

  case 170: /* func_def: op_def  */
#line 513 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 3224 "src/parser.c"
    break;

  case 171: /* ref: "&"  */
#line 515 "src/gwion.y"
         { (yyval.uval) = 1; }
#line 3230 "src/parser.c"
    break;

  case 172: /* ref: "&" ref  */
#line 515 "src/gwion.y"
                               { (yyval.uval) = 1 + (yyvsp[0].uval); }
#line 3236 "src/parser.c"
    break;

  case 173: /* type_decl_tmpl: "<identifier>" call_template  */
#line 517 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3242 "src/parser.c"
    break;

  case 174: /* type_decl_tmpl: ref "<identifier>" call_template  */
#line 518 "src/gwion.y"
                         { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->ref = 1; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3248 "src/parser.c"
    break;

  case 176: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 523 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3254 "src/parser.c"
    break;

  case 177: /* option: "?"  */
#line 526 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3260 "src/parser.c"
    break;

  case 178: /* option: OPTIONS  */
#line 526 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3266 "src/parser.c"
    break;

  case 179: /* option: %empty  */
#line 526 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3272 "src/parser.c"
    break;

  case 180: /* type_decl_opt: type_decl_noflag option  */
#line 527 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option |= (yyvsp[0].uval); }
#line 3278 "src/parser.c"
    break;

  case 182: /* type_decl: type_decl_flag type_decl_opt  */
#line 528 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3284 "src/parser.c"
    break;

  case 183: /* type_decl_flag: "LATE"  */
#line 531 "src/gwion.y"
         { (yyval.flag) = ae_flag_late; }
#line 3290 "src/parser.c"
    break;

  case 184: /* type_decl_flag: "const"  */
#line 532 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 3296 "src/parser.c"
    break;

  case 185: /* type_decl_flag2: "var"  */
#line 534 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3302 "src/parser.c"
    break;

  case 187: /* union_decl: "<identifier>" ";"  */
#line 537 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yylsp[-1]));
}
#line 3311 "src/parser.c"
    break;

  case 188: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 541 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 3317 "src/parser.c"
    break;

  case 190: /* union_list: union_decl union_list  */
#line 544 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 3323 "src/parser.c"
    break;

  case 191: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 547 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 3335 "src/parser.c"
    break;

  case 192: /* var_decl_list: var_decl "," var_decl_list  */
#line 557 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3341 "src/parser.c"
    break;

  case 193: /* var_decl_list: var_decl  */
#line 558 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3347 "src/parser.c"
    break;

  case 194: /* var_decl: "<identifier>"  */
#line 561 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yylsp[0])); }
#line 3353 "src/parser.c"
    break;

  case 195: /* var_decl: "<identifier>" array  */
#line 562 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3359 "src/parser.c"
    break;

  case 196: /* arg_decl: "<identifier>"  */
#line 564 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3365 "src/parser.c"
    break;

  case 197: /* arg_decl: "<identifier>" array_empty  */
#line 565 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3371 "src/parser.c"
    break;

  case 198: /* arg_decl: "<identifier>" array_exp  */
#line 566 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 3377 "src/parser.c"
    break;

  case 200: /* fptr_arg_decl: %empty  */
#line 567 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3383 "src/parser.c"
    break;

  case 214: /* opt_exp: exp  */
#line 575 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3389 "src/parser.c"
    break;

  case 215: /* opt_exp: %empty  */
#line 575 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3395 "src/parser.c"
    break;

  case 217: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 578 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3401 "src/parser.c"
    break;

  case 218: /* con_exp: log_or_exp "?:" con_exp  */
#line 580 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3407 "src/parser.c"
    break;

  case 220: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 582 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3413 "src/parser.c"
    break;

  case 222: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 583 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3419 "src/parser.c"
    break;

  case 224: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 584 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3425 "src/parser.c"
    break;

  case 226: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 585 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3431 "src/parser.c"
    break;

  case 228: /* and_exp: and_exp "&" eq_exp  */
#line 586 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3437 "src/parser.c"
    break;

  case 230: /* eq_exp: eq_exp eq_op rel_exp  */
#line 587 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3443 "src/parser.c"
    break;

  case 232: /* rel_exp: rel_exp rel_op shift_exp  */
#line 588 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3449 "src/parser.c"
    break;

  case 234: /* shift_exp: shift_exp shift_op add_exp  */
#line 589 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3455 "src/parser.c"
    break;

  case 236: /* add_exp: add_exp add_op mul_exp  */
#line 590 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3461 "src/parser.c"
    break;

  case 238: /* mul_exp: mul_exp mul_op dur_exp  */
#line 591 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3467 "src/parser.c"
    break;

  case 240: /* dur_exp: dur_exp "::" cast_exp  */
#line 592 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3473 "src/parser.c"
    break;

  case 242: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 595 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3479 "src/parser.c"
    break;

  case 251: /* unary_exp: unary_op unary_exp  */
#line 602 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3485 "src/parser.c"
    break;

  case 252: /* unary_exp: OPID_E unary_exp  */
#line 603 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3491 "src/parser.c"
    break;

  case 253: /* unary_exp: "new" type_decl_exp  */
#line 604 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), (yyloc)); }
#line 3497 "src/parser.c"
    break;

  case 254: /* unary_exp: "spork" code_stmt  */
#line 605 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3503 "src/parser.c"
    break;

  case 255: /* unary_exp: "fork" code_stmt  */
#line 606 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3509 "src/parser.c"
    break;

  case 256: /* unary_exp: "$" type_decl_empty  */
#line 607 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yyloc)); }
#line 3515 "src/parser.c"
    break;

  case 257: /* lambda_list: "<identifier>"  */
#line 610 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)), NULL); }
#line 3521 "src/parser.c"
    break;

  case 258: /* lambda_list: "<identifier>" lambda_list  */
#line 611 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yyloc)), (yyvsp[0].arg_list)); }
#line 3527 "src/parser.c"
    break;

  case 259: /* lambda_arg: "\\" lambda_list  */
#line 612 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3533 "src/parser.c"
    break;

  case 260: /* lambda_arg: "\\"  */
#line 612 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3539 "src/parser.c"
    break;

  case 261: /* type_list: type_decl_empty  */
#line 615 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3545 "src/parser.c"
    break;

  case 262: /* type_list: type_decl_empty "," type_list  */
#line 616 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3551 "src/parser.c"
    break;

  case 263: /* call_paren: "(" exp ")"  */
#line 620 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3557 "src/parser.c"
    break;

  case 264: /* call_paren: "(" ")"  */
#line 620 "src/gwion.y"
                                                                         { (yyval.exp) = NULL; }
#line 3563 "src/parser.c"
    break;

  case 267: /* dot_exp: post_exp "." "<identifier>"  */
#line 624 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3576 "src/parser.c"
    break;

  case 269: /* post_exp: post_exp array_exp  */
#line 635 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3582 "src/parser.c"
    break;

  case 270: /* post_exp: post_exp range  */
#line 637 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3588 "src/parser.c"
    break;

  case 271: /* post_exp: post_exp call_template call_paren  */
#line 639 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3595 "src/parser.c"
    break;

  case 272: /* post_exp: post_exp post_op  */
#line 642 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3601 "src/parser.c"
    break;

  case 273: /* post_exp: post_exp OPID_E  */
#line 644 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3607 "src/parser.c"
    break;

  case 274: /* post_exp: dot_exp  */
#line 645 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3613 "src/parser.c"
    break;

  case 275: /* interp_exp: "<interp string>`"  */
#line 649 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3619 "src/parser.c"
    break;

  case 276: /* interp_exp: "<interp string>" interp_exp  */
#line 650 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3625 "src/parser.c"
    break;

  case 277: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 651 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3631 "src/parser.c"
    break;

  case 278: /* interp: "`" interp_exp  */
#line 653 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3637 "src/parser.c"
    break;

  case 279: /* interp: interp "`" interp_exp  */
#line 654 "src/gwion.y"
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
#line 3652 "src/parser.c"
    break;

  case 280: /* prim_exp: "<identifier>"  */
#line 666 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3658 "src/parser.c"
    break;

  case 281: /* prim_exp: "<integer>"  */
#line 667 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 3664 "src/parser.c"
    break;

  case 282: /* prim_exp: FLOATT  */
#line 668 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 3670 "src/parser.c"
    break;

  case 283: /* prim_exp: interp  */
#line 669 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 3676 "src/parser.c"
    break;

  case 284: /* prim_exp: "<litteral string>"  */
#line 670 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3682 "src/parser.c"
    break;

  case 285: /* prim_exp: "<litteral char>"  */
#line 671 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3688 "src/parser.c"
    break;

  case 286: /* prim_exp: array  */
#line 672 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 3694 "src/parser.c"
    break;

  case 287: /* prim_exp: range  */
#line 673 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 3700 "src/parser.c"
    break;

  case 288: /* prim_exp: "<<<" exp ">>>"  */
#line 674 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 3706 "src/parser.c"
    break;

  case 289: /* prim_exp: "(" exp ")"  */
#line 675 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3712 "src/parser.c"
    break;

  case 290: /* prim_exp: lambda_arg code_stmt  */
#line 676 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yyloc)); }
#line 3718 "src/parser.c"
    break;

  case 291: /* prim_exp: "(" ")"  */
#line 677 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 3724 "src/parser.c"
    break;


#line 3728 "src/parser.c"

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

#line 679 "src/gwion.y"

#undef scan
ANN static int parser_error(loc_t *loc, Scanner *const scan, const char* diagnostic, const uint error_code) {
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
