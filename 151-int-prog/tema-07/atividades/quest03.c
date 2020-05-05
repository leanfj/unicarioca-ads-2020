#include <stdio.h>
#include <string.h>

int main() {
  char sexo_usuario[10], olhos_usuario[10], cabelos_usuario[10];// Entradas 
  int idade_usuario; // Entradas
  int maior_idade = 0, quant_louros_verdes = 0, quant_fem = 0;     // Saidas

  printf("Informe a idade do usuário, -1 para sair \n");
  scanf("%d", &idade_usuario);

  while (idade_usuario != -1) {
    printf("Informe o sexo do usuário (masculino ou feminino):\n");
    scanf("%s", &sexo_usuario);

    printf("Informe a cor dos olhos do usuário (azuis, verdes ou castanhos):\n");
    scanf("%s", &olhos_usuario);

    printf("Informe a cor dos cabelos do usuário (louros, castanhos ou pretos):\n");
    scanf("%s", &cabelos_usuario);

    if (idade_usuario > maior_idade) {
      maior_idade = idade_usuario;
    }

    if ((strcmp(sexo_usuario, "feminino") == 0) && (idade_usuario >= 18 && idade_usuario <= 35)) {
      quant_fem++;
    }

    if ((strcmp(olhos_usuario, "verdes") == 0) && (strcmp(cabelos_usuario, "louros") == 0)) {
      quant_louros_verdes++;
    }

    printf("Informe a idade do usuário, -1 para sair \n");
    scanf("%d", &idade_usuario);
  }
  printf("A maior idade cadastrada foi: %d \n", maior_idade);
  printf("A quantidade de individuos do sexo feminino de 18 a 35 anos foi: %d \n", quant_fem);
  printf("A quantidade de individuos louros de olhos verdes foi: %d \n", quant_louros_verdes);

  return 0;
}
