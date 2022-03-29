#include <stdio.h>

void linhas(int num)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int num;
    printf("Informe o número de linhas desejadas: ");
    scanf("%d", &num);
    linhas(num);
    return 0;
}