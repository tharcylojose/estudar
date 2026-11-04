/* Questão 08 - Verificação de ano bissexto */
#include <stdio.h>

int main(void) {
    int ano;

    printf("Digite um ano (inteiro positivo): ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("Erro: o ano deve ser um inteiro positivo!\n");
    } else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d NÃO é bissexto.\n", ano);
    }

    return 0;
}
