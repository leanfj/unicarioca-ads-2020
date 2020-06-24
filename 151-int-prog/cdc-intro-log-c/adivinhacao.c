#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  printf("\n \n");
  printf("             P  /_\\  P        \n");
  printf("            /_\\_|_|_/_\\   \n");
  printf("        n_n | ||. .|| | n_n        Bem-vindo ao         \n");
  printf("        |_|_|nnnn nnnn|_|_|        Jogo de Adivinhação!         \n");
  printf("       |\"  \"  | |_| |\"  \"  |        \n");
  printf("       |_____| ' _ ' |_____|        \n");
  printf("             \\__|_|__/        \n");
  printf("\n\n");

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

  switch (nivel) {
    case 1:
      totaldetentativas = 20;
      break;
    case 2:
      totaldetentativas = 12;
      break;
    default:
      totaldetentativas = 6;
      break;
  }
  
  for (int i = 1; i <= totaldetentativas; i++) {
    printf("Tentativa %d de %d \n", i, totaldetentativas);

    scanf("%d", &tentativa);

    if (tentativa < 0) {
      printf("Você não pode usar números negativos. \n \n");
      i--;
      continue;
    }

    ganhou = tentativa == numeroSecreto;
    int maior = tentativa > numeroSecreto;

    if (ganhou) {
      break;
    } else if (maior) {
      printf("Sua tentativa foi maior que o numero secreto \n \n");
    } else {
      printf("Sua tentativa foi menor que o numero secreto \n \n");
    }

    double ponto_perdidos = (double)abs(tentativa - numeroSecreto) / (double)2;
    ponto = ponto - ponto_perdidos;
  }
  if (ganhou) {
    printf("            OOOOOOOOOOO          \n");
    printf("        OOOOOOOOOOOOOOOOOOO          \n");
    printf("      OOOOOO  OOOOOOOOO  OOOOOO          \n");
    printf("    OOOOOO      OOOOO      OOOOOO            \n");
    printf("  OOOOOOOO #    OOOOO #    OOOOOOOO           \n");
    printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO \n");
    printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
    printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
    printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO \n");
    printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO         \n");
    printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO          \n");
    printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO           \n");
    printf("      OOOOOO   OOOOOOOOO   OOOOOO            \n");
    printf("         OOOOOO         OOOOOO           \n");
    printf("             OOOOOOOOOOOO          \n");
    printf("Você acertou, parabêns \n");
    printf("Você fez %.2f pontos \n", ponto);
  } else {
    printf("         \\|/ ____ \\|/          \n");
    printf("          @~/ ,. \\~@          \n");
    printf("         /_( \\__/ )_\\          \n");
    printf("            \\__U_/          \n");

    printf("Você perdeu! Tente novamente. \n \n");
  }
  printf("Fim de jogo \n");
}
