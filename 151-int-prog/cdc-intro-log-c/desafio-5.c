#include <stdio.h>

int main () {
  int fatorial, i;
  printf("***Fatorial***\n");

  printf("Informe um numero \n");
  scanf("%d", &fatorial);

  for(i = 1;fatorial > 1; fatorial = fatorial - 1 ) {
    i = i * fatorial;
  }
  printf("%d \n", i);
  return 0;
}
