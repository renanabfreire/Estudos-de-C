#include <stdio.h>

int main()
{
    int num=0, ndo=0, ntr=0;

    printf ("Digite três números inteiros para descobrir o maior e o menor\n");
    scanf ("%i %i %i", &num, &ndo, &ntr);

    if (num>ndo && num>ntr) printf ("%i é o maior número digitado\n", num);
    else if (ndo>num && ndo>ntr) printf ("%i é o maior número digitado\n", ndo);
        else printf ("%i é o maior número digitado\n", ntr);
    
    if (num<ndo && num<ntr) printf ("e %i é o menor número digitado\n", num);
    else if (ndo<num && ndo<ntr) printf ("e %i é o menor número digitado\n", ndo);
        else printf ("e %i é o menor número digitado\n", ntr);

    return 0;
}
