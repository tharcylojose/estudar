/*
 * Questao 18 - Tabela de precos formatada (largura minima 12, 2 casas decimais)
 */
#include <stdio.h>

int main() {
    printf("%12s%12.2f\n", "Lapis:", 4.88);
    printf("%12s%12.2f\n", "Borrachas:", 234.54);
    printf("%12s%12.2f\n", "Canetas:", 42.04);
    printf("%12s%12.2f\n", "Cadernos:", 8.00);
    printf("%12s%12.2f\n", "Fitas:", 13.05);

    return 0;
}
