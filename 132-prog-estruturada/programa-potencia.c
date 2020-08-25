#include <stdio.h>

int potencia(int base, int expoente) {
  int i, potencia_calculada;

  potencia_calculada = 1;

  for (i = 1; i <= expoente; i++) {
    potencia_calculada = potencia_calculada * base;
  }

  return potencia_calculada;
}

int main() {
  printf("Potencia de %d elvado a %d é %d", 3, 0, potencia(3, 0));
  return 0;

}
