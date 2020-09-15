/* A Bison parser, made by GNU Bison 3.6.4.  */

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
    PASTE = 299,                   /* "##"  */
    ELLIPSE = 300,                 /* "..."  */
    VARLOOP = 301,                 /* "varloop"  */
    BACKSLASH = 302,               /* "\\"  */
    OPID_A = 303,                  /* OPID_A  */
    OPID_D = 304,                  /* OPID_D  */
    REF = 305,                     /* "ref"  */
    NONNULL = 306,                 /* "nonnull"  */
    NUM = 307,                     /* "<integer>"  */
    FLOATT = 308,                  /* FLOATT  */
    ID = 309,                      /* "<identifier>"  */
    STRING_LIT = 310,              /* "<litteral string>"  */
    CHAR_LIT = 311,                /* "<litteral char>"  */
    INTERP_START = 312,            /* "`"  */
    INTERP_LIT = 313,              /* "<interp string>"  */
    INTERP_EXP = 314,              /* INTERP_EXP  */
    INTERP_END = 315,              /* "<interp string>`"  */
    PP_COMMENT = 316,              /* "<comment>"  */
    PP_INCLUDE = 317,              /* "#include"  */
    PP_DEFINE = 318,               /* "#define"  */
    PP_PRAGMA = 319,               /* "#pragma"  */
    PP_UNDEF = 320,                /* "#undef"  */
    PP_IFDEF = 321,                /* "#ifdef"  */
    PP_IFNDEF = 322,               /* "#ifndef"  */
    PP_ELSE = 323,                 /* "#else"  */
    PP_ENDIF = 324,                /* "#if"  */
    PP_NL = 325,                   /* "\n"  */
    PLUS = 328,                    /* "+"  */
    PLUSPLUS = 329,                /* "++"  */
    MINUS = 330,                   /* "-"  */
    MINUSMINUS = 331,              /* "--"  */
    TIMES = 332,                   /* "*"  */
    DIVIDE = 333,                  /* "/"  */
    PERCENT = 334,                 /* "%"  */
    DOLLAR = 335,                  /* "$"  */
    QUESTION = 336,                /* "?"  */
    COLON = 337,                   /* ":"  */
    COLONCOLON = 338,              /* "::"  */
    QUESTIONCOLON = 339,           /* "?:"  */
    NEW = 340,                     /* "new"  */
    SPORK = 341,                   /* "spork"  */
    FORK = 342,                    /* "fork"  */
    TYPEOF = 343,                  /* "typeof"  */
    L_HACK = 344,                  /* "<<<"  */
    R_HACK = 345,                  /* ">>>"  */
    AND = 346,                     /* "&&"  */
    EQ = 347,                      /* "=="  */
    GE = 348,                      /* ">="  */
    GT = 349,                      /* ">"  */
    LE = 350,                      /* "<="  */
    LT = 351,                      /* "<"  */
    NEQ = 352,                     /* "!="  */
    SHIFT_LEFT = 353,              /* "<<"  */
    SHIFT_RIGHT = 354,             /* ">>"  */
    S_AND = 355,                   /* "&"  */
    S_OR = 356,                    /* "|"  */
    S_XOR = 357,                   /* "^"  */
    OR = 358,                      /* "||"  */
    TMPL = 359,                    /* ":["  */
    TILDA = 360,                   /* "~"  */
    EXCLAMATION = 361,             /* "!"  */
    DYNOP = 362,                   /* "<dynamic_operator>"  */
    UMINUS = 363,                  /* UMINUS  */
    UTIMES = 364                   /* UTIMES  */
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
#define PASTE 299
#define ELLIPSE 300
#define VARLOOP 301
#define BACKSLASH 302
#define OPID_A 303
#define OPID_D 304
#define REF 305
#define NONNULL 306
#define NUM 307
#define FLOATT 308
#define ID 309
#define STRING_LIT 310
#define CHAR_LIT 311
#define INTERP_START 312
#define INTERP_LIT 313
#define INTERP_EXP 314
#define INTERP_END 315
#define PP_COMMENT 316
#define PP_INCLUDE 317
#define PP_DEFINE 318
#define PP_PRAGMA 319
#define PP_UNDEF 320
#define PP_IFDEF 321
#define PP_IFNDEF 322
#define PP_ELSE 323
#define PP_ENDIF 324
#define PP_NL 325
#define PLUS 328
#define PLUSPLUS 329
#define MINUS 330
#define MINUSMINUS 331
#define TIMES 332
#define DIVIDE 333
#define PERCENT 334
#define DOLLAR 335
#define QUESTION 336
#define COLON 337
#define COLONCOLON 338
#define QUESTIONCOLON 339
#define NEW 340
#define SPORK 341
#define FORK 342
#define TYPEOF 343
#define L_HACK 344
#define R_HACK 345
#define AND 346
#define EQ 347
#define GE 348
#define GT 349
#define LE 350
#define LT 351
#define NEQ 352
#define SHIFT_LEFT 353
#define SHIFT_RIGHT 354
#define S_AND 355
#define S_OR 356
#define S_XOR 357
#define OR 358
#define TMPL 359
#define TILDA 360
#define EXCLAMATION 361
#define DYNOP 362
#define UMINUS 363
#define UTIMES 364

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

#line 310 "include/parser.h"

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
