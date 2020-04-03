#include <stdio.h>

int main ( ) {
  
  int ano_atual, ano_nasc, ano_ingre, idade, tempo_trab;

  printf("Informe o ano atual \n");
  scanf("%d", &ano_atual); // Atribuicao de valor a posicao de memoria referente a variavel

  printf("Informe o ano de nascimento \n");
  scanf("%d", &ano_nasc); // Atribuicao de valor a posicao de memoria referente a variavel

  printf("Informe de ingresso na empresa \n");
  scanf("%d", &ano_ingre); // Atribuicao de valor a posicao de memoria referente a variavel

  idade = ano_atual - ano_nasc; //Calculo de idade
  tempo_trab = ano_atual - ano_ingre; // Calculo de tempo de trabalho

  printf("O funcionario tem %d anos \n", idade);
  printf("Trabalha a %d anos na empresa \n", tempo_trab);
  
  //Validacao de idade de tempo de trabalho para aposentadoria
  if (idade >= 65) {
    printf("Apto para aposentadoria! \n");
  } else if ( tempo_trab >= 30 ) {
    printf("Apto para aposentadoria! \n");
  } else if (idade >= 60 && tempo_trab >= 25) {
    printf("Apto para aposentadoria! \n");
  } else {
    printf("Não apto para aposentadoria \n");
  }
  

  return 0;
}
