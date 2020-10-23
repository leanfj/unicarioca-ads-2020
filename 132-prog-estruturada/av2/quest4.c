/*Questão 4 (2,0 pontos) :
 * Faça um programa fonte leia nome (Nome Completo),endereço,idade e
 * telefone de 10 clientes e guarde estes dados em um arquivo denominado
 * clientes.txt do tipo “w”, sendo que o nome,endereço,idade e telefone devem
 * ficar em uma linha para cada cliente. Coloque o programa fonte como resposta
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CLIENTES 10

/* Função utilizada para limpa o buffer que o scanf carrega*/
void flush_in() {
  int ch;
  while ((ch = fgetc(stdin)) != EOF && ch != '\n') {
  }
}

/*Função para limpar o \n (enter) que o fgets coloca por padrão no final de cada entrada*/
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
  int contadorCliente, contadorEscritaArquivo;

  /*Leitura de informações do cliente*/
  for (contadorCliente = 0; contadorCliente < CLIENTES; contadorCliente++) {
    printf("Informe o nome do cliente %d \n", contadorCliente + 1);
    lerStringSeguramente(clientes[contadorCliente].nome, sizeof(clientes[contadorCliente].nome));
    printf("Informe o endereço do cliente %d \n", contadorCliente + 1);
    lerStringSeguramente(clientes[contadorCliente].endereco, sizeof(clientes[contadorCliente].endereco));
    printf("Informe a idade do cliente %d \n", contadorCliente + 1);
    scanf("%d", &clientes[contadorCliente].idade);
    flush_in();
    printf("Informe o telefone do cliente %d \n", contadorCliente + 1);
    lerStringSeguramente(clientes[contadorCliente].telefone, sizeof(clientes[contadorCliente].telefone));
  }

  /*Manipulando arquivo*/
  FILE *ponteiroArquivo;

  ponteiroArquivo = fopen("clientes.txt", "w");
  
  /*Verifica a disponibilidade de acesso ao arquivo*/
  if (ponteiroArquivo == 0) {
    printf("ERROR - Lista de clientes não disponível !!! \n\n");
    exit(1);
  }
  
  /*Laço para escrever cada cliente no arquivo*/
  for (contadorEscritaArquivo = 0; contadorEscritaArquivo < CLIENTES; contadorEscritaArquivo++) {
    fprintf(
        ponteiroArquivo,
        "CLIENTE: %d --- Nome: %s - Endereço: %s - Idade: %d - Telefone: %s \n",
        contadorEscritaArquivo+1,
        clientes[contadorEscritaArquivo].nome,
        clientes[contadorEscritaArquivo].endereco,
        clientes[contadorEscritaArquivo].idade,
        clientes[contadorEscritaArquivo].telefone);
  }

  printf("SUCCESS - Dados cadastrados em arquivo !!!! \n");
  
  fclose(ponteiroArquivo);

  /*for (int i = 0; i < CLIENTES; i++) {*/
  /*printf("-----CLIENTE %d ----- \n", i + 1);*/
  /*printf("NOME: %s \n", clientes[i].nome);*/
  /*printf("ENDEREÇO: %s \n", clientes[i].endereco);*/
  /*printf("IDADE: %d \n", clientes[i].idade);*/
  /*printf("TELEFONE: %s \n", clientes[i].telefone);*/
  /*printf("_______________________ \n");*/
  /*}*/
}
