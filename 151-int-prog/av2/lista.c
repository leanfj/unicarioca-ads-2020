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
  lista(1, 10, 1, "crescente");
  lista(1, 10, 2, "decrescente");
  

  return 0;
}
