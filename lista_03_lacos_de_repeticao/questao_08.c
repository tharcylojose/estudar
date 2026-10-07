/* Questao 08 - Validacao de nota com do-while */
#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite uma nota entre 0.0 e 10.0: ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: valor fora do intervalo permitido!\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota registrada com sucesso!\n");

    return 0;
}
