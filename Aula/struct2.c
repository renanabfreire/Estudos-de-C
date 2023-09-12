// Importando bibliotecas
#include <stdio.h>
#include <string.h>

typedef enum
{
    ANDROID,
    IOS
} tSistema; // Sistema Operacional para caso o produto seja Smartphone

typedef enum
{
    HD,
    FULLHD,
    FOURK
} tResolucao; // Resolução para caso seja televisão

typedef struct
{
    tSistema sistema;
    int armazenamento;
} tSmartphone; // Especificações do Smartphone

typedef struct
{
    int tam;
    int memoria;
} tNotebook; // Especificações do Notebook

typedef struct
{
    int tam;
    tResolucao resolucao;
} tTelevisor; // Especificações da televisão

typedef struct
{
    char nome[20], marca[10], modelo[20];
    float preco;
    int tipo;
    tSmartphone smartphone;
    tTelevisor televisor;
    tNotebook notebook;
} tProduto; // Estrutura geral para qualquer produto

// Função que imprime as informações de um determinado produto
void imprime_produtos(tProduto produto)
{
    printf ("Nome do produto: %s\nMarca: %s\nModelo: %s\nPreço: %.2f\n", produto.nome, produto.marca, produto.modelo, produto.preco); // Exibindo informações gerais

    if (produto.tipo == 1) // Imprimindo especificações do smartphone
    {
        printf ("Sistema: ");
        if (produto.smartphone.sistema == ANDROID) puts ("Android");
        else if (produto.smartphone.sistema == IOS) puts ("iOS");
        printf ("Armazenamento: %d", produto.smartphone.armazenamento);
    }
    else if (produto.tipo == 2) // Imprimindo especificações do notebook
    {
        printf ("Tamanho: %d polegadas\nMemória: %d GB de RAM", produto.notebook.tam, produto.notebook.memoria);
    }
    else if (produto.tipo == 3) // Imprimindo especificações do televisor
    {
        printf ("Tamanho: %d polegadas\nResolução: ", produto.televisor.tam);
        if (produto.televisor.resolucao == HD) puts ("HD");
        else if (produto.televisor.resolucao == FULLHD) puts ("Full HD");
        else if (produto.televisor.resolucao == FOURK) puts ("4k");
    }
    printf ("\n");
}

// Função Principal
int main()
{
    // Declaração de variáveis
    int tam, achado;
    char resp, nomedoproduto[20];

    printf ("Quantos produtos deseja cadastrar: ");
    scanf ("%d", &tam);

    tProduto arr[tam]; // Criando array com a quantidade de produtos que o usuário deseja digitar

    // Cadastrando aparelho por aparelho
    for (int i=0; i<tam; i++)
    {
        // Pegando informações gerais
        printf("Digite\n1 - Smartphone\n2 - Notebook\n3 - Televisor\nTipo: ");
        scanf ("%d", &arr[i].tipo);

        printf ("Digite o nome do aparelho: ");
        scanf ("%s", arr[i].nome);

        printf ("Digite a marca do aparelho: ");
        scanf ("%s", arr[i].marca);

        printf ("Digite o modelo do aparelho: ");
        scanf ("%s", arr[i].modelo);

        printf ("Digite o preço do aparelho: R$");
        scanf ("%f", &arr[i].preco);

        if (arr[i].tipo == 1) // Obtendo informações específicas caso seja um Smartphone
        {
            printf ("Digite\n0 - Android\n1 - iOS\nSistema Operacional do aparelho: ");
            scanf ("%x", &arr[i].smartphone.sistema);

            printf ("Digite o Armazenamento: ");
            scanf ("%i", &arr[i].smartphone.armazenamento);
        }
        else if (arr[i].tipo == 2) // Obtendo informações específicas caso seja um Notebook
        {
            printf("Digite o tamanho da tela em polegadas: ");
            scanf ("%i", &arr[i].notebook.tam);

            printf ("Digite a capacidade da Memória RAM: ");
            scanf ("%i", &arr[i].notebook.memoria);
        }
        else if (arr[i].tipo == 3) // Obtendo informações específicas caso seja um Notebook
        {
            printf ("Digite o tamanho da tela em polegadas: ");
            scanf ("%i", &arr[i].televisor.tam);
            
            printf ("Digite\n0 - HD\n1 - Full HD\n2 - 4K\nResolução: ");
            scanf ("%x", &arr[i].televisor.resolucao);
        }
    }
    
    // Escrevendo produtos cadastrados
    for (int i=0; i<tam; i++) imprime_produtos(arr[i]);

    printf ("Deseja buscar algum produto específico?[s/n] ");
    scanf (" %c", &resp);

    while (resp == 's')
    {
        achado = 0;
        printf("Digite o nome do produto que deseja pesquisar: ");
        scanf ("%s", nomedoproduto);

        for (int i=0; i<tam; i++)
            if (strstr(nomedoproduto, arr[i].nome) != NULL)
            {
                puts ("Produto encontrado:");
                imprime_produtos(arr[i]);
                achado = 1;
            }
        if (achado == 0) puts ("Desculpe, produto não encontrado.");

        printf ("Deseja buscar algum outro?[s/n] ");
        scanf (" %c", &resp);
    }

    return 0;
}
