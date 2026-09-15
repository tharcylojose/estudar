/*
 * Questao 07 - Leitura e Inversao Formatada de Datas
 * Le uma data no formato dd/mm/aaaa e exibe invertida (aaaa/mm/dd)
 */
#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Data invertida: %04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}
