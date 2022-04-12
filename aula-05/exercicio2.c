#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int **matriz;
    int linhas, colunas;

    printf("Informe o número de linhas da matriz: ");
    scanf_s("%d", &linhas);

    printf("Informe o número de colunas da matriz: ");
    scanf_s("%d", &colunas);

    matriz = (int *)malloc(linhas * sizeof(int));

    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    if (matriz == NULL)
    {
        printf("Memória insuficiente.");
        exit(1);
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = i + j;
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("\nElemento [%d][%d]: %d", i, j, matriz[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
