#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *arq;
    int soma, num;

    soma = 0;

    arq = fopen("exemplo2.txt", "r");

    if (arq != NULL)
    {
        while (fscanf(arq, "%d", &num) != EOF)
        {
            soma += num;
        }
        fclose(arq);

        printf("A soma é: %d", soma);
    }
    else
    {
        printf("Erro na leitura do arquivo.");
    }

    return 0;
}