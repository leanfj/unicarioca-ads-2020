#include <stdio.h>
#include <string.h>

int main() {
  char palavraSecreta[20];
  int acertou = 0, enforcado = 0;
  char chutes[26];
  int tentativas = 0;
  sprintf(palavraSecreta, "MELANCIA");

  do {
    char chute;

    printf("Qual letra? \n");
    scanf(" %c", &chute);
    chutes[tentativas] = chute;
    tentativas++;

    /*Verifica em cada posicao do array se o chute é igual a letra da posição e
     * imprime na tela*/
    for (int i = 0; i < strlen(palavraSecreta); i++) {
      int achou = 0;

      for (int j = 0; j < tentativas; j++) {
        if (chutes[j] == palavraSecreta[i]) {
          achou = 1;
          break;
        }

      }
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
