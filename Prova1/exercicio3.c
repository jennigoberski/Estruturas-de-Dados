#include <stdio.h>
int devolveSegundos(int horas, int minutos, int segundos)
{
    int totalSegundos;

    totalSegundos = horas * 3600;
    totalSegundos += minutos * 60;
    totalSegundos += segundos;

    return totalSegundos;
}

int main()
{
    int horas, minutos, segundos, totalSegundos;

    printf("Informe as horas: ");
    scanf("%d", &horas);

    printf("Informe os minutos: ");
    scanf("%d", &minutos);

    printf("Informe os segundos: ");
    scanf("%d", &segundos);

    totalSegundos = devolveSegundos(horas, minutos, segundos);

    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, segundos);
    printf("Convertendo: %d segundos", totalSegundos);
    return 0;
}