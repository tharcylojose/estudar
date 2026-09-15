/*
 * Questao 12 - Operadores Unarios de Antecessor e Sucessor
 * Usa exclusivamente ++ e -- para obter antecessor e sucessor
 */
#include <stdio.h>

int main() {
    int n, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    antecessor = n;
    antecessor--; /* decrementa para obter o antecessor */

    sucessor = n;
    sucessor++;   /* incrementa para obter o sucessor */

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}
