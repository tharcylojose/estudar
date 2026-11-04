/* Questão 22 - Imposto estadual sobre produtos
   1 = MG (7%) | 2 = SP (12%) | 3 = RJ (15%) | 4 = MS (8%) */
#include <stdio.h>

int main(void) {
    float valor, aliquota, precoFinal;
    int estado;

    printf("Valor do produto: R$ ");
    scanf("%f", &valor);
    printf("Estado de destino (1 = MG | 2 = SP | 3 = RJ | 4 = MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1: aliquota = 7.0f;  break;
        case 2: aliquota = 12.0f; break;
        case 3: aliquota = 15.0f; break;
        case 4: aliquota = 8.0f;  break;
        default:
            printf("Erro: código de estado inválido!\n");
            return 1;
    }

    precoFinal = valor + valor * aliquota / 100.0f;

    printf("Alíquota aplicada: %.0f%%\n", aliquota);
    printf("Preço final com imposto: R$ %.2f\n", precoFinal);

    return 0;
}
