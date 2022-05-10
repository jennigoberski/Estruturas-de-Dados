#include <stdio.h>

typedef struct
{
    char nome[41];
    float n1, n2;
} tipo_aluno;

int main()
{
    tipo_aluno aluno;
    float media;

    printf("Informe o nome do aluno: ");
    scanf(" %40[^\n]", &aluno.nome);

    printf("Informe a primeira nota: ");
    scanf("%f", &aluno.n1);

    printf("Informe a segunda nota: ");
    scanf("%f", &aluno.n2);

    media = (aluno.n1 + aluno.n2) / 2;
    
    printf("Media do aluno %s: %.2f", aluno.nome, media);

    return 0;
}