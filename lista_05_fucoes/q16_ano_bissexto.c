/* Questão 16 - Ano bissexto */
#include <stdio.h>

int ehBissexto(int ano);   /* protótipo */

int main(void) {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ehBissexto(ano)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d NÃO é bissexto.\n", ano);
    }

    return 0;
}

int ehBissexto(int ano) {
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }
    return 0;
}
