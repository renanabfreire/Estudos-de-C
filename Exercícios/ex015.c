#include <stdio.h>

int main(){
    int dias;
    float km, preço;
    printf ("Descubra o valor a ser pago sabendo que o aluguel custa R$60.00 por dia e R$0.15 por quilômetro rodado:\n");

    printf("Quantidade de dias: ");
    scanf("%i", &dias);

    printf("Quantidade de quilômetros rodados: ");
    scanf("%f", &km);

    preço = dias*60 + km*0.15;

    printf ("visto que em %i dias você percorreu %.1fkm, você deverá pagar R$%.2f.\n", dias, km, preço);

    return 0;
}