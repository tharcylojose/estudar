/* Questão 15 - Média ponderada (pesos 2, 3 e 5) e situação */
#include <stdio.h>

/* protótipos */
float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main(void) {
    float n1, n2, n3, media;

    printf("Digite as três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = mediaPonderada(n1, n2, n3);
    printf("Média ponderada: %.2f\n", media);
    exibeSituacao(media);

    return 0;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2 + n2 * 3 + n3 * 5) / 10.0f;
}

void exibeSituacao(float media) {
    if (media >= 5.0f) {
        printf("Situação: Aprovado\n");
    } else if (media >= 3.0f) {
        printf("Situação: Em Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }
}
