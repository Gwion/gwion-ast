IS    (u|U|l|L)*
SPACE [ \r\t]
OP    [\?:\$@\+\-\*/%~\<\>\^|&\!=]
%{
#include <ctype.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "dynop.h"
#include "bison_compat.h"
#include "parser.h"

#define gwion_alloc(a,b) xmalloc(a)
#define gwion_realloc(a,b,c) xrealloc(a,b)
#define gwion_free(a,b)  xfree(a)
#define YY_FATAL_ERROR(msg) gwlex_error(yyscanner, msg)

#define GWYY_FATAL_ERROR(msg) { gwlex_error(yyscanner, msg); yyterminate(); }

// there was yynoreturn
ANN void gwlex_error(yyscan_t yyscanner, const char*);
ANN static char* strip_lit(char* str);
ANN static char* alloc_str(void *, const char* str);
ANN static Symbol alloc_sym(void *, const char* str);
ANN static unsigned long htol(const char* str);
ANN static void newline(void* data);
ANN static void adjust(void* data);
ANN static uint  get_currline(void* data);
ANN static uint  get_currpos(void* data);
ANN static char* get_currfile(void* data);
ANN int gwion_error(loc_t, Scanner*, const char *);
ANN static Macro add_macro(void* data, const m_str id);
ANN static m_str strip_include(Scanner* scan, const m_str line, const m_bool);
ANN2(1,2) static m_bool handle_include(void*, const m_str, YY_BUFFER_STATE);
ANN static m_bool rem_macro(void* data, const m_str id);
ANN static m_bool has_macro(void* data, const m_str id);
ANN static int macro_toggle(void*);
ANN static void macro_end(void*);
ANN2(1,2) static int is_macro(void*, const m_str, YY_BUFFER_STATE);
ANN static void macro_append(void*, const m_str);
ANN static void macro_arg(void* data, const m_str id);

/* macro call args */
ANN static m_bool handle_comma(void* data);
ANN static void handle_lpar(void* data);
ANN static m_bool handle_rpar(void* data);

// we should use yymore instead
ANN static void handle_char(void* data, m_str str);

ANN static m_str strip_comment(Scanner* scan, const m_str str);
ANN static m_str get_arg_text(void* data, const m_str id);
ANN static m_str macro_data(void* data, const m_bool);

#define SCAN_LINT(a)     if(scan->ppa->lint)a;
#define SCAN_NOLINT      if(!scan->ppa->lint)
#define GWYY_ISLINT      ((Scanner*)yyextra)->ppa->lint
#define GWYY_DOLINT(a)   if(GWYY_ISLINT) { a; }
#define GWYY_LINT(a,b)   if(GWYY_ISLINT) { yylval->sval = a; return b; }
#define GWYY_NL          if(GWYY_ISLINT) { yylval->sval = NULL; return PP_NL; }

#define GWYY_COMMENT     if(GWYY_ISLINT) { yymore(); continue; }
#define GWYY_COMMENT2    if(GWYY_ISLINT)   { yymore(); newline(yyscanner); YY_USER_ACTION; continue; }
#define GWYY_COMMENT_END BEGIN(INITIAL); if(GWYY_ISLINT) { yylval->sval = strdup(yytext); return PP_COMMENT; }

#define GWYY_INCLUDE  GWYY_LINT(strip_include(yyextra, yytext, 1), PP_INCLUDE) if(handle_include(yyscanner, yytext, YY_CURRENT_BUFFER))yyterminate();
#define GWYY_UNDEF   GWYY_LINT(strdup(yytext), PP_UNDEF) if(rem_macro(yyscanner, yytext) < 0) yyterminate();
#define GWYY_DEFINE  BEGIN(INITIAL); GWYY_LINT(macro_data(yyscanner, 0), PP_DEFINE) newline(yyscanner); YY_USER_ACTION; BEGIN(INITIAL);
#define GWYY_CALL    GWYY_LINT(macro_data(yyscanner, 1), ID)
#define GWYY_IFDEF(a,b) GWYY_LINT(strdup(a + b), b ? PP_IFNDEF : PP_IFDEF) \
{ const m_bool ret = has_macro(yyscanner, a); xfree(a); if(ret < 0) yyterminate(); if(ret)BEGIN(skip); }
#define GWYY_ELSE    GWYY_LINT(NULL, PP_ELSE) BEGIN(macro_toggle(yyscanner));
#define GWYY_ENDIF   GWYY_LINT(NULL, PP_ENDIF) macro_end(yyscanner);
%}
%option noyyalloc noyyrealloc noyyfree nounput
%option noyylineno
%option noyyget_text
%option noyyget_lineno noyyset_lineno
%option noyyget_in
%option noyyget_out noyyset_out
%option noyyget_lval noyyset_lval
%option noyyget_lloc noyyset_lloc
%option noyyget_debug noyyset_debug
%option bison-bridge reentrant bison-locations
%option prefix="gwion_"
%option yywrap
%option yymore
%option never-interactive batch
%option nobackup nodebug
%x comment
%x define define_arg_start define_arg skip get_arg pragma
%%

<get_arg>{SPACE}*","{SPACE}* { adjust(yyscanner); if(handle_comma(yyscanner) < 0) yyterminate(); }
<get_arg>"(" { adjust(yyscanner); handle_lpar(yyscanner); }
<get_arg>")" { adjust(yyscanner);
  const m_bool ret = handle_rpar(yyscanner);
  if(ret < 0)
    yyterminate();
  if(ret) {
    BEGIN(INITIAL);
    GWYY_CALL
  }
}
<get_arg>.   { adjust(yyscanner); handle_char(yyscanner, yytext); }

^#define{SPACE}+[A-Za-z_][A-Za-z0-9_]* {
  if(!add_macro(yyscanner, yytext))
    yyterminate();
  BEGIN(define_arg_start);
}
<define_arg>[A-Za-z_][A-Za-z0-9_]* { adjust(yyscanner); macro_arg(yyscanner, yytext); }
<define_arg>{SPACE}*","{SPACE}*    { adjust(yyscanner); }
<define_arg>"..."{SPACE}*")"{SPACE}* { adjust(yyscanner); macro_arg(yyscanner, "__VA_ARGS__"); BEGIN(define); }
<define_arg>" "   { GWYY_FATAL_ERROR(_("Invalid")); }
<define_arg>")"{SPACE}* { adjust(yyscanner); BEGIN(define); }
<define_arg>. { GWYY_FATAL_ERROR(_("invalid char in macro")); }

<define_arg_start>"("      { adjust(yyscanner); BEGIN(define_arg); };
<define_arg_start>{SPACE}* { adjust(yyscanner); BEGIN(define); };
<define_arg_start>\n       { adjust(yyscanner); BEGIN(INITIAL); GWYY_DEFINE; };

<define>\\n           { adjust(yyscanner); macro_append(yyscanner, yytext); continue; /* should we use "\n" ? */ };
<define>.*\n          { adjust(yyscanner); macro_append(yyscanner, yytext); GWYY_DEFINE; };

^"#pragma"{SPACE}+ { BEGIN(pragma); }
<pragma>.*\n { newline(yyscanner); YY_USER_ACTION; yylval->sval = strdup(yytext); BEGIN(INITIAL); return PP_PRAGMA; }

^#ifn?def{SPACE}+[A-Za-z_][A-Za-z0-9_]*{SPACE}* {
  adjust(yyscanner);
  const m_bool def = yytext[3] == 'n';
  m_str s = yytext + 6 + def;
  GWYY_LINT(strdup(s), def ? PP_IFNDEF : PP_IFDEF)
  while(isspace(*s))++s;
  size_t sz = strlen(s);
  while(isspace(s[--sz]));
  char c[sz + 2];
  strncpy(c, s, sz + 2);
  const m_bool ret = has_macro(yyscanner, c);
  if(ret < 0)
    yyterminate();
  if(!ret)
    BEGIN(skip);
}
^#else{SPACE}*\n  { newline(yyscanner); YY_USER_ACTION; GWYY_ELSE }
^#endif{SPACE}*\n { newline(yyscanner); YY_USER_ACTION; GWYY_ENDIF; BEGIN(INITIAL); }

<skip>\n      { newline(yyscanner); YY_USER_ACTION; }
<skip>^#else{SPACE}*\n { BEGIN(macro_toggle(yyscanner)); }
<skip>^#endif{SPACE}*\n { macro_end(yyscanner); BEGIN(INITIAL); }
<skip>.         { continue;}

^#include{SPACE}+<[A-Za-z0-9_./]*>{SPACE}* { GWYY_INCLUDE; }

^#undef{SPACE}+[A-Za-z_][A-Za-z0-9_]*{SPACE}* { GWYY_UNDEF }

^{SPACE}*"\n"                       { newline(yyscanner); YY_USER_ACTION; GWYY_NL; continue; }

"#!"             { YY_USER_ACTION; BEGIN(comment); }
<comment>!\#     { BEGIN(INITIAL); }
<comment>\\\n    { newline(yyscanner); YY_USER_ACTION; GWYY_COMMENT2 }
<comment>\n      { newline(yyscanner); YY_USER_ACTION; GWYY_COMMENT_END }
<comment>.       { GWYY_COMMENT;  }

"\n"                                { newline(yyscanner); YY_USER_ACTION; continue; }
{SPACE}                             { adjust(yyscanner); continue; }
{OP}{1} { adjust(yyscanner);  yylval->sym = alloc_sym(yyscanner, yytext); return op1(yytext); }
{OP}{2} { adjust(yyscanner);  yylval->sym = alloc_sym(yyscanner, yytext); return op2(yytext); }
{OP}{3} { adjust(yyscanner);  yylval->sym = alloc_sym(yyscanner, yytext); return op3(yytext); }
{OP}{4,} { adjust(yyscanner);  yylval->sym = alloc_sym(yyscanner, yytext); return DYNOP; }
";"                                 { adjust(yyscanner); return SEMICOLON;}
","                                 { adjust(yyscanner); return COMMA;}
"fun"|"function"                    { adjust(yyscanner); return FUNCTION;}
"typedef"                           { adjust(yyscanner); return TYPEDEF;}
"#("                                { adjust(yyscanner); return SHARPPAREN;}
"%("                                { adjust(yyscanner); return PERCENTPAREN;}
"@("                                { adjust(yyscanner); return ATPAREN;}
">("                                { adjust(yyscanner); return GTPAREN;}
"<("                                { adjust(yyscanner); return LTPAREN;}
"new"                               { adjust(yyscanner);  yylval->sym = alloc_sym(yyscanner, yytext); return NEW; }
"spork"                             { adjust(yyscanner);  yylval->sym = alloc_sym(yyscanner, yytext); return SPORK; }
"fork"                              { adjust(yyscanner);  yylval->sym = alloc_sym(yyscanner, yytext); return FORK; }
"union"                             { adjust(yyscanner); return UNION; }

"\\"                                { adjust(yyscanner); return BACKSLASH; }
"`"                                { adjust(yyscanner); return BACKTICK; }
"("                                 { adjust(yyscanner); return LPAREN; }
")"                                 { adjust(yyscanner); return RPAREN; }
"["                                 { adjust(yyscanner); return LBRACK; }
"]"                                 { adjust(yyscanner); return RBRACK; }
"{"                                 { adjust(yyscanner); return LBRACE; }
"}"                                 { adjust(yyscanner); return RBRACE; }

"class"                             { adjust(yyscanner); return CLASS;}
"operator"                          { adjust(yyscanner); return OPERATOR;}
"extends"                           { adjust(yyscanner); return EXTENDS;}
"..."|,{SPACE}*"..."                { adjust(yyscanner); return ELLIPSE;}
"."                                 { adjust(yyscanner); return DOT;}

%{ /* storage modifiers */ %}
"global"                            { adjust(yyscanner); return GLOBAL;}
"static"                            { adjust(yyscanner); return STATIC;}

%{ /*access modifiers */ %}
"protect"                           { adjust(yyscanner); return PROTECT;}
"private"                           { adjust(yyscanner); return PRIVATE;}
"const"                             { adjust(yyscanner); return CONSTT;}

"if"                                { adjust(yyscanner); return IF;}
"else"                              { adjust(yyscanner); return ELSE;}
"break"                             { adjust(yyscanner); return BREAK;}
"continue"                          { adjust(yyscanner); return CONTINUE;}
"return"                            { adjust(yyscanner); return TRETURN;}
"while"                             { adjust(yyscanner); return WHILE;}
"do"                                { adjust(yyscanner); return DO;}
"until"                             { adjust(yyscanner); return UNTIL;}
"repeat"                            { adjust(yyscanner); return LOOP;}
"for"                               { adjust(yyscanner); return FOR;}
"goto"                              { adjust(yyscanner); return GOTO;}
"match"                             { adjust(yyscanner); return MATCH;}
"where"                             { adjust(yyscanner); return WHERE;}
"when"                              { adjust(yyscanner); return WHEN;}
"case"                              { adjust(yyscanner); return CASE;}
"enum"                              { adjust(yyscanner); return ENUM;}
"typeof"                            { adjust(yyscanner); return TYPEOF;}
"auto"                              { adjust(yyscanner); return AUTO;}
"##" { adjust(yyscanner); return PASTE; }
"#"[A-Za-z_][A-Za-z0-9_]*           {
  adjust(yyscanner);
  const m_str text = get_arg_text(yyscanner, yytext + 1);
  if(text) {
    yylval->sval = alloc_str(yyscanner, text);
    return STRING_LIT;
  } else {
    gw_err(_("can't stringify non argument token '%s'\n"), yytext + 1);
    return 1;
  }
}
"__line__"                          { adjust(yyscanner); yylval->lval = get_currline(yyscanner); return NUM;}
"__file__"                          { adjust(yyscanner); yylval->sval = get_currfile(yyscanner); return STRING_LIT;}

0[xX][0-9a-fA-F]+{IS}?              { adjust(yyscanner); yylval->lval = htol(yytext);                 return NUM;        }
0[cC][0-7]+{IS}?                    { adjust(yyscanner); yylval->lval = (unsigned long)atoi(yytext);  return NUM;        }
[0-9]+{IS}?                         { adjust(yyscanner); yylval->lval = (unsigned long)atoi(yytext);  return NUM;        }
([0-9]+"."[0-9]*)|([0-9]*"."[0-9]+) { adjust(yyscanner); yylval->fval = (m_float)atof(yytext);        return FLOATT;      }
[A-Za-z_][A-Za-z0-9_]*              {
  adjust(yyscanner);
  const int ret = is_macro(yyscanner, yytext, YY_CURRENT_BUFFER);
  if(ret < 0)
    yyterminate();
  if(!ret) {
    yylval->sval = alloc_str(yyscanner, yytext);
    return ID;
  } else
    continue;
}

\"(\\.|[^\\"])*\"                   { adjust(yyscanner); yylval->sval = alloc_str(yyscanner, strip_lit(yytext)); return STRING_LIT; }
'(\\.|[^\\'])'                      { adjust(yyscanner); yylval->sval = alloc_str(yyscanner, strip_lit(yytext)); return CHAR_LIT;   }
.                                   { GWYY_FATAL_ERROR(_("stray in program")); }

%% // LCOV_EXCL_LINE
// LCOV_EXCL_LINE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

ANN Symbol lambda_name(const Scanner *scan) {
  char c[6 + 1 + num_digit(scan->pos.line) + num_digit(scan->pos.column) + 1];
  sprintf(c, "lambda:%u:%u", scan->pos.line, scan->pos.column);
  return insert_symbol(scan->st, c);
}

static inline void header(const Scanner *scan, const char *msg) {
  const struct PPState_ *ppstate = (struct PPState_*)vector_back(&scan->pp->filename);
  gw_err("\033[1m%s:%u:%u:\033[0m\n  %s\n", ppstate->filename,
    scan->pos.line, scan->pos.column, msg);
}

ANN void gwlex_error(yyscan_t yyscanner, const char *msg) {
  struct yyguts_t *yyg = (struct yyguts_t*)yyscanner;
  Scanner* scan = (Scanner*)yyg->yyextra_r;
  header(scan, msg);
}

char* strip_lit(char* str){
  str[strlen(str)-1] = '\0';
  return str+1;
}

Symbol alloc_sym(void *data, const char* str) {
  const Scanner* scan = yyget_extra(data);
  return insert_symbol(scan->st, (m_str)str);
}

char* alloc_str(void *data, const char* str) {
  const Symbol sym = alloc_sym(data, str);
  return s_name(sym);
}


unsigned long htol(const char* str) {
  unsigned char * c = (unsigned char*)str;
  unsigned long n = 0;

  c += 2;
  while(*c) {
    n <<= 4;
    switch(*c) {
      case '0' ... '9':
        n += (uint)(*c - '0');
        break;
      case 'a' ... 'f':
        n += (uint)(*c - 'a' + 10);
        break;
      case 'A' ... 'F':
        n += (uint)(*c - 'A' + 10);
        break;
    }
    c++;
  }
  return n;
}

static void newline(void* data) {
  Scanner* scan = yyget_extra(data);
  ++scan->pos.line;
  scan->pos.column = 1;
}

static uint get_currline(void* data) {
  const Scanner* scan = yyget_extra(data);
  return scan->pos.line;
}

static uint get_currpos(void* data) {
  const Scanner* scan = yyget_extra(data);
  return scan->pos.column;
}

static char* get_currfile(void* data) {
  const Scanner* scan = yyget_extra(data);
  const struct PPState_ *ppstate = (struct PPState_*)vector_back(&scan->pp->filename);
  return alloc_str(data, ppstate->filename);
}

static void adjust(void* data) {
  Scanner *scan = yyget_extra(data);
  scan->pos.column += (uint)gwion_get_leng((void*)data);
}

ANN int gwion_error(loc_t loc, Scanner* scan, const char* s) {
  const struct PPState_ *ppstate = (struct PPState_*)vector_back(&scan->pp->filename);
  const m_str name = ppstate->filename;
  m_str filename = name;
  if(!scan->pp->npar) {
    m_uint i = vector_size(&scan->pp->filename) - 1;
    if(*filename == '@') {
      while(*filename == '@') {
        gw_err(_("in expansion of %s.\n"), filename + 1);
        --i;
        const struct PPState_ *ppstate = (struct PPState_*)vector_at(&scan->pp->filename, i);
        filename = ppstate->filename;
      }
    }
  } else {
    const struct PPState_ *ppstate = (struct PPState_*)vector_front(&scan->pp->filename);
    filename = ppstate->filename;
  }
  loc_header(loc, filename);
  gw_err("%s\n", s);
  loc_err(loc, filename);
  return 0;
}

static Macro add_macro(void* data, const m_str line) {
  Scanner* scan = yyget_extra(data);
  int i = 7;
  while(isspace(line[i]))++i;
  scan->pos.column += i;
  m_str id = strip_comment(data, line + i);
  scan->pp->entry = macro_add(scan->pp->macros, id);
  xfree(id);
  if(!scan->pp->entry) {
    gwlex_error(data, "macro already defined");
    return NULL;
  }
  const struct PPState_ *ppstate = (struct PPState_*)vector_back(&scan->pp->filename);
  scan->pp->entry->file = ppstate->filename;
  scan->pp->entry->pos = scan->pos;
  scan->pp->entry->text = mp_calloc(scan->ppa->hash.p, GwText);
  scan->pp->entry->text->mp = scan->ppa->hash.p;
  return scan->pp->entry;
}

static m_str strip_include(Scanner* scan, const m_str line, const m_bool sign) {
  m_str str = line + 8;
  while(isspace(*str)) ++str;
  if(!sign)
    ++str;
  m_str end = strstr(str, ">");
  scan->pos.column += 2;
  return strndup(str, strlen(str) - strlen(end) + (uint)sign);
}

static m_str strip_comment(Scanner* scan, const m_str s) {
  m_str str = s;
  while(isspace(*str)) ++str;
  size_t end = strlen(str);
  while(isspace(str[--end]));
  scan->pos.column += (uint)(str - s);
  return strndup(str, end + 1);
}

static inline m_bool scan_rem_macro(Scanner *scan, const m_str id) {
  const Symbol sym = insert_symbol(scan->st, id);
  if(macro_rem(scan->pp->macros, id)) {
    const m_bool ret = ppa_rem_macro(scan->ppa, sym);
    if(!ret)
      vector_add(&scan->pp->global_undef, (vtype)sym);
    return ret;
  }
  return GW_ERROR;
}

static m_bool rem_macro(void* data, const m_str str) {
  Scanner* scan = yyget_extra(data);
  scan->pos.column += 6;
  const m_str id = strip_comment(scan, str+6);
  const m_bool ret = scan_rem_macro(scan, id);
  xfree(id);
  if(ret > 0)
    return GW_OK;
  gwlex_error(data, "undefined macro");
  return GW_ERROR;
}

static inline Macro scan_has_macro(Scanner *scan, const m_str id) {
  const Symbol sym = insert_symbol(scan->st, id);
  const m_int ret = vector_size(&scan->pp->global_undef) ? vector_find(&scan->pp->global_undef, (vtype)sym) : GW_ERROR;
  if(ret != GW_ERROR)
    return NULL;
  const Macro global = ppa_has_macro(scan->ppa, insert_symbol(scan->st, id));
  if(global)
    return global;
  return macro_has(scan->pp->macros, id);
}

static m_bool has_macro(void* data, const m_str id) {
  Scanner* scan = yyget_extra(data);
  if(scan->pp->def->idx != 59) // beware magic number
    return scan->pp->def->data[++scan->pp->def->idx] = !!scan_has_macro(scan, id);
  gwlex_error(data, "macros too nested");
  return GW_ERROR;
}

static void gwpp_stack(Scanner* scan, YY_BUFFER_STATE state, void* opt, const m_str str) {
  struct PPState_ *ppstate = new_ppstate(scan->st->p, str);
  ppstate->state = state;
  ppstate->data = opt;
  ppstate->pos = scan->pos;
  vector_add(&scan->pp->filename, (vtype)ppstate);
}

static FILE* get_include(const m_str str, const Vector v) {
  const size_t sz = strlen(str);
  for(m_uint i = 0; i < vector_size(v); ++i) {
    const m_str dir = (m_str)vector_at(v, i);
    char c[strlen(dir) + sz + 2];
    sprintf(c, "%s/%s", dir, str);
    FILE* f = fopen(str, "r");
    if(f) {
      return f;
    }
  }
  return NULL;
}

static m_bool handle_include(void* data, const m_str filename, YY_BUFFER_STATE handle) {
  Scanner* scan = yyget_extra(data);
  const m_str str = strip_include(scan, filename, 0);
  FILE* f = fopen(str, "r") ?: get_include(str, &scan->ppa->path);
  if(!f) {
    xfree(str);
    gwlex_error(data, "file not found");
    return GW_ERROR;
  }
  gwpp_stack(scan, handle, f, str);
  pos_ini(&scan->pos);
  yy_switch_to_buffer(yy_create_buffer(f, YY_BUF_SIZE, data), data);
  return GW_OK;
}

static m_str macro_data(void* data, const m_bool call) {
  Scanner* scan = yyget_extra(data);
  const Macro e = scan->pp->entry;
  size_t elen = strlen(e->name);
  size_t len = elen + 2;
  MacroArg args = e->base;
  if(args) {
    do {
      const m_str str = call ? args->text.str : args->name;
      len += strlen(str);
      if(args->next)
        len += 2;
    } while((args = args->next));
    len += 2;
  }
  if(!call && e->text->str)
    len += strlen(e->text->str) + 1;
  char c[len];
  size_t offset = elen;
  strcpy(c, e->name);
  args = scan->pp->entry->base;
  if(args) {
    c[offset++] = '(';
    do {
      const m_str str = call ? args->text.str : args->name;
      strcpy(c + offset, str);
      offset += strlen(str);
      if(call)
        text_release(&args->text);
      if(args->next) {
        strcpy(c + offset, ", ");
        offset += 2;
      }
    } while((args = args->next));
    c[offset++] = ')';
  }
  if(!call && e->text->str) {
    c[offset++] = ' ';
    strcpy(c + offset, e->text->str);
    offset += strlen(e->text->str);
  }
  c[offset] = '\0';
  scan->pp->entry = NULL;
  return s_name(insert_symbol(scan->st, c));
}

static int macro_toggle(void* data) {
  const Scanner* scan = yyget_extra(data);
  scan->pp->def->data[scan->pp->def->idx] = !scan->pp->def->data[scan->pp->def->idx];
  return scan->pp->def->data[scan->pp->def->idx] ? INITIAL : skip;
}

static void macro_arg(void* data, const m_str id) {
  Scanner* scan = yyget_extra(data);
  const m_str str = strip_comment(scan, id);
  const MacroArg arg = new_macroarg(scan->st->p, str);
  arg->pos.column = scan->pos.column;
  arg->pos = scan->pos;
  xfree(str);
  if(scan->pp->entry->base) {
    MacroArg a = scan->pp->entry->base;
    while(a->next)
      a = a->next;
    a->next = arg;
  } else
    scan->pp->entry->base = arg;
}

static void macro_end(void* data) {
  Scanner* scan = yyget_extra(data);
  --scan->pp->def->idx;
}

static m_str concat(const m_str a, const m_str b) {
  const size_t len = strlen(a) + strlen(b) + 4;
  const m_str c = (m_str)xmalloc(len);
  sprintf(c, "%s '%s'", a, b);
  return c;
}

static m_bool is_macro(void* data, const m_str s, YY_BUFFER_STATE handle) {
  Scanner* scan = yyget_extra(data);
  const m_bool is_str = s[0] == '#';
  m_str id = is_str ? s+1 : s;
  const struct PPState_ *ppstate = (struct PPState_*)vector_back(&scan->pp->filename);
  for(m_uint i = 0; i < vector_size(&scan->pp->filename); ++i) {
    const struct PPState_ *ppstate = (struct PPState_*)vector_at(&scan->pp->filename, i);
    if(ppstate->filename && ppstate->filename[0] == '@' && !strncmp(s, ppstate->filename + 8, strlen(ppstate->filename + 8) - 1)) {
      yywrap(data);
      gwlex_error(data, "recursive macro use detected");
      return GW_ERROR;
    }
  }
  MacroArg arg = ppstate->arg;
  while(arg) {
    if(!strcmp(id, arg->name)) {
      if(arg->text.str) {
        if(!is_str) {
          SCAN_NOLINT {
            const m_str str = concat("@argument", arg->name);
            gwpp_stack(scan, handle, NULL, str);
            scan->pos = arg->pos;
            yy_scan_string(arg->text.str, data);
          }
        } else {
          if(!strcmp(arg->name, "__VA_ARGS__"))exit(16);// not enough args ?
            return 0;
        }
      }
      return 1;
    }
    arg = arg->next;
  }
  Macro e = scan_has_macro(scan, id);
  if(e) {
  m_str str = NULL;
  scan->pp->entry = e;
  if(e->text->str) {
    if(e->base) {
      e->args = e->base;
//      SCAN_NOLINT
        str = concat("@macro", e->name);
      char c = '@';
      while(isspace(c = (char)input(data)))++scan->pos.column;
        if(c != '(') {
          xfree(str);
          gwlex_error(data, "macro needs arguments");
          return GW_ERROR;
        }
        ++scan->pp->npar;
        gwpp_stack(scan, handle, e->base, str);
        scan->pos = e->pos;
        struct yyguts_t *yyg = (struct yyguts_t*)data;
        yyg->yy_start = 1 + 2 * get_arg;
        void *yyscanner = data;
        YY_USER_ACTION
        return 2;
      } else {
        SCAN_LINT(return 0);
        const m_str str = concat("@macro", e->name);
        gwpp_stack(scan, handle, e->base, str);
        scan->pos = e->pos;
        yy_scan_string(e->text->str, data);
        return 1;
      }
    }
    return 1;
  } else if(!strcmp(id, "__VA_ARGS__")) { // vararg macro with no args
    Macro e = scan_has_macro(scan, ppstate->filename);
    if(!e)
      return 0;
    const m_str str = concat("@argument", "__VA_ARGS__");
    gwpp_stack(scan, handle, NULL, str);
    scan->pos = e->pos;
    yy_scan_string(e->base->text.str, data);
    return 1;
  }
  return 0;
}

static m_str get_arg_text(void* data, const m_str id) {
  const Scanner* scan = yyget_extra(data);
  if(!scan->pp->entry)
    return NULL;
  if(vector_size(&scan->pp->filename) == 1)
    return NULL;
  const struct PPState_ *ppstate = (struct PPState_*)vector_back(&scan->pp->filename);
  MacroArg arg = ppstate->arg;
  while(arg) {
    if(!strcmp(id, arg->name))
      return arg->text.str ?: "";
    arg = arg->next;
  }
  return NULL;
}

static void macro_append(void* data, const m_str text) {
  Scanner* scan = yyget_extra(data);
assert(scan->pp->entry);
  text_add(scan->pp->entry->text, text);
}

ANN void clear_buffer(void *state, void* scan) {
  struct PPState_ *ppstate = (struct PPState_*)state;
  const YY_BUFFER_STATE fini = (YY_BUFFER_STATE)ppstate->state;
  struct yyguts_t *yyg = (struct yyguts_t*)scan;
  YY_BUFFER_STATE curr = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top];
  YY_BUFFER_STATE base = yyg->yy_buffer_stack[0];
  if(ppstate->filename[0] != '@')
    fclose(ppstate->file);
  if(fini != base && fini != curr)
    yy_delete_buffer(fini, scan);
  xfree(ppstate->filename);
}

int yywrap(void* data) {
  struct yyguts_t *yyg = (struct yyguts_t*)data;
  YY_BUFFER_STATE handle = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top];
  Scanner *scan = yyget_extra(data);
  if(vector_size(&scan->pp->filename) > 1) {
    const struct PPState_ *ppstate = (struct PPState_*)vector_pop(&scan->pp->filename);
    if(handle != ppstate->state) {
      yy_switch_to_buffer(ppstate->state, data);
      yy_delete_buffer(handle, data);
    }
    if(ppstate->filename[0] != '@' && ppstate->file)
      fclose(ppstate->file);
    else if(ppstate->arg)
      clean_macroarg(ppstate->arg);
    if(strlen(ppstate->filename))
      xfree(ppstate->filename);
    scan->pos   = ppstate->pos;
    void* yyscanner = data;
    YY_USER_ACTION
    return 0;
  }
  return 1;
}

static m_bool handle_comma(void* data) {
  const Scanner *scan = yyget_extra(data);
  const MacroArg a = scan->pp->entry->args;
  if(strcmp(a->name, "__VA_ARGS__")) {
    if(!(scan->pp->entry->args = a->next)) {
      gwlex_error(data, "too many arguments");
      return GW_ERROR;
    }
  } else handle_char(data, ",");
  return GW_OK;
}

static void handle_lpar(void* data) {
  const Scanner *scan = yyget_extra(data);
  ++scan->pp->npar;
}

static m_bool handle_rpar(void* data) {
  Scanner *scan = yyget_extra(data);
  if(!scan->pp->npar) {
    gwlex_error(data, "invalid ')' token in macro");
    return GW_ERROR;
  }
  if(--scan->pp->npar)
    return 0;
  if(scan->pp->entry->args->next) {
    gwlex_error(data, "not enough arguments");
    return GW_ERROR;
  }
  scan->pp->entry->args = NULL;
  SCAN_NOLINT
    yy_scan_string(scan->pp->entry->text->str, data);
  return 1;
}

static void handle_char(void* data, m_str str) {
  const Scanner *scan = yyget_extra(data);
  while(isspace(*str))++str;
  text_add(&scan->pp->entry->args->text, str);
}
