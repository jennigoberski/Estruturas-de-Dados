#include <stdio.h>
#include <stdlib.h>
int main()
{

    /* Cria um ponteiro para o vetor */
    int *vetor;

    /* Cria a variável de apoio */
    int i;

    /* Aloca memória para o vetor */
    vetor = (int *)malloc(1500 * sizeof(int));

    /* Preenche o vetor */
    for (i = 0; i < 1500; i++)
    {
        vetor[i] = i * 2;
    }

    /* Mostra os 10 primeiros e 10 ultimos elementos do vetor */
    for (i = 0; i < 1500; i++)
    {
        if (i <= 9 || i > 1489)
            printf("\n%d", vetor[i]);
    }

    /* Libera a memória alocada */
    free(vetor);

    return 0;
}