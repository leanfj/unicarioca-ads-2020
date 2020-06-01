#include <stdio.h>
int repositorio = 1000;

int getNotas(int valor_saque) {
  int quant_notas = 0;
  quant_notas = valor_saque / 10;
  return quant_notas;
}

void handleRepositorio(int valor_saque) {
  repositorio = repositorio - getNotas(valor_saque);
}

void printSaldoRepositorio() {
  printf("O caixa possui %d de notas de R$10,00 para saque \n", repositorio);
}

int main() {
  int valor;
  printf("***Caixa Eletrônico*** \n");
  printSaldoRepositorio();
  do {
    printf("-----Informe um valor para retirada----- \n");
    scanf("%d", &valor);

    if (valor > 0) {
      if (valor % 10 != 0) {
        printf("Informe um valor multiplo de 10 \n");

      } else {

        if ((repositorio - getNotas(valor)) < 0) {
          printf("Caixa sem notas suficientes para saque \n");
          printSaldoRepositorio();
        } else {
          handleRepositorio(valor);
          printf("Você sacou R$ %d, em %d notas de R$10,00 \n", valor,
                 getNotas(valor));
          printSaldoRepositorio();
        }
      }
    }
  } while (valor >= 0);
  return 0;
}
