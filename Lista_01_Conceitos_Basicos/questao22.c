/*
 * Questao 22 - Arte ASCII de um carro usando caracteres de bloco (Codepage 437)
 * \xDB = bloco cheio | \xDC = meio bloco inferior | \xDF = meio bloco superior
 */
#include <stdio.h>

int main() {
    printf("  \xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC\n");
    printf(" \xDF O \xDF\xDF\xDF\xDF\xDF O \xDF\n");
    printf("  \xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDF O \xDF\xDF\xDF\xDF\xDF O O \xDF\n");

    return 0;
}
