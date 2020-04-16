/*1- Faça um programa que leia cinco temperaturas em graus 
 * Celsius e apresente-as convertidas em graus Fahrenheit.
 * A fórmula de conversão é: F = (9 * C + 160) / 5, na qual 
 * F é a temperatura em Fahrenheit e C é a temperatura em Celsius.*/

#include <stdio.h>

int main(void)
{
  float tempC1, tempC2, tempC3, tempC4, tempC5;
  float tempF1, tempF2, tempF3, tempF4, tempF5;
  
  printf("Informe 5 temperaturas em Celsius \n");
  scanf("%f", &tempC1);
  scanf("%f", &tempC2);
  scanf("%f", &tempC3);
  scanf("%f", &tempC4);
  scanf("%f", &tempC5);
  
  tempF1 = (9 * tempC1 + 160) / 5;
  tempF2 = (9 * tempC2 + 160) / 5;
  tempF3 = (9 * tempC3 + 160) / 5;
  tempF4 = (9 * tempC4 + 160) / 5;
  tempF5 = (9 * tempC5 + 160) / 5;

  printf("Valor da temperatura 1 %.1f Celsius é %.1f Fahrenheit \n", tempC1, tempF1);
  printf("Valor da temperatura 2 %.1f Celsius é %.1f Fahrenheit \n", tempC2, tempF2);
  printf("Valor da temperatura 3 %.1f Celsius é %.1f Fahrenheit \n", tempC3, tempF3);
  printf("Valor da temperatura 4 %.1f Celsius é %.1f Fahrenheit \n", tempC4, tempF4);
  printf("Valor da temperatura 5 %.1f Celsius é %.1f Fahrenheit \n", tempC5, tempF5);

  return 0;
}
