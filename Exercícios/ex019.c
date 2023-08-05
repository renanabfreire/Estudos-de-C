#include <stdio.h>
#include <math.h>

int main(){
    double num=0, esc=0;
    int uni=0, dec=0, cen=0, mil=0;

    printf ("Digite um número: ");
    scanf ("%lf", &num);

    if (num<0){
        uni=0;dec=0;cen=0;mil=0;
    }
    else{
        esc=num/10;
        uni=(esc-floor(esc))*10;
        if(num<10){
            dec=0;cen=0;mil=0;
        }
        else{
            esc=num/100;
            dec=(esc-floor(esc))*10;
            if(num<100){
                cen=0;mil=0;
            }
            else{
                esc=num/1000;
                cen=(esc-floor(esc))*10;
                if(num<1000){
                    mil=0;
                }
                else{
                esc=num/10000;
                mil=(esc-floor(esc))*10;
                }
            }
        }
    }

    printf("O valor da unidade é %i\nDa dezena é %i\nDa centena é %i\nE da milhar é %i\n", uni, dec, cen, mil);

    return 0;
}