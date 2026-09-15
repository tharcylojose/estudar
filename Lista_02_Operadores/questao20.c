/*
 * Questao 20 - Teorema de Pitagoras e a Hipotenusa
 * Compilar com: gcc questao20.c -o questao20 -lm
 */
#include <stdio.h>
#include <math.h>

int main() {
    double ladoA, ladoB, hipotenusa;

    printf("Digite o valor do cateto lado_a: ");
    scanf("%lf", &ladoA);
    printf("Digite o valor do cateto lado_b: ");
    scanf("%lf", &ladoB);

    hipotenusa = sqrt(pow(ladoA, 2) + pow(ladoB, 2));

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
