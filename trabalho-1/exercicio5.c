#include <stdio.h>

int calculaDobro(int *pointerA, int *pointerB){
    (*pointerA) *= 2;
     (*pointerB) *= 2;
     
    return (*pointerA) + (*pointerB);
    
}

int main() {
    int a, b, *pointerA, *pointerB, soma;
    
    printf("Informe o valor de A: ");
    scanf("%d", &a);

    printf("Informe o valor de B: ");
    scanf("%d", &b);
    
    pointerA = &a;
    pointerB = &b;
    
    soma = calculaDobro(pointerA, pointerB);
    
    printf("A soma do dobro de A e B é %d", soma);
    
    return 0;
}