#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *arq;
    char texto[21];

    arq = fopen("exemplo1.txt", "r");

    if (arq != NULL)
    {
        fscanf(arq, "%s", texto);
        fclose(arq);
        printf("O texto copiado é: %s", texto);
    }
    else
    {
        printf("Erro na leitura do arquivo.");
    }

    return 0;
}