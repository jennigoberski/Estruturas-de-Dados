#include <stdio.h>

//Fila simples
int main()
{
    int vetor[5], primeiro, ultimo, op, i;
    /* Define o valor inicial para as variável primeiro e último */
    primeiro = -1;
    ultimo = -1;
    do
    {
        printf("1 - Adicionar elemento na fila\n");
        printf("2 - Remover elemento da fila\n");
        printf("3 - Listar elementos da fila\n");
        printf("4 - Sair\n");
        scanf("%d", &op);
        /* Adiciona um elemento à fila, caso a fila não esteja cheia */
        if (op == 1)
        {
            if (ultimo == 4)
            {
                printf("A fila está cheia.\n");
            }
            else
            {
                if (primeiro == -1)
                {
                    primeiro = 0;
                }
                ultimo++;
                printf("Informe número: ");
                scanf("%d", &vetor[ultimo]);
            }
        }
        /* Remove um elemento da fila, caso a fila não esteja vazia */
        if (op == 2)
        {
            if (primeiro == -1)
            {
                printf("A fila está vazia.\n");
            }
            else
            {
                primeiro++;
                if (primeiro > ultimo)
                {
                    primeiro = -1;
                    ultimo = -1;
                }
            }
        }
        /* Mostra todos os elementos da fila, caso a fila não esteja vazia */
        if (op == 3)
        {
            if (primeiro == -1)
            {
                printf("A fila está vazia.\n");
            }
            else
            {
                printf("\nElementos da fila:\n");
                for (i = primeiro; i <= ultimo; i++)
                {
                    printf("%d\n", vetor[i]);
                }
            }
        }
    } while (op != 4);
    return 0;
}
