/*
 * Questao 21 - Leitura de Caractere e Exibicao de seu Codigo ASCII
 */
#include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("Codigo ASCII de '%c': %d\n", c, c);

    /* O numero exibido representa a posicao desse caractere na tabela
       ASCII, ou seja, o valor inteiro que o computador usa internamente
       para armazenar e reconhecer aquele simbolo. */

    return 0;
}
