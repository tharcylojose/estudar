/* Questao 10 - 100 primeiros multiplos de 3, 10 por linha */
#include <stdio.h>

int main() {
    int i, multiplo;

    for (i = 1; i <= 100; i++) {
        multiplo = i * 3;
        printf("%d\t", multiplo);

        if (i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
