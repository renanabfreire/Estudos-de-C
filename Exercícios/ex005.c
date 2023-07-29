#include <stdio.h>

int main(){
    int n;

    printf("digite um número:");
    scanf("%i", &n);

    printf("O antecessor de %i é %i e o sucessor é %i\n", n, n-1, n+1);

    return 0;
}
