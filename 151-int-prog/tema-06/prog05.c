#include <stdio.h>

int main() {
  float nota01, nota02, media, media_turma = 0;
  int contador, quant_alunos;

  printf("Informa a quantidade de alunos: \n");
  scanf("%d", &quant_alunos);

  for (contador = 1; contador <= quant_alunos; contador = contador + 1) {

    printf("Informe a primeira nota: \n");
    scanf("%f", &nota01);

    printf("Informe a segunda nota: \n");
    scanf("%f", &nota02);

    media = (nota01 + nota02) / 2;

    media_turma += media;

    printf("Média: %.1f \n", media);

    if (media >= 7.0) {
      printf("Aprovado !!! \n");
    } else {
      printf("Reprovado!!! \n");
    }
  }

  printf("Total de alunos: %d \n", quant_alunos);
  printf("Média da nota da turma: %.1f \n", media_turma / quant_alunos);

  return 0;
}
