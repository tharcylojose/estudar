/* Questao 14 - Sequencia de quadrados de 1 a 100 e soma total */
#include <stdio.h>

int main() {
    int i;
    long long soma = 0;

    for (i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += (long long)i * i;
    }

    printf("\nSoma total dos quadrados: %lld\n", soma);

    return 0;
}
