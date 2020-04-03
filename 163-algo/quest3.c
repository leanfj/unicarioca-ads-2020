#include <stdio.h>
#include <stdbool.h>

void main () {
	int valor_de_x, valor_de_y, aviso;
	bool valor_aviso;
	printf("Informe o valor de X: \n");
	scanf("%d", &valor_de_x);
	printf("Informe o valor de Y: \n");
	scanf("%d", &valor_de_y);
	printf("Informe o valor para o aviso, sendo VERDADEIRO - 1 e FALSO - 0 \n");
	scanf("%d", &aviso);
	valor_aviso = aviso;

	if (((valor_de_y == 8 && valor_de_x <= 5) || (valor_de_x == 5 && valor_aviso)) && (valor_de_x - valor_de_y < 3)) {
		printf("Email enviado \n");
	} else {
		printf("Email nao enviado \n");
	}
}
