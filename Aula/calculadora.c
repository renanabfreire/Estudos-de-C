#include <stdio.h>

int main(){
    float n1=0, n2=0;

    printf("====== CALCULADORA ======\n");

    printf ("Digite dois valores:\n");
    scanf ("%f \n %f", &n1, &n2);

    printf ("======= OPERAÇÕES ========\n");
    printf ("Soma: %.2f\nSubtração: %.2f\nMultiplicação: %.2f\nDivisão: %.2f\n ", n1+n2, n1-n2, n1*n2, n1/n2);

    return 0;
}