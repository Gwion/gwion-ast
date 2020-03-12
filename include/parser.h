/* A Bison parser, made by GNU Bison 3.5.2.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_GWION_INCLUDE_PARSER_H_INCLUDED
# define YY_GWION_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int gwion_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    COMMA = 259,
    LPAREN = 260,
    RPAREN = 261,
    LBRACK = 262,
    RBRACK = 263,
    LBRACE = 264,
    RBRACE = 265,
    FUNCTION = 266,
    IF = 267,
    ELSE = 268,
    WHILE = 269,
    DO = 270,
    UNTIL = 271,
    LOOP = 272,
    FOR = 273,
    GOTO = 274,
    MATCH = 275,
    CASE = 276,
    WHEN = 277,
    WHERE = 278,
    ENUM = 279,
    TRETURN = 280,
    BREAK = 281,
    CONTINUE = 282,
    CLASS = 283,
    STATIC = 284,
    GLOBAL = 285,
    PRIVATE = 286,
    PROTECT = 287,
    EXTENDS = 288,
    DOT = 289,
    OPERATOR = 290,
    TYPEDEF = 291,
    NOELSE = 292,
    UNION = 293,
    CONSTT = 294,
    AUTO = 295,
    PASTE = 296,
    ELLIPSE = 297,
    VARLOOP = 298,
    RARROW = 299,
    BACKSLASH = 300,
    BACKTICK = 301,
    OPID = 302,
    REF = 303,
    NONNULL = 304,
    NUM = 305,
    FLOATT = 306,
    ID = 307,
    STRING_LIT = 308,
    CHAR_LIT = 309,
    INTERP_LIT = 310,
    INTERP_EXP = 311,
    PP_COMMENT = 312,
    PP_INCLUDE = 313,
    PP_DEFINE = 314,
    PP_PRAGMA = 315,
    PP_UNDEF = 316,
    PP_IFDEF = 317,
    PP_IFNDEF = 318,
    PP_ELSE = 319,
    PP_ENDIF = 320,
    PP_NL = 321,
    PLUS = 323,
    PLUSPLUS = 324,
    MINUS = 325,
    MINUSMINUS = 326,
    TIMES = 327,
    DIVIDE = 328,
    PERCENT = 329,
    DOLLAR = 330,
    QUESTION = 331,
    COLON = 332,
    COLONCOLON = 333,
    QUESTIONCOLON = 334,
    NEW = 335,
    SPORK = 336,
    FORK = 337,
    TYPEOF = 338,
    L_HACK = 339,
    R_HACK = 340,
    AND = 341,
    EQ = 342,
    GE = 343,
    GT = 344,
    LE = 345,
    LT = 346,
    NEQ = 347,
    SHIFT_LEFT = 348,
    SHIFT_RIGHT = 349,
    S_AND = 350,
    S_OR = 351,
    S_XOR = 352,
    OR = 353,
    LTMPL = 354,
    RTMPL = 355,
    TILDA = 356,
    EXCLAMATION = 357,
    DYNOP = 358,
    UMINUS = 359,
    UTIMES = 360
  };
#endif
/* Tokens.  */
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
#define GOTO 274
#define MATCH 275
#define CASE 276
#define WHEN 277
#define WHERE 278
#define ENUM 279
#define TRETURN 280
#define BREAK 281
#define CONTINUE 282
#define CLASS 283
#define STATIC 284
#define GLOBAL 285
#define PRIVATE 286
#define PROTECT 287
#define EXTENDS 288
#define DOT 289
#define OPERATOR 290
#define TYPEDEF 291
#define NOELSE 292
#define UNION 293
#define CONSTT 294
#define AUTO 295
#define PASTE 296
#define ELLIPSE 297
#define VARLOOP 298
#define RARROW 299
#define BACKSLASH 300
#define BACKTICK 301
#define OPID 302
#define REF 303
#define NONNULL 304
#define NUM 305
#define FLOATT 306
#define ID 307
#define STRING_LIT 308
#define CHAR_LIT 309
#define INTERP_LIT 310
#define INTERP_EXP 311
#define PP_COMMENT 312
#define PP_INCLUDE 313
#define PP_DEFINE 314
#define PP_PRAGMA 315
#define PP_UNDEF 316
#define PP_IFDEF 317
#define PP_IFNDEF 318
#define PP_ELSE 319
#define PP_ENDIF 320
#define PP_NL 321
#define PLUS 323
#define PLUSPLUS 324
#define MINUS 325
#define MINUSMINUS 326
#define TIMES 327
#define DIVIDE 328
#define PERCENT 329
#define DOLLAR 330
#define QUESTION 331
#define COLON 332
#define COLONCOLON 333
#define QUESTIONCOLON 334
#define NEW 335
#define SPORK 336
#define FORK 337
#define TYPEOF 338
#define L_HACK 339
#define R_HACK 340
#define AND 341
#define EQ 342
#define GE 343
#define GT 344
#define LE 345
#define LT 346
#define NEQ 347
#define SHIFT_LEFT 348
#define SHIFT_RIGHT 349
#define S_AND 350
#define S_OR 351
#define S_XOR 352
#define OR 353
#define LTMPL 354
#define RTMPL 355
#define TILDA 356
#define EXCLAMATION 357
#define DYNOP 358
#define UMINUS 359
#define UTIMES 360

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

#line 295 "include/parser.h"

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
