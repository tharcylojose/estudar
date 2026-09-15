/*
 * Questao 28 - Media aritmetica simples de 3 valores inteiros (double)
 */
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    double media = (a + b + c) / 3.0;

    printf("Media: %.2f\n", media);

    return 0;
}
