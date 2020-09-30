/*
 *
 * APS - Turma 163 - Algoritmos II
 * Resolução questão 2 da APS
 *
 * Grupo
 *
 * Leandro Ferreira de Jesus - Mat.: 2020101253
 * Marco André Pinto Molina - Mat.: 2015101131
 * Luciano Queiroz Macedo - Mat.: 2019200224
 * Alvaro Vargas Neto - Mat.: 2017200808
 *
 */

#include <stdio.h>

int main()
{
  float num;
  float x[5] = {0,0,0,0,0};
  float y[5] = {0,0,0,0,0};
  int ip = 0;
  int ii = 0;

  for (int i = 1; i < 11; i++) {
    printf("Informe um numero \n");
    scanf("%f", &num);
    if (i % 2 == 0) {
      ip = ip + 1;
      x[ip] = num;
    } else {
      ii = ii + 1;
      y[ii] = num;
    }
  }

  printf("VETOR DE INDICES PARES \n");
  for (int i = 1; i < 6; i++) {
    printf("Posição X[%d] -> %.2f \n", i, x[i]);
  }
  printf("VETOR DE INDICES IMPARES \n");
  for (int i = 1; i < 6; i++) {
    printf("Posição Y[%d] -> %.2f \n", i, y[i]);
  }

  return 0;
}
