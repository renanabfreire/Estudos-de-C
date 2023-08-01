#include <stdio.h>

int main(){
    float l;
    float h;
    float a;

    printf ("Largura da parede: ");
    scanf ("%f", &l);

    printf ("Altura da parede: ");
    scanf ("%f", &h);

    a = l*h;

    printf ("Sua parede tem a dimensão %.2f x %.2f e sua área é de %.2f\nPara pintar essa parede, você precisará de %.2fL de tinta\n",l, h, a, a/2);

    return 0;
}
