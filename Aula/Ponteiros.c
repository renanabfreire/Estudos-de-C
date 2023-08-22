#include <stdio.h>

int main()
{
    int x=15;
    int y;
    int *ponteiros;

    ponteiros = &x;

    y = *ponteiros;

    printf("ponteiros = %p\nx = %i\ny = %i\n", ponteiros, *ponteiros, y);

    return 0;
}
