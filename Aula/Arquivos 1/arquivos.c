#include <stdio.h>

int main ()
{
    FILE *fp_in, *fp_out;
    char c;

    fp_in = fopen("LoremIpsum.txt", "r");
    fp_out = fopen("arquivo.txt", "w");
    
    if (fp_in == NULL) return 0;
    if (fp_out == NULL) return 0;
    
    while (!feof(fp_in))
    {
        c = fgetc (fp_in);
        switch (c)
        {
        case 'a':
        case 'A':
            c = '4';
            break;
        case 'e':
        case 'E':
            c = '3';
            break;
        case 'i':
        case 'I':
            c = '1';
            break;
        case 'o':
        case 'O':
            c = '0';
            break;
        case 'u':
        case 'U':
            c = '5';
            break;
        default:
            break;
        }
        fputc (c, fp_out);
    }

    fclose (fp_in);
    fclose (fp_out);
    
    return 0;
}

