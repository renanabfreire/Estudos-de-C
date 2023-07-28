#include <stdio.h>

int main(){
    // Declarando uma variável de valor inteiro (int)
    int minhaIdade;
    // Aplicando valor à variável minhaIdade
    minhaIdade = 18;

    // Escrevendo valor onde %i chama a variável inteira e o nome depois especifica
    printf("Eu tenho %i anos!\n", minhaIdade);

    // Valor pode ser aplicado junto à declaração
    int calcado = 39;

    printf("E eu calço %i.\n", calcado);

    return 0;
}
