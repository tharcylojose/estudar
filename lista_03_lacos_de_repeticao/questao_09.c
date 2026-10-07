/* Questao 09 - Acumulador com sentinela de parada negativa */
#include <stdio.h>

int main() {
    float valor, soma = 0.0;
    int quantidade = 0;

    printf("Digite valores reais positivos (digite um valor negativo para parar):\n");

    while (1) {
        printf("Valor: ");
        scanf("%f", &valor);

        if (valor < 0) {
            break;
        }

        soma += valor;
        quantidade++;
    }

    printf("\nQuantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0) {
        printf("Media aritmetica: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhum valor valido foi digitado, nao e possivel calcular a media.\n");
    }

    return 0;
}
