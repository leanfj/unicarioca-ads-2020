#include <stdio.h>
#include <string.h>

void abertura() {
  printf("*******************\n");
  printf("***Jogo Da Forca***\n");
  printf("*******************\n");
}

void chuta(char chutes[], int *tentativas) {
  char chute;
  printf("Qual letra? \n");
  scanf(" %c", &chute);
  chutes[*tentativas] = chute;
  (*tentativas)++;
}
int jachutou(char letra, char *chutes, int tentativas) {
  int achou = 0;
  for (int j = 0; j < tentativas; j++) {
    if (chutes[j] == letra) {
      achou = 1;
      /*Para a axecução do loop*/
      break;
    }
  }
  return achou;
}

int main() {
  char palavraSecreta[20];
  int acertou = 0, enforcado = 0;
  char chutes[26];
  int tentativas = 0;
  sprintf(palavraSecreta, "MELANCIA");

  abertura();

  do {
    printf("Você já deu %d chutes \n", tentativas);
    /*Loop para cada posição da palavra secreta*/
    for (int i = 0; i < strlen(palavraSecreta); i++) {
      /*Para cada letra da palavra secreta, imprime a letra se achou for 1*/
      if (jachutou(palavraSecreta[i], chutes, tentativas)) {
        printf("%c ", palavraSecreta[i]);
      } else {
        printf("_ ");
      }
    }

    printf("\n");
    chuta(chutes, &tentativas);
  } while (!acertou && !enforcado);

  return 0;
}
