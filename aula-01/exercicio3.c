#include <stdio.h>

int main()
{
    int dias_mes[12][2] = {{1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};
    char nome_mes[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril",
                             "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro",
                             "Dezembro"};
    int num_mes;

    printf("Informe o número do mês: ");
    scanf("%d", &num_mes);
    
    printf("O mês de %s possui %d dias.", nome_mes[num_mes - 1],
           dias_mes[num_mes - 1][1]);

    return 0;
}