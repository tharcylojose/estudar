/* Questão 26 - Sequência de Fibonacci recursiva */
#include <stdio.h>

long fibonacci(int n);   /* protótipo */

int main(void) {
    int qtd, i;

    printf("Quantos termos da sequência deseja ver? ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Erro: a quantidade deve ser positiva!\n");
        return 1;
    }

    for (i = 0; i < qtd; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

/* Por que fica lenta: cada chamada gera DUAS novas chamadas, e os mesmos
   subproblemas são recalculados várias vezes (fibonacci(2), por exemplo, é
   recalculado inúmeras vezes ao calcular fibonacci(30)). O número de chamadas
   cresce de forma exponencial (aprox. 2^n), enquanto uma versão iterativa
   (ou com memorização) faz apenas n passos. */
long fibonacci(int n) {
    if (n == 0) return 0;          /* casos base */
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
