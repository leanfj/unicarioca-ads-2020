#include <stdio.h>

int main () {
  int i;

  for (i = 0; i <= 10; i+= 2) {
  
    printf("Contador: %d \n", i);
  }

  printf("Valor de i apos o FOR: %d \n", i);
  return 0;
}
