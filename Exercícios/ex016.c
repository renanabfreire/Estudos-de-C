#include <stdio.h>
#include <math.h>

int main(){
    double ex=0;
    int mod=0;

    printf ("Digite qualquer valor Real: ");
    scanf ("%lf", &ex);

    mod = floor(ex);

    printf("a parte inteira de %f é %i\n", ex, mod);

    return 0;
}