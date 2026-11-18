/* Questão 21 - Macros utilitárias (com parênteses de proteção) */
#include <stdio.h>

#define SQR(x)    ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(void) {
    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Quadrado de %d = %d\n", a, SQR(a));
    printf("Quadrado de %d = %d\n", b, SQR(b));
    printf("Maior: %d\n", MAX(a, b));
    printf("Menor: %d\n", MIN(a, b));

    return 0;
}
