// Importando Bibliotecas
#include <stdio.h>
#include <string.h>

// Criando função que troca valores pares por 1 e valores ímpares por 0
void trocaparimpar(int vetor[], int tamanho)
{
    int novosvalores[2] = {1, 0};;//Pegando quantidade de números no vetor

    for (int i=0; i<tamanho; i++) // Analisando cada elemento
    {
        if (vetor[i]%2 == 0)
        vetor[i] = novosvalores[0]; // Trocando pares
        else
        vetor[i] = novosvalores[1]; // Trocando ímpares
    }
}

// Função principal
int main()
{
    int arr[10];

    // Recebendo valores do vetor
    for (int i=0; i<10; i++)
    {
        printf ("Digite o %d° elemento: ", i+1);
        scanf ("%d", &arr[i]);
    }

    trocaparimpar(arr, 10);

    // Exibindo valores alterados
    printf ("A nova matriz fica: ");
    for (int i=0; i<10; i++) printf ("%d ", arr[i]);

    printf ("\n");

    return 0;
}