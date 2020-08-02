#include "forca.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados = 0;

void abertura() {
  printf("*********************\n");
  printf("*** JOGO DA FORCA ***\n");
  printf("*********************\n");
}

/*void escolhepalavra() { sprintf(palavrasecreta, "melancia"); }*/
void escolhepalavra() {
  FILE *f;

  f = fopen("palavras.txt", "r");
  if (f == 0) {
    printf("Banco de dado de palavras não está disponível \n\n");
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

int letraexiste(char letra) {

  for (int j = 0; j < strlen(palavrasecreta); j++) {
    if (letra == palavrasecreta[j]) {
      return 1;
    }
  }
  return 0;
}

void chuta() {
  char chute;
  printf("Qual letra? \n");
  scanf(" %c", &chute);
  
  if(letraexiste(chute)) {
    printf("\nVocê acertou: a palavra tem a letra %c \n\n", chute);
  } else {
    printf("\nVocê errou: a palavra NÃO tem a letra %c\n\n", chute);
  }

  chutes[chutesdados] = chute;
  chutesdados++;
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
  for (int i = 0; i < strlen(palavrasecreta); i++) {
    if (!jachutou(palavrasecreta[i])) {
      return 0;
    }
  }

  return 1;
}

int chuteserrados() {
  int erros = 0;

  for (int i = 0; i < chutesdados; i++) {
    int existe = 0;

    if (!letraexiste(chutes[i]))
      erros++;
  }

  return erros;
}
void desenharforca() {


  int erros = chuteserrados();

  printf("  _______           \n");
  printf(" |/      |          \n");
  printf(" |      %c%c%c      \n", (erros >= 1 ? '(' : ' '), (erros >= 1 ? '_' : ' '), (erros >= 1 ? ')' : ' '));
  printf(" |      %c%c%c      \n", (erros >= 3 ? '\\' : ' '), (erros >= 2 ? '|' : ' '), (erros >= 3 ? '/' : ' '));
  printf(" |       %c         \n", (erros >= 2 ? '|' : ' '));
  printf(" |      %c %c       \n", (erros >= 4 ? '/' : ' '), (erros >= 4 ? '\\' : ' ') );
  printf(" |                  \n");
  printf("_|___               \n");
  printf("\n\n");

  printf("Você já deu %d chutes \n", chutesdados);
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


int enforcou() { return chuteserrados() >= 5; }

void adcionapalavra() {
  char quer;

  printf("Você deseja adicionar uma paralavra no jogo (S/N) ? ");

  scanf(" %c", &quer);

  if (quer == 'S') {
    char novapalavra[TAMANHO_PALAVRA];

    printf("Digite a nova palavra, em letras maiúsculas: ");
    scanf("%s", novapalavra);

    FILE *f;

    f = fopen("palavras.txt", "r+");

    if (f == 0) {
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


  } while (!ganhou() && !enforcou());
  desenharforca();
  if (ganhou()) {
    printf("Você Ganhou PARABÊNS \n\n");

  } else {
    printf("Você perdeu. Tente Novamente \n\n");
  }
  adcionapalavra();
  return 0;
}
