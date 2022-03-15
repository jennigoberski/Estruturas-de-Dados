#include <stdio.h>

typedef struct {
    char nome[41];
    float n1, n2;
} tipo_aluno;

int main() {
    int i;
    float mediaAluno, mediaTurma;
    float somaTurma = 0;
    tipo_aluno aluno[3] = {
        {"João", 10, 8},
        {"José", 6, 5},
        {"Rodolfo", 3, 7}
    };
    
    for (i=0; i<3; i++) {
        mediaAluno = (aluno[i].n1 + aluno[i].n2) / 2;
        printf("Media do aluno %s: %.2f \n", aluno[i].nome, mediaAluno);
        somaTurma += mediaAluno;
     };
     
     mediaTurma = somaTurma / 3;
     
     printf("A média da turma é %.2f", mediaTurma);
    
    return 0;
}