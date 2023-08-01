#include <stdio.h>

int main(){
    int q;

    printf("Você deseja ver a tabuada de qual número?\nR: ");
    scanf("%i", &q);

    printf("------------\n");
    printf("%i x 1  = %i\n", q, q);
    printf("%i x 2  = %i\n", q, q*2);
    printf("%i x 3  = %i\n", q, q*3);
    printf("%i x 4  = %i\n", q, q*4);
    printf("%i x 5  = %i\n", q, q*5);
    printf("%i x 6  = %i\n", q, q*6);
    printf("%i x 7  = %i\n", q, q*7);
    printf("%i x 8  = %i\n", q, q*8);
    printf("%i x 9  = %i\n", q, q*9);
    printf("%i x 10 = %i\n", q, q*10);

    return 0;
}
