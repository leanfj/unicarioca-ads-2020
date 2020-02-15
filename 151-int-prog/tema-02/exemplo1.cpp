#include <stdio.h>

main () {
	/*
		divisão inteira - 9/2 retorna 4. o retorno é sempre a parte inteira 
		da expressão quando os dois operandos são avaliados com inteiros.
		caso utilize 9/2.0 ocorre a avaliação para um numero real retornando a parte decimal
	*/
	int num, dobro, triplo; //Declaração de variáveis
	printf("\n Entre com um numero "); //Mensagem na tela
	scanf("%d", &num); //Receber dados e atribuir na variável
	//num = 3; HardCoded
	dobro = num * 2; //expressão e atribuição
	triplo = num * 3;
	printf("\n Dobro = %d", dobro); //Saida de dados na tela com string de formato %d
	printf("\n Triplo = %d", triplo);
		
}
