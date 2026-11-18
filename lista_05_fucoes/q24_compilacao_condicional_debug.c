/* Questão 24 - Compilação condicional para depuração

   Como compilar duas vezes:
     a) SEM depuração:  gcc q24_compilacao_condicional_debug.c -o q24
        -> imprime apenas o resultado final.
     b) COM depuração:  gcc -DDEBUG q24_compilacao_condicional_debug.c -o q24_debug
        (equivale a descomentar a linha "#define DEBUG" logo abaixo)
        -> imprime também a soma parcial a cada iteração do laço.

   Diferença: com DEBUG definido, o pré-processador mantém o printf de
   depuração dentro do laço; sem DEBUG, esse trecho é descartado antes da
   compilação e não existe no executável. */
#include <stdio.h>

/* #define DEBUG */

int somaAteN(int n);   /* protótipo */

int main(void) {
    int n;

    printf("Digite um inteiro positivo n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: n deve ser positivo!\n");
        return 1;
    }

    printf("Soma de 1 até %d = %d\n", n, somaAteN(n));

    return 0;
}

int somaAteN(int n) {
    int soma = 0, i;

    for (i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}
