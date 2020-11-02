#include <stdio.h>


int main () {
  
  int X[11] = {0, 9, 10, 2, 6, 7, 4, 3, 5, 1, 8};
  int IND[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int i;

    printf("Primeiro FOR \n");
  for (i = 1; i <= 10; i++) {
    printf("%d \n ", X[IND[11 - i]]);
  }

    printf("Segundo FOR \n");
  for (i = 1; i <= 10; i++) {
    printf("%d \n", IND[11 - X[i]]);
  }

  /*for (i =  0; i < 10; i++) {
    printf("%d", X[i]);
  }*/

  return 0;
}
