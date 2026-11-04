/* Questão 19 - Existência e tipo de triângulo (quanto aos lados) */
#include <stdio.h>

int main(void) {
    double a, b, c;

    printf("Digite os três lados do triângulo (A B C): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triângulo EQUILÁTERO.\n");
        } else if (a == b || a == c || b == c) {
            printf("Triângulo ISÓSCELES.\n");
        } else {
            printf("Triângulo ESCALENO.\n");
        }
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }

    return 0;
}
