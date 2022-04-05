#include <stdio.h>

float media(float nota1, float nota2, float nota3, char op)
{
    if (op == 'A')
    {
        return ((nota1 + nota2 + nota3) / 3);
    }
    else
    {
        return ((nota1 * 5 + nota2 * 3 + nota3 * 2) / 10);
    }
}

int main()
{
    float nota1, nota2, nota3, resultado;
    char op;
    printf("Informe o cálculo desejado [A ou P]: ");
    scanf("%c", &op);
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    resultado = media(nota1, nota2, nota3, op);
    printf("Media: %.1f", resultado);
    return 0;
}