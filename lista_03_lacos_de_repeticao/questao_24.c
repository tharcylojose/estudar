/* Questao 24 - Padrao visual em X (diagonais cruzadas) */
#include <stdio.h>

int main() {
    int n, linha, coluna;

    printf("Digite uma dimensao impar N (3 a 19): ");
    scanf("%d", &n);

    if (n < 3 || n > 19 || n % 2 == 0) {
        printf("Valor invalido! Informe um numero impar entre 3 e 19.\n");
        return 1;
    }

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= n; coluna++) {
            if (coluna == linha || coluna == (n - linha + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
