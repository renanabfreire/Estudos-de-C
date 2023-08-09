#include <stdio.h>

int main()
{
    int vetorA[10], vetorB[10], c=0;

    for (c=0; c<10; c++)
    {
        printf("Digite o %i° valor: ", c+1);
        scanf("%i", &vetorA[c]);

        vetorB[c]=vetorA[c]*vetorA[c];
    }

    printf("Os quadrados dos valores são:\n");
    
    for (c=0; c<10; c++)
    {
        printf("%i ", vetorB[c]);
        if(c<9) printf("- ");
    }

    printf("\n");

    return 0;
}
