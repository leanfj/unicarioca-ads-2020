#include <stdio.h>

int main() {
  int S[6];

  int I, J;

  for (I = 1; I <= 5; I++) {
    S[I] = 0;

    for (J = 1; J <= I; J++) {
      S[I] = S[I] + J;
    }
  }

  for (I = 1; I <= 5; I++) {
    printf("%d \n", S[I] - S[5 - I + 1]);
  }
}
