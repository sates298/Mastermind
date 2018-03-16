#include<stdlib.h>
#include<stdio.h>
#include<math.h>

struct list{

  int code;
  struct list* next;

};


void removeOne(struct list** pointer){

  *pointer = (*pointer) -> next;

}

struct list* removeAll(int white, int black, struct list* pointer){

  struct list* record;
  int empty = fields - (white + black);
  int last[fileds]= pointer->code;

  while(pointer -> next != NULL){
    for(int i=0; i < fields; i++){

      if(pointer -> next -> code[i] == last[i]){
        theSame++;
      }
      if(theSame != black){
        removeOne(pointer -> next)
      }
    }
  }

  return record;
}

void changeSystem(int 



int main()
{
  int white, black;
  struct list* first;
  first = malloc(sizeof(struct list));
  for(int i=0; i<fields; i++){
    first -> code[i] = 1;
  }
  first -> next = NULL;

  


  while(1){
    black=0;

    if(first == NULL){
      printf("You are cheating!! \n");
      break;
    }

    for(int i=0; i<fields; i++){
      printf("[%d] ", temp -> code[i]);
    }
    printf(" \n");
    printf("white pins: ");
    scanf("%d", &white);
    printf("black pins: ");
    scanf("%d", &black);

    if(black == 4){
      printf("YEAH I won!!!");
      break;
    }

    temp = removeAll(white, black, temp);
  }

  free(first);

  return 0;
}
