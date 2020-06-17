#include <stdio.h>

int main() {
  printf("**********************************\n");
  printf("*Bem Vindo ao Jogo da Adivinhação*\n");
  printf("**********************************\n");

  int numeroSecreto;
  int tentativa;

  numeroSecreto = 42;

  printf("%d \n", numeroSecreto);

  printf("O %d é o numero secreto \n", numeroSecreto);

  printf("De seu tentativa! \n");

  scanf("%d", &tentativa);

  printf("Seu tentativa é %d \n", tentativa);

}
