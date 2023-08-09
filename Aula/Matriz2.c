#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int linhas, colunas, i=0, j=0, slin=0, scol=0, sdia=0;

    puts ("========GERADOR DE MATRIZES========");

    printf ("Digite a quantidade de linhas: ");
    scanf ("%i", &linhas);
    printf ("Digite a quantidade de colunas: ");
    scanf ("%i", &colunas);

    printf ("+");
    for(j=0; j<colunas; j++) printf("---+");

    printf("\n");

    int matriz[linhas][colunas];
    for (i=0; i<linhas; i++)
        for (j=0; j<colunas; j++)
        {
            matriz[i][j] = rand() % 10;
            if (i==j) sdia = sdia+matriz[i][j];
        }
    
    for(i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
            printf ("| %i ", matriz[i][j]);
        
        printf("|\n+");
        for(j=0; j<colunas; j++)
        printf("---+");

        printf("\n");
    }

    for (i=0; i<linhas; i++)
    {
        for (j=0; j<colunas; j++)
        {
            scol = scol + matriz[i][j];
        }
        printf ("Linha %i: %i\n", i+1, scol);
        scol = 0;
    }

    for (i=0; i<colunas; i++)
    {
        for (j=0; j<linhas; j++)
        {
            slin = slin + matriz[j][i];
        }
        printf ("Coluna %i: %i\n", i+1, slin);
        slin = 0;
    }

    printf("\nDiagonal: %i\n", sdia);

    return 0;
}