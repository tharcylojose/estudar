/*
 * Questao 13 - Calculo de Areas de Figuras Planas Basicas
 */
#include <stdio.h>

int main() {
    float lado, base, altura;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    float areaQuadrado = lado * lado;

    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);
    float areaRetangulo = base * altura;

    printf("Digite a base e a altura do triangulo retangulo: ");
    scanf("%f %f", &base, &altura);
    float areaTriangulo = (base * altura) / 2.0;

    printf("Area do quadrado: %.2f\n", areaQuadrado);
    printf("Area do retangulo: %.2f\n", areaRetangulo);
    printf("Area do triangulo: %.2f\n", areaTriangulo);

    return 0;
}
