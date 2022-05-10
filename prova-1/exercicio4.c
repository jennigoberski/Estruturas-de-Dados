#include <stdio.h>

typedef struct

{

    int codigo;

    char nome_produto[21];

    float preco;

    int quantidade_estoque;

} tipo_produto;

int verificaCodigo(int cdg, tipo_produto produtos[])

{

    for (int i = 0; i < 5; i++)

    {

        if (produtos[i].codigo == cdg)

        {

            printf("Produto selecionado: %s\n", produtos[i].nome_produto);

            return 1;
        }
    }

    return -1;
}

int verificaQuantidade(int cdg, int quant, tipo_produto produtos[])

{

    for (int i = 0; i < 5; i++)

    {

        if (produtos[i].codigo == cdg)

        {

            if (produtos[i].quantidade_estoque < quant)

            {

                return -1;
            }
        }
    }

    return 1;
}

float calculaValor(int cdg, int quant, float valorTotal, tipo_produto produtos[])

{

    for (int i = 0; i < 5; i++)

    {

        if (produtos[i].codigo == cdg)

        {

            valorTotal += produtos[i].preco * quant;
        }
    }

    return valorTotal;
}

void retiraEstoque(int cdg, int quant, tipo_produto produtos[])

{

    for (int i = 0; i < 5; i++)

    {

        if (produtos[i].codigo == cdg)

        {

            produtos[i].quantidade_estoque -= quant;
        }
    }
}

int main()

{

    tipo_produto produtos[5] = {{1, "Arroz", 6.99, 100}, {2, "Feijão", 6.35, 100}, {3, "Macarrão", 7.95, 100}, {4, "Café", 10.15, 100}, {5, "Açúcar", 4.39, 100}};

    int cdg, quant;

    float valorTotal = 0;

    do

    {

        printf("Informe o código do item selecionado: ");

        scanf("%d", &cdg);

        if (verificaCodigo(cdg, produtos) == 1)

        {

            printf("Informe a quantidade do item selecionado: ");

            scanf("%d", &quant);

            if (verificaQuantidade(cdg, quant, produtos) == 1)

            {

                printf("Quantidade selecionada: %d\n", quant);

                valorTotal = calculaValor(cdg, quant, valorTotal, produtos);

                retiraEstoque(cdg, quant, produtos);
            }

            else

            {

                printf("O produto não possui a quantidade desejada em estoque.\n");
            }
        }

        else

        {

            printf("Código inválido.\n");
        }

    } while (cdg != 0);

    printf("O valor total da compra foi: %.2f\n", valorTotal);

    printf("\n");

    printf("-----------ESTOQUE-----------\n");

    for (int i = 0; i < 5; i++)

    {

        printf("Nome do produto: %s-- Quantidade no estoque: %d\n", produtos[i].nome_produto, produtos[i].quantidade_estoque);
    }

    return 0;
}