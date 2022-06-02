#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *vetor, tam, topo, op, i, elemento, encontrado;

    /* Cria um vetor com tamanho definido pelo usuário */
    printf("Informe o tamanho da pilha: ");
    scanf("%d", &tam);
    vetor = malloc(tam * sizeof(int));

    /* Define o valor inicial para a variável 'topo' */
    topo = -1;

    do
    {
        printf("1 - Adicionar elemento na pilha\n");
        printf("2 - Remover elemento da pilha\n");
        printf("3 - Mostrar primeiro elemento da pilha\n");
        printf("4 - Mostrar último elemento da pilha\n");
        printf("5 - Buscar elemento na pilha\n");
        printf("6 - Listar elementos da pilha\n");
        printf("7 - Sair\n");
        scanf("%d", &op);

        /* Adiciona um elemento à pilha, caso a pilha não esteja cheia */
        if (op == 1)
        {
            if (topo == tam - 1)
            {
                printf("A pilha está cheia.\n");
            }
            else
            {
                topo++;
                printf("Informe número: ");
                scanf("%d", &vetor[topo]);
            }
        }

        /* Remove um elemento da pilha, caso a pilha não esteja vazia */
        if (op == 2)
        {
            if (topo == -1)
            {
                printf("A pilha está vazia.\n");
            }
            else
            {
                topo--;
            }
        }

        /* Mostra o primeiro elemento da pilha, caso a pilha não esteja vazia */
        if (op == 3)
        {
            if (topo == -1)
            {
                printf("A pilha está vazia.\n");
            }
            else
            {
                printf("Primeiro elemento da pilha: %d\n", vetor[0]);
            }
        }

        /* Mostra o último elemento da pilha, caso a pilha não esteja vazia */
        if (op == 4)
        {
            if (topo == -1)
            {
                printf("A pilha está vazia.\n");
            }
            else
            {
                printf("Último elemento da pilha: %d\n", vetor[topo]);
            }
        }

        /* Busca um elemento na pilha, caso a pilha não esteja vazia */
        if (op == 5)
        {

            encontrado = 0;

            if (topo == -1)
            {
                printf("A pilha está vazia.\n");
            }
            else
            {
                printf("Informe o elemento a buscar: ");
                scanf("%d", &elemento);

                for (i = 0; i < tam; i++)
                {
                    if (vetor[i] == elemento)
                    {
                        printf("Elemento encontrado na posição %d da pilha.\n", i);
                        encontrado = 1;
                    }
                }
                if (encontrado == 0)
                {
                    printf("Elemento não encontrado na pilha.\n");
                }
            }
        }

        /* Mostra todos os elementos da pilha, caso a pilha não esteja vazia */
        if (op == 6)
        {
            if (topo == -1)
            {
                printf("A pilha está vazia.\n");
            }
            else
            {
                printf("\nElementos da pilha:\n");
                for (i = topo; i > -1; i--)
                {
                    printf("%d\n", vetor[i]);
                }
            }
        }

    } while (op != 7);

    return 0;
}