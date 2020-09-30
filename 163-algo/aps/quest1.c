#include <stdio.h>


int main()
{
  int x[10] = {0,0,0,0,0,0,0,0,0,0};
  int y[10] = {0,0,0,0,0,0,0,0,0,0};
  int ip = 0;
  int ii = 0;
  int num = 0;


  for (int i = 0; i < 10; i++) {
    printf("Informe um numero \n");
    scanf("%d", &num);
    if (num % 2 == 0) {
      ip = ip + 1;
      x[ip] = num;
    } else {
      ii = ii + 1;
      y[ii] = num;
    }
  }

  printf("VETOR DE PARES \n");
  for (int i = 1; i < 10; i++) {
    printf("Posição X[%d] -> %d \n", i, x[i]);
  }
  printf("VETOR DE IMPARES \n");
  for (int i = 1; i < 10; i++) {
    printf("Posição y[%d] -> %d \n", i, y[i]);
  }

  return 0;
}
