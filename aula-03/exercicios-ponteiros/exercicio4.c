#include <stdio.h>

int main()
{
    int vet[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *pointer;

    pointer = vet;
    pointer += 9;

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *pointer);
        pointer--;
    }

    return 0;
}
