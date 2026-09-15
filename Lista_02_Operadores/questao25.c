/*
 * Questao 25 - Salario Liquido com Gratificacao e Tributacao
 */
#include <stdio.h>

int main() {
    float salarioBase;

    printf("Digite o salario-base: ");
    scanf("%f", &salarioBase);

    float gratificacao = salarioBase * 0.05; /* 5% de gratificacao */
    float imposto = salarioBase * 0.07;      /* 7% de imposto retido */
    float salarioLiquido = salarioBase + gratificacao - imposto;

    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
