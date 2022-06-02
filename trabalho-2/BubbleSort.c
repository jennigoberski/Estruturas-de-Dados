// 3.Bubble Sort Decrescente
#include <stdio.h>

int main()
{
    int i, j, aux, vetor[10] = {8, 27, 20, 13, 2, 84, 54, 3, 22, 32};

    printf("Vetor antes da ordenação: { ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("}\n");

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (vetor[j] > vetor[i])
            {
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }

    printf("Vetor depois da ordenação: { ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("}");

    return 0;
}