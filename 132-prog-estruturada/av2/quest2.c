/*
 * Questão 2 (2,0 pontos)
 *
 * Faça um programa declarando uma variável estática x do tipo float e uma variável dinâmica p
 * também do tipo float. O programa deve pedir para o usuário fornecer um valor para a variável
 * estática. Depois deve colocar o endereço de memória da variável dinâmica igual ao endereço de
 * memória da variável estática e atribuir a variável estática o valor *p / 3. No final o programa deve
 * imprimir na tela o endereço de p e o valor da variável estática x com 2 casas decimais.
*/

#include <stdio.h>

int main () {
  float x;
  float *p;

  printf("Informe o valor da variável estática X \n");
  scanf("%f", &x);

  p = &x;

  x = *p / 3;

  printf("O endereço da variável dinâmica P é %p e o valor da variável estática X é %.2f", p, x);
  return 0;
}
