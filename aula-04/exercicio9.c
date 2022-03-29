#include <stdio.h>

float calculo(float n1, float n2, float n3, char op)
{
    if (op == '+')
    {
        return n1 + n2;
    }
    else if (op == '-')
    {
        return n1 - n2;
    }
    else if (op == '*')
    {
        return n1 * n2;
    }
    else
    {
        return n1 / n2;
    }
}

int main()
{
    float num1, num2, num3, resultado;
    char op;
    printf("Informe a operação desejada [+, -, * ou /]: ");
    scanf("%c", &op);
    printf("Informe o primeiro número: ");
    scanf("%f", &num1);
    printf("Informe o segundo número: ");
    scanf("%f", &num2);
    resultado = calculo(num1, num2, num3, op);
    printf("Resultado: %.1f", resultado);
    return 0;
}