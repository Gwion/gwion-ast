%define api.pure full
%parse-param { Scanner* arg }
%lex-param  { void* scan }
%name-prefix "gwion_"
%locations

%{
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

#define LIST_FIRST(a)  map_set(&arg->map, (m_uint)a, (m_uint)a);

#define LIST_NEXT(a, b, t, c)                      \
  a = b;                                           \
  const t next = c;                                \
  const t list = (t)map_get(&arg->map, (m_uint)a); \
  list->next = next;                               \
  map_set(&arg->map, (m_uint) a, (m_uint)next);    \

#define LIST_REM(a) map_remove(&arg->map, (m_uint)a);

ANN int gwion_error(loc_t*, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);
%}

%union {
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
  Class_Def class_def;
  Ast ast;
};


%token SEMICOLON ";" COMMA ","
  LPAREN "(" RPAREN ")" LBRACK "[" RBRACK "]" LBRACE "{" RBRACE "}"
  FUNCTION "fun" VAR "var"
  IF "if" ELSE "else" WHILE "while" DO "do" UNTIL "until"
  LOOP "repeat" FOR "for" FOREACH "foreach" MATCH "match" CASE "case" WHEN "when" WHERE "where" ENUM "enum"
  TRETURN "return" BREAK "break" CONTINUE "continue"
  CLASS "class" STRUCT "struct"
  STATIC "static" GLOBAL "global" PRIVATE "private" PROTECT "protect" ABSTRACT "abstract" FINAL "final"
  EXTENDS "extends" DOT "."
  OPERATOR "operator"
  TYPEDEF "typedef" FUNCDEF "funcdef"
  NOELSE UNION "union" CONSTT "const" ELLIPSE "..." VARLOOP "varloop"
  BACKSLASH "\\" OPID_A OPID_E
  LATE "LATE"

%token<lval> NUM "<integer>"
%type<ival> flow breaks
%token<fval> FLOATT
%token<sval> STRING_LIT "<litteral string>" CHAR_LIT "<litteral char>" INTERP_START "`" INTERP_LIT "<interp string>" INTERP_EXP INTERP_END "<interp string>`"
  PP_COMMENT "<comment>" PP_INCLUDE "#include" PP_DEFINE "#define" PP_PRAGMA "#pragma"
  PP_UNDEF "#undef" PP_IFDEF "#ifdef" PP_IFNDEF "#ifndef" PP_ELSE "#else" PP_ENDIF "#if" PP_NL "\n" PP_REQUIRE "require"
%type<sym>op shift_op post_op rel_op eq_op unary_op add_op mul_op op_op OPID_A "@<operator id>" OPID_E "&<operator id>"
%token <sym> ID "<identifier>" PLUS "+" PLUSPLUS "++" MINUS "-" MINUSMINUS "--" TIMES "*" DIVIDE "/" PERCENT "%"
  DOLLAR "$" QUESTION "?" OPTIONS COLON ":" COLONCOLON "::" QUESTIONCOLON "?:"
  NEW "new" SPORK "spork" FORK "fork" TYPEOF "typeof"
  L_HACK "<<<" R_HACK ">>>"
  AND "&&" EQ "==" GE ">=" GT ">" LE "<=" LT "<"
  NEQ "!=" SHIFT_LEFT "<<" SHIFT_RIGHT ">>" S_AND "&" S_OR "|" S_XOR "^" OR "||"
  TMPL ":["
  TILDA "~" EXCLAMATION "!" DYNOP "<dynamic_operator>"
%type<uval> option
%type<flag> flag final modifier operator
  global storage_flag access_flag type_decl_flag type_decl_flag2
%type<fbflag> arg_type
%type<cflag> class_type
%type<sym>opt_id
%type<var_decl> var_decl arg_decl fptr_arg_decl
%type<var_decl_list> var_decl_list
%type<type_decl> type_decl_tmpl type_decl_noflag type_decl_opt type_decl_next type_decl type_decl_array type_decl_empty type_decl_exp class_ext
%type<exp> prim_exp decl_exp binary_exp call_paren interp interp_exp
%type<exp> opt_exp con_exp log_or_exp log_and_exp inc_or_exp exc_or_exp and_exp eq_exp
%type<exp> rel_exp shift_exp add_exp mul_exp dur_exp unary_exp typeof_exp
%type<exp> post_exp dot_exp cast_exp exp when_exp
%type<array_sub> array_exp array_empty array
%type<range> range
%type<stmt> stmt loop_stmt selection_stmt jump_stmt code_stmt exp_stmt where_stmt varloop_stmt
%type<stmt> match_case_stmt match_stmt stmt_pp
%type<stmt_list> stmt_list match_list
%type<arg_list> arg arg_list func_args lambda_arg lambda_list fptr_list fptr_arg fptr_args
%type<func_def> func_def op_def func_def_base abstract_fdef
%type<func_base> func_base fptr_base op_base
%type<enum_def> enum_def
%type<union_def> union_def
%type<fptr_def> fptr_def
%type<type_def> type_def
%type<section> section
%type<class_def> class_def
%type<ast> class_body
%type<id_list> id_list decl_template
%type<type_list> type_list call_template
%type<union_list> union_list
%type<ast> ast prg

%start prg

%nonassoc ";"
%right RANGE_EMPTY

%left "."
%right "!" "~"
%left "*" "/" "%"
%left "+" "-"
%right UMINUS UTIMES
%left "<<" ">>"
%left "&"
%left "^"
%left "|"
%left "<" "<=" ">" ">="
%left "=="  "!="
%left "&&"
%left "||"
%right "?:" "::"
%right "="

%nonassoc STMT_ASSOC
%nonassoc STMT_NOASSOC
%nonassoc NOELSE
%nonassoc ELSE

%destructor  { free_ast(mpool(arg), $$); } ast
%%

prg: ast { arg->ast = $$ = $1; /* no need for LIST_REM here */}
  | /* empty */ { gwion_error(&@$, arg, "file is empty."); YYERROR; }

ast
  : section { $$ = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), $1, NULL) : new_ast(mpool(arg), $1, NULL); LIST_FIRST($$) }
  | ast section { LIST_NEXT($$, $1, Ast, !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), $2, NULL) : new_ast(mpool(arg), $2, NULL)) }
  ;

section
  : stmt_list { $$ = new_section_stmt_list(mpool(arg), $1); LIST_REM($$) }
  | func_def  { $$ = new_section_func_def (mpool(arg), $1); }
  | class_def { $$ = new_section_class_def(mpool(arg), $1); }
  | enum_def  { $$ = new_section_enum_def(mpool(arg), $1); }
  | union_def { $$ = new_section_union_def(mpool(arg), $1); }
  | fptr_def  { $$ = new_section_fptr_def(mpool(arg), $1); }
  | type_def  { $$ = new_section_type_def(mpool(arg), $1); }
  ;

class_type: CLASS { $$ = cflag_none; } | STRUCT { $$ = cflag_struct; }
class_def
  : class_type flag modifier ID decl_template class_ext LBRACE class_body RBRACE
    {
      if($1 == cflag_struct && $6)
        { gwion_error(&@$, arg, "'struct' inherit other types"); YYERROR; }
      $$ = new_class_def(mpool(arg), $1 | $2 | $3, $4, $6, $8, @$);
      if($5)
        $$->base.tmpl = new_tmpl_base(mpool(arg), $5);
      if($1)
        $$->cflag |= cflag_struct;
  };

class_ext : EXTENDS type_decl_exp { $$ = $2; } | { $$ = NULL; };

class_body : ast | { $$ = NULL; };

id_list: ID { $$ = new_id_list(mpool(arg), $1); LIST_FIRST($$) }
       | id_list COMMA ID  { LIST_NEXT($$, $1, ID_List, new_id_list(mpool(arg), $3)) };

stmt_list: stmt  { $$ = new_stmt_list(mpool(arg), $1, NULL); LIST_FIRST($$) } |
  stmt_list stmt { LIST_NEXT($$, $1, Stmt_List, new_stmt_list(mpool(arg), $2, NULL)) };

fptr_base: flag type_decl_empty ID decl_template { $$ = new_func_base(mpool(arg), $2, $3, NULL, $1);
  if($4) { $$->tmpl = new_tmpl_base(mpool(arg), $4); } }

func_base: flag final type_decl_empty ID decl_template { $$ = new_func_base(mpool(arg), $3, $4, NULL, $1 | $2);
  if($5) { $$->tmpl = new_tmpl_base(mpool(arg), $5); } }

fptr_def: FUNCDEF fptr_base fptr_args arg_type SEMICOLON {
  $2->args = $3;
  $2->fbflag |= $4;
  $$ = new_fptr_def(mpool(arg), $2);
};

type_def: TYPEDEF flag type_decl_array ID decl_template SEMICOLON {
  $$ = new_type_def(mpool(arg), $3, $4);
  $3->flag |= $2;
  if($5)
    $$->tmpl = new_tmpl_base(mpool(arg), $5);
};

type_decl_array: type_decl array { $1->array = $2; } | type_decl

type_decl_exp: type_decl_array { if($1->array && !$1->array->exp)
    { gwion_error(&@$, arg, "can't instantiate with empty '[]'"); YYERROR;}
  $$ = $1; }

type_decl_empty: type_decl_array { if($1->array && $1->array->exp)
    { gwion_error(&@$, arg, "type must be defined with empty []'s"); YYERROR;}
  $$ = $1; }

arg
  : type_decl arg_decl ":" binary_exp { $$ = new_arg_list(mpool(arg), $1, $2, NULL); $$->exp = $4; }
  | type_decl arg_decl { $$ = new_arg_list(mpool(arg), $1, $2, NULL); };
arg_list:
     arg { $$ = $1; LIST_FIRST($1) }
  |  arg_list COMMA arg {
     LIST_NEXT($$, $1, Arg_List, $3)
     if(next->exp && !$3->exp)
        { gwion_error(&@3, arg, "missing default argument"); YYERROR;}
   };

fptr_arg: type_decl fptr_arg_decl { $$ = new_arg_list(mpool(arg), $1, $2, NULL); }
fptr_list: fptr_arg { $$ = $1; LIST_FIRST($$) } | fptr_list COMMA fptr_arg { LIST_NEXT($$, $1, Arg_List, $3) };

code_stmt
  : LBRACE RBRACE { $$ = new_stmt(mpool(arg), ae_stmt_code, @$); }
  | LBRACE stmt_list RBRACE { $$ = new_stmt_code(mpool(arg), $2, @$); LIST_REM($2) }
  ;

stmt_pp
  : PP_COMMENT { $$ = new_stmt_pp(mpool(arg), ae_pp_comment, $1, @$); }
  | PP_INCLUDE { $$ = new_stmt_pp(mpool(arg), ae_pp_include, $1, @$); }
  | PP_DEFINE  { $$ = new_stmt_pp(mpool(arg), ae_pp_define,  $1, @$); }
  | PP_PRAGMA  { $$ = new_stmt_pp(mpool(arg), ae_pp_pragma,  $1, @$); }
  | PP_UNDEF   { $$ = new_stmt_pp(mpool(arg), ae_pp_undef,   $1, @$); }
  | PP_IFDEF   { $$ = new_stmt_pp(mpool(arg), ae_pp_ifdef,   $1, @$); }
  | PP_IFNDEF  { $$ = new_stmt_pp(mpool(arg), ae_pp_ifndef,  $1, @$); }
  | PP_ELSE    { $$ = new_stmt_pp(mpool(arg), ae_pp_else,    $1, @$); }
  | PP_ENDIF   { $$ = new_stmt_pp(mpool(arg), ae_pp_endif,   $1, @$); }
  | PP_NL      { $$ = new_stmt_pp(mpool(arg), ae_pp_nl,      $1, @$); }
  | PP_REQUIRE { $$ = new_stmt_pp(mpool(arg), ae_pp_require, $1, @$); }
  ;

stmt
  : exp_stmt
  | loop_stmt
  | selection_stmt
  | code_stmt
  | match_stmt
  | jump_stmt
  | stmt_pp
  | varloop_stmt
  ;

opt_id: ID | { $$ = NULL; };

enum_def
  : ENUM flag opt_id LBRACE id_list RBRACE {
    $$ = new_enum_def(mpool(arg), $5, $3, @$);
    $$->flag = $2;
    LIST_REM($5)
  };

when_exp: WHEN exp { $$ = $2; LIST_REM($2) } | { $$ = NULL; }

match_case_stmt
  : CASE exp when_exp COLON stmt_list {
    $$ = new_stmt(mpool(arg), 0, @$);
    $$->d.stmt_match.cond = $2;
    $$->d.stmt_match.list = $5;
    $$->d.stmt_match.when = $3;
    LIST_REM($2)
    LIST_REM($5)
};

match_list
  : match_case_stmt { $$ = new_stmt_list(mpool(arg), $1, NULL); LIST_FIRST($$) }
  | match_list match_case_stmt { LIST_NEXT($$, $1, Stmt_List, new_stmt_list(mpool(arg), $2, NULL)) }

where_stmt: WHERE stmt { $$ = $2; } | { $$ = NULL; }

match_stmt: MATCH exp LBRACE match_list RBRACE where_stmt {
  $$ = new_stmt(mpool(arg), ae_stmt_match, @$);
  $$->d.stmt_match.cond  = $2;
  $$->d.stmt_match.list  = $4;
  $$->d.stmt_match.where = $6;
  LIST_REM($2)
  LIST_REM($4)
};

flow
  : WHILE { $$ = ae_stmt_while; }
  | UNTIL { $$ = ae_stmt_until; }

loop_stmt
  : flow LPAREN exp RPAREN stmt
    { $$ = new_stmt_flow(mpool(arg), $1, $3, $5, 0, @$); LIST_REM($3) }
  | DO stmt flow exp SEMICOLON
    { $$ = new_stmt_flow(mpool(arg), $3, $4, $2, 1, @$); LIST_REM($3) }
  | FOR LPAREN exp_stmt exp_stmt RPAREN stmt
      { $$ = new_stmt_for(mpool(arg), $3, $4, NULL, $6, @$); }
  | FOR LPAREN exp_stmt exp_stmt exp RPAREN stmt
      { $$ = new_stmt_for(mpool(arg), $3, $4, $5, $7, @$); LIST_REM($5) }
  | FOREACH LPAREN ID COLON binary_exp RPAREN stmt
      { $$ = new_stmt_each(mpool(arg), $3, $5, $7, @$); }
  | LOOP LPAREN exp RPAREN stmt
      { $$ = new_stmt_loop(mpool(arg), $3, $5, @$); LIST_REM($3) }
  ;

varloop_stmt: VARLOOP binary_exp code_stmt { $$ = new_stmt_varloop(mpool(arg), $2, $3, @$); }

selection_stmt
  : IF LPAREN exp RPAREN stmt %prec NOELSE
      { $$ = new_stmt_if(mpool(arg), $3, $5, @$); LIST_REM($3) }
  | IF LPAREN exp RPAREN stmt ELSE stmt
      { $$ = new_stmt_if(mpool(arg), $3, $5, @$); $$->d.stmt_if.else_body = $7; LIST_REM($3) }
  ;

breaks: BREAK     { $$ = ae_stmt_break; } | CONTINUE  { $$ = ae_stmt_continue; };
jump_stmt
  : TRETURN exp SEMICOLON { $$ = new_stmt_exp(mpool(arg), ae_stmt_return, $2, @$); LIST_REM($2) }
  | TRETURN SEMICOLON     { $$ = new_stmt(mpool(arg), ae_stmt_return, @$); }
  | breaks NUM SEMICOLON  { $$ = new_stmt(mpool(arg), $1, @$); $$->d.stmt_index.idx = $2; }
  | breaks SEMICOLON      { $$ = new_stmt(mpool(arg), $1, @$); $$->d.stmt_index.idx = -1; }
  ;

exp_stmt
  : exp SEMICOLON { $$ = new_stmt_exp(mpool(arg), ae_stmt_exp, $1, @$); LIST_REM($1) }
  | SEMICOLON     { $$ = new_stmt(mpool(arg), ae_stmt_exp, @$); }
  ;

exp:
    binary_exp           { $$ = $1; LIST_FIRST($$) }
  | exp COMMA binary_exp { LIST_NEXT($$, $1, Exp, $3) };

binary_exp
  : decl_exp
  | binary_exp OPID_A decl_exp     { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); }
  | binary_exp DYNOP decl_exp     { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
  | binary_exp OPTIONS decl_exp     { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };


call_template: TMPL type_list RBRACK { $$ = $2; } | { $$ = NULL; };

op: EQ | NEQ | DYNOP | OPTIONS;

array_exp
  : LBRACK exp RBRACK           { $$ = new_array_sub(mpool(arg), $2);  LIST_REM($2) }
  | LBRACK exp RBRACK array_exp {
    LIST_REM($2)
    if($2->next){ gwion_error(&@$, arg, "invalid format for array init [...][...]..."); YYERROR; } $$ = prepend_array_sub($4, $2);
  }
  | LBRACK exp RBRACK LBRACK RBRACK  { LIST_REM(2) gwion_error(&@$, arg, "partially empty array init [...][]..."); YYERROR; }
  ;

array_empty
  : LBRACK RBRACK             { $$ = new_array_sub(mpool(arg), NULL); }
  | array_empty LBRACK RBRACK { $$ = prepend_array_sub($1, NULL); }
  | array_empty array_exp     { gwion_error(&@$, arg, "partially empty array init [][...]"); YYERROR; }
  ;

range
  : LBRACK exp COLON exp RBRACK { $$ = new_range(mpool(arg), $2, $4); LIST_REM(2) LIST_REM($4) }
  | LBRACK exp COLON RBRACK     { $$ = new_range(mpool(arg), $2, NULL);  LIST_REM($2) }
  | LBRACK %prec RANGE_EMPTY COLON exp RBRACK     { $$ = new_range(mpool(arg), NULL, $3); LIST_REM($3) }
  ;

array: array_exp | array_empty;
decl_exp
  : con_exp
  | type_decl_flag2 flag type_decl_array var_decl_list { $$= new_exp_decl(mpool(arg), $3, $4, @$); $$->d.exp_decl.td->flag |= $1 | $2; };

func_args: LPAREN arg_list   { $$ = $2; LIST_REM($2) } | LPAREN { $$ = NULL; };
fptr_args: LPAREN fptr_list { $$ = $2; LIST_REM($2) } | LPAREN { $$ = NULL; };
arg_type: ELLIPSE RPAREN { $$ = fbflag_variadic; }| RPAREN { $$ = 0; };

decl_template: TMPL id_list RBRACK { $$ = $2; LIST_REM(2) } | { $$ = NULL; };

global: GLOBAL { $$ = ae_flag_global; arg->global = 1; }

storage_flag: STATIC { $$ = ae_flag_static; } | global;

access_flag: PRIVATE { $$ = ae_flag_private; }
  | PROTECT { $$ = ae_flag_protect; }
  ;

flag: access_flag { $$ = $1; }
  |  storage_flag { $$ = $1; }
  |  access_flag storage_flag { $$ = $1 | $2; }
  | { $$ = ae_flag_none; }
  ;

final: FINAL { $$ = ae_flag_final; } | { $$ = ae_flag_none; };

modifier: ABSTRACT { $$ = ae_flag_abstract; } | final;

func_def_base
  : FUNCTION func_base func_args arg_type code_stmt {
    $2->args = $3;
    $2->fbflag |= $4;
    $$ = new_func_def(mpool(arg), $2, $5, @$);
  };

abstract_fdef
  : FUNCTION flag ABSTRACT type_decl_empty ID decl_template fptr_args arg_type ";"
    { Func_Base *base = new_func_base(mpool(arg), $4, $5, NULL, $2 | ae_flag_abstract);
      if($6)
        base->tmpl = new_tmpl_base(mpool(arg), $6);
      base->args = $7;
      base->fbflag |= $8;
      $$ = new_func_def(mpool(arg), base, NULL, @$);
    };

op_op: op | shift_op | rel_op | mul_op | add_op;
op_base
  :  type_decl_empty op_op LPAREN arg COMMA arg RPAREN
    { $$ = new_func_base(mpool(arg), $1, $2, $4, ae_flag_none); $4->next = $6;}
  |  type_decl_empty post_op LPAREN arg RPAREN code_stmt
    { $$ = new_func_base(mpool(arg), $1, $2, $4, ae_flag_none); }
  |  unary_op type_decl_empty LPAREN arg RPAREN
    {
      $$ = new_func_base(mpool(arg), $2, $1, $4, ae_flag_none);
      $$->fbflag |= fbflag_unary;
    }
  | type_decl_empty OPID_A func_args RPAREN
    {
      $$ = new_func_base(mpool(arg), $1, $2, $3, ae_flag_none);
      $$->fbflag |= fbflag_internal;
    };

operator: OPERATOR { $$ = ae_flag_none; } | OPERATOR global { $$ = ae_flag_global; };
op_def:  operator op_base code_stmt
{ $$ = new_func_def(mpool(arg), $2, $3, @$); $2->fbflag |= fbflag_op; $2->flag |= $1; };

func_def: func_def_base | abstract_fdef | op_def { $$ = $1; $$->base->fbflag |= fbflag_op; };

type_decl_tmpl
  : ID call_template { $$ = new_type_decl(mpool(arg), $1, @$); $$->types = $2; }
  ;

type_decl_next
  : type_decl_tmpl
  | type_decl_tmpl "." type_decl_next { $1->next = $3; }
  ;

type_decl_noflag
  : type_decl_next { $$ = $1; }
  | typeof_exp { $$ = new_type_decl2(mpool(arg), $1, @$); }
  ;

option: "?" { $$ = 1; } | OPTIONS { $$ = strlen(s_name($1)); } | { $$ = 0; };
type_decl_opt: type_decl_noflag option { $$ = $1; $$->option |= $2; };
type_decl: type_decl_opt | type_decl_flag type_decl_opt { $$ = $2; $$->flag |= $1; };

type_decl_flag
  : LATE { $$ = ae_flag_late; }
  | CONSTT { $$ = ae_flag_const; };

type_decl_flag2: "var"  { $$ = ae_flag_none; } | type_decl_flag

union_list: type_decl_empty ID ";" { $$ = new_union_list(mpool(arg), $1, $2, @$); }
  | type_decl_empty ID ";" union_list { $$ = new_union_list(mpool(arg), $1, $2, @$); $$->next = $4; };

union_def
  : UNION flag ID decl_template LBRACE union_list RBRACE {
      $$ = new_union_def(mpool(arg), $6, @$);
      $$->xid = $3;
      $$->flag = $2;
      if($4)
        $$->tmpl = new_tmpl_base(mpool(arg), $4);
    }
  ;

var_decl_list
  : var_decl COMMA var_decl_list { $$ = new_var_decl_list(mpool(arg), $1, $3); }
  | var_decl { $$ = new_var_decl_list(mpool(arg), $1, NULL); }
  ;

var_decl: ID { $$ = new_var_decl(mpool(arg), $1, NULL, @$); }
  | ID array   { $$ = new_var_decl(mpool(arg), $1,   $2, @$); };

arg_decl: ID { $$ = new_var_decl(mpool(arg), $1, NULL, @$); }
  | ID array_empty { $$ = new_var_decl(mpool(arg), $1,   $2, @$); }
  | ID array_exp { gwion_error(&@$, arg, "argument/union must be defined with empty []'s"); YYERROR; };
fptr_arg_decl: arg_decl | { $$ = new_var_decl(mpool(arg), NULL, NULL, @$); }

eq_op : EQ | NEQ;
rel_op: LT | GT | LE | GE;
shift_op: SHIFT_LEFT | SHIFT_RIGHT;
add_op: PLUS | MINUS;
mul_op: TIMES | DIVIDE | PERCENT;

opt_exp: exp { $$ = $1; LIST_REM($1) } | { $$ = NULL; }
con_exp: log_or_exp
  | log_or_exp QUESTION opt_exp COLON con_exp
      { $$ = new_exp_if(mpool(arg), $1, $3, $5, @$); };
  | log_or_exp QUESTIONCOLON con_exp
      { $$ = new_exp_if(mpool(arg), $1, NULL, $3, @$); };

log_or_exp: log_and_exp | log_or_exp OR log_and_exp  { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
log_and_exp: inc_or_exp | log_and_exp AND inc_or_exp { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
inc_or_exp: exc_or_exp | inc_or_exp S_OR exc_or_exp  { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
exc_or_exp: and_exp | exc_or_exp S_XOR and_exp       { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
and_exp: eq_exp | and_exp S_AND eq_exp               { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
eq_exp: rel_exp | eq_exp eq_op rel_exp               { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
rel_exp: shift_exp | rel_exp rel_op shift_exp        { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
shift_exp: add_exp | shift_exp shift_op add_exp      { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
add_exp: mul_exp | add_exp add_op mul_exp            { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
mul_exp: dur_exp | mul_exp mul_op dur_exp            { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
dur_exp: cast_exp | dur_exp "::" cast_exp            { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };

cast_exp: unary_exp | cast_exp DOLLAR type_decl_empty
    { $$ = new_exp_cast(mpool(arg), $3, $1, @$); };

unary_op : MINUS %prec UMINUS | TIMES %prec UTIMES | post_op
  | EXCLAMATION | SPORK | FORK | TILDA
  ;

unary_exp : post_exp
  | unary_op unary_exp { $$ = new_exp_unary(mpool(arg), $1, $2, @$); }
  | LPAREN OPID_E RPAREN unary_exp { $$ = new_exp_unary(mpool(arg), $2, $4, @$); }
  | NEW type_decl_exp {$$ = new_exp_unary2(mpool(arg), $1, $2, @$); }
  | SPORK code_stmt   { $$ = new_exp_unary3(mpool(arg), $1, $2, @$); };
  | FORK code_stmt   { $$ = new_exp_unary3(mpool(arg), $1, $2, @$); };
  | "$" type_decl_empty { $$ = new_exp_td(mpool(arg), $2, @$); };

lambda_list:
 ID { $$ = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), $1, NULL, @$), NULL); }
|    ID lambda_list { $$ = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), $1, NULL, @$), $2); }
lambda_arg: BACKSLASH lambda_list { $$ = $2; } | BACKSLASH { $$ = NULL; }

type_list
  : type_decl_empty { $$ = new_type_list(mpool(arg), $1, NULL); }
  | type_decl_empty COMMA type_list { $$ = new_type_list(mpool(arg), $1, $3); }
  ;


call_paren : LPAREN exp RPAREN { $$ = $2; LIST_REM($2) } | LPAREN RPAREN { $$ = NULL; };

post_op : PLUSPLUS | MINUSMINUS;

dot_exp: post_exp DOT ID {
  if($1->next) {
    gwion_error(&@$, arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  $$ = new_exp_dot(mpool(arg), $1, $3, @$);
};

post_exp: prim_exp
  | post_exp array_exp
    { $$ = new_exp_array(mpool(arg), $1, $2, @$); }
  | post_exp range
    { $$ = new_exp_slice(mpool(arg), $1, $2, @$); }
  | post_exp call_template call_paren
    { $$ = new_exp_call(mpool(arg), $1, $3, @$);
      if($2)$$->d.exp_call.tmpl = new_tmpl_call(mpool(arg), $2); }
  | post_exp post_op
    { $$ = new_exp_post(mpool(arg), $1, $2, @$); }
  | post_exp OPID_E
    { $$ = new_exp_post(mpool(arg), $1, $2, @$); }
  | dot_exp { $$ = $1; }
  ;

interp_exp
  : INTERP_END { $$ = new_prim_string(mpool(arg), $1, @$); }
  | INTERP_LIT interp_exp { $$ = new_prim_string(mpool(arg), $1, @$); $$->next = $2; }
  | exp INTERP_EXP interp_exp { $$ = $1; $$->next = $3; LIST_REM($1) }

interp: INTERP_START interp_exp { $$ = $2; }
| interp INTERP_START interp_exp {
  if(!$3->next) {
    char c[strlen($1->d.prim.d.str) + strlen($3->d.prim.d.str) + 1];
    sprintf(c, "%s%s\n", $1->d.prim.d.str, $3->d.prim.d.str);
    $1->d.prim.d.str = s_name(insert_symbol(c));
    $1->pos.last = $3->pos.last;
    free_exp(mpool(arg), $3);
  } else
  $1->next = $3;
}

typeof_exp: TYPEOF LPAREN exp RPAREN { $$ = new_prim_typeof(mpool(arg), $3, @$); LIST_REM($3) };

prim_exp
  : ID                  { $$ = new_prim_id(     mpool(arg), $1, @$); }
  | NUM                 { $$ = new_prim_int(    mpool(arg), $1, @$); }
  | FLOATT              { $$ = new_prim_float(  mpool(arg), $1, @$); }
  | interp              { $$ = !$1->next ? $1 : new_prim_interp(mpool(arg), $1, @$); }
  | STRING_LIT          { $$ = new_prim_string( mpool(arg), $1, @$); }
  | CHAR_LIT            { $$ = new_prim_char(   mpool(arg), $1, @$); }
  | array               { $$ = new_prim_array(  mpool(arg), $1, @$); }
  | range               { $$ = new_prim_range(  mpool(arg), $1, @$); }
  | L_HACK exp R_HACK   { $$ = new_prim_hack(   mpool(arg), $2, @$); LIST_REM(2) }
  | LPAREN exp RPAREN   { $$ = $2; LIST_REM($2) }
  | lambda_arg code_stmt { $$ = new_exp_lambda( mpool(arg), lambda_name(arg), $1, $2, @$); };
  | LPAREN RPAREN       { $$ = new_prim_nil(    mpool(arg),     @$); }
  | typeof_exp { $$ = $1; }
  ;
%%
