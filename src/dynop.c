#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"

ANN enum yytokentype op1(const m_str str) {
  switch(*str) {
    case '?': return QUESTION; break;
    case ':': return COLON;    break;
    case '$': return DOLLAR;   break;
    case '+': return PLUS;     break;
    case '-': return MINUS;    break;
    case '*': return TIMES;    break;
    case '/': return DIVIDE;   break;
    case '%': return PERCENT;  break;
    case '~': return TILDA;    break;
    case '<': return LT;       break;
    case '>': return GT;       break;
    case '^': return S_XOR;    break;
    case '|': return OR;       break;
    case '&': return AND;      break;
    case '!': return EXCLAMATION; break;
  }
  return DYNOP;
}

ANN enum yytokentype op2(const m_str str) {
  if(str[0] == str[1]) {
    if(str[0] == '+')
      return PLUSPLUS;
    if(str[0] == '-')
      return MINUSMINUS;
    if(str[0] == '=')
      return EQ;
    if(str[0] == '&')
      return AND;
    if(str[0] == '|')
      return OR;
    if(str[0] == '<')
      return SHIFT_LEFT;
    if(str[0] == '>')
      return SHIFT_RIGHT;
  }
  if(str[0] == '<') {
    if(str[1] == '=')
      return LE;
    if(str[1] == '~')
      return LTMPL;
    return DYNOP;
  }
  if(str[0] == '>') {
    if(str[1] == '=')
      return GE;
    return DYNOP;
  }
  if(str[0] == '~') {
    if(str[1] == '>')
      return RTMPL;
    return DYNOP;
  }
  if(str[0] == '!' && str[1] == '=')
      return NEQ;
  if(str[0] == '?' && str[1] == ':')
      return QUESTIONCOLON;
  if(str[0] == ':' && str[1] == ':')
      return COLONCOLON;
  return DYNOP;
}

static inline m_bool match(m_str str, char c) {
  return str[0] == c &&
         str[1] == c &&
         str[2] == c;
}

ANN enum yytokentype op3(const m_str str) {
  if(match(str, '<'))
    return L_HACK;
  if(match(str, '>'))
    return R_HACK;
  return DYNOP;
}
