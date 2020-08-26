#include <stdio.h>

int surpresa(int n) {
  int a = 0, b = 0, surpr;
  while (n > 0) {
    if (n % 2 == 0) {
      a = a + 1;
    } else {
      b = b + 1;
    }

    n = n / 2;
  }

  surpr = a / b;

  return surpr;
}

int main() { printf("%d", surpresa(48)); }
