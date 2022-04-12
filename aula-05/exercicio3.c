#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char fabricante[31];
    char modelo[21];
    int ano;
    float preco;
} dados_veiculos;

int main(int argc, char const *argv[])
{
    dados_veiculos *veiculos;
    int quant;

    printf("Informe o número de registros: ");
    scanf_s("%d", &quant);

    veiculos = (dados_veiculos *)malloc(quant * sizeof(dados_veiculos));

    if (veiculos == NULL)
    {
        printf("Memória insuficiente.");
        exit(1);
    }

    for (int i = 0; i < quant; ++i)
    {
        printf("Informe o nome do fabricante: ");
        scanf(" %30[^\n]", &(veiculos + i)->fabricante);
        printf("Informe o modelo: ");
        scanf("%20[^\n]", &(veiculos + i)->modelo);
        printf("Informe o ano do veículo: ");
        scanf("%d", &(veiculos + i)->ano);
        printf("Informe o preco do produto: ");
        scanf("%f", &(veiculos + i)->preco);
    }

    printf("\nNome fabricante: %s", (veiculos + 1)->fabricante);
    printf("\nModelo: %s", (veiculos + 1)->modelo);
    printf("\nAno: %d", (veiculos + 1)->ano);
    printf("\nPreço: %.3f", (veiculos + 1)->preco);

    free(veiculos);

    return 0;
}
