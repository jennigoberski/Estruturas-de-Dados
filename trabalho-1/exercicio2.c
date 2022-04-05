#include <stdio.h>

int main() {
    int numUser, controller=0;
    int vetor[4][4] = {
        {8,4,6,20}, 
        {1,16,12,20},
        {8,3,15,13},
        {10,7,14,9}};
        
        printf("Informe um número inteiro: ");
        scanf("%d", &numUser);
        
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++) {
                if(numUser == vetor[i][j]) {
                    printf("Seu número %d se encontra na posição [%d][%d] do vetor.\n", numUser,i,j);
                    controller +=1;
                } 
            }
        }
        if(controller == 0) {
            printf("Seu número não se encontra no vetor.");
        }
        
        return 0;
}