#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char fabricante[31];
    char modelo[21];
    int ano;
    float preco;
} tipo_carros;

int main()
{

    int quant;

    tipo_carros *carros;

    printf("Informe a quantidade de registros: ");
    scanf("%d", &quant);
    /* Aloca espaço para os elementos da estrutura */
    carros = (tipo_carros *)malloc(quant * sizeof(tipo_carros));

    /* Mostra mensagem e encerra o programa, caso não haja memória suficiente */
    if (carros == NULL)
    {
        printf("Memória insuficiente.");
        exit(1);
    }

    /* Recebe os elementos para a estrutura */
    for (int i = 0; i < quant; ++i)
    {
        printf("Informe o nome do fabricante: ");
        scanf(" %30[^\n]", &(carros + i)->fabricante);
        printf("Informe o modelo do veículo: ");
        scanf(" %30[^\n]", &(carros + i)->modelo);
        printf("Informe o ano do veículo: ");
        scanf("%d", &(carros + i)->ano);
        printf("Informe o preco do veículo: ");
        scanf("%f", &(carros + i)->preco);
    }

    /* Mostra os dados do segundo veículo */
    printf("\nNome fabricante: %s", (carros + 1)->fabricante);
    printf("\nModelo: %s", (carros + 1)->modelo);
    printf("\nAno: %d", (carros + 1)->ano);

    /* Mostra os dados do segundo veículo */
    printf("\nNome fabricante: %s", (carros + 1)->fabricante);
    printf("\nModelo: %s", (carros + 1)->modelo);
    printf("\nAno: %d", (carros + 1)->ano);
    printf("\nPreço: %.3f", (carros + 1)->preco);

    /* Libera a memória alocada para a estrutura */
    free(carros);
    
    return 0;
}