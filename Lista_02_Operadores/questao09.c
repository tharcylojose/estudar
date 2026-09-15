/*
 * Questao 09 - Operacoes Aritmeticas Basicas e Cast de Tipos
 */
#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    double divisaoReal = (double) a / b; /* cast evita divisao inteira */

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisaoReal);

    /* Para evitar divisao por zero, bastaria verificar "if (b != 0)"
       antes de realizar a divisao real. */

    return 0;
}
