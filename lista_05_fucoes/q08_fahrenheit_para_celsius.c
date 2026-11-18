/* Questão 08 - Conversor de Fahrenheit para Celsius */
#include <stdio.h>

float celsius(float fahr);   /* protótipo */

int main(void) {
    float f;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    printf("%.2f °F = %.2f °C\n", f, celsius(f));

    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0f) * 5.0f / 9.0f;
}
