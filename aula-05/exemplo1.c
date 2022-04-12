#include <stdio.h>
#include <stdlib.h>
int main()
{

    /* Cria um ponteiro para o vetor */
    int *vetor;
    int i, quant;

    /* Recebe a quantidade de elementos do vetor */
    printf("Informe a quantidade de elementos do vetor: ");
    scanf("%d", &quant);

    /* Aloca memória para o vetor */
    vetor = (int *)(malloc(quant * sizeof(int)));

    /* Mostra mensagem e encerra o programa, caso não haja memória suficiente */
    if (vetor == NULL)
    {
        printf("Memória insuficiente.");
        exit(1);
    }

    /* Mostra os endereços de memória reservados para o vetor */
    printf("Endereços de memória reservados para o vetor:");

    for (i = 0; i < quant; i++)
    {
        printf("\n%p", &vetor[i]);
    }

    printf("\n");

    /* Recebe os elementos para o vetor */
    for (i = 0; i < quant; i++)
    {
        printf("Informe o elemento para o índice %d: ", i);
        scanf("%d", &vetor[i]);
    }

    /* Mostra os elementos armazenados */
    for (i = 0; i < quant; i++)
    {
        printf("\nElemento armazenado no índice %d: %d", i, vetor[i]);
    }

    /* Libera a memória alocada */
    free(vetor);

    return 0;
}