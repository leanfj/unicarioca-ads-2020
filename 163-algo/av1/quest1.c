#include <stdio.h>

  int x, y, z;
 int f (int *a, int *b, int c) {
    while (*b <= c) {
      *a = *b + c;
      y = *b + 1;
    }
    int retorno = *a+*b+c;
    return retorno;
  }
int main()
{
  x = 10;
  y = 2;
  z = 3;

  int valorF = f(&x, &y, z);

  printf("%d, %d, %d \n", x, y, z);
  printf("%d \n", valorF);
  return 0;
}
