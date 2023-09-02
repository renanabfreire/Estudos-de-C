#include <stdio.h>
#include <string.h>

int main()
{
    int tam=0, espaco=0;
    char nome_completo[50];

    printf ("Digite seu nome completo: ");
    fgets (nome_completo, 50, stdin);

    tam = strlen(nome_completo);

    espaco = strcspn(nome_completo, " ");

    printf("Primeiro nome: ");
    for (int i=0; i<espaco; i++)
    printf("%c", nome_completo[i]);

    for (int i=0; i < tam; i++)
    {
        if (nome_completo[i]==' ')
        {
            espaco = ++i;
        }
    }
    char *ptr = &nome_completo[espaco];
    printf ("\nÚltimo nome: %s\n", ptr);
    
    return 0;
}
