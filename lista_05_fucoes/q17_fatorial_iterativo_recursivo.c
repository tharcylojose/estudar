/* Questão 17 - Fatorial iterativo e recursivo
   Obs.: em sistemas onde long tem 32 bits (ex.: Windows), o resultado só é
   correto até 12!; em Linux/macOS de 64 bits, até 20!. */
#include <stdio.h>

/* protótipos */
long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int n;
    long fi, fr;

    printf("Digite um inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: o número não pode ser negativo!\n");
        return 1;
    }

    fi = fatorialIterativo(n);
    fr = fatorialRecursivo(n);

    printf("Fatorial iterativo  de %d = %ld\n", n, fi);
    printf("Fatorial recursivo  de %d = %ld\n", n, fr);

    if (fi == fr) {
        printf("Os resultados COINCIDEM.\n");
    } else {
        printf("Os resultados são DIFERENTES.\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;

    for (i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0) {                         /* caso base */
        return 1;
    }
    return (long)n * fatorialRecursivo(n - 1);
}
