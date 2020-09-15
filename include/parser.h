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

#line 308 "include/parser.h"

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
