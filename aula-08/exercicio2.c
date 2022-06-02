#include <stdio.h>

int main()
{
    int valor, encontrado = 0, vetor[10] = {3, 25, 43, 4, 52, 26, 33, 52, 47, 21};

    printf("Informe o valor a ser procurado: ");
    scanf("%d", &valor);

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] == valor)
        {
            encontrado = 1;
            printf("Valor encontrado no índice %d.\n", i);
            
        }
    }

    if (encontrado != 1)
    {
       printf("Valor não encontrado."); 
    }

    return 0;
}