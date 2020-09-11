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
    IF = 267,                      /* "if"  */
    ELSE = 268,                    /* "else"  */
    WHILE = 269,                   /* "while"  */
    DO = 270,                      /* "do"  */
    UNTIL = 271,                   /* "until"  */
    LOOP = 272,                    /* "repeat"  */
    FOR = 273,                     /* "for"  */
    FOREACH = 274,                 /* "foreach"  */
    GOTO = 275,                    /* "goto"  */
    MATCH = 276,                   /* "match"  */
    CASE = 277,                    /* "case"  */
    WHEN = 278,                    /* "when"  */
    WHERE = 279,                   /* "where"  */
    ENUM = 280,                    /* "enum"  */
    TRETURN = 281,                 /* "return"  */
    BREAK = 282,                   /* "break"  */
    CONTINUE = 283,                /* "continue"  */
    CLASS = 284,                   /* "class"  */
    STRUCT = 285,                  /* "struct"  */
    STATIC = 286,                  /* "static"  */
    GLOBAL = 287,                  /* "global"  */
    PRIVATE = 288,                 /* "private"  */
    PROTECT = 289,                 /* "protect"  */
    EXTENDS = 290,                 /* "extends"  */
    DOT = 291,                     /* "."  */
    OPERATOR = 292,                /* "operator"  */
    TYPEDEF = 293,                 /* "typedef"  */
    NOELSE = 294,                  /* NOELSE  */
    UNION = 295,                   /* "union"  */
    CONSTT = 296,                  /* "const"  */
    PASTE = 297,                   /* "##"  */
    ELLIPSE = 298,                 /* "..."  */
    VARLOOP = 299,                 /* "varloop"  */
    RARROW = 300,                  /* "->"  */
    BACKSLASH = 301,               /* "\\"  */
    BACKTICK = 302,                /* "`"  */
    OPID = 303,                    /* OPID  */
    REF = 304,                     /* "ref"  */
    NONNULL = 305,                 /* "nonnull"  */
    NUM = 306,                     /* "<integer>"  */
    FLOATT = 307,                  /* FLOATT  */
    ID = 308,                      /* "<identifier>"  */
    STRING_LIT = 309,              /* "<litteral string>"  */
    CHAR_LIT = 310,                /* "<litteral char>"  */
    INTERP_LIT = 311,              /* "<interp string>"  */
    INTERP_EXP = 312,              /* INTERP_EXP  */
    PP_COMMENT = 313,              /* "<comment>"  */
    PP_INCLUDE = 314,              /* "#include"  */
    PP_DEFINE = 315,               /* "#define"  */
    PP_PRAGMA = 316,               /* "#pragma"  */
    PP_UNDEF = 317,                /* "#undef"  */
    PP_IFDEF = 318,                /* "#ifdef"  */
    PP_IFNDEF = 319,               /* "#ifndef"  */
    PP_ELSE = 320,                 /* "#else"  */
    PP_ENDIF = 321,                /* "#if"  */
    PP_NL = 322,                   /* "\n"  */
    PLUS = 324,                    /* "+"  */
    PLUSPLUS = 325,                /* "++"  */
    MINUS = 326,                   /* "-"  */
    MINUSMINUS = 327,              /* "--"  */
    TIMES = 328,                   /* "*"  */
    DIVIDE = 329,                  /* "/"  */
    PERCENT = 330,                 /* "%"  */
    DOLLAR = 331,                  /* "$"  */
    QUESTION = 332,                /* "?"  */
    COLON = 333,                   /* ":"  */
    COLONCOLON = 334,              /* "::"  */
    QUESTIONCOLON = 335,           /* "?:"  */
    NEW = 336,                     /* "new"  */
    SPORK = 337,                   /* "spork"  */
    FORK = 338,                    /* "fork"  */
    TYPEOF = 339,                  /* "typeof"  */
    L_HACK = 340,                  /* "<<<"  */
    R_HACK = 341,                  /* ">>>"  */
    AND = 342,                     /* "&&"  */
    EQ = 343,                      /* "=="  */
    GE = 344,                      /* ">="  */
    GT = 345,                      /* ">"  */
    LE = 346,                      /* "<="  */
    LT = 347,                      /* "<"  */
    NEQ = 348,                     /* "!="  */
    SHIFT_LEFT = 349,              /* "<<"  */
    SHIFT_RIGHT = 350,             /* ">>"  */
    S_AND = 351,                   /* "&"  */
    S_OR = 352,                    /* "|"  */
    S_XOR = 353,                   /* "^"  */
    OR = 354,                      /* "||"  */
    LTMPL = 355,                   /* "<~"  */
    RTMPL = 356,                   /* "~>"  */
    TILDA = 357,                   /* "~"  */
    EXCLAMATION = 358,             /* "!"  */
    DYNOP = 359,                   /* "<dynamic_operator>"  */
    UMINUS = 360,                  /* UMINUS  */
    UTIMES = 361                   /* UTIMES  */
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
#define IF 267
#define ELSE 268
#define WHILE 269
#define DO 270
#define UNTIL 271
#define LOOP 272
#define FOR 273
#define FOREACH 274
#define GOTO 275
#define MATCH 276
#define CASE 277
#define WHEN 278
#define WHERE 279
#define ENUM 280
#define TRETURN 281
#define BREAK 282
#define CONTINUE 283
#define CLASS 284
#define STRUCT 285
#define STATIC 286
#define GLOBAL 287
#define PRIVATE 288
#define PROTECT 289
#define EXTENDS 290
#define DOT 291
#define OPERATOR 292
#define TYPEDEF 293
#define NOELSE 294
#define UNION 295
#define CONSTT 296
#define PASTE 297
#define ELLIPSE 298
#define VARLOOP 299
#define RARROW 300
#define BACKSLASH 301
#define BACKTICK 302
#define OPID 303
#define REF 304
#define NONNULL 305
#define NUM 306
#define FLOATT 307
#define ID 308
#define STRING_LIT 309
#define CHAR_LIT 310
#define INTERP_LIT 311
#define INTERP_EXP 312
#define PP_COMMENT 313
#define PP_INCLUDE 314
#define PP_DEFINE 315
#define PP_PRAGMA 316
#define PP_UNDEF 317
#define PP_IFDEF 318
#define PP_IFNDEF 319
#define PP_ELSE 320
#define PP_ENDIF 321
#define PP_NL 322
#define PLUS 324
#define PLUSPLUS 325
#define MINUS 326
#define MINUSMINUS 327
#define TIMES 328
#define DIVIDE 329
#define PERCENT 330
#define DOLLAR 331
#define QUESTION 332
#define COLON 333
#define COLONCOLON 334
#define QUESTIONCOLON 335
#define NEW 336
#define SPORK 337
#define FORK 338
#define TYPEOF 339
#define L_HACK 340
#define R_HACK 341
#define AND 342
#define EQ 343
#define GE 344
#define GT 345
#define LE 346
#define LT 347
#define NEQ 348
#define SHIFT_LEFT 349
#define SHIFT_RIGHT 350
#define S_AND 351
#define S_OR 352
#define S_XOR 353
#define OR 354
#define LTMPL 355
#define RTMPL 356
#define TILDA 357
#define EXCLAMATION 358
#define DYNOP 359
#define UMINUS 360
#define UTIMES 361

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

#line 386 "src/parser.c"

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
  YYSYMBOL_IF = 12,                        /* "if"  */
  YYSYMBOL_ELSE = 13,                      /* "else"  */
  YYSYMBOL_WHILE = 14,                     /* "while"  */
  YYSYMBOL_DO = 15,                        /* "do"  */
  YYSYMBOL_UNTIL = 16,                     /* "until"  */
  YYSYMBOL_LOOP = 17,                      /* "repeat"  */
  YYSYMBOL_FOR = 18,                       /* "for"  */
  YYSYMBOL_FOREACH = 19,                   /* "foreach"  */
  YYSYMBOL_GOTO = 20,                      /* "goto"  */
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
  YYSYMBOL_EXTENDS = 35,                   /* "extends"  */
  YYSYMBOL_DOT = 36,                       /* "."  */
  YYSYMBOL_OPERATOR = 37,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 38,                   /* "typedef"  */
  YYSYMBOL_NOELSE = 39,                    /* NOELSE  */
  YYSYMBOL_UNION = 40,                     /* "union"  */
  YYSYMBOL_CONSTT = 41,                    /* "const"  */
  YYSYMBOL_PASTE = 42,                     /* "##"  */
  YYSYMBOL_ELLIPSE = 43,                   /* "..."  */
  YYSYMBOL_VARLOOP = 44,                   /* "varloop"  */
  YYSYMBOL_RARROW = 45,                    /* "->"  */
  YYSYMBOL_BACKSLASH = 46,                 /* "\\"  */
  YYSYMBOL_BACKTICK = 47,                  /* "`"  */
  YYSYMBOL_OPID = 48,                      /* OPID  */
  YYSYMBOL_REF = 49,                       /* "ref"  */
  YYSYMBOL_NONNULL = 50,                   /* "nonnull"  */
  YYSYMBOL_NUM = 51,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 52,                    /* FLOATT  */
  YYSYMBOL_ID = 53,                        /* "<identifier>"  */
  YYSYMBOL_STRING_LIT = 54,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 55,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_LIT = 56,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 57,                /* INTERP_EXP  */
  YYSYMBOL_PP_COMMENT = 58,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 59,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 60,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 61,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 62,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 63,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 64,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 65,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 66,                  /* "#if"  */
  YYSYMBOL_PP_NL = 67,                     /* "\n"  */
  YYSYMBOL_68_operator_id_ = 68,           /* "@<operator id>"  */
  YYSYMBOL_PLUS = 69,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 70,                  /* "++"  */
  YYSYMBOL_MINUS = 71,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 72,                /* "--"  */
  YYSYMBOL_TIMES = 73,                     /* "*"  */
  YYSYMBOL_DIVIDE = 74,                    /* "/"  */
  YYSYMBOL_PERCENT = 75,                   /* "%"  */
  YYSYMBOL_DOLLAR = 76,                    /* "$"  */
  YYSYMBOL_QUESTION = 77,                  /* "?"  */
  YYSYMBOL_COLON = 78,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 79,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 80,             /* "?:"  */
  YYSYMBOL_NEW = 81,                       /* "new"  */
  YYSYMBOL_SPORK = 82,                     /* "spork"  */
  YYSYMBOL_FORK = 83,                      /* "fork"  */
  YYSYMBOL_TYPEOF = 84,                    /* "typeof"  */
  YYSYMBOL_L_HACK = 85,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 86,                    /* ">>>"  */
  YYSYMBOL_AND = 87,                       /* "&&"  */
  YYSYMBOL_EQ = 88,                        /* "=="  */
  YYSYMBOL_GE = 89,                        /* ">="  */
  YYSYMBOL_GT = 90,                        /* ">"  */
  YYSYMBOL_LE = 91,                        /* "<="  */
  YYSYMBOL_LT = 92,                        /* "<"  */
  YYSYMBOL_NEQ = 93,                       /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 94,                /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 95,               /* ">>"  */
  YYSYMBOL_S_AND = 96,                     /* "&"  */
  YYSYMBOL_S_OR = 97,                      /* "|"  */
  YYSYMBOL_S_XOR = 98,                     /* "^"  */
  YYSYMBOL_OR = 99,                        /* "||"  */
  YYSYMBOL_LTMPL = 100,                    /* "<~"  */
  YYSYMBOL_RTMPL = 101,                    /* "~>"  */
  YYSYMBOL_TILDA = 102,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 103,              /* "!"  */
  YYSYMBOL_DYNOP = 104,                    /* "<dynamic_operator>"  */
  YYSYMBOL_UMINUS = 105,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 106,                   /* UTIMES  */
  YYSYMBOL_107_ = 107,                     /* "="  */
  YYSYMBOL_YYACCEPT = 108,                 /* $accept  */
  YYSYMBOL_prg = 109,                      /* prg  */
  YYSYMBOL_ast = 110,                      /* ast  */
  YYSYMBOL_section = 111,                  /* section  */
  YYSYMBOL_class_type = 112,               /* class_type  */
  YYSYMBOL_class_def = 113,                /* class_def  */
  YYSYMBOL_class_ext = 114,                /* class_ext  */
  YYSYMBOL_class_body = 115,               /* class_body  */
  YYSYMBOL_id_list = 116,                  /* id_list  */
  YYSYMBOL_stmt_list = 117,                /* stmt_list  */
  YYSYMBOL_fptr_base = 118,                /* fptr_base  */
  YYSYMBOL_fdef_base = 119,                /* fdef_base  */
  YYSYMBOL_fptr_def = 120,                 /* fptr_def  */
  YYSYMBOL_type_def = 121,                 /* type_def  */
  YYSYMBOL_type_decl_array = 122,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 123,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 124,          /* type_decl_empty  */
  YYSYMBOL_arg = 125,                      /* arg  */
  YYSYMBOL_arg_list = 126,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 127,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 128,                /* fptr_list  */
  YYSYMBOL_code_stmt = 129,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 130,                  /* stmt_pp  */
  YYSYMBOL_stmt = 131,                     /* stmt  */
  YYSYMBOL_id = 132,                       /* id  */
  YYSYMBOL_opt_id = 133,                   /* opt_id  */
  YYSYMBOL_enum_def = 134,                 /* enum_def  */
  YYSYMBOL_label_stmt = 135,               /* label_stmt  */
  YYSYMBOL_goto_stmt = 136,                /* goto_stmt  */
  YYSYMBOL_when_exp = 137,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 138,          /* match_case_stmt  */
  YYSYMBOL_match_list = 139,               /* match_list  */
  YYSYMBOL_where_stmt = 140,               /* where_stmt  */
  YYSYMBOL_match_stmt = 141,               /* match_stmt  */
  YYSYMBOL_flow = 142,                     /* flow  */
  YYSYMBOL_loop_stmt = 143,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 144,             /* varloop_stmt  */
  YYSYMBOL_selection_stmt = 145,           /* selection_stmt  */
  YYSYMBOL_breaks = 146,                   /* breaks  */
  YYSYMBOL_jump_stmt = 147,                /* jump_stmt  */
  YYSYMBOL__exp_stmt = 148,                /* _exp_stmt  */
  YYSYMBOL_exp_stmt = 149,                 /* exp_stmt  */
  YYSYMBOL_exp = 150,                      /* exp  */
  YYSYMBOL_binary_exp = 151,               /* binary_exp  */
  YYSYMBOL_call_template = 152,            /* call_template  */
  YYSYMBOL_op = 153,                       /* op  */
  YYSYMBOL_array_exp = 154,                /* array_exp  */
  YYSYMBOL_array_empty = 155,              /* array_empty  */
  YYSYMBOL_range = 156,                    /* range  */
  YYSYMBOL_array = 157,                    /* array  */
  YYSYMBOL_decl_exp2 = 158,                /* decl_exp2  */
  YYSYMBOL_decl_exp = 159,                 /* decl_exp  */
  YYSYMBOL_union_exp = 160,                /* union_exp  */
  YYSYMBOL_decl_exp3 = 161,                /* decl_exp3  */
  YYSYMBOL_func_args = 162,                /* func_args  */
  YYSYMBOL_fptr_args = 163,                /* fptr_args  */
  YYSYMBOL_arg_type = 164,                 /* arg_type  */
  YYSYMBOL_decl_template = 165,            /* decl_template  */
  YYSYMBOL_storage_flag = 166,             /* storage_flag  */
  YYSYMBOL_access_flag = 167,              /* access_flag  */
  YYSYMBOL_flag = 168,                     /* flag  */
  YYSYMBOL_opt_flag = 169,                 /* opt_flag  */
  YYSYMBOL_func_def_base = 170,            /* func_def_base  */
  YYSYMBOL_op_op = 171,                    /* op_op  */
  YYSYMBOL_func_def = 172,                 /* func_def  */
  YYSYMBOL_ref = 173,                      /* ref  */
  YYSYMBOL_decl_flag = 174,                /* decl_flag  */
  YYSYMBOL_type_decl_tmpl = 175,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 176,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 177,         /* type_decl_noflag  */
  YYSYMBOL_type_decl0 = 178,               /* type_decl0  */
  YYSYMBOL_type_decl = 179,                /* type_decl  */
  YYSYMBOL_decl_list = 180,                /* decl_list  */
  YYSYMBOL_union_def = 181,                /* union_def  */
  YYSYMBOL_var_decl_list = 182,            /* var_decl_list  */
  YYSYMBOL_var_decl = 183,                 /* var_decl  */
  YYSYMBOL_arg_decl = 184,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 185,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 186,                    /* eq_op  */
  YYSYMBOL_rel_op = 187,                   /* rel_op  */
  YYSYMBOL_shift_op = 188,                 /* shift_op  */
  YYSYMBOL_add_op = 189,                   /* add_op  */
  YYSYMBOL_mul_op = 190,                   /* mul_op  */
  YYSYMBOL_opt_exp = 191,                  /* opt_exp  */
  YYSYMBOL_con_exp = 192,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 193,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 194,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 195,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 196,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 197,                  /* and_exp  */
  YYSYMBOL_eq_exp = 198,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 199,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 200,                /* shift_exp  */
  YYSYMBOL_add_exp = 201,                  /* add_exp  */
  YYSYMBOL_mul_exp = 202,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 203,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 204,                 /* cast_exp  */
  YYSYMBOL_unary_op = 205,                 /* unary_op  */
  YYSYMBOL_unary_exp = 206,                /* unary_exp  */
  YYSYMBOL_lambda_list = 207,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 208,               /* lambda_arg  */
  YYSYMBOL_type_list = 209,                /* type_list  */
  YYSYMBOL_call_paren = 210,               /* call_paren  */
  YYSYMBOL_post_op = 211,                  /* post_op  */
  YYSYMBOL_dot_exp = 212,                  /* dot_exp  */
  YYSYMBOL_post_exp = 213,                 /* post_exp  */
  YYSYMBOL_interp_exp = 214,               /* interp_exp  */
  YYSYMBOL_interp = 215,                   /* interp  */
  YYSYMBOL_typeof_exp = 216,               /* typeof_exp  */
  YYSYMBOL_prim_exp = 217                  /* prim_exp  */
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
#define YYLAST   1653

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  265
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  437

#define YYMAXUTOK   362


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
     105,   106,   107
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   141,   144,   145,   149,   150,   151,   152,
     153,   154,   155,   158,   158,   160,   169,   169,   171,   171,
     173,   173,   175,   175,   177,   179,   182,   189,   196,   196,
     198,   202,   207,   208,   210,   211,   220,   221,   221,   228,
     229,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   259,   260,   267,   267,   270,   273,   275,   277,   277,
     280,   288,   289,   291,   291,   293,   301,   302,   305,   307,
     309,   311,   313,   315,   319,   322,   324,   329,   330,   331,
     334,   335,   338,   338,   341,   342,   345,   345,   347,   347,
     349,   349,   351,   351,   351,   354,   355,   356,   360,   361,
     362,   366,   367,   368,   371,   371,   372,   372,   373,   374,
     375,   375,   377,   377,   378,   378,   379,   379,   381,   381,
     383,   384,   387,   388,   391,   392,   393,   396,   396,   399,
     402,   402,   402,   402,   402,   405,   406,   408,   410,   412,
     417,   417,   418,   418,   421,   422,   426,   427,   431,   432,
     436,   439,   440,   441,   443,   444,   447,   467,   468,   471,
     472,   474,   475,   476,   477,   478,   479,   481,   481,   482,
     482,   482,   482,   483,   483,   484,   484,   485,   485,   485,
     487,   487,   488,   489,   491,   494,   494,   495,   495,   496,
     496,   497,   497,   498,   498,   499,   499,   500,   500,   501,
     501,   502,   502,   503,   503,   504,   504,   506,   506,   509,
     509,   509,   510,   510,   510,   510,   513,   513,   514,   515,
     516,   519,   520,   521,   521,   524,   525,   528,   528,   530,
     530,   532,   533,   534,   536,   538,   541,   542,   545,   546,
     548,   557,   559,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574
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
  "\"if\"", "\"else\"", "\"while\"", "\"do\"", "\"until\"", "\"repeat\"",
  "\"for\"", "\"foreach\"", "\"goto\"", "\"match\"", "\"case\"",
  "\"when\"", "\"where\"", "\"enum\"", "\"return\"", "\"break\"",
  "\"continue\"", "\"class\"", "\"struct\"", "\"static\"", "\"global\"",
  "\"private\"", "\"protect\"", "\"extends\"", "\".\"", "\"operator\"",
  "\"typedef\"", "NOELSE", "\"union\"", "\"const\"", "\"##\"", "\"...\"",
  "\"varloop\"", "\"->\"", "\"\\\\\"", "\"`\"", "OPID", "\"ref\"",
  "\"nonnull\"", "\"<integer>\"", "FLOATT", "\"<identifier>\"",
  "\"<litteral string>\"", "\"<litteral char>\"", "\"<interp string>\"",
  "INTERP_EXP", "\"<comment>\"", "\"#include\"", "\"#define\"",
  "\"#pragma\"", "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"",
  "\"#if\"", "\"\\n\"", "\"@<operator id>\"", "\"+\"", "\"++\"", "\"-\"",
  "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"", "\"::\"",
  "\"?:\"", "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"", "\"<<<\"",
  "\">>>\"", "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"", "\"<\"",
  "\"!=\"", "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"", "\"||\"",
  "\"<~\"", "\"~>\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"", "UMINUS",
  "UTIMES", "\"=\"", "$accept", "prg", "ast", "section", "class_type",
  "class_def", "class_ext", "class_body", "id_list", "stmt_list",
  "fptr_base", "fdef_base", "fptr_def", "type_def", "type_decl_array",
  "type_decl_exp", "type_decl_empty", "arg", "arg_list", "fptr_arg",
  "fptr_list", "code_stmt", "stmt_pp", "stmt", "id", "opt_id", "enum_def",
  "label_stmt", "goto_stmt", "when_exp", "match_case_stmt", "match_list",
  "where_stmt", "match_stmt", "flow", "loop_stmt", "varloop_stmt",
  "selection_stmt", "breaks", "jump_stmt", "_exp_stmt", "exp_stmt", "exp",
  "binary_exp", "call_template", "op", "array_exp", "array_empty", "range",
  "array", "decl_exp2", "decl_exp", "union_exp", "decl_exp3", "func_args",
  "fptr_args", "arg_type", "decl_template", "storage_flag", "access_flag",
  "flag", "opt_flag", "func_def_base", "op_op", "func_def", "ref",
  "decl_flag", "type_decl_tmpl", "type_decl_next", "type_decl_noflag",
  "type_decl0", "type_decl", "decl_list", "union_def", "var_decl_list",
  "var_decl", "arg_decl", "fptr_arg_decl", "eq_op", "rel_op", "shift_op",
  "add_op", "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
  "inc_or_exp", "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp",
  "add_exp", "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp",
  "lambda_list", "lambda_arg", "type_list", "call_paren", "post_op",
  "dot_exp", "post_exp", "interp_exp", "interp", "typeof_exp", "prim_exp", YY_NULLPTR
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
     355,   356,   357,   358,   359,   360,   361,   362
};
#endif

#define YYPACT_NINF (-345)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-160)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     646,    26,  1028,   970,   747,   118,    31,  -345,   839,  -345,
      53,   103,   115,   -13,  1492,   118,  1492,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,   508,   118,   118,   -34,  1492,
     -13,  1086,   -34,  -345,  -345,    52,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,    -7,   128,   128,   123,  1492,    -7,  -345,  -345,
     124,  -345,   646,   118,  -345,  -345,  -345,  -345,  -345,  -345,
     839,    10,  -345,  -345,  -345,  -345,   135,  -345,  -345,  -345,
     158,  -345,  -345,  -345,   162,    11,  -345,   163,  -345,  -345,
    -345,  -345,  -345,    42,  -345,    -7,  -345,  -345,  -345,   126,
      48,  -345,   -13,  -345,  -345,   -12,    86,    75,    77,    80,
      -4,    64,    69,    40,    85,    98,   102,   425,  -345,   128,
    -345,  -345,    13,    73,  -345,  -345,  -345,    89,   173,  1550,
    -345,  1492,    14,  -345,   170,  -345,    -7,  1492,   119,  1492,
     912,   133,   180,   175,   -13,   182,    -7,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,    -7,  -345,  -345,  -345,  -345,    -7,    -7,    87,
    -345,  -345,  -345,    12,   -13,  -345,  -345,   129,  -345,  1086,
    -345,   -13,  -345,  -345,   181,  -345,  -345,  1492,   104,  -345,
     187,    91,  -345,  -345,    87,  -345,  -345,  1492,  -345,  -345,
    1492,  1492,  1144,  -345,  -345,  -345,   -27,  -345,  -345,  -345,
    -345,   181,  -345,   189,  1492,  1550,  1550,  1550,  1550,  1550,
    1550,  -345,  -345,  1550,  1550,  1550,  1550,  1550,  1550,    -7,
      -7,  -345,  -345,  -345,  -345,  1202,   -13,    -7,   190,  -345,
    -345,  -345,  -345,   186,   181,  1260,  -345,    35,   -13,   191,
    1492,   192,   912,   -13,  -345,   177,  -345,   193,  -345,   195,
     196,   198,    35,   -13,   -13,   -13,  -345,  -345,  -345,  -345,
    -345,  1318,  -345,   199,  -345,    -7,   -13,   -13,   201,  -345,
    -345,  -345,   200,  -345,  -345,   -13,  -345,   131,  -345,    86,
      75,    77,    80,    -4,    64,    69,    40,    85,    98,   102,
    -345,   205,  -345,   110,  1376,  -345,  -345,  -345,   163,  -345,
     204,  -345,   207,   128,    87,   839,   211,   839,  1434,   143,
    1492,   177,   194,   -13,    -7,   216,    -7,    -7,   228,    87,
     132,   230,   223,  -345,  -345,  -345,   203,   839,  -345,  1550,
      -7,  -345,  -345,   229,  -345,  -345,  -345,   195,   227,  -345,
    -345,   839,   233,  1492,   218,  -345,   219,   232,  -345,   240,
     -13,   128,   241,   243,  -345,   140,  -345,   -13,   -34,    -7,
     237,  -345,  -345,   245,  -345,  -345,   839,  -345,   839,     8,
    1492,   169,   839,  -345,  -345,    -7,   181,   172,  -345,    -7,
     128,  -345,    -7,  -345,  -345,   249,   -13,   246,  -345,   646,
     128,  -345,  -345,   839,  -345,   839,  -345,  -345,  -345,   163,
    1492,   251,  -345,   255,  -345,   -13,   -34,  -345,   -13,  -345,
     252,  -345,  -345,  -345,    37,   128,    -7,   181,  -345,  -345,
     258,  -345,  -345,  -345,  -345,   163,  -345
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    93,     0,     0,     0,   137,     0,    76,     0,    77,
       0,     0,     0,     0,     0,   137,    87,    88,    89,    13,
      14,   130,   131,   132,   133,     0,   137,   137,     0,     0,
     234,     0,     0,   254,   255,    61,   256,   257,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,   239,   219,
     240,   220,     0,   223,   224,     0,     0,     0,   225,   222,
       0,     2,     4,   137,     8,     6,    11,    12,    54,    59,
      22,   253,     9,    55,    56,    57,     0,    52,    60,    53,
       0,    58,    95,    51,     0,    96,   114,   115,   259,   258,
      98,   120,   117,   135,   134,     0,   145,     7,   156,   158,
     150,   161,     0,    10,   116,   192,   195,   197,   199,   201,
     203,   205,   207,   209,   211,   213,   215,     0,   217,     0,
     221,   247,   226,   265,   242,    92,   263,   253,     0,     0,
     108,     0,     0,    39,     0,   138,     0,     0,     0,     0,
       0,   150,     0,     0,    64,     0,     0,   185,   186,   187,
     188,   189,   102,   182,   180,   181,   179,   103,   183,   184,
     104,   140,     0,   142,   141,   144,   143,     0,     0,   129,
     154,   162,   159,     0,   231,   233,   248,     0,   251,   264,
     163,     0,    30,   228,    28,   229,   230,     0,     0,    31,
     235,     0,     1,     5,   129,    23,    66,     0,    91,    94,
       0,     0,     0,   110,   136,   121,     0,   151,   152,   153,
     160,   169,   118,   167,   191,     0,     0,     0,     0,     0,
       0,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,   253,   227,   265,   262,     0,     0,     0,     0,   243,
     244,   246,   261,     0,   105,     0,    40,     0,     0,     0,
       0,     0,     0,     0,    67,     0,    63,     0,    90,     0,
       0,     0,     0,     0,     0,    64,    84,   232,   249,   250,
      62,     0,    29,     0,   260,     0,     0,     0,     0,    97,
      99,   109,     0,   157,   170,     0,   190,     0,   194,   196,
     198,   200,   202,   204,   206,   208,   210,   212,   214,   216,
     218,     0,   241,     0,     0,   245,   113,   106,   107,   112,
       0,   127,     0,     0,   129,     0,     0,     0,     0,     0,
       0,    71,     0,     0,   123,     0,     0,     0,     0,   129,
       0,    20,     0,   252,   236,   155,    17,     0,   168,     0,
       0,   100,   238,     0,   111,   126,   139,     0,    85,    79,
      83,     0,     0,     0,    69,    72,    74,     0,    34,   122,
       0,     0,     0,     0,    26,     0,   128,     0,     0,     0,
       0,    78,   193,     0,   237,    25,     0,    80,     0,     0,
       0,     0,     0,    75,    65,     0,   171,    33,   149,     0,
       0,    27,   125,    24,    21,     0,     0,     0,    16,    19,
       0,    86,    81,     0,    68,     0,    73,    35,   173,   172,
       0,     0,   147,    37,   124,    64,   164,   119,    64,    18,
       0,   148,    82,    70,    32,     0,     0,   174,    36,   165,
       0,    15,   146,    38,   176,   175,   166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -345,  -345,   -52,  -345,  -345,  -345,  -345,  -345,  -296,    -3,
    -345,  -345,  -345,  -345,   -41,  -114,  -111,  -279,  -345,  -345,
    -160,   -16,  -345,    -5,     0,  -249,  -345,  -345,  -345,  -345,
    -345,   -54,  -345,  -345,   130,  -345,  -345,  -345,  -345,  -345,
     268,  -131,   288,   -24,  -345,   247,   -48,  -238,   148,  -104,
      70,   178,  -345,  -345,   -73,  -345,    17,  -182,  -345,   188,
      18,    27,  -345,  -345,  -345,   139,  -345,    76,  -345,  -344,
      54,   244,  -132,  -345,     1,  -345,  -109,  -345,  -345,   263,
     264,   267,   269,  -345,  -208,  -345,    79,    81,    82,    74,
      83,    84,    90,    88,    92,    72,    78,     2,   -38,   134,
    -345,  -206,  -345,    -8,  -345,  -345,   137,  -345,   226,  -345
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    60,    61,    62,    63,    64,   370,   420,   330,    65,
     262,   247,    66,    67,   189,   183,   190,   358,   359,   413,
     414,    68,    69,    70,   127,   257,    72,    73,    74,   381,
     321,   322,   383,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   238,   201,    86,    87,    88,    89,
      90,    91,   395,    92,   325,   393,   313,   265,    93,    94,
      95,   136,    96,   162,    97,   209,   210,    98,    99,   100,
     101,   102,   397,   103,   212,   213,   387,   428,   223,   224,
     225,   226,   227,   287,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   129,   118,   175,
     119,   191,   305,   120,   121,   122,   178,   179,   123,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   134,   117,   138,    71,   173,   308,   288,    71,   252,
     193,   182,   277,   142,   403,   200,   332,   167,  -101,    35,
     235,     4,   244,   135,   396,   248,    35,   357,   170,     1,
     174,   303,   170,   135,    28,   259,   137,   185,   186,   203,
      35,   311,   144,    32,   135,   135,    35,   362,   363,   236,
      55,   260,   170,   168,   169,  -154,   261,   170,   139,  -154,
    -154,   373,    71,  -154,   117,   214,    57,   195,   215,   334,
      71,   394,   396,    57,   239,    23,    24,    55,   312,   232,
     272,   135,   171,    48,   221,    50,   180,   216,   196,   222,
     194,   232,   245,    57,   181,   170,   152,   207,   208,   152,
     152,   157,   211,   234,   157,   157,   407,   284,   140,   147,
     411,   148,   160,   237,   241,   160,   160,   231,   300,   301,
     141,   318,  -159,  -159,   192,   152,  -159,   263,   187,   231,
     157,   372,   347,     7,  -154,     9,   170,     4,  -154,  -154,
     197,   160,  -154,   391,   256,   392,   170,   365,   409,    21,
      22,    23,    24,   153,   154,   155,   156,   266,   149,   150,
     151,   198,   170,   158,   159,   199,   427,   170,   170,   430,
     202,   206,   218,   217,   174,   219,   220,   228,   229,   242,
     246,   270,   207,   254,   255,   258,   268,   264,   271,   435,
     274,   275,   276,   285,   306,   304,   307,   315,   317,   320,
     324,   326,   323,   327,   356,   333,   170,   337,   244,   339,
     340,   341,   344,   345,   349,   231,   231,   231,   231,   231,
     231,   353,   361,   231,   231,   231,   231,   231,   231,   170,
     170,   364,   368,   366,   367,   374,   302,   170,   369,   378,
     376,   380,   384,   382,   385,   389,   399,   405,   314,   390,
     410,   400,   416,   319,   172,   398,   418,   425,   172,   426,
     203,   436,   431,   329,   331,   256,   433,   355,   250,   125,
     240,   280,   161,   205,   375,   170,   335,   336,   172,   328,
     253,   204,   283,   172,   429,   211,   338,   417,   163,   164,
     128,   132,   165,   292,   166,   289,   184,   346,   290,   298,
     291,   184,   143,   293,   145,     0,   299,   294,   267,     0,
     348,     0,   350,   296,   295,    71,   269,    71,   297,   177,
       0,   172,     0,   331,   170,     0,   170,   170,   182,   379,
       0,     0,   371,     0,     0,     0,     0,    71,   408,   231,
     170,     0,     0,   233,   188,   388,   377,   419,     0,     0,
       0,    71,     0,     0,     0,   233,     0,     0,     0,     0,
     386,   203,   172,     0,     0,     0,     0,   331,   170,   170,
       0,   401,   172,   402,   412,     0,    71,   406,    71,   434,
     184,     0,    71,     0,   421,   170,   424,   203,   172,   170,
     184,     0,   170,   172,   172,     0,   386,     0,   422,    71,
       0,   117,   423,    71,     0,    71,   184,     0,     0,   432,
       0,   184,   184,     0,     0,   256,   170,     0,   256,   243,
       0,     0,     0,     0,     0,   249,   170,   251,     0,     0,
       2,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,   233,   233,   233,   233,   233,   233,     0,     0,   233,
     233,   233,   233,   233,   233,   172,   172,     0,     0,     0,
       0,     0,   230,   172,     0,     0,     0,   177,     0,     0,
       0,    30,    31,   184,   184,   273,    33,    34,    35,    36,
      37,   184,     0,     0,     0,   278,     0,     0,   279,     0,
     282,     0,     0,     0,     0,    48,    49,    50,    51,     0,
       0,   172,   286,     0,     0,     0,    52,    53,    54,    55,
      56,     0,     0,     0,     0,     0,     0,     0,     0,   184,
       0,     0,     0,   132,     0,     0,     0,    58,    59,     0,
       0,     0,     0,   310,     0,     0,     0,     0,   316,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,     0,   172,   172,     0,     0,   146,     0,     0,   282,
       0,     0,     0,     0,     0,   233,   172,     0,   360,     0,
     360,   360,     0,     0,     0,     0,     0,   147,    48,   148,
      50,   149,   150,   151,   360,     0,     0,     0,     0,     0,
       0,     0,   343,     0,   172,   172,   152,   153,   154,   155,
     156,   157,   158,   159,     0,     0,   352,     0,   354,     0,
       0,   172,   160,   184,     0,   172,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   360,
       0,     0,     0,   360,     0,     0,   415,     0,     0,     0,
       0,     0,   172,     0,     0,     0,     0,     0,     0,     1,
       0,     2,   172,     3,     0,     4,     0,     5,     6,     0,
       7,     8,     9,    10,    11,    12,    13,    14,   404,     0,
     415,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,    25,    26,     0,    27,    28,     0,     0,
      29,     0,    30,    31,     0,     0,    32,    33,    34,    35,
      36,    37,     0,     0,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,    58,    59,
       1,     0,     2,     0,     3,     0,     4,   133,     0,     6,
       0,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,     0,     0,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,    28,     0,
       0,    29,     0,    30,    31,     0,     0,    32,    33,    34,
      35,    36,    37,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     0,     0,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,    57,     4,    58,
      59,     6,     0,     7,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,     0,     0,
      21,    22,    23,    24,     0,     0,     0,     0,     0,     0,
      28,     0,     0,    29,     0,    30,    31,     0,     0,    32,
      33,    34,    35,    36,    37,     0,     0,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     0,     0,    48,
      49,    50,    51,     0,     0,     1,     0,     2,     0,     3,
      52,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    21,    22,    23,    24,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,    30,    31,
       0,     0,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,   130,     0,
       0,     0,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     0,
       0,    21,    22,    23,    24,     0,     0,     0,     0,     0,
       0,    28,    57,     0,    58,    59,    30,    31,     0,     0,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     2,   126,     3,     0,     0,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,   131,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,    28,
      57,     0,    58,    59,    30,    31,     0,     0,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     0,     0,     0,     0,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,     0,     0,     0,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,    28,    57,     0,
      58,    59,    30,    31,     0,     0,    32,    33,    34,    35,
      36,    37,   176,     0,     0,     0,     0,     0,     0,     2,
       0,     3,   281,     0,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,    21,    22,    23,    24,     0,
       0,     0,     0,     0,     0,    28,    57,     0,    58,    59,
      30,    31,     0,     0,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,    21,    22,    23,    24,     0,     0,     0,
       0,     0,     0,    28,    57,     0,    58,    59,    30,    31,
       0,     0,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,   309,     0,
       0,     0,    48,    49,    50,    51,     0,     0,     0,     0,
     131,     0,     0,    52,    53,    54,    55,    56,     0,     0,
       0,    21,    22,    23,    24,     0,     0,     0,     0,     0,
       0,    28,    57,     0,    58,    59,    30,    31,     0,     0,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,   130,     0,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,    28,
      57,     0,    58,    59,    30,    31,     0,     0,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     2,   342,     3,     0,     0,     0,     0,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,     0,     0,     0,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,    28,    57,     0,
      58,    59,    30,    31,     0,     0,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     2,
     351,     3,     0,     0,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,    21,    22,    23,    24,     0,
       0,     0,     0,     0,     0,    28,    57,     0,    58,    59,
      30,    31,     0,     0,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,    21,    22,    23,    24,     0,     0,     0,
       0,     0,     0,    28,    57,     0,    58,    59,    30,    31,
       0,     0,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
       0,     0,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    30,    31,     0,     0,
       0,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,    59
};

static const yytype_int16 yycheck[] =
{
       0,     4,     0,     8,     4,    29,   244,   215,     8,   140,
      62,    52,   194,    13,     6,     4,   265,    25,     5,    53,
       7,     9,     8,     5,   368,   136,    53,   323,    28,     3,
      30,   237,    32,    15,    41,   146,     5,    53,    54,    87,
      53,     6,    15,    50,    26,    27,    53,   326,   327,    36,
      84,   162,    52,    26,    27,    45,   167,    57,     5,    49,
      50,   340,    62,    53,    62,    77,   100,    70,    80,   275,
      70,   367,   416,   100,   122,    33,    34,    84,    43,   117,
     184,    63,    28,    70,    88,    72,    32,    99,    78,    93,
      63,   129,    78,   100,    42,    95,    88,    49,    50,    88,
      88,    93,   102,   119,    93,    93,   385,   211,     5,    69,
     389,    71,   104,   100,   122,   104,   104,   117,   229,   230,
       5,   252,    49,    50,     0,    88,    53,   168,     5,   129,
      93,   339,   314,    14,    45,    16,   136,     9,    49,    50,
       5,   104,    53,     3,   144,     5,   146,   329,   386,    31,
      32,    33,    34,    89,    90,    91,    92,   173,    73,    74,
      75,     3,   162,    94,    95,     3,   415,   167,   168,   418,
       7,    45,    97,    87,   174,    98,    96,    79,    76,     6,
      10,   181,    49,     3,     9,     3,    57,   100,     7,   427,
      86,     4,   101,     4,     8,     5,   244,     6,     6,    22,
       5,     5,     9,     5,    10,     6,   206,     6,     8,    78,
       5,   101,     8,     6,     3,   215,   216,   217,   218,   219,
     220,    78,     6,   223,   224,   225,   226,   227,   228,   229,
     230,     3,     9,   101,     4,     6,   236,   237,    35,     6,
      13,    23,    10,    24,     4,     4,     9,    78,   248,     6,
      78,     6,     3,   253,    28,   369,    10,     6,    32,     4,
     308,     3,    10,   263,   264,   265,   426,   321,   138,     1,
     122,   201,    25,    95,   347,   275,   276,   277,    52,   262,
     141,    93,   206,    57,   416,   285,   285,   396,    25,    25,
       2,     3,    25,   219,    25,   216,    52,   313,   217,   227,
     218,    57,    14,   220,    16,    -1,   228,   223,   174,    -1,
     315,    -1,   317,   225,   224,   315,   179,   317,   226,    31,
      -1,    95,    -1,   323,   324,    -1,   326,   327,   369,   353,
      -1,    -1,   337,    -1,    -1,    -1,    -1,   337,   386,   339,
     340,    -1,    -1,   117,    56,   361,   351,   399,    -1,    -1,
      -1,   351,    -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,
     360,   409,   136,    -1,    -1,    -1,    -1,   367,   368,   369,
      -1,   376,   146,   378,   390,    -1,   376,   382,   378,   427,
     136,    -1,   382,    -1,   400,   385,   410,   435,   162,   389,
     146,    -1,   392,   167,   168,    -1,   396,    -1,   403,   399,
      -1,   399,   405,   403,    -1,   405,   162,    -1,    -1,   425,
      -1,   167,   168,    -1,    -1,   415,   416,    -1,   418,   131,
      -1,    -1,    -1,    -1,    -1,   137,   426,   139,    -1,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,   216,   217,   218,   219,   220,    -1,    -1,   223,
     224,   225,   226,   227,   228,   229,   230,    -1,    -1,    -1,
      -1,    -1,    37,   237,    -1,    -1,    -1,   179,    -1,    -1,
      -1,    46,    47,   229,   230,   187,    51,    52,    53,    54,
      55,   237,    -1,    -1,    -1,   197,    -1,    -1,   200,    -1,
     202,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,   275,   214,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,
      -1,    -1,    -1,   235,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   250,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     324,    -1,   326,   327,    -1,    -1,    48,    -1,    -1,   271,
      -1,    -1,    -1,    -1,    -1,   339,   340,    -1,   324,    -1,
     326,   327,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,   340,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,   368,   369,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    -1,   318,    -1,   320,    -1,
      -1,   385,   104,   369,    -1,   389,    -1,    -1,   392,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,
      -1,    -1,    -1,   389,    -1,    -1,   392,    -1,    -1,    -1,
      -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,   426,     7,    -1,     9,    -1,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,   380,    -1,
     426,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    37,    38,    -1,    40,    41,    -1,    -1,
      44,    -1,    46,    47,    -1,    -1,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,
       3,    -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    -1,    -1,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    44,    -1,    46,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,   100,     9,   102,
     103,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    26,    27,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    -1,    46,    47,    -1,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,     3,    -1,     5,    -1,     7,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,   102,   103,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    41,   100,    -1,   102,   103,    46,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    -1,    -1,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,
     100,    -1,   102,   103,    46,    47,    -1,    -1,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    41,   100,    -1,
     102,   103,    46,    47,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,   100,    -1,   102,   103,
      46,    47,    -1,    -1,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    -1,    -1,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    41,   100,    -1,   102,   103,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    41,   100,    -1,   102,   103,    46,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    -1,    -1,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,
     100,    -1,   102,   103,    46,    47,    -1,    -1,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    41,   100,    -1,
     102,   103,    46,    47,    -1,    -1,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,   100,    -1,   102,   103,
      46,    47,    -1,    -1,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    -1,    -1,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    41,   100,    -1,   102,   103,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   102,   103,    46,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    37,    38,    40,    41,    44,
      46,    47,    50,    51,    52,    53,    54,    55,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    70,    71,
      72,    73,    81,    82,    83,    84,    85,   100,   102,   103,
     109,   110,   111,   112,   113,   117,   120,   121,   129,   130,
     131,   132,   134,   135,   136,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   154,   155,   156,   157,
     158,   159,   161,   166,   167,   168,   170,   172,   175,   176,
     177,   178,   179,   181,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   208,
     211,   212,   213,   216,   217,   148,     6,   132,   150,   205,
       8,    78,   150,    10,   117,   168,   169,     5,   131,     5,
       5,     5,   132,   150,   169,   150,    48,    69,    71,    73,
      74,    75,    88,    89,    90,    91,    92,    93,    94,    95,
     104,   153,   171,   187,   188,   189,   190,   211,   169,   169,
     132,   178,   216,   151,   132,   207,    56,   150,   214,   215,
     178,    42,   122,   123,   179,   129,   129,     5,   150,   122,
     124,   209,     0,   110,   169,   117,    78,     5,     3,     3,
       4,   153,     7,   154,   167,   159,    45,    49,    50,   173,
     174,   132,   182,   183,    77,    80,    99,    87,    97,    98,
      96,    88,    93,   186,   187,   188,   189,   190,    79,    76,
      37,   132,   206,   216,   129,     7,    36,   100,   152,   154,
     156,   211,     6,   150,     8,    78,    10,   119,   124,   150,
     142,   150,   149,   173,     3,     9,   132,   133,     3,   124,
     124,   124,   118,   122,   100,   165,   129,   207,    57,   214,
     132,     7,   157,   150,    86,     4,   101,   165,   150,   150,
     158,     8,   150,   175,   157,     4,   150,   191,   192,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     124,   124,   132,   209,     5,   210,     8,   154,   155,     8,
     150,     6,    43,   164,   132,     6,   150,     6,   149,   132,
      22,   138,   139,     9,     5,   162,     5,     5,   164,   132,
     116,   132,   133,     6,   209,   132,   132,     6,   182,    78,
       5,   101,     6,   150,     8,     6,   129,   165,   131,     3,
     131,     6,   150,    78,   150,   139,    10,   116,   125,   126,
     179,     6,   125,   125,     3,   165,   101,     4,     9,    35,
     114,   131,   192,   125,     6,   162,    13,   131,     6,   151,
      23,   137,    24,   140,    10,     4,   132,   184,   129,     4,
       6,     3,     5,   163,   116,   160,   177,   180,   123,     9,
       6,   131,   131,     6,   150,    78,   131,   125,   154,   155,
      78,   125,   129,   127,   128,   179,     3,   184,    10,   110,
     115,   129,   131,   117,   151,     6,     4,   133,   185,   180,
     133,    10,   129,   128,   154,   155,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   119,   120,   121,   122,   122,
     123,   124,   125,   125,   126,   126,   127,   128,   128,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   132,   132,   133,   133,   134,   135,   136,   137,   137,
     138,   139,   139,   140,   140,   141,   142,   142,   143,   143,
     143,   143,   143,   143,   144,   145,   145,   146,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   153,   154,   154,   154,   155,   155,
     155,   156,   156,   156,   157,   157,   158,   158,   159,   160,
     161,   161,   162,   162,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   168,   169,   169,   170,
     171,   171,   171,   171,   171,   172,   172,   172,   172,   172,
     173,   173,   174,   174,   175,   175,   176,   176,   177,   177,
     178,   179,   179,   179,   180,   180,   181,   182,   182,   183,
     183,   184,   184,   184,   185,   185,   185,   186,   186,   187,
     187,   187,   187,   188,   188,   189,   189,   190,   190,   190,
     191,   191,   192,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   198,   198,   199,   199,   200,
     200,   201,   201,   202,   202,   203,   203,   204,   204,   205,
     205,   205,   205,   205,   205,   205,   206,   206,   206,   206,
     206,   207,   207,   208,   208,   209,   209,   210,   210,   211,
     211,   212,   213,   213,   213,   213,   213,   213,   214,   214,
     215,   215,   216,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     4,     5,     6,     1,     2,
       1,     1,     4,     2,     1,     3,     2,     1,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     6,     2,     3,     2,     0,
       5,     1,     2,     2,     0,     6,     1,     1,     5,     5,
       6,     7,     8,     5,     3,     5,     7,     1,     1,     1,
       3,     2,     2,     1,     2,     1,     1,     3,     1,     3,
       3,     0,     1,     1,     1,     3,     4,     4,     2,     3,
       2,     5,     4,     4,     1,     1,     1,     1,     2,     2,
       1,     2,     2,     1,     2,     1,     2,     1,     3,     0,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     5,
       1,     1,     1,     1,     1,     1,     9,     7,     7,     6,
       0,     1,     1,     1,     1,     4,     1,     3,     1,     1,
       2,     1,     2,     2,     2,     3,     9,     1,     3,     1,
       2,     1,     2,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     5,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     2,     2,     1,     1,     3,     3,     2,     1,
       1,     3,     1,     2,     2,     3,     2,     1,     1,     2,
       2,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     2,     2,     1
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
    case 110: /* ast  */
#line 137 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 2005 "src/parser.c"
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
#line 2321 "src/parser.c"
    break;

  case 3:
#line 141 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2327 "src/parser.c"
    break;

  case 4:
#line 144 "src/gwion.y"
            { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2333 "src/parser.c"
    break;

  case 5:
#line 145 "src/gwion.y"
                { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)) : new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2339 "src/parser.c"
    break;

  case 6:
#line 149 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2345 "src/parser.c"
    break;

  case 7:
#line 150 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2351 "src/parser.c"
    break;

  case 8:
#line 151 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2357 "src/parser.c"
    break;

  case 9:
#line 152 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2363 "src/parser.c"
    break;

  case 10:
#line 153 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2369 "src/parser.c"
    break;

  case 11:
#line 154 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2375 "src/parser.c"
    break;

  case 12:
#line 155 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2381 "src/parser.c"
    break;

  case 13:
#line 158 "src/gwion.y"
                  { (yyval.flag) = ae_flag_none; }
#line 2387 "src/parser.c"
    break;

  case 14:
#line 158 "src/gwion.y"
                                                  { (yyval.flag) = ae_flag_struct; }
#line 2393 "src/parser.c"
    break;

  case 15:
#line 161 "src/gwion.y"
    {
      if((yyvsp[-7].flag) == ae_flag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-5].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].id_list));
  }
#line 2405 "src/parser.c"
    break;

  case 16:
#line 169 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2411 "src/parser.c"
    break;

  case 17:
#line 169 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2417 "src/parser.c"
    break;

  case 19:
#line 171 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2423 "src/parser.c"
    break;

  case 20:
#line 173 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2429 "src/parser.c"
    break;

  case 21:
#line 173 "src/gwion.y"
                                                                                    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2435 "src/parser.c"
    break;

  case 22:
#line 175 "src/gwion.y"
                { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2441 "src/parser.c"
    break;

  case 23:
#line 175 "src/gwion.y"
                                                                              { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2447 "src/parser.c"
    break;

  case 24:
#line 177 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2454 "src/parser.c"
    break;

  case 25:
#line 179 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2461 "src/parser.c"
    break;

  case 26:
#line 182 "src/gwion.y"
                                                        {
  if((yyvsp[-2].func_base)->td->array && (yyvsp[-2].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[-3].flag) | (yyvsp[-1].flag));
}
#line 2473 "src/parser.c"
    break;

  case 27:
#line 189 "src/gwion.y"
                                                                      {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2484 "src/parser.c"
    break;

  case 29:
#line 196 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2490 "src/parser.c"
    break;

  case 30:
#line 198 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2498 "src/parser.c"
    break;

  case 31:
#line 202 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2506 "src/parser.c"
    break;

  case 32:
#line 207 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2512 "src/parser.c"
    break;

  case 33:
#line 208 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2518 "src/parser.c"
    break;

  case 34:
#line 210 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2524 "src/parser.c"
    break;

  case 35:
#line 211 "src/gwion.y"
                        {
     Arg_List last = (yyvsp[-2].arg_list);
     while(last->next)
       last = last->next;
     if(last->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
     last->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 2537 "src/parser.c"
    break;

  case 36:
#line 220 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2543 "src/parser.c"
    break;

  case 37:
#line 221 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2549 "src/parser.c"
    break;

  case 38:
#line 221 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2559 "src/parser.c"
    break;

  case 39:
#line 228 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2565 "src/parser.c"
    break;

  case 40:
#line 229 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2571 "src/parser.c"
    break;

  case 41:
#line 233 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2577 "src/parser.c"
    break;

  case 42:
#line 234 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2583 "src/parser.c"
    break;

  case 43:
#line 235 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2589 "src/parser.c"
    break;

  case 44:
#line 236 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2595 "src/parser.c"
    break;

  case 45:
#line 237 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2601 "src/parser.c"
    break;

  case 46:
#line 238 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2607 "src/parser.c"
    break;

  case 47:
#line 239 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2613 "src/parser.c"
    break;

  case 48:
#line 240 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2619 "src/parser.c"
    break;

  case 49:
#line 241 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2625 "src/parser.c"
    break;

  case 50:
#line 242 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2631 "src/parser.c"
    break;

  case 61:
#line 259 "src/gwion.y"
       { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2637 "src/parser.c"
    break;

  case 62:
#line 260 "src/gwion.y"
                {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2647 "src/parser.c"
    break;

  case 64:
#line 267 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2653 "src/parser.c"
    break;

  case 65:
#line 270 "src/gwion.y"
                                                  { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-4].flag); }
#line 2660 "src/parser.c"
    break;

  case 66:
#line 273 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2666 "src/parser.c"
    break;

  case 67:
#line 275 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2672 "src/parser.c"
    break;

  case 68:
#line 277 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2678 "src/parser.c"
    break;

  case 69:
#line 277 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2684 "src/parser.c"
    break;

  case 70:
#line 280 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2695 "src/parser.c"
    break;

  case 71:
#line 288 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2701 "src/parser.c"
    break;

  case 72:
#line 289 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2707 "src/parser.c"
    break;

  case 73:
#line 291 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2713 "src/parser.c"
    break;

  case 74:
#line 291 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2719 "src/parser.c"
    break;

  case 75:
#line 293 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2730 "src/parser.c"
    break;

  case 76:
#line 301 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2736 "src/parser.c"
    break;

  case 77:
#line 302 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2742 "src/parser.c"
    break;

  case 78:
#line 306 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2748 "src/parser.c"
    break;

  case 79:
#line 308 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2754 "src/parser.c"
    break;

  case 80:
#line 310 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2760 "src/parser.c"
    break;

  case 81:
#line 312 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2766 "src/parser.c"
    break;

  case 82:
#line 314 "src/gwion.y"
      { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2772 "src/parser.c"
    break;

  case 83:
#line 316 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2778 "src/parser.c"
    break;

  case 84:
#line 319 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt)); }
#line 2784 "src/parser.c"
    break;

  case 85:
#line 323 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2790 "src/parser.c"
    break;

  case 86:
#line 325 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2796 "src/parser.c"
    break;

  case 87:
#line 329 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2802 "src/parser.c"
    break;

  case 88:
#line 330 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2808 "src/parser.c"
    break;

  case 89:
#line 331 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2814 "src/parser.c"
    break;

  case 90:
#line 334 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2820 "src/parser.c"
    break;

  case 91:
#line 335 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2826 "src/parser.c"
    break;

  case 92:
#line 338 "src/gwion.y"
                               { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2832 "src/parser.c"
    break;

  case 93:
#line 338 "src/gwion.y"
                                                        { (yyval.stmt) = NULL; }
#line 2838 "src/parser.c"
    break;

  case 94:
#line 341 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2844 "src/parser.c"
    break;

  case 95:
#line 342 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2850 "src/parser.c"
    break;

  case 97:
#line 345 "src/gwion.y"
                                        { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2856 "src/parser.c"
    break;

  case 99:
#line 347 "src/gwion.y"
                                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2862 "src/parser.c"
    break;

  case 100:
#line 349 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2868 "src/parser.c"
    break;

  case 101:
#line 349 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2874 "src/parser.c"
    break;

  case 105:
#line 354 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2880 "src/parser.c"
    break;

  case 106:
#line 355 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2886 "src/parser.c"
    break;

  case 107:
#line 356 "src/gwion.y"
                                  { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2892 "src/parser.c"
    break;

  case 108:
#line 360 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2898 "src/parser.c"
    break;

  case 109:
#line 361 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2904 "src/parser.c"
    break;

  case 110:
#line 362 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2910 "src/parser.c"
    break;

  case 111:
#line 366 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2916 "src/parser.c"
    break;

  case 112:
#line 367 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2922 "src/parser.c"
    break;

  case 113:
#line 368 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2928 "src/parser.c"
    break;

  case 118:
#line 373 "src/gwion.y"
                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2934 "src/parser.c"
    break;

  case 119:
#line 374 "src/gwion.y"
                                     { (yyvsp[-1].type_decl)->flag |= ae_flag_ref; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2940 "src/parser.c"
    break;

  case 121:
#line 375 "src/gwion.y"
                                    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2946 "src/parser.c"
    break;

  case 122:
#line 377 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2952 "src/parser.c"
    break;

  case 123:
#line 377 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2958 "src/parser.c"
    break;

  case 124:
#line 378 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2964 "src/parser.c"
    break;

  case 125:
#line 378 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2970 "src/parser.c"
    break;

  case 126:
#line 379 "src/gwion.y"
                         { (yyval.flag) = ae_flag_variadic; }
#line 2976 "src/parser.c"
    break;

  case 127:
#line 379 "src/gwion.y"
                                                            { (yyval.flag) = 0; }
#line 2982 "src/parser.c"
    break;

  case 128:
#line 381 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2988 "src/parser.c"
    break;

  case 129:
#line 381 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2994 "src/parser.c"
    break;

  case 130:
#line 383 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3000 "src/parser.c"
    break;

  case 131:
#line 384 "src/gwion.y"
           { (yyval.flag) = ae_flag_global; }
#line 3006 "src/parser.c"
    break;

  case 132:
#line 387 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3012 "src/parser.c"
    break;

  case 133:
#line 388 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3018 "src/parser.c"
    break;

  case 134:
#line 391 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3024 "src/parser.c"
    break;

  case 135:
#line 392 "src/gwion.y"
                 { (yyval.flag) = (yyvsp[0].flag); }
#line 3030 "src/parser.c"
    break;

  case 136:
#line 393 "src/gwion.y"
                             { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3036 "src/parser.c"
    break;

  case 137:
#line 396 "src/gwion.y"
           { (yyval.flag) = 0; }
#line 3042 "src/parser.c"
    break;

  case 138:
#line 396 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[0].flag); }
#line 3048 "src/parser.c"
    break;

  case 139:
#line 400 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 3054 "src/parser.c"
    break;

  case 146:
#line 407 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 3060 "src/parser.c"
    break;

  case 147:
#line 409 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 3066 "src/parser.c"
    break;

  case 148:
#line 411 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 3072 "src/parser.c"
    break;

  case 149:
#line 413 "src/gwion.y"
    {
 (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_typedef, GET_LOC(&(yyloc)));
    }
#line 3080 "src/parser.c"
    break;

  case 150:
#line 417 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 3086 "src/parser.c"
    break;

  case 151:
#line 417 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 3092 "src/parser.c"
    break;

  case 152:
#line 418 "src/gwion.y"
                   { (yyval.ival) = ae_flag_nonnull; }
#line 3098 "src/parser.c"
    break;

  case 154:
#line 421 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3104 "src/parser.c"
    break;

  case 155:
#line 422 "src/gwion.y"
                             { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 3110 "src/parser.c"
    break;

  case 157:
#line 427 "src/gwion.y"
                                       { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3116 "src/parser.c"
    break;

  case 158:
#line 431 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3122 "src/parser.c"
    break;

  case 159:
#line 432 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3128 "src/parser.c"
    break;

  case 160:
#line 436 "src/gwion.y"
                               { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 3134 "src/parser.c"
    break;

  case 161:
#line 439 "src/gwion.y"
                      { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3140 "src/parser.c"
    break;

  case 162:
#line 440 "src/gwion.y"
                      { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 3146 "src/parser.c"
    break;

  case 163:
#line 441 "src/gwion.y"
                       { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), nonnull); }
#line 3152 "src/parser.c"
    break;

  case 164:
#line 443 "src/gwion.y"
                               { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 3158 "src/parser.c"
    break;

  case 165:
#line 444 "src/gwion.y"
                                  { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 3164 "src/parser.c"
    break;

  case 166:
#line 447 "src/gwion.y"
                                                                                 {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-3].decl_list), GET_LOC(&(yyloc)));
      (yyval.union_def)->type_xid = (yyvsp[-5].sym);
      (yyval.union_def)->xid = (yyvsp[-1].sym);
      (yyval.union_def)->flag = (yyvsp[-7].flag);
      if((yyvsp[-6].id_list)) {
        if(!(yyvsp[-5].sym)) {
          gwion_error(&(yyloc), arg, _("Template unions requires type name\n"));
          YYERROR;
        }
        if((yyvsp[-1].sym)) {
          gwion_error(&(yyloc), arg, _("Can't instantiate template union types at declaration site.\n"));
          YYERROR;
        }
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-6].id_list));
      }
    }
#line 3186 "src/parser.c"
    break;

  case 167:
#line 467 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3192 "src/parser.c"
    break;

  case 168:
#line 468 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3198 "src/parser.c"
    break;

  case 169:
#line 471 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3204 "src/parser.c"
    break;

  case 170:
#line 472 "src/gwion.y"
                { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3210 "src/parser.c"
    break;

  case 171:
#line 474 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3216 "src/parser.c"
    break;

  case 172:
#line 475 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3222 "src/parser.c"
    break;

  case 173:
#line 476 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3228 "src/parser.c"
    break;

  case 174:
#line 477 "src/gwion.y"
                      { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3234 "src/parser.c"
    break;

  case 175:
#line 478 "src/gwion.y"
                       { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3240 "src/parser.c"
    break;

  case 176:
#line 479 "src/gwion.y"
                     { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3246 "src/parser.c"
    break;

  case 191:
#line 487 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 3252 "src/parser.c"
    break;

  case 193:
#line 490 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3258 "src/parser.c"
    break;

  case 194:
#line 492 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 3264 "src/parser.c"
    break;

  case 196:
#line 494 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3270 "src/parser.c"
    break;

  case 198:
#line 495 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3276 "src/parser.c"
    break;

  case 200:
#line 496 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3282 "src/parser.c"
    break;

  case 202:
#line 497 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3288 "src/parser.c"
    break;

  case 204:
#line 498 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3294 "src/parser.c"
    break;

  case 206:
#line 499 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3300 "src/parser.c"
    break;

  case 208:
#line 500 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3306 "src/parser.c"
    break;

  case 210:
#line 501 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3312 "src/parser.c"
    break;

  case 212:
#line 502 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3318 "src/parser.c"
    break;

  case 214:
#line 503 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3324 "src/parser.c"
    break;

  case 216:
#line 504 "src/gwion.y"
                                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3330 "src/parser.c"
    break;

  case 218:
#line 507 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3336 "src/parser.c"
    break;

  case 227:
#line 513 "src/gwion.y"
                                          { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3342 "src/parser.c"
    break;

  case 228:
#line 514 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3348 "src/parser.c"
    break;

  case 229:
#line 515 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3354 "src/parser.c"
    break;

  case 230:
#line 516 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3360 "src/parser.c"
    break;

  case 231:
#line 519 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3366 "src/parser.c"
    break;

  case 232:
#line 520 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3372 "src/parser.c"
    break;

  case 233:
#line 521 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3378 "src/parser.c"
    break;

  case 234:
#line 521 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3384 "src/parser.c"
    break;

  case 235:
#line 524 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3390 "src/parser.c"
    break;

  case 236:
#line 525 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3396 "src/parser.c"
    break;

  case 237:
#line 528 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3402 "src/parser.c"
    break;

  case 238:
#line 528 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3408 "src/parser.c"
    break;

  case 241:
#line 532 "src/gwion.y"
                         { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3414 "src/parser.c"
    break;

  case 243:
#line 535 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3420 "src/parser.c"
    break;

  case 244:
#line 537 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range)); }
#line 3426 "src/parser.c"
    break;

  case 245:
#line 539 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3433 "src/parser.c"
    break;

  case 246:
#line 542 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3439 "src/parser.c"
    break;

  case 247:
#line 542 "src/gwion.y"
                                                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3445 "src/parser.c"
    break;

  case 248:
#line 545 "src/gwion.y"
                       { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3451 "src/parser.c"
    break;

  case 249:
#line 546 "src/gwion.y"
                       { (yyval.exp) = (yyvsp[-1].exp); }
#line 3457 "src/parser.c"
    break;

  case 250:
#line 549 "src/gwion.y"
{
  Exp next = (yyvsp[-1].exp);
  while(next->next) {
    if(!next->next)
      break;
  next = next->next; }
  next->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-1].exp);
}
#line 3470 "src/parser.c"
    break;

  case 251:
#line 557 "src/gwion.y"
                 { (yyval.exp) = (yyvsp[0].exp); }
#line 3476 "src/parser.c"
    break;

  case 252:
#line 559 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3482 "src/parser.c"
    break;

  case 253:
#line 562 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3488 "src/parser.c"
    break;

  case 254:
#line 563 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3494 "src/parser.c"
    break;

  case 255:
#line 564 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3500 "src/parser.c"
    break;

  case 256:
#line 565 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3506 "src/parser.c"
    break;

  case 257:
#line 566 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3512 "src/parser.c"
    break;

  case 258:
#line 567 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3518 "src/parser.c"
    break;

  case 259:
#line 568 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3524 "src/parser.c"
    break;

  case 260:
#line 569 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3530 "src/parser.c"
    break;

  case 261:
#line 570 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3536 "src/parser.c"
    break;

  case 262:
#line 571 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3542 "src/parser.c"
    break;

  case 263:
#line 572 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3548 "src/parser.c"
    break;

  case 264:
#line 573 "src/gwion.y"
                          { (yyval.exp) = new_prim_interp(mpool(arg),     (yyvsp[0].exp)); }
#line 3554 "src/parser.c"
    break;

  case 265:
#line 574 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3560 "src/parser.c"
    break;


#line 3564 "src/parser.c"

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

#line 576 "src/gwion.y"

