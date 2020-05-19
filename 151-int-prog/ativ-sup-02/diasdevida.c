#include <stdio.h>

const int dias_mes = 30;
const int meses_ano = 12;
int idade;

int calculaDiasVida (int idade) {
  int dias_vida;

  dias_vida = idade * (dias_mes * meses_ano);
  dias_vida -= 360;

  return dias_vida;
}

void defineIdade () {
  printf("Informe quanto anos você tem: \n");
  scanf("%d", &idade);
}

int main () {
  
  defineIdade();

  printf("Você já viveu %d dias \n", calculaDiasVida(idade));

  return 0;
}


