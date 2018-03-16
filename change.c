#include"mastermind.h"

void change(struct list* pointer, int* array){

  int val = pointer -> code;
  for(int i = 0; i < FIELDS; i++){

    array[i] = val / power(COLOURS, FIELDS-(i+1));
    val = val - array[i]*power(COLOURS, FIELDS-(i+1));

  }

}
