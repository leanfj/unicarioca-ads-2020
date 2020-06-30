#include <stdio.h>
#include <string.h>

int main() {
  char palavraSecreta[20];
  int acertou = 0, enforcado = 0;

  sprintf(palavraSecreta, "MELANCIA");

  do {
    char chute;

    printf("Qual letra? \n");
    scanf(" %c", &chute);

    /*Verifica em cada posicao do array se o chute é igual a letra da posição e
     * imprime na tela*/
    for (int i = 0; i < strlen(palavraSecreta); i++) {
      if (palavraSecreta[i] == chute) {
        printf("A posição %d tem essa letra \n", i + 1);
      }
    }
  } while (!acertou && !enforcado);

  return 0;
}
