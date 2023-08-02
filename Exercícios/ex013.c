#include <stdio.h>

int main(){
    float s;
    float a;
    char pec = '%';

    printf ("Descubra quanto você receberá com seu aumento de 15%c!\nSeu Salário atual: ", pec);
    scanf ("%f", &s);

    a = s / 100 * 15;

    printf ("Seu salário com o aumento de 15%c será de R$%.2f\n", pec, s + a);
    return 0;
}
