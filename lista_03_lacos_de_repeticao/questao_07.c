/* Questao 07 - Contagem progressiva em tres versoes (for, while, do-while) */
#include <stdio.h>

int main() {
    int i;

    printf("=== Versao com FOR ===\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("=== Versao com WHILE ===\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    printf("=== Versao com DO-WHILE ===\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");

    return 0;
}

/*
 * A estrutura mais adequada para este caso e o FOR.
 * O numero de repeticoes (0 a 100) e conhecido antecipadamente, e o for
 * concentra inicializacao, condicao e incremento em uma unica linha,
 * deixando o controle do lado claro e evitando esquecer o incremento
 * (erro comum no while). O do-while nao se justifica aqui porque nao ha
 * necessidade de garantir pelo menos uma execucao antes do teste.
 */
