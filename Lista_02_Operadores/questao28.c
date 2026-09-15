/*
 * Questao 28 - Calculo de Salario Anual com Imposto Progressivo
 * Usa o operador ternario (? :) para decidir a cobranca de imposto
 */
#include <stdio.h>

int main() {
    float horasNormais, horasExtras;
    float valorHoraNormal = 10.00, valorHoraExtra = 15.00;
    float faixaIsencao = 12000.00;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horasNormais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horasExtras);

    float salarioBruto = (horasNormais * valorHoraNormal) + (horasExtras * valorHoraExtra);

    /* operador ternario: cobra 10% apenas sobre o que exceder a faixa de isencao */
    float imposto = (salarioBruto > faixaIsencao) ? (salarioBruto - faixaIsencao) * 0.10 : 0;

    printf("Salario anual bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto progressivo a pagar: R$ %.2f\n", imposto);

    return 0;
}
