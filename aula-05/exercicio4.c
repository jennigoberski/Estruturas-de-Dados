#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *vetor;
    int i, num, quant;

    quant = 0;

    /* Aloca memória para o vetor */
    vetor = (int *)malloc(3 * sizeof(int));

    /* Mostra mensagem e encerra o programa, caso não haja memória suficiente */
    if (vetor == NULL)
    {
        printf("Memória insuficiente.");
        exit(1);
    }

    /* Solicita a entrada de números até que o número informado seja 0 */
    do
    {
        printf("Informe número: ");
        scanf("%d", &num);
        vetor[quant] = num;

        quant++;

        /* Verifica se foram digitados 3 números. Em caso positivo, realoca mais
       memória. O testo é feito questionando se a quantidade é múltipla de 3 */
        if (quant % 3 == 0)
        {
            vetor = (int *)realloc(vetor, (quant + 3) * sizeof(int));
        }
    } while (num != 0);

    /* Mostra os elementos do vetor */
    for (i = 0; i < quant; i++)
    {
        printf("\n%d", vetor[i]);
    }

    return 0;
}