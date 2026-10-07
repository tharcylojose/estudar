/* Questao 27 - Simulador de caixa eletronico (decomposicao de cedulas) */
#include <stdio.h>

int main() {
    int valor, resto;
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int quantidade;
    int i;

    printf("Digite o valor do saque (em reais, inteiro positivo): ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido!\n");
        return 1;
    }

    resto = valor;

    printf("\n=== Decomposicao do saque de R$ %d ===\n", valor);
    for (i = 0; i < 6; i++) {
        quantidade = resto / cedulas[i];
        resto = resto % cedulas[i];

        if (quantidade > 0) {
            printf("Cedulas de R$ %d: %d\n", cedulas[i], quantidade);
        }
    }

    if (resto > 0) {
        printf("\nAviso: restaram R$ %d que nao podem ser sacados com essas cedulas.\n", resto);
    }

    return 0;
}
