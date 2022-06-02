#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *matriz;
    int linhas, colunas, i, j;
    printf("Informe o número de linhas: ");
    scanf("%d", &linhas);
    printf("Informe o número de colunas: ");
    scanf("%d", &colunas);
    /* Aloca espaço para os elementos da matriz */
    matriz = (int *)malloc(linhas * colunas * sizeof(int));
    /* Mostra mensagem e encerra o programa, caso não haja memória suficiente */
    if (matriz == NULL)
    {
        printf("Memória insuficiente.");
        exit(1);
    }
    /* Recebe os elementos para a matriz */
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("\nInforme o elemento para o índice [%d][%d]: ", i, j);
            scanf("%d", &matriz[(i * colunas) + j]);
        }
    }
    /* Mostra os elementos armazenados na matriz */
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("\nElemento [%d][%d]: %d", i, j, matriz[(i * colunas) + j]);
        }
    }
    /* Libera a memória alocada para a matriz */
    free(matriz);

    return 0;
}