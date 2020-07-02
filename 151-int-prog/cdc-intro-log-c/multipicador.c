#include <stdio.h>

void abertura(int multiplicador) {
  printf("Tabuada do numero %d \n", multiplicador);
}

int main() {

  int multiplicador = 3;

  abertura(multiplicador);

  for (int i = 0; i <= 10; i++) {

    int resultado = multiplicador * i;

    printf("%d X %d = %d \n", i, multiplicador, resultado);
  }
  return 0;
}
