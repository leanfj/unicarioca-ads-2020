#include <stdio.h>

int main () {

  int contador, multiplicador;

  printf("Deseja saber a tubuada de quanto? \n");
  scanf("%d", &multiplicador);

  printf("**** Tabuada de %d ***** \n", multiplicador);

  for (contador = 0; contador <= 10; contador++){

    printf("%d X %d = %d \n", contador, multiplicador, contador * multiplicador);
  }
  return 0;
}
