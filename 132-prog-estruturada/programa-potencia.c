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
  int base, pot;
  base = 2;
  pot = 1;
  printf("Potência de %d elevado a %d é %d", base, pot , potencia(base, pot));
  return 0;

}
