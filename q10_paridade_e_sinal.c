/* Questão 10 - Paridade e sinal de um inteiro */
#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    /* a) Par ou ímpar (n % 2 também funciona para negativos: -3 % 2 == -1) */
    if (n % 2 == 0) {
        printf("O número %d é PAR.\n", n);
    } else {
        printf("O número %d é ÍMPAR.\n", n);
    }

    /* b) Positivo, negativo ou zero */
    if (n > 0) {
        printf("O número %d é POSITIVO.\n", n);
    } else if (n < 0) {
        printf("O número %d é NEGATIVO.\n", n);
    } else {
        printf("O número é ZERO.\n");
    }

    return 0;
}
