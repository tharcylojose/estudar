#include <stdio.h>

#define VALOR_DIA      45.00
#define PERC_GRATIFIC  0.05   /* 5% sobre o bruto */
#define PERC_IR        0.08   /* 8% sobre o bruto */

int main() {
    int dias;
    double bruto, gratificacao, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    if (dias < 0) {
        printf("Numero de dias invalido!\n");
        return 1;
    }

    bruto        = dias * VALOR_DIA;
    gratificacao = bruto * PERC_GRATIFIC;
    imposto      = bruto * PERC_IR;
    liquido      = bruto + gratificacao - imposto;

    printf("\n========== HOLERITE ==========\n");
    printf("Dias trabalhados      : %d\n", dias);
    printf("Valor por dia         : R$ %.2f\n", VALOR_DIA);
    printf("------------------------------\n");
    printf("Salario bruto         : R$ %.2f\n", bruto);
    printf("(+) Gratificacao (5%%) : R$ %.2f\n", gratificacao);
    printf("(-) Imposto renda (8%%): R$ %.2f\n", imposto);
    printf("------------------------------\n");
    printf("Salario liquido       : R$ %.2f\n", liquido);
    printf("==============================\n");

    return 0;
}
