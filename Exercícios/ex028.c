#include <stdio.h>

int main()
{
    float num=0, ndo=0;

    puts ("Descubra qual valor é maior!");
    printf ("Digite o primerio valor: ");
    scanf ("%f", &num);
    printf ("Digite o segundo valor: ");
    scanf ("%f", &ndo);

    if (num>ndo) puts("O primeiro valor é maior.");
    else if (ndo>num) puts ("O segundo valor é maior.");
        else puts ("Os dois valores são iguais.");

    return 0;
}
