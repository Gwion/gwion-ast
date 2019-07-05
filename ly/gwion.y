%define api.pure full
%parse-param { Scanner* arg }
%lex-param  { void* scan }
%name-prefix "gwion_"
%locations
%{
#include <stdio.h> // strlen in paste operation
#include <string.h> // strlen in paste operation
#include <math.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"
#include "lexer.h"


#define YYERROR_VERBOSE
#define YYMALLOC xmalloc
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))
#define OP_SYM(a) insert_symbol(op2str(a))
#define GET_LOC(a) loc_cpy(mpool(arg), a)
ANN void gwion_error(YYLTYPE*, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);
m_str op2str(const Operator op);
%}

%union {
  char* sval;
  int ival;
  long unsigned int lval;
  ae_flag flag;
  m_float fval;
  Symbol sym;
  Array_Sub array_sub;
  Var_Decl var_decl;
  Var_Decl_List var_decl_list;
  Type_Decl* type_decl;
  Exp   exp;
  struct Func_Base_ *func_base;
  Stmt_Fptr func_type;
  Stmt stmt;
  Stmt_List stmt_list;
  Arg_List arg_list;
  Decl_List decl_list;
  Func_Def func_def;
  Section* section;
  ID_List id_list;
  Type_List type_list;
  Class_Body class_body;
//  ID_List class_ext;
  Class_Def class_def;
  Ast ast;
};



%token SEMICOLON ";" CHUCK "=>" COMMA "," DIVIDE "/" TIMES "*" PERCENT "%"
  L_HACK "<<<" R_HACK ">>>" LPAREN "(" RPAREN ")"
  LBRACK "[" RBRACK "]" LBRACE "{" RBRACE "}" PLUSCHUCK "+=>" MINUSCHUCK "-=>"
  TIMESCHUCK "*=>" DIVIDECHUCK "/=>" MODULOCHUCK "%=>" ATCHUCK "@=>" UNCHUCK "@=<" TRIG "]=>" UNTRIG "[=<" 
  PERCENTPAREN "%(" SHARPPAREN "#("
  ATSYM "@" FUNCTION "fun" DOLLAR "$" TILDA "~" QUESTION "?" COLON ":" EXCLAMATION "!"
  IF "if" ELSE "else" WHILE "while" DO "do" UNTIL "until"
  LOOP "repeat" FOR "for" GOTO "goto" SWITCH "switch" CASE "case" ENUM "enum"
  RETURN "return" BREAK "break" CONTINUE "continue"
  PLUSPLUS "++" MINUSMINUS "--" NEW "new"
  SPORK "spork" FORK "fork" CLASS "class" STATIC "static" GLOBAL "global" PRIVATE "private"
  PROTECT "protect" EXTENDS "extends" DOT "." COLONCOLON "::" AND "&&" EQ "==" GE ">=" GT ">" LE "<=" LT "<"
  MINUS "-" PLUS "+" NEQ "!=" SHIFT_LEFT "<<" SHIFT_RIGHT ">>" S_AND "&" S_OR "|" S_XOR "^" OR "||"
  AST_DTOR "dtor" OPERATOR "operator"
  TYPEDEF "typedef" RSL "<<=>" RSR ">>=>" RSAND "&=>" RSOR "|=>" RSXOR "^=>"
  LTMPL "<~" RTMPL "~>"
  NOELSE UNION "union" ATPAREN "@(" TYPEOF "typeof" CONSTT "const" AUTO "auto" PASTE "##" ELLIPSE "..."
  RARROW "->" BACKSLASH "\\" BACKTICK "`"


%token<lval> NUM "<integer>"
%type<ival>op shift_op post_op rel_op eq_op unary_op add_op mul_op op_op
%type<ival> atsym vec_type flow breaks
%token<fval> FLOATT
%token<sval> ID "<identifier>" STRING_LIT "<litteral string>" CHAR_LIT "<litteral char>"

  PP_COMMENT "<comment>" PP_INCLUDE "#include" PP_DEFINE "#define>" PP_UNDEF "#undef" PP_IFDEF "#ifdef" PP_IFNDEF "#ifndef" PP_ELSE "#else" PP_ENDIF "#if" PP_NL "\n"
%type<flag> flag opt_flag
  storage_flag access_flag arg_type
%type<sym>id opt_id
%type<var_decl> var_decl arg_decl fptr_arg_decl
%type<var_decl_list> var_decl_list
%type<type_decl> type_decl000 type_decl00  type_decl0 type_decl type_decl_array type_decl_empty type_decl_exp class_ext
%type<exp> primary_exp decl_exp union_exp decl_exp2 decl_exp3 binary_exp call_paren
%type<exp> con_exp log_or_exp log_and_exp inc_or_exp exc_or_exp and_exp eq_exp
%type<exp> rel_exp shift_exp add_exp mul_exp unary_exp typeof_exp
%type<exp> post_exp dot_exp cast_exp exp
%type<array_sub> array_exp array_empty array
%type<stmt> stmt loop_stmt selection_stmt jump_stmt code_stmt exp_stmt
%type<stmt> case_stmt label_stmt goto_stmt switch_stmt
%type<stmt> enum_stmt func_type stmt_type union_stmt 
%type<stmt_list> stmt_list
%type<arg_list> arg arg_list func_args lambda_arg lambda_list fptr_list fptr_arg
%type<decl_list> decl_list
%type<func_def> func_def func_def_base
%type<func_base> fdef_base fptr_base
%type<section> section
%type<class_def> class_def
%type<class_body> class_body class_body2
%type<id_list> id_list dot_decl decl_template
%type<type_list> type_list call_template
%type<ast> ast prg

%start prg

%nonassoc NOELSE
%nonassoc ELSE
//%expect 51

%%

prg: ast { arg->ast = $1; }
  | /* empty */ { gwion_error(&@$, arg, "file is empty.\n"); YYERROR; }

ast
  : section { $$ = new_ast(mpool(arg), $1, NULL); }
  | section ast { $$ = new_ast(mpool(arg), $1, $2); }
  ;

section
  : stmt_list  { $$ = new_section_stmt_list(mpool(arg), $1); }
  | func_def   { $$ = new_section_func_def (mpool(arg), $1); }
  | class_def  { $$ = new_section_class_def(mpool(arg), $1); }
  ;

class_def
  : CLASS decl_template opt_flag id class_ext LBRACE class_body RBRACE
    { $$ =new_class_def(mpool(arg), $3, $4, $5, $7, GET_LOC(&@$));
      if($2)
        $$->base.tmpl = new_tmpl(mpool(arg), $2, -1);
  };

class_ext : EXTENDS type_decl_exp { $$ = $2; } | { $$ = NULL; };

class_body : class_body2 | { $$ = NULL; };

class_body2
  : section             { $$ = new_class_body(mpool(arg), $1, NULL); }
  | section class_body2 { $$ = new_class_body(mpool(arg), $1, $2); }
  ;

id_list: id { $$ = new_id_list(mpool(arg), $1, GET_LOC(&@$)); } | id COMMA id_list  { $$ = prepend_id_list(mpool(arg), $1, $3, loc_cpy(mpool(arg), &@1)); };
dot_decl:  id  { $$ = new_id_list(mpool(arg), $1, loc_cpy(mpool(arg), &@1)); } | id RARROW dot_decl     { $$ = prepend_id_list(mpool(arg), $1, $3, loc_cpy(mpool(arg), &@1)); };

stmt_list: stmt { $$ = new_stmt_list(mpool(arg), $1, NULL);} | stmt stmt_list { $$ = new_stmt_list(mpool(arg), $1, $2);};

fptr_base: type_decl_array id decl_template fptr_arg { $$ = new_func_base(mpool(arg), $1, $2, $4);
  if($3) $$->tmpl = new_tmpl(mpool(arg), $3, -1); }
fdef_base: type_decl_empty id decl_template func_args { $$ = new_func_base(mpool(arg), $1, $2, $4);
  if($3) $$->tmpl = new_tmpl(mpool(arg), $3, -1); }

func_type: TYPEDEF opt_flag fptr_base arg_type {
  if($3->td->array && !$3->td->array->exp) {
    gwion_error(&@$, arg, "type must be defined with empty []'s");
    YYERROR;
  }
  $$ = new_stmt_fptr(mpool(arg), $3, $2 | $4);
};
stmt_type: TYPEDEF opt_flag type_decl_array id decl_template SEMICOLON {
  $$ = new_stmt_type(mpool(arg), $3, $4);
  $3->flag |= $2;
  if($5)
    $$->d.stmt_type.tmpl = new_tmpl(mpool(arg), $5, -1);
};

type_decl_array: type_decl | type_decl array { $$ = add_type_decl_array($1, $2); };

type_decl_exp: type_decl_array { if($1->array && !$1->array->exp)
    { gwion_error(&@$, arg, "can't instantiate with empty '[]'"); YYERROR;}
  $$ = $1; }

type_decl_empty: type_decl_array { if($1->array && $1->array->exp)
    { gwion_error(&@$, arg, "type must be defined with empty []'s"); YYERROR;}
  $$ = $1; }

arg: type_decl arg_decl { $$ = new_arg_list(mpool(arg), $1, $2, NULL); }
arg_list: arg { $$ = $1; } | arg COMMA arg_list { $1->next = $3; $$ = $1; };
fptr_arg: type_decl fptr_arg_decl { $$ = new_arg_list(mpool(arg), $1, $2, NULL); }
fptr_list: fptr_arg { $$ = $1; } | fptr_arg COMMA fptr_list { $1->next = $3; $$ = $1; };

code_stmt
  : LBRACE RBRACE { $$ = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&@$)); }
  | LBRACE stmt_list RBRACE { $$ = new_stmt_code(mpool(arg), $2); }
  ;



stmt
  : exp_stmt
  | loop_stmt
  | selection_stmt
  | code_stmt
  | label_stmt
  | goto_stmt
  | switch_stmt
  | case_stmt
  | enum_stmt
  | jump_stmt
  | func_type
  | stmt_type
  | union_stmt
;

id
  : ID { $$ = insert_symbol($1); }
  | ID PASTE id {
    char c[strlen(s_name($3)) + strlen($1)];
    sprintf(c, "%s%s", $1, s_name($3));
    $$ = insert_symbol(c);
  }
  ;

opt_id: id | { $$ = NULL; };

enum_stmt
  : ENUM opt_flag LBRACE id_list RBRACE opt_id SEMICOLON    { $$ = new_stmt_enum(mpool(arg), $4, $6);
    $$->d.stmt_enum.flag = $2; };

label_stmt: id COLON {  $$ = new_stmt_jump(mpool(arg), $1, 1, GET_LOC(&@$)); };

goto_stmt: GOTO id SEMICOLON {  $$ = new_stmt_jump(mpool(arg), $2, 0, GET_LOC(&@$)); };

case_stmt
  : CASE primary_exp COLON { $$ = new_stmt_exp(mpool(arg), ae_stmt_case, $2); }
  | CASE dot_exp COLON { $$ = new_stmt_exp(mpool(arg), ae_stmt_case, $2); }
  | CASE error COLON { gw_err(_("unhandled expression type in case statement.\n")); YYERROR; }
  ;

switch_stmt: SWITCH exp code_stmt { $$ = new_stmt_switch(mpool(arg), $2, $3);};

flow
  : WHILE { $$ = ae_stmt_while; }
  | UNTIL { $$ = ae_stmt_until; }

loop_stmt
  : flow LPAREN exp RPAREN stmt
    { $$ = new_stmt_flow(mpool(arg), $1, $3, $5, 0); }
  | DO stmt flow exp SEMICOLON
    { $$ = new_stmt_flow(mpool(arg), $3, $4, $2, 1); }
  | FOR LPAREN exp_stmt exp_stmt RPAREN stmt
      { $$ = new_stmt_for(mpool(arg), $3, $4, NULL, $6); }
  | FOR LPAREN exp_stmt exp_stmt exp RPAREN stmt
      { $$ = new_stmt_for(mpool(arg), $3, $4, $5, $7); }
  | FOR LPAREN AUTO atsym id COLON binary_exp RPAREN stmt
      { $$ = new_stmt_auto(mpool(arg), $5, $7, $9); $$->d.stmt_auto.is_ptr = $4; }
  | LOOP LPAREN exp RPAREN stmt
      { $$ = new_stmt_loop(mpool(arg), $3, $5); }
  ;

selection_stmt
  : IF LPAREN exp RPAREN stmt %prec NOELSE
      { $$ = new_stmt_if(mpool(arg), $3, $5); }
  | IF LPAREN exp RPAREN stmt ELSE stmt
      { $$ = new_stmt_if(mpool(arg), $3, $5); $$->d.stmt_if.else_body = $7; }
  ;

breaks
  : RETURN   { $$ = ae_stmt_return; }
  | BREAK    { $$ = ae_stmt_break; }
  | CONTINUE { $$ = ae_stmt_continue; }
  ;
jump_stmt
  : RETURN exp SEMICOLON { $$ = new_stmt_exp(mpool(arg), ae_stmt_return, $2); }
  | breaks SEMICOLON    { $$ = new_stmt(mpool(arg), $1, GET_LOC(&@$)); }
  ;

exp_stmt
  : exp SEMICOLON { $$ = new_stmt_exp(mpool(arg), ae_stmt_exp, $1); }
  | SEMICOLON     { $$ = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&@$)); }
  ;

exp: binary_exp | binary_exp COMMA exp  { $$ = prepend_exp($1, $3); };

binary_exp: decl_exp2 | binary_exp op decl_exp2     { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };

call_template: LTMPL type_list RTMPL { $$ = $2; } | { $$ = NULL; };

op: CHUCK { $$ = op_chuck; } | UNCHUCK { $$ = op_unchuck; } | EQ { $$ = op_eq; }
  | ATCHUCK     { $$ = op_ref; } | PLUSCHUCK   { $$ = op_radd; }
  | MINUSCHUCK  { $$ = op_rsub; } | TIMESCHUCK  { $$ = op_rmul; }
  | DIVIDECHUCK { $$ = op_rdiv; } | MODULOCHUCK { $$ = op_rmod; }
  | TRIG { $$ = op_trig; } | UNTRIG { $$ = op_untrig; }
  | RSL { $$ = op_rsl; } | RSR { $$ = op_rsr; } | RSAND { $$ = op_rsand; }
  | RSOR { $$ = op_rsor; } | RSXOR { $$ = op_rsxor; } | COLONCOLON { $$ = op_coloncolon; }
  ;

array_exp
  : LBRACK exp RBRACK           { $$ = new_array_sub(mpool(arg), $2); }
  | LBRACK exp RBRACK array_exp { if($2->next){ gwion_error(&@$, arg, "invalid format for array init [...][...]..."); YYERROR; } $$ = prepend_array_sub($4, $2); }
  | LBRACK exp RBRACK LBRACK RBRACK { gwion_error(&@$, arg, "partially empty array init [...][]..."); YYERROR; }
  ;

array_empty
  : LBRACK RBRACK             { $$ = new_array_sub(mpool(arg), NULL); }
  | array_empty LBRACK RBRACK { $$ = prepend_array_sub($1, NULL); }
  | array_empty array_exp     { gwion_error(&@$, arg, "partially empty array init [][...]"); YYERROR; }
  ;

array: array_exp | array_empty;
decl_exp2: con_exp | decl_exp3
  | AUTO atsym var_decl_list { $$= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), GET_LOC(&@$))), $3); }
decl_exp: type_decl var_decl_list { $$= new_exp_decl(mpool(arg), $1, $2); };
union_exp: type_decl arg_decl { $$= new_exp_decl(mpool(arg), $1, new_var_decl_list(mpool(arg), $2, NULL)); };
decl_exp3: decl_exp | flag decl_exp { $2->d.exp_decl.td->flag |= $1; $$ = $2; };

func_args: LPAREN arg_list { $$ = $2; } | LPAREN { $$ = NULL; };
fptr_arg: LPAREN  fptr_list { $$ = $2; } | LPAREN { $$ = NULL; };
arg_type: ELLIPSE RPAREN { $$ = ae_flag_variadic; }| RPAREN { $$ = 0; };

decl_template: LTMPL id_list RTMPL { $$ = $2; } | { $$ = NULL; };

storage_flag: STATIC { $$ = ae_flag_static; }
  | GLOBAL { $$ = ae_flag_global; }
  ;

access_flag: PRIVATE { $$ = ae_flag_private; }
  | PROTECT { $$ = ae_flag_protect; }
  ;

flag: access_flag { $$ = $1; }
  | storage_flag { $$ = $1; }
  | storage_flag access_flag { $$ = $1 | $2; }
  ;

opt_flag:  { $$ = 0; } | flag { $$ = $1; };

func_def_base
  : FUNCTION opt_flag fdef_base arg_type code_stmt
    { $$ = new_func_def(mpool(arg), $3, $5, $2 | $4, GET_LOC(&@$)); };

op_op: op | shift_op | rel_op | mul_op | add_op;
func_def
  : func_def_base
  |  OPERATOR op_op type_decl_empty LPAREN arg COMMA arg RPAREN code_stmt
    { $$ = new_func_def(mpool(arg), new_func_base(mpool(arg), $3, OP_SYM($2), $5), $9, ae_flag_op, GET_LOC(&@$)); $5->next = $7;}
  |  OPERATOR post_op type_decl_empty LPAREN arg RPAREN code_stmt
    { $$ = new_func_def(mpool(arg), new_func_base(mpool(arg), $3, OP_SYM($2), $5), $7, ae_flag_op, GET_LOC(&@$)); }
  |  unary_op OPERATOR type_decl_empty LPAREN arg RPAREN code_stmt
    { $$ = new_func_def(mpool(arg), new_func_base(mpool(arg), $3, OP_SYM($1), $5), $7, ae_flag_op | ae_flag_unary, GET_LOC(&@$)); }
  | AST_DTOR code_stmt
    {
ID_List l = new_id_list(mpool(arg), insert_symbol("void"), GET_LOC(&@$));
$$ = new_func_def(mpool(arg), new_func_base(mpool(arg), new_type_decl(mpool(arg), l),
       insert_symbol("dtor"), NULL), $2, ae_flag_dtor, GET_LOC(&@$)); }  ;

atsym: { $$ = 0; } | ATSYM { $$ = ae_flag_ref; };

type_decl000
  : dot_decl { $$ = new_type_decl(mpool(arg), $1); }
  | BACKTICK exp BACKTICK { $$ = new_type_decl2(mpool(arg), $2); }
  ;

type_decl00
  : type_decl000 { $$ = $1; }
  | LTMPL type_list RTMPL type_decl000 { $$ = $4; $$->types = $2; }
  ;

type_decl0
  : type_decl00 atsym { $1->flag |= $2; $$ = $1; }
  ;

type_decl: type_decl0 { $$ = $1; }
  | CONSTT type_decl0 { $$ = $2; SET_FLAG($$, const); };

decl_list: union_exp SEMICOLON { $$ = new_decl_list(mpool(arg), $1, NULL); }
  | union_exp SEMICOLON decl_list { $$ = new_decl_list(mpool(arg), $1, $3); } ;

union_stmt
  : UNION opt_flag decl_template opt_id LBRACE decl_list RBRACE opt_id SEMICOLON {
      $$ = new_stmt_union(mpool(arg), $6, GET_LOC(&@$));
      $$->d.stmt_union.type_xid = $4;
      $$->d.stmt_union.xid = $8;
      $$->d.stmt_union.flag = $2;
      if($3) {
        if(!$4) {
          gw_err(_("Template unions requires type name\n"));
          YYERROR;
        }
        if($8) {
          gw_err(_("Can't instantiate template union types at declaration site.\n"));
          YYERROR;
        }
        $$->d.stmt_union.tmpl = new_tmpl(mpool(arg), $3, -1);
      }
    }
  | UNION opt_flag decl_template opt_id LBRACE error RBRACE opt_id SEMICOLON {
    gw_err(_("Unions should only contain declarations.\n"));
    YYERROR;
    }
  ;

var_decl_list
  : var_decl { $$ = new_var_decl_list(mpool(arg), $1, NULL); }
  | var_decl COMMA var_decl_list { $$ = new_var_decl_list(mpool(arg), $1, $3); }
  ;

var_decl: id { $$ = new_var_decl(mpool(arg), $1, NULL, GET_LOC(&@$)); }
  | id array    { $$ = new_var_decl(mpool(arg), $1,   $2, GET_LOC(&@$)); };

arg_decl: id { $$ = new_var_decl(mpool(arg), $1, NULL, GET_LOC(&@$)); }
  | id array_empty { $$ = new_var_decl(mpool(arg), $1,   $2, GET_LOC(&@$)); }
  | id array_exp { gwion_error(&@$, arg, "argument/union must be defined with empty []'s"); YYERROR; };
fptr_arg_decl: opt_id { $$ = new_var_decl(mpool(arg), $1, NULL, GET_LOC(&@$)); }
  | opt_id array_empty { $$ = new_var_decl(mpool(arg), $1,   $2, GET_LOC(&@$)); }
  | opt_id array_exp { gwion_error(&@$, arg, "argument/union must be defined with empty []'s"); YYERROR; };

eq_op : EQ { $$ = op_eq; } | NEQ { $$ = op_ne; };
rel_op: LT { $$ = op_lt; } | GT { $$ = op_gt; } | LE { $$ = op_le; } | GE { $$ = op_ge; };
shift_op: SHIFT_LEFT  { $$ = op_shl; } | SHIFT_RIGHT { $$ = op_shr; };
add_op: PLUS { $$ = op_add; } | MINUS { $$ = op_sub; };
mul_op: TIMES { $$ = op_mul; } | DIVIDE { $$ = op_div; } | PERCENT { $$ = op_mod; };
con_exp: log_or_exp | log_or_exp QUESTION exp COLON con_exp
      { $$ = new_exp_if(mpool(arg), $1, $3, $5); };

log_or_exp: log_and_exp | log_or_exp OR log_and_exp  { $$ = new_exp_binary(mpool(arg), $1, op_or, $3); };
log_and_exp: inc_or_exp | log_and_exp AND inc_or_exp { $$ = new_exp_binary(mpool(arg), $1, op_and, $3); };
inc_or_exp: exc_or_exp | inc_or_exp S_OR exc_or_exp  { $$ = new_exp_binary(mpool(arg), $1, op_sor, $3); };
exc_or_exp: and_exp | exc_or_exp S_XOR and_exp       { $$ = new_exp_binary(mpool(arg), $1, op_sxor, $3); };
and_exp: eq_exp | and_exp S_AND eq_exp               { $$ = new_exp_binary(mpool(arg), $1, op_sand, $3); };
eq_exp: rel_exp | eq_exp eq_op rel_exp               { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
rel_exp: shift_exp | rel_exp rel_op shift_exp        { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
shift_exp: add_exp | shift_exp shift_op add_exp      { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
add_exp: mul_exp | add_exp add_op mul_exp            { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
mul_exp: typeof_exp | mul_exp mul_op cast_exp          { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };

typeof_exp: cast_exp | TYPEOF LPAREN exp RPAREN { $$ = new_exp_typeof(mpool(arg), $3); }

cast_exp: unary_exp | cast_exp DOLLAR type_decl_empty
    { $$ = new_exp_cast(mpool(arg), $3, $1); };

unary_op : MINUS { $$ = op_sub; } | TIMES { $$ = op_mul; }
  | post_op
  | EXCLAMATION { $$ = op_not; } | SPORK { $$ = op_spork; } | FORK { $$ = op_fork; } | TILDA { $$ = op_cmp; }
  ;

unary_exp : post_exp | unary_op unary_exp { $$ = new_exp_unary(mpool(arg), $1, $2); }
  | NEW type_decl_exp {$$ = new_exp_unary2(mpool(arg), op_new, $2); }
  | SPORK code_stmt   { $$ = new_exp_unary3(mpool(arg), op_spork, $2); };
  | FORK code_stmt   { $$ = new_exp_unary3(mpool(arg), op_fork, $2); };

lambda_list:
 id { $$ = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), $1, NULL, GET_LOC(&@$)), NULL); }
|    id lambda_list { $$ = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), $1, NULL, GET_LOC(&@$)), $2); }
lambda_arg: BACKSLASH lambda_list { $$ = $2; } | BACKSLASH { $$ = NULL; }

type_list
  : type_decl_empty { $$ = new_type_list(mpool(arg), $1, NULL); }
  | type_decl_empty COMMA type_list { $$ = new_type_list(mpool(arg), $1, $3); }
  ;

call_paren : LPAREN exp RPAREN { $$ = $2; } | LPAREN RPAREN { $$ = NULL; };

post_op : PLUSPLUS { $$ = op_inc; } | MINUSMINUS { $$ = op_dec; };

dot_exp: post_exp DOT id { $$ = new_exp_dot(mpool(arg), $1, $3); };
post_exp: primary_exp | post_exp array_exp
    { $$ = new_exp_array(mpool(arg), $1, $2); }
  | post_exp call_template call_paren
    { $$ = new_exp_call(mpool(arg), $1, $3);
      if($2)$$->d.exp_call.tmpl = new_tmpl_call(mpool(arg), $2); }
  | post_exp post_op
    { $$ = new_exp_post(mpool(arg), $1, $2); } | dot_exp { $$ = $1; }
  ;

vec_type: SHARPPAREN   { $$ = ae_primary_complex; }
        | PERCENTPAREN { $$ = ae_primary_polar;   }
        | ATPAREN      { $$ = ae_primary_vec;     };

primary_exp
  : id                  { $$ = new_exp_prim_id(     mpool(arg), $1, GET_LOC(&@$)); }
  | NUM                 { $$ = new_exp_prim_int(    mpool(arg), $1, GET_LOC(&@$)); }
  | FLOATT              { $$ = new_exp_prim_float(  mpool(arg), $1, GET_LOC(&@$)); }
  | STRING_LIT          { $$ = new_exp_prim_string( mpool(arg), $1, GET_LOC(&@$)); }
  | CHAR_LIT            { $$ = new_exp_prim_char(   mpool(arg), $1, GET_LOC(&@$)); }
  | array               { $$ = new_exp_prim_array(  mpool(arg), $1, GET_LOC(&@$)); }
  | vec_type exp RPAREN { $$ = new_exp_prim_vec(    mpool(arg), $1 ,$2); }
  | L_HACK exp R_HACK   { $$ = new_exp_prim_hack(   mpool(arg), $2); }
  | LPAREN exp RPAREN   { $$ = $2;                }
  | lambda_arg code_stmt { $$ = new_exp_lambda(     mpool(arg), lambda_name(arg), $1, $2); };
  | LPAREN RPAREN       { $$ = new_exp_prim_nil(    mpool(arg),     GET_LOC(&@$)); }
  ;
%%
