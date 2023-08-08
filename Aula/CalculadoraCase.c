#include <stdio.h>

int main()
{
    char oper='a';
    float num=0, ndo=0;

    printf ("============ CALCULADORA ============\n");

    printf ("Qual operação deseja realizar?(a/s/m/d) ");
    scanf (" %c", &oper);

    printf ("Digite o primeiro valor: ");
    scanf ("%f", &num);

    printf ("Digite o segundo: ");
    scanf ("%f", &ndo);

    switch (oper)
    {
    case 'a':
        printf ("A soma entre %.2f e %.2f é igual a %.2f\n", num, ndo, num+ndo);
        break;
    
    case 's':
        printf ("A subtração entre %.2f e %.2f é igual a %.2f\n", num, ndo, num-ndo);
        break;

    case 'm':
        printf ("A multiplicação entre %.2f e %.2f é igual a %.2f\n", num, ndo, num*ndo);
        break;

    case 'd':
        printf ("A divisão entre %.2f e %.2f é igual a %.2f\n", num, ndo, num/ndo);
        break;

    default:
        printf ("Operação não identificada :/\n");
        break;
    }

    return 0;
}
