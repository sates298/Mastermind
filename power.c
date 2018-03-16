#include"mastermind.h"

int power(int powerbase, int index){

  int score = 1;
  int i = 0;

  while(i < index){

    score = score*powerbase;
    i++;

  }

  return score;
}

