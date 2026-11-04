/* Questão 28 - Sistema de atendimento automático bancário (URA) */
#include <stdio.h>

int main(void) {
    int opcao;

    printf("=== URA - ATENDIMENTO BANCÁRIO ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Direcionando para a CONSULTA DE SALDO...\n");
            break;
        case 2:
            printf("Direcionando para a emissão de EXTRATO...\n");
            break;
        case 3:
            printf("Direcionando para a TRANSFERÊNCIA...\n");
            break;
        case 4:
            printf("Aguarde, transferindo para um ATENDENTE...\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
