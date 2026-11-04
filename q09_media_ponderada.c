/* Questão 09 - Média ponderada e situação acadêmica
   Pesos: Laboratório = 2, Avaliação Semestral = 3, Exame Final = 5 */
#include <stdio.h>

int main(void) {
    float lab, semestral, exame, media;

    printf("Nota do Trabalho de Laboratório (peso 2): ");
    scanf("%f", &lab);
    printf("Nota da Avaliação Semestral (peso 3): ");
    scanf("%f", &semestral);
    printf("Nota do Exame Final (peso 5): ");
    scanf("%f", &exame);

    media = (lab * 2 + semestral * 3 + exame * 5) / 10.0f;

    printf("Média ponderada: %.2f\n", media);

    if (media < 3.0f) {
        printf("Situação: Reprovado\n");
    } else if (media < 5.0f) {
        printf("Situação: Em Recuperação\n");
    } else {
        printf("Situação: Aprovado\n");
    }

    return 0;
}
