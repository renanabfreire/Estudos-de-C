#include <stdio.h>

int main()
{
    int anoNascimento=0, idade=0;
    char resp='s';

    do
    {
        printf ("Digite o ano do nascimento: ");
        scanf ("%i", &anoNascimento);

        idade = 2023 - anoNascimento;

        printf ("Nadador de idade %i é da categoria ", idade);

        if (idade>17) printf ("Sênior");
        else if (idade>=14) printf ("Juvenil B");
            else if (idade>=11) printf ("Juvenil A");
                else if (idade>8) printf ("Ifantil B");
                    else if (idade>=5) printf ("Infantil A");
                            else printf ("INEXISTENTE");/* code */

        printf ("\nDeseja continuar?(S/N) ");
        scanf (" %c", &resp);
    } while (resp == 's');

    printf ("Espero ter ajudado ;P\nTchauzinho\n");
    
    return 0;
}
