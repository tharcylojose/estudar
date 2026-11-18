/* Questão 13 - Calculadora com quatro operações (uma função por operação) */
#include <stdio.h>

/* protótipos */
float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
    int opcao;
    float a, b;

    printf("===== CALCULADORA =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Escolha a operação: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Erro: opção inválida!\n");
        return 1;
    }

    printf("Digite os dois operandos: ");
    scanf("%f %f", &a, &b);

    switch (opcao) {
        case 1: printf("%.2f + %.2f = %.2f\n", a, b, soma(a, b));       break;
        case 2: printf("%.2f - %.2f = %.2f\n", a, b, subtrai(a, b));    break;
        case 3: printf("%.2f * %.2f = %.2f\n", a, b, multiplica(a, b)); break;
        case 4:
            if (b == 0) {                        /* valida ANTES de chamar a função */
                printf("Erro: divisão por zero!\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, divide(a, b));
            }
            break;
    }

    return 0;
}

float soma(float a, float b)       { return a + b; }
float subtrai(float a, float b)    { return a - b; }
float multiplica(float a, float b) { return a * b; }
float divide(float a, float b)     { return a / b; }
