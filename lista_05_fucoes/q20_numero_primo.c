/* Questão 20 - Número primo */
#include <stdio.h>

int ehPrimo(int n);   /* protótipo */

int main(void) {
    int n, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (ehPrimo(n)) {
        printf("%d é PRIMO.\n", n);
    } else {
        printf("%d NÃO é primo.\n", n);
    }

    printf("\nPrimos de 1 até 50:\n");
    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

int ehPrimo(int n) {
    int i;

    if (n < 2) {              /* 0, 1 e negativos não são primos */
        return 0;
    }
    for (i = 2; i * i <= n; i++) {   /* basta testar divisores até a raiz de n */
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
