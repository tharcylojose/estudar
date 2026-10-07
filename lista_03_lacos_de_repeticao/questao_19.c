/* Questao 19 - N-esimo termo da sequencia de Fibonacci */
#include <stdio.h>

int main() {
    int n, i;
    long long anterior = 1, atual = 1, proximo;

    printf("Digite o numero do termo desejado (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Informe um numero de termo valido (N >= 1).\n");
        return 1;
    }

    if (n == 1) {
        printf("Termo 1: 1\n");
        return 0;
    }

    printf("Termo 1: %lld\n", anterior);
    printf("Termo 2: %lld\n", atual);

    for (i = 3; i <= n; i++) {
        proximo = anterior + atual;
        printf("Termo %d: %lld\n", i, proximo);
        anterior = atual;
        atual = proximo;
    }

    printf("\nO %d-esimo termo da sequencia de Fibonacci e: %lld\n", n, atual);

    return 0;
}
