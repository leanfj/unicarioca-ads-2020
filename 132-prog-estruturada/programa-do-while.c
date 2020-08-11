#include <stdio.h>

int main() {
  int i;
  do {
    printf("Escolha uma fruta pelo número \n");
    printf("\t (1) .... Mamão \n");
    printf("\t (2) .... Abacaxi \n");
    printf("\t (3) .... Laranja \n");
    scanf("%d", &i);

  } while ((i < 1) || (i > 3));

  switch (i) {
    case 1:
      printf("\t Você escolheu mamão. \n");
      break;
    case 2:
      printf("\t Você escolheu Abacaxi \n");
      break;
    case 3:
      printf("\t Você escolheu Laranja \n");
      break;
  }
}
