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
    RBRACK2 = 264,                 /* ",]"  */
    LBRACE = 265,                  /* "{"  */
    RBRACE = 266,                  /* "}"  */
    FUNCTION = 267,                /* "fun"  */
    VAR = 268,                     /* "var"  */
    IF = 269,                      /* "if"  */
    ELSE = 270,                    /* "else"  */
    WHILE = 271,                   /* "while"  */
    DO = 272,                      /* "do"  */
    UNTIL = 273,                   /* "until"  */
    LOOP = 274,                    /* "repeat"  */
    FOR = 275,                     /* "for"  */
    FOREACH = 276,                 /* "foreach"  */
    MATCH = 277,                   /* "match"  */
    CASE = 278,                    /* "case"  */
    WHEN = 279,                    /* "when"  */
    WHERE = 280,                   /* "where"  */
    ENUM = 281,                    /* "enum"  */
    TRETURN = 282,                 /* "return"  */
    BREAK = 283,                   /* "break"  */
    CONTINUE = 284,                /* "continue"  */
    TRY = 285,                     /* "try"  */
    PERFORM = 286,                 /* "perform"  */
    HANDLET = 287,                 /* "handle"  */
    RETRY = 288,                   /* "retry"  */
    CLASS = 289,                   /* "class"  */
    STRUCT = 290,                  /* "struct"  */
    TRAIT = 291,                   /* "trait"  */
    STATIC = 292,                  /* "static"  */
    GLOBAL = 293,                  /* "global"  */
    PRIVATE = 294,                 /* "private"  */
    PROTECT = 295,                 /* "protect"  */
    ABSTRACT = 296,                /* "abstract"  */
    FINAL = 297,                   /* "final"  */
    EXTENDS = 298,                 /* "extends"  */
    DOT = 299,                     /* "."  */
    OPERATOR = 300,                /* "operator"  */
    PRIMITIVE = 301,               /* "primitive"  */
    TYPEDEF = 302,                 /* "typedef"  */
    DISTINCT = 303,                /* "distinct"  */
    FUNPTR = 304,                  /* "funptr"  */
    NOELSE = 305,                  /* NOELSE  */
    UNION = 306,                   /* "union"  */
    CONSTT = 307,                  /* "const"  */
    ELLIPSE = 308,                 /* "..."  */
    DEFER = 309,                   /* "defer"  */
    BACKSLASH = 310,               /* "\\"  */
    OPID_A = 311,                  /* OPID_A  */
    LOCALE = 312,                  /* LOCALE  */
    LOCALE_INI = 313,              /* LOCALE_INI  */
    LOCALE_END = 314,              /* LOCALE_END  */
    LATE = 315,                    /* "late"  */
    DECIMAL = 316,                 /* DECIMAL  */
    BINARY = 317,                  /* BINARY  */
    HEXA = 318,                    /* HEXA  */
    OCTAL = 319,                   /* OCTAL  */
    FLOATT = 321,                  /* "<float>"  */
    STRING_LIT = 322,              /* "<litteral string>"  */
    CHAR_LIT = 323,                /* "<litteral char>"  */
    INTERP_START = 324,            /* "${"  */
    INTERP_EXP = 325,              /* INTERP_EXP  */
    PP_COMMENT = 326,              /* "<comment>"  */
    PP_INCLUDE = 327,              /* "#include"  */
    PP_DEFINE = 328,               /* "#define"  */
    PP_PRAGMA = 329,               /* "#pragma"  */
    PP_UNDEF = 330,                /* "#undef"  */
    PP_IFDEF = 331,                /* "#ifdef"  */
    PP_IFNDEF = 332,               /* "#ifndef"  */
    PP_ELSE = 333,                 /* "#else"  */
    PP_ENDIF = 334,                /* "#if"  */
    PP_NL = 335,                   /* "\n"  */
    PP_IMPORT = 336,               /* "import"  */
    SPREAD = 337,                  /* "}..."  */
    INTERP_LIT = 338,              /* "<interp string lit>"  */
    INTERP_END = 339,              /* "<interp string end>"  */
    ID = 341,                      /* "<identifier>"  */
    PLUS = 342,                    /* "+"  */
    PLUSPLUS = 343,                /* "++"  */
    MINUS = 344,                   /* "-"  */
    MINUSMINUS = 345,              /* "--"  */
    TIMES = 346,                   /* "*"  */
    DIVIDE = 347,                  /* "/"  */
    PERCENT = 348,                 /* "%"  */
    DOLLAR = 349,                  /* "$"  */
    QUESTION = 350,                /* "?"  */
    OPTIONS = 351,                 /* OPTIONS  */
    COLON = 352,                   /* ":"  */
    COLONCOLON = 353,              /* "::"  */
    QUESTIONCOLON = 354,           /* "?:"  */
    NEW = 355,                     /* "new"  */
    SPORK = 356,                   /* "spork"  */
    FORK = 357,                    /* "fork"  */
    L_HACK = 358,                  /* "<<<"  */
    R_HACK = 359,                  /* ">>>"  */
    AND = 360,                     /* "&&"  */
    EQ = 361,                      /* "=="  */
    GE = 362,                      /* ">="  */
    GT = 363,                      /* ">"  */
    LE = 364,                      /* "<="  */
    LT = 365,                      /* "<"  */
    NEQ = 366,                     /* "!="  */
    SHIFT_LEFT = 367,              /* "<<"  */
    SHIFT_RIGHT = 368,             /* ">>"  */
    S_AND = 369,                   /* "&"  */
    S_OR = 370,                    /* "|"  */
    S_XOR = 371,                   /* "^"  */
    OR = 372,                      /* "||"  */
    TMPL = 373,                    /* ":["  */
    TILDA = 374,                   /* "~"  */
    EXCLAMATION = 375,             /* "!"  */
    AROBASE = 376,                 /* "@"  */
    DYNOP = 377,                   /* "<dynamic_operator>"  */
    LOCALE_EXP = 378,              /* "`foo`"  */
    RANGE_EMPTY = 379,             /* RANGE_EMPTY  */
    UMINUS = 380,                  /* UMINUS  */
    UTIMES = 381,                  /* UTIMES  */
    STMT_ASSOC = 383,              /* STMT_ASSOC  */
    STMT_NOASSOC = 384             /* STMT_NOASSOC  */
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
#define RBRACK2 264
#define LBRACE 265
#define RBRACE 266
#define FUNCTION 267
#define VAR 268
#define IF 269
#define ELSE 270
#define WHILE 271
#define DO 272
#define UNTIL 273
#define LOOP 274
#define FOR 275
#define FOREACH 276
#define MATCH 277
#define CASE 278
#define WHEN 279
#define WHERE 280
#define ENUM 281
#define TRETURN 282
#define BREAK 283
#define CONTINUE 284
#define TRY 285
#define PERFORM 286
#define HANDLET 287
#define RETRY 288
#define CLASS 289
#define STRUCT 290
#define TRAIT 291
#define STATIC 292
#define GLOBAL 293
#define PRIVATE 294
#define PROTECT 295
#define ABSTRACT 296
#define FINAL 297
#define EXTENDS 298
#define DOT 299
#define OPERATOR 300
#define PRIMITIVE 301
#define TYPEDEF 302
#define DISTINCT 303
#define FUNPTR 304
#define NOELSE 305
#define UNION 306
#define CONSTT 307
#define ELLIPSE 308
#define DEFER 309
#define BACKSLASH 310
#define OPID_A 311
#define LOCALE 312
#define LOCALE_INI 313
#define LOCALE_END 314
#define LATE 315
#define DECIMAL 316
#define BINARY 317
#define HEXA 318
#define OCTAL 319
#define FLOATT 321
#define STRING_LIT 322
#define CHAR_LIT 323
#define INTERP_START 324
#define INTERP_EXP 325
#define PP_COMMENT 326
#define PP_INCLUDE 327
#define PP_DEFINE 328
#define PP_PRAGMA 329
#define PP_UNDEF 330
#define PP_IFDEF 331
#define PP_IFNDEF 332
#define PP_ELSE 333
#define PP_ENDIF 334
#define PP_NL 335
#define PP_IMPORT 336
#define SPREAD 337
#define INTERP_LIT 338
#define INTERP_END 339
#define ID 341
#define PLUS 342
#define PLUSPLUS 343
#define MINUS 344
#define MINUSMINUS 345
#define TIMES 346
#define DIVIDE 347
#define PERCENT 348
#define DOLLAR 349
#define QUESTION 350
#define OPTIONS 351
#define COLON 352
#define COLONCOLON 353
#define QUESTIONCOLON 354
#define NEW 355
#define SPORK 356
#define FORK 357
#define L_HACK 358
#define R_HACK 359
#define AND 360
#define EQ 361
#define GE 362
#define GT 363
#define LE 364
#define LT 365
#define NEQ 366
#define SHIFT_LEFT 367
#define SHIFT_RIGHT 368
#define S_AND 369
#define S_OR 370
#define S_XOR 371
#define OR 372
#define TMPL 373
#define TILDA 374
#define EXCLAMATION 375
#define AROBASE 376
#define DYNOP 377
#define LOCALE_EXP 378
#define RANGE_EMPTY 379
#define UMINUS 380
#define UTIMES 381
#define STMT_ASSOC 383
#define STMT_NOASSOC 384

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "src/gwion.y"

  bool yybool;
  ae_stmt_t stmt_t;
  char* sval;
  long long integer;
  struct yyint yyint;
  struct gwint gwint;
  struct AstString string;
  int ival;
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
  EnumValue enum_value;
  Enum_List enum_list;
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
  Prim_Def prim_def;
  Ast ast;

#line 371 "include/parser.h"

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
