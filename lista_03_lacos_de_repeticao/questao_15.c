/* Questao 15 - Multiplos de 3 e 5 ao mesmo tempo ate NUM */
#include <stdio.h>

int main() {
    int num, i;
    int encontrou = 0;

    printf("Digite o numero limite NUM: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero no intervalo e multiplo de 3 e de 5 ao mesmo tempo.");
    }
    printf("\n");

    return 0;
}
