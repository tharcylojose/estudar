/*
 * Questao 22 - Conversao de Caixa Alta para Baixa via Tabela ASCII
 * Nao utiliza funcoes de <ctype.h>, apenas aritmetica sobre a tabela ASCII
 */
#include <stdio.h>

int main() {
    char letraMaiuscula, letraMinuscula;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letraMaiuscula);

    letraMinuscula = letraMaiuscula - 'A' + 'a'; /* offset de 32 posicoes na tabela ASCII */

    printf("Letra minuscula correspondente: %c\n", letraMinuscula);

    return 0;
}
