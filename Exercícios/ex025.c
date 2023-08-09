#include <stdio.h>

int main()
{
    float salário=0, aumento=0;
    printf("Descubra quanto ficará o seu salário!\nDigite o salaário em reais: ");
    scanf ("%f", &salário);

    if (salário > 1250)
    aumento = salário/10;
    else
    aumento = salário/100*15;

    printf ("Seu salário será reajustado para R$%.2f\n", salário+aumento);

    return 0;
}
