#include <stdio.h>

void linha()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        printf("*");
    }
    return;
}

int main()
{
    int i;
    /* Cabeçalho */
    linha();
    printf("\n");
    printf("Números de 1 a 5:\n");
    linha();
    printf("\n");
    /* Escrita dos números */
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    /* Linha final */
    linha();
    return 0;
}