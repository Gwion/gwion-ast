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

ANN static int parser_error(loc_t*, Scanner*const, const char *, const uint);
ANN Symbol sig_name(const Scanner*, const pos_t);

%}

%union {
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
  Var_Decl_List var_decl_list;
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
};


%token SEMICOLON ";" COMMA ","
  LPAREN "(" RPAREN ")" LBRACK "[" RBRACK "]" LBRACE "{" RBRACE "}"
  FUNCTION "fun" VAR "var"
  IF "if" ELSE "else" WHILE "while" DO "do" UNTIL "until"
  LOOP "repeat" FOR "for" FOREACH "foreach" MATCH "match" CASE "case" WHEN "when" WHERE "where" ENUM "enum"
  TRETURN "return" BREAK "break" CONTINUE "continue" TRY "try" PERFORM "perform" HANDLET "handle" RETRY "retry"
  CLASS "class" STRUCT "struct" TRAIT "trait"
  STATIC "static" GLOBAL "global" PRIVATE "private" PROTECT "protect" ABSTRACT "abstract" FINAL "final"
  EXTENDS "extends" DOT "."
  OPERATOR "operator"
  TYPEDEF "typedef" DISTINCT "distinct" FUNPTR "funptr"
  NOELSE UNION "union" CONSTT "const" ELLIPSE "..." VARLOOP "varloop" DEFER "defer"
  BACKSLASH "\\" OPID_A LOCALE LOCALE_INI LOCALE_END
  LATE "late"

%token<lval> NUM "<integer>"
%type<stmt_t> flow breaks
%type<yybool> type_def_type
%token<fval> FLOATT "<float>"
%token<sval> STRING_LIT "<litteral string>" CHAR_LIT "<litteral char>" INTERP_START "${" INTERP_EXP
  PP_COMMENT "<comment>" PP_INCLUDE "#include" PP_DEFINE "#define" PP_PRAGMA "#pragma"
  PP_UNDEF "#undef" PP_IFDEF "#ifdef" PP_IFNDEF "#ifndef" PP_ELSE "#else" PP_ENDIF "#if" PP_NL "\n" PP_IMPORT "import"
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
  global storage_flag access_flag type_decl_flag type_decl_flag2
%type<yybool> opt_var
%type<fbflag> arg_type
%type<sym>opt_id
%type<vector>func_effects _func_effects
%type<var_decl> var_decl arg_decl fptr_arg_decl
%type<var_decl_list> var_decl_list
%type<type_decl> type_decl_tmpl type_decl_base type_decl_noflag type_decl_opt type_decl type_decl_array type_decl_empty type_decl_exp class_ext
%type<exp> prim_exp decl_exp binary_exp call_paren interp interp_exp
%type<exp> opt_exp con_exp log_or_exp log_and_exp inc_or_exp exc_or_exp and_exp eq_exp
%type<exp> rel_exp shift_exp add_exp mul_exp dur_exp unary_exp dict_list
%type<exp> post_exp dot_exp cast_exp exp when_exp typedef_when
%type<array_sub> array_exp array_empty array
%type<range> range
%type<stmt> stmt loop_stmt selection_stmt jump_stmt try_stmt retry_stmt code_stmt exp_stmt varloop_stmt defer_stmt
%type<stmt> match_case_stmt match_stmt stmt_pp trait_stmt
%type<handler> handler
%type<handler_list> handler_list
%type<stmt_list> stmt_list match_list trait_stmt_list
%type<arg> fptr_arg
%type<arg_list> lambda_arg lambda_list fptr_list fptr_args
%type<default_args> arg arg_list func_args locale_arg locale_list
%type<capture> capture
%type<captures> captures _captures
%type<func_def> func_def op_def func_def_base abstract_fdef
%type<func_base> func_base fptr_base op_base
%type<enum_def> enum_def
%type<union_def> union_def
%type<fptr_def> fptr_def
%type<type_def> type_def
%type<section> section trait_section
%type<extend_def> extend_def
%type<class_def> class_def
%type<trait_def> trait_def
%type<ast> class_body extend_body trait_body
%type<id_list> id_list traits
%type<specialized_list> specialized_list decl_template
%type<type_list> type_list call_template
%type<union_member> union_decl
%type<union_list> union_list
%type<ast> ast prg trait_ast

%start prg

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

%nonassoc STMT_ASSOC
%nonassoc STMT_NOASSOC
%nonassoc NOELSE
%nonassoc ELSE

%%

prg: ast { arg->ppa->ast = $$ = $1; }
  | /* empty */ { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }

ast
  : section {
    $$ = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set($$, Section, 0, $1);
  }
  | ast section {
    mp_vector_add(mpool(arg), &($1), Section, $2);
    $$ = $1;
  };

section
  : stmt_list    { $$ = MK_SECTION(stmt, stmt_list, $1); }
  | func_def     { $$ = MK_SECTION(func, func_def, $1); }
  | class_def    { $$ = MK_SECTION(class, class_def, $1); }
  | trait_def    { $$ = MK_SECTION(trait, trait_def, $1); }
  | extend_def   { $$ = MK_SECTION(extend, extend_def, $1); }
  | enum_def     { $$ = MK_SECTION(enum, enum_def, $1); }
  | union_def    { $$ = MK_SECTION(union, union_def, $1); }
  | fptr_def     { $$ = MK_SECTION(fptr, fptr_def, $1); }
  | type_def     { $$ = MK_SECTION(type, type_def, $1); }
  ;

class_flag: flag modifier { $$ = $1 | $2; }
class_def
  : "class" class_flag ID decl_template class_ext traits "{" class_body "}"
    {
      $$ = new_class_def(mpool(arg), $2, $3, $5, $8, @3);
      if($4)
        $$->base.tmpl = new_tmpl_base(mpool(arg), $4);
      $$->traits = $6;
    }
  | "struct" class_flag ID decl_template traits "{" class_body "}"
    {
      $$ = new_class_def(mpool(arg), $2, $3, NULL, $7, @3);
      if($4)
        $$->base.tmpl = new_tmpl_base(mpool(arg), $4);
      $$->cflag |= cflag_struct;
      $$->traits = $5;
    };

trait_stmt: exp_stmt {
    if($1.d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&@$, arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    $$ = $1;
  } | stmt_pp;
trait_stmt_list: trait_stmt  {
  $$ = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set($$, struct Stmt_, 0, $1);
} |
  trait_stmt_list trait_stmt {
    mp_vector_add(mpool(arg), &($1), struct Stmt_, $2);
    $$ = $1;
  };

trait_section
  : trait_stmt_list    { $$ = MK_SECTION(stmt, stmt_list, $1); }
  | func_def           { $$ = MK_SECTION(func, func_def, $1); }
  ;

trait_ast
  : trait_section {
    $$ = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set($$, Section, 0, $1);
  }
  | trait_ast trait_section {
    mp_vector_add(mpool(arg), &$1, Section, $2);
    $$ = $1;
  };

trait_body : trait_ast | { $$ = NULL; };

trait_def: "trait" class_flag ID traits "{" trait_body "}"
    {
      $$ = new_trait_def(mpool(arg), $2, $3, $6, @3);
      $$->traits = $4;
      if(GET_FLAG($$, abstract)) {
        { scanner_secondary(arg, "abstract should not be used on ${/+trait{0} declaration", @3); }
        UNSET_FLAG($$, abstract);
      }
    };

class_ext : "extends" type_decl_exp { $$ = $2; } | { $$ = NULL; };
traits: { $$ = NULL; } | ":" id_list { $$ = $2; };
extend_body
  : func_def {
    $$ = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set($$, Section, 0, MK_SECTION(func, func_def, $1));
  }
  | extend_body func_def {
    mp_vector_add(mpool(arg), &($1), Section, MK_SECTION(func, func_def, $2));
    $$ = $1;
  };

extend_def: "extends" type_decl_empty traits "{" extend_body "}" {
  $$ = new_extend_def(mpool(arg), $2, $5);
  $$->traits = $3;
}


class_body : ast | { $$ = NULL; };

id_list: ID
  {
    $$ = new_mp_vector(mpool(arg), Symbol, 1);
    mp_vector_set($$, Symbol, 0, $1);
  }
       | id_list "," ID
  {
    mp_vector_add(mpool(arg), &$1, Symbol, $3);
    $$ = $1;
  };

specialized_list: ID traits {
    $$ = new_mp_vector(mpool(arg), Specialized, 1);
    mp_vector_set($$, Specialized, 0, ((Specialized) {
        .xid = $1,
        .traits = $2,
        .pos = @1
      }));
  }
  | specialized_list "," ID  traits {
    Specialized spec = { .xid = $3, .traits = $4, .pos = @3 };
    mp_vector_add(mpool(arg), &$1, Specialized, spec);
    $$ = $1;
  };

stmt_list: stmt {
  $$ = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set($$, struct Stmt_, 0, $1);
} |
  stmt_list stmt {
  mp_vector_add(mpool(arg), &$1, struct Stmt_, $2);
  $$ = $1;
  };

fptr_base: flag type_decl_empty ID decl_template { $$ = new_func_base(mpool(arg), $2, $3, NULL, $1, @2);
  if($4) { $$->tmpl = new_tmpl_base(mpool(arg), $4); } }

_func_effects: "perform" ID { vector_init(&$$); vector_add(&$$, (m_uint)$2); } | _func_effects ID { vector_add(&$$, (m_uint)$2); }
func_effects: { $$.ptr = NULL; } | _func_effects { $$.ptr = $1.ptr; }

func_base: flag final type_decl_empty ID decl_template { $$ = new_func_base(mpool(arg), $3, $4, NULL, $1 | $2, @4);
  if($5) { $$->tmpl = new_tmpl_base(mpool(arg), $5); } }

fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";" {
  $2->args = $3;
  $2->fbflag |= $4;
  $$ = new_fptr_def(mpool(arg), $2);
  $$->base->effects.ptr = $5.ptr;
};

typedef_when: { $$ = NULL;} | "when" binary_exp { $$ = $2; }
type_def_type: "typedef" { $$ = false; } | "distinct" { $$ = true; };
type_def: type_def_type flag type_decl_array ID decl_template typedef_when ";" {
  $$ = new_type_def(mpool(arg), $3, $4, @4);
  $3->flag |= $2;
  $$->when = $6;
  if($5)
    $$->tmpl = new_tmpl_base(mpool(arg), $5);
  $$->distinct = $1;
};

type_decl_array: type_decl array { $1->array = $2; } | type_decl

type_decl_exp: type_decl_array { if($1->array && !$1->array->exp)
    { parser_error(&@$, arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  $$ = $1; }

type_decl_empty: type_decl_array { if($1->array && $1->array->exp)
    { parser_error(&@$, arg, "type must be defined with empty []'s", 0204); YYERROR;}
  $$ = $1; }

arg
  : type_decl_empty arg_decl ":" binary_exp {
    $$.arg = (Arg) { .td =  $1, .var_decl = $2, .exp = $4 };
    $$.flag = fbflag_default;
  }
  | type_decl_empty arg_decl {
    $$.arg = (Arg) { .td =  $1, .var_decl = $2};
    $$.flag = fbflag_none;
  };
arg_list:
     arg {
       $$.args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set($$.args, Arg, 0, $1.arg);
       $$.flag = $1.flag;
     }
	  |  arg_list "," arg {
     if($1.flag == fbflag_default && !$3.arg.exp)
        { parser_error(&@3, arg, "missing default argument", 0205); YYERROR;}
     else $1.flag = $3.flag;
     mp_vector_add(mpool(arg), &$1.args, Arg, $3.arg);
     $$ = $1;
   };

locale_arg:
    arg {
       $$.args = new_mp_vector(mpool(arg), Arg, 2);
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), @$),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = @$ },
         .exp = NULL
       };
       mp_vector_set($$.args, Arg, 0, self);
       mp_vector_set($$.args, Arg, 1, $1.arg);
       $$.flag = $1.flag;
     }
	  |  locale_arg "," arg {
     if($1.flag == fbflag_default && !$3.arg.exp)
        { parser_error(&@3, arg, "missing default argument", 0205); YYERROR;}
     else $1.flag = $3.flag;
     mp_vector_add(mpool(arg), &$1.args, Arg, $3.arg);
     $$ = $1;
   };
locale_list:
    locale_arg |
    {
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), @$),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = @$ },
         .exp = NULL
       };
       $$.args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set($$.args, Arg, 0, self);
    }

fptr_arg: type_decl_array fptr_arg_decl { $$ = (Arg) { .td = $1, .var_decl = $2 }; }
fptr_list:
  fptr_arg {
    $$ = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set($$, Arg, 0, $1);
  }
  | fptr_list "," fptr_arg {
    mp_vector_add(mpool(arg), &$1, Arg, $3);
    $$ = $1;
  };

code_stmt
  : "{" "}" {
    $$ = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = @$}; }
  | "{" stmt_list "}" {
    $$ = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = $2 }}, .pos = @$}; };

stmt_pp
  : PP_COMMENT { if(!arg->ppa->lint)return 0; $$ = MK_STMT_PP(comment, $1, @$); }
  | PP_INCLUDE { $$ = MK_STMT_PP(include, $1, @$); }
  | PP_DEFINE  { $$ = MK_STMT_PP(define,  $1, @$); }
  | PP_PRAGMA  { $$ = MK_STMT_PP(pragma,  $1, @$); }
  | PP_UNDEF   { $$ = MK_STMT_PP(undef,   $1, @$); }
  | PP_IFDEF   { $$ = MK_STMT_PP(ifdef,   $1, @$); }
  | PP_IFNDEF  { $$ = MK_STMT_PP(ifndef,  $1, @$); }
  | PP_ELSE    { $$ = MK_STMT_PP(else,    $1, @$); }
  | PP_ENDIF   { $$ = MK_STMT_PP(endif,   $1, @$); }
  | PP_NL      { if(!arg->ppa->lint)return 0; $$ = MK_STMT_PP(nl,      $1, @$); }
  | PP_IMPORT  { $$ = MK_STMT_PP(import, $1, @$); }
  | LOCALE_INI ID exp LOCALE_END { $$ = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = $3, .xid = $2, .pp_type = ae_pp_locale, }}, .pos = @1 }; }
  | LOCALE_INI ID LOCALE_END { $$ = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = $2, .pp_type = ae_pp_locale, }}, .pos = @1 }; };

stmt
  : exp_stmt
  | loop_stmt
  | selection_stmt
  | code_stmt
  | match_stmt
  | jump_stmt
  | stmt_pp
  | varloop_stmt
  | defer_stmt
  | try_stmt
  | retry_stmt
  ;

retry_stmt: "retry" ";" {
  if(!arg->handling)
    { parser_error(&@1, arg, "`retry` outside of `handle` block", 0); YYERROR; }
  $$ = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=@1};
};
handler: "handle" { arg->handling = true; } opt_id stmt { $$ = (Handler){ .xid = $3, .stmt = cpy_stmt3(mpool(arg), &$4), .pos = $3 ? @3 :@1}; arg->handling = false; };
handler_list: handler {
    $$.handlers = new_mp_vector(mpool(arg), Handler, 1);
    mp_vector_set($$.handlers, Handler, 0, $1);
    $$.has_xid = !!$1.xid;
  }
  | handler_list handler  {
        if(!$1.has_xid)
        { parser_error(&@2, arg, "`handle` after a catch-all block", 0); YYERROR; }
// handle duplicates in scan0
/*
        Handler_List list = $2;
        while(list) {
          if(list->xid == $1->xid)
          { parser_error(&@2, arg, "duplicated `handle`", 0); YYERROR; }
          list = list->next;
        }
*/
mp_vector_add(mpool(arg), &$1.handlers, Handler, $2);
        $$ = $1;
//        $1->next = $2;
  }
try_stmt: "try" stmt handler_list { $$ = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &$2), .handler = $3.handlers, }},
  .pos = @1};
};

opt_id: ID | { $$ = NULL; };

enum_def
  : "enum" flag ID "{" id_list "}" {
    $$ = new_enum_def(mpool(arg), $5, $3, @$);
    $$->flag = $2;
  };

when_exp: "when" exp { $$ = $2; } | { $$ = NULL; }

match_case_stmt
  : "case" exp when_exp ":" stmt_list {
    $$ = (struct Stmt_) {
      .stmt_type = 0,//ae_stmt_match, // ????
      .d = { .stmt_match = {
        .cond = $2,
        .when = $3,
        .list = $5
      }},
      .pos = @1
    };
};

match_list: match_case_stmt {
  $$ = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set($$, struct Stmt_, 0, $1);
} |
  match_list match_case_stmt {
    mp_vector_add(mpool(arg), &($1), struct Stmt_, $2);
    $$ = $1;
  };

match_stmt: "match" exp "{" match_list "}" "where" stmt {
  $$ = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = $2,
      .list  = $4,
      .where = cpy_stmt3(mpool(arg), &$7)
    }},
    .pos = @1
  };
}
|
"match" exp "{" match_list "}" {
  $$ = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = $2,
      .list  = $4,
    }},
    .pos = @1
  };
};

flow
  : "while" { $$ = ae_stmt_while; }
  | "until" { $$ = ae_stmt_until; }
  ;

loop_stmt
  : flow "(" exp ")" stmt
    { $$ = (struct Stmt_) { .stmt_type = $1,
      .d = { .stmt_flow = {
        .cond = $3,
        .body = cpy_stmt3(mpool(arg), &$5)
      }},
      .pos = @1
    };
  }
  | "do" stmt flow exp ";"
    { $$ = (struct Stmt_) { .stmt_type = $3,
      .d = { .stmt_flow = {
        .cond = $4,
        .body = cpy_stmt3(mpool(arg), &$2),
        .is_do = true
      }},
      .pos = @1
    };
  }
  | "for" "(" exp_stmt exp_stmt ")" stmt
    { $$ = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &$3),
        .c2 = cpy_stmt3(mpool(arg), &$4),
        .body = cpy_stmt3(mpool(arg), &$6),
      }},
      .pos = @1
    };
  }
  | "for" "(" exp_stmt exp_stmt exp ")" stmt
    { $$ = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &$3),
        .c2 = cpy_stmt3(mpool(arg), &$4),
        .c3 = $5,
        .body = cpy_stmt3(mpool(arg), &$7),
      }},
      .pos = @1
    };
  }
  | "foreach" "(" ID ":" opt_var binary_exp ")" stmt
    { $$ = (struct Stmt_) { .stmt_type = ae_stmt_each,
      .d = { .stmt_each = {
        .sym = $3,
        .exp = $6,
        .body = cpy_stmt3(mpool(arg), &$8),
        .vpos = @3
      }},
      .pos = @1
    };
// what to do with opt_var?
// list rem?
  }
  | "foreach" "(" ID "," ID ":" opt_var binary_exp ")" stmt
    { $$ = (struct Stmt_) { .stmt_type = ae_stmt_each,
      .d = { .stmt_each = {
        .sym = $5,
        .exp = $8,
        .body = cpy_stmt3(mpool(arg), &$10),
        .vpos = @3
      }},
      .pos = @1
    };
    $$.d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
    $$.d.stmt_each.idx->sym = $3;
    $$.d.stmt_each.idx->pos = @3;
    $$.d.stmt_each.idx->is_var = $7;
    $$.d.stmt_each.idx->v = NULL;
// what to do with opt_var?
// list rem?
  }
  | "repeat" "(" binary_exp ")" stmt
    { $$ = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = $3,
        .body = cpy_stmt3(mpool(arg), &$5)
      }},
      .pos = @1
    };
  }
  | "repeat" "(" ID "," binary_exp ")" stmt
    { $$ = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = $5,
        .body = cpy_stmt3(mpool(arg), &$7)
      }},
      .pos = @1
    };
    $$.d.stmt_loop.idx = mp_malloc(mpool(arg), EachIdx);
    $$.d.stmt_loop.idx->sym = $3;
    $$.d.stmt_loop.idx->pos = @3;
    $$.d.stmt_loop.idx->v = NULL;
  };

varloop_stmt: "varloop" binary_exp code_stmt { $$ = (struct Stmt_) { .stmt_type = ae_stmt_varloop,
  .d = { .stmt_varloop = {
    .exp = $2,
    .body = cpy_stmt3(mpool(arg), &$3)
  }},
  .pos = @1
};};

defer_stmt: "defer" stmt { $$ = (struct Stmt_) { .stmt_type = ae_stmt_defer,
    .d = { .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &$2) }},
    .pos = @1
  };
};

selection_stmt
  : "if" "(" exp ")" stmt %prec NOELSE
    { $$ = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = $3,
        .if_body = cpy_stmt3(mpool(arg), &$5)
      }},
      .pos = @1
    };
  }
  | "if" "(" exp ")" stmt "else" stmt
    { $$ = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = $3,
        .if_body = cpy_stmt3(mpool(arg), &$5),
        .else_body = cpy_stmt3(mpool(arg), &$7)
      }},
      .pos = @1
    };
  };

breaks: "break"     { $$ = ae_stmt_break; } | CONTINUE  { $$ = ae_stmt_continue; };
jump_stmt
  : "return" exp ";" { $$ = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = $2 }},
      .pos = @1
    };
  }
  | "return" ";"     { $$ = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = @1
    };
  }
  | breaks NUM ";"   { $$ = (struct Stmt_) { .stmt_type = $1,
      .d = { .stmt_index = { .idx = $2 }},
      .pos = @1
    };
  }
  | breaks ";" { $$ = (struct Stmt_) { .stmt_type = $1,
      .d = { .stmt_index = { .idx = -1 }},
      .pos = @1 };
  };

exp_stmt
  : exp ";" { $$ = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = $1 }},
      .pos = @1
    };
  }
  | ";"     { $$ = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = @1
    };
  };

exp:
    binary_exp           { $$ = $1; }
  | binary_exp "," exp
    {
      if($1->next) {
        parser_error(&@3, arg, "invalid format for expression", 0);
        YYERROR;
      }
      $1->next = $3;
    };


binary_exp
  : decl_exp
  | binary_exp "@"     decl_exp   { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @2); }
  | binary_exp DYNOP   decl_exp   { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @2); }
  | binary_exp OPTIONS decl_exp { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @2); };


call_template: ":[" type_list "]" { $$ = $2; } | { $$ = NULL; };

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
  | binary_exp ":" binary_exp "," dict_list  { $1->next = $3; $3-> next = $5; $$ = $1; }

range
  : "[" exp ":" exp "]" { $$ = new_range(mpool(arg), $2, $4); }
  | "[" exp ":" "]"     { $$ = new_range(mpool(arg), $2, NULL); }
  | "[" %prec RANGE_EMPTY ":" exp "]"     { $$ = new_range(mpool(arg), NULL, $3); }
  ;


array: array_exp | array_empty;
decl_exp: con_exp
  | type_decl_flag2 flag type_decl_array var_decl_list { $$= new_exp_decl(mpool(arg), $3, $4, @$); $$->d.exp_decl.td->flag |= $1 | $2; };

func_args: "(" arg_list   { $$ = $2; } | "(" { $$ = (struct ParserArg){}; };
fptr_args: "(" fptr_list { $$ = $2; } | "(" { $$ = NULL; };
arg_type: "..." ")" { $$ = fbflag_variadic; }| ")" { $$ = 0; };

decl_template: ":[" specialized_list "]" { $$ = $2; } | { $$ = NULL; };

global: GLOBAL { $$ = ae_flag_global; /*arg->global = true;*/ }

storage_flag: STATIC { $$ = ae_flag_static; } | global;

access_flag: PRIVATE { $$ = ae_flag_private; }
  | PROTECT { $$ = ae_flag_protect; }
  ;

flag: access_flag { $$ = $1; }
  |  storage_flag { $$ = $1; }
  |  access_flag storage_flag { $$ = $1 | $2; }
  | { $$ = ae_flag_none; }
  ;

final: "final" { $$ = ae_flag_final; } | { $$ = ae_flag_none; };

modifier: "abstract" final { $$ = ae_flag_abstract | $2; } | final ;

func_def_base
  : FUNCTION func_base func_args arg_type code_stmt {
    $2->args = $3.args;
    $2->fbflag |= $4 | $3.flag;
    $$ = new_func_def(mpool(arg), $2, &$5);
  }
  | FUNCTION func_base func_args arg_type ";" {
    if($3.flag == fbflag_default)
    { parser_error(&@2, arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    $2->args = $3.args;
    $2->fbflag |= $4;
    SET_FLAG($2, abstract);
    $$ = new_func_def(mpool(arg), $2, NULL);
  }
  | LOCALE global ID LPAREN locale_list RPAREN code_stmt {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), @3);
    Func_Base *base = new_func_base(mpool(arg), td, $3, $5.args, $2, @3);
    base->fbflag |= fbflag_locale | $5.flag;
    $$ = new_func_def(mpool(arg), base, cpy_stmt3(mpool(arg), &$7));
  }
  | LOCALE ID LPAREN locale_list RPAREN code_stmt {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), @2);
    Func_Base *base = new_func_base(mpool(arg), td, $2, $4.args, ae_flag_none, @2);
    base->fbflag |= fbflag_locale | $4.flag;
    $$ = new_func_def(mpool(arg), base, cpy_stmt3(mpool(arg), &$6));
  }

abstract_fdef
  : FUNCTION flag "abstract" type_decl_empty ID decl_template fptr_args arg_type ";"
    {
      Func_Base *base = new_func_base(mpool(arg), $4, $5, NULL, $2 | ae_flag_abstract, @5);
      if($6)
        base->tmpl = new_tmpl_base(mpool(arg), $6);
      base->args = $7;
      base->fbflag |= $8;
      $$ = new_func_def(mpool(arg), base, NULL);
    };

op_op: op | shift_op | rel_op | mul_op | add_op;
op_base
  :  type_decl_empty op_op decl_template "(" arg "," arg ")"
    {
      if($5.flag == fbflag_default || $7.flag == fbflag_default)
      { parser_error(&@2, arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = $5.arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = $7.arg;
      $$ = new_func_base(mpool(arg), $1, $2, args, ae_flag_none, @2);
      if($3)$$->tmpl = new_tmpl_base(mpool(arg), $3);
    }
  |  type_decl_empty post_op decl_template "(" arg ")"
    {
      if($5.flag == fbflag_default)
      { parser_error(&@2, arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, $5.arg);
      $$ = new_func_base(mpool(arg), $1, $2, args, ae_flag_none, @2);
      if($3)$$->tmpl = new_tmpl_base(mpool(arg), $3);
    }
  |  unary_op type_decl_empty decl_template "(" arg ")"
    {
      if($5.flag == fbflag_default)
      { parser_error(&@2, arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, $5.arg);
      $$ = new_func_base(mpool(arg), $2, $1, args, ae_flag_none, @1);
      $$->fbflag |= fbflag_unary;
      if($3)$$->tmpl = new_tmpl_base(mpool(arg), $3);
    }
  | type_decl_empty OPID_A func_args ")"
    {
      $$ = new_func_base(mpool(arg), $1, $2, $3.args, ae_flag_none, @2);
      $$->fbflag |= fbflag_internal;
    };

operator: "operator" { $$ = ae_flag_none; } | "operator" global { $$ = $2; };
op_def
  : operator op_base code_stmt
  { $$ = new_func_def(mpool(arg), $2, &$3); $2->fbflag |= fbflag_op; $2->flag |= $1; }
  | operator op_base ";"
  { $$ = new_func_def(mpool(arg), $2, NULL); $2->fbflag |= fbflag_op; $2->flag |= $1 | ae_flag_abstract; }
  | operator "abstract" op_base ";"
  { $$ = new_func_def(mpool(arg), $3, NULL); $3->fbflag |= fbflag_op; $3->flag |= $1 | ae_flag_abstract; }

func_def: func_def_base | abstract_fdef | op_def
  |  operator "new" func_args arg_type code_stmt
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, $2, $3.args, $1, @2);
      base->fbflag = $4 | $3.flag;
      $$ = new_func_def(mpool(arg), base, &$5);
    }
  |  operator "new" func_args arg_type ";"
    {
      if($3.flag == fbflag_default)
      { parser_error(&@2, arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, $2, $3.args, $1 | ae_flag_abstract, @2);
      base->fbflag = $4;
      $$ = new_func_def(mpool(arg), base, NULL);
    }
  |  operator "abstract" "new" func_args arg_type ";"
    {
      if($4.flag == fbflag_default)
      { parser_error(&@2, arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, $3, $4.args, $1 | ae_flag_abstract, @3);
      base->fbflag = $5;
      $$ =new_func_def(mpool(arg), base, NULL);
    }

type_decl_base
  : ID { $$ = new_type_decl(mpool(arg), $1, @$); }
  | "(" flag type_decl_empty decl_template fptr_args arg_type func_effects ")" {
      const Symbol name = sig_name(arg, @3.first);
      $$ = new_type_decl(mpool(arg), name, @1);
      Func_Base *fb = new_func_base(mpool(arg), $3, name, NULL, $2, @1);
      if($4)
        fb->tmpl = new_tmpl_base(mpool(arg), $4);
      fb->args = $5;
      fb->fbflag |= $6;
      const Fptr_Def fptr = new_fptr_def(mpool(arg), fb);
      fptr->base->effects.ptr = $7.ptr;
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

option: "?" { $$ = 1; } | OPTIONS { $$ = strlen(s_name($1)); } | { $$ = 0; };
type_decl_opt: type_decl_noflag option { $$ = $1; $$->option = $2; };
type_decl: type_decl_opt | type_decl_flag type_decl_opt { $$ = $2; $$->flag |= $1; };

type_decl_flag
  : "late"  { $$ = ae_flag_late; }
  | "const" { $$ = ae_flag_const; };

opt_var: "var" { $$ = true; } | { $$ = false; };

type_decl_flag2: "var"  { $$ = ae_flag_none; } | type_decl_flag

union_decl:
            ID ";" {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), @1);
  $$ = (Union_Member) { .td = td, .vd = { .xid =$1, .pos = @1 } };
}
| type_decl_empty ID ";" { $$ = (Union_Member) { .td = $1, .vd = { .xid =$2, .pos = @2 }  };}
| type_decl_empty ID array_empty ";" { $$ = (Union_Member) { .td = $1, .vd = { .xid =$2, .array = $3, .pos = @2 }  };};

union_list: union_decl {
    $$ = new_mp_vector(mpool(arg), Union_Member, 1);
    mp_vector_set($$, Union_Member, 0, $1);
  }
  | union_list union_decl {
    mp_vector_add(mpool(arg), &$1, Union_Member, $2);
    $$ = $1;
  };

union_def
  : "union" flag ID decl_template "{" union_list "}" {
      $$ = new_union_def(mpool(arg), $6, @3);
      $$->xid = $3;
      $$->flag = $2;
      if($4)
        $$->tmpl = new_tmpl_base(mpool(arg), $4);
    }
  ;

var_decl_list
  : var_decl_list "," var_decl {
     mp_vector_add(mpool(arg), &$1, struct Var_Decl_, $3);
     $$ = $1;
  }
  | var_decl {
     $$ = new_mp_vector(mpool(arg), struct Var_Decl_, 1);
     mp_vector_set($$, struct Var_Decl_, 0, $1);
  }
  ;

var_decl: ID { $$ = (struct Var_Decl_) { .xid = $1, .pos = @1 }; }
  | ID array   { $$ = (struct Var_Decl_) { .xid = $1, .array = $2, .pos = @1 }; };

arg_decl: ID { $$ = (struct Var_Decl_) { .xid = $1, .pos = @1 }; }
  | ID array_empty { $$ = (struct Var_Decl_) { .xid = $1, .array = $2, .pos = @1 }; }
  | ID array_exp { parser_error(&@2, arg, "argument/union must be defined with empty []'s", 0210); YYERROR; };
fptr_arg_decl: arg_decl | { $$ = (struct Var_Decl_){}; }

eq_op : "==" | "!=";
rel_op: "<" | ">" | "<=" | ">=";
shift_op: "<<" | ">>";
add_op: "+" | "-";
mul_op: "*" | "/" | "%";

opt_exp: exp { $$ = $1; } | { $$ = NULL; }
con_exp: log_or_exp
  | log_or_exp "?" opt_exp ":" con_exp
      { $$ = new_exp_if(mpool(arg), $1, $3, $5, @$); };
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

cast_exp: unary_exp | cast_exp "$" type_decl_empty
    { $$ = new_exp_cast(mpool(arg), $3, $1, @$); };

unary_op : "-" %prec UMINUS | "*" %prec UTIMES | post_op
  | "!" | "~"
  ;

unary_exp : post_exp
  | unary_op unary_exp { $$ = new_exp_unary(mpool(arg), $1, $2, @$); }
  | "spork" unary_exp { $$ = new_exp_unary(mpool(arg), $1, $2, @1); }
  | "fork" unary_exp { $$ = new_exp_unary(mpool(arg), $1, $2, @1); }
  | "new" type_decl_exp "(" opt_exp ")" {
       $$ = new_exp_unary2(mpool(arg), $1, $2, $4 ?: new_prim_nil(mpool(arg), @4), @$);
  }
  | "new" type_decl_exp {$$ = new_exp_unary2(mpool(arg), $1, $2, NULL, @$); }
  | "spork" code_stmt   { $$ = new_exp_unary3(mpool(arg), $1, &$2, @1); };
  | "fork" code_stmt   { $$ = new_exp_unary3(mpool(arg), $1, &$2, @1); };
  | "spork" captures code_stmt   { $$ = new_exp_unary3(mpool(arg), $1, &$3, @1); $$->d.exp_unary.captures = $2; };
  | "fork"  captures code_stmt   { $$ = new_exp_unary3(mpool(arg), $1, &$3, @1); $$->d.exp_unary.captures = $2; };
  | "$" type_decl_empty { $$ = new_exp_td(mpool(arg), $2, @2); };

lambda_list:
 ID {
  Arg a = (Arg) { .var_decl = { .xid = $1, .pos = @1 } };
    $$ = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set($$, Arg, 0, a);
}
|    lambda_list ID {
  Arg a = (Arg) { .var_decl = { .xid = $2, .pos = @2 } };
  mp_vector_add(mpool(arg), &$1, Arg, a);
  $$ = $1;
}
lambda_arg: "\\" lambda_list { $$ = $2; } | BACKSLASH { $$ = NULL; }

type_list
  : type_decl_empty {
    $$ = new_mp_vector(mpool(arg), Type_Decl*, 1);
    mp_vector_set($$, Type_Decl*, 0, $1);
  }
  | type_list "," type_decl_empty {
    mp_vector_add(mpool(arg), &$1, Type_Decl*, $3);
    $$ = $1;
  };


call_paren : "(" exp ")" { $$ = $2; } | "(" ")" { $$ = NULL; };

post_op : "++" | "--";

dot_exp: post_exp "." ID {
  if($1->next) {
    parser_error(&@1, arg, "can't use multiple expression"
      " in dot member base expression", 0211);
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
    $1->pos.last = $3->pos.last;
    free_exp(mpool(arg), $3);
  } else
  $1->next = $3;
}

capture: ID { $$ = (Capture){ .xid = $1, .pos = @1 };} | "&" ID { $$ = (Capture){ .xid = $2, .is_ref = true, .pos = @2 }; };

_captures: capture { $$ = new_mp_vector(mpool(arg), Capture, 1); mp_vector_set($$, Capture, 0, $1); }
        | _captures capture { mp_vector_add(mpool(arg), &$1, Capture, $2); $$ = $1; }
captures: ":" _captures ":" { $$ = $2; } |  { $$ = NULL; };
prim_exp
  : ID                   { $$ = new_prim_id(     mpool(arg), $1, @$); }
  | NUM                  { $$ = new_prim_int(    mpool(arg), $1, @$); }
  | FLOATT               { $$ = new_prim_float(  mpool(arg), $1, @$); }
  | interp               { $$ = !$1->next ? $1 : new_prim_interp(mpool(arg), $1, @$); }
  | STRING_LIT           { $$ = new_prim_string( mpool(arg), $1, 0, @$); }
  | CHAR_LIT             { $$ = new_prim_char(   mpool(arg), $1, @$); }
  | array                { $$ = new_prim_array(  mpool(arg), $1, @$); }
  | "{" dict_list "}"    { $$ = new_prim_dict(   mpool(arg), $2, @$); }
  | range                { $$ = new_prim_range(  mpool(arg), $1, @$); }
  | "<<<" exp ">>>"      { $$ = new_prim_hack(   mpool(arg), $2, @$); }
  | "(" exp ")"          { $$ = $2; }
  | LOCALE_EXP           {
    const loc_t loc = { .first = { .line = @1.first.line, .column = @1.first.column - 1},
                        .last = { .line = @1.last.line, .column = @1.last.column - 1}};
    $$ = new_prim_id(mpool(arg), $1, loc);
    $$->d.prim.prim_type = ae_prim_locale;
  }
  | lambda_arg captures code_stmt { $$ = new_exp_lambda( mpool(arg), lambda_name(arg->st, @1.first), $1, &$3, @1); $$->d.exp_lambda.def->captures = $2;};
  | lambda_arg captures "{" binary_exp "}" { $$ = new_exp_lambda2( mpool(arg), lambda_name(arg->st, @1.first), $1, $4, @1); $$->d.exp_lambda.def->captures = $2;};
  | "(" op_op ")"        { $$ = new_prim_id(     mpool(arg), $2, @$); }
  | "perform" ID         { $$ = new_prim_perform(mpool(arg), $2, @2); }
  | "(" ")"              { $$ = new_prim_nil(    mpool(arg),     @$); }
  ;
%%
#undef scan
ANN static int parser_error(loc_t *loc, Scanner *const scan, const char* diagnostic, const uint error_code) {
  char _main[strlen(diagnostic) + 1];
  strcpy(_main, diagnostic);
  char *_explain = strchr(_main, ','),
       *_fix = NULL;
  if(_explain) {
    _main[_explain - _main] = '\0';
    _explain += 2;
    _fix = strchr(_explain, ',');
    if(_fix) {
      _explain[_fix - _explain] = '\0';
      _fix += 2;
    }
  }
  scanner_error(scan, _main, _explain, _fix, *loc, error_code);
  return 0;
}
