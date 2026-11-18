/* Questão 23 - Macro versus função */
#include <stdio.h>

#define DOBRO(x) x*2          /* versão SEM parênteses de proteção */

int dobro(int x);             /* protótipo */

int main(void) {
    printf("=== Macro sem parênteses x Função ===\n");
    printf("DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("dobro(2+3) = %d\n", dobro(2+3));
    /* POR QUE DIFEREM: a macro faz substituição TEXTUAL antes da compilação,
       então DOBRO(2+3) vira 2+3*2. Como * tem precedência sobre +, o cálculo
       é 2 + (3*2) = 8. Já a função recebe o argumento JÁ AVALIADO (2+3 = 5)
       e devolve 5*2 = 10. */

    /* Correção: redefinir a macro com parênteses de proteção */
#undef DOBRO
#define DOBRO(x) ((x) * 2)

    printf("\n=== Macro corrigida x Função ===\n");
    printf("DOBRO(2+3) = %d\n", DOBRO(2+3));   /* ((2+3)*2) = 10 */
    printf("dobro(2+3) = %d\n", dobro(2+3));   /* 10 */

    return 0;
}

int dobro(int x) {
    return x * 2;
}
