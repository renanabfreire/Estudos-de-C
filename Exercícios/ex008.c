#include <stdio.h>

int main(){
    float m;
    float cm;
    float mm;

    printf("Digite um valor em metros:");
    scanf("%f", &m);

    cm = m * 100;
    mm = m * 1000;

    printf("Esse valor em cetímetros vale %.2f e em milímetros vale %.2f\n", cm, mm);

    return 0;
}