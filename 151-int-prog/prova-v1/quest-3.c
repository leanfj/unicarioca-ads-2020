#include <stdio.h>

int main () {
    int num1, num2, num3, aux, op; //Declaracao de variaveis
    printf("Informe 3 numeros para serem ordenados \n");
    scanf("%d", &num1); //Atribuicao de valor a posicao de memoria referente a variavel
    scanf("%d", &num2); //Atribuicao de valor a posicao de memoria referente a variavel
    scanf("%d", &num3); //Atribuicao de valor a posicao de memoria referente a variavel

    printf("Selecione a opcao que deseja ordenar \n");
    printf("1 - para ordenacao crescente \n");
    printf("2 - para ordenacao decrescente \n");
    printf("3 - para manter como digitou \n");

    scanf("%d", &op); //Atribuicao de valor a posicao de memoria referente a variavel

    switch(op) {
        case 1: 
            //Verificaçao da ordem do numeros para tornalos crescentes
            if (num1 > num3 || num2 > num3) {
                if (num1 > num2) {
                    //Reatibuicao de valores para ordenar os numero para crescente
                    aux = num1;
                    num1 = num3;
                    num3 = aux;
                } else {
                    aux = num2;
                    num2 = num3;
                    num3 = aux;
                }
            }
            if (num1 > num2) {
                aux = num1;
                num1 = num2;
                num2 = aux;
            }
            printf("%d, %d, %d \n", num1, num2, num3);
            break;
        case 2:
            //Verificaçao da ordem do numeros para tornalos decrescente
            if (num1 < num3 || num2 < num3) {
                if (num1 < num2) {
                    //Reatibuicao de valores para ordenar os numero para decrescente
                    aux = num1;
                    num1 = num3;
                    num3 = aux;
                } else {
                    aux = num2;
                    num2 = num3;
                    num3 = aux;
                }
            }
            if (num1 < num2) {
                aux = num1;
                num1 = num2;
                num2 = aux;
            }
            printf("%d, %d, %d \n", num1, num2, num3);
            break;
        case 3:
            //Impressao conforme os numeros foram digitados na entrada
            printf("%d, %d, %d \n", num1, num2, num3);
            break;
        default:
            printf("Opcao invalida \n");
    }
    return 0;
}
