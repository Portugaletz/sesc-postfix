#include <stdlib.h>

struct Stack{
  struct Stack * next;
  int value;
};

void push(struct Stack ** head, int val){
  struct Stack * temp = (struct Stack *)malloc(sizeof(struct Stack));
  temp->next = *head;
  temp->value = val;
  *head = temp;
}

int pop(struct Stack ** head){
  int a = (*head)->value;
  *head = (*head)->next;
  return a;
}

int stackLen(struct Stack ** head){
  struct Stack * temp = *head;
  int count = 0;
  while (temp!=NULL){
    temp = temp->next;
    count++;
  }
  return count;
}
