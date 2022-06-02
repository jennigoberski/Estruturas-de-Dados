#include <stdio.h>

typedef struct
{
    char nome[41];
    float n1, n2;
} tipo_aluno;

int main()
{
    tipo_aluno aluno[3];
    float soma_medias, media_aluno, media_turma;
    int i;

    soma_medias = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Informe o nome do aluno %d: ", i + 1);
        scanf(" %40[^\n]", &aluno[i].nome);
        printf("Informe a primeira nota: ");
        scanf("%f", &aluno[i].n1);
        printf("Informe a segunda nota: ");
        scanf("%f", &aluno[i].n2);
    }
    printf("\n\nMédias dos alunos:\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n%s ", aluno[i].nome);
        media_aluno = (aluno[i].n1 + aluno[i].n2) / 2;
        printf("%.2f", media_aluno);
        soma_medias += media_aluno;
    }
    media_turma = soma_medias / 3;
    
    printf("\n\nMédia da turma: %.2f", media_turma);

    return 0;
}