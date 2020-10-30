#include <stdio.h>


int buscaVetor(int vet[200], int valorDeBusca) {
  
  for (int i = 0; i < 10; i++) {
    if (vet[i] == valorDeBusca) {
      return vet[i];
    }
  }

  return 0;
}

int main () {
  int vetor[200] = {60, 20, 56, 88, 22, 32, 71, 30, 46, 74};

  int procura = 74;

  printf("%d", buscaVetor(vetor, procura));

  return 0;
}
