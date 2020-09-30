#include <stdio.h>

int main() {
  int vetorS[6] = {0, 0, 0, 0, 0, 0};

  for (int i = 1; i <= 5; i++) {
    vetorS[i] = 0;

    printf("Vetor S[%d]  Ante de J -> %d \n", i, vetorS[i]);
    for (int j = 1; j <= i; j++) {
      vetorS[i] = vetorS[i] + j;
      printf("Laço %d de J Valor do vetorS[%d]-> %d \n", j, i, vetorS[i]);
    }

    vetorS[i] = vetorS[i] + vetorS[5 - i + 1];
    printf("Vetor S[%d] Depois de J -> %d \n", i, vetorS[i]);
  }
  printf("-------RESULTADO---------\n");
  for (int i = 1; i <= 5; i++) {
    printf("Vetor S[%d] FINAL -> %d \n", i, vetorS[i]);
  }

  return 0;
}
