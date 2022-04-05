#include <stdio.h>

int main()
{
    int i;
    /* Cabeçalho */
    for (i = 1; i <= 20; i++)
    {
        printf("*");
    }
    printf("\n");
    printf("Números de 1 a 5:\n");
    for (i = 1; i <= 20; i++)
    {
        printf("*");
    }
    printf("\n");
    /* Escrita dos números */
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    /* Linha final */
    for (i = 1; i <= 20; i++)
    {
        printf("*");
    }
    return 0;
}