/* Questão 24 - Classificação de triângulos quanto aos ângulos internos */
#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite os três ângulos internos (em graus): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
        printf("Erro: os ângulos não formam um triângulo válido (soma deve ser 180°)!\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triângulo RETÂNGULO.\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triângulo OBTUSÂNGULO.\n");
    } else {
        printf("Triângulo ACUTÂNGULO.\n");
    }

    return 0;
}
