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
  
  int acertou = tentativa == numeroSecreto;


  if (acertou) {
    printf("Você acertou, parabêns \n");
    printf("Você é um bom jogador! Tente novamente. \n");
  } else {
    int maior = tentativa > numeroSecreto;

    if(maior) {
      printf("Sua tentativa foi maior que o numero secreto \n");
    } else {
      printf("Sua tentativa foi menor que o numero secreto \n");
    }
  }
}
