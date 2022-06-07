#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *arq;

    arq = fopen("exemplo2.txt", "w");

    if (arq != NULL)
    {
        for (int i = 1; i <= 10; i++)
        {
            fprintf(arq, "%d\n", i);
        }

        fclose(arq);
        
    }
    else
    {
        printf("Erro na leitura do arquivo.");
    }

    return 0;
}
