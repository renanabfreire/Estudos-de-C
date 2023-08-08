#include <stdio.h>

int main()
{
    int ano=0;

    printf ("Digite um ano para descobrir se ele é bissexto");
    scanf ("%i", &ano);

    if (ano%4==0 && ano%100 || ano%400==0)
        printf("Sim, o ano %i é bissexto!", ano);
    else
        printf ("Não, o ano %i não é bissexto!", ano);

    return 0;
}
