/* Questao 20 - Tabela ASCII com decimal, hexadecimal e caractere */
#include <stdio.h>

int main() {
    int codigo;

    printf("%-10s %-10s %-10s\n", "Decimal", "Hex", "Caractere");
    printf("--------------------------------\n");

    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%-10d %-10X %-10c\n", codigo, codigo, codigo);
    }

    return 0;
}
