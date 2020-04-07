#include <stdio.h>

int main ( ) {
  int dia_semana;

  printf("Informe o dia da semana em numero, sendo 1 para Domingo \n");
  scanf("%d", &dia_semana);

  switch (dia_semana) {
    case 1: 
      printf("Domingo \n");
      break;
    case 2:
      printf(" Segunda-feira \n");
      break;
    case 3:
      printf(" Terça-feira \n");
      break;
    case 4:
      printf(" Quarta-feira \n");
      break;
    case 5:
      printf(" Quinta-feira \n");
      break;
    case 6:
      printf(" Sexta-feira \n");
      break;
    case 7:
      printf(" Sábado \n");
      break;
    default:
      printf("Dia inválido");
  }
  return 0;
}
