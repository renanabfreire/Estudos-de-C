#include <stdio.h>

int main()
{
    float rum=0, rdo=0, rtr=0;

    printf("Descubra se três retas formam um triângulo\nDigite seus tamanhos.\nPrimeira reta: ");
    scanf ("%f", &rum);

    printf("Segunda reta: ");
    scanf ("%f", &rdo);

    printf("Terceira reta: ");
    scanf ("%f", &rtr);

    if (rum<rdo+rtr && rdo<rum+rtr && rtr<rum+rdo)
        puts ("Sim, eles formam um triângulo!");
    else
        puts ("Não, eles não formam um triângulo!");

    return 0;
}
