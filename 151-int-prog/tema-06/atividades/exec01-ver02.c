/*1- Faça um programa que leia cinco temperaturas em graus 
 * Celsius e apresente-as convertidas em graus Fahrenheit.
 * A fórmula de conversão é: F = (9 * C + 160) / 5, na qual 
 * F é a temperatura em Fahrenheit e C é a temperatura em Celsius.*/

#include <stdio.h>

int main (void)
{
  float tempF, tempC;

  for (int i = 1; i <= 5; ++i) {
    printf("Informe a temperatura %d \n", i);
    
    scanf("%f", &tempC);
    
    tempF = (9 * tempC + 160 ) / 5;

    printf("A temperatura em Fahrenheit: %.1f \n", tempF);
  }
  return 0;
}
