#include<stdio.h>

const int pola = 4;
const int system = 6;


int pot(int podstawa, int wykladnik){

  int wynik = 1;
  int i = 0;

  while(i < wykladnik){

    wynik = wynik*podstawa;
    i++;

  }

  return wynik;
}

int main(){

  int dziesietna;
  int zmieniona[pola];
  printf("wypisz liczbe: ");
  scanf("%d", &dziesietna);

  for(int i = 0; i < pola ; i++){

    zmieniona[i] = dziesietna / pot(system, pola-(i+1));
    dziesietna = dziesietna - (zmieniona[i] * pot(system, pola-(i+1)));

  }

  printf("dziesietna = %d \n", dziesietna);

  for(int i = 0; i < pola; i++){

    printf("[%d] ", zmieniona[i] + 1);

  }

  printf("\n");

  return 0;
}
