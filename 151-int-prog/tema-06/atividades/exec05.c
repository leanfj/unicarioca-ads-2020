/*5 - Obter um número e imprimir a tabuada de multiplicar, seguindo o seguinte layout: */
/*
 * Entre com o número: 5 
**** TABUADA DO NÚMERO 5 *** 
* 5 x 1 = 5 
* 5 x 2 = 10 
* ... 
* 5 x 10 = 50
* */

#include <stdio.h>

int main(void) {
  int numero;
  printf("*****Calculo da Tabuada*****\n");
  printf("Informe um numero para calcular a tabuda: \n");
  scanf("%d", &numero);
  printf("*****Tabuada do numero %d*****\n", numero);

  for (int i = 1; i <= 10; i++) {

    printf("%d x %d = %d \n", numero, i, numero * i);
  }

  return 0;
}
