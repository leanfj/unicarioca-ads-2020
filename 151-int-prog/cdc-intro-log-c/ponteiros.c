#include <stdio.h>

int main () {
  int numeros[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int *ponteiro = numeros;

  for(int i = 0; i < 10; i++){
    printf("%d - %d - Endereço da memoria(%p) \n",i, numeros[i], &numeros[i]);
  }
  return 0;
}
