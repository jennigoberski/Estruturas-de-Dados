#include <stdio.h>

int soma(int num1, int num2)
{
    int soma, i;
    soma = 0;
    for (i = num1; i <= num2; i++)
    {
        soma += i;
    }
    return soma;
}

int main()
{
    int num1, num2;
    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
    if (num1 < num2)
    {
        printf("A soma é: %d", soma(num1, num2));
    }
    else
    {
        printf("A soma é: %d", soma(num2, num1));
    }
    return 0;
}