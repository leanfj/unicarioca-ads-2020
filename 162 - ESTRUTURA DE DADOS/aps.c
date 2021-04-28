#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define ERRO -1
#define true 1
#define false 0

typedef int bool;

typedef int TIPOCHAVE;

typedef struct{
  TIPOCHAVE chave;
  // outros campos...
} REGISTRO;

typedef struct {
  REGISTRO A[MAX+1];
  int nroElem;
} LISTA;

/* Inicialização da lista sequencial (a lista já está criada e é apontada pelo endereço em l) */
void inicializarLista(LISTA* l){
  l->nroElem = 0;
} /* inicializarLista */


/* Exibição da lista sequencial */
void exibirLista(LISTA* l){
  int i;
  printf("\nLista: \" ");
  for (i=0; i < l->nroElem; i++)
    printf("%i ", l->A[i].chave);
  printf("\"\n");
} /* exibirLista */ 

/* Retornar o tamanho da lista (numero de elementos "validos") */
int tamanho(LISTA* l) {
  return l->nroElem;
} /* tamanho */

/* Retornar o tamanho em bytes da lista. Neste caso, isto nao depende do numero
   de elementos que estao sendo usados, pois a alocacao de memoria eh estatica.
   A priori, nao precisariamos do ponteiro para a lista, vamos utiliza-lo apenas
   porque teremos as mesmas funcoes para listas ligadas.   
*/
int tamanhoEmBytes(LISTA* l) {
  return sizeof(LISTA);
} /* tamanhoEmBytes */

/* Retornar a chave do primeiro elemento da lista sequencial (caso haja) e ERRO
   caso a lista esteja vazia */
TIPOCHAVE primeiroElem(LISTA* l){
  if(l->nroElem > 0) return l->A[0].chave;
  else return ERRO; // lista vazia
} /* primeiroElem */

/* Retornar a chave do ultimo elemento da lista sequencial (caso haja) e ERRO
   caso a lista esteja vazia */
TIPOCHAVE ultimoElem(LISTA* l) {
  if(l->nroElem > 0) return l->A[l->nroElem-1].chave;
  else return ERRO; // lista vazia
} /* ultimoElem */

/* Retornar a chave do elemento que está na posição n da LISTA. Lembre-se que as posicoes do
   arranjo A vao de 0 a MAX-1  */
TIPOCHAVE enesimoElem(LISTA* l, int n) {
  if( (n >= 0) && (n < l->nroElem)) return l->A[n].chave ;
  else return ERRO;
} /* enesimoElem */

/* Reinicializar a estrutura */
void reinicializarLista(LISTA* l) {
  l->nroElem = 0;
} /* reinicializarLista */


/* Busca sequencial em lista ordenada ou não SEM SENTINELA */
int buscaSequencial(LISTA* l, TIPOCHAVE ch) {
  int i = 0;
  while (i < l->nroElem){
    if(ch == l->A[i].chave) return i; // achou
    else i++;
  }
  return ERRO; // não achou
} /* buscaSequencial */


/* Busca sequencial em lista COM SENTINELA (vetor criado com MAX+1 posições) */
int buscaSentinela(LISTA* l, TIPOCHAVE ch) {
  int i = 0;
  l->A[l->nroElem].chave = ch; // sentinela
  while(l->A[i].chave != ch) i++;
  if (i > l->nroElem -1) return ERRO; // não achou
  else return i;
} /* buscaSentinela */

/* Busca sequencial em lista COM SENTINELA (vetor criado com MAX+1 posições) 
   considerando o arranjo ordenado */
int buscaSentinelaOrdenada(LISTA* l, TIPOCHAVE ch) {
  int i = 0;
  l->A[l->nroElem].chave = ch; // sentinela
  while(l->A[i].chave < ch) i++;
  if (i == l->nroElem || l->A[i].chave != ch) return ERRO; // não achou
  else return i;
} /* buscaSentinela */

/* Busca binaria em lista ordenada */
int buscaBinaria(LISTA* l, TIPOCHAVE ch){
  int esq, dir, meio;
  esq = 0;
  dir = l->nroElem-1;
  while(esq <= dir) {
    meio = ((esq + dir) / 2);
    if(l->A[meio].chave == ch) return meio; // achou
    else {
      if(l->A[meio].chave < ch) esq = meio + 1;
      else dir = meio - 1;
    }
  }
  return ERRO;
} /* buscaBinaria */


/* Exclusão do elemento cuja chave seja igual a ch */
bool excluirElemLista(LISTA* l, TIPOCHAVE ch) { 
  int pos, j;
  pos = buscaSequencial(l,ch);
  if(pos == ERRO) return false; // não existe
  for(j = pos; j < l->nroElem-1; j++) l->A[j] = l->A[j+1];
  l->nroElem--;
  return true;
} /* excluirElemLista */


/* Exclusão do elemento cuja chave seja igual a ch em lista ordenada*/
bool excluirElemListaOrd(LISTA* l, TIPOCHAVE ch) { 
  int pos, j;
  pos = buscaBinaria(l,ch);
  if(pos == ERRO) return false; // não existe
  for(j = pos; j < l->nroElem-1; j++) l->A[j] = l->A[j+1];
  l->nroElem--;
  return true;
} /* excluirElemListaOrd */


/* Inserção em lista ordenada usando busca binária permitindo duplicação */
bool inserirElemListaOrd(LISTA* l, REGISTRO reg) {
  if(l->nroElem >= MAX) return false; // lista cheia
  int pos = l->nroElem;
  while(pos > 0 && l->A[pos-1].chave > reg.chave) {
    l->A[pos] = l->A[pos-1];
    pos--;
  }
  l->A[pos] = reg;
  l->nroElem++;
  return true;
} /* inserirElemListaOrd */


/* Inserção em lista ordenada usando busca binária sem duplicação */
bool inserirElemListaOrdSemDup(LISTA* l, REGISTRO reg) {
  if(l->nroElem >= MAX) return false; // lista cheia
  int pos;
  pos = buscaBinaria(l,reg.chave);
  if(pos != ERRO) return false; // elemento já existe
  pos = l->nroElem-1;
  while(pos>0 && l->A[pos].chave > reg.chave) {
    l->A[pos+1] = l->A[pos];
    pos--;
  }
  l->A[pos+1] = reg;
  l->nroElem++;
  return true;
} /* inserirElemListaOrd */

int menu_lista() {
    int op_lista;
    int numeroEscolhido;
    int retorno;
    LISTA lista;
    inicializarLista(&lista);
    exibirLista(&lista);
    printf("\nNumero de elementos na lista: %i.\n",tamanho(&lista));
    printf("\nTamanho da lista (em bytes): %i.\n",tamanhoEmBytes(&lista));
    REGISTRO reg;    

    do
    {
        printf("\nEscolha uma: 1 - Inserção ou 2 - Exclusão e 0 - Sair \n \n");
        scanf("%d", &op_lista);

        switch (op_lista)
        {
        case 1:
            printf("\nInforme um numero(Diferente de 0) para inserir \n \n");
            scanf("%d", &numeroEscolhido);
            reg.chave = numeroEscolhido;
            inserirElemListaOrd(&lista, reg);
            exibirLista(&lista);
            break;
        case 2 :
            if (tamanho(&lista) > 0) {
////                exibirLista(&lista);
                printf("\nInforme um numero(Diferente de 0) para excluir \n \n");
                scanf("%d", &numeroEscolhido);
                retorno = excluirElemListaOrd(&lista, numeroEscolhido);
                if (retorno) {
                    printf("\nNumero excluído! \n");
                } else {
                    printf("\nNumero não encontrado! \n");
                }
                exibirLista(&lista);
            } else {
                printf("\n Lista está vazia ! \n");
            }
            break;
        
        default:
            break;
        }
    } while (op_lista != 0);

    return 0;
        
}

int main(){
    int opcao;

    do
    {
        printf("\n1 - Lista / 2 - Fila / 3 - Pilha / 0 - Sair \n \n");
        scanf("%d" , &opcao);

        switch (opcao)
        {
        case 1: 
            menu_lista();
            break;
        
        case 2: 
            //menu_fila();
            break;
        case 3: 
            //menu_pilha();
            break;
        case 0:
            exit(0);
        default:
            printf("Escolha inválida");
            break;
        }
    } while (opcao != 0);
    
}
