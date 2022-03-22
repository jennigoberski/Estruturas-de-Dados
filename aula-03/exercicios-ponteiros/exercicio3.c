#include <stdio.h>

int main()
{
    int x = 200, *p;

    p = &x;

    printf("Valor de x: %d\n", x);
    printf("Valor de p: %d\n", *p);

    (*p) += 5;

    printf("Novo valor de x: %d\n", x);
    printf("Novo valor de p: %d\n", *p);

    return 0;
}