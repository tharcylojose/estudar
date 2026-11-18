/* Questão 14 - Soma dos dígitos com recursão */
#include <stdio.h>

int somaDigitos(int n);   /* protótipo */

int main(void) {
    int n;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o número deve ser positivo!\n");
        return 1;
    }

    printf("Soma dos dígitos de %d = %d\n", n, somaDigitos(n));

    return 0;
}

int somaDigitos(int n) {
    if (n < 10) {                         /* CASO BASE: um único dígito */
        return n;
    }
    return (n % 10) + somaDigitos(n / 10); /* PASSO RECURSIVO: último dígito + soma do restante */
}
