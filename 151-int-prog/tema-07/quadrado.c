#include <stdio.h>

int main() {
  int num, quad;

  printf("Digite um numero - 0 (zero) para sair \n");

  scanf("%d", &num);

  while (num != 0) {

    quad = num * num;

    printf("O quadrado de %d = %d \n", num, quad);

    printf("Digite um numero - 0 (zero) para sair \n");
    scanf("%d", &num);
  }

  return 0;
}
