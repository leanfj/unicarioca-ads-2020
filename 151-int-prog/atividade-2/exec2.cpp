#include <stdio.h>
#include <string.h>

int main()
{

    float quant_combustivel, valor_pagar, valor_alcool = 3.90, valor_gasolina = 4.30;
    char tipo_combustivel[1];

    printf("\n ========================");
    printf("\n ======Posto Alegria=====");
    printf("\n ========================");

    printf("\n Informe a quantidade de combutível em litros: ");
    scanf("\n %f", &quant_combustivel);
    printf("\n Informe o tipo de combustivel (a- Alcool / g- gasolina): ");
    scanf("\n %c", &tipo_combustivel);

    if (strcmp(tipo_combustivel, "a") == 0)
    {
        if (quant_combustivel <= 20)
        {
            valor_pagar = quant_combustivel * valor_alcool;
            valor_pagar = valor_pagar - (valor_pagar * 0.03);
        }
        else
        {
            valor_pagar = quant_combustivel * valor_alcool;
            valor_pagar = valor_pagar - (valor_pagar * 0.05);
        }
    }
    else
    {
        if (quant_combustivel <= 20)
        {
            valor_pagar = quant_combustivel * valor_gasolina;
            valor_pagar = valor_pagar - (valor_pagar * 0.04);
        }
        else
        {
            valor_pagar = quant_combustivel * valor_gasolina;
            valor_pagar = valor_pagar - (valor_pagar * 0.06);
        }
    }

    printf("\n Valor a ser pago: ------> R$ %.2f", valor_pagar);

    return 0;
}