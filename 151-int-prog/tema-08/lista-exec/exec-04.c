/*4 - Faça um programa que leia um número FN, calcule e mostre os N primeiros
 * termos da sequência de Fibonnaci (0, 1, 1, 2 , 3, 5, 8, ...). O valor lido
 * para N sempre será maior ou igual a 2.*/

#include <stdio.h>

int main() {

  int numero, soma = 0, cont = 1, aux = 0;

  printf("Informe um numero \n");
  scanf("%d", &numero);

  if (numero <= 1) {
    printf("Numero informado é inválido \n");

  } else {
    printf("%d - %d", soma, cont);
    do {
      soma = cont + aux;
      printf(" - %d", soma);
      aux = cont;
      cont = soma;

    } while (cont < numero);
  }
  printf("\n");
  return 0;
}
