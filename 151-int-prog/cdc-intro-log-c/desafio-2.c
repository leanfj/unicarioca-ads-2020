#include <stdio.h>

int main () {
  int acumulador = 0;
  for (int i = 1; i <= 100; i++) {
    acumulador = acumulador + i;
  }
  printf("Soma de 1 a 100: %d", acumulador);

  return 0;
}
