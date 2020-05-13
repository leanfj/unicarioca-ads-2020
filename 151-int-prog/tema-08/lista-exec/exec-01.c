/*1 - Faça um programa que leia um conjunto de números (X) e imprima sua soma (Soma) e sua média (Media). Admita que o valor 9999 é utilizado como sentinela para fim de leitura.*/
/*Ex.: 1, 2, 3 => Soma=6 Media=2*/
#include <stdio.h>

int main() {

int quant_numeros = 0;
float numero = 0, soma = 0, media = 0;
const int saida = 9999;
do {

  printf("Informe um numero para soma, informe o numero %d para sair. \n", saida);
  scanf("%f", &numero);
  if (numero != 9999) {
    soma = soma + numero;
    ++quant_numeros;
  }
}while (numero != saida);

media = soma / quant_numeros;

printf("Resultado da soma é : %.2f \n", soma);
printf("A média da soma é : %.2f \n", media);
return 0;
}
