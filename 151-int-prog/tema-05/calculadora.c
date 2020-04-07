#include <stdio.h>

int main() {
  char op;
  float num1, num2;

  printf("Digite o NUMERO 1 o OPERADOR e o NUMERO 2: ");

  scanf("%f %c %f", &num1, &op, &num2);

  switch (op) {
    case '+':
      printf(" = %f ", num1 + num2);
      break;
    case '-':
      printf(" = %f ", num1 - num2);
      break;
    case '*':
      printf(" = %f ", num1 * num2);
      break;
    case '/':
      printf(" = %f ", num1 / num2);
      break;
    default:
      printf("Operador inválido");
  }

  return 0;
}
