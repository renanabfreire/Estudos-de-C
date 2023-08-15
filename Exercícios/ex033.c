#include <stdio.h>

int main()
{
    float imc=0, alt=0, pes=0;

    puts ("============ CÁLUCLO DE IMC ============");

    printf ("Digite a altura (em metros): ");
    scanf ("%f", &alt);

    printf ("Digite o peso (em quilos): ");
    scanf ("%f", &pes);

    imc = pes / (alt*alt);

    printf ("Seu imc é de %.2f\n", imc);

    if (imc <18.5) puts ("Você está abaixo do peso");
    else if (imc>25) puts ("Você está acima do peso");
    else puts ("Você está no peso ideal");

    return 0;
}