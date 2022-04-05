#include <stdio.h>

int maior(int num1, int num2, int num3)
{
    int maior;
    maior = num1;
    if (num2 > maior)
    {
        maior = num2;
    }
    if (num3 > maior)
    {
        maior = num3;
    }
    return maior;
}

int main()
{
    int num1, num2, num3;
    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
    printf("Informe o terceiro número: ");
    scanf("%d", &num3);
    printf("O maior número é: %d", maior(num1, num2, num3));
    return 0;
}