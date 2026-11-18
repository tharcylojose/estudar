/* Questão 10 - Área da esfera com #define */
#include <stdio.h>

#define PI 3.14159f

float area(float r);   /* protótipo */

int main(void) {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    if (raio < 0) {
        printf("Erro: o raio não pode ser negativo!\n");
        return 1;
    }

    printf("Área da esfera de raio %.2f = %.2f\n", raio, area(raio));

    return 0;
}

float area(float r) {
    return 4 * PI * r * r;
}
