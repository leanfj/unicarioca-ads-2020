#include <stdio.h>

int main() {

  /*Entradas */

  char nome_hotel[20];
  float dist_cent_cid;
  int visit_feriado = 0, tipo_acesso, controle, hoteis_sem_acesso_asfaltado = 0;

  /*Saidas*/

  int numero_hoteis_15km = 0;
  float visit_sem_acesso_asfaltado, media_visit_acesso;

  do {
    printf("Informe o nome do hotel \n");
    scanf("%s", &nome_hotel);
    printf("Informe a distância do hotel para centro da cidade \n");
    scanf("%f", &dist_cent_cid);
    printf("Informe a quantidade de clientes no ultimo feriado \n");
    scanf("%d", &visit_feriado);
    printf("Informe o tipo de acesso ao hotel 0 - (acesso não asfaltado) e 1 - (acesso asfaltado) \n");
    scanf("%d", &tipo_acesso);

    printf("\n");

    if (dist_cent_cid > 15) {
      numero_hoteis_15km++;
    }

    if (tipo_acesso == 0) {
      hoteis_sem_acesso_asfaltado++;
      visit_sem_acesso_asfaltado = visit_sem_acesso_asfaltado + visit_feriado;
    }

    if (tipo_acesso == 1 && visit_feriado < 1000) {
      printf("Nome do hotel: %s \n", nome_hotel);
      printf("Distância do centro: %.2f \n", dist_cent_cid);
    }

    printf("\n");
    
    printf("Continuar com novos registros....? 0 - (Sair) / 1 - (Continuar) \n");
    scanf("%d", &controle);

    printf("\n");
  } while (controle != 0);

  if (hoteis_sem_acesso_asfaltado > 0) {
    media_visit_acesso =
        visit_sem_acesso_asfaltado / hoteis_sem_acesso_asfaltado;
  }

  printf("Número de hotéis a mais de 15Km do centro da cidade: %d \n",
         numero_hoteis_15km);
  printf("\n");
  printf("Quantidade média de visitantes, no último feriado em hotéis que não tenha acesso asfaltado: %.2f \n",
         media_visit_acesso);
  printf("\n");

  return 0;
}
