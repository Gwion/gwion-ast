/* A Bison parser, made by GNU Bison 3.7.6.  */

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
    LOCALE = 311,                  /* LOCALE  */
    LOCALE_INI = 312,              /* LOCALE_INI  */
    LOCALE_END = 313,              /* LOCALE_END  */
    LATE = 314,                    /* "late"  */
    NUM = 315,                     /* "<integer>"  */
    FLOATT = 316,                  /* "<float>"  */
    STRING_LIT = 317,              /* "<litteral string>"  */
    CHAR_LIT = 318,                /* "<litteral char>"  */
    INTERP_START = 319,            /* "${"  */
    INTERP_EXP = 320,              /* INTERP_EXP  */
    PP_COMMENT = 321,              /* "<comment>"  */
    PP_INCLUDE = 322,              /* "#include"  */
    PP_DEFINE = 323,               /* "#define"  */
    PP_PRAGMA = 324,               /* "#pragma"  */
    PP_UNDEF = 325,                /* "#undef"  */
    PP_IFDEF = 326,                /* "#ifdef"  */
    PP_IFNDEF = 327,               /* "#ifndef"  */
    PP_ELSE = 328,                 /* "#else"  */
    PP_ENDIF = 329,                /* "#if"  */
    PP_NL = 330,                   /* "\n"  */
    PP_IMPORT = 331,               /* "import"  */
    SPREAD = 332,                  /* "}..."  */
    INTERP_LIT = 333,              /* "<interp string lit>"  */
    INTERP_END = 334,              /* "<interp string end>"  */
    ID = 336,                      /* "<identifier>"  */
    PLUS = 337,                    /* "+"  */
    PLUSPLUS = 338,                /* "++"  */
    MINUS = 339,                   /* "-"  */
    MINUSMINUS = 340,              /* "--"  */
    TIMES = 341,                   /* "*"  */
    DIVIDE = 342,                  /* "/"  */
    PERCENT = 343,                 /* "%"  */
    DOLLAR = 344,                  /* "$"  */
    QUESTION = 345,                /* "?"  */
    OPTIONS = 346,                 /* OPTIONS  */
    COLON = 347,                   /* ":"  */
    COLONCOLON = 348,              /* "::"  */
    QUESTIONCOLON = 349,           /* "?:"  */
    NEW = 350,                     /* "new"  */
    SPORK = 351,                   /* "spork"  */
    FORK = 352,                    /* "fork"  */
    L_HACK = 353,                  /* "<<<"  */
    R_HACK = 354,                  /* ">>>"  */
    AND = 355,                     /* "&&"  */
    EQ = 356,                      /* "=="  */
    GE = 357,                      /* ">="  */
    GT = 358,                      /* ">"  */
    LE = 359,                      /* "<="  */
    LT = 360,                      /* "<"  */
    NEQ = 361,                     /* "!="  */
    SHIFT_LEFT = 362,              /* "<<"  */
    SHIFT_RIGHT = 363,             /* ">>"  */
    S_AND = 364,                   /* "&"  */
    S_OR = 365,                    /* "|"  */
    S_XOR = 366,                   /* "^"  */
    OR = 367,                      /* "||"  */
    TMPL = 368,                    /* ":["  */
    TILDA = 369,                   /* "~"  */
    EXCLAMATION = 370,             /* "!"  */
    AROBASE = 371,                 /* "@"  */
    DYNOP = 372,                   /* "<dynamic_operator>"  */
    LOCALE_EXP = 373,              /* "`foo`"  */
    RANGE_EMPTY = 374,             /* RANGE_EMPTY  */
    UMINUS = 375,                  /* UMINUS  */
    UTIMES = 376,                  /* UTIMES  */
    STMT_ASSOC = 378,              /* STMT_ASSOC  */
    STMT_NOASSOC = 379             /* STMT_NOASSOC  */
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
#define LOCALE 311
#define LOCALE_INI 312
#define LOCALE_END 313
#define LATE 314
#define NUM 315
#define FLOATT 316
#define STRING_LIT 317
#define CHAR_LIT 318
#define INTERP_START 319
#define INTERP_EXP 320
#define PP_COMMENT 321
#define PP_INCLUDE 322
#define PP_DEFINE 323
#define PP_PRAGMA 324
#define PP_UNDEF 325
#define PP_IFDEF 326
#define PP_IFNDEF 327
#define PP_ELSE 328
#define PP_ENDIF 329
#define PP_NL 330
#define PP_IMPORT 331
#define SPREAD 332
#define INTERP_LIT 333
#define INTERP_END 334
#define ID 336
#define PLUS 337
#define PLUSPLUS 338
#define MINUS 339
#define MINUSMINUS 340
#define TIMES 341
#define DIVIDE 342
#define PERCENT 343
#define DOLLAR 344
#define QUESTION 345
#define OPTIONS 346
#define COLON 347
#define COLONCOLON 348
#define QUESTIONCOLON 349
#define NEW 350
#define SPORK 351
#define FORK 352
#define L_HACK 353
#define R_HACK 354
#define AND 355
#define EQ 356
#define GE 357
#define GT 358
#define LE 359
#define LT 360
#define NEQ 361
#define SHIFT_LEFT 362
#define SHIFT_RIGHT 363
#define S_AND 364
#define S_OR 365
#define S_XOR 366
#define OR 367
#define TMPL 368
#define TILDA 369
#define EXCLAMATION 370
#define AROBASE 371
#define DYNOP 372
#define LOCALE_EXP 373
#define RANGE_EMPTY 374
#define UMINUS 375
#define UTIMES 376
#define STMT_ASSOC 378
#define STMT_NOASSOC 379

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
  Type_Decl* type_decl;
  Exp   exp;
  struct Func_Base_ *func_base;
  struct Stmt_ stmt;
  Stmt stmt_ptr;
  Handler handler;
  ParserHandler handler_list;
  Stmt_List stmt_list;
  Arg_List arg_list;
  Capture capture;
  Capture_List captures;
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

#line 358 "include/parser.h"

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
