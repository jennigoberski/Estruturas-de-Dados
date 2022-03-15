//Exercicio 2 
#include <stdio.h>

int main() {
    int i, j, mes;
   int num_mes[12][2] = {
       {1,31}, {2,28}, {3,31}, {4,30},
       {5,31}, {6,30}, {7,31}, {8,31},
       {9,30}, {10,31}, {11,30}, {12,31}
   };
   char nome_mes[12][10] = {
       "Janeiro", "Fevereiro", "Março", "Abril",
       "Maio", "Junho", "Julho", "Agosto",
       "Setembro", "Outubro", "Novembro", "Dezembro"
   };
   
   printf("Informe o número correspondente ao mês desejado: ");
   scanf("%d", &mes);
   
   if (mes > 0 && mes <= 12) {
   for(i=0;i<12;i++) {
        if (num_mes[i][j] == mes) {
            printf("O mês de %s possui %d dias.", nome_mes[i], num_mes[i][1]);
       }
    }
   } else {
       printf("Número inválido");
   }
   
    return 0;
}