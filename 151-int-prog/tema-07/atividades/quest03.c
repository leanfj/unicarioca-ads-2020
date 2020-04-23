#include <stdio.h>

int main() {
  int sexo_usuario, olhos_usuario, cabelos_usuario, idade_usuario; // Entradas
  int maior_idade = 0, quant_louros_verdes = 0, quant_fem = 0;     // Saidas

  printf("Informe a idade do usuário, -1 para sair \n");
  scanf("%d", &idade_usuario);

  while (idade_usuario > 0) {
    printf("Informe o sexo do usuário 1(masculino) e 2(feminino) \n");
    scanf("%d", &sexo_usuario);

    printf("Informe a cor dos olhos do usuário 1(azuis) , 2(verdes) e "
           "3(castanhos) \n ");
    scanf("%d", &olhos_usuario);

    printf("Informe a cor dos cabelos do usuário 1(louros) , 2(castanhos) e "
           "3(pretos) \n ");
    scanf("%d", &cabelos_usuario);

    if (idade_usuario > maior_idade) {
      maior_idade = idade_usuario;
    }

    if (sexo_usuario == 2 && (idade_usuario >= 18 && idade_usuario <= 35)) {
      quant_fem++;
    }

    if (olhos_usuario == 2 && cabelos_usuario == 1) {
      quant_louros_verdes++;
    }

    printf("Informe a idade do usuário, -1 para sair \n");
    scanf("%d", &idade_usuario);
  }
  printf("A maior idade cadastrada foi: %d \n", maior_idade);
  printf(
      "A quantidade de individuos do sexo feminino de 18 a 35 anos foi: %d \n",
      quant_fem);
  printf("A quantidade de individuos loures de olhos verdes foi: %d \n",
         quant_louros_verdes);

  return 0;
}
