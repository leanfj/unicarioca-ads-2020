#include <stdio.h>

int main () {
  int a = 1, b = 3, c = 5;

  while((b != a) && (c < 20) ) {
    if ( a > c ) {
      c = c - 2;
    } else {
      c = c + 2;
      if (a + b < c) {
        a = b - a;
        b = b + 2;
      }
    }
  }
  printf("Ola mundo \n");
  printf("O Unico-valor final de A -> %d \n", a);
  printf("O Unico-valor final de B -> %d \n", b);
  printf("O Unico-valor final de C -> %d \n", c);

  return 0;
}

