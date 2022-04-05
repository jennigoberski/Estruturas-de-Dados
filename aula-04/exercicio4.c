#include <stdio.h>

int absoluto(int num)
{
    if (num >= 0)
    {
        return num;
    }
    else
    {
        return num * -1;
    }
}

int main()
{
    int num;
    printf("Informe o número: ");
    scanf("%d", &num);
    printf("O valor absoluto é: %d", absoluto(num));
    return 0;
}