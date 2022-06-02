#include <stdio.h>

int main()
{
    float notas[2][3], soma, media;
    int i, j;
    
    for (i = 0; i < 2; i++)
    {
        printf("Informe as 3 notas do aluno %d\n", i + 1);
        soma = 0;
        for (j = 0; j < 3; j++)
        {
            printf("Informe a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        media = soma / 3;
        printf("\nMedia do aluno %d: %.2f\n\n", i + 1, media);
    }
    printf("Notas armazenadas\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n%.2f", notas[i][j]);
        }
    }

    return 0;
}