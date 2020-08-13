#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOTAL_PONTOS 1000
#define NIVEL_1 20
#define NIVEL_2 12
#define NIVEL_3 6

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
  int menornumero;
  int maiornumero;
  int numeroSecreto;
  int tentativa;
  int ultimatentativa;
  int continuar = 1;
  int ganhou = 0;
  double ponto = TOTAL_PONTOS;
  int segundos = time(0);

  srand(segundos);

  int n1 = rand();

  do {

    printf("Qual o nível de dificuldade ? \n");
    printf("(1)Fácil (2)Médio (3)Difícil \n \n");
    printf("Escolha: ");

    scanf("%d", &nivel);

    switch (nivel) {
    case 1:
      totaldetentativas = NIVEL_1;
      break;
    case 2:
      totaldetentativas = NIVEL_2;
      break;
    default:
      totaldetentativas = NIVEL_3;
      break;
    }
    printf("Escolha o limite de busca \n");
    printf("Escolha o menor numero \n");
    scanf("%d", &menornumero);
    printf("Escolha o maior numero \n");
    scanf("%d", &maiornumero);

    numeroSecreto = n1 % (maiornumero - menornumero + 1) + menornumero;

    for (int i = 1; i <= totaldetentativas; i++) {
      printf("Tentativa %d de %d \n", i, totaldetentativas);

      scanf("%d", &tentativa);

      if (tentativa < 0) {
        printf("Você não pode usar números negativos. \n \n");
        i--;
        continue;
      }

      if (ultimatentativa == tentativa) {
        printf("Você acobou de tentar esse numero ! Tente novamente. \n");
        i--;
        continue;
      }

      ganhou = tentativa == numeroSecreto;
      int maior = tentativa > numeroSecreto;

      if (ganhou) {
        break;
      } else if (maior) {
        printf("Sua tentativa foi maior que o numero secreto \n \n");
        ultimatentativa = tentativa;
      } else {
        printf("Sua tentativa foi menor que o numero secreto \n \n");
        ultimatentativa = tentativa;
      }

      double ponto_perdidos =
          (double)abs(tentativa - numeroSecreto) / (double)2;
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
    printf("Quer continuar jogando (1)Sim (0)Não? \n");
    scanf("%d", &continuar);
  } while (continuar) ;
  printf("Fim de jogo \n");
}
