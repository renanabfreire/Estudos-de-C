#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double aritmetica(double x, double y, char ope)
{
    double resp=0;

    if (ope == 'a') resp = x + y;
    else if (ope == 's') resp = x - y;
    else if (ope == 'm') resp = x * y;
    else if (ope == 'd') if(y != 0) resp = x / y; else NULL;
    else puts ("Operação não detectada");

    return resp;
}

double eleva(double x, double y)
{
    double resp = x;

    for(double c=1; c<y; c++) resp *= x;

    return resp;
}

void equacao (double a, double b, double c)
{
    double d, x, y;
    double ar[2];

    d = b*b - 4*a*c;

    if (a==0)
    {
        puts ("do primeiro grau");
    }
    else if (d<0) puts ("raíz inexistente");
    else if (d==0)
    {
        x = b/2*a;
        printf ("\nX = %.2lf\n", x);
    }

    else
    {
        x = (b + sqrt(d)) / 2*a;
        y = (b - sqrt(d)) / 2*a;
        printf ("\nX1 = %.2lf\nX2 = %.2lf\n", x, y);
    }
}
