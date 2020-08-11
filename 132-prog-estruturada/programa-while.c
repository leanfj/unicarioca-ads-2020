#include <stdio.h>
#include <locale.h>

int main() {
  int fatorial, indice, numero;
  setlocale(LC_ALL, "");

  printf("Forneça um número inteiro não negativo \n");
  scanf("%d", &numero);

  indice = numero;

  fatorial = 1;

  while (indice > 1) {
    fatorial *= indice;
    indice -= 1;
  }

  printf("O fatorial de %d e %d", numero, fatorial);


}
