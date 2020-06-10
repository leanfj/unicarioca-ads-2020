#include <stdio.h>

int main() {
  printf("**********************************\n");
  printf("*Bem Vindo ao Jogo da Adivinhação*\n");
  printf("**********************************\n");

  int numeroSecreto;
  int chute;

  numeroSecreto = 42;

  printf("%d \n", numeroSecreto);

  printf("O %d é o numero secreto \n", numeroSecreto);

  printf("De seu chute! \n");

  scanf("%d", &chute);

  printf("Seu chute é %d \n", chute);

}
