#include <stdio.h>

int main()
{
    int vetor[][2] = {{1, 2}, {3, 4}, {5, 6}};
    int (*ponteiro)[2];

    ponteiro = vetor;
     printf ("%i\n", (*ponteiro)[0]);
     printf ("%i\n", (*(ponteiro+2))[1]);

    return 0;
}
