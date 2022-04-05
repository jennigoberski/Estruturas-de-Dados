#include <stdio.h>

int soma(int num)
{
    if (num != 0)
    {
        return num + soma(num - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("Informe um número positivo: ");
    scanf("%d", &num);
    printf("A soma é %d", soma(num));
    return 0;
}