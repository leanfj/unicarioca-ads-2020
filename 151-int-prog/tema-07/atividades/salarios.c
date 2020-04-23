#include <stdio.h>

int main() {
  float salario_min, salario_func, acumulador_sal = 0;
  int quant_func_1sal = 0, quant_func_3sal = 0, func_total = 0;

  printf("Informe o valor do salário mínimo vigente \n");
  scanf("%f", &salario_min);

  printf("Informe o salário do funcionário - 0(zero) para sair\n");
  scanf("%f", &salario_func);

  while (salario_func > 0) {
    if (salario_func == salario_min) {
      quant_func_1sal++;
    }

    if (salario_func > (salario_min * 3)) {
      quant_func_3sal++;
    }

    acumulador_sal = acumulador_sal + salario_func;
    func_total++;

    printf("Informe o salário do funcionário - 0(zero) para sair\n");
    scanf("%f", &salario_func);
  }

  printf("Quantidade funcionários que recebem 1 salário mínimo: %d \n", quant_func_1sal);
  printf("Porcentagem de funcionários que recebem mais de 3 salários mínimos: %d \% \n", (quant_func_3sal * 100)/func_total);
  printf("A média salárial é de: R$%.2f", acumulador_sal / func_total);


  return 0;
}
