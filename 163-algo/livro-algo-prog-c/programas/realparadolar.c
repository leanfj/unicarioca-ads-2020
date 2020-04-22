#include <stdio.h>

int main () {
  float valor_reais, cotacao_dolar, taxa; //Entradas
  float valor_dolar; //Saídas

  printf("Informe o valor em reais \n");
  scanf("%f", &valor_reais);
  printf("Informe o valor dolar em reais \n"); //Valor de um dolar no dia em reais
  scanf("%f", &cotacao_dolar);

  taxa = 1 / cotacao_dolar;

  valor_dolar = valor_reais * taxa;

  printf("O valor em dolar é: %8.2f \n", valor_dolar);

  return 0;
}
