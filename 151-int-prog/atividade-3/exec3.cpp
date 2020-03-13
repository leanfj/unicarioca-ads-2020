#include <stdio.h>

int main()
{

    int brigadeiros_sobra_estoque, brigadeiros_comprados, brigadeiros_estoque, dia_semana;
    float preco_brigadeiro, valor_pagar, valor_voucher, percent_brigadeiro;

    printf("\n Informe a quantidade de brigadeiros em ESTOQUE: ");
    scanf("%i", &brigadeiros_estoque);
    printf("\n Informe a quantidade de brigadeiros COMPRADOS: ");
    scanf("%i", &brigadeiros_comprados);
    printf("\n Informe o valor da unidade do brigadeiro: ");
    scanf("%f", &preco_brigadeiro);
    printf("\n Informe o dia de semana, usando de 1 a 7 sendo 1 como domingo o primeiro dia da semana ");
    scanf("%i", &dia_semana);

    brigadeiros_sobra_estoque = brigadeiros_estoque - brigadeiros_comprados;

    percent_brigadeiro = brigadeiros_sobra_estoque / brigadeiros_comprados * 100;

    if (brigadeiros_comprados > 10)
    {
        valor_pagar = preco_brigadeiro * brigadeiros_comprados;
        valor_pagar = valor_pagar - (valor_pagar * 0.05);
    }
    if (valor_pagar > 80)
    {
        valor_voucher = valor_pagar * 0.1;
    }

    switch (dia_semana)
    {
    case 1:
        printf("\n Hoje é DOMINGO");
        printf("\n O valor a pagar ----> R$ %.2f", valor_pagar);

        printf("\n Quantidade de brigadeiro ainda em estoque: %i", brigadeiros_sobra_estoque);
        printf("\n Porcentagem de brigadeiros comprados nessa venda: %.2f", percent_brigadeiro);

        if (valor_pagar > 80)
        {

            printf("\n O cliente tem um voucher de R$%2.f para proxima compra", valor_voucher);
        }

        break;

    case 2:
        printf("\n Hoje é SEGUNDA-FEIRA");
        printf("\n O valor a pagar ----> R$ %.2f", valor_pagar);

        printf("\n Quantidade de brigadeiro ainda em estoque: %i", brigadeiros_sobra_estoque);
        printf("\n Porcentagem de brigadeiros comprados nessa venda: %.2f", percent_brigadeiro);

        if (valor_pagar > 80)
        {

            printf("\n O cliente tem um voucher de R$%2.f para proxima compra", valor_voucher);
        }

        break;
    case 3:
        printf("\n Hoje é TERÇA-FEIRA");
        printf("\n O valor a pagar ----> R$ %.2f", valor_pagar);

        printf("\n Quantidade de brigadeiro ainda em estoque: %i", brigadeiros_sobra_estoque);
        printf("\n Porcentagem de brigadeiros comprados nessa venda: %.2f", percent_brigadeiro);

        if (valor_pagar > 80)
        {

            printf("\n O cliente tem um voucher de R$%2.f para proxima compra", valor_voucher);
        }

        break;
    case 4:
        printf("\n Hoje é QUARTA-FEIRA");
        printf("\n O valor a pagar ----> R$ %.2f", valor_pagar);

        printf("\n Quantidade de brigadeiro ainda em estoque: %i", brigadeiros_sobra_estoque);
        printf("\n Porcentagem de brigadeiros comprados nessa venda: %.2f", percent_brigadeiro);

        if (valor_pagar > 80)
        {

            printf("\n O cliente tem um voucher de R$%2.f para proxima compra", valor_voucher);
        }

        break;
    case 5:
        printf("\n Hoje é QUINTA-FEIRA");
        printf("\n O valor a pagar ----> R$ %.2f", valor_pagar);

        printf("\n Quantidade de brigadeiro ainda em estoque: %i", brigadeiros_sobra_estoque);
        printf("\n Porcentagem de brigadeiros comprados nessa venda: %.2f", percent_brigadeiro);

        if (valor_pagar > 80)
        {

            printf("\n O cliente tem um voucher de R$%2.f para proxima compra", valor_voucher);
        }

        break;
    case 6:
        printf("\n SEXTOU COM FRETE GRATIS");

        printf("\n O valor a pagar ----> R$ %.2f", valor_pagar);

        printf("\n Quantidade de brigadeiro ainda em estoque: %i", brigadeiros_sobra_estoque);
        printf("\n Porcentagem de brigadeiros comprados nessa venda: %.2f", percent_brigadeiro);

        if (valor_pagar > 80)
        {

            printf("\n O cliente tem um voucher de R$%2.f para proxima compra", valor_voucher);
        }

        break;
    case 7:
        printf("\n Hoje é SABADO");
        printf("\n O valor a pagar ----> R$ %.2f", valor_pagar);

        printf("\n Quantidade de brigadeiro ainda em estoque: %i", brigadeiros_sobra_estoque);
        printf("\n Porcentagem de brigadeiros comprados nessa venda: %.2f", percent_brigadeiro);

        if (valor_pagar > 80)
        {

            printf("\n O cliente tem um voucher de R$%2.f para proxima compra", valor_voucher);
        }

        break;

    default:
        printf("\n Informe o valor correto de 1 a 7");
        break;
    }

    return 0;
}