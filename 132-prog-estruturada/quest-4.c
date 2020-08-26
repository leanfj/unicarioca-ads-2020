#include <stdio.h>

int f (int a , int b) {
  int x,y,resultado;
  x=3*a;
  y=2*b;
  resultado=x-y;
  return resultado;
}

int main () {printf("%d", f(3,2));}
