/* Questão 09 - Maior de dois números */
#include <stdio.h>

int maior(int a, int b);   /* protótipo */

int main(void) {
    int x, y;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);

    printf("O maior entre %d e %d é %d\n", x, y, maior(x, y));

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}
