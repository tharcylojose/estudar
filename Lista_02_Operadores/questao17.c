/*
 * Questao 17 - Geometria do Circulo com Constantes
 */
#include <stdio.h>

#define PI 3.141593

int main() {
    float raio;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    float area = PI * raio * raio;
    float circunferencia = 2 * PI * raio;

    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);

    return 0;
}
