#include <stdio.h>

int main(){
    int n1;
    int n2;
    int s;

    printf("Digite um número:");
    scanf("%i", &n1);

    printf("Digite outro:");
    scanf("%i", &n2);

    s = n1 + n2;

    printf("A soma entre %i e %i é igual a %i.\n", n1, n2, s);
    return 0;
}
