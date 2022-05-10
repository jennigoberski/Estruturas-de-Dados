// 2.Selection Sort
#include <stdio.h>

int main()
{
    int i, j, elemMenor, aux, vetor[10] = {23, 15, 0, 4, 7, 36, 9, 31, 17, 1};

    printf("Vetor antes da ordenação: { ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("}\n");

    for (i = 0; i < 10; i++)
    {
        elemMenor = i;

        for (j = i+1; j < 10; j++)
        {
            if (vetor[j] < vetor[elemMenor])
            {
                elemMenor = j;
            }
        }

        aux = vetor[elemMenor];
        vetor[elemMenor] = vetor[i];
        vetor[i] = aux;
    }

    printf("Vetor depois da ordenação: { ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("}");

    return 0;
}