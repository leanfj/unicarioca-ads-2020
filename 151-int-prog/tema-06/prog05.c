#include <stdio.h>

int main ( ) {
  float nota01, nota02, media;

  printf("Informe a primeira nota: \n");
  scanf("%f", &nota01);


  printf("Informe a segunda nota: \n");
  scanf("%f", &nota02);

  media = (nota01 + nota02) / 2;

  printf("Média: %.1f \n", media);

  if (media >= 7.0) {
    printf("Aprovado !!!");
  } else {
    printf("Reprovado!!!");
  }

  return 0;
}
