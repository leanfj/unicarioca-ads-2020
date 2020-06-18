#include <stdio.h>

int main() {
  printf("**********************************\n");
  printf("*Bem Vindo ao Jogo da Adivinhação*\n");
  printf("**********************************\n");

  int numeroSecreto;
  int tentativa;

  numeroSecreto = 42;

  printf("Qual é seu chute \n");

  scanf("%d", &tentativa);

  printf("Seu tentativa é %d \n", tentativa);

  if (tentativa == numeroSecreto) {
    printf("Você acertou, parabêns \n");
    printf("Você é um bom jogador! Tente novamente. \n");
  } else {
    printf("Você errou!!! \n");
    printf("Não desanime!! Volte e tente novamente. \n");
  }
}
