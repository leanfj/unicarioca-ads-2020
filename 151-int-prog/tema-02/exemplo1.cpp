#include <stdio.h>

main () {
	/*
		divis�o inteira - 9/2 retorna 4. o retorno � sempre a parte inteira 
		da express�o quando os dois operandos s�o avaliados com inteiros.
		caso utilize 9/2.0 ocorre a avalia��o para um numero real retornando a parte decimal
	*/
	int num, dobro, triplo; //Declara��o de vari�veis
	printf("\n Entre com um numero "); //Mensagem na tela
	scanf("%d", &num); //Receber dados e atribuir na vari�vel
	//num = 3; HardCoded
	dobro = num * 2; //express�o e atribui��o
	triplo = num * 3;
	printf("\n Dobro = %d", dobro); //Saida de dados na tela com string de formato %d
	printf("\n Triplo = %d", triplo);
		
}
