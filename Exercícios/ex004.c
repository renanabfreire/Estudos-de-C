#include <stdio.h>

int main(){
    int c;

    // c recebe um, enquanto c for menor ou igual a dez, executar loop, somar c+1 a c a cada laço
    for(c = 1; c <= 10; c = c + 1){
        printf("%i\n", c);
    }

    return 0;
}
