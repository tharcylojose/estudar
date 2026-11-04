/* Questão 11 - Ordenação crescente de três inteiros (sem vetores)
   Técnica: trocas sucessivas, de modo que a <= b <= c ao final. */
#include <stdio.h>

int main(void) {
    int a, b, c, temp;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) { temp = a; a = b; b = temp; }   /* garante a <= b */
    if (b > c) { temp = b; b = c; c = temp; }   /* c vira o maior */
    if (a > b) { temp = a; a = b; b = temp; }   /* reajusta a <= b */

    printf("Ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}
