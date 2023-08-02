#include <stdio.h>

int main(){
    int idade;
    float altura;
    char primeiraLetra;

    printf("Digite a primeira letra do seu nome: ");
    scanf("%c", &primeiraLetra);

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Dados:\nPrimeira Letra: %c\nIdade: %i\nAltura: %.2f\n", primeiraLetra, idade, altura);

    return 0;
}