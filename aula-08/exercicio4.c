#include <stdio.h>

int main()
{
    int i, j, valor, descartes = 0, encontrado = 0, esquerda = 0, direita = 14, meio;
    int vetor[15] = {13,7,56,24,98,0,53,3,14,37,7,15,2,9,42};

    // ordenação
    for (j = 1; j < 10; j++)
    {
        valor = vetor[j];
        i = j - 1;

        while (i >= 0 && vetor[i] > valor)
        {
            vetor[i + 1] = vetor[i];
            i--;
            vetor[i + 1] = valor;
        }
    }

    printf("Informe o valor a ser procurado: ");
    scanf("%d", &valor);

    meio = (esquerda + direita) / 2;

    // busca
    while (encontrado != 1 && esquerda <= direita)
    {
        if (vetor[meio] == valor)
        {
            encontrado = 1;
        }
        else
        {
            if (valor > vetor[meio])
            {
                esquerda = meio + 1;
                descartes = (direita - meio);
                if(descartes < 0) {
                    descartes *= -1;
                }
            }
            else
            {
                direita = meio - 1;
                descartes = esquerda - meio;
                if(descartes < 0) {
                    descartes *= -1;
                }
            }
        }

        printf("Nessa etapa foram descartados %d números.\n", descartes);
        meio = (esquerda + direita) / 2;
    }

    if (encontrado == 1)
    {
        printf("Valor encontrado.");
    }
    else
    {
        printf("Valor não encontrado.");
    }

    return 0;
}
