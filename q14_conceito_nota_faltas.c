/* Questão 14 - Conceito por nota e número de faltas */
#include <stdio.h>

int main(void) {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota final (0.0 a 10.0): ");
    scanf("%f", &nota);
    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);

    if (nota < 0.0f || nota > 10.0f || faltas < 0) {
        printf("Erro: dados inválidos!\n");
        return 1;
    }

    if (nota >= 9.0f) {
        conceito = (faltas <= 20) ? 'A' : 'B';
    } else if (nota >= 7.5f) {
        conceito = (faltas <= 20) ? 'B' : 'C';
    } else if (nota >= 5.0f) {
        conceito = (faltas <= 20) ? 'C' : 'D';
    } else if (nota >= 4.0f) {
        conceito = (faltas <= 20) ? 'D' : 'E';
    } else {
        conceito = 'E';                  /* 0.0 a 3.9: qualquer quantidade de faltas */
    }

    printf("Conceito: %c\n", conceito);

    return 0;
}
