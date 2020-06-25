#include <stdio.h>

int main () {
  int multiplicando;

  printf("******TABUADA****** \n");
  printf("Informe um número ou 0 para sair\n");

  scanf("%d", &multiplicando);
  while (multiplicando) {

    printf("****TABUADA de %d ****** \n", multiplicando);
    for(int i = 0; i <= 10; i++) {
      printf("%d x %d = %d \n", multiplicando, i, multiplicando * i );
    }
    printf("Quer continuar? Informe um novo numero ou 0 para sair \n");
    scanf("%d", &multiplicando);
  }
  
  return 0;
}
