#include <stdio.h>

int main()
{
    int vetor[] = {10, 15, 4, 25, 3, -4};
    int *ponteiros = &vetor[2];

    printf ("%i\n", *(ponteiros + 1));
    printf ("%i\n", ponteiros[-1]);
    printf ("%i\n", vetor[*ponteiros++]);
    printf ("%i\n", *(vetor + vetor[2]));

    return 0;
}
