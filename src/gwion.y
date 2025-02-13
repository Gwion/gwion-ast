%define api.pure full
%define parse.error detailed
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
//#define YYMALLOC(a) mp_malloc2(mpool(arg), a)
#define gwion_error(a,b,c) parser_error(a,b,c, 0200)
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))

ANN static int parser_error(const loc_t*, Scanner*const, const char *, const uint);
ANN static Symbol sig_name(const Scanner*, const pos_t);
ANN static Symbol lambda_name(const Scanner*, const pos_t);
ANN void lex_spread(void *data);

#define LIST_INI(type, dest, src)              \
  dest = new_##type##list(mpool(arg), 1);      \
  type##list_set(dest, 0, (src));

#define LIST_END(type, dest, src, new )        \
    type##list_add(mpool(arg), &(src), (new)); \
    dest = src;

%}

%union {
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
  Exp*   exp;
  struct Func_Base_ *func_base;
  Stmt stmt;
  Stmt* stmt_ptr;
  Handler handler;
  ParserHandler handler_list;
  StmtList *stmt_list;
  ArgList *arg_list;
  Capture capture;
  CaptureList *captures;
  Arg arg;
  Func_Def func_def;
  EnumValue enum_value;
  EnumValueList *enum_list;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section section;
  TagList *taglist;
  Specialized specialized;
  SpecializedList *specialized_list;
  TmplArg tmplarg;
  TmplArgList *tmplarg_list;
  Variable variable;
  VariableList *variable_list;
  struct Stmt_Using_ import_item;
  UsingStmtList *import_list;
  Extend_Def extend_def;
  Class_Def class_def;
  Trait_Def trait_def;
  Prim_Def prim_def;
  Ast ast;
};


%token SEMICOLON ";" COMMA ","
  LPAREN "(" RPAREN ")" LBRACK "[" RBRACK "]" RBRACK2 ",]" LBRACE "{" RBRACE "}"
  FUNCTION "fun" VAR "var"
  IF "if" ELSE "else" WHILE "while" DO "do" UNTIL "until"
  LOOP "repeat" FOR "for" FOREACH "foreach" MATCH "match" CASE "case" WHEN "when" WHERE "where" ENUM "enum"
  TRETURN "return" BREAK "break" CONTINUE "continue" TRY "try" PERFORM "perform" HANDLET "handle" RETRY "retry"
  CLASS "class" STRUCT "struct" TRAIT "trait"
  STATIC "static" GLOBAL "global" PRIVATE "private" PROTECT "protect" ABSTRACT "abstract" FINAL "final"
  EXTENDS "extends" DOT "."
  OPERATOR "operator" PRIMITIVE "primitive"
  TYPEDEF "typedef" DISTINCT "distinct" FUNPTR "funptr"
  NOELSE UNION "union" CONSTT "const" ELLIPSE "..." DEFER "defer"
  BACKSLASH "\\" OPID_A LOCALE LOCALE_INI LOCALE_END
  LATE "late" USING "using" IMPORT "import" NAMED "="

%token<yyint> INTEGER
%type<gwint> decimal number "<integer>"
%type<stmt_t> flow breaks
%type<yybool> type_def_type
%token<fval> FLOATT "<float>"
%token<sval> STRING_LIT "<litteral string>" CHAR_LIT "<litteral char>" INTERP_START "${" INTERP_EXP
  PP_INCLUDE "#include" PP_DEFINE "#define" PP_PRAGMA "#pragma"
  PP_UNDEF "#undef" PP_IFDEF "#ifdef" PP_IFNDEF "#ifndef" PP_ELSE "#else" PP_ENDIF "#if" PP_NL "\n"
  SPREAD "}..."

%token<string> INTERP_LIT "<interp string lit>" INTERP_END "<interp string end>"
%type<sym>op shift_op post_op rel_op eq_op unary_op add_op mul_op op_op OPID_A "@<operator id>"
%token <sym> ID "<identifier>" PLUS "+" PLUSPLUS "++" MINUS "-" MINUSMINUS "--" TIMES "*" DIVIDE "/" PERCENT "%"
  DOLLAR "$" QUESTION "?" OPTIONS COLON ":" COLONCOLON "::" QUESTIONCOLON "?:"
  NEW "new" SPORK "spork" FORK "fork"
  L_HACK "<<<" R_HACK ">>>"
  AND "&&" EQ "==" GE ">=" GT ">" LE "<=" LT "<"
  NEQ "!=" SHIFT_LEFT "<<" SHIFT_RIGHT ">>" S_AND "&" S_OR "|" S_XOR "^" OR "||"
  TMPL ":["
  TILDA "~" EXCLAMATION "!" AROBASE "@" DYNOP "<dynamic_operator>" LOCALE_EXP "`foo`"
%type<uval> option
%type<flag> flag final modifier operator class_flag
  global opt_global storage_flag access_flag type_decl_flag type_decl_flag2
%type<sym>opt_id
%type<vector>func_effects _func_effects
%type<var_decl> var_decl arg_decl
%type<type_decl> type_decl_tmpl type_decl_base type_decl_noflag type_decl_opt type_decl type_decl_array extends
%type<exp> prim_exp decl_exp binary_exp call_paren interp interp_exp
%type<exp> opt_exp con_exp log_or_exp log_and_exp inc_or_exp exc_or_exp and_exp eq_exp
%type<exp> rel_exp shift_exp add_exp mul_exp dur_exp unary_exp dict_list
%type<exp> post_exp dot_exp cast_exp exp when_exp typedef_when basic_exp tmplarg_exp
%type<array_sub> array_exp array_empty array
%type<range> range
%type<stmt> stmt loop_stmt selection_stmt jump_stmt try_stmt retry_stmt code_stmt exp_stmt defer_stmt spread_stmt
%type<stmt> match_case_stmt match_stmt stmt_pp using_stmt import_stmt
%type<import_item> import_item
%type<handler> handler
%type<handler_list> handler_list
%type<stmt_list> stmt_list match_list code_list
%type<arg> arg 
%type<arg_list> lambda_arg lambda_list
%type<arg_list> arg_list func_args locale_arg locale_list
%type<capture> capture
%type<captures> capture_list captures
%type<func_def> func_def op_def func_def_base abstract_fdef
%type<func_base> func_base fptr_base op_base
%type<enum_value> enum_value
%type<enum_list> enum_list
%type<enum_def> enum_def
%type<union_def> union_def
%type<fptr_def> fptr_def
%type<type_def> type_def
%type<section> section
%type<extend_def> extend_def
%type<class_def> class_def
%type<trait_def> trait_def
%type<ast> class_body
%type<taglist> taglist traits
%type<specialized> specialized
%type<specialized_list> specialized_list decl_template
%type<tmplarg> tmplarg;
%type<tmplarg_list> tmplarg_list call_template
%type<variable> variable
%type<variable_list> variable_list 
%type<import_list> import_list
%type<prim_def> prim_def
%type<ast> ast section_list

%start ast

%right RANGE_EMPTY

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

%left SECTION_LIST
%precedence STMT_LIST3
%nonassoc STMT_LIST2
%right STMT_LIST1

%precedence NOELSE
%precedence ELSE

%%

ast: section_list { arg->getter->ppa->ast = $$ = $1; }
  | %empty { $$ = NULL; }

section_list
  : section { LIST_INI(section, $$, $1); }
  | section_list %prec SECTION_LIST section { LIST_END(section, $$, $1, $2); }
  | section_list error

section
  : stmt_list %prec STMT_LIST3   { $$ = MK_SECTION(stmt, stmt_list, $1, @1); }
  | func_def     { $$ = MK_SECTION(func, func_def, $1, @1);  }
  | class_def    { $$ = MK_SECTION(class, class_def, $1, @1); }
  | trait_def    { $$ = MK_SECTION(trait, trait_def, $1, @1); }
  | extend_def   { $$ = MK_SECTION(extend, extend_def, $1, @1); }
  | enum_def     { $$ = MK_SECTION(enum, enum_def, $1, @1); }
  | union_def    { $$ = MK_SECTION(union, union_def, $1, @1); }
  | fptr_def     { $$ = MK_SECTION(fptr, fptr_def, $1, @1); }
  | type_def     { $$ = MK_SECTION(type, type_def, $1, @1); }
  | prim_def     { $$ = MK_SECTION(primitive, prim_def, $1, @1); }
  ;

class_flag: flag modifier { $$ = $1 | $2; }
class_def
  : "class" class_flag ID decl_template extends traits class_body
    {
      $$ = new_class_def(mpool(arg), $2, MK_TAG($3, @3), $5, $7);
      if($4)
        $$->base.tmpl = new_tmpl(mpool(arg), $4);
      $$->traits = $6;
    }
  | "struct" class_flag ID decl_template traits class_body
    {
      $$ = new_class_def(mpool(arg), $2, MK_TAG($3, @3), NULL, $6);
      if($4)
        $$->base.tmpl = new_tmpl(mpool(arg), $4);
      $$->cflag |= cflag_struct;
      $$->traits = $5;
    };

class_body : "{" section_list "}"  { $$ = $2; }
           | "{" "}" { $$ = NULL; } | ";" { $$ = NULL; } | "{" error "{" { $$ = NULL; }
trait_def: "trait" opt_global ID traits class_body
    {
      $$ = new_trait_def(mpool(arg), $2, $3, $5, @3);
      $$->traits = $4;
    };

number: INTEGER {
  if($1.num < 0 || $1.num > INTPTR_MAX) {
    parser_error(&@1, arg, "number too big", 0); YYERROR;
  }
  $$ = GWINT($1.num, $1.int_type);
}

decimal: number {
  if($1.int_type != gwint_decimal) {
    parser_error(&@1, arg, "only decimals accepted here", 0); YYERROR;
  }
  $$ = $1;
}

prim_def: "primitive" class_flag ID decimal ";"
    {
      $$ = new_prim_def(mpool(arg), $3, $4.num, @3, $2);
    }
extends : "extends" type_decl_array { $$ = $2; } | %empty { $$ = NULL; };
traits: %empty { $$ = NULL; } | ":" taglist { $$ = $2; };

extend_def: extends ":" taglist ";" {
  $$ = new_extend_def(mpool(arg), $1, $3);
}


taglist:      ID { LIST_INI(tag, $$, MK_TAG($1, @1)); }
| taglist "," ID { LIST_END(tag, $$, $1, MK_TAG($3, @3)); }

specialized: ID traits {
    $$ = (Specialized) {
        .tag = MK_TAG($1, @1),
        .traits = $2,
      };
  }
  | "const" type_decl_array ID {
    $$ = (Specialized) {
        .tag = MK_TAG($3, @3),
        .td = $2,
      };
  }

specialized_list: specialized { LIST_INI(specialized, $$, $1); }
  | specialized_list "," specialized { LIST_END(specialized, $$, $1, $3); }

stmt_list:  stmt %prec STMT_LIST2  { LIST_INI(stmt, $$, $1); } 
| stmt_list stmt %prec STMT_LIST1  { LIST_END(stmt, $$, $1, $2); }
| stmt_list error
fptr_base: flag type_decl_array ID decl_template { $$ = new_func_base(mpool(arg), $2, $3, NULL, $1, @2);
  if($4) { $$->tmpl = new_tmpl(mpool(arg), $4); } }

_func_effects: "perform" ID { vector_init(&$$); vector_add(&$$, (m_uint)$2); } | _func_effects ID { vector_add(&$$, (m_uint)$2); }
func_effects: %empty { $$.ptr = NULL; } | _func_effects { $$.ptr = $1.ptr; }

func_base: flag final type_decl_array ID decl_template { $$ = new_func_base(mpool(arg), $3, $4, NULL, $1 | $2, @4);
  if($5) { $$->tmpl = new_tmpl(mpool(arg), $5); } }

fptr_def: "funptr" fptr_base func_args func_effects ";" {
  $2->args = $3;
  $$ = new_fptr_def(mpool(arg), $2);
  $$->base->effects.ptr = $4.ptr;
};

typedef_when: %empty { $$ = NULL;} | "when" exp { $$ = $2; }
type_def_type: "typedef" { $$ = false; } | "distinct" { $$ = true; };
type_def: type_def_type flag type_decl_array ID decl_template typedef_when ";" {
  $$ = new_type_def(mpool(arg), $3, $4, @4);
  $3->flag |= $2;
  $$->when = $6;
  if($5)
    $$->tmpl = new_tmpl(mpool(arg), $5);
  $$->distinct = $1;
};

type_decl_array: type_decl array { $1->array = $2; } | type_decl

arg
  : type_decl_array arg_decl ":" binary_exp {
    $$ = (Arg) { .var = MK_VAR($1, $2), .exp = $4 };
  }
  | type_decl_array arg_decl {
    $$ = (Arg) { .var = MK_VAR($1, $2) };
  };
arg_list:
     arg {
       LIST_INI(arg, $$, $1);
     }
	  |  arg_list "," arg {
     arglist_add(mpool(arg), &$1, $3);
     $$ = $1;
   };

locale_arg:
    arg {
       $$ = new_arglist(mpool(arg), 2);
       Arg self = {
         .var = MK_VAR(
            new_type_decl(mpool(arg), insert_symbol("string"), @$),
            (struct Var_Decl_) { .tag = MK_TAG(insert_symbol("self"), @$)}),
         .exp = NULL,
         .loc = @$
       };
       arglist_set($$, 0, self);
       arglist_set($$, 1, $1);
     }
	  |  locale_arg "," arg {
     arglist_add(mpool(arg), &$1, $3);
     $$ = $1;
   };
locale_list:
    locale_arg | %empty
    {
       Arg self = {
          MK_VAR(
            new_type_decl(mpool(arg), insert_symbol("string"), @$),
            (struct Var_Decl_) { .tag = MK_TAG(insert_symbol("self"), @$)}
          ),
         .exp = NULL,
         .loc = @$
       };
       LIST_INI(arg, $$, self);
    }

code_stmt
  : "{" "}" {
    $$ = MK_STMT(ae_stmt_code, @$); }
  | "{" stmt_list "}" {
    $$ = MK_STMT(ae_stmt_code, @$, .stmt_code = { .stmt_list = $2 });}

code_list
  : "{" "}" { $$ = new_stmtlist(mpool(arg), 0); }
  | "{" stmt_list "}" { $$ = $2; }
  | "{" stmt_list error "}" { $$ = $2; }

stmt_pp
  : PP_INCLUDE { $$ = MK_STMT_PP(include, @$, .data = $1); }
  | PP_DEFINE  { $$ = MK_STMT_PP(define,  @$, .data = $1); }
  | PP_PRAGMA  { $$ = MK_STMT_PP(pragma,  @$, .data = $1); }
  | PP_UNDEF   { $$ = MK_STMT_PP(undef,   @$, .data = $1); }
  | PP_IFDEF   { $$ = MK_STMT_PP(ifdef,   @$, .data = $1); }
  | PP_IFNDEF  { $$ = MK_STMT_PP(ifndef,  @$, .data = $1); }
  | PP_ELSE    { $$ = MK_STMT_PP(else,    @$, .data = $1); }
  | PP_ENDIF   { $$ = MK_STMT_PP(endif,   @$, .data = $1); }
  | PP_NL      { if(!arg->getter->fmt)return 0; $$ = MK_STMT_PP(nl, @$, .data = $1); }
  | LOCALE_INI ID opt_exp LOCALE_END
    { $$ = MK_STMT_PP(locale, @$, .xid = $2, .exp = $3); }
  ;

stmt
  : exp_stmt
  | loop_stmt
  | selection_stmt
  | code_stmt
  | match_stmt
  | jump_stmt
  | stmt_pp
  | defer_stmt
  | try_stmt
  | retry_stmt
  | spread_stmt
  | using_stmt
  | import_stmt
  ;

spread_stmt: "..." ID ":" taglist "{" {lex_spread(((Scanner*)scan));} "}..." {
  struct Spread_Def_ spread = {
    .tag = MK_TAG($2, @2),
    .list = $4,
    .data = $7,
  };
  $$ = MK_STMT(ae_stmt_spread, @2, .stmt_spread = spread);
}

using_stmt: "using" type_decl ";" { $$ = MK_STMT(ae_stmt_using, @$);
    $$.d.stmt_using.d.td = $2;
    }
          | "using" ID ":" dot_exp ";" { $$ = MK_STMT(ae_stmt_using, @$);
    $$.d.stmt_using.d.exp = $4;
    $$.d.stmt_using.tag = MK_TAG($2, @2);
  }
          | "using" ID ":" ID ";" { $$ = MK_STMT(ae_stmt_using, @$);
    $$.d.stmt_using.d.exp = new_prim_id(mpool(arg), $4, @4);
    $$.d.stmt_using.tag = MK_TAG($2, @2);
  }

import_item: ID {
    $$ = (struct Stmt_Using_) {
      .tag = MK_TAG($1, @1)
    };
  }        | ID ":" dot_exp {
    $$ = (struct Stmt_Using_) {
      .tag = MK_TAG($1, @1),
      .d = { .exp = $3 }
    };
  }        | ID ":" ID {
    $$ = (struct Stmt_Using_) {
      .tag = MK_TAG($1, @1),
      .d = { .exp = new_prim_id(mpool(arg), $3, @3) }
    };
  }


import_list: import_item {
    $$ = new_usingstmtlist(mpool(arg), 1);
    usingstmtlist_set($$, 0, $1);
  }
           | import_list "," import_item {
    usingstmtlist_add(mpool(arg), &$1, $3);
    $$ = $1;
  }

import_stmt: "import" ID ";" {
    $$ = MK_STMT(ae_stmt_import, @$);
    $$.d.stmt_import.tag = MK_TAG($2, @2);
  } | "import" ID ":" import_list ";" {
    $$ = MK_STMT(ae_stmt_import, @$);
    $$.d.stmt_import.tag = MK_TAG($2, @2);
    $$.d.stmt_import.selection = $4;
  }

retry_stmt: "retry" ";" { $$ = MK_STMT(ae_stmt_retry, @1); }

handler: "handle" opt_id stmt { $$ = (Handler){ .tag = MK_TAG($2, $2 ? @2 :@1), .stmt = cpy_stmt3(mpool(arg), &$3) }; };
handler_list: handler {
    LIST_INI(handler, $$.handlers, $1);
    $$.has_xid = !!$1.tag.sym;
  }
  | handler_list handler  {
    handlerlist_add(mpool(arg), &$1.handlers, $2);
    $$ = $1;
  }
try_stmt: "try" stmt handler_list { $$ = MK_STMT(ae_stmt_try, @1,
   .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &$2), .handler = $3.handlers});}

opt_id: ID | %empty { $$ = NULL; };
opt_comma: "," | %empty {}


enum_value: ID { $$ = (EnumValue) { .tag = MK_TAG($1, @1) }; }
          | ID ":" number { 
            $$ = (EnumValue) {.tag = MK_TAG($1, @1), .gwint = $3, .set = true };
          }

enum_list:      enum_value  { LIST_INI(enumvalue, $$, $1); }
| enum_list "," enum_value  { LIST_END(enumvalue, $$, $1, $3) ;}
| stmt_pp { return 0;}

enum_def
  : "enum" flag ID "{" enum_list opt_comma "}" {
    $$ = new_enum_def(mpool(arg), $5, $3, @$);
    $$->flag = $2;
  };

when_exp: "when" exp { $$ = $2; } | %empty { $$ = NULL; }

match_case_stmt
  : "case" exp when_exp ":" stmt_list {
    $$ = MK_STMT(0 /*ae_stmt_match*/, @1,
      .stmt_match = {
        .cond = $2,
        .when = $3,
        .list = $5
    });
}

match_list: match_case_stmt { LIST_INI(stmt, $$, $1); }
| match_list match_case_stmt { LIST_END(stmt, $$, $1, $2); }

match_stmt: "match" exp "{" match_list "}" "where" stmt {
  $$ = MK_STMT(ae_stmt_match, @1,
    .stmt_match = {
      .cond  = $2,
      .list  = $4,
      .where = cpy_stmt3(mpool(arg), &$7)
  });
}
|
"match" exp "{" match_list "}" {
  $$ = MK_STMT(ae_stmt_match, @1,
    .stmt_match = {
      .cond  = $2,
      .list  = $4,
  });
};

flow
  : "while" { $$ = ae_stmt_while; }
  | "until" { $$ = ae_stmt_until; }
  ;

loop_stmt
  : flow "(" exp ")" stmt
    { $$ = MK_STMT($1, @1,
      .stmt_flow = {
        .cond = $3,
        .body = cpy_stmt3(mpool(arg), &$5)
    });
  }
  | "do" stmt flow exp ";"
    { $$ = MK_STMT($3, @1,
      .stmt_flow = {
        .cond = $4,
        .body = cpy_stmt3(mpool(arg), &$2),
        .is_do = true
    });
  }
  | "for" "(" exp_stmt exp_stmt ")" stmt
    { $$ = MK_STMT(ae_stmt_for, @1,
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &$3),
        .c2 = cpy_stmt3(mpool(arg), &$4),
        .body = cpy_stmt3(mpool(arg), &$6),
    });
  }
  | "for" "(" exp_stmt exp_stmt exp ")" stmt
    { $$ = MK_STMT(ae_stmt_for, @1,
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &$3),
        .c2 = cpy_stmt3(mpool(arg), &$4),
        .c3 = $5,
        .body = cpy_stmt3(mpool(arg), &$7),
    });
  }
  | "foreach" "(" capture ":" exp ")" stmt
    { $$ = MK_STMT(ae_stmt_each, @1,
      .stmt_each = {
        .var = $3.var,
        .exp = $5,
        .body = cpy_stmt3(mpool(arg), &$7),
        .is_ref = $3.is_ref
    });
  }
  | "foreach" "(" ID "," capture ":" exp ")" stmt
    { $$ = MK_STMT(ae_stmt_each, @1,
      .stmt_each = {
        .var = $5.var,
        .exp = $7,
        .body = cpy_stmt3(mpool(arg), &$9),
        .idx = (Var_Decl){.tag=MK_TAG($3, @3)},
        .is_ref = $5.is_ref
    });
  }
  | "repeat" "(" exp ")" stmt
    { $$ = MK_STMT(ae_stmt_loop, @1,
      .stmt_loop = {
        .cond = $3,
        .body = cpy_stmt3(mpool(arg), &$5)
      });
  }
  | "repeat" "(" ID "," exp ")" stmt
    { $$ = MK_STMT(ae_stmt_loop, @1,
      .stmt_loop = {
        .cond = $5,
        .body = cpy_stmt3(mpool(arg), &$7)
      });
    $$.d.stmt_loop.idx = (Var_Decl){ .tag = MK_TAG($3, @3) };
  };

defer_stmt: "defer" stmt {
    $$ = MK_STMT(ae_stmt_defer, @1,
      .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &$2)
    });
}

selection_stmt
  : "if" "(" exp ")" stmt %prec NOELSE
    { $$ = MK_STMT(ae_stmt_if, @1,
      .stmt_if = {
        .cond = $3,
        .if_body = cpy_stmt3(mpool(arg), &$5)
    });
  }
  | "if" "(" exp ")" stmt "else" stmt
    { $$ = MK_STMT(ae_stmt_if, @1,
      .stmt_if = {
        .cond = $3,
        .if_body = cpy_stmt3(mpool(arg), &$5),
        .else_body = cpy_stmt3(mpool(arg), &$7)
    });
  };

breaks: "break"     { $$ = ae_stmt_break; } | CONTINUE  { $$ = ae_stmt_continue; };
jump_stmt
  : "return" exp ";" { $$ = MK_STMT_RETURN(@1, $2); }
  | "return" ";"     { $$ = MK_STMT_RETURN(@1, NULL); }
  | breaks decimal ";"   { $$ = MK_STMT($1, @1, .stmt_index = { .idx = $2.num });}
  | breaks ";" { $$ = MK_STMT($1, @1, .stmt_index = { .idx = -1 });}

exp_stmt
  : exp ";" { $$ = MK_STMT_EXP(@$, $1); }
  | ";"     { $$ = MK_STMT(ae_stmt_exp, @$); }

exp:
    binary_exp           { $$ = $1; }
  | binary_exp "," exp
    {
      if($1->next) {
        parser_error(&@3, arg, "invalid format for expression", 0);
        YYERROR;
      }
      $1->next = $3;
    }

binary_exp
  : decl_exp
  | ID "=" binary_exp { $$ = new_exp_named(mpool(arg), $3, MK_TAG($1, @1), @$);}
  | binary_exp "@"     decl_exp   { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @2); }
  | binary_exp DYNOP   decl_exp   { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @2); }
  | binary_exp OPTIONS decl_exp { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @2); }

call_template: ":[" tmplarg_list "]" { $$ = $2; } | %empty { $$ = NULL; };

op: "==" | "!=" | "@" | DYNOP | OPTIONS;

array_exp
  : "[" exp "]"           { $$ = new_array_sub(mpool(arg), $2); }
  | "[" exp "]" array_exp {
    if($2->next){ parser_error(&@2, arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } $$ = prepend_array_sub($4, $2);
  }
  | "[" exp "]" "[" "]"  { parser_error(&@3, arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
  ;

array_empty
  : "[" "]"               { $$ = new_array_sub(mpool(arg), NULL); }
  | array_empty "[" "]"   { $$ = prepend_array_sub($1, NULL); }
  | array_empty array_exp { parser_error(&@1, arg, "partially empty array init [][...]", 0x0210); YYERROR; }
  ;

dict_list:
    binary_exp ":" binary_exp { $1->next = $3; $$ = $1; }
  | dict_list "," binary_exp ":" binary_exp { $1->next->next = $3; $3-> next = $5; $$ = $1; }

range
  : "[" exp ":" exp "]" { $$ = new_range(mpool(arg), $2, $4); }
  | "[" exp ":" "]"     { $$ = new_range(mpool(arg), $2, NULL); }
  | "[" %prec RANGE_EMPTY ":" exp "]"     { $$ = new_range(mpool(arg), NULL, $3); }
  ;


array: array_exp | array_empty;
decl_exp: con_exp
  | type_decl_flag2 flag type_decl_array var_decl { $$= new_exp_decl(mpool(arg), $3, &$4, @$); $$->d.exp_decl.var.td->flag |= $1 | $2; };
  | type_decl_flag2 flag type_decl_array call_paren var_decl {
      $$ = new_exp_decl(mpool(arg), $3, &$5, @$);
      $$->d.exp_decl.var.td->flag |= $1 | $2;
      $$->d.exp_decl.args = $4 ?: new_prim_nil(mpool(arg), @4);
  };

func_args: "(" arg_list  ")" { $$ = $2; } | "(" ")"{ $$ = NULL; };

decl_template
: ":[" specialized_list "]" { $$ = $2; }
|             ":[" specialized_list "..." "]" {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), @3) };
  LIST_END(specialized, $$, $2, spec);
}
|                ":[" "..." "]" {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), @2) };
  LIST_INI(specialized, $$, spec);
}
             | %empty { $$ = NULL; };

global: GLOBAL { $$ = ae_flag_global; /*arg->global = true;*/ }
opt_global: global | %empty { $$ = ae_flag_none; }

storage_flag: STATIC { $$ = ae_flag_static; } | global;

access_flag: PRIVATE { $$ = ae_flag_private; }
  | PROTECT { $$ = ae_flag_protect; }
  ;

flag: access_flag { $$ = $1; }
  |  storage_flag { $$ = $1; }
  |  access_flag storage_flag { $$ = $1 | $2; }
  | %empty { $$ = ae_flag_none; }
  ;

final: "final" { $$ = ae_flag_final; } | %empty { $$ = ae_flag_none; };

modifier: "abstract" final { $$ = ae_flag_abstract | $2; } | final ;

func_def_base
  : FUNCTION func_base func_args code_list {
    $2->args = $3;
    $$ = new_func_def(mpool(arg), $2, $4);
  }
  | FUNCTION func_base func_args ";" {
    $2->args = $3;
    SET_FLAG($2, abstract);
    $$ = new_func_def(mpool(arg), $2, NULL);
  }
  | LOCALE global ID LPAREN locale_list RPAREN code_list {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), @3);
    Func_Base *base = new_func_base(mpool(arg), td, $3, $5, $2, @3);
    base->fbflag |= fbflag_locale;
   $$ = new_func_def(mpool(arg), base, $7);
  }
  | LOCALE ID LPAREN locale_list RPAREN code_list {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), @2);
    Func_Base *base = new_func_base(mpool(arg), td, $2, $4, ae_flag_none, @2);
    base->fbflag |= fbflag_locale;
    $$ = new_func_def(mpool(arg), base, $6);
  }

abstract_fdef
  : FUNCTION flag "abstract" type_decl_array ID decl_template func_args ";"
    {
      Func_Base *base = new_func_base(mpool(arg), $4, $5, NULL, $2 | ae_flag_abstract, @5);
      if($6)
        base->tmpl = new_tmpl(mpool(arg), $6);
      base->args = $7;
      $$ = new_func_def(mpool(arg), base, NULL);
    };

op_op: op | shift_op | rel_op | mul_op | add_op;
op_base
  :  type_decl_array op_op decl_template "(" arg "," arg ")"
    {
      ArgList *args = new_arglist(mpool(arg), 2);
      arglist_set(args, 0, $5);
      arglist_set(args, 1, $7);
      $$ = new_func_base(mpool(arg), $1, $2, args, ae_flag_none, @2);
      if($3)$$->tmpl = new_tmpl(mpool(arg), $3);
    }
  |  type_decl_array post_op decl_template "(" arg ")"
    {
      ArgList *args = new_arglist(mpool(arg), 1);
      arglist_set(args, 0, $5);
      $$ = new_func_base(mpool(arg), $1, $2, args, ae_flag_none, @2);
      if($3)$$->tmpl = new_tmpl(mpool(arg), $3);
    }
  |  unary_op type_decl_array decl_template "(" arg ")"
    {
      ArgList *args = new_arglist(mpool(arg), 1);
      arglist_set(args, 0, $5);
      $$ = new_func_base(mpool(arg), $2, $1, args, ae_flag_none, @1);
      $$->fbflag |= fbflag_unary;
      if($3)$$->tmpl = new_tmpl(mpool(arg), $3);
    }
  | type_decl_array OPID_A func_args
    {
      $$ = new_func_base(mpool(arg), $1, $2, $3, ae_flag_none, @2);
      $$->fbflag |= fbflag_internal;
    };

operator: "operator" { $$ = ae_flag_none; } | "operator" global { $$ = $2; };
op_def
  : operator op_base code_list
  { $$ = new_func_def(mpool(arg), $2, $3); $2->fbflag |= fbflag_op; $2->flag |= $1; }
  | operator op_base ";"
  { $$ = new_func_def(mpool(arg), $2, NULL); $2->fbflag |= fbflag_op; $2->flag |= $1 | ae_flag_abstract; }
  | operator "abstract" op_base ";"
  { $$ = new_func_def(mpool(arg), $3, NULL); $3->fbflag |= fbflag_op; $3->flag |= $1 | ae_flag_abstract; }

func_def: func_def_base | abstract_fdef | op_def
  |  operator "new" func_args code_list
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, $2, $3, $1, @2);
      $$ = new_func_def(mpool(arg), base, $4);
    }
  |  operator "new" func_args ";"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, $2, $3, $1 | ae_flag_abstract, @2);
      $$ = new_func_def(mpool(arg), base, NULL);
    }
  |  operator "abstract" "new" func_args ";"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, $3, $4, $1 | ae_flag_abstract, @3);
      $$ =new_func_def(mpool(arg), base, NULL);
    }

type_decl_base
  : ID { $$ = new_type_decl(mpool(arg), $1, @$); }
  | "(" flag type_decl_array decl_template func_args func_effects ")" {
      const Symbol name = sig_name(arg, @3.first);
      $$ = new_type_decl(mpool(arg), name, @1);
      Func_Base *fb = new_func_base(mpool(arg), $3, name, NULL, $2, @1);
      if($4)
        fb->tmpl = new_tmpl(mpool(arg), $4);
      fb->args = $5;
      const Fptr_Def fptr = new_fptr_def(mpool(arg), fb);
      fptr->base->effects.ptr = $6.ptr;
      $$->fptr = fptr;
  }
  ;

type_decl_tmpl
  : type_decl_base call_template { $$ = $1; $$->types = $2; }
  | "&" type_decl_base call_template { $$ = $2; $$->ref = true; $$->types = $3; }
  ;

type_decl_noflag
  : type_decl_tmpl
  | type_decl_tmpl "." type_decl_noflag { $1->next = $3; }
  ;

option: "?" { $$ = 1; } | OPTIONS { $$ = strlen(s_name($1)); } | %empty { $$ = 0; };
type_decl_opt: type_decl_noflag option { $$ = $1; $$->option = $2; };
type_decl: type_decl_opt | type_decl_flag type_decl_opt { $$ = $2; $$->flag |= $1; };

type_decl_flag
  : "late"  { $$ = ae_flag_late; }
  | "const" { $$ = ae_flag_const; };

type_decl_flag2: "var"  { $$ = ae_flag_none; } | type_decl_flag

variable:
            ID ";" {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), @1);
  $$ = MK_VAR(td, (Var_Decl){ .tag = MK_TAG($1, @1)});
}
| type_decl_array ID ";" { $$ = MK_VAR($1, (Var_Decl){ .tag = MK_TAG($2, @2)});}
| stmt_pp { return 0;}
variable_list: variable { LIST_INI(variable, $$, $1); }
| variable_list variable { LIST_END(variable, $$, $1, $2); }

union_def
  : "union" flag ID decl_template "{" variable_list "}" {
      $$ = new_union_def(mpool(arg), $6, @3);
      $$->tag.sym = $3; // put tag in ctor
      $$->flag = $2;
      if($4)
        $$->tmpl = new_tmpl(mpool(arg), $4);
    }
  ;

var_decl: ID { $$ = (struct Var_Decl_) { .tag = MK_TAG($1, @1)}; };

arg_decl: ID { $$ = (struct Var_Decl_) { .tag = MK_TAG($1, @1)}; };
        | %empty { $$ = (struct Var_Decl_) {
            .tag = { .sym = NULL, .loc = {.first = arg->pos, .last = arg->pos }}};
        };

eq_op : "==" | "!=";
rel_op: "<" | ">" | "<=" | ">=";
shift_op: "<<" | ">>";
add_op: "+" | "-";
mul_op: "*" | "/" | "%";

opt_exp: exp { $$ = $1; } | %empty { $$ = NULL; }
con_exp: log_or_exp
  | log_or_exp "?" con_exp ":" con_exp
      { $$ = new_exp_if(mpool(arg), $1, $3, $5, @$); };
  | log_or_exp "?" ":" con_exp
      { $$ = new_exp_if(mpool(arg), $1, NULL, $4, @$); };
  | log_or_exp "?:" con_exp
      { $$ = new_exp_if(mpool(arg), $1, NULL, $3, @$); };

log_or_exp: log_and_exp | log_or_exp "||" log_and_exp  { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
log_and_exp: inc_or_exp | log_and_exp "&&" inc_or_exp  { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
inc_or_exp: exc_or_exp | inc_or_exp "|" exc_or_exp     { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
exc_or_exp: and_exp | exc_or_exp S_XOR and_exp         { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
and_exp: eq_exp | and_exp "&" eq_exp                   { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
eq_exp: rel_exp | eq_exp eq_op rel_exp                 { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
rel_exp: shift_exp | rel_exp rel_op shift_exp          { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
shift_exp: add_exp | shift_exp shift_op add_exp        { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
add_exp: mul_exp | add_exp add_op mul_exp              { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
mul_exp: dur_exp | mul_exp mul_op dur_exp              { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
dur_exp: cast_exp | dur_exp "::" cast_exp              { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };

cast_exp: unary_exp | cast_exp "$" type_decl_array
    { $$ = new_exp_cast(mpool(arg), $3, $1, @$); };

unary_op : %prec UMINUS "-" | "*" %prec UTIMES | post_op
  | "!" | "~"
  ;

unary_exp : post_exp
  | unary_op unary_exp { $$ = new_exp_unary(mpool(arg), $1, $2, @$); }
  | "spork" unary_exp { $$ = new_exp_unary(mpool(arg), $1, $2, @1); }
  | "fork" unary_exp { $$ = new_exp_unary(mpool(arg), $1, $2, @1); }
  | "new" type_decl_array call_paren {
       $$ = new_exp_unary2(mpool(arg), $1, $2, $3 ?: new_prim_nil(mpool(arg), @3), @$);
  }
  | "new" type_decl_array {$$ = new_exp_unary2(mpool(arg), $1, $2, NULL, @$); }
  | "spork" code_list   { $$ = new_exp_unary3(mpool(arg), $1, $2, @1); };
  | "fork" code_list   { $$ = new_exp_unary3(mpool(arg), $1, $2, @1); };
  | "spork" captures code_list   { $$ = new_exp_unary3(mpool(arg), $1, $3, @1); $$->d.exp_unary.captures = $2; };
  | "fork"  captures code_list   { $$ = new_exp_unary3(mpool(arg), $1, $3, @1); $$->d.exp_unary.captures = $2; };
  | "$" type_decl_array { $$ = new_exp_td(mpool(arg), $2, @2); };

lambda_list:
 ID {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){.tag = MK_TAG($1, @1)}), .loc = @$};
  LIST_INI(arg, $$, a); }
|    lambda_list ID {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){ .tag = MK_TAG($2, @2)}), .loc = @$};
  LIST_END(arg, $$, $1, a);
}

lambda_arg: "\\" lambda_list { $$ = $2; } | BACKSLASH { $$ = NULL; }

tmplarg_exp: basic_exp | interp;
tmplarg: type_decl_array {
    $$ = (TmplArg) { .d = { .td = $1}, .type = tmplarg_td};
  }
  | tmplarg_exp {
    $$ = (TmplArg) { .d = { .exp = $1}, .type = tmplarg_exp};
  }

tmplarg_list:      tmplarg { LIST_INI(tmplarg, $$, $1); }
| tmplarg_list "," tmplarg { LIST_END(tmplarg, $$, $1, $3); }

call_paren :
"(" exp ")" { $$ = $2; } | 
"(" ")" { $$ = NULL; };

post_op : "++" | "--";

dot_exp: post_exp "." ID {
  $$ = new_exp_dot(mpool(arg), $1, MK_TAG($3, @3), @$);
}
| post_exp "." error {
  $$ = new_exp_dot(mpool(arg), $1, MK_TAG(insert_symbol("@"), @3), @$); // suus
}

post_exp: prim_exp
  | post_exp array
    { $$ = new_exp_array(mpool(arg), $1, $2, @$); }
  | post_exp range
    { $$ = new_exp_slice(mpool(arg), $1, $2, @$); }
  | post_exp call_template call_paren
    { $$ = new_exp_call(mpool(arg), $1, $3, @$);
      if($2)$$->d.exp_call.tmpl = new_tmpl_call(mpool(arg), $2); }
  | post_exp call_template "(" error
    {$$ = new_exp_dot(mpool(arg), $1, MK_TAG(insert_symbol("@"), @3), @$); }
  | post_exp post_op
    { $$ = new_exp_post(mpool(arg), $1, $2, @$); }
  | dot_exp { $$ = $1; }
  ;

interp_exp
  : INTERP_END { $$ = new_prim_string(mpool(arg), $1.data, $1.delim, @$); }
  | INTERP_LIT interp_exp { $$ = new_prim_string(mpool(arg), $1.data, $1.delim, @$); $$->next = $2; }
  | exp INTERP_EXP interp_exp { $$ = $1; $$->next = $3; }

interp: INTERP_START interp_exp { $$ = $2; }
| interp INTERP_START interp_exp {
  if(!$3->next) {
    char c[strlen($1->d.prim.d.string.data) + strlen($3->d.prim.d.string.data) + 1];
    sprintf(c, "%s%s\n", $1->d.prim.d.string.data, $3->d.prim.d.string.data);
    $1->d.prim.d.string.data = s_name(insert_symbol(c));
    $1->loc.last = $3->loc.last;
    free_exp(mpool(arg), $3);
  } else
  $1->next = $3;
}

capture: ID { $$ = (Capture){ .var = { .tag = MK_TAG($1, @1) }};} | "&" ID { $$ = (Capture){ .var = { .tag = MK_TAG($2, @2) }, .is_ref = true }; };

capture_list:  capture { LIST_INI(capture, $$, $1); }
| capture_list capture { LIST_END(capture, $$, $1, $2); }
captures: ":" capture_list ":" { $$ = $2; } |  %empty { $$ = NULL; };
array_lit_ed: ",]" | "]"

basic_exp
  : number               {
  $$ = new_prim_int(    mpool(arg), $1.num, @$); 
  $$->d.prim.d.gwint.int_type = $1.int_type;
  }
  | FLOATT               { $$ = new_prim_float(  mpool(arg), $1, @$); }
  | STRING_LIT           { $$ = new_prim_string( mpool(arg), $1, 0, @$); }
  | CHAR_LIT             { $$ = new_prim_char(   mpool(arg), $1, @$); }

prim_exp
  : ID                   { $$ = new_prim_id(     mpool(arg), $1, @$); }
  | basic_exp
  | interp               { $$ = !$1->next ? $1 : new_prim_interp(mpool(arg), $1, @$); }
  | "[" opt_exp array_lit_ed { 
    Array_Sub array = new_array_sub(mpool(arg), $2);
    $$ = new_prim_array(  mpool(arg), array, @$);
  }
  | "{" dict_list "}"    { $$ = new_prim_dict(   mpool(arg), $2, @$); }
  | range                { $$ = new_prim_range(  mpool(arg), $1, @$); }
  | "<<<" exp ">>>"      { $$ = new_prim_hack(   mpool(arg), $2, @$); }
  | "(" exp ")"          { $$ = $2; if(!$2->next) $$->paren = true; }
  | LOCALE_EXP           {
    const loc_t loc = { .first = { .line = @1.first.line, .column = @1.first.column - 1},
                        .last =  { .line = @1.last.line, .column = @1.last.column - 1}};
    $$ = new_prim_id(mpool(arg), $1, loc);
    $$->d.prim.prim_type = ae_prim_locale;
  }
  | lambda_arg captures code_list { $$ = new_exp_lambda( mpool(arg), lambda_name(arg, @1.first), $1, $3, @1); $$->d.exp_lambda.def->captures = $2;};
  | lambda_arg captures "{" binary_exp "}" { $$ = new_exp_lambda2( mpool(arg), lambda_name(arg, @1.first), $1, $4, @1); $$->d.exp_lambda.def->captures = $2;};
  | "(" op_op ")"        { $$ = new_prim_id(     mpool(arg), $2, @$); $$->paren = true; }
  | "perform" opt_id     { $$ = new_prim_perform(mpool(arg), $2, @2); }
  | "(" ")"              { $$ = new_prim_nil(    mpool(arg),     @$); }
  ;
%%
#undef scan
#undef insert_symbol

ANN static Symbol sig_name(const Scanner *scan, const pos_t pos) {
  char c[6 + 1 + num_digit(pos.line) + num_digit(pos.column) + 2];
  sprintf(c, "@sig_%u_%u", pos.line, pos.column);
  return insert_symbol(scan->st, c);
}

ANN static Symbol lambda_name(const Scanner *scan, const pos_t pos) {
  char c[6 + 1 + num_digit(pos.line) + num_digit(pos.column) + 2];
  sprintf(c, "lambda:%u:%u", pos.line, pos.column);
  return insert_symbol(scan->st, c);
}

ANN static int parser_error(const loc_t *loc, Scanner *const scan, const char* diagnostic, const uint error_code) {
  char _main[strlen(diagnostic) + 1];
  strcpy(_main, diagnostic);
  char *_explain = strchr(_main, ',');
  if(_explain) {
    _main[_explain - _main] = '\0';
    _explain += 2;
  }
  scanner_error(scan, _main, _explain, *loc, error_code);
  loc_t _loc = { scan->old, scan->old};
  const char *syntaxerr = YY_("syntax error");
  if(!strncmp(_main, syntaxerr, strlen(syntaxerr)))
    scanner_secondary(scan, "check around here", _loc);
  return 0;
}
