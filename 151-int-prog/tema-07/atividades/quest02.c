#include <stdio.h>

int main() {
  int faixa01 = 0, faixa02 = 0, faixa03 = 0, faixa04 = 0, numero;

  printf("Informe um número positivo - Para terminar infome um número negativo "
         "\n");
  scanf("%d", &numero);

  while (numero > 0) {
    if (numero <= 25) {
      faixa01++;
    } else if (numero <= 50) {
      faixa02++;
    } else if (numero <= 75) {
      faixa03++;
    } else if (numero <= 100) {
      faixa04++;
    }

    printf("Informe um número positivo - Para terminar infome um número "
           "negativo \n");
    scanf("%d", &numero);
  }

  printf("Quantidades de números na faixa de [0...25]: %d \n", faixa01);
  printf("Quantidades de números na faixa de [26...50]: %d \n", faixa02);
  printf("Quantidades de números na faixa de [51...75]: %d \n", faixa03);
  printf("Quantidades de números na faixa de [76...100]: %d \n", faixa04);

  return 0;
}
