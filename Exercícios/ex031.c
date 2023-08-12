#include <stdio.h>
#include <time.h>

int main()
{
    int idade=0, anoAtual=0, anoNascimento=0;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    anoAtual = tm.tm_year+1900;
    
    puts ("======== Descobrir Categoria ========");

    printf ("Digite ano de nascimento para descobrir categoria: ");
    scanf ("%i", &anoNascimento);

    idade = anoAtual - anoNascimento;

    printf ("Sua categoria é ");

    if (idade<10) puts ("Mirim");
    else if (idade<15) puts ("Infantil");
        else if (idade<20) puts ("Junior");
            else if (idade<25) puts ("Sênior");
                else puts ("Master");

    return 0;
}
