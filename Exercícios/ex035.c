#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int comp=0, play=0;

    puts ("Vamos jogar pedra, papel e tesoura.");
    puts ("Pedra[Digite 1], Papel[Digite 2], Tesoura[Digite 3]");

    printf ("Digite sua opção: ");
    scanf ("%i", &play);

    play = play - 1;
    comp = rand () % 3;

    if (comp == 0) puts ("Computador escolheu pedra");
    else if (comp == 1) puts ("Computador escolheu papel");
        else if (comp == 2) puts ("Computador escolheu tesoura");

    if (comp==0&&play==1 || comp==1&&play==2 || comp==2&&play==0) puts("Você ganhou!");
    else if (comp==play) puts ("Nós empatamos");
    else puts ("Eu venci! >:D");   

    return 0;
}
