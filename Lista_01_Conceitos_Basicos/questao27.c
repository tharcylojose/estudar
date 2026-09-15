/*
 * Questao 27 - Conversao de segundos para Horas, Minutos e Segundos
 */
#include <stdio.h>

int main() {
    int segundosTotais;

    printf("Digite um intervalo de tempo em segundos: ");
    scanf("%d", &segundosTotais);

    int horas = segundosTotais / 3600;
    int minutos = (segundosTotais % 3600) / 60;
    int segundos = segundosTotais % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s)\n",
           segundosTotais, horas, minutos, segundos);

    return 0;
}
