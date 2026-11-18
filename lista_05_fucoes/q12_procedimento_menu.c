/* Questão 12 - Procedimento de menu */
#include <stdio.h>

void exibeMenu(void);   /* protótipo */

int main(void) {
    int opcao;

    exibeMenu();
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: printf("Você escolheu: Cadastrar\n"); break;
        case 2: printf("Você escolheu: Listar\n");    break;
        case 3: printf("Você escolheu: Remover\n");   break;
        case 0: printf("Saindo do programa...\n");    break;
        default: printf("Opção inválida!\n");
    }

    return 0;
}

void exibeMenu(void) {
    printf("===== MENU =====\n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
}
