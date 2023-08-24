#include "funcoes.c"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double o=0, x=0, y=0, z=0;
    char ope;

    puts ("Máquina Aritmética");
    printf ("[1] Uma das 4 perações\n[2] Elevar\n[3] Equação do segundo grau\nInsira sua opção: ");
    scanf ("%lf", &o);

    if (o==1){
        printf ("Qual operação deseja realizar? (a/s/m/d) ");
        scanf (" %c", &ope);

        printf ("Valor 1: ");
        scanf ("%lf", &x);
        printf ("Valor 2: ");
        scanf ("%lf", &y);

        printf ("A resposta da operação foi: %.2lf\n", aritmetica(x, y, ope));
    }
    else if (o==2){
        printf ("Base: ");
        scanf ("%lf", &x);
        printf ("Expoente: ");
        scanf ("%lf", &y);

        printf ("Os valores elevados dá igual à: %.0lf\n", eleva(x, y));
    }
    else if (o==3){
        printf ("Coeficiente a: ");
        scanf ("%lf", &x);
        printf ("Coeficiente b: ");
        scanf ("%lf", &y);
        printf ("Coeficiente c: ");
        scanf ("%lf", &z);

        printf("Os valores são ");
        equacao(x, y, z);
    }
    else puts ("Operação não encontrada :/");
    puts ("Tchauzinho...");

    return 0;
}