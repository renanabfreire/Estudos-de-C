#include <stdio.h>
#include <string.h>

int main()
{
    char nomeCompleto[50];

    printf ("Digite seu nome completo: ");
    fgets (nomeCompleto, 50, stdin);

    char *nome = strtok(nomeCompleto, " ");
    while (nome != NULL)
    {
        printf ("%s\n", nome);
        nome = strtok(NULL, " ");
    }

    return 0;
}