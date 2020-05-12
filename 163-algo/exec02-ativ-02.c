#include <stdio.h>

int main () {

  int x;
  char y[4] = "MEC";
  x = 0;

  do {
    printf("%s \n", y);
    x = !x;

  } while (x && !x);
  return 0;
}
