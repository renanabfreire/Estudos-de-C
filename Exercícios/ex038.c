// Adicionando bibliotecas
#include <stdio.h>
#include <string.h>

int main() // função principal
{
    // Declaração de variáveis
    int tam=0, posum=0, posdo=0, qa=0;
    char frase[1000];

    // Pegar frase e seu tamanho
    printf("Digite uma frase:\n");
    fgets(frase, 1000, stdin);
    tam = strlen(frase);

    // contandos quantos 'a' ou 'A' existem na frase, atualizando a posição toda vez para ficar com a última
    for (int i=0; i < tam; i++)
    {
        if (frase[i]=='a'||frase[i]=='A')
        {
            qa++;
            posdo = ++i;
        }
    }
    // Buscando o primeiro caso de 'a' e troncando pelo primeiro de 'A' caso venha antes
    posum = strcspn(frase, "a") + 1;
    if (strcspn(frase, "A") < strcspn(frase, "a")) posum = strcspn(frase, "A") + 1;
    printf("A letra A aparece %d vezes na frase\nprimeiro na %dª posição\npor fim na %dª posição\n", qa, posum, posdo);

    return 0;
}
