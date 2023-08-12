#include <stdio.h>

int main()
{
    float rum=0, rdo=0, rtr=0;

    puts ("Descubra se três retas formam um triângulo.");

    printf ("Primeira reta: ");
    scanf ("%f", &rum);

    printf ("Segunda reta: ");
    scanf ("%f", &rdo);

    printf ("Terceira reta: ");
    scanf ("%f", &rtr);

    if (rum<rdo+rtr && rdo<rum+rtr && rtr<rum+rdo)
    {
        printf ("Sim, elas formam um triângulo, do tipo ");
    
        if (rum==rdo && rdo==rtr) puts ("Equilátero");
        else if (rum!=rdo && rdo!=rtr && rum!=rtr) puts ("Escaleno");
            else puts ("Isóceles");
    }
    else
    puts ("Não, elas não formam um triângulo");

    return 0;
}
