#include <stdio.h>

/*
 * 1. Tendo como dados de entrada a altura ( h ) e o sexo de uma pessoa 
 * (M - masculino e F - feminino), construa um programa que calcule seu 
 * peso ideal, utilizando as seguintes fórmulas: 
 *   - para homens: (72.7*h)-58 
 *   - para mulheres: (62.1*h)-44.7 
 */

int main() {
  char sexo;
  float altura;

  printf("Informe seu sexo M para masculino e F para feminino: ");
  scanf("%c", &sexo);

  printf("Informe sua altura \n");
  scanf("%f", &altura);
      
  switch(sexo) {
    case 'm': // Utilizando o fato do break não ter sido chamado
    case 'M':
      printf(" Sendo homem seu peso ideal é: %.2f ", (72.7 * altura) - 58);
      break;
    case 'f': // Utilizando o fato do break não ter sido chamado
    case 'F':
      printf(" Sendo mulher, seu peso ideal é: %.2f ", (62.1 * altura) - 44.7);
      break;
    default:
      printf("Sexo inválido");
    }
  return 0;
}
