#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 10, *xPointer;
    float f = 2.5, *fPointer;
    char c = 'c', *cPointer;

    xPointer = &x;
    fPointer = &f;
    cPointer = &c;

    printf("Valores iniciais: %d, %.2f e %c \n", x , f, c);

    *xPointer = 5;
    *fPointer = 4.5;
    *cPointer = 'b';

    printf("Valores finais:%d, %.2f e %c", x , f, c);

    return 0;
}
