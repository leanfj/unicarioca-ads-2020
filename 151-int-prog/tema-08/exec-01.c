#include <stdio.h>

int main() {
  int opcao;
  float numero1, numero2, resultado;

  do {
    printf("****** CALCULADORA ****** \n");
    printf("* 1 - Soma * \n");
    printf("* 2 - Subtração * \n");
    printf("* 3 - Multiplicação * \n");
    printf("* 4 - Divisão * \n");
    printf("* 5 - Sair * \n");

    scanf("%d", &opcao);
    if (opcao == 5) {
      printf("Saindo.....");

      break;
    }
    printf("Informe o primero numero \n");
    scanf("%f", &numero1);
    printf("Informe o segundo número \n");
    scanf("%f", &numero2);
    switch (opcao) {
      case 1:
        resultado = numero1 + numero2;
        break;
      case 2:
        resultado = numero1 - numero2;
        break;
      case 3:
        resultado = numero1 * numero2;
        break;
      case 4:
        resultado = numero1 / numero2;
        break;
      default:
        printf("Informe um valor válido");
    }
    printf("Resultado é: %.2f \n", resultado);
  } while (opcao != 5);

  return 0;
}
