#include <stdio.h>
#include <string.h>

void abertura() {
  printf("*******************\n");
  printf("***Jogo Da Forca***\n");
  printf("*******************\n");
}

int main() {
  char palavraSecreta[20];
  int acertou = 0, enforcado = 0;
  char chutes[26];
  int tentativas = 0;
  sprintf(palavraSecreta, "MELANCIA");

  abertura();

  do {
    char chute;

    printf("Qual letra? \n");
    scanf(" %c", &chute);
    chutes[tentativas] = chute;
    tentativas++;

    /*Loop para cada posição da palavra secreta*/
    for (int i = 0; i < strlen(palavraSecreta); i++) {
      int achou = 0;
      /*Verifica cada tentativa e compara com cada letra da palavra secreta*/
      for (int j = 0; j < tentativas; j++) {
        if (chutes[j] == palavraSecreta[i]) {
          achou = 1;
          break;
        }
      }
      /*Para cada letra da palavra secreta, imprime a letra se achou for 1*/
      if (achou) {
        printf("%c ", palavraSecreta[i]);
      } else {
        printf("_ ");
      }
    }

    printf("\n");
  } while (!acertou && !enforcado);

  return 0;
}
