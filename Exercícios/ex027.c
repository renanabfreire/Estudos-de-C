#include <stdio.h>

int main()
{
    float salario=0, emprestimo=0, prestacao=0;
    int anos=0;

    puts ("Descubra a disponibilidade do empréstimo!");

    printf ("Valor da casa: R$");
    scanf ("%f", &emprestimo);

    printf ("Salário do comprador: R$");
    scanf ("%f", &salario);

    printf ("Anos de financiamento: ");
    scanf ("%i", &anos);

    prestacao = emprestimo / anos/12;

    printf ("Para pagar uma casa de R$%.2f em %i anos a prestação será de R$%.2f!\n", emprestimo, anos, prestacao);

    if (prestacao<=salario/100*30) puts ("Empréstimo CONCEDIDO!");
    else puts ("Empréstimo NEGADO!");

    return 0;
}
