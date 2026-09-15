/*
 * Questao 08 - Potencias e Divisao com Ponto Flutuante
 */
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int quadrado = numero * numero;
    double decimaParte = numero / 10.0; /* divisao com double evita truncamento */

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decimaParte);

    return 0;
}
