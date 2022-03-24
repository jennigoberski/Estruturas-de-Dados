#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 10, y, *pointer;

    pointer = &x;
    y = *pointer;

    printf("O valor de x é %d\n", x);
    printf("O valor de y é %d", y);

    printf("Endereço de x: %d\n", &x);
    printf("Endereço de y: %d\n", &y);

    return 0;
}
