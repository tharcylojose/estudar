/*
 * Questao 16 - Quantidade de Degraus em uma Escada de Obra
 */
#include <stdio.h>

int main() {
    float alturaDegrauCm, alturaTotalMetros;

    printf("Digite a altura de cada degrau (cm): ");
    scanf("%f", &alturaDegrauCm);

    printf("Digite a altura total a alcancar (m): ");
    scanf("%f", &alturaTotalMetros);

    float alturaTotalCm = alturaTotalMetros * 100.0; /* metros -> centimetros */
    int degraus = (int)(alturaTotalCm / alturaDegrauCm + 0.999999); /* arredonda para cima */

    printf("Numero minimo de degraus: %d\n", degraus);

    return 0;
}
