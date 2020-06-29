#include <stdio.h>

int main () {
  int operacao;
  float primeiroNumero, segundoNumero, resultado;
  printf("***Calculadora*** \n");

  printf("Informe o primeiro numero \n");
  scanf("%f", &primeiroNumero);

  printf("Informe o seguno numero \n");
  scanf("%f", &segundoNumero);

  printf("Selecione a operação, (1)Soma, (2)Subtração, (3)Multiplicação, (4)Divisão: \n");
  scanf("%d", &operacao);

  switch(operacao) {

    case 1:
      resultado = primeiroNumero + segundoNumero;
      printf("O resultado da soma é: %.2f \n", resultado);
      break;
    case 2:
      resultado = primeiroNumero - segundoNumero;
      printf("O resultado da subtração é: %.2f \n", resultado);
      break;
    case 3:
      resultado = primeiroNumero * segundoNumero;
      printf("O resultado da multiplicação é: %.2f \n", resultado);
      break;
    case 4:
      resultado = primeiroNumero / segundoNumero;
      printf("O resultado da divisão é %.2f \n", resultado);
      break;
    default:
      printf("Operação inválida");
      break;
  }
  return 0;
}
