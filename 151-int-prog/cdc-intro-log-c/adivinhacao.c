#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  printf("**********************************\n");
  printf("*Bem Vindo ao Jogo da Adivinhação*\n");
  printf("**********************************\n");

  int nivel;
  int totaldetentativas;
  int numeroSecreto;
  int tentativa;
  int ganhou = 0;
  double ponto = 1000;
  int segundos = time(0);

  srand(segundos);

  int n1 = rand();

  numeroSecreto = n1 % 100;

  printf("Qual o nível de dificuldade ? \n");
  printf("(1)Fácil (2)Médio (3)Difícil \n \n");
  printf("Escolha: ");

  scanf("%d", &nivel);

  if (nivel == 1) {
    totaldetentativas = 20;
  } else if (nivel == 2) {
    totaldetentativas = 15;
  } else {
    totaldetentativas = 6;
  }

  for (int i = 1; i <= totaldetentativas; i++) {
    printf("Tentativa %d de %d \n", i, totaldetentativas);

    scanf("%d", &tentativa);

    if (tentativa < 0) {
      printf("Você não pode usar números negativos. \n \n");
      i--;
      continue;
    }

    int acertou = tentativa == numeroSecreto;
    int maior = tentativa > numeroSecreto;

    if (acertou) {
      printf("Você acertou, parabêns \n");
      break;
    } else if (maior) {
      printf("Sua tentativa foi maior que o numero secreto \n");
    } else {
      printf("Sua tentativa foi menor que o numero secreto \n");
    }

    double ponto_perdidos = (double)abs(tentativa - numeroSecreto) / (double)2;
    ponto = ponto - ponto_perdidos;
  }
  printf("Você fez %.2f pontos \n", ponto);
  printf("Fim de jogo \n");
}
