#include <stdio.h>

int main() {
    int n, i;
    long long int fatorial = 1;   /* 0! = 1 e 1! = 1 ja ficam corretos */

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Entrada invalida! Fatorial nao e definido para numeros negativos.\n");
        return 1;
    }

    if (n > 20) {
        /* 21! ja excede o limite do long long (~9,22 x 10^18) */
        printf("N muito grande! O maior fatorial que cabe em long long e 20!.\n");
        return 1;
    }

    for (i = 2; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", n, fatorial);

    return 0;
}
