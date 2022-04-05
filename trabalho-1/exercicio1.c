#include <stdio.h>

int main() {
    int vetor[6] = {1, 0, 5, -2, -5, 7};
    int soma=0;
    
    soma = vetor[0] + vetor[1] + vetor[5];
    
    printf("A soma dos valores no índices 0, 1 e 5 é %d\n", soma);
    
    vetor[4] = 70;
    
    for(int i=0; i<6; i++) {
        printf("Valor do vetor no índice %d é %d\n", i, vetor[i]);
    }
}