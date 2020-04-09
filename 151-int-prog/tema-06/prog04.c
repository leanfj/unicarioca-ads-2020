#include <stdio.h>

int main () {
  int count, neg = 0, a;

  for (count = 1; count <= 10; count = count + 1) {
    printf("Inform um valor: \n");
    scanf("%d", &a);

    if(a < 0) {
      neg = neg + 1;
    }

  }
    printf("Quantidade de números negativos: %d \n", neg);
  return 0;
}
