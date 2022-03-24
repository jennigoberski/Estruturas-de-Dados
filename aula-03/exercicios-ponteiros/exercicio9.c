#include <stdio.h>

int main()
{
    int vet[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int *p;

    p = &vet;

    for (int i = 0; i < 10; i++)
    {
        printf("Novo valor: %d\n", *p * 3);
        p++;
    }

    return 0;
}