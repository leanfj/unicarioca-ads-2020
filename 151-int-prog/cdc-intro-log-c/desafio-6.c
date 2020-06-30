#include <stdio.h>

int main() {

  int reserva, numero1, numero2, numero3;

  printf("***Ordenar Numeros***\n");

  printf("Informe 3 numeros \n");
  scanf("%d %d %d", &numero1, &numero2, &numero3);

  if (numero2 < numero1) {
    reserva = numero1;
    numero1 = numero2;
    numero2 = reserva;
  }
  if (numero3 < numero2) {
    reserva = numero2;
    numero2 = numero3;
    numero3 = reserva;
  }
  if (numero2 < numero1) {
    reserva = numero1;
    numero1 = numero2;
    numero2 = reserva;
  }

  printf("%d -> %d -> %d \n", numero1, numero2, numero3);

  return 0;
}
