#include"mastermind.h"
#include<stdlib.h>

void add(struct list* first){

  struct list* ptr, temp;
  temp = first;
  for(int i = 0; i < power(COLOURS, FIELDS); i++){

    ptr = malloc(sizeof(struct list));
    ptr -> code = i;
    ptr -> next = NULL;
    temp -> next = ptr;

  }

}

