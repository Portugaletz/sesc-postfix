#include "stack.h"
#include "errorHandler.h"

void charHandler(char c, struct Stack ** head){
  int tmp;
  if (c>='0' && c<='9'){
    push(head, c-'0');
    return;
  }
  switch (c){
    case '~':
      if (stackLen(head)==1){
        push(head, -pop(head));
      }else{
        error(1);
      }
      break;
    case '+':
      if (stackLen(head)==2){
        push(head, pop(head)+pop(head));
      }else{
        error(2);
      }
      break;
    case '-':
      if (stackLen(head)==2){
        tmp = pop(head);
        push(head, pop(head)-tmp);
      }else{
        error(3);
      }
      break;
    case '*':
      if (stackLen(head)==2){
        push(head, pop(head)*pop(head));
      }else{
        error(4);
      }
      break;
    case '/':
      if (stackLen(head)==2){
        tmp = pop(head);
        push(head, pop(head)/tmp);
      }else{
        error(5);
      }
      break;
    case '%':
      if (stackLen(head)==2){
        push(head, pop(head)%pop(head));
      }else{
        error(6);
      }
      break;
    default:
      error(7);
  }
}
