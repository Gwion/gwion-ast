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
    NOELSE = 295,                  /* NOELSE  */
    UNION = 296,                   /* "union"  */
    CONSTT = 297,                  /* "const"  */
    PASTE = 298,                   /* "##"  */
    ELLIPSE = 299,                 /* "..."  */
    VARLOOP = 300,                 /* "varloop"  */
    BACKSLASH = 301,               /* "\\"  */
    BACKTICK = 302,                /* "`"  */
    OPID_A = 303,                  /* OPID_A  */
    OPID_D = 304,                  /* OPID_D  */
    REF = 305,                     /* "ref"  */
    NONNULL = 306,                 /* "nonnull"  */
    NUM = 307,                     /* "<integer>"  */
    FLOATT = 308,                  /* FLOATT  */
    ID = 309,                      /* "<identifier>"  */
    STRING_LIT = 310,              /* "<litteral string>"  */
    CHAR_LIT = 311,                /* "<litteral char>"  */
    INTERP_LIT = 312,              /* "<interp string>"  */
    INTERP_EXP = 313,              /* INTERP_EXP  */
    PP_COMMENT = 314,              /* "<comment>"  */
    PP_INCLUDE = 315,              /* "#include"  */
    PP_DEFINE = 316,               /* "#define"  */
    PP_PRAGMA = 317,               /* "#pragma"  */
    PP_UNDEF = 318,                /* "#undef"  */
    PP_IFDEF = 319,                /* "#ifdef"  */
    PP_IFNDEF = 320,               /* "#ifndef"  */
    PP_ELSE = 321,                 /* "#else"  */
    PP_ENDIF = 322,                /* "#if"  */
    PP_NL = 323,                   /* "\n"  */
    PLUS = 326,                    /* "+"  */
    PLUSPLUS = 327,                /* "++"  */
    MINUS = 328,                   /* "-"  */
    MINUSMINUS = 329,              /* "--"  */
    TIMES = 330,                   /* "*"  */
    DIVIDE = 331,                  /* "/"  */
    PERCENT = 332,                 /* "%"  */
    DOLLAR = 333,                  /* "$"  */
    QUESTION = 334,                /* "?"  */
    COLON = 335,                   /* ":"  */
    COLONCOLON = 336,              /* "::"  */
    QUESTIONCOLON = 337,           /* "?:"  */
    NEW = 338,                     /* "new"  */
    SPORK = 339,                   /* "spork"  */
    FORK = 340,                    /* "fork"  */
    TYPEOF = 341,                  /* "typeof"  */
    L_HACK = 342,                  /* "<<<"  */
    R_HACK = 343,                  /* ">>>"  */
    AND = 344,                     /* "&&"  */
    EQ = 345,                      /* "=="  */
    GE = 346,                      /* ">="  */
    GT = 347,                      /* ">"  */
    LE = 348,                      /* "<="  */
    LT = 349,                      /* "<"  */
    NEQ = 350,                     /* "!="  */
    SHIFT_LEFT = 351,              /* "<<"  */
    SHIFT_RIGHT = 352,             /* ">>"  */
    S_AND = 353,                   /* "&"  */
    S_OR = 354,                    /* "|"  */
    S_XOR = 355,                   /* "^"  */
    OR = 356,                      /* "||"  */
    LTMPL = 357,                   /* "<~"  */
    RTMPL = 358,                   /* "~>"  */
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
#define NOELSE 295
#define UNION 296
#define CONSTT 297
#define PASTE 298
#define ELLIPSE 299
#define VARLOOP 300
#define BACKSLASH 301
#define BACKTICK 302
#define OPID_A 303
#define OPID_D 304
#define REF 305
#define NONNULL 306
#define NUM 307
#define FLOATT 308
#define ID 309
#define STRING_LIT 310
#define CHAR_LIT 311
#define INTERP_LIT 312
#define INTERP_EXP 313
#define PP_COMMENT 314
#define PP_INCLUDE 315
#define PP_DEFINE 316
#define PP_PRAGMA 317
#define PP_UNDEF 318
#define PP_IFDEF 319
#define PP_IFNDEF 320
#define PP_ELSE 321
#define PP_ENDIF 322
#define PP_NL 323
#define PLUS 326
#define PLUSPLUS 327
#define MINUS 328
#define MINUSMINUS 329
#define TIMES 330
#define DIVIDE 331
#define PERCENT 332
#define DOLLAR 333
#define QUESTION 334
#define COLON 335
#define COLONCOLON 336
#define QUESTIONCOLON 337
#define NEW 338
#define SPORK 339
#define FORK 340
#define TYPEOF 341
#define L_HACK 342
#define R_HACK 343
#define AND 344
#define EQ 345
#define GE 346
#define GT 347
#define LE 348
#define LT 349
#define NEQ 350
#define SHIFT_LEFT 351
#define SHIFT_RIGHT 352
#define S_AND 353
#define S_OR 354
#define S_XOR 355
#define OR 356
#define LTMPL 357
#define RTMPL 358
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
