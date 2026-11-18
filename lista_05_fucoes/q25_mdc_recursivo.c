/* Questão 25 - MDC com recursão (algoritmo de Euclides) e fração simplificada */
#include <stdio.h>

/* protótipos */
int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
    int a, b;

    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Erro: os números devem ser positivos!\n");
        return 1;
    }

    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    simplifica(a, b);   /* trata a e b como numerador e denominador */

    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {                 /* caso base: mdc(a, 0) = a */
        return a;
    }
    return mdc(b, a % b);         /* passo recursivo: mdc(a, b) = mdc(b, a mod b) */
}

void simplifica(int num, int den) {
    int d = mdc(num, den);

    printf("Fração original    : %d/%d\n", num, den);
    printf("Fração simplificada: %d/%d\n", num / d, den / d);
}
