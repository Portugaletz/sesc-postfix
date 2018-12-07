#include <stdio.h>
#include "charHandler.h"

int main(void) {
  struct Stack * head = NULL;
  char chara;
  while(scanf("%c", &chara)&&chara!='\n'){
    //printf("%clol\n",chara);
    charHandler(chara, &head);
  
  }
  printf("%d", pop(&head));
}
