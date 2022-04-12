#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor, quant;

    printf("Informe a quantidade de elementod do vetor: ");
    scanf_s("%d", &quant);

    vetor = (int *)(malloc(quant * sizeof(int)));

    if (vetor == NULL)
    {
        printf("Memória insuficiente.");
        exit(1);
    }

    for (int i = 0; i < quant; i++)
    {
        printf("Informe o elemento para o índice %d: ", i);
        scanf_s("%d", &vetor[i]);
    }

    for (int i = 0; i < quant; i++)
    {
        printf("\nElemento armazenado no índice %d: %d", i, vetor[i]);
    }

    free(vetor);

    return 0;
}