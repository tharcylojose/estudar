/* Questao 22 - Triangulo de Floyd */
#include <stdio.h>

int main() {
    int n, linha, coluna, numero = 1;

    printf("Digite o numero de linhas N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Informe um inteiro positivo!\n");
        return 1;
    }

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}
