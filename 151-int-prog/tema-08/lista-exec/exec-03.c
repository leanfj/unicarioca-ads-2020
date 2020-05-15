/*3 - Faça um programa que leia um conjunto de números (X) e imprima a
 * quantidade de números pares (QPares) e a quantidade de números impares
 * (QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela para fim
 * de leitura.*/
/*Ex.: 1,2,3,4,5 => Pares=2 Impares=3*/

#include <stdio.h>

int main() {
  int quant_pares = 0, quant_impares = 0, novo_numero;

  do {
    printf("Informe um novo numero, use 9999 para sair \n");
    scanf("%d", &novo_numero);
    if (novo_numero != 9999) {

      if (novo_numero % 2 == 0) {
        quant_pares++;
      } else {
        quant_impares++;
        }
    }

  } while (novo_numero != 9999);

  printf("Quantidade de números pares %d \n", quant_pares);
  printf("Quantidade de números impares %d \n", quant_impares);

  return 0;
}
