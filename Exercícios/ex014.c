#include <stdio.h>

int main(){
    float tempc = 0, tempf = 0;
    printf ("Informe a temperatura em °C: ");
    scanf ("%f", &tempc);

    tempf = tempc * 9/5 + 32;

    printf ("A temperatura de %.1f°C corresponde a %.1f°F\n", tempc, tempf);

    return 0;
}