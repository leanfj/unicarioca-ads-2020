#include <stdio.h>
#define NUMERO_TENTATIVAS 3

int main() {
  printf("**********************************\n");
  printf("*Bem Vindo ao Jogo da Adivinhação*\n");
  printf("**********************************\n");

  int numeroSecreto;
  int tentativa;

  numeroSecreto = 42;
  for (int i = 1; i <= NUMERO_TENTATIVAS; i++) {

    printf("Qual é seu chute \n");
    scanf("%d", &tentativa);

    printf("Seu tentativa numero %d é %d \n", i, tentativa);

    if (tentativa < 0) {
      printf("Informe um número maior que 0 \n");
      i--;
      continue;
    }
    int acertou = tentativa == numeroSecreto;
    int maior = tentativa > numeroSecreto;
    /*printf("Maior %d", maior);
     *Uso da variável fora do escopo, não ai funcionar!!!
     * */
    if (acertou) {
      printf("Você acertou, parabêns \n");
      printf("Você é um bom jogador! Tente novamente. \n");
      break;
    } else if (maior) {
      printf("Sua tentativa foi maior que o numero secreto \n");
    } else {
      printf("Sua tentativa foi menor que o numero secreto \n");
    }
  }
  printf("Fim de jogo \n");
}
