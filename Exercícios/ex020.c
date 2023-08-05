#include <stdio.h>
#include <math.h>

int main()
{
    double vel=0, mul=0;

    printf ("Digite a velocidadde do seu veículo em km/h: ");
    scanf ("%lf", &vel);

    if (vel>80)
    {
        mul = floor(vel - 80) * 7;

        printf ("Você foi multado por ultrapassar o limite de 80km/h!\nVocê deverá pagar R$%.2lf\n", mul);
    }
    else
    {
        printf ("Tenha um bom dia e dirija com segurança!\n");
    }

    return 0;
}