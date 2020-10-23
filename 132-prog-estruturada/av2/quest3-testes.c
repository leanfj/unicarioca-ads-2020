/*Questão 3 (2,0 pontos) :
 *
 * Faça um programa fonte leia nome (Nome Completo) ,endereço,idade e
 * telefone de 10 clientes guardando estes dados num vetor de struct sendo o
 * nome do struct struct lista_clientes e o nome do vetor deste struct clientes
 * que possa guardar até 100 clientes e depois mostre na tela o nome do sexto
 * cliente, o endereço do nono cliente, a idade do quarto cliente e o telefone
 * do terceiro cliente, sendo cada uma desta informações em uma linha diferente.
 *
 */

#include <stdio.h>


/* Função utilizada para limpa o buffer que o scanf carrega*/
void flush_in()
{
   int ch;
   while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

struct lista_clientes {
  char nome[50];
  char endereco[50];
  int idade;
  char telefone[20];
};

int main() {
  struct lista_clientes clientes[100];

  for (int i = 0; i <= 9; i++) {
    printf("Informe o nome do cliente %d \n", i + 1);
    gets(clientes[i].nome);
    printf("Informe o endereço do cliente %d \n", i + 1);
    gets(clientes[i].endereco);
    printf("Informe a idade do cliente %d \n", i + 1);
    scanf("%d", &clientes[i].idade);
    flush_in();
    printf("Informe o telefone do cliente %d \n", i + 1);
    gets(clientes[i].telefone);
  }


  printf("Nome do SEXTO cliente, %s \n", clientes[5].nome);
  printf("Endereço do NONO cliente, %s \n", clientes[8].endereco);
  printf("Idade do QUARTO cliente, %d \n", clientes[3].idade);
  printf("Telefone do TERCEIRO cliente, %s \n", clientes[2].telefone);

  for (int i = 0; i <= 9; i++) {
  
    printf("-----CLIENTE %d ----- \n", i+1);
    printf("NOME: %s \n", clientes[i].nome);
    printf("ENDEREÇO: %s \n", clientes[i].endereco);
    printf("IDADE: %d \n", clientes[i].idade);
    printf("TELEFONE: %s \n", clientes[i].telefone);
    printf("_______________________ \n"); 
  }

  return 0;
}
