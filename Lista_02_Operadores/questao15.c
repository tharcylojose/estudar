/*
 * Questao 15 - Calculo de Media Aritmetica Simples e Ponderada
 * Pesos: nota1 e nota2 = peso 1 | nota3 e nota4 = peso 2
 */
#include <stdio.h>

int main() {
    float n1, n2, n3, n4;

    printf("Digite as 4 notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float mediaSimples = (n1 + n2 + n3 + n4) / 4.0;
    float mediaPonderada = (n1 * 1 + n2 * 1 + n3 * 2 + n4 * 2) / (1 + 1 + 2 + 2);

    printf("Media aritmetica simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    return 0;
}
