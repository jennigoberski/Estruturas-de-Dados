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
=======
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
=======
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
