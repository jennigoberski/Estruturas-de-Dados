//Exercicio 1:
#include <stdio.h>

int main() {
    int i,j;
    float notas[2][3], soma, media;
    
    for (i = 0; i < 2; i++){
    printf("Informe as 3 notas do aluno %d\n", i+1);
    for (j = 0; j < 3; j++){
      printf("Informe a nota %d: ", j+1);
      scanf("%f", &notas[i][j]);
      soma += notas[i][j];
    }
  }
  
  for (i = 0; i < 2; i++) {
      soma = 0;
      for(j = 0; j < 3; j++) {
          soma += notas[i][j];
      }
      
      media = soma / j;
      printf("A média do aluno %d é %.2f \n", i+1, media);
  }
    
    return 0;
}