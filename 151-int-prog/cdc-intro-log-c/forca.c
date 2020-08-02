#include "forca.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados = 0;

void abertura() {
  printf("*******************\n");
  printf("***jogo da forca***\n");
  printf("*******************\n");
}

/*void escolhepalavra() { sprintf(palavrasecreta, "melancia"); }*/
void escolhepalavra() {
  FILE* f;

  f = fopen("palavras.txt", "r");
  if (f == 0 ) {
    printf("banco de dado de palavras não está disponível \n\n");
    exit(1);
  }

  int quantidade_palavras;

  fscanf(f, "%d", &quantidade_palavras);
  
  srand(time(0));

  int randomico = rand() % quantidade_palavras;

  for (int i = 0; i <= randomico; i++) {
    fscanf(f, "%s", palavrasecreta);
  }
  fclose(f);
}

void chuta() {
  char chute;
  printf("qual letra? \n");
  scanf(" %c", &chute);
  chutes[chutesdados] = chute;
}

int jachutou(char letra) {
  int achou = 0;
  for (int j = 0; j < chutesdados; j++) {
    if (chutes[j] == letra) {
      achou = 1;
      /*para a axecução do loop*/
      break;
    }
  }
  return achou;
}

int ganhou() {
  for (int i = 0;  i < strlen(palavrasecreta); i++) {
    if (!jachutou(palavrasecreta[i])) {
      return 0;
    }
  }

  return 1;
}

void desenharforca() {
  printf("você já deu %d chutes \n", chutesdados);
  /*loop para cada posição da palavra secreta*/
  for (int i = 0; i < strlen(palavrasecreta); i++) {
    /*para cada letra da palavra secreta, imprime a letra se achou for 1*/
    if (jachutou(palavrasecreta[i])) {
      printf("%c ", palavrasecreta[i]);
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

    for (int j = 0; j < strlen(palavrasecreta); j++) {
      if (chutes[i] == palavrasecreta[j]) {
        existe = 1;
        break;
      }
    }

    if (!existe)
      erros++;
  }

  return erros >= 5;
}

void adcionapalavra() {
  char quer;

  printf("você deseja adicionar uma paralavra no jogo (s/n) ?");

  scanf(" %c", &quer);

  if (quer == 's') {
    char novapalavra[TAMANHO_PALAVRA];

    printf("digite a nova palavra, em letras maiúsculas: ");
    scanf("%s", novapalavra);

    FILE* f;

    f = fopen("palavras.txt", "r+");

    if(f == 0) {
      printf("Banco de dados de palavras não está disponível \n\n");
      exit(1);
    }
    
    int qtd;

    fscanf(f, "%d", &qtd);
    qtd++;
    fseek(f, 0, SEEK_SET);
    fprintf(f, "%d", qtd);
    
    fseek(f, 0, SEEK_END);
    fprintf(f, "\n%s", novapalavra);

    fclose(f);

  }
    
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
  desenharforca();
  adcionapalavra();
  return 0;
}
