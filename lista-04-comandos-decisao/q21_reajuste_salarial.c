/* Questão 21 - Reajuste salarial por cargo e faixa salarial
   1 = Técnico  : 15% se salário <= 3000, senão 10%
   2 = Gerente  : 10% se salário <= 5000, senão 5%
   3 = Demais   : 8% fixo */
#include <stdio.h>

int main(void) {
    float salario, percentual, aumento;
    int cargo;

    printf("Salário atual: R$ ");
    scanf("%f", &salario);
    printf("Código do cargo (1 = Técnico | 2 = Gerente | 3 = Demais): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            percentual = (salario <= 3000.0f) ? 15.0f : 10.0f;
            break;
        case 2:
            percentual = (salario <= 5000.0f) ? 10.0f : 5.0f;
            break;
        case 3:
            percentual = 8.0f;
            break;
        default:
            printf("Erro: código de cargo inválido!\n");
            return 1;
    }

    aumento = salario * percentual / 100.0f;

    printf("Percentual de aumento: %.0f%%\n", percentual);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", salario + aumento);

    return 0;
}
