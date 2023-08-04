#include <stdio.h>
#include <math.h>

int main(){
    double co=0, ca=0, hyp=0;

    printf ("Digite a medida do Cateto Oposto: ");
    scanf ("%lf", &co);

    printf ("Digite o Cateto Adjacente: ");
    scanf ("%lf", &ca);

    hyp = pow(((co*co)+(ca*ca)), 0.5);

    printf ("A hipotenusa mede %.3lf.\n", hyp);

    return 0;
}