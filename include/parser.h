/* A Bison parser, made by GNU Bison 3.7.2.51-de63.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
    TRAIT = 286,                   /* "trait"  */
    STATIC = 287,                  /* "static"  */
    GLOBAL = 288,                  /* "global"  */
    PRIVATE = 289,                 /* "private"  */
    PROTECT = 290,                 /* "protect"  */
    ABSTRACT = 291,                /* "abstract"  */
    FINAL = 292,                   /* "final"  */
    EXTENDS = 293,                 /* "extends"  */
    DOT = 294,                     /* "."  */
    OPERATOR = 295,                /* "operator"  */
    TYPEDEF = 296,                 /* "typedef"  */
    DISTINCT = 297,                /* "distinct"  */
    FUNCDEF = 298,                 /* "funcdef"  */
    NOELSE = 299,                  /* NOELSE  */
    UNION = 300,                   /* "union"  */
    CONSTT = 301,                  /* "const"  */
    ELLIPSE = 302,                 /* "..."  */
    VARLOOP = 303,                 /* "varloop"  */
    DEFER = 304,                   /* "defer"  */
    BACKSLASH = 305,               /* "\\"  */
    OPID_A = 306,                  /* OPID_A  */
    OPID_E = 307,                  /* OPID_E  */
    LATE = 308,                    /* "late"  */
    NUM = 309,                     /* "<integer>"  */
    FLOATT = 310,                  /* FLOATT  */
    STRING_LIT = 311,              /* "<litteral string>"  */
    CHAR_LIT = 312,                /* "<litteral char>"  */
    INTERP_START = 313,            /* "`"  */
    INTERP_LIT = 314,              /* "<interp string>"  */
    INTERP_EXP = 315,              /* INTERP_EXP  */
    INTERP_END = 316,              /* "<interp string>`"  */
    PP_COMMENT = 317,              /* "<comment>"  */
    PP_INCLUDE = 318,              /* "#include"  */
    PP_DEFINE = 319,               /* "#define"  */
    PP_PRAGMA = 320,               /* "#pragma"  */
    PP_UNDEF = 321,                /* "#undef"  */
    PP_IFDEF = 322,                /* "#ifdef"  */
    PP_IFNDEF = 323,               /* "#ifndef"  */
    PP_ELSE = 324,                 /* "#else"  */
    PP_ENDIF = 325,                /* "#if"  */
    PP_NL = 326,                   /* "\n"  */
    PP_REQUIRE = 327,              /* "require"  */
    ID = 330,                      /* "<identifier>"  */
    PLUS = 331,                    /* "+"  */
    PLUSPLUS = 332,                /* "++"  */
    MINUS = 333,                   /* "-"  */
    MINUSMINUS = 334,              /* "--"  */
    TIMES = 335,                   /* "*"  */
    DIVIDE = 336,                  /* "/"  */
    PERCENT = 337,                 /* "%"  */
    DOLLAR = 338,                  /* "$"  */
    QUESTION = 339,                /* "?"  */
    OPTIONS = 340,                 /* OPTIONS  */
    COLON = 341,                   /* ":"  */
    COLONCOLON = 342,              /* "::"  */
    QUESTIONCOLON = 343,           /* "?:"  */
    NEW = 344,                     /* "new"  */
    SPORK = 345,                   /* "spork"  */
    FORK = 346,                    /* "fork"  */
    L_HACK = 347,                  /* "<<<"  */
    R_HACK = 348,                  /* ">>>"  */
    AND = 349,                     /* "&&"  */
    EQ = 350,                      /* "=="  */
    GE = 351,                      /* ">="  */
    GT = 352,                      /* ">"  */
    LE = 353,                      /* "<="  */
    LT = 354,                      /* "<"  */
    NEQ = 355,                     /* "!="  */
    SHIFT_LEFT = 356,              /* "<<"  */
    SHIFT_RIGHT = 357,             /* ">>"  */
    S_AND = 358,                   /* "&"  */
    S_OR = 359,                    /* "|"  */
    S_XOR = 360,                   /* "^"  */
    OR = 361,                      /* "||"  */
    TMPL = 362,                    /* ":["  */
    TILDA = 363,                   /* "~"  */
    EXCLAMATION = 364,             /* "!"  */
    DYNOP = 365,                   /* "<dynamic_operator>"  */
    RANGE_EMPTY = 366,             /* RANGE_EMPTY  */
    UMINUS = 367,                  /* UMINUS  */
    UTIMES = 368,                  /* UTIMES  */
    STMT_ASSOC = 370,              /* STMT_ASSOC  */
    STMT_NOASSOC = 371             /* STMT_NOASSOC  */
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
#define TRAIT 286
#define STATIC 287
#define GLOBAL 288
#define PRIVATE 289
#define PROTECT 290
#define ABSTRACT 291
#define FINAL 292
#define EXTENDS 293
#define DOT 294
#define OPERATOR 295
#define TYPEDEF 296
#define DISTINCT 297
#define FUNCDEF 298
#define NOELSE 299
#define UNION 300
#define CONSTT 301
#define ELLIPSE 302
#define VARLOOP 303
#define DEFER 304
#define BACKSLASH 305
#define OPID_A 306
#define OPID_E 307
#define LATE 308
#define NUM 309
#define FLOATT 310
#define STRING_LIT 311
#define CHAR_LIT 312
#define INTERP_START 313
#define INTERP_LIT 314
#define INTERP_EXP 315
#define INTERP_END 316
#define PP_COMMENT 317
#define PP_INCLUDE 318
#define PP_DEFINE 319
#define PP_PRAGMA 320
#define PP_UNDEF 321
#define PP_IFDEF 322
#define PP_IFNDEF 323
#define PP_ELSE 324
#define PP_ENDIF 325
#define PP_NL 326
#define PP_REQUIRE 327
#define ID 330
#define PLUS 331
#define PLUSPLUS 332
#define MINUS 333
#define MINUSMINUS 334
#define TIMES 335
#define DIVIDE 336
#define PERCENT 337
#define DOLLAR 338
#define QUESTION 339
#define OPTIONS 340
#define COLON 341
#define COLONCOLON 342
#define QUESTIONCOLON 343
#define NEW 344
#define SPORK 345
#define FORK 346
#define L_HACK 347
#define R_HACK 348
#define AND 349
#define EQ 350
#define GE 351
#define GT 352
#define LE 353
#define LT 354
#define NEQ 355
#define SHIFT_LEFT 356
#define SHIFT_RIGHT 357
#define S_AND 358
#define S_OR 359
#define S_XOR 360
#define OR 361
#define TMPL 362
#define TILDA 363
#define EXCLAMATION 364
#define DYNOP 365
#define RANGE_EMPTY 366
#define UMINUS 367
#define UTIMES 368
#define STMT_ASSOC 370
#define STMT_NOASSOC 371

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "src/gwion.y"

  char* sval;
  int ival;
  long unsigned int lval;
  m_uint uval;
  ae_flag flag;
  enum fbflag fbflag;
  enum cflag cflag;
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
  Func_Def func_def;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section* section;
  ID_List id_list;
  Type_List type_list;
  Union_List union_list;
  Extend_Def extend_def;
  Class_Def class_def;
  Ast ast;

#line 326 "include/parser.h"

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
