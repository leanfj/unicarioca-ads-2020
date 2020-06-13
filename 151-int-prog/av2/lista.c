#include <stdio.h>
#include <string.h>

void lista (int valor_inicial, int valor_final, int incremento, char ordem[12]) {
  int contador;
  if (strcmp("crescente", ordem) == 0) {
    for (contador = valor_inicial; contador <= valor_final; contador = contador + incremento) {
      printf("%d ", contador);
    }
      printf("\n");
  } 
  if (strcmp("decrescente", ordem) == 0){
    for (contador = valor_inicial; contador >= valor_final; contador = contador - incremento) {
      printf("%d ", contador);
    }
      printf("\n");
  }
}

int main() {
  int valorInicial, valorFinal, valorIncremento;
  char ordemExibicao[12];

  printf("Informe o valor inicial \n");
  scanf("%d", &valorInicial);
  printf("Informe o valor final \n");
  scanf("%d", &valorFinal);
  printf("Informe o valor de incremento ou decremento \n");
  scanf("%d", &valorIncremento);
  printf("Informe a ordem de exibição \n");
  scanf("%s", &ordemExibicao);

  lista(valorInicial, valorFinal, valorIncremento, ordemExibicao);

  return 0;
}
