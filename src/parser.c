/* A Bison parser, made by GNU Bison 3.6.4.  */

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
#define YYBISON_VERSION "3.6.4"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_GWION_INCLUDE_PARSER_H_INCLUDED
# define YY_GWION_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int gwion_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SEMICOLON = 258,               /* ";"  */
    COMMA = 259,                   /* ","  */
    LPAREN = 260,                  /* "("  */
    RPAREN = 261,                  /* ")"  */
    LBRACK = 262,                  /* "["  */
    RBRACK = 263,                  /* "]"  */
    LBRACE = 264,                  /* "{"  */
    RBRACE = 265,                  /* "}"  */
    FUNCTION = 266,                /* "fun"  */
    VAR = 267,                     /* "var"  */
    IF = 268,                      /* "if"  */
    ELSE = 269,                    /* "else"  */
    WHILE = 270,                   /* "while"  */
    DO = 271,                      /* "do"  */
    UNTIL = 272,                   /* "until"  */
    LOOP = 273,                    /* "repeat"  */
    FOR = 274,                     /* "for"  */
    FOREACH = 275,                 /* "foreach"  */
    GOTO = 276,                    /* "goto"  */
    MATCH = 277,                   /* "match"  */
    CASE = 278,                    /* "case"  */
    WHEN = 279,                    /* "when"  */
    WHERE = 280,                   /* "where"  */
    ENUM = 281,                    /* "enum"  */
    TRETURN = 282,                 /* "return"  */
    BREAK = 283,                   /* "break"  */
    CONTINUE = 284,                /* "continue"  */
    CLASS = 285,                   /* "class"  */
    STRUCT = 286,                  /* "struct"  */
    STATIC = 287,                  /* "static"  */
    GLOBAL = 288,                  /* "global"  */
    PRIVATE = 289,                 /* "private"  */
    PROTECT = 290,                 /* "protect"  */
    EXTENDS = 291,                 /* "extends"  */
    DOT = 292,                     /* "."  */
    OPERATOR = 293,                /* "operator"  */
    TYPEDEF = 294,                 /* "typedef"  */
    FUNCDEF = 295,                 /* "funcdef"  */
    NOELSE = 296,                  /* NOELSE  */
    UNION = 297,                   /* "union"  */
    CONSTT = 298,                  /* "const"  */
    ELLIPSE = 299,                 /* "..."  */
    VARLOOP = 300,                 /* "varloop"  */
    BACKSLASH = 301,               /* "\\"  */
    OPID_A = 302,                  /* OPID_A  */
    OPID_D = 303,                  /* OPID_D  */
    REF = 304,                     /* "ref"  */
    NONNULL = 305,                 /* "nonnull"  */
    NUM = 306,                     /* "<integer>"  */
    FLOATT = 307,                  /* FLOATT  */
    ID = 308,                      /* "<identifier>"  */
    STRING_LIT = 309,              /* "<litteral string>"  */
    CHAR_LIT = 310,                /* "<litteral char>"  */
    INTERP_START = 311,            /* "`"  */
    INTERP_LIT = 312,              /* "<interp string>"  */
    INTERP_EXP = 313,              /* INTERP_EXP  */
    INTERP_END = 314,              /* "<interp string>`"  */
    PP_COMMENT = 315,              /* "<comment>"  */
    PP_INCLUDE = 316,              /* "#include"  */
    PP_DEFINE = 317,               /* "#define"  */
    PP_PRAGMA = 318,               /* "#pragma"  */
    PP_UNDEF = 319,                /* "#undef"  */
    PP_IFDEF = 320,                /* "#ifdef"  */
    PP_IFNDEF = 321,               /* "#ifndef"  */
    PP_ELSE = 322,                 /* "#else"  */
    PP_ENDIF = 323,                /* "#if"  */
    PP_NL = 324,                   /* "\n"  */
    PLUS = 327,                    /* "+"  */
    PLUSPLUS = 328,                /* "++"  */
    MINUS = 329,                   /* "-"  */
    MINUSMINUS = 330,              /* "--"  */
    TIMES = 331,                   /* "*"  */
    DIVIDE = 332,                  /* "/"  */
    PERCENT = 333,                 /* "%"  */
    DOLLAR = 334,                  /* "$"  */
    QUESTION = 335,                /* "?"  */
    COLON = 336,                   /* ":"  */
    COLONCOLON = 337,              /* "::"  */
    QUESTIONCOLON = 338,           /* "?:"  */
    NEW = 339,                     /* "new"  */
    SPORK = 340,                   /* "spork"  */
    FORK = 341,                    /* "fork"  */
    TYPEOF = 342,                  /* "typeof"  */
    L_HACK = 343,                  /* "<<<"  */
    R_HACK = 344,                  /* ">>>"  */
    AND = 345,                     /* "&&"  */
    EQ = 346,                      /* "=="  */
    GE = 347,                      /* ">="  */
    GT = 348,                      /* ">"  */
    LE = 349,                      /* "<="  */
    LT = 350,                      /* "<"  */
    NEQ = 351,                     /* "!="  */
    SHIFT_LEFT = 352,              /* "<<"  */
    SHIFT_RIGHT = 353,             /* ">>"  */
    S_AND = 354,                   /* "&"  */
    S_OR = 355,                    /* "|"  */
    S_XOR = 356,                   /* "^"  */
    OR = 357,                      /* "||"  */
    TMPL = 358,                    /* ":["  */
    TILDA = 359,                   /* "~"  */
    EXCLAMATION = 360,             /* "!"  */
    DYNOP = 361,                   /* "<dynamic_operator>"  */
    UMINUS = 362,                  /* UMINUS  */
    UTIMES = 363                   /* UTIMES  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SEMICOLON 258
#define COMMA 259
#define LPAREN 260
#define RPAREN 261
#define LBRACK 262
#define RBRACK 263
#define LBRACE 264
#define RBRACE 265
#define FUNCTION 266
#define VAR 267
#define IF 268
#define ELSE 269
#define WHILE 270
#define DO 271
#define UNTIL 272
#define LOOP 273
#define FOR 274
#define FOREACH 275
#define GOTO 276
#define MATCH 277
#define CASE 278
#define WHEN 279
#define WHERE 280
#define ENUM 281
#define TRETURN 282
#define BREAK 283
#define CONTINUE 284
#define CLASS 285
#define STRUCT 286
#define STATIC 287
#define GLOBAL 288
#define PRIVATE 289
#define PROTECT 290
#define EXTENDS 291
#define DOT 292
#define OPERATOR 293
#define TYPEDEF 294
#define FUNCDEF 295
#define NOELSE 296
#define UNION 297
#define CONSTT 298
#define ELLIPSE 299
#define VARLOOP 300
#define BACKSLASH 301
#define OPID_A 302
#define OPID_D 303
#define REF 304
#define NONNULL 305
#define NUM 306
#define FLOATT 307
#define ID 308
#define STRING_LIT 309
#define CHAR_LIT 310
#define INTERP_START 311
#define INTERP_LIT 312
#define INTERP_EXP 313
#define INTERP_END 314
#define PP_COMMENT 315
#define PP_INCLUDE 316
#define PP_DEFINE 317
#define PP_PRAGMA 318
#define PP_UNDEF 319
#define PP_IFDEF 320
#define PP_IFNDEF 321
#define PP_ELSE 322
#define PP_ENDIF 323
#define PP_NL 324
#define PLUS 327
#define PLUSPLUS 328
#define MINUS 329
#define MINUSMINUS 330
#define TIMES 331
#define DIVIDE 332
#define PERCENT 333
#define DOLLAR 334
#define QUESTION 335
#define COLON 336
#define COLONCOLON 337
#define QUESTIONCOLON 338
#define NEW 339
#define SPORK 340
#define FORK 341
#define TYPEOF 342
#define L_HACK 343
#define R_HACK 344
#define AND 345
#define EQ 346
#define GE 347
#define GT 348
#define LE 349
#define LT 350
#define NEQ 351
#define SHIFT_LEFT 352
#define SHIFT_RIGHT 353
#define S_AND 354
#define S_OR 355
#define S_XOR 356
#define OR 357
#define TMPL 358
#define TILDA 359
#define EXCLAMATION 360
#define DYNOP 361
#define UMINUS 362
#define UTIMES 363

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "src/gwion.y"

  char* sval;
  int ival;
  long unsigned int lval;
  ae_flag flag;
  m_float fval;
  Symbol sym;
  Array_Sub array_sub;
  Range* range;
  Var_Decl var_decl;
  Var_Decl_List var_decl_list;
  Type_Decl* type_decl;
  Exp   exp;
  struct Func_Base_ *func_base;
  Stmt stmt;
  Stmt_List stmt_list;
  Arg_List arg_list;
  Decl_List decl_list;
  Func_Def func_def;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section* section;
  ID_List id_list;
  Type_List type_list;
  Class_Def class_def;
  Ast ast;

#line 388 "src/parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int gwion_parse (Scanner* arg);

#endif /* !YY_GWION_INCLUDE_PARSER_H_INCLUDED  */
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
  YYSYMBOL_EXTENDS = 36,                   /* "extends"  */
  YYSYMBOL_DOT = 37,                       /* "."  */
  YYSYMBOL_OPERATOR = 38,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 39,                   /* "typedef"  */
  YYSYMBOL_FUNCDEF = 40,                   /* "funcdef"  */
  YYSYMBOL_NOELSE = 41,                    /* NOELSE  */
  YYSYMBOL_UNION = 42,                     /* "union"  */
  YYSYMBOL_CONSTT = 43,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 44,                   /* "..."  */
  YYSYMBOL_VARLOOP = 45,                   /* "varloop"  */
  YYSYMBOL_BACKSLASH = 46,                 /* "\\"  */
  YYSYMBOL_OPID_A = 47,                    /* OPID_A  */
  YYSYMBOL_OPID_D = 48,                    /* OPID_D  */
  YYSYMBOL_REF = 49,                       /* "ref"  */
  YYSYMBOL_NONNULL = 50,                   /* "nonnull"  */
  YYSYMBOL_NUM = 51,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 52,                    /* FLOATT  */
  YYSYMBOL_ID = 53,                        /* "<identifier>"  */
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
  YYSYMBOL_70_operator_id_ = 70,           /* "@<operator id>"  */
  YYSYMBOL_71_operator_id_ = 71,           /* "$<operator id>"  */
  YYSYMBOL_PLUS = 72,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 73,                  /* "++"  */
  YYSYMBOL_MINUS = 74,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 75,                /* "--"  */
  YYSYMBOL_TIMES = 76,                     /* "*"  */
  YYSYMBOL_DIVIDE = 77,                    /* "/"  */
  YYSYMBOL_PERCENT = 78,                   /* "%"  */
  YYSYMBOL_DOLLAR = 79,                    /* "$"  */
  YYSYMBOL_QUESTION = 80,                  /* "?"  */
  YYSYMBOL_COLON = 81,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 82,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 83,             /* "?:"  */
  YYSYMBOL_NEW = 84,                       /* "new"  */
  YYSYMBOL_SPORK = 85,                     /* "spork"  */
  YYSYMBOL_FORK = 86,                      /* "fork"  */
  YYSYMBOL_TYPEOF = 87,                    /* "typeof"  */
  YYSYMBOL_L_HACK = 88,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 89,                    /* ">>>"  */
  YYSYMBOL_AND = 90,                       /* "&&"  */
  YYSYMBOL_EQ = 91,                        /* "=="  */
  YYSYMBOL_GE = 92,                        /* ">="  */
  YYSYMBOL_GT = 93,                        /* ">"  */
  YYSYMBOL_LE = 94,                        /* "<="  */
  YYSYMBOL_LT = 95,                        /* "<"  */
  YYSYMBOL_NEQ = 96,                       /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 97,                /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 98,               /* ">>"  */
  YYSYMBOL_S_AND = 99,                     /* "&"  */
  YYSYMBOL_S_OR = 100,                     /* "|"  */
  YYSYMBOL_S_XOR = 101,                    /* "^"  */
  YYSYMBOL_OR = 102,                       /* "||"  */
  YYSYMBOL_TMPL = 103,                     /* ":["  */
  YYSYMBOL_TILDA = 104,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 105,              /* "!"  */
  YYSYMBOL_DYNOP = 106,                    /* "<dynamic_operator>"  */
  YYSYMBOL_UMINUS = 107,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 108,                   /* UTIMES  */
  YYSYMBOL_109_ = 109,                     /* "="  */
  YYSYMBOL_YYACCEPT = 110,                 /* $accept  */
  YYSYMBOL_prg = 111,                      /* prg  */
  YYSYMBOL_ast = 112,                      /* ast  */
  YYSYMBOL_section = 113,                  /* section  */
  YYSYMBOL_class_type = 114,               /* class_type  */
  YYSYMBOL_class_def = 115,                /* class_def  */
  YYSYMBOL_class_ext = 116,                /* class_ext  */
  YYSYMBOL_class_body = 117,               /* class_body  */
  YYSYMBOL_id_list = 118,                  /* id_list  */
  YYSYMBOL_stmt_list = 119,                /* stmt_list  */
  YYSYMBOL_func_base = 120,                /* func_base  */
  YYSYMBOL_fptr_def = 121,                 /* fptr_def  */
  YYSYMBOL_type_def = 122,                 /* type_def  */
  YYSYMBOL_type_decl_array = 123,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 124,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 125,          /* type_decl_empty  */
  YYSYMBOL_arg = 126,                      /* arg  */
  YYSYMBOL_arg_list = 127,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 128,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 129,                /* fptr_list  */
  YYSYMBOL_code_stmt = 130,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 131,                  /* stmt_pp  */
  YYSYMBOL_stmt = 132,                     /* stmt  */
  YYSYMBOL_id = 133,                       /* id  */
  YYSYMBOL_opt_id = 134,                   /* opt_id  */
  YYSYMBOL_enum_def = 135,                 /* enum_def  */
  YYSYMBOL_label_stmt = 136,               /* label_stmt  */
  YYSYMBOL_goto_stmt = 137,                /* goto_stmt  */
  YYSYMBOL_when_exp = 138,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 139,          /* match_case_stmt  */
  YYSYMBOL_match_list = 140,               /* match_list  */
  YYSYMBOL_where_stmt = 141,               /* where_stmt  */
  YYSYMBOL_match_stmt = 142,               /* match_stmt  */
  YYSYMBOL_flow = 143,                     /* flow  */
  YYSYMBOL_loop_stmt = 144,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 145,             /* varloop_stmt  */
  YYSYMBOL_selection_stmt = 146,           /* selection_stmt  */
  YYSYMBOL_breaks = 147,                   /* breaks  */
  YYSYMBOL_jump_stmt = 148,                /* jump_stmt  */
  YYSYMBOL__exp_stmt = 149,                /* _exp_stmt  */
  YYSYMBOL_exp_stmt = 150,                 /* exp_stmt  */
  YYSYMBOL_exp = 151,                      /* exp  */
  YYSYMBOL_binary_exp = 152,               /* binary_exp  */
  YYSYMBOL_call_template = 153,            /* call_template  */
  YYSYMBOL_op = 154,                       /* op  */
  YYSYMBOL_array_exp = 155,                /* array_exp  */
  YYSYMBOL_array_empty = 156,              /* array_empty  */
  YYSYMBOL_range = 157,                    /* range  */
  YYSYMBOL_array = 158,                    /* array  */
  YYSYMBOL_decl_exp = 159,                 /* decl_exp  */
  YYSYMBOL_union_exp = 160,                /* union_exp  */
  YYSYMBOL_func_args = 161,                /* func_args  */
  YYSYMBOL_fptr_args = 162,                /* fptr_args  */
  YYSYMBOL_arg_type = 163,                 /* arg_type  */
  YYSYMBOL_decl_template = 164,            /* decl_template  */
  YYSYMBOL_storage_flag = 165,             /* storage_flag  */
  YYSYMBOL_access_flag = 166,              /* access_flag  */
  YYSYMBOL_flag = 167,                     /* flag  */
  YYSYMBOL_func_def_base = 168,            /* func_def_base  */
  YYSYMBOL_op_op = 169,                    /* op_op  */
  YYSYMBOL_func_def = 170,                 /* func_def  */
  YYSYMBOL_ref = 171,                      /* ref  */
  YYSYMBOL_type_decl_tmpl = 172,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 173,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 174,         /* type_decl_noflag  */
  YYSYMBOL_type_decl = 175,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 176,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 177,          /* type_decl_flag2  */
  YYSYMBOL_decl_list = 178,                /* decl_list  */
  YYSYMBOL_union_def = 179,                /* union_def  */
  YYSYMBOL_var_decl_list = 180,            /* var_decl_list  */
  YYSYMBOL_var_decl = 181,                 /* var_decl  */
  YYSYMBOL_arg_decl = 182,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 183,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 184,                    /* eq_op  */
  YYSYMBOL_rel_op = 185,                   /* rel_op  */
  YYSYMBOL_shift_op = 186,                 /* shift_op  */
  YYSYMBOL_add_op = 187,                   /* add_op  */
  YYSYMBOL_mul_op = 188,                   /* mul_op  */
  YYSYMBOL_opt_exp = 189,                  /* opt_exp  */
  YYSYMBOL_con_exp = 190,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 191,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 192,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 193,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 194,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 195,                  /* and_exp  */
  YYSYMBOL_eq_exp = 196,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 197,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 198,                /* shift_exp  */
  YYSYMBOL_add_exp = 199,                  /* add_exp  */
  YYSYMBOL_mul_exp = 200,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 201,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 202,                 /* cast_exp  */
  YYSYMBOL_unary_op = 203,                 /* unary_op  */
  YYSYMBOL_unary_exp = 204,                /* unary_exp  */
  YYSYMBOL_lambda_list = 205,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 206,               /* lambda_arg  */
  YYSYMBOL_type_list = 207,                /* type_list  */
  YYSYMBOL_call_paren = 208,               /* call_paren  */
  YYSYMBOL_post_op = 209,                  /* post_op  */
  YYSYMBOL_dot_exp = 210,                  /* dot_exp  */
  YYSYMBOL_post_exp = 211,                 /* post_exp  */
  YYSYMBOL_interp_exp = 212,               /* interp_exp  */
  YYSYMBOL_interp = 213,                   /* interp  */
  YYSYMBOL_typeof_exp = 214,               /* typeof_exp  */
  YYSYMBOL_prim_exp = 215                  /* prim_exp  */
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
#define YYFINAL  192
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1568

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  267
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  441

#define YYMAXUTOK   364


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
     105,   106,   107,   108,   109
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   141,   144,   145,   149,   150,   151,   152,
     153,   154,   155,   158,   158,   160,   169,   169,   171,   171,
     173,   173,   175,   175,   177,   180,   189,   196,   196,   198,
     202,   207,   208,   210,   211,   220,   221,   221,   228,   229,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     258,   260,   260,   263,   266,   268,   270,   270,   273,   281,
     282,   284,   284,   286,   294,   295,   298,   300,   302,   304,
     306,   308,   312,   315,   317,   322,   323,   324,   327,   328,
     331,   331,   334,   335,   338,   338,   341,   342,   343,   345,
     345,   347,   347,   347,   350,   351,   352,   356,   357,   358,
     362,   363,   364,   367,   367,   369,   370,   372,   374,   374,
     375,   375,   376,   376,   378,   378,   380,   381,   384,   385,
     388,   389,   390,   391,   395,   401,   401,   401,   401,   401,
     404,   405,   407,   409,   411,   416,   416,   419,   423,   424,
     428,   429,   432,   432,   435,   436,   437,   438,   439,   440,
     441,   443,   443,   445,   446,   449,   469,   470,   473,   474,
     476,   477,   478,   479,   480,   481,   483,   483,   484,   484,
     484,   484,   485,   485,   486,   486,   487,   487,   487,   489,
     489,   490,   491,   493,   496,   496,   497,   497,   498,   498,
     499,   499,   500,   500,   501,   501,   502,   502,   503,   503,
     504,   504,   505,   505,   506,   506,   508,   508,   511,   511,
     511,   512,   512,   512,   512,   515,   516,   517,   518,   519,
     520,   523,   524,   525,   525,   528,   529,   532,   532,   534,
     534,   536,   537,   538,   540,   542,   545,   547,   549,   553,
     554,   555,   557,   558,   569,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584
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
  "\"global\"", "\"private\"", "\"protect\"", "\"extends\"", "\".\"",
  "\"operator\"", "\"typedef\"", "\"funcdef\"", "NOELSE", "\"union\"",
  "\"const\"", "\"...\"", "\"varloop\"", "\"\\\\\"", "OPID_A", "OPID_D",
  "\"ref\"", "\"nonnull\"", "\"<integer>\"", "FLOATT", "\"<identifier>\"",
  "\"<litteral string>\"", "\"<litteral char>\"", "\"`\"",
  "\"<interp string>\"", "INTERP_EXP", "\"<interp string>`\"",
  "\"<comment>\"", "\"#include\"", "\"#define\"", "\"#pragma\"",
  "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"", "\"#if\"",
  "\"\\n\"", "\"@<operator id>\"", "\"$<operator id>\"", "\"+\"", "\"++\"",
  "\"-\"", "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"",
  "\"::\"", "\"?:\"", "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"",
  "\"<<<\"", "\">>>\"", "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"",
  "\"<\"", "\"!=\"", "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"",
  "\"||\"", "\":[\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"", "UMINUS",
  "UTIMES", "\"=\"", "$accept", "prg", "ast", "section", "class_type",
  "class_def", "class_ext", "class_body", "id_list", "stmt_list",
  "func_base", "fptr_def", "type_def", "type_decl_array", "type_decl_exp",
  "type_decl_empty", "arg", "arg_list", "fptr_arg", "fptr_list",
  "code_stmt", "stmt_pp", "stmt", "id", "opt_id", "enum_def", "label_stmt",
  "goto_stmt", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "selection_stmt",
  "breaks", "jump_stmt", "_exp_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "range", "array",
  "decl_exp", "union_exp", "func_args", "fptr_args", "arg_type",
  "decl_template", "storage_flag", "access_flag", "flag", "func_def_base",
  "op_op", "func_def", "ref", "type_decl_tmpl", "type_decl_next",
  "type_decl_noflag", "type_decl", "type_decl_flag", "type_decl_flag2",
  "decl_list", "union_def", "var_decl_list", "var_decl", "arg_decl",
  "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op", "mul_op",
  "opt_exp", "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp",
  "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp",
  "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp", "lambda_list",
  "lambda_arg", "type_list", "call_paren", "post_op", "dot_exp",
  "post_exp", "interp_exp", "interp", "typeof_exp", "prim_exp", YY_NULLPTR
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364
};
#endif

#define YYPACT_NINF (-312)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-101)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     635,    31,   897,   515,   738,   129,  -312,    42,  -312,   832,
    -312,    49,    51,    58,    22,  1353,   129,  1353,  -312,  -312,
    -312,  -312,  1429,   129,   129,   129,   -19,  1353,    22,  -312,
      35,  -312,  -312,  -312,  -312,  -312,   954,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,   103,    71,    71,    72,  1353,  -312,  -312,    94,  -312,
     635,   129,  -312,  -312,  -312,  -312,  -312,  -312,   832,    36,
    -312,  -312,  -312,  -312,   101,  -312,  -312,  -312,   105,  -312,
    -312,  -312,   107,    25,  -312,   125,  -312,  -312,  -312,  -312,
    -312,  -312,   129,  -312,  -312,   -10,    46,    41,    53,    48,
     -47,    83,    -2,   -22,    11,    61,    76,  1408,  -312,    71,
    -312,  -312,    34,   102,  -312,  -312,  -312,  -312,   144,  -312,
     151,  1463,  -312,  1353,    18,  -312,   149,  -312,  -312,  -312,
    -312,   162,    68,  -312,   103,  1353,    44,  1353,   458,   120,
     168,   164,    22,   177,   103,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
     103,  -312,  -312,  -312,  -312,   103,   103,   176,    22,  -312,
     133,    29,    22,  -312,  -312,   954,  -312,   126,  -312,  -312,
    -312,    80,   148,  -312,  -312,   181,   -18,  -312,  -312,  -312,
    1353,   100,  -312,  -312,    22,  -312,  -312,  1353,  -312,  -312,
    1353,  1353,  1353,  1011,  -312,   -18,  1353,  1463,  1463,  1463,
    1463,  1463,  1463,  -312,  -312,  1463,  1463,  1463,  1463,  1463,
    1463,   103,   103,  -312,  -312,  1068,    22,  -312,   103,   186,
    -312,  -312,  -312,   954,  1463,  -312,   184,   181,  1125,  -312,
     103,    39,  -312,  -312,    22,   187,  1353,   189,   458,  -312,
      22,  -312,   173,  -312,   191,  -312,   162,   197,   198,    22,
     103,    39,   104,  -312,  -312,  -312,  -312,   954,  -312,    22,
    1182,  -312,  -312,   200,  -312,   104,   202,  -312,  -312,  -312,
    -312,   196,    22,  -312,   128,  -312,    46,    41,    53,    48,
     -47,    83,    -2,   -22,    11,    61,    76,  -312,   205,  -312,
     207,   204,  1239,  -312,  -312,  -312,  -312,  -312,   125,  -312,
     206,  -312,   209,    22,  -312,   210,    71,   104,   832,   212,
     832,  1296,   136,  1353,   173,   208,    22,   213,   103,   103,
     104,   216,  -312,    22,   220,    22,   215,  -312,  -312,  -312,
     193,   832,   181,  -312,   221,  1463,   103,   103,  -312,  -312,
     224,  -312,   103,   181,   150,  -312,  -312,  -312,   218,  -312,
    -312,   832,   227,  1353,   203,  -312,   211,   225,   230,    71,
     233,   232,   238,   103,   181,  -312,  -312,   234,   -18,   103,
     236,  -312,  -312,    22,  -312,   237,  -312,  -312,  -312,  -312,
     125,  1353,   832,  -312,   832,    27,  1353,   165,   832,  -312,
    -312,    22,  -312,   103,    71,  -312,  -312,  -312,   125,  -312,
     245,    22,   239,  -312,   635,  -312,    71,    -5,  -312,  -312,
     832,  -312,   832,  -312,  -312,   246,  -312,   -18,  -312,    22,
    -312,   241,  -312,  -312,  -312,    71,  -312,   250,  -312,  -312,
    -312
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    91,     0,     0,     0,   133,   161,     0,    74,     0,
      75,     0,     0,     0,     0,     0,   133,    85,    86,    87,
      13,    14,     0,   133,   133,   133,   155,     0,   234,   154,
     156,   256,   257,    60,   259,   260,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,   239,   218,   240,
     219,     0,   222,   223,     0,     0,   224,   221,     0,     2,
       4,   133,     8,     6,    11,    12,    53,    58,    22,   255,
       9,    54,    55,    56,     0,    51,    59,    52,     0,    57,
      93,    50,     0,    94,   113,   114,   262,   261,    96,   140,
       7,   162,   133,    10,   115,   191,   194,   196,   198,   200,
     202,   204,   206,   208,   210,   212,   214,     0,   216,     0,
     220,   248,   225,   258,   267,   242,    90,   266,     0,   255,
       0,     0,   107,     0,     0,    38,     0,   126,   127,   128,
     129,     0,   131,   130,     0,     0,     0,     0,     0,   145,
       0,     0,    62,     0,     0,   184,   185,   186,   187,   188,
     101,   181,   179,   180,   178,   102,   182,   183,   103,   135,
       0,   137,   136,   139,   138,     0,     0,     0,    62,   158,
     159,     0,   231,   233,   157,     0,   249,     0,   252,    29,
     228,   100,   148,   150,   152,    27,     0,   151,   229,   230,
       0,     0,     1,     5,     0,    23,    64,     0,    89,    92,
       0,     0,     0,     0,   109,     0,   190,     0,     0,     0,
       0,     0,     0,   176,   177,     0,     0,     0,     0,     0,
       0,     0,     0,   226,   265,     0,     0,   247,     0,     0,
     243,   244,   246,     0,     0,   264,     0,   104,     0,    39,
     119,     0,   132,    30,     0,     0,     0,     0,     0,   146,
       0,    65,     0,    61,     0,    88,     0,     0,     0,     0,
     121,     0,   125,   160,    82,   232,   250,     0,   147,     0,
       0,    28,   153,     0,   263,   125,     0,    95,    97,    98,
     108,     0,     0,   189,     0,   193,   195,   197,   199,   201,
     203,   205,   207,   209,   211,   213,   215,   217,     0,   241,
     235,     0,     0,   245,   253,   227,   112,   105,   106,   111,
       0,    33,   118,     0,   123,     0,     0,   125,     0,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,     0,
     125,    36,   120,    62,     0,     0,     0,   251,   149,   254,
      17,     0,   168,   116,   166,     0,     0,     0,    99,   238,
       0,   110,     0,   170,    32,   122,   134,    24,    83,    77,
      81,     0,     0,     0,    67,    70,    72,     0,    20,     0,
       0,     0,     0,     0,   173,    35,    25,     0,     0,     0,
       0,    76,   169,     0,   192,     0,   236,   237,    34,   172,
     171,     0,     0,    78,     0,     0,     0,     0,     0,    73,
      63,     0,   144,     0,     0,    26,    37,   175,   174,   124,
       0,     0,     0,    16,    19,   167,     0,    31,    84,    79,
       0,    66,     0,    71,    21,     0,   142,   163,   117,    62,
      18,     0,   143,    80,    68,     0,   164,     0,    15,   141,
     165
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -312,  -312,   -57,  -312,  -312,  -312,  -312,  -312,  -311,    -3,
     231,  -312,  -312,   -36,  -123,  -107,  -306,  -312,  -312,  -116,
     -45,  -312,     1,     0,  -163,  -312,  -312,  -312,  -312,  -312,
     -66,  -312,  -312,   127,  -312,  -312,  -312,  -312,  -312,   261,
    -119,    64,   -15,    87,   251,    28,  -226,   160,  -168,   -63,
    -312,    19,  -312,    13,  -232,  -312,   145,    32,  -312,  -312,
    -312,  -312,  -312,     7,  -180,  -224,   266,  -312,  -149,  -312,
    -104,  -312,  -130,  -312,  -312,   262,   263,   264,   265,  -312,
    -194,  -312,    75,    79,    81,    82,    84,    77,    78,    86,
      89,    85,    88,     2,   -89,   123,  -312,   -49,  -312,    -1,
    -312,  -312,  -155,  -312,   146,  -312
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,    59,    60,    61,    62,   380,   431,   367,    63,
     131,    64,    65,   243,   180,   300,   311,   312,   331,   332,
      66,    67,    68,   119,   254,    70,    71,    72,   397,   324,
     325,   399,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   229,   202,    84,    85,    86,    87,    88,
     410,   241,   261,   316,   336,   132,   133,   134,    89,   160,
      90,   250,   182,   183,   184,   185,    91,    92,   412,    93,
     343,   344,   354,   375,   215,   216,   217,   218,   219,   284,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   121,   108,   173,   109,   301,   303,   110,
     111,   112,   178,   113,   114,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,   126,   107,   193,    69,   262,   272,   188,   189,    69,
     136,   308,   171,   285,   140,   179,   313,   271,   223,   248,
     266,   165,   370,   371,   377,   282,   237,   244,   172,   200,
     169,   170,   223,   420,     1,    33,   333,   256,     4,  -100,
     385,   225,   201,   340,   213,   314,   388,   135,   142,   214,
     145,   181,   146,   257,   137,   166,   138,   168,   258,     8,
      69,    10,   107,   139,   224,   195,   120,   124,    69,    54,
     206,   226,   201,   207,   201,    33,   201,   190,   304,   141,
       4,   143,   227,   315,   174,   357,   150,   147,   148,   149,
     424,   155,   208,   194,   192,   156,   157,   425,   372,   238,
     177,   158,   129,   130,   313,   313,   197,    47,   198,    49,
     199,   232,   337,   204,   297,   298,   150,   196,   150,   191,
     150,   155,   313,   155,   205,   155,   264,   390,   313,   321,
     259,   158,   203,   158,   181,   158,   209,   228,   278,   279,
     230,   210,   253,   220,   181,   305,    26,   212,   408,   333,
     234,   384,    29,    30,   211,   221,    33,   235,   233,   239,
     181,   127,   128,   129,   130,   181,   181,   240,   253,   249,
     374,   251,   172,   252,   382,   151,   152,   153,   154,   313,
     255,   260,   263,   228,   267,   269,   181,   236,   270,   274,
      54,   302,   306,   318,   275,   320,   323,   187,   411,   245,
     326,   247,   328,   329,   237,   181,   339,   335,   341,   345,
     346,   347,   348,   352,   351,   359,   355,   363,   366,   369,
     373,   181,   181,   376,   378,   383,   299,   396,   181,   379,
     387,   391,   392,   394,   401,   400,   398,   403,   404,   177,
     181,   405,   409,   416,   317,   414,   422,   411,   427,   429,
     322,   438,   435,   440,   273,   167,   413,   406,   365,   330,
     181,   276,   116,   246,   277,   307,   437,   281,   268,   181,
     283,   356,   231,   159,   334,   327,   338,   242,   436,   415,
     187,   428,   342,   286,   161,   162,   163,   164,   287,   124,
     187,   288,   291,   289,   292,   265,   290,   177,   386,     0,
       0,     0,   310,   293,   295,     0,   187,   294,   296,     0,
     319,   187,   187,   353,     0,     0,     0,   186,    69,   358,
      69,   360,     0,     0,   402,     0,   368,     0,   181,   181,
       0,   177,   187,   253,   281,   368,   204,     0,     0,     0,
       0,    69,   381,   179,     0,     0,   181,   181,   395,     0,
       0,   187,   181,     0,     0,     0,     0,   430,     0,   426,
       0,    69,   393,     0,     0,     0,   350,   187,   187,     0,
       0,   432,     0,   181,   187,     0,   417,     0,   181,   181,
       0,   389,     0,   342,     0,   362,   187,   364,     0,     0,
     439,     0,    69,   418,    69,   419,     0,     0,    69,   423,
     186,   368,   407,   181,     0,     0,   187,     0,     0,     0,
     186,   353,     0,     0,    69,     0,   107,     0,   204,   434,
      69,   433,    69,     0,     0,     0,   186,   181,     0,   253,
       0,   186,   186,     0,     0,     0,   204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     421,     1,     0,     2,     0,     3,     0,     0,     0,     0,
       6,     0,     0,     0,   187,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   186,   186,     0,
       0,     0,   187,   187,   186,     0,     0,     0,   187,     0,
       0,    26,     0,     0,    28,     0,   186,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,     0,   187,
       2,     0,     3,   122,   187,   187,   186,     6,     0,     0,
       0,    47,    48,    49,    50,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     0,     0,   187,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    28,    56,    57,    29,    30,    31,    32,    33,    34,
      35,    36,     0,   187,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
      49,    50,     0,     0,   186,   186,   123,     0,     0,    51,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,   186,   186,     0,     0,     0,     0,   186,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,   186,
       2,     0,     3,     0,     4,   186,     5,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,    15,     0,     0,
       0,    16,    17,    18,    19,    20,    21,     0,     0,   186,
       0,     0,     0,    22,    23,    24,     0,    25,    26,     0,
      27,    28,     0,     0,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,     0,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,     0,     0,     0,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,    51,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,     1,     0,     2,     0,     3,     0,     4,   125,     0,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,     0,     0,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,    28,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,     0,     0,
       0,    47,    48,    49,    50,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
       0,     4,    56,    57,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,    28,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,     0,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,     2,   117,     3,    47,    48,    49,    50,     6,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,     0,     0,
      26,     0,     0,    28,     0,   118,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,     0,     0,     0,     2,
       0,     3,     0,     0,     0,     0,     6,     0,     0,     0,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      28,    56,    57,    29,    30,    31,    32,    33,    34,    35,
      36,   175,     0,   176,     0,     0,     2,     0,     3,   280,
       0,     0,     0,     6,     0,     0,     0,    47,    48,    49,
      50,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,    28,    56,    57,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       6,     0,     0,     0,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    28,    56,    57,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,     0,     0,
       2,     0,     3,   309,     0,     0,     0,     6,     0,     0,
       0,    47,    48,    49,    50,     0,     0,     0,     0,   123,
       0,     0,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    28,    56,    57,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     2,     0,     3,
     122,     0,     0,     0,     6,     0,     0,     0,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,    51,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    28,    56,
      57,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,     0,     0,     0,     2,   349,     3,     0,     0,     0,
       0,     6,     0,     0,     0,    47,    48,    49,    50,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,    28,    56,    57,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     2,   361,     3,     0,     0,     0,     0,     6,     0,
       0,     0,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    28,    56,    57,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,     0,     0,     6,     0,     0,     0,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    28,
      56,    57,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,     0,     0,     0,     0,   222,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    56,    57,    31,
      32,    33,    34,    35,    36,     0,     0,     0,     2,     0,
       3,     0,     0,     0,     0,     0,   144,     0,     0,     0,
       0,    47,    48,    49,    50,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     0,     0,     0,
       0,   145,    47,   146,    49,   147,   148,   149,     0,    28,
       0,     0,    56,    57,    31,    32,    33,    34,    35,    36,
     150,   151,   152,   153,   154,   155,   156,   157,     0,     0,
       0,     0,     0,     0,     0,   158,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57
};

static const yytype_int16 yycheck[] =
{
       0,     4,     0,    60,     4,   168,   186,    52,    53,     9,
       9,   237,    27,   207,    14,    51,   240,   185,   107,   138,
     175,    22,   328,   329,   335,   205,     8,   134,    28,     4,
      49,    50,   121,     6,     3,    53,   260,   144,     9,     5,
     346,     7,    47,   275,    91,     6,   352,     5,    16,    96,
      72,    51,    74,   160,     5,    23,     5,    25,   165,    15,
      60,    17,    60,     5,   109,    68,     2,     3,    68,    87,
      80,    37,    47,    83,    47,    53,    47,     5,   233,    15,
       9,    17,    48,    44,    49,   317,    91,    76,    77,    78,
     401,    96,   102,    61,     0,    97,    98,   403,   330,    81,
      36,   106,    34,    35,   328,   329,     5,    73,     3,    75,
       3,   112,   267,    85,   221,   222,    91,    81,    91,    55,
      91,    96,   346,    96,    92,    96,   171,   353,   352,   248,
     166,   106,     7,   106,   134,   106,    90,   103,   201,   202,
     112,   100,   142,    82,   144,   234,    43,    99,   374,   373,
       6,   345,    49,    50,   101,    79,    53,     6,    56,    10,
     160,    32,    33,    34,    35,   165,   166,     5,   168,    49,
     333,     3,   172,     9,   342,    92,    93,    94,    95,   403,
       3,     5,    49,   103,    58,    37,   186,   123,     7,    89,
      87,     5,     8,     6,   194,     6,    23,    51,   378,   135,
       9,   137,     5,     5,     8,   205,     6,   103,     6,    81,
       5,     4,     8,     4,     8,     3,     6,    81,    10,     6,
       4,   221,   222,     3,     9,     4,   226,    24,   228,    36,
       6,    81,    14,     6,     4,    10,    25,     4,     6,   175,
     240,     3,     8,     6,   244,     9,    81,   427,     3,    10,
     250,    10,     6,     3,   190,    24,   379,   373,   324,   259,
     260,   197,     1,   136,   200,   237,   429,   203,   181,   269,
     206,   316,   112,    22,   261,   256,   269,   132,   427,   383,
     134,   411,   282,   208,    22,    22,    22,    22,   209,   225,
     144,   210,   215,   211,   216,   172,   212,   233,   347,    -1,
      -1,    -1,   238,   217,   219,    -1,   160,   218,   220,    -1,
     246,   165,   166,   313,    -1,    -1,    -1,    51,   318,   318,
     320,   320,    -1,    -1,   369,    -1,   326,    -1,   328,   329,
      -1,   267,   186,   333,   270,   335,   308,    -1,    -1,    -1,
      -1,   341,   341,   379,    -1,    -1,   346,   347,   363,    -1,
      -1,   205,   352,    -1,    -1,    -1,    -1,   414,    -1,   404,
      -1,   361,   361,    -1,    -1,    -1,   302,   221,   222,    -1,
      -1,   416,    -1,   373,   228,    -1,   391,    -1,   378,   379,
      -1,   353,    -1,   383,    -1,   321,   240,   323,    -1,    -1,
     435,    -1,   392,   392,   394,   394,    -1,    -1,   398,   398,
     134,   401,   374,   403,    -1,    -1,   260,    -1,    -1,    -1,
     144,   411,    -1,    -1,   414,    -1,   414,    -1,   390,   422,
     420,   420,   422,    -1,    -1,    -1,   160,   427,    -1,   429,
      -1,   165,   166,    -1,    -1,    -1,   408,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     396,     3,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,   328,   329,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,
      -1,    -1,   346,   347,   228,    -1,    -1,    -1,   352,    -1,
      -1,    43,    -1,    -1,    46,    -1,   240,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,   373,
       5,    -1,     7,     8,   378,   379,   260,    12,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    -1,    -1,   403,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,   104,   105,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,   427,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,   328,   329,    81,    -1,    -1,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   346,   347,    -1,    -1,    -1,    -1,   352,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   373,
       5,    -1,     7,    -1,     9,   379,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    -1,    -1,   403,
      -1,    -1,    -1,    38,    39,    40,    -1,    42,    43,    -1,
      45,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,     3,    -1,     5,    -1,     7,    -1,     9,    10,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
      -1,     9,   104,   105,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,     5,     6,     7,    73,    74,    75,    76,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,
      43,    -1,    -1,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      46,   104,   105,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    -1,    -1,     5,    -1,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,   104,   105,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    46,   104,   105,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,   104,   105,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,   104,
     105,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    46,   104,   105,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,   104,   105,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,
     104,   105,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,   104,   105,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    -1,    46,
      -1,    -1,   104,   105,    51,    52,    53,    54,    55,    56,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    26,    27,    28,    29,
      30,    31,    38,    39,    40,    42,    43,    45,    46,    49,
      50,    51,    52,    53,    54,    55,    56,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    73,    74,    75,
      76,    84,    85,    86,    87,    88,   104,   105,   111,   112,
     113,   114,   115,   119,   121,   122,   130,   131,   132,   133,
     135,   136,   137,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   155,   156,   157,   158,   159,   168,
     170,   176,   177,   179,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   206,
     209,   210,   211,   213,   214,   215,   149,     6,    48,   133,
     151,   203,     8,    81,   151,    10,   119,    32,    33,    34,
      35,   120,   165,   166,   167,     5,   132,     5,     5,     5,
     133,   151,   167,   151,    47,    72,    74,    76,    77,    78,
      91,    92,    93,    94,    95,    96,    97,    98,   106,   154,
     169,   185,   186,   187,   188,   209,   167,   120,   167,    49,
      50,   152,   133,   205,    49,    57,    59,   151,   212,   123,
     124,   133,   172,   173,   174,   175,   176,   214,   130,   130,
       5,   151,     0,   112,   167,   119,    81,     5,     3,     3,
       4,    47,   154,     7,   155,   167,    80,    83,   102,    90,
     100,   101,    99,    91,    96,   184,   185,   186,   187,   188,
      82,    79,    38,   204,   130,     7,    37,    48,   103,   153,
     155,   157,   209,    56,     6,     6,   151,     8,    81,    10,
       5,   161,   166,   123,   125,   151,   143,   151,   150,    49,
     171,     3,     9,   133,   134,     3,   125,   125,   125,   123,
       5,   162,   134,    49,   130,   205,   212,    58,   153,    37,
       7,   158,   174,   151,    89,   133,   151,   151,   159,   159,
       8,   151,   174,   151,   189,   190,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   125,   125,   133,
     125,   207,     5,   208,   212,   204,     8,   155,   156,     8,
     151,   126,   127,   175,     6,    44,   163,   133,     6,   151,
       6,   150,   133,    23,   139,   140,     9,   161,     5,     5,
     133,   128,   129,   175,   163,   103,   164,   212,   173,     6,
     164,     6,   133,   180,   181,    81,     5,     4,     8,     6,
     151,     8,     4,   133,   182,     6,   130,   164,   132,     3,
     132,     6,   151,    81,   151,   140,    10,   118,   133,     6,
     126,   126,   164,     4,   134,   183,     3,   118,     9,    36,
     116,   132,   158,     4,   190,   126,   207,     6,   126,   155,
     156,    81,    14,   132,     6,   152,    24,   138,    25,   141,
      10,     4,   130,     4,     6,     3,   129,   155,   156,     8,
     160,   174,   178,   124,     9,   180,     6,   152,   132,   132,
       6,   151,    81,   132,   118,   126,   130,     3,   182,    10,
     112,   117,   130,   132,   119,     6,   178,   134,    10,   130,
       3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   112,   113,   113,   113,   113,
     113,   113,   113,   114,   114,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   121,   122,   123,   123,   124,
     125,   126,   126,   127,   127,   128,   129,   129,   130,   130,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     133,   134,   134,   135,   136,   137,   138,   138,   139,   140,
     140,   141,   141,   142,   143,   143,   144,   144,   144,   144,
     144,   144,   145,   146,   146,   147,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   152,   153,
     153,   154,   154,   154,   155,   155,   155,   156,   156,   156,
     157,   157,   157,   158,   158,   159,   159,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   165,   165,   166,   166,
     167,   167,   167,   167,   168,   169,   169,   169,   169,   169,
     170,   170,   170,   170,   170,   171,   171,   172,   173,   173,
     174,   174,   175,   175,   176,   176,   176,   176,   176,   176,
     176,   177,   177,   178,   178,   179,   180,   180,   181,   181,
     182,   182,   182,   183,   183,   183,   184,   184,   185,   185,
     185,   185,   186,   186,   187,   187,   188,   188,   188,   189,
     189,   190,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   199,   200,   200,   201,   201,   202,   202,   203,   203,
     203,   203,   203,   203,   203,   204,   204,   204,   204,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   210,   211,   211,   211,   211,   211,   211,   211,   212,
     212,   212,   213,   213,   214,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     5,     6,     1,     2,     1,
       1,     4,     2,     1,     3,     2,     1,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     2,     3,     2,     0,     5,     1,
       2,     2,     0,     6,     1,     1,     5,     5,     6,     7,
       8,     5,     3,     5,     7,     1,     1,     1,     3,     2,
       2,     1,     2,     1,     1,     3,     1,     3,     3,     3,
       0,     1,     1,     1,     3,     4,     4,     2,     3,     2,
       5,     4,     4,     1,     1,     1,     4,     2,     2,     1,
       2,     1,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     2,     0,     5,     1,     1,     1,     1,     1,
       1,     9,     7,     7,     6,     0,     1,     2,     1,     3,
       1,     1,     1,     2,     1,     1,     1,     2,     2,     2,
       3,     1,     1,     2,     3,     9,     1,     3,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     5,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     2,     2,
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
    case 112: /* ast  */
#line 137 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1991 "src/parser.c"
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
/* The lookahead symbol.  */
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
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
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

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;


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
  case 2:
#line 140 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2307 "src/parser.c"
    break;

  case 3:
#line 141 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2313 "src/parser.c"
    break;

  case 4:
#line 144 "src/gwion.y"
            { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2319 "src/parser.c"
    break;

  case 5:
#line 145 "src/gwion.y"
                { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)) : new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2325 "src/parser.c"
    break;

  case 6:
#line 149 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2331 "src/parser.c"
    break;

  case 7:
#line 150 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2337 "src/parser.c"
    break;

  case 8:
#line 151 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2343 "src/parser.c"
    break;

  case 9:
#line 152 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2349 "src/parser.c"
    break;

  case 10:
#line 153 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2355 "src/parser.c"
    break;

  case 11:
#line 154 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2361 "src/parser.c"
    break;

  case 12:
#line 155 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2367 "src/parser.c"
    break;

  case 13:
#line 158 "src/gwion.y"
                  { (yyval.flag) = ae_flag_none; }
#line 2373 "src/parser.c"
    break;

  case 14:
#line 158 "src/gwion.y"
                                                  { (yyval.flag) = ae_flag_struct; }
#line 2379 "src/parser.c"
    break;

  case 15:
#line 161 "src/gwion.y"
    {
      if((yyvsp[-7].flag) == ae_flag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
  }
#line 2391 "src/parser.c"
    break;

  case 16:
#line 169 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2397 "src/parser.c"
    break;

  case 17:
#line 169 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2403 "src/parser.c"
    break;

  case 19:
#line 171 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2409 "src/parser.c"
    break;

  case 20:
#line 173 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2415 "src/parser.c"
    break;

  case 21:
#line 173 "src/gwion.y"
                                                                                    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2421 "src/parser.c"
    break;

  case 22:
#line 175 "src/gwion.y"
                { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2427 "src/parser.c"
    break;

  case 23:
#line 175 "src/gwion.y"
                                                                              { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2433 "src/parser.c"
    break;

  case 24:
#line 177 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->flag |= ae_flag_template; (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2440 "src/parser.c"
    break;

  case 25:
#line 180 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->flag |= (yyvsp[-1].flag);
  if((yyvsp[-3].func_base)->td->array && (yyvsp[-3].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base), ae_flag_none);
}
#line 2454 "src/parser.c"
    break;

  case 26:
#line 189 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2465 "src/parser.c"
    break;

  case 28:
#line 196 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2471 "src/parser.c"
    break;

  case 29:
#line 198 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2479 "src/parser.c"
    break;

  case 30:
#line 202 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2487 "src/parser.c"
    break;

  case 31:
#line 207 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2493 "src/parser.c"
    break;

  case 32:
#line 208 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2499 "src/parser.c"
    break;

  case 33:
#line 210 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2505 "src/parser.c"
    break;

  case 34:
#line 211 "src/gwion.y"
                        {
     Arg_List last = (yyvsp[-2].arg_list);
     while(last->next)
       last = last->next;
     if(last->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
     last->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 2518 "src/parser.c"
    break;

  case 35:
#line 220 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2524 "src/parser.c"
    break;

  case 36:
#line 221 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2530 "src/parser.c"
    break;

  case 37:
#line 221 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2540 "src/parser.c"
    break;

  case 38:
#line 228 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2546 "src/parser.c"
    break;

  case 39:
#line 229 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2552 "src/parser.c"
    break;

  case 40:
#line 233 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2558 "src/parser.c"
    break;

  case 41:
#line 234 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2564 "src/parser.c"
    break;

  case 42:
#line 235 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2570 "src/parser.c"
    break;

  case 43:
#line 236 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2576 "src/parser.c"
    break;

  case 44:
#line 237 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2582 "src/parser.c"
    break;

  case 45:
#line 238 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2588 "src/parser.c"
    break;

  case 46:
#line 239 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2594 "src/parser.c"
    break;

  case 47:
#line 240 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2600 "src/parser.c"
    break;

  case 48:
#line 241 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2606 "src/parser.c"
    break;

  case 49:
#line 242 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2612 "src/parser.c"
    break;

  case 60:
#line 258 "src/gwion.y"
       { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2618 "src/parser.c"
    break;

  case 62:
#line 260 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2624 "src/parser.c"
    break;

  case 63:
#line 263 "src/gwion.y"
                                              { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-4].flag); }
#line 2631 "src/parser.c"
    break;

  case 64:
#line 266 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2637 "src/parser.c"
    break;

  case 65:
#line 268 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2643 "src/parser.c"
    break;

  case 66:
#line 270 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2649 "src/parser.c"
    break;

  case 67:
#line 270 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2655 "src/parser.c"
    break;

  case 68:
#line 273 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2666 "src/parser.c"
    break;

  case 69:
#line 281 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2672 "src/parser.c"
    break;

  case 70:
#line 282 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2678 "src/parser.c"
    break;

  case 71:
#line 284 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2684 "src/parser.c"
    break;

  case 72:
#line 284 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2690 "src/parser.c"
    break;

  case 73:
#line 286 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2701 "src/parser.c"
    break;

  case 74:
#line 294 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2707 "src/parser.c"
    break;

  case 75:
#line 295 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2713 "src/parser.c"
    break;

  case 76:
#line 299 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2719 "src/parser.c"
    break;

  case 77:
#line 301 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2725 "src/parser.c"
    break;

  case 78:
#line 303 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2731 "src/parser.c"
    break;

  case 79:
#line 305 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2737 "src/parser.c"
    break;

  case 80:
#line 307 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_each.is_ptr = (yyvsp[-5].ival); }
#line 2743 "src/parser.c"
    break;

  case 81:
#line 309 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2749 "src/parser.c"
    break;

  case 82:
#line 312 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt)); }
#line 2755 "src/parser.c"
    break;

  case 83:
#line 316 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2761 "src/parser.c"
    break;

  case 84:
#line 318 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2767 "src/parser.c"
    break;

  case 85:
#line 322 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2773 "src/parser.c"
    break;

  case 86:
#line 323 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2779 "src/parser.c"
    break;

  case 87:
#line 324 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2785 "src/parser.c"
    break;

  case 88:
#line 327 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2791 "src/parser.c"
    break;

  case 89:
#line 328 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2797 "src/parser.c"
    break;

  case 90:
#line 331 "src/gwion.y"
                               { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2803 "src/parser.c"
    break;

  case 91:
#line 331 "src/gwion.y"
                                                        { (yyval.stmt) = NULL; }
#line 2809 "src/parser.c"
    break;

  case 92:
#line 334 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2815 "src/parser.c"
    break;

  case 93:
#line 335 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2821 "src/parser.c"
    break;

  case 95:
#line 338 "src/gwion.y"
                                        { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2827 "src/parser.c"
    break;

  case 97:
#line 342 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2833 "src/parser.c"
    break;

  case 98:
#line 343 "src/gwion.y"
                               { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2839 "src/parser.c"
    break;

  case 99:
#line 345 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2845 "src/parser.c"
    break;

  case 100:
#line 345 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2851 "src/parser.c"
    break;

  case 104:
#line 350 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2857 "src/parser.c"
    break;

  case 105:
#line 351 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2863 "src/parser.c"
    break;

  case 106:
#line 352 "src/gwion.y"
                                  { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2869 "src/parser.c"
    break;

  case 107:
#line 356 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2875 "src/parser.c"
    break;

  case 108:
#line 357 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2881 "src/parser.c"
    break;

  case 109:
#line 358 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2887 "src/parser.c"
    break;

  case 110:
#line 362 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2893 "src/parser.c"
    break;

  case 111:
#line 363 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2899 "src/parser.c"
    break;

  case 112:
#line 364 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2905 "src/parser.c"
    break;

  case 116:
#line 370 "src/gwion.y"
                                                        { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2911 "src/parser.c"
    break;

  case 117:
#line 372 "src/gwion.y"
                                     { (yyvsp[-1].type_decl)->flag |= ae_flag_ref; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2917 "src/parser.c"
    break;

  case 118:
#line 374 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2923 "src/parser.c"
    break;

  case 119:
#line 374 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2929 "src/parser.c"
    break;

  case 120:
#line 375 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2935 "src/parser.c"
    break;

  case 121:
#line 375 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2941 "src/parser.c"
    break;

  case 122:
#line 376 "src/gwion.y"
                         { (yyval.flag) = ae_flag_variadic; }
#line 2947 "src/parser.c"
    break;

  case 123:
#line 376 "src/gwion.y"
                                                            { (yyval.flag) = 0; }
#line 2953 "src/parser.c"
    break;

  case 124:
#line 378 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2959 "src/parser.c"
    break;

  case 125:
#line 378 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2965 "src/parser.c"
    break;

  case 126:
#line 380 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2971 "src/parser.c"
    break;

  case 127:
#line 381 "src/gwion.y"
           { (yyval.flag) = ae_flag_global; }
#line 2977 "src/parser.c"
    break;

  case 128:
#line 384 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2983 "src/parser.c"
    break;

  case 129:
#line 385 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2989 "src/parser.c"
    break;

  case 130:
#line 388 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2995 "src/parser.c"
    break;

  case 131:
#line 389 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3001 "src/parser.c"
    break;

  case 132:
#line 390 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3007 "src/parser.c"
    break;

  case 133:
#line 391 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3013 "src/parser.c"
    break;

  case 134:
#line 395 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->flag |= (yyvsp[-1].flag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc)));
  }
#line 3023 "src/parser.c"
    break;

  case 141:
#line 406 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list), ae_flag_op), (yyvsp[0].stmt), GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 3029 "src/parser.c"
    break;

  case 142:
#line 408 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list), ae_flag_op), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3035 "src/parser.c"
    break;

  case 143:
#line 410 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list), ae_flag_op | ae_flag_unary), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3041 "src/parser.c"
    break;

  case 144:
#line 412 "src/gwion.y"
    {
 (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_op | ae_flag_typedef), (yyvsp[0].stmt), GET_LOC(&(yyloc)));
    }
#line 3049 "src/parser.c"
    break;

  case 145:
#line 416 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 3055 "src/parser.c"
    break;

  case 146:
#line 416 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 3061 "src/parser.c"
    break;

  case 147:
#line 419 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), GET_LOC(&(yyloc))); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3067 "src/parser.c"
    break;

  case 149:
#line 424 "src/gwion.y"
                                      { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3073 "src/parser.c"
    break;

  case 150:
#line 428 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3079 "src/parser.c"
    break;

  case 151:
#line 429 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3085 "src/parser.c"
    break;

  case 153:
#line 432 "src/gwion.y"
                                                              { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3091 "src/parser.c"
    break;

  case 154:
#line 435 "src/gwion.y"
        { (yyval.flag) = ae_flag_ref; }
#line 3097 "src/parser.c"
    break;

  case 155:
#line 436 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 3103 "src/parser.c"
    break;

  case 156:
#line 437 "src/gwion.y"
            { (yyval.flag) = ae_flag_nonnull; }
#line 3109 "src/parser.c"
    break;

  case 157:
#line 438 "src/gwion.y"
                { (yyval.flag) = ae_flag_nonnull | ae_flag_ref; }
#line 3115 "src/parser.c"
    break;

  case 158:
#line 439 "src/gwion.y"
               { (yyval.flag) = ae_flag_const | ae_flag_ref; }
#line 3121 "src/parser.c"
    break;

  case 159:
#line 440 "src/gwion.y"
                   { (yyval.flag) = ae_flag_const | ae_flag_nonnull; }
#line 3127 "src/parser.c"
    break;

  case 160:
#line 441 "src/gwion.y"
                       { (yyval.flag) = ae_flag_const | ae_flag_nonnull | ae_flag_ref; }
#line 3133 "src/parser.c"
    break;

  case 161:
#line 443 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3139 "src/parser.c"
    break;

  case 163:
#line 445 "src/gwion.y"
                               { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 3145 "src/parser.c"
    break;

  case 164:
#line 446 "src/gwion.y"
                                  { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 3151 "src/parser.c"
    break;

  case 165:
#line 449 "src/gwion.y"
                                                                             {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-3].decl_list), GET_LOC(&(yyloc)));
      (yyval.union_def)->type_xid = (yyvsp[-6].sym);
      (yyval.union_def)->xid = (yyvsp[-1].sym);
      (yyval.union_def)->flag = (yyvsp[-7].flag);
      if((yyvsp[-5].id_list)) {
        if(!(yyvsp[-6].sym)) {
          gwion_error(&(yyloc), arg, _("Template unions requires type name\n"));
          YYERROR;
        }
        if((yyvsp[-1].sym)) {
          gwion_error(&(yyloc), arg, _("Can't instantiate template union types at declaration site.\n"));
          YYERROR;
        }
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].id_list));
      }
    }
#line 3173 "src/parser.c"
    break;

  case 166:
#line 469 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3179 "src/parser.c"
    break;

  case 167:
#line 470 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3185 "src/parser.c"
    break;

  case 168:
#line 473 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3191 "src/parser.c"
    break;

  case 169:
#line 474 "src/gwion.y"
                { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3197 "src/parser.c"
    break;

  case 170:
#line 476 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3203 "src/parser.c"
    break;

  case 171:
#line 477 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3209 "src/parser.c"
    break;

  case 172:
#line 478 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3215 "src/parser.c"
    break;

  case 173:
#line 479 "src/gwion.y"
                      { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3221 "src/parser.c"
    break;

  case 174:
#line 480 "src/gwion.y"
                       { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3227 "src/parser.c"
    break;

  case 175:
#line 481 "src/gwion.y"
                     { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3233 "src/parser.c"
    break;

  case 190:
#line 489 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 3239 "src/parser.c"
    break;

  case 192:
#line 492 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3245 "src/parser.c"
    break;

  case 193:
#line 494 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 3251 "src/parser.c"
    break;

  case 195:
#line 496 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3257 "src/parser.c"
    break;

  case 197:
#line 497 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3263 "src/parser.c"
    break;

  case 199:
#line 498 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3269 "src/parser.c"
    break;

  case 201:
#line 499 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3275 "src/parser.c"
    break;

  case 203:
#line 500 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3281 "src/parser.c"
    break;

  case 205:
#line 501 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3287 "src/parser.c"
    break;

  case 207:
#line 502 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3293 "src/parser.c"
    break;

  case 209:
#line 503 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3299 "src/parser.c"
    break;

  case 211:
#line 504 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3305 "src/parser.c"
    break;

  case 213:
#line 505 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3311 "src/parser.c"
    break;

  case 215:
#line 506 "src/gwion.y"
                                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3317 "src/parser.c"
    break;

  case 217:
#line 509 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3323 "src/parser.c"
    break;

  case 226:
#line 516 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3329 "src/parser.c"
    break;

  case 227:
#line 517 "src/gwion.y"
                                   { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].exp)); }
#line 3335 "src/parser.c"
    break;

  case 228:
#line 518 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3341 "src/parser.c"
    break;

  case 229:
#line 519 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3347 "src/parser.c"
    break;

  case 230:
#line 520 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3353 "src/parser.c"
    break;

  case 231:
#line 523 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3359 "src/parser.c"
    break;

  case 232:
#line 524 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3365 "src/parser.c"
    break;

  case 233:
#line 525 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3371 "src/parser.c"
    break;

  case 234:
#line 525 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3377 "src/parser.c"
    break;

  case 235:
#line 528 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3383 "src/parser.c"
    break;

  case 236:
#line 529 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3389 "src/parser.c"
    break;

  case 237:
#line 532 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3395 "src/parser.c"
    break;

  case 238:
#line 532 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3401 "src/parser.c"
    break;

  case 241:
#line 536 "src/gwion.y"
                         { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3407 "src/parser.c"
    break;

  case 243:
#line 539 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3413 "src/parser.c"
    break;

  case 244:
#line 541 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range)); }
#line 3419 "src/parser.c"
    break;

  case 245:
#line 543 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3426 "src/parser.c"
    break;

  case 246:
#line 546 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3432 "src/parser.c"
    break;

  case 247:
#line 548 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3438 "src/parser.c"
    break;

  case 248:
#line 549 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3444 "src/parser.c"
    break;

  case 249:
#line 553 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3450 "src/parser.c"
    break;

  case 250:
#line 554 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), GET_LOC(&(yyloc))); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3456 "src/parser.c"
    break;

  case 251:
#line 555 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3462 "src/parser.c"
    break;

  case 252:
#line 557 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3468 "src/parser.c"
    break;

  case 253:
#line 558 "src/gwion.y"
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
#line 3483 "src/parser.c"
    break;

  case 254:
#line 569 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3489 "src/parser.c"
    break;

  case 255:
#line 572 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3495 "src/parser.c"
    break;

  case 256:
#line 573 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3501 "src/parser.c"
    break;

  case 257:
#line 574 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3507 "src/parser.c"
    break;

  case 258:
#line 575 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp)); }
#line 3513 "src/parser.c"
    break;

  case 259:
#line 576 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3519 "src/parser.c"
    break;

  case 260:
#line 577 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3525 "src/parser.c"
    break;

  case 261:
#line 578 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3531 "src/parser.c"
    break;

  case 262:
#line 579 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3537 "src/parser.c"
    break;

  case 263:
#line 580 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3543 "src/parser.c"
    break;

  case 264:
#line 581 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3549 "src/parser.c"
    break;

  case 265:
#line 582 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3555 "src/parser.c"
    break;

  case 266:
#line 583 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3561 "src/parser.c"
    break;

  case 267:
#line 584 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3567 "src/parser.c"
    break;


#line 3571 "src/parser.c"

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
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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

#line 586 "src/gwion.y"

