#include <stdio.h>

int g(int n) {
  int i, ge;

  i = n;
  ge = 0;

  while (i > 0) {
    ge += i;
    i -= 2;
  }

  return ge;
}

int h(int a, int b) {
  int i, hi;

  hi = 1;

  for (i = 1; i <= a; i++) {
    hi *= b;
  }

  return hi;
}

int main() { printf("%d", g(7) - 2 * h(3, 2)); }
