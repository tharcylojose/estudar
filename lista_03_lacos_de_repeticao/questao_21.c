/* Questao 21 - Jogo de adivinhacao com dicas (antes/depois) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, chute;
    int tentativas = 0;

    srand((unsigned int)time(NULL));
    secreta = rand() % 26 + 'a';

    printf("Tente adivinhar a letra secreta (a-z):\n");

    do {
        printf("Digite uma letra: ");
        scanf(" %c", &chute);
        tentativas++;

        if (chute < secreta) {
            printf("A letra secreta vem DEPOIS de '%c' no alfabeto.\n", chute);
        } else if (chute > secreta) {
            printf("A letra secreta vem ANTES de '%c' no alfabeto.\n", chute);
        }
    } while (chute != secreta);

    printf("\nParabens! Voce acertou a letra '%c' em %d tentativa(s)!\n", secreta, tentativas);

    return 0;
}
