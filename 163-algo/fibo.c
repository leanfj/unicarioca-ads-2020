#include <stdio.h>

int fibonacci(int valor) {
  printf("%d \n", valor);

  if (valor == 1) {
    return 1;
  } else {
    if (valor == 2 ) {
      return 1;
    } else {
      return fibonacci(valor - 1) + fibonacci(valor - 2);
    }
  }
}

int main () {
  int numero;
  scanf("%d", &numero);
  printf("%d \n", fibonacci(numero));
  return 0;
}
