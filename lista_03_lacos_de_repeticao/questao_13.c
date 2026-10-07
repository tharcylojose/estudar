/* Questao 13 - Fatorial com long long int e tratamento de casos especiais */
#include <stdio.h>

int main() {
    int n, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: fatorial nao definido para numeros negativos.\n");
        return 1;
    }

    for (i = 2; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", n, fatorial);

    return 0;
}
