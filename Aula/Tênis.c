#include <stdio.h>

int main() {
    int i;
    float f;
    double d;
    char l;

    printf("Digite um número inteiro: ");
    scanf("%i", &i);

    printf("Digite um número quebrado: ");
    scanf("%f", &f);

    printf("Digite um outro número quebrado: ");
    scanf("%lf", &d);

    printf("Digite uma letra: ");
    scanf("%c", &l);

    printf("Letra: %c |Número quebrado 1: %f |\nNúmero quebrado 2: %lf|Inteiro: %i", l, f, d, i);

    return 0;
}