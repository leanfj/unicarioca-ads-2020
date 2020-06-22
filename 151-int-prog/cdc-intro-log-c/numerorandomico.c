#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  
  int segundos = time(0);
  srand(segundos);

  int n1 = rand();
  /*Usando intervalo de 0 a 100*/
  int numeroSecreto = n1 % 100; 
  printf("Seu numero randomico é %d \n", numeroSecreto);
  
  return 0;
}
