/*
 * Questao 23 - Calculo de Horario de Termino de Experimento Biologico
 */
#include <stdio.h>

int main() {
    int horaInicio, minutoInicio, segundoInicio, duracaoSegundos;

    printf("Digite o horario de inicio (horas minutos segundos): ");
    scanf("%d %d %d", &horaInicio, &minutoInicio, &segundoInicio);

    printf("Digite a duracao do experimento (em segundos): ");
    scanf("%d", &duracaoSegundos);

    int totalSegundos = horaInicio * 3600 + minutoInicio * 60 + segundoInicio + duracaoSegundos;
    totalSegundos = totalSegundos % 86400; /* normaliza para um ciclo de 24h */

    int horaFim = totalSegundos / 3600;
    int minutoFim = (totalSegundos % 3600) / 60;
    int segundoFim = totalSegundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", horaFim, minutoFim, segundoFim);

    return 0;
}
