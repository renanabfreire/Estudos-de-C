#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int matricula;
    float notaum, notadois, notatres, media;
} aluno;

int media(float nota1, float nota2, float nota3)
{
    float m;

    m = (nota1 + nota2 + nota3)/3;

    return m;
}

int main()
{
    aluno arr[5];
    int tam;
    float mediaturma;

    puts ("===================CADASTRAMENTO DE ALUNOS===================");

    printf ("Quantos alunos deseja cadastrar? ");
    scanf ("%d", &tam);

    for (int i=0; i<tam; i++)
    {
        printf ("Digite o nome do %dº aluno: ", i+1);
        scanf("%s", arr[i].nome);
        
        printf("Digite a primeira nota do %dº aluno: ", i+1);
        scanf("%f", &arr[i].notaum);

        printf("Digite a segunda nota do %dº aluno: ", i+1);
        scanf("%f", &arr[i].notadois);

        printf("Digite a terceira nota do %dº aluno: ", i+1);
        scanf("%f", &arr[i].notatres);

        arr[i].media = media(arr[i].notaum, arr[i].notadois, arr[i].notatres);
        mediaturma += arr[i].media;
    }

    mediaturma /= tam;

    puts("\nAlunos:");

    for (int i=0; i<tam; i++)
    {
        printf("%s: %.2f\n", arr[i].nome, arr[i].media);
    }

    printf ("Media da turma: %.2f\n", mediaturma);

    return 0;
}
