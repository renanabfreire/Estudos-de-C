#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main(){
    double ang;

    printf ("Digite um ângulo: ");
    scanf ("%lf", &ang);

    ang=ang*PI/180;

    printf ("O valor do seno é %.3lf, do cosseno é %.3lf e da tangente é %.3lf.\n", sin(ang), cos(ang), tan(ang));

    return 0;
}