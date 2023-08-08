#include <stdio.h>
#include <math.h>

int main()
{
    double dist=0;

    printf ("Digite a distância em km: ");
    scanf ("%lf", &dist);

    dist=floor(dist);

    if (dist <= 200)
    {
        printf ("A sua viagem custará R$%.2lf.\n", dist*0.5);
    }
    else
    {
        printf ("A sua viagem custará R$%.2lf.\n", dist*0.45);
    }

    return 0;
}
