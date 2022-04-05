#include <stdio.h>

int potencia(int x, int y)
{
    if (y != 0)
    {
        return x * potencia(x, y - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int x, y, result;
    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de y: ");
    scanf("%d", &y);
    printf("O resultado é %d", potencia(x, y));
    return 0;
}