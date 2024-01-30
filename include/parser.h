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
    INTEGER = 316,                 /* INTEGER  */
    FLOATT = 318,                  /* "<float>"  */
    STRING_LIT = 319,              /* "<litteral string>"  */
    CHAR_LIT = 320,                /* "<litteral char>"  */
    INTERP_START = 321,            /* "${"  */
    INTERP_EXP = 322,              /* INTERP_EXP  */
    PP_COMMENT = 323,              /* "<comment>"  */
    PP_INCLUDE = 324,              /* "#include"  */
    PP_DEFINE = 325,               /* "#define"  */
    PP_PRAGMA = 326,               /* "#pragma"  */
    PP_UNDEF = 327,                /* "#undef"  */
    PP_IFDEF = 328,                /* "#ifdef"  */
    PP_IFNDEF = 329,               /* "#ifndef"  */
    PP_ELSE = 330,                 /* "#else"  */
    PP_ENDIF = 331,                /* "#if"  */
    PP_NL = 332,                   /* "\n"  */
    PP_IMPORT = 333,               /* "import"  */
    SPREAD = 334,                  /* "}..."  */
    INTERP_LIT = 335,              /* "<interp string lit>"  */
    INTERP_END = 336,              /* "<interp string end>"  */
    ID = 338,                      /* "<identifier>"  */
    PLUS = 339,                    /* "+"  */
    PLUSPLUS = 340,                /* "++"  */
    MINUS = 341,                   /* "-"  */
    MINUSMINUS = 342,              /* "--"  */
    TIMES = 343,                   /* "*"  */
    DIVIDE = 344,                  /* "/"  */
    PERCENT = 345,                 /* "%"  */
    DOLLAR = 346,                  /* "$"  */
    QUESTION = 347,                /* "?"  */
    OPTIONS = 348,                 /* OPTIONS  */
    COLON = 349,                   /* ":"  */
    COLONCOLON = 350,              /* "::"  */
    QUESTIONCOLON = 351,           /* "?:"  */
    NEW = 352,                     /* "new"  */
    SPORK = 353,                   /* "spork"  */
    FORK = 354,                    /* "fork"  */
    L_HACK = 355,                  /* "<<<"  */
    R_HACK = 356,                  /* ">>>"  */
    AND = 357,                     /* "&&"  */
    EQ = 358,                      /* "=="  */
    GE = 359,                      /* ">="  */
    GT = 360,                      /* ">"  */
    LE = 361,                      /* "<="  */
    LT = 362,                      /* "<"  */
    NEQ = 363,                     /* "!="  */
    SHIFT_LEFT = 364,              /* "<<"  */
    SHIFT_RIGHT = 365,             /* ">>"  */
    S_AND = 366,                   /* "&"  */
    S_OR = 367,                    /* "|"  */
    S_XOR = 368,                   /* "^"  */
    OR = 369,                      /* "||"  */
    TMPL = 370,                    /* ":["  */
    TILDA = 371,                   /* "~"  */
    EXCLAMATION = 372,             /* "!"  */
    AROBASE = 373,                 /* "@"  */
    DYNOP = 374,                   /* "<dynamic_operator>"  */
    LOCALE_EXP = 375,              /* "`foo`"  */
    RANGE_EMPTY = 376,             /* RANGE_EMPTY  */
    UMINUS = 377,                  /* UMINUS  */
    UTIMES = 378,                  /* UTIMES  */
    STMT_ASSOC = 380,              /* STMT_ASSOC  */
    STMT_NOASSOC = 381             /* STMT_NOASSOC  */
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
#define INTEGER 316
#define FLOATT 318
#define STRING_LIT 319
#define CHAR_LIT 320
#define INTERP_START 321
#define INTERP_EXP 322
#define PP_COMMENT 323
#define PP_INCLUDE 324
#define PP_DEFINE 325
#define PP_PRAGMA 326
#define PP_UNDEF 327
#define PP_IFDEF 328
#define PP_IFNDEF 329
#define PP_ELSE 330
#define PP_ENDIF 331
#define PP_NL 332
#define PP_IMPORT 333
#define SPREAD 334
#define INTERP_LIT 335
#define INTERP_END 336
#define ID 338
#define PLUS 339
#define PLUSPLUS 340
#define MINUS 341
#define MINUSMINUS 342
#define TIMES 343
#define DIVIDE 344
#define PERCENT 345
#define DOLLAR 346
#define QUESTION 347
#define OPTIONS 348
#define COLON 349
#define COLONCOLON 350
#define QUESTIONCOLON 351
#define NEW 352
#define SPORK 353
#define FORK 354
#define L_HACK 355
#define R_HACK 356
#define AND 357
#define EQ 358
#define GE 359
#define GT 360
#define LE 361
#define LT 362
#define NEQ 363
#define SHIFT_LEFT 364
#define SHIFT_RIGHT 365
#define S_AND 366
#define S_OR 367
#define S_XOR 368
#define OR 369
#define TMPL 370
#define TILDA 371
#define EXCLAMATION 372
#define AROBASE 373
#define DYNOP 374
#define LOCALE_EXP 375
#define RANGE_EMPTY 376
#define UMINUS 377
#define UTIMES 378
#define STMT_ASSOC 380
#define STMT_NOASSOC 381

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "src/gwion.y"

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
  Stmt* stmt_ptr;
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
  EnumValue_List enum_list;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section section;
  ID_List id_list;
  Specialized specialized;
  Specialized_List specialized_list;
  TmplArg tmplarg;
  TmplArg_List tmplarg_list;
  Variable variable;
  Variable_List variable_list;
  Extend_Def extend_def;
  Class_Def class_def;
  Trait_Def trait_def;
  Prim_Def prim_def;
  Ast ast;

#line 367 "include/parser.h"

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
