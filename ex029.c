#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int anoAtual=0, anoNascimento=0, idade=0;
    time_t data_ano;
    time(&data_ano);
  
    struct tm *data = localtime(&data_ano);

    anoAtual = (data->tm_year+1900);    

    printf ("Ano de nascimento: ");
    scanf ("%i", &anoNascimento);

    idade = anoAtual - anoNascimento;

    printf ("Quem nasceu em %i tem %i anos em %i.\n", anoNascimento, idade, anoAtual);

    if (idade>18) printf ("Você deve ter se alistado a %i anos atrás, em %i.\n", anoAtual-anoNascimento-18, anoAtual+18-idade);
    else if (idade==18) printf ("Você deverá se alistar imediatamente.\n");
    else printf ("Você deverá se alistar em %i anos, em %i.\n", anoNascimento+18-anoAtual, anoAtual+18-idade);

    return 0;
}
