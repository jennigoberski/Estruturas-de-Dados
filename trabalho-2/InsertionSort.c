// 1.Insertion Sort
#include <stdio.h>

int main()
{
    int i, j, elem, vetor[10] = {6, 2, 14, 0, 7, 9, 19, 3, 11, 18};

    printf("Vetor antes da ordenação: { ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("}\n");

    for (j = 1; j < 10; j++)
    {
        elem = vetor[j];
        i = j - 1;

        while (i >= 0 && vetor[i] > elem)
        {
            vetor[i + 1] = vetor[i];
            i--;
            vetor[i + 1] = elem;
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