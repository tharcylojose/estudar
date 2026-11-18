/* Questão 07 - Soma de dois inteiros com função */
#include <stdio.h>

int soma(int a, int b);   /* protótipo */

int main(void) {
    int x, y;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);

    printf("Soma: %d + %d = %d\n", x, y, soma(x, y));

    return 0;
}

int soma(int a, int b) {
    return a + b;
}
