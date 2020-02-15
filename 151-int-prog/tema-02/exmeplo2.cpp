#include <stdio.h>

main () {
	float valorConta, servico;
	
	printf("\n Digite o valor da conta ");
	scanf("%f", &valorConta);
	printf("Conta: %.2f", valorConta);//Utilizamos na string de formata��o o .2 para formatar a saida
	
	servico = valorConta * 0.1;
	valorConta = valorConta + servico;
	
	
	printf("\n O valor de serviço foi, %.2f e o valor a pagar e %.2f ", servico, valorConta);

	return 0;
}
