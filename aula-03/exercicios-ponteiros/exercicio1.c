#include <stdio.h>

int main() {
    int *pointer;
    int x = 200;

    pointer = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %d\n", &x);
    printf("Endereço para onde o pointer aponta: %d\n", pointer);
    printf("Valor so endereço que pointer aponta: %d", *pointer);

    return 0;
}