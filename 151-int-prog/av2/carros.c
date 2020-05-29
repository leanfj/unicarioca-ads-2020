#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  int HP, quantidade_carros = 0, carros_maiores_200HP = 0, maior_HP = 0, porcentagem_carros = 0;
  char nome_carro[10], nome_carro_maior_HP[11];
  float valor_mercado = 0, somatorio_valores = 0, media_valores = 0;

  do {
    printf("Informe o HP ou 0(ZERO) para sair \n");
    scanf("%d", &HP);

    if (HP > 0) {
      printf("Informe o nome do carro \n");
      scanf("%s", &nome_carro);
      printf("Informe o valor de mercado \n");
      scanf("%f", &valor_mercado);

      if (HP > maior_HP) {
        strcpy(nome_carro_maior_HP, nome_carro);
        maior_HP = HP;
      }

      if (HP > 200) {
        carros_maiores_200HP++;
      }

      somatorio_valores += valor_mercado;

      quantidade_carros++;
    }

  } while (HP > 0);

  media_valores = somatorio_valores / quantidade_carros;
  porcentagem_carros = (carros_maiores_200HP * 100) / quantidade_carros;

  printf("A media de precos e de : %.2f \n", media_valores);
  printf("A porcentagem de carros com HP maior que 200 : %d \n", porcentagem_carros);
  printf("Nome do carro com maior HP: %s \n", nome_carro_maior_HP);
  /*system("Pause");*/
  return 0;
}
