/*
 * Questao 11 - Conversor de Angulos de Graus para Radianos
 */
#include <stdio.h>

#define PI 3.141593

int main() {
    double graus, radianos;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * (PI / 180.0);

    printf("Angulo em radianos: %.4f\n", radianos);

    return 0;
}
