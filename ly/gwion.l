IS          (u|U|l|L)*
%{
#include <stdio.h>
#include <ctype.h>
#include "gwion_util.h"
#include "symbol.h"
#include "vector.h"
#include "map.h"
#include "absyn.h"
#include "hash.h"
#include "macro.h"
#include "scanner.h"
#include "parser.h"
#include "err_msg.h"
#include "pp.h"

  #define YY_USER_ACTION                                     \
    yylloc->first_line = yylloc->last_line;                  \
    yylloc->first_column = get_currpos(yyscanner) ;          \
    if (yylloc->last_line == (int)get_currline(yyscanner))   \
      yylloc->last_column = get_currpos(yyscanner) + yyleng; \
    else {                                                   \
      yylloc->last_line = (int)get_currline(yyscanner);      \
      yylloc->last_column = get_currpos(yyscanner);          \
    }


#define gwion_alloc(a,b) xmalloc(a)
#define gwion_realloc(a,b,c) xrealloc(a,b)
#define gwion_free(a,b)  xfree(a)
#define YY_FATAL_ERROR(msg) gwion_lex_error(yyscanner, msg)

ANN void yynoreturn gwion_lex_error(yyscan_t yyscanner, const char*);
ANN static char* strip_lit(char* str);
ANN static char* alloc_str(void *, const char* str);
ANN static unsigned long htol(const char* str);
ANN static void newline(void* data);
ANN static void adjust(void* data);
ANN static uint  get_currline(void* data);
ANN static uint  get_currpos(void* data);
ANN static char* get_currfile(void* data);
ANN int gwion_error(YYLTYPE*, Scanner*, const char *);
ANN static Macro add_macro(void* data, const m_str id);
ANN static m_str strip_include(Scanner* scan, const m_str line, const m_bool);
ANN2(1,2) static void handle_include(void*, const m_str, YY_BUFFER_STATE);
ANN static void rem_macro(void* data, const m_str id);
ANN static int has_macro(void* data, const m_str id, const m_bool);
ANN static int macro_toggle(void*);
ANN static void macro_end(void*);
ANN2(1,2) static int is_macro(void*, const m_str, YY_BUFFER_STATE);
ANN static void macro_append(void*, const m_str);
ANN static void macro_arg(void* data, const m_str id);

/* macro call args */
ANN static void handle_comma(void* data);
ANN static void handle_lpar(void* data);
ANN static int  handle_rpar(void* data);

// we should use yymore instead
ANN static void handle_char(void* data, const m_str str);

ANN static m_str strip_comment(Scanner* scan, const m_str str);
ANN static m_str get_arg_text(void* data, const m_str id);
#ifdef LINT_MODE
ANN static m_str macro_data(void* data, const m_bool);
#define SCAN_LINT(a)        if(scan->lint)a;
#define SCAN_NOLINT      if(!scan->lint)
#define GWYY_ISLINT      ((Scanner*)yyextra)->lint
#define GWYY_DOLINT(a)   if(GWYY_ISLINT) { a; }
#define GWYY_LINT(a,b)   if(GWYY_ISLINT) { yylval->sval = a; return b; }
#else
#define SCAN_LINT(a)
#define SCAN_NOLINT
#define GWYY_DOLINT
#define GWYY_LINT(a,b)
#endif
#define GWYY_COMMENT     GWYY_DOLINT(yymore()); continue;
#define GWYY_COMMENT2    GWYY_DOLINT(yymore()); newline(yyscanner); YY_USER_ACTION; continue;
#define GWYY_COMMENT_END GWYY_LINT(strip_comment(yyscanner, yytext), PP_COMMENT) continue;

#define GWYY_INCLUDE GWYY_LINT(strip_include(yyscanner, yytext, 1), PP_INCLUDE) handle_include(yyscanner, yytext, YY_CURRENT_BUFFER);
#define GWYY_UNDEF   GWYY_LINT(strdup(yytext), PP_UNDEF) rem_macro(yyscanner, yytext);
#define GWYY_DEFINE  GWYY_LINT(macro_data(yyscanner, 0), PP_DEFINE) newline(yyscanner); YY_USER_ACTION;
#define GWYY_CALL    GWYY_LINT(macro_data(yyscanner, 1), ID)
#define GWYY_NL      GWYY_LINT(NULL, PP_NL)
#define GWYY_IFDEF(a,b) GWYY_LINT(strdup(a + b), b ? PP_IFNDEF : PP_IFDEF) if(!has_macro(yyscanner, a, !b)) BEGIN(skip); xfree(a);
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
%option header-file="include/lexer.h"
%option prefix="gwion_"
%option yywrap
%option yymore
%option 
%option never-interactive batch
%option nobackup nodebug
%x comment
%x define define_arg_start define_arg skip get_arg 
%%

<get_arg>[ \r\t]*","[ \r\t]* { adjust(yyscanner); handle_comma(yyscanner); }
<get_arg>"(" { adjust(yyscanner); handle_lpar(yyscanner); }
<get_arg>")" { adjust(yyscanner); if(handle_rpar(yyscanner)) { BEGIN(INITIAL); GWYY_CALL }}
<get_arg>.   { adjust(yyscanner); handle_char(yyscanner, yytext); }

^#define[ \r\t]+[A-Za-z_][A-Za-z0-9_]* {
  add_macro(yyscanner, yytext);
  BEGIN(define_arg_start);
}
<define_arg>[A-Za-z_][A-Za-z0-9_]* { adjust(yyscanner); macro_arg(yyscanner, yytext); }
<define_arg>[ \r\t]*","[ \r\t]*    { adjust(yyscanner); }
<define_arg>"..."[ \r\t]*")"[ \r\t]* { adjust(yyscanner); macro_arg(yyscanner, "__VA_ARGS__"); BEGIN(define); }
<define_arg>" "   { gwion_lex_error(yyscanner, "Invalid"); }
<define_arg>")"[ \r\t]* { adjust(yyscanner); BEGIN(define); }

<define_arg_start>"("      { adjust(yyscanner); BEGIN(define_arg); };
<define_arg_start>[ \r\t]* { adjust(yyscanner); BEGIN(define); };
<define_arg_start>\n       { adjust(yyscanner); BEGIN(INITIAL); GWYY_DEFINE };

<define>\\n           { adjust(yyscanner); macro_append(yyscanner, yytext); continue; /* should we use "\n" ? */ };
<define>.*\n          { adjust(yyscanner); macro_append(yyscanner, yytext); BEGIN(INITIAL); GWYY_DEFINE };

^#ifn?def[ \r\t]+[A-Za-z_][A-Za-z0-9_]*[ \r\t]* {
  adjust(yyscanner);
  const m_bool def = yytext[3] == 'n';
  m_str s = yytext + 6 + def;
  GWYY_LINT(strdup(s), def ? PP_IFNDEF : PP_IFDEF)
  while(isspace(*s))++s;
  size_t sz = strlen(s);
  while(isspace(s[--sz]));
  char c[sz + 2];
  strncpy(c, s, sz + 2);
  if(!has_macro(yyscanner, c, def))
    BEGIN(skip);
}
^#else[ \r\t]*\n  { newline(yyscanner); YY_USER_ACTION; GWYY_ELSE }
^#endif[ \r\t]*\n { newline(yyscanner); YY_USER_ACTION; GWYY_ENDIF; BEGIN(INITIAL); }

<skip>\n      { newline(yyscanner); YY_USER_ACTION; }
<skip>.         { continue;}
<skip>^#else[ \r\t]*\n { BEGIN(macro_toggle(yyscanner)); }
<skip>^#endif[ \r\t]*\n { macro_end(yyscanner); BEGIN(INITIAL); }

^#include[ \r\t]*<[A-Za-z0-9_./]*>[ \r\t]* { GWYY_INCLUDE }

^#undef[ \r\t]+[A-Za-z_][A-Za-z0-9_]*[ \r\t]* { GWYY_UNDEF }

^[ \r\t]*"\n"                       { newline(yyscanner); YY_USER_ACTION; GWYY_NL; continue; }

"//"              { YY_USER_ACTION;BEGIN(comment); }
<comment>\\\n    { newline(yyscanner); YY_USER_ACTION; GWYY_COMMENT2 }
<comment>\n      { newline(yyscanner); YY_USER_ACTION; BEGIN(INITIAL); GWYY_COMMENT_END; }
<comment>.      { GWYY_COMMENT;  }

"\n"                                { newline(yyscanner); YY_USER_ACTION; continue; }
[ \r\t]                             { adjust(yyscanner); continue; }
";"                                 { adjust(yyscanner); return SEMICOLON;}
","                                 { adjust(yyscanner); return COMMA;}
"@"                                 { adjust(yyscanner); return ATSYM;}
"$"                                 { adjust(yyscanner); return DOLLAR;}
"=>"                                { adjust(yyscanner); return CHUCK;}
"=<"                                { adjust(yyscanner); return UNCHUCK;}
"+=>"                               { adjust(yyscanner); return PLUSCHUCK;}
"-=>"                               { adjust(yyscanner); return MINUSCHUCK;}
"*=>"                               { adjust(yyscanner); return TIMESCHUCK;}
"/=>"                               { adjust(yyscanner); return DIVIDECHUCK;}
"%=>"                               { adjust(yyscanner); return MODULOCHUCK;}
"@=>"                               { adjust(yyscanner); return ATCHUCK;}
"<<=>"                              { adjust(yyscanner); return RSL;}
">>=>"                              { adjust(yyscanner); return RSR;}
"&=>"                               { adjust(yyscanner); return RSAND;}
"|=>"                               { adjust(yyscanner); return RSOR;}
"^=>"                               { adjust(yyscanner); return RSXOR;}
"++"                                { adjust(yyscanner); return PLUSPLUS;}
"--"                                { adjust(yyscanner); return MINUSMINUS;}
"->"                                { adjust(yyscanner); return RARROW;}
"fun"|"function"                    { adjust(yyscanner); return FUNCTION;}
"typedef"                           { adjust(yyscanner); return TYPEDEF;}
"<<<"                               { adjust(yyscanner); return L_HACK;}
">>>"                               { adjust(yyscanner); return R_HACK;}
"#("                                { adjust(yyscanner); return SHARPPAREN;}
"%("                                { adjust(yyscanner); return PERCENTPAREN;}
"@("                                { adjust(yyscanner); return ATPAREN;}
"+"                                 { adjust(yyscanner); return PLUS; }
"-"                                 { adjust(yyscanner); return MINUS; }
"/"                                 { adjust(yyscanner); return DIVIDE; }
"%"                                 { adjust(yyscanner); return PERCENT; }
"~"                                 { adjust(yyscanner); return TILDA; }
"!"                                 { adjust(yyscanner); return EXCLAMATION; }
"*"                                 { adjust(yyscanner); return TIMES; }
"new"                               { adjust(yyscanner); return NEW; }
"spork"                             { adjust(yyscanner); return SPORK; }
"fork"                              { adjust(yyscanner); return FORK; }
"union"                             { adjust(yyscanner); return UNION; }

"<~"                                { adjust(yyscanner); return LTMPL; }
"~>"                                { adjust(yyscanner); return RTMPL; }
"=="                                { adjust(yyscanner); return EQ; }
"!="                                { adjust(yyscanner); return NEQ; }
"<"                                 { adjust(yyscanner); return LT; }
">"                                 { adjust(yyscanner); return GT; }
"<="                                { adjust(yyscanner); return LE; }
">="                                { adjust(yyscanner); return GE; }
"&&"                                { adjust(yyscanner); return AND; }
"||"                                { adjust(yyscanner); return OR; }
"&"                                 { adjust(yyscanner); return S_AND; }
"|"                                 { adjust(yyscanner); return S_OR; }
"^"                                 { adjust(yyscanner); return S_XOR; }
"\\"                                { adjust(yyscanner); return BACKSLASH; }
">>"                                { adjust(yyscanner); return SHIFT_RIGHT; }
"<<"                                { adjust(yyscanner); return SHIFT_LEFT; }
"("                                 { adjust(yyscanner); return LPAREN; }
")"                                 { adjust(yyscanner); return RPAREN; }
"["                                 { adjust(yyscanner); return LBRACK; }
"]"                                 { adjust(yyscanner); return RBRACK; }
"{"                                 { adjust(yyscanner); return LBRACE; }
"}"                                 { adjust(yyscanner); return RBRACE; }
"?"                                 { adjust(yyscanner); return QUESTION; }
":"                                 { adjust(yyscanner); return COLON; }
"::"                                { adjust(yyscanner); return COLONCOLON; }
"]=>"                               { adjust(yyscanner); return TRIG; }
"]=<"                               { adjust(yyscanner); return UNTRIG; }


"class"                             { adjust(yyscanner); return CLASS;}
"dtor"                              { adjust(yyscanner); return AST_DTOR;}
"operator"                          { adjust(yyscanner); return OPERATOR;}
"extends"                           { adjust(yyscanner); return EXTENDS;}
"..."|,[ \r\t]*"..."                { adjust(yyscanner); return ELLIPSE;}
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
"return"                            { adjust(yyscanner); return RETURN;}
"while"                             { adjust(yyscanner); return WHILE;}
"do"                                { adjust(yyscanner); return DO;}
"until"                             { adjust(yyscanner); return UNTIL;}
"repeat"                            { adjust(yyscanner); return LOOP;}
"for"                               { adjust(yyscanner); return FOR;}
"goto"                              { adjust(yyscanner); return GOTO;}
"switch"                            { adjust(yyscanner); return SWITCH;}
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
    gw_err("can't stringify non argument token '%s'\n", yytext + 1);
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
  if(!ret) {
    yylval->sval = alloc_str(yyscanner, yytext);
    return ID;
  } else
    continue;

}

\"(\\.|[^\\"])*\"                   { adjust(yyscanner); yylval->sval = alloc_str(yyscanner, strip_lit(yytext)); return STRING_LIT; }
'(\\.|[^\\'])'                      { adjust(yyscanner); yylval->sval = alloc_str(yyscanner, strip_lit(yytext)); return CHAR_LIT;   }
.                                   { gw_err("error: stray in program\n"); return 1; }

%% // LCOV_EXCL_LINE
// LCOV_EXCL_LINE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

ANN Symbol lambda_name(const Scanner *scan) {
  char c[6 + 1 + num_digit(scan->pos) + 1 + 16 + 1];
  sprintf(c, "lambda:%u:%u\n", scan->line, scan->pos);
  return insert_symbol(scan->st, c);
}

static inline void header(const Scanner *scan, const char *msg, const m_uint i) {
  gw_err("\033[1m%s:%u:%u:\033[0m\n\t%s\n", (m_str)vector_at(&scan->pp->filename, i),
    scan->line, scan->pos, msg);
}

ANN void yynoreturn gwion_lex_error (yyscan_t yyscanner, const char *msg) {
  struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
  Scanner* scan = (Scanner*)yyg->yyextra_r;
  /*scanner_post(scan);*/
  header(scan, msg, 1);
//  gw_err("[%lu] %s\n", vector_size(&scan->pp->filename), msg);
//  gw_err("[%s] %s\n", vector_at(&scan->pp->filename, 1), msg);
  longjmp(*scan->jmp, 1);
}

char* strip_lit(char* str){
  str[strlen(str)-1] = '\0';
  return str+1;
}

char* alloc_str(void *data, const char* str) {
  const Scanner* scan = yyget_extra(data);
  const Symbol sym = insert_symbol(scan->st, (m_str)str);
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
  ++scan->line;
  scan->pos = 1;
}

static uint get_currline(void* data) {
  const Scanner* scan = yyget_extra(data);
  return scan->line;
}

static uint get_currpos(void* data) {
  const Scanner* scan = yyget_extra(data);
  return scan->pos;
}

static char* get_currfile(void* data) {
  const Scanner* scan = yyget_extra(data);
  return alloc_str(data, (m_str)vector_back(&scan->pp->filename));
}

static void adjust(void* data) {
  Scanner *scan = yyget_extra(data);
  scan->pos += (uint)gwion_get_leng((void*)data);
}

#define MIN(a,b) (a < b ? a : b)
void loc_err(const YYLTYPE* loc, const m_str filename) {
  gw_err("\033[1m%s:%u:%u:\033[0m\n", filename, loc->first_line, loc->first_column);
  int n = 1;
  size_t len = 0;
  FILE* f = fopen(filename, "r");
  if(!f)
    return;
  fseek(f, 0, SEEK_SET);
  m_str line = NULL;
  ssize_t sz;
  while((sz = getline(&line, &len, f)) != -1) {
    if(n > loc->last_line)
      break;
    if(n >= loc->first_line) {
      int pos = 0;
      if(n == loc->first_line) {
        while(pos < (MIN(loc->first_column, sz) -1))
          gw_err("%c", line[pos++]);
        gw_err("\033[4m");
      }
      if(n == loc->last_line) {
        do gw_err("%c", line[pos]);
        while(++pos < loc->last_column - 1);
        gw_err("\033[0m");
      }
      do gw_err("%c", line[pos]);
      while(++pos <= sz);
    }
    n++;
  }
  fclose(f);
  free(line);
}

ANN int gwion_error(YYLTYPE* loc, Scanner* scan, const char* s) {
  const m_str name = (m_str)vector_back(&scan->pp->filename);
  m_str filename = name;
  if(!scan->pp->npar) {
    m_uint i = vector_size(&scan->pp->filename) - 1;
    if(*filename == '@') {
      gw_err("in macro '%s'.", filename);
      while(*filename == '@') {
        i -= 5;
        filename = (m_str)vector_at(&scan->pp->filename, i);
      }
    }
  } else
    filename = (m_str)vector_at(&scan->pp->filename, 1);
  
  loc_err(loc, filename);
  gw_err("%s\n", s);
  return 0;
}

static Macro add_macro(void* data, const m_str line) {
  Scanner* scan = yyget_extra(data);
  int i = 7;
  while(isspace(line[i]))++i;
  scan->pos += i;
  m_str id = strip_comment(data, line + i);
  scan->pp->entry = macro_add(scan->pp->macros, id);
  xfree(id);
  if(!scan->pp->entry)
    gwion_lex_error(data, "macro already defined");
  else {
    scan->pp->entry->line = scan->line;
    scan->pp->entry->pos = scan->pos;
  }
  return scan->pp->entry;
}

static m_str strip_include(Scanner* scan, const m_str line, const m_bool sign) {
  m_str str = line + 8;
  while(isspace(*str))++str;
  if(!sign)
    ++str;
  m_str end = strstr(str, ">");
  scan->pos += (uint)(str - line);
  return strndup(str, strlen(str) - strlen(end) + (uint)sign);
}

static m_str strip_comment(Scanner* scan, const m_str s) {
  m_str str = s;
  while(isspace(*str))++str;
  size_t end = strlen(str);
  while(isspace(str[--end]));
  scan->pos += (uint)(str - s);
  return strndup(str, end + 1);
}

static void rem_macro(void* data, const m_str str) {
  Scanner* scan = yyget_extra(data);
  scan->pos += 6;
  const m_str id = strip_comment(scan, str+6);
  const m_bool ret = macro_rem(scan->pp->macros, id);
  xfree(id);
  if(ret)
    gwion_lex_error(data, "undefined macro");
}

static int has_macro(void* data, const m_str id, const m_bool def) {
  Scanner* scan = yyget_extra(data);
  if(scan->pp->def->idx == 59) // beware magic number
    gwion_lex_error(data, "macros too nested");
  return scan->pp->def->data[++scan->pp->def->idx] = def ?
    !!macro_has(scan->pp->macros, id) : !macro_has(scan->pp->macros, id);
}

static void gwpp_stack(Scanner* scan, YY_BUFFER_STATE state, void* opt, const m_str str) {
  const Vector v = &scan->pp->filename;
  vector_add(v, scan->pos);
  vector_add(v, scan->line);
  vector_add(v, (vtype)state);
  vector_add(v, (vtype)opt);
  vector_add(v, (vtype)str);
}

static void handle_include(void* data, const m_str filename, YY_BUFFER_STATE handle) {
  Scanner* scan = yyget_extra(data);
  const m_str str = strip_include(scan, filename, 0);
  FILE* f = fopen(str, "r");
  if(!f) {
    xfree(str);
    gwion_lex_error(data, "file not found");
  }
  gwpp_stack(scan, handle, f, str);
  scan->pos = 1;
  scan->line = 1;
  yy_switch_to_buffer(yy_create_buffer(f, YY_BUF_SIZE, data), data);
}

#ifdef LINT_MODE
static m_str macro_data(void* data, const m_bool call) {
  Scanner* scan = yyget_extra(data);
  const Macro e = scan->pp->entry;
  size_t elen = strlen(e->name);
  size_t len = elen + 2;
  Args args = e->base;
  if(args) {
    do {
      const m_str str = call ? args->text : args->name;
      len += strlen(str);
      if(args->next)
        len += 2;
    } while((args = args->next));
    len += 2;
  }
  if(!call && e->text)
    len += strlen(e->text) + 1;
  char c[len];
  size_t offset = elen;
  strcpy(c, e->name);
  args = scan->pp->entry->base;
  if(args) {
    c[offset++] = '(';
    do {
      const m_str str = call ? args->text : args->name;
      strcpy(c + offset, str);
      offset += strlen(str);
      if(call) {
        xfree(args->text);
        args->text = NULL;
      }
      if(args->next) {
        strcpy(c + offset, ", ");
        offset += 2;
      }
    } while((args = args->next));
    c[offset++] = ')';
  }
  if(!call && e->text) {
    c[offset++] = ' ';
    strcpy(c + offset, e->text);
    offset += strlen(e->text);
  }
  c[offset] = '\0';
  scan->pp->entry = NULL;
  return !call ? strdup(c) : s_name(insert_symbol(scan->st, c));
}
#endif

static int macro_toggle(void* data) {
  const Scanner* scan = yyget_extra(data);
  scan->pp->def->data[scan->pp->def->idx] = !scan->pp->def->data[scan->pp->def->idx];
  return scan->pp->def->data[scan->pp->def->idx] ? INITIAL : skip;
}

static void macro_arg(void* data, const m_str id) {
  Scanner* scan = yyget_extra(data);
  const m_str str = strip_comment(scan, id);
  const Args arg = new_args(scan->st->p, str);
  xfree(str);
  if(scan->pp->entry->base) {
    Args a = scan->pp->entry->base;
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

static int is_macro(void* data, const m_str s, YY_BUFFER_STATE handle) {
  Scanner* scan = yyget_extra(data);
  const m_bool is_str = s[0] == '#';
  m_str id = is_str ? s+1 : s;
  const m_str name = (m_str)vector_back(&scan->pp->filename);
//for(m_uint i = vector_size(&scan->pp->filename) + 1; --i;) {
/*
for(m_uint i = vector_size(&scan->pp->filename) + 1; --i; i-= i > 4 ? 4 : 0) {
  const m_str name = (m_str)vector_at(&scan->pp->filename, i - 1);
  if(name)
    if(name[0] == '@' && !strncmp(s, name + 8, strlen(name + 8) - 1))
      gwion_lex_error(data, "recursive macro use detected");
  }
*/
  Args arg = name[0] == '@' ? (Args)vector_at(&scan->pp->filename,
    vector_size(&scan->pp->filename) - 2) : NULL;
  while(arg) {
    if(!strcmp(id, arg->name)) {
      if(arg->text) {
        if(!is_str) {
          SCAN_NOLINT {
            m_str str;
            if(asprintf(&str, "@argument '%s'", arg->name) < 0)
              return 0;
            gwpp_stack(scan, handle, NULL, str);
            //scan->pos      = e->pos;
            //scan->line     = e->line;
            yy_scan_string(arg->text, data);
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
  Macro e = macro_has(scan->pp->macros, id);
  if(e) {
  m_str str;
  scan->pp->entry = e;
  if(e->text) {
    if(e->base) {
      e->args = e->base;
      SCAN_NOLINT {
        if(asprintf(&str, "@macro '%s'", e->name) < 0)
          return 0;
      }
      char c = '@';
      while(isspace(c = (char)input(data)))++scan->pos;
        if(c != '(') {
          xfree(str);
          gwion_lex_error(data, "macro needs arguments");
        }
        ++scan->pp->npar;
        gwpp_stack(scan, handle, e->base, str);
        scan->pos      = e->pos;
        scan->line     = e->line;
        struct yyguts_t * yyg = (struct yyguts_t*)data;
        yyg->yy_start = 1 + 2 * get_arg;
        void *yyscanner = data;
        YY_USER_ACTION
        return 2;
      } else {
        SCAN_LINT(return 0);
        m_str str;
        if(asprintf(&str, "@macro '%s'", e->name) < 0)
          return 0;
        gwpp_stack(scan, handle, e->base, str);
        scan->pos  = e->pos;
        scan->line = e->line;
//struct yyguts_t * yyg = (struct yyguts_t*)data;
//void *yyscanner = data;
//YY_USER_ACTION
        yy_scan_string(e->text, data);
        return 1;
      }
    }
    return 1;
  }
  return 0;
}

static m_str get_arg_text(void* data, const m_str id) {
  const Scanner* scan = yyget_extra(data);
  if(!scan->pp->entry)
    return NULL;
  if(vector_size(&scan->pp->filename) < 2)
    return NULL;
  Args arg = (Args)vector_at(&scan->pp->filename, vector_size(&scan->pp->filename) - 2);
  while(arg) {
    if(!strcmp(id, arg->name))
      return arg->text ? arg->text : "";
    arg = arg->next;
  }
  return NULL;
}

static void macro_append(void* data, const m_str text) {
  Scanner* scan = yyget_extra(data);
  const size_t tlen = strlen(text);
  if(scan->pp->entry->text) {
    const size_t len = strlen(scan->pp->entry->text) - 1;
    scan->pp->entry->text = (m_str)xrealloc(scan->pp->entry->text, len + tlen + 1);
    strcpy(scan->pp->entry->text + len, text);
  } else
    scan->pp->entry->text = strndup(text, tlen - 1);
}

uint clear_buffer(Vector v, void* data, const m_bool last NUSED) {
  const m_str name = (m_str)vector_pop(v);
  const void* info = (void*)vector_pop(v);
  const YY_BUFFER_STATE state = (YY_BUFFER_STATE)vector_pop(v);
//  if(!last)
//    yy_delete_buffer(state, data);
  if(name[0] != '@')
    fclose((FILE*)info);
  vector_pop(v);
  vector_pop(v);
  if(vector_size(v) > 2 && strncmp(name, "@a", 2))
    yy_delete_buffer(state, data);
  xfree(name);
  return (uint)vector_size(v);
}

int yywrap(void* data) {
  struct yyguts_t *yyg = (struct yyguts_t*)data;
  YY_BUFFER_STATE handle = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top];
  Scanner *scan = yyget_extra(data);
  if(vector_size(&scan->pp->filename) > 2) {
    const m_str name = (m_str)vector_pop(&scan->pp->filename);
    const void* info = (void*)vector_pop(&scan->pp->filename);
    const YY_BUFFER_STATE state = (YY_BUFFER_STATE)vector_pop(&scan->pp->filename);
//    if(handle && state && handle != state) {
    if(handle != state) {
      yy_switch_to_buffer(state, data);
      yy_delete_buffer(handle, data);
    }
    if(name[0] != '@' && info)
      fclose((FILE*)info);
    else if(info)
      clean_args((Args)info);
if(strlen(name))
    xfree(name);
    scan->pos  = (uint)vector_pop(&scan->pp->filename);
    scan->line = (uint)vector_pop(&scan->pp->filename);
    void* yyscanner = data;
    YY_USER_ACTION
    return 0;
  }
  return 1;
}

static void handle_comma(void* data) {
  const Scanner *scan = yyget_extra(data);
  const Args a = scan->pp->entry->args;
//  if(strcmp(a->name, "__VA_ARGS__") && !(scan->pp->entry->args = a->next))
  if(strcmp(a->name, "__VA_ARGS__")) {
    if(!(scan->pp->entry->args = a->next))
      gwion_lex_error(data, "too many arguments");
  } else handle_char(data, ",");
}

static void handle_lpar(void* data) {
  const Scanner *scan = yyget_extra(data);
  ++scan->pp->npar;
}

static int handle_rpar(void* data) {
  Scanner *scan = yyget_extra(data);
  if(!scan->pp->npar)
    gwion_lex_error(data, "invalid ')' token in macro");
  if(--scan->pp->npar)
    return 0;
  if(scan->pp->entry->args->next)
    gwion_lex_error(data, "not enough arguments");
  scan->pp->entry->args = NULL;
  SCAN_NOLINT {
if(!strcmp(scan->pp->entry->text, "__VA_ARGS__")) {
  struct yyguts_t *yyg = (struct yyguts_t*)data;
  YY_BUFFER_STATE handle = yyg->yy_buffer_stack[yyg->yy_buffer_stack_top];
    gwpp_stack(scan, handle, NULL, strdup(scan->pp->entry->name));
}
    //scan->pos      = e->pos;
    //scan->line     = e->line;
    yy_scan_string(scan->pp->entry->text, data);
  }
  return 1;
}

static void handle_char(void* data, const m_str str) {
  const Scanner *scan = yyget_extra(data);
  const Args a = scan->pp->entry->args;
  if(!a->text) {
    a->text = (m_str)xmalloc(32);
    scan->pp->arg_cap = 32;
    scan->pp->arg_len = 1;
    a->text[0] = *str;
  } else {
    if(++scan->pp->arg_len == scan->pp->arg_cap)
      a->text = (m_str)xrealloc(a->text, (scan->pp->arg_cap <<= 1));
    a->text[scan->pp->arg_len - 1] = *str;
  }
  a->text[scan->pp->arg_len] = '\0';
}

