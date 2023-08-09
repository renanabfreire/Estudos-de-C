#include <stdio.h>

int main()
{
    int matriz[2][3], i=0, j=0;

    puts ("========GERADOR DE MATRIZ========");

    for (i=0; i<2; i++)
        for (j=0; j<3 ; j++)
        {
            printf("Digite o elemento (%i, %i): ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
        
    puts ("\nMatriz:");
    puts ("---------");

    for (i=0; i<2; i++)
    {
        for (j=0; j<3 ; j++)
        {
            printf ("%i ", matriz[i][j]);
            if(j<2) printf("| ");
        }

        printf("\n---------\n");
    }

    return 0;
}