#include <stdio.h>
#include <math.h>

/*
 * Informa o perimeto e a area de um circulo
 */

int main(void)
{
  const float pi = 3.14;

  float raio; //Entradas
  float perimetro, area; //Saidas

  printf("Informe o raio do círculo \n");
  scanf("%f", &raio);

  perimetro = 2 * (pi * raio);
  area = pi * (raio * raio);

  printf("O perímetro do círculo é: %8.2f \n", perimetro);
  printf("O área do círculo é: %8.2f \n", area);
  
  return 0;
}
