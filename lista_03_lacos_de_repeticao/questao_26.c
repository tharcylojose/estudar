/* Questao 26 - Primos em um intervalo [A, B] e soma total */
#include <stdio.h>

int ehPrimo(int n) {
    int i, divisores = 0;

    if (n <= 1) return 0;

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }
    return (divisores == 2);
}

int main() {
    int a, b, i;
    long long soma = 0;
    int encontrouAlgum = 0;

    printf("Digite o numero A: ");
    scanf("%d", &a);
    printf("Digite o numero B (B > A): ");
    scanf("%d", &b);

    if (a >= b) {
        printf("Valor invalido! A deve ser menor que B.\n");
        return 1;
    }

    printf("Numeros primos no intervalo [%d, %d]:\n", a, b);

    for (i = a; i <= b; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
            soma += i;
            encontrouAlgum = 1;
        }
    }
    printf("\n");

    if (encontrouAlgum) {
        printf("Soma total dos primos encontrados: %lld\n", soma);
    } else {
        printf("Nenhum numero primo encontrado no intervalo.\n");
    }

    return 0;
}
