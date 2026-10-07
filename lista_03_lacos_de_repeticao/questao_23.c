/* Questao 23 - Moldura / quadrado vazado com 'X' */
#include <stdio.h>

int main() {
    int l, linha, coluna;

    printf("Digite o lado do quadrado (3 a 20): ");
    scanf("%d", &l);

    if (l < 3 || l > 20) {
        printf("Valor fora do intervalo permitido!\n");
        return 1;
    }

    for (linha = 1; linha <= l; linha++) {
        for (coluna = 1; coluna <= l; coluna++) {
            if (linha == 1 || linha == l || coluna == 1 || coluna == l) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
