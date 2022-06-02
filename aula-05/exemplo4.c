#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char nome[31];
    float preco;
} tipo_produtos;
int main()
{

    int quant;
    tipo_produtos *produtos;

    printf("Informe a quantidade de registros: ");
    scanf("%d", &quant);
    /* Aloca espaço para os elementos da estrutura */
    produtos = (tipo_produtos *)malloc(quant * sizeof(tipo_produtos));

    /* Mostra mensagem e encerra o programa, caso não haja memória suficiente */
    if (produtos == NULL)
    {
        printf("Memória insuficiente.");
        exit(1);
    }

    /* Recebe os elementos para a estrutura */
    for (int i = 0; i < quant; ++i)
    {
        printf("Informe o nome do produto: ");
        scanf(" %30[^\n]", &(produtos + i)->nome);
        printf("Informe o preco do produto: ");
        scanf("%f", &(produtos + i)->preco);
    }

    /* Mostra os elementos armazenados na estrutura */
    for (int i = 0; i < quant; ++i)
    {
        printf("\nNome produto: %s", (produtos + i)->nome);
        printf("\nPreço produto: %.2f", (produtos + i)->preco);
    }

    /* Libera a memória alocada para a estrutura */
    free(produtos);

    return 0;
}