#include"mastermind.h"

void removeOne(struct list** pointer){

  *pointer = (*pointer) -> next;

}
