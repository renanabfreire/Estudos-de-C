// Importando bibliotecas
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função que retorna a quantidade
void functamanho(char matriz[][10]) 
{
    int nomes=0, letras=0;
    
    nomes = (sizeof(matriz))/2; // Pegando a quantidade de nomes
    
    for (int i=0; i<nomes; i++) // Laço que escreve a quantidade de caracteres em cada nome
    {
        letras = strlen(matriz[i]);
        printf ("O %d° nome tem: %d letras\n", i+1, letras);
    }
}

// Função que retorna o nome todo abreviado
void primeiraletra(char matriz[][10])
{
    int nomes=0;
    
    nomes = sizeof(matriz)/2; // Quantidade de nomes
    
    for (int i=0; i<nomes; i++) printf("%c. ", matriz[i][0]); // Primeira letra de cada com um .
    printf("\n");
}

// Função que conta a quantidade de vogais
int numdevogais(char matriz[][10])
{
    int nomes=0, numletras=0;
    char letra=' ';
    
    nomes = sizeof(matriz)/2; // Quantidade de nomes
    
    for (int i=0; i<nomes; i++) for (int j=0; j<10; j++) //Ler cada letra de cada nome
    {
        letra = tolower(matriz[i][j]); // Deixa a letra da vez minúscula
        switch (letra) // Confere se a letra é vogal e soma
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            numletras++;
            break;
        }
    }
    
    return numletras;
}

// Função que modifica cada vogal por um número
void mudaletrapornumero(char matriz[][10])
{
    int nomes=0;
    char letra, temp[5] = "43105";
    
    nomes = sizeof(matriz)/2; // Quantidade de nomes
    
    for (int i=0; i<nomes; i++)
    {
        for (int j=0; j<10; j++) // Lê cada palavra de cada letra
        {
            letra = tolower(matriz[i][j]); // Deixa a letra da vez minúscula
            switch (letra) // troca cada vogal por uma letra
            {
                case 'a':
                matriz[i][j] = temp[0];
                break;
                case 'e':
                matriz[i][j] = temp[1];
                break;
                case 'i':
                matriz[i][j] = temp[2];
                break;
                case 'o':
                matriz[i][j] = temp[3];
                break;
                case 'u':
                matriz[i][j] = temp[4];
                break;
            }
        }
    }
}

// Função Principal executando cada uma das outras.
int main()
{
    int vogais=0;
    char matriz[][10] = {"Renan", "Abreu", "Barbosa", "Freire"}; // Matriz com meus nomes

    functamanho(matriz);
    
    primeiraletra(matriz);
    
    vogais = numdevogais(matriz);
    printf ("Na matriz existem %d vogais\n", vogais);
    
    mudaletrapornumero(matriz);
    printf ("A nova matriz fica: ");
    
    for (int i=0; i<4; i++) printf("%s ", *(matriz+i)); // Escreve cada string da matriz
    printf ("\n");
    
    return 0;
}
