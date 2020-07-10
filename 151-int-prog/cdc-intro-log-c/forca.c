#include <stdio.h>
#include <string.h>

char palavraSecreta[20];
char chutes[26];
int tentativas = 0;

void abertura() {
  printf("*******************\n");
  printf("***Jogo Da Forca***\n");
  printf("*******************\n");
}

void escolhepalavra() { sprintf(palavraSecreta, "MELANCIA"); }

void chuta() {
  char chute;
  printf("Qual letra? \n");
  scanf(" %c", &chute);
  chutes[tentativas] = chute;
}

int jachutou(char letra) {
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

void desenharforca() {
  printf("Você já deu %d chutes \n", tentativas);
  /*Loop para cada posição da palavra secreta*/
  for (int i = 0; i < strlen(palavraSecreta); i++) {
    /*Para cada letra da palavra secreta, imprime a letra se achou for 1*/
    if (jachutou(palavraSecreta[i])) {
      printf("%c ", palavraSecreta[i]);
    } else {
      printf("_ ");
    }
  }
  printf("\n");
}

int main() {
  int acertou = 0, enforcado = 0;
  escolhepalavra();

  abertura();

  do {
    desenharforca();
    chuta();
    tentativas++;
  } while (!acertou && !enforcado);

  return 0;
}
