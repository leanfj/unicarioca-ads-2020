#include <stdio.h>

//Informar a media de 3 notas de um aluno

int main() {
  float nota1, nota2, nota3; //Entradas
  float media, soma; //Saídas

  printf("Informa as três notas do aluno \n");
  scanf("%f %f %f", &nota1, &nota2, &nota3); //Entrada das 3 notas

  soma = nota1 + nota2 + nota3;

  media = soma / 3;

  printf("A soma das notas é: %8.2f \n", soma );

  printf("A média do aluno é: %8.2f \n", media);

  return 0;
}
