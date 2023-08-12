#include <stdio.h>

int main()
{
    float num=0, ndo=0, ntr=0, med=0;

    printf ("Digite a primeira nota: ");
    scanf ("%f", &num);

    printf ("Digite a segunda nota: ");
    scanf ("%f", &ndo);

    printf ("Digite a terceira nota: ");
    scanf ("%f", &ntr);

    med = (num+ndo+ntr)/3;

    if (med<4) printf("Sua média foi de %.2f, você está REPROVADO!\n", med);
    else if (med<7) printf ("Sua média foi de %.2f, você deverá fazer prova final.\n", med);
        else printf ("Sua média foi de %.2f, você está APROVADO!\n", med);

    return 0;
}
