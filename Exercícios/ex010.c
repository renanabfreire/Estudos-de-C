#include <stdio.h>

int main(){
    float r;

    printf ("Descubra quantos dólares você pode comprar!");
    
    printf ("Quantos reais você tem?\nR: ");
    scanf ("%f", &r);

    printf ("Você pode adiquirir %.2f dólares.", r/4.78);

    return 0;
}
