#include <stdio.h>

void linha(int quant)
{
    int i;
    for (i = 1; i <= quant; i++)
    {
        printf("*");
    }
    return;
}

int main()
{
    int i, quant;
    printf("Informe a quantidade de asteriscos: ");
    scanf("%d", &quant);
    /* Cabeçalho */
    linha(quant);
    printf("\n");
    printf("Números de 1 a 5:\n");
    linha(quant);
    printf("\n");
    /* Escrita dos números */
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    /* Linha final */
    linha(quant);

    return 0;
}