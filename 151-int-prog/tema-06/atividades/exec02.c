/*2 - Faça um programa que leia dois valores para as variáveis A e B
 * e efetue a troca dos valores de forma que a variável A passe a 
 * possuir o valor da variável B e a variável B passe a possuir o 
 * valor da variável A. Apresente os valores trocados. 
 * O programa deverá permitir a troca dos números cinco vezes. */

#include <stdio.h>

int main (void) {
  int num1, num2, suporte;

  for (int i = 1; i <= 5; i++) {
    printf("Informe dois números: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    
    printf("O primeiro número: %d \n", num1);
    printf("O segundo número: %d \n", num2);
    
    /*Realizando a troca com variável suporte*/
    suporte = num1;
    num1 = num2;
    num2 = suporte;

    printf("----- Após a troca ----- \n");

    printf("O primeiro número: %d \n", num1);
    printf("O segundo número: %d \n", num2);
    
  }
  return 0;
}
