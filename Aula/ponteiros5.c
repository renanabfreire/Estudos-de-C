#include <stdio.h>

int main()
{
    char *ar[] = {"azul", "vermelho", "branco"};

    printf ("%s\n%s\n%s\n", *ar, *(ar+1), *(ar+2));

    return 0;
}
