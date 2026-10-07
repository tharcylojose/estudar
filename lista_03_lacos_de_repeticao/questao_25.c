/* Questao 25 - Teste de primalidade */
#include <stdio.h>

int main() {
    int n, i;
    int contadorDivisores = 0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d nao e primo (precisa ser maior que 1).\n", n);
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            contadorDivisores++;
        }
    }

    if (contadorDivisores == 2) {
        printf("%d e um numero PRIMO.\n", n);
    } else {
        printf("%d NAO e primo (possui %d divisores).\n", n, contadorDivisores);
    }

    return 0;
}
