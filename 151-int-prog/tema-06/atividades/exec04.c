/*4 - Faça um programa que imprima os múltiplos positivos de 7, inferiores a 100. */

#include <stdio.h>

int main (void) {
  
  for (int i = 0; i < 100; i++) {
    
    if (i % 7 == 0) {
      printf(" Valor do multiplo: %d \n", i);
    }

  }

  return 0;
}
