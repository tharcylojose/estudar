/* Questão 17 - Pagamento e comissão de vendas
   1 = À vista (10% de desconto, comissão de 5% sobre o valor com desconto)
   2 = Parcelado em 3x sem juros (comissão de 5% sobre o valor total) */
#include <stdio.h>

int main(void) {
    float total, valorFinal, comissao;
    int opcao;

    printf("Valor total da compra: R$ ");
    scanf("%f", &total);
    printf("Forma de pagamento (1 = À vista | 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valorFinal = total * 0.90f;
        comissao = valorFinal * 0.05f;
        printf("Valor final à vista (com 10%% de desconto): R$ %.2f\n", valorFinal);
        printf("Comissão do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        comissao = total * 0.05f;
        printf("Valor de cada parcela (3x sem juros): R$ %.2f\n", total / 3.0f);
        printf("Comissão do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("Erro: opção de pagamento inválida!\n");
    }

    return 0;
}
