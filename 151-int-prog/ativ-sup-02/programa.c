/*Escreva um programa que determine o número de dias que uma pessoa já viveu. Considere que um mês tenha 30 dias. Utilizar função.*/
#include <stdio.h>
#include <time.h>

int main() {
  int dia_nascimento, data_nascimento2, mes_nascimento, ano_nascimento;
  time_t data_hoje, data_nascimento, data_diferenca;
  printf("**** Quantos anos você viveu ****\n");
  printf("Informe o dia do seu nascimento \n");
  scanf("%d", &dia_nascimento);
  printf("Informe o mês do seu nascimento \n");
  scanf("%d", &mes_nascimento);
  printf("Informe o ano do seu nascimento \n");
  scanf("%d", &ano_nascimento);
  
  data_hoje = time(NULL);

  struct tm data = {.tm_mday = dia_nascimento, .tm_mon = mes_nascimento - 1, .tm_year = ano_nascimento - 1900};

  data_nascimento = mktime(&data);


  data_diferenca = difftime(data_hoje, data_nascimento);

  printf("Você ja viveu %ld dias \n", data_diferenca / 86400);
  return 0;
}
