#include <stdio.h>

int main()
{
    char ar[] = "Boa noite", *ptr = &ar[1];
    printf("%s\n", ptr + 3);   

    return 0;
}
