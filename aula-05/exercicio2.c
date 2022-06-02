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
=======
int main() {

 int **matriz;
 int linhas, colunas, i, j;

 printf("Informe o número de linhas da matriz: ");
 scanf("%d", &linhas);

 printf("Informe o número de colunas da matriz: ");
 scanf("%d", &colunas);

 /* Aloca um vetor de quantidade "linhas" ponteiros para linhas */
 matriz = (int**) malloc (linhas * sizeof (int*));

 /* Aloca um vetor de quantidade "colunas" para cada uma das linhas */
 for (i = 0; i < linhas; i++){
 matriz[i] = (int *) malloc (colunas * sizeof (int));
 }

 /* Mostra mensagem e encerra o programa, caso não haja memória suficiente */
 if(matriz == NULL){
 printf("Memória insuficiente.");
 exit (1);
 }

 /* Recebe os elementos para a matriz */
 for (i = 0; i < linhas; i++){
 for (j = 0; j < colunas; j++){
 matriz[i][j] = i + j;
 }
 }

 /* Mostra os elementos armazenados na matriz */
 for (i = 0; i < linhas; i++){
 for (j = 0; j < colunas; j++){
 printf("\nElemento [%d][%d]: %d", i, j, matriz[i][j]);
 }
 }
 // Libera a memória alocada para a matriz
 for (i=0; i < linhas; i++){
 free (matriz[i]);
 }
 free (matriz);

 return 0;
}
