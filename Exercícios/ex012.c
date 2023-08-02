#include <stdio.h>

int main(){
    float p;
    float d;
    char pec = '%';

    printf ("Descubra o valor de um produto com 5%c de desconto\nQuanto vale o produto?\nR$", pec);
    scanf ("%f", &p);

    d = p/20;

    printf ("O valor desse produto com 5%c de desconto é igual a R$%.2f\n", pec, p-d);
    return 0;
}
