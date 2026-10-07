/* Questao 18 - Inversao de digitos de um numero inteiro */
#include <stdio.h>

int main() {
    int numero, resto, invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, digite um numero positivo.\n");
        return 1;
    }

    while (numero > 0) {
        resto = numero % 10;
        invertido = invertido * 10 + resto;
        numero = numero / 10;
    }

    printf("Numero com digitos invertidos: %d\n", invertido);

    return 0;
}
