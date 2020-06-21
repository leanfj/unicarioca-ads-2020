#include <stdio.h>
#define NUMERO_TENTATIVAS 3

int main() {
  printf("**********************************\n");
  printf("*Bem Vindo ao Jogo da Adivinhação*\n");
  printf("**********************************\n");

  int numeroSecreto;
  int tentativa;
  int ganhou = 0;
  int tentativas = 1;

  numeroSecreto = 42;

  while (!ganhou) {
    printf("Qual é o seu %d, chute? \n", tentativas);
    scanf("%d", &tentativa);

    if (tentativa < 0) {
      printf("Você não pode usar números negativos. \n");
      continue;
    }

    printf("Seu %d chute foi %d \n", tentativas, tentativa);
    int acertou = tentativa == numeroSecreto;
    int maior = tentativa > numeroSecreto;
    /*printf("Maior %d", maior);
     *Uso da variável fora do escopo, não ai funcionar!!!
     * */
    if (acertou) {
      printf("Você acertou, parabêns \n");
      printf("Você é um bom jogador! Tente novamente. \n");
      ganhou = 1;
    } else if (maior) {
      printf("Sua tentativa foi maior que o numero secreto \n");
    } else {
      printf("Sua tentativa foi menor que o numero secreto \n");
    }
    tentativas++;
  }
  printf("Fim de jogo \n");
}
