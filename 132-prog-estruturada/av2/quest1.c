/*Questão 1 (2,0 pontos)
 *
 * Faça um programa que peça para o usuário fornecer os valores inteiros de 2 matrizes M e N ,
 * ambas com 3 linhas 4 colunas e que imprima na tela a matriz O= 3*M-5*N
 *
 */

#include <stdio.h>
#define LINHA 3
#define COLUNA 4

void prencheMatriz(int matriz[LINHA][COLUNA], char nomeMatriz[10]) {
  for (int i = 0; i < LINHA; i++) {
    for (int j = 0; j < COLUNA; j++) {
      printf("Informe o numero para a posição [%d][%d] da matriz_%s \n", i + 1,
             j + 1, nomeMatriz);
      scanf("%d", &matriz[i][j]);
    }
  }
}

void imprimeMatriz (int matriz[LINHA][COLUNA], char nomeMatriz[10]) {
  int contadorLinha, contadorColuna;
  printf("------MATRIZ %s------ \n", nomeMatriz);
  for (contadorLinha = 0; contadorLinha < LINHA; contadorLinha++) {
    for (contadorColuna = 0; contadorColuna < COLUNA; contadorColuna++) {
      if (contadorColuna < COLUNA - 1) {
        printf("[%d]-", matriz[contadorLinha][contadorColuna]);
      } else {
        printf("[%d]", matriz[contadorLinha][contadorColuna]);
      }
    }
    printf("\n");
  }
  printf("\n \n");
}

int main() {

  int matriz_M[LINHA][COLUNA];
  int matriz_N[LINHA][COLUNA];
  int matriz_O[LINHA][COLUNA];
  int contadorLinha, contadorColuna;

  prencheMatriz(matriz_M, "M");
  prencheMatriz(matriz_N, "N");

  for (contadorLinha = 0; contadorLinha < LINHA; contadorLinha++) {
    for (contadorColuna = 0; contadorColuna < COLUNA; contadorColuna++) {
      matriz_O[contadorLinha][contadorColuna] =
          (3 * matriz_M[contadorLinha][contadorColuna]) -
          (5 * matriz_N[contadorLinha][contadorColuna]);
    }
  }

  imprimeMatriz(matriz_M, "M");
  imprimeMatriz(matriz_N, "N");
  imprimeMatriz(matriz_O, "O");

  return 0;
}
