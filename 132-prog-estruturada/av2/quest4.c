/*Questão 4 (2,0 pontos) :
 * Faça um programa fonte leia nome (Nome Completo),endereço,idade e
 * telefone de 10 clientes e guarde estes dados em um arquivo denominado
 * clientes.txt do tipo “w”, sendo que o nome,endereço,idade e telefone devem
 * ficar em uma linha para cada cliente. Coloque o programa fonte como resposta
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Função utilizada para limpa o buffer que o scanf carrega*/
void flush_in() {
  int ch;
  while ((ch = fgetc(stdin)) != EOF && ch != '\n') {
  }
}

char *lerStringSeguramente(char *string, int tamanho) {
  if (fgets(string, tamanho, stdin) != NULL) {
    /* Remove a nova linha (\n), caso ela tenha sido lida pelo fgets */
    int indiceUltimoCaractere = strlen(string) - 1;
    if (string[indiceUltimoCaractere] == '\n') {
      string[indiceUltimoCaractere] = '\0';
    }
    return string;
  }

  return NULL;
}

struct lista_clientes {
  char nome[50];
  char endereco[50];
  int idade;
  char telefone[20];
};

int main() {
  struct lista_clientes clientes[100];

  for (int i = 0; i < 10; i++) {
    printf("Informe o nome do cliente %d \n", i + 1);
    lerStringSeguramente(clientes[i].nome, sizeof(clientes[i].nome));
    printf("Informe o endereço do cliente %d \n", i + 1);
    lerStringSeguramente(clientes[i].endereco, sizeof(clientes[i].endereco));
    printf("Informe a idade do cliente %d \n", i + 1);
    scanf("%d", &clientes[i].idade);
    flush_in();
    printf("Informe o telefone do cliente %d \n", i + 1);
    lerStringSeguramente(clientes[i].telefone, sizeof(clientes[i].telefone));
  }

  FILE *ponteiro_arquivo;

  ponteiro_arquivo = fopen("clientes.txt", "w");

  if (ponteiro_arquivo == 0) {
    printf("Lista de cliente não disponível \n\n");
    exit(1);
  }

  for (int i = 0; i < 10; i++) {
    fseek(ponteiro_arquivo, 0, SEEK_END);
    fprintf(
        ponteiro_arquivo,
        "CLIENTE: %d --- Nome: %s - Endereço: %s - Idade: %d - Telefone: %s \n",
        i+1,
        clientes[i].nome,
        clientes[i].endereco,
        clientes[i].idade,
        clientes[i].telefone);
  }
  printf("Dados cadastrados em arquivo \n");
  fclose(ponteiro_arquivo);

  /*for (int i = 0; i < 2; i++) {*/
  /*printf("-----CLIENTE %d ----- \n", i + 1);*/
  /*printf("NOME: %s \n", clientes[i].nome);*/
  /*printf("ENDEREÇO: %s \n", clientes[i].endereco);*/
  /*printf("IDADE: %d \n", clientes[i].idade);*/
  /*printf("TELEFONE: %s \n", clientes[i].telefone);*/
  /*printf("_______________________ \n");*/
  /*}*/
}
