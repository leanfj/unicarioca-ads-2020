#include <stdio.h>

int main() {
  int *x, p; // Usamos o "*" para identificar uma variável como ponteiro

  x = NULL; // Atribuicao de NULL ao endereço, sem o "*" estamos manipulando o
            // identificador do endereço

  p = 1; // Atribuição de valor a variavel, não pode ser manipulado o endereço
         // pois é uma varialvel estátitica

  x = &p; // Atribuicao do endereço de da variavel P ao x, usamos "&" para ter o
          // indetificador do endereço da variavel, agora que elas compartilham
          // o mesmo endereço e a mudança do valor em uma ira refletir na outra.

  printf("Endereço de x %p \n",
         x); // Impressao da identificador do endereço de X
  printf("Valor de x %d \n",
         *x); // Impressao do valor atribuido a variável pointer (dinamica)
  printf("Endereço de p %p \n",
         &p); // Impressao do indentificador do endereço de P
  printf("Valor de p %d \n", p); // Impressao do valor atribuido a variavel P

  printf("%d ", 7 + *x); // Soma de valor ao valor que está na varivel X
  return 0;
}
