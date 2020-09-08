#include <stdio.h>

int main() {
  int x[5] = {4, 6, 8, 20};

  printf("O componente x[1]= %d \n", x[1]);
  printf("O componente x[4]= %d \n", x[4]);
  // Usar valores dentro do limite mas sem atribuição, vão ser preenchidos por
  // com zero(0)
  printf("O componente x[5]= %d \n", x[5]);
  // Usar valores fora do limite do vetor vão ser preenchidos com valores
  // aleatórios
}
