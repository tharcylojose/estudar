/* Questao 16 - Autenticacao de senha com limite de 3 tentativas */
#include <stdio.h>

#define SENHA_SECRETA 2026
#define MAX_TENTATIVAS 3

int main() {
    int tentativa, i;
    int acertou = 0;

    for (i = 1; i <= MAX_TENTATIVAS; i++) {
        printf("Tentativa %d de %d - Digite a senha: ", i, MAX_TENTATIVAS);
        scanf("%d", &tentativa);

        if (tentativa == SENHA_SECRETA) {
            acertou = 1;
            break;
        }
        printf("Senha incorreta!\n");
    }

    if (acertou) {
        printf("Acesso Concedido! Tentativas utilizadas: %d\n", i);
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}
