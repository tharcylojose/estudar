/* Questão 22 - Biblioteca de áreas com arquivo de cabeçalho
   Mantenha areas.h na MESMA pasta deste arquivo.
   Compilar: gcc q22_biblioteca_areas.c -o q22 */
#include <stdio.h>
#include "areas.h"

int main(void) {
    double raio, baseRet, altRet, baseTri, altTri;

    printf("Raio do círculo: ");
    scanf("%lf", &raio);
    printf("Base e altura do retângulo: ");
    scanf("%lf %lf", &baseRet, &altRet);
    printf("Base e altura do triângulo: ");
    scanf("%lf %lf", &baseTri, &altTri);

    printf("\nÁrea do círculo   : %.2f\n", A_CIRC(raio));
    printf("Área do retângulo : %.2f\n", A_RET(baseRet, altRet));
    printf("Área do triângulo : %.2f\n", A_TRI(baseTri, altTri));

    return 0;
}
