#include <stdio.h>

int main() {

  int idade, contador_idoso = 0, contador_eleitor = 0, contador_motorista = 0;

  printf("Informe uma idade - Digite 0(zero) para sair \n");
  scanf("%d", &idade);

  while (idade != 0) {
    if (idade >= 65) {
      contador_idoso++;
    }

    if (idade >= 16) {
      contador_eleitor++;
    }

    if (idade >= 18) {
      contador_motorista++;
    }

    printf("Informe uma idade - Digite 0(zero) para sair \n");
    scanf("%d", &idade);
  }

  printf("Quantidade de idosos: %d \n", contador_idoso);
  printf("Quantidade de eleitor: %d \n", contador_eleitor);
  printf("Quantidade de aptos a dirigir: %d \n", contador_motorista);

  return 0;
}
