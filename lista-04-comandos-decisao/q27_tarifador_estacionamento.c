/* Questão 27 - Tarifador de estacionamento com faixas progressivas
   1ª e 2ª hora: R$ 2,00/h | 3ª e 4ª hora: R$ 2,50/h | 5ª hora em diante: R$ 3,00/h */
#include <stdio.h>

int main(void) {
    int horas;
    float valor;

    printf("Número de horas inteiras de permanência: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: a permanência deve ser de pelo menos 1 hora!\n");
        return 1;
    }

    if (horas <= 2) {
        valor = horas * 2.00f;
    } else if (horas <= 4) {
        valor = 2 * 2.00f + (horas - 2) * 2.50f;
    } else {
        valor = 2 * 2.00f + 2 * 2.50f + (horas - 4) * 3.00f;
    }

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor do ticket: R$ %.2f\n", valor);

    return 0;
}
