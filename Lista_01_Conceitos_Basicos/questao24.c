/*
 * Questao 24 - Tabela de notas escolares alinhada com especificadores de largura
 */
#include <stdio.h>

int main() {
    printf("%-10s%s\n", "ALUNO(A)", "NOTA");
    printf("%-10s%s\n", "=========", "=====");
    printf("%-10s%s\n", "ALINE", "9.0");
    printf("%-10s%s\n", "MARIO", "10.0");
    printf("%-10s%s\n", "SERGIO", "4.5");
    printf("%-10s%s\n", "SHIRLEY", "7.0");

    return 0;
}
