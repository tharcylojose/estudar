/* Questão 13 - Calculadora aritmética e científica com menu (switch) */
#include <stdio.h>
#include <math.h>

int main(void) {
    char op;
    double a, b;

    printf("=== CALCULADORA ===\n");
    printf("+  Soma\n");
    printf("-  Subtração\n");
    printf("*  Multiplicação\n");
    printf("/  Divisão\n");
    printf("^  Potenciação\n");
    printf("Escolha a operação: ");
    scanf(" %c", &op);          /* o espaço antes de %c ignora o '\n' pendente */

    printf("Digite o primeiro operando: ");
    scanf("%lf", &a);
    printf("Digite o segundo operando: ");
    scanf("%lf", &b);

    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Erro: divisão por zero!\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        case '^':
            printf("%.2f ^ %.2f = %.2f\n", a, b, pow(a, b));
            break;
        default:
            printf("Erro: operação inválida!\n");
    }

    return 0;
}
