#include <stdio.h>

int main()
{
    float precoNormal=0, novoPreco=0, reajuste=0;
    int opc=0;
    char pec='%';

    printf ("Digite valor normal do produto: R$");
    scanf ("%f", &precoNormal);

    printf ("Opções de pagamento:\n(1)À vista no dinheiro ou cheque [10%c de desconto]\n(2)À vista no cartão [5%c de desconto]\n(3)2x no cartão\n(4)3 ou mais vezes no cartão [20%c de juros].\nSua opção: ", pec, pec, pec);
    scanf ("%i", &opc);

    if (opc==1 || opc==2 || opc==3 || opc==4)
    {
        if (opc==1)
        {
            reajuste = precoNormal/10;
            novoPreco = precoNormal - reajuste;

            printf ("Você deverá pagar: R$%.2f com R$%.2f de desconto\n", novoPreco, reajuste);
        }
        else if (opc==2)
        {
            reajuste = precoNormal/20;
            novoPreco = precoNormal - reajuste;

            printf ("Você deverá pagar: R$%.2f com R$%.2f de desconto\n", novoPreco, reajuste);
        }
        else if (opc==3) printf ("Você pagará o valor normal\n");
        else
        {
            reajuste = precoNormal /5;
            novoPreco = precoNormal+reajuste;

            printf ("Você deverá pagar: R$%.2f com R$%.2f de juros\n", novoPreco, reajuste);
        }
    }
    else puts("Opção não disponível");

    return 0;
}