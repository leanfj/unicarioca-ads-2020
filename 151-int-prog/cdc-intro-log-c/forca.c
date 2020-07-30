#include "forca.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

char palavraSecreta[20];
char chutes[26];
int chutesdados = 0;

void abertura() {
  printf("*******************\n");
  printf("***Jogo Da Forca***\n");
  printf("*******************\n");
}

/*void escolhepalavra() { sprintf(palavraSecreta, "MELANCIA"); }*/
void escolhepalavra() {
  FILE* f;

  f = fopen("palavras.txt", "r");
  if (f == 0 ) {
    printf("Banco de dado de palavras não está disponível \n\n");
    exit(1);
  }

  int quantidade_palavras;

  fscanf(f, "%d", &quantidade_palavras);
  
  /*char palavra_1[50];*/
  /*fscanf(f, "%s", palavra_1);*/

  /*char palavra_2[50];*/
  /*fscanf(f, "%s", palavra_2);*/

  /*char palavra_3[50];*/
  /*fscanf(f, "%s", palavra_3);*/
  srand(time(0));

  int randomico = rand() % quantidade_palavras;

  for (int i = 0; i <= randomico; i++) {
    fscanf(f, "%s", palavraSecreta);
  }
  fclose(f);
}

void chuta() {
  char chute;
  printf("Qual letra? \n");
  scanf(" %c", &chute);
  chutes[chutesdados] = chute;
}

int jachutou(char letra) {
  int achou = 0;
  for (int j = 0; j < chutesdados; j++) {
    if (chutes[j] == letra) {
      achou = 1;
      /*Para a axecução do loop*/
      break;
    }
  }
  return achou;
}

int ganhou() {
  for (int i = 0; i < strlen(palavraSecreta); i++) {
    if (!jachutou(palavraSecreta[i])) {
      return 0;
    }
  }

  return 1;
}

void desenharforca() {
  printf("Você já deu %d chutes \n", chutesdados);
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

int enforcou() {
  int erros = 0;

  for (int i = 0; i < chutesdados; i++) {
    int existe = 0;

    for (int j = 0; j < strlen(palavraSecreta); j++) {
      if (chutes[i] == palavraSecreta[j]) {
        existe = 1;
        break;
      }
    }

    if (!existe)
      erros++;
  }

  return erros >= 5;
}

int main() {
  int acertou = 0, enforcado = 0;
  escolhepalavra();

  abertura();

  do {
    desenharforca();

    chuta();

    chutesdados++;

  } while (!ganhou() && !enforcou());

  return 0;
}
