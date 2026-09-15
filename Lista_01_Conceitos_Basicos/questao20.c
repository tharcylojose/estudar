/*
 * Questao 20 - Moldura simples 4x4 usando caracteres graficos (Codepage 437)
 * Cantos: sup.esq = \xC9, sup.dir = \xBB, inf.esq = \xC8, inf.dir = \xBC
 * Linha horizontal = \xCD | Linha vertical = \xBA
 */
#include <stdio.h>

int main() {
    printf("\xC9\xCD\xCD\xBB\n");
    printf("\xBA  \xBA\n");
    printf("\xBA  \xBA\n");
    printf("\xC8\xCD\xCD\xBC\n");

    return 0;
}
