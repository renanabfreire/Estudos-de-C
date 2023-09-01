// Incluíndo bibliotecas
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função main
int main()
{
    //variáveis
    int count=0, tam=0, nletras=0;
    char nome[50];

    //obtendo nome a ser manipulado
    printf ("Digite seu  nome: ");
    fgets(nome, 50, stdin);
    //pegando tamanho do nome para usar nos laços
    tam=strlen(nome);
    nome[tam-1] = '\0';

    //Deixando tudo em Maiúsculo
    for (count=0; count < tam; count++) nome[count] = toupper(nome[count]);
    printf("Nome maiúsculo: %s\n", nome);

    //Deixando tudo em minúsculo
    for (count=0; count < tam; count++) nome[count] = tolower(nome[count]);
    printf("Nome minúsculo: %s\n", nome);

    // Contando letras - os espaços em branco
    for (count=0; count < tam; count++)
    {
        nletras++;
        if (nome[count] == ' ') nletras--;
    }
    nletras--; //removendo a contagem do caractere final
    printf("O nome possui %d letras\n", nletras);
    nletras=0; //zerando para a próxima interação

    // Contando até o primeiro espaço (só o primeiro nome)
    for (count=0; count < tam; count++)
    {
        if (nome[count] == ' ') break;
        nletras++;
    }
    printf("Dessas, %d letras estão no primeiro nome\n", nletras);

    return 0;
}
