#include <stdio.h>


int main () {
  
  float sal_fixo, sal_total, val_vendas, comissao;

  printf("Informe o salario do funcionario \n");
  scanf("%f", &sal_fixo); // Atribuicao de valor a posicao de memoria referente a variavel

  printf("Informe o total de vendas \n");
  scanf("%f", &val_vendas); // Atribuicao de valor a posicao de memoria referente a variavel

  //Verificacao do valor de vendas para atribuicao da porcentagem para comissao
  if ( val_vendas <= 1500 ) {
    comissao = 3;
  } else {
    comissao = 5;
  }

  //Calculo de valor total somando a porcentagem da comissao
  sal_total = sal_fixo + (val_vendas * (comissao / 100));

  printf("O salario total do funcionario ---> R$ %.2f", sal_total);

  return 0;
}
