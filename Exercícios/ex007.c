#include <stdio.h>

int main(){
    float n1;
    float n2;
    
    printf("Descubra a média de suas duas notas!\n");

    printf("Primeira nota:");
    scanf("%f", &n1);

    printf("Segunda nota:");
    scanf("%f", &n2);

    printf("A sua média foi de: %.2f", (n1+n2) / 2);

    return 0;
}
