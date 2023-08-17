#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[100];
    int num_vogais=0, i=0;

    printf ("Digite uma frase de até 100 caracteres: ");
    fgets (frase, 100, stdin);

    for (i=0; i<strlen(frase); i++)
    {
        switch(tolower(frase[i]))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                num_vogais++;
                break;
            default:
                break;
        }
    }

    printf ("Você digitou %i vogais.\n", num_vogais);

    return 0;
}
