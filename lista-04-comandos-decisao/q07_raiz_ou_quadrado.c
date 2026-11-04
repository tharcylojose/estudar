/* Questão 07 - Raiz quadrada ou quadrado de um número real */
#include <stdio.h>
#include <math.h>

int main(void) {
    double x;

    printf("Digite um número real: ");
    scanf("%lf", &x);

    if (x >= 0) {
        printf("Raiz quadrada de %.2f = %.4f\n", x, sqrt(x));
    } else {
        printf("Quadrado de %.2f = %.4f\n", x, x * x);
    }

    return 0;
}
