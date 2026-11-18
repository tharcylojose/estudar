/* Questão 18 - Potência com recursão (sem usar pow()) */
#include <stdio.h>

long potencia(int base, int expoente);   /* protótipo */

int main(void) {
    int base, expoente;

    printf("Digite a base e o expoente (inteiro não negativo): ");
    scanf("%d %d", &base, &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente não pode ser negativo!\n");
        return 1;
    }

    printf("%d ^ %d = %ld\n", base, expoente, potencia(base, expoente));

    return 0;
}

long potencia(int base, int expoente) {
    if (expoente == 0) {                              /* CASO BASE: x^0 = 1 */
        return 1;
    }
    return (long)base * potencia(base, expoente - 1); /* PASSO RECURSIVO: x^n = x * x^(n-1) */
}
