#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vet[5] = {1,2,3,4,5};
    int *pointer;

    pointer = &vet[0];

    for (int i = 0; i < 5; i++)
    {
        if (vet[i] > vet[i-1]) {
            *pointer = vet[i];
        }
    }
    printf("O maior número foi %d", *pointer);
    return 0;
}
