/*
 * Questao 27 - Geracao de Valores Aleatorios via Resto de Divisao
 * Simula o lancamento de 3 dados (valores de 1 a 6)
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); /* semente baseada no horario atual */

    int dado1 = rand() % 6 + 1; /* rand() % 6 gera 0..5, +1 ajusta para 1..6 */
    int dado2 = rand() % 6 + 1;
    int dado3 = rand() % 6 + 1;

    printf("Dados sorteados: %d, %d, %d\n", dado1, dado2, dado3);

    return 0;
}
