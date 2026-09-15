/*
 * Questao 19 - Calculo de Salario Liquido com Desconto na Fonte
 */
#include <stdio.h>

int main() {
    int diasTrabalhados;
    float taxaDiaria = 30.00;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    float bruto = diasTrabalhados * taxaDiaria;
    float liquido = bruto - (bruto * 0.08); /* 8% de IR retido na fonte */

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}
