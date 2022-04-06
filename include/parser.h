/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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
    TRY = 284,                     /* "try"  */
    PERFORM = 285,                 /* "perform"  */
    HANDLET = 286,                 /* "handle"  */
    RETRY = 287,                   /* "retry"  */
    CLASS = 288,                   /* "class"  */
    STRUCT = 289,                  /* "struct"  */
    TRAIT = 290,                   /* "trait"  */
    STATIC = 291,                  /* "static"  */
    GLOBAL = 292,                  /* "global"  */
    PRIVATE = 293,                 /* "private"  */
    PROTECT = 294,                 /* "protect"  */
    ABSTRACT = 295,                /* "abstract"  */
    FINAL = 296,                   /* "final"  */
    EXTENDS = 297,                 /* "extends"  */
    DOT = 298,                     /* "."  */
    OPERATOR = 299,                /* "operator"  */
    TYPEDEF = 300,                 /* "typedef"  */
    DISTINCT = 301,                /* "distinct"  */
    FUNPTR = 302,                  /* "funptr"  */
    NOELSE = 303,                  /* NOELSE  */
    UNION = 304,                   /* "union"  */
    CONSTT = 305,                  /* "const"  */
    ELLIPSE = 306,                 /* "..."  */
    VARLOOP = 307,                 /* "varloop"  */
    DEFER = 308,                   /* "defer"  */
    BACKSLASH = 309,               /* "\\"  */
    OPID_A = 310,                  /* OPID_A  */
    LATE = 311,                    /* "late"  */
    NUM = 312,                     /* "<integer>"  */
    FLOATT = 313,                  /* "<float>"  */
    STRING_LIT = 314,              /* "<litteral string>"  */
    CHAR_LIT = 315,                /* "<litteral char>"  */
    INTERP_START = 316,            /* "`"  */
    INTERP_EXP = 317,              /* INTERP_EXP  */
    PP_COMMENT = 318,              /* "<comment>"  */
    PP_INCLUDE = 319,              /* "#include"  */
    PP_DEFINE = 320,               /* "#define"  */
    PP_PRAGMA = 321,               /* "#pragma"  */
    PP_UNDEF = 322,                /* "#undef"  */
    PP_IFDEF = 323,                /* "#ifdef"  */
    PP_IFNDEF = 324,               /* "#ifndef"  */
    PP_ELSE = 325,                 /* "#else"  */
    PP_ENDIF = 326,                /* "#if"  */
    PP_NL = 327,                   /* "\n"  */
    PP_IMPORT = 328,               /* "import"  */
    INTERP_LIT = 329,              /* "<interp string lit>"  */
    INTERP_END = 330,              /* "<interp string end>"  */
    ID = 332,                      /* "<identifier>"  */
    PLUS = 333,                    /* "+"  */
    PLUSPLUS = 334,                /* "++"  */
    MINUS = 335,                   /* "-"  */
    MINUSMINUS = 336,              /* "--"  */
    TIMES = 337,                   /* "*"  */
    DIVIDE = 338,                  /* "/"  */
    PERCENT = 339,                 /* "%"  */
    DOLLAR = 340,                  /* "$"  */
    QUESTION = 341,                /* "?"  */
    OPTIONS = 342,                 /* OPTIONS  */
    COLON = 343,                   /* ":"  */
    COLONCOLON = 344,              /* "::"  */
    QUESTIONCOLON = 345,           /* "?:"  */
    NEW = 346,                     /* "new"  */
    SPORK = 347,                   /* "spork"  */
    FORK = 348,                    /* "fork"  */
    L_HACK = 349,                  /* "<<<"  */
    R_HACK = 350,                  /* ">>>"  */
    AND = 351,                     /* "&&"  */
    EQ = 352,                      /* "=="  */
    GE = 353,                      /* ">="  */
    GT = 354,                      /* ">"  */
    LE = 355,                      /* "<="  */
    LT = 356,                      /* "<"  */
    NEQ = 357,                     /* "!="  */
    SHIFT_LEFT = 358,              /* "<<"  */
    SHIFT_RIGHT = 359,             /* ">>"  */
    S_AND = 360,                   /* "&"  */
    S_OR = 361,                    /* "|"  */
    S_XOR = 362,                   /* "^"  */
    OR = 363,                      /* "||"  */
    TMPL = 364,                    /* ":["  */
    TILDA = 365,                   /* "~"  */
    EXCLAMATION = 366,             /* "!"  */
    AROBASE = 367,                 /* "@"  */
    DYNOP = 368,                   /* "<dynamic_operator>"  */
    RANGE_EMPTY = 369,             /* RANGE_EMPTY  */
    UMINUS = 370,                  /* UMINUS  */
    UTIMES = 371,                  /* UTIMES  */
    STMT_ASSOC = 373,              /* STMT_ASSOC  */
    STMT_NOASSOC = 374             /* STMT_NOASSOC  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
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
#define TRY 284
#define PERFORM 285
#define HANDLET 286
#define RETRY 287
#define CLASS 288
#define STRUCT 289
#define TRAIT 290
#define STATIC 291
#define GLOBAL 292
#define PRIVATE 293
#define PROTECT 294
#define ABSTRACT 295
#define FINAL 296
#define EXTENDS 297
#define DOT 298
#define OPERATOR 299
#define TYPEDEF 300
#define DISTINCT 301
#define FUNPTR 302
#define NOELSE 303
#define UNION 304
#define CONSTT 305
#define ELLIPSE 306
#define VARLOOP 307
#define DEFER 308
#define BACKSLASH 309
#define OPID_A 310
#define LATE 311
#define NUM 312
#define FLOATT 313
#define STRING_LIT 314
#define CHAR_LIT 315
#define INTERP_START 316
#define INTERP_EXP 317
#define PP_COMMENT 318
#define PP_INCLUDE 319
#define PP_DEFINE 320
#define PP_PRAGMA 321
#define PP_UNDEF 322
#define PP_IFDEF 323
#define PP_IFNDEF 324
#define PP_ELSE 325
#define PP_ENDIF 326
#define PP_NL 327
#define PP_IMPORT 328
#define INTERP_LIT 329
#define INTERP_END 330
#define ID 332
#define PLUS 333
#define PLUSPLUS 334
#define MINUS 335
#define MINUSMINUS 336
#define TIMES 337
#define DIVIDE 338
#define PERCENT 339
#define DOLLAR 340
#define QUESTION 341
#define OPTIONS 342
#define COLON 343
#define COLONCOLON 344
#define QUESTIONCOLON 345
#define NEW 346
#define SPORK 347
#define FORK 348
#define L_HACK 349
#define R_HACK 350
#define AND 351
#define EQ 352
#define GE 353
#define GT 354
#define LE 355
#define LT 356
#define NEQ 357
#define SHIFT_LEFT 358
#define SHIFT_RIGHT 359
#define S_AND 360
#define S_OR 361
#define S_XOR 362
#define OR 363
#define TMPL 364
#define TILDA 365
#define EXCLAMATION 366
#define AROBASE 367
#define DYNOP 368
#define RANGE_EMPTY 369
#define UMINUS 370
#define UTIMES 371
#define STMT_ASSOC 373
#define STMT_NOASSOC 374

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "src/gwion.y"

  bool yybool;
  ae_stmt_t stmt_t;
  char* sval;
  struct AstString string;
  int ival;
  long unsigned int lval;
  m_uint uval;
  ae_flag flag;
  enum fbflag fbflag;
  enum cflag cflag;
  m_float fval;
  Symbol sym;
  struct Vector_ vector;
  Array_Sub array_sub;
  Range* range;
  struct Var_Decl_ var_decl;
  Var_Decl_List var_decl_list;
  Type_Decl* type_decl;
  Exp   exp;
  struct Func_Base_ *func_base;
  struct Stmt_ stmt;
  Stmt stmt_ptr;
  Handler handler;
  ParserHandler handler_list;
  Stmt_List stmt_list;
  Arg_List arg_list;
  struct ParserArg default_args;
  Arg arg;
  Func_Def func_def;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section section;
  ID_List id_list;
  Specialized_List specialized_list;
  Type_List type_list;
  Union_Member union_member;
  Union_List union_list;
  Extend_Def extend_def;
  Class_Def class_def;
  Trait_Def trait_def;
  Ast ast;

#line 347 "include/parser.h"

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
