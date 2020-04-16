/*3 - Crie um programa que calcula o desconto previdenciário 
 * de dez funcionários. Dado um salário, o programa deve retornar 
 * o valor do desconto proporcional ao mesmo. O cálculo segue a 
 * regra: o desconto é de 11% do valor do salário, entretanto, 
 * o valor máximo de desconto é 318,20. Sendo assim, ou o 
 * programa retorna o valor equivalente a 11% sobre o salário ou 318,20. */

#include <stdio.h>

int main (void) {
  float salario, valor_desconto;

  for(int i = 0; i < 10; i++) {
    printf("Informe o valor do salário \n");
    scanf("%f", &salario);
    valor_desconto = (salario * 11) / 100;

    if(valor_desconto > 318.20) {
      printf("O valor do seu desconto é R$318.20 \n");
    } else {
      printf("O valor do seu desconto é R$%.2f \n", valor_desconto);
    }

  }

  return 0;
}
