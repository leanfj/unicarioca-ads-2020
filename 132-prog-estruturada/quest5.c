#include <stdio.h>

int g(int a, int b) {

  int retorno;
  while (a > 0 && b > 0) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }

  retorno = a + b;

  return retorno;
}

int main() { printf("%d", g(18, 12)); }
