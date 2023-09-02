#include <stdio.h>
#include <string.h>

int main()
{
    int tam=0;
    char numero[6];

    printf ("Digite um valor de 0 a 9999: ");
    fgets (numero, 6, stdin);

    tam = strlen(numero);

    printf("Unidade: %c\n", numero[tam-2]);
    if(tam>2) printf("Dezena: %c\n", numero[tam-3]);
    if(tam>3) printf("Centena: %c\n", numero[tam-4]);
    if(tam>4) printf("Milhar: %c\n", numero[tam-5]);

    return 0;
}
