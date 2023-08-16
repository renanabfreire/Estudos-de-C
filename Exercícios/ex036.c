#include <stdio.h>

int main()
{
    int cont=1, quan=0;

    printf ("Você deseja ver a tabuada do valor:");
    scanf ("%i", &quan);

    puts ("-------------");

    for (cont=1; cont<11; cont++)
        printf ("%i x %i = %i\n", quan, cont, quan*cont);

    puts ("-------------");

    return 0;
}