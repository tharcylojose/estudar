/* Questao 11 - Intervalo dinamico crescente/decrescente */
#include <stdio.h>

int main() {
    int a, b, i;

    printf("Digite o numero A: ");
    scanf("%d", &a);
    printf("Digite o numero B: ");
    scanf("%d", &b);

    if (a <= b) {
        for (i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
