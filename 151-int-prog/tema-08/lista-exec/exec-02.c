/*2 - Faça um programa que leia um conjunto de dados numéricos (X) e imprima o maior (Maximo) dentre eles. Admita que o valor 9999 é utilizado como sentinela.*/
/*Ex.: 1, 2, 3 => Maior=3*/

#include <stdio.h>

int main () {
  float numero, maior;

  do {
    printf("Informe um numero, digite 9999 para sair \n");
    scanf("%f", &numero);

    if (numero > maior && numero != 9999) {
      maior = numero;
    }

  } while (numero != 9999);

  printf("O maior numero informado foi: %.2f", maior);
  
  return 0;
}
