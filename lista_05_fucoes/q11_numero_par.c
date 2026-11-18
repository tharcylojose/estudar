/* Questão 11 - Verificação de número par */
#include <stdio.h>

int ehPar(int n);   /* protótipo */

int main(void) {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (ehPar(n)) {
        printf("O número %d é PAR.\n", n);
    } else {
        printf("O número %d é ÍMPAR.\n", n);
    }

    return 0;
}

int ehPar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}
