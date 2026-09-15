/*
 * Questao 14 - Formula de Heron para Triangulos Quaisquer
 * Compilar com: gcc questao14.c -o questao14 -lm
 */
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite os tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area do triangulo: %.2f\n", area);

    return 0;
}
