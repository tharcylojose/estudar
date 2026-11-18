/* Questão 28 - Caixa simples de mercadinho
   Forma de pagamento: 1 = À vista (10% de desconto) | 2 = Outra forma (sem desconto) */
#include <stdio.h>

/* protótipos */
float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(void) {
    float preco, subtotal, total, pago;
    int quantidade, opcao;

    printf("Preço unitário: R$ ");
    scanf("%f", &preco);
    printf("Quantidade: ");
    scanf("%d", &quantidade);
    printf("Forma de pagamento (1 = À vista | 2 = Outra): ");
    scanf("%d", &opcao);

    if (preco < 0 || quantidade <= 0 || (opcao != 1 && opcao != 2)) {
        printf("Erro: dados inválidos!\n");
        return 1;
    }

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcao);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Valor pago: R$ ");
    scanf("%f", &pago);

    if (pago < total) {
        printf("Valor insuficiente! Faltam R$ %.2f\n", total - pago);
        return 1;
    }

    printf("Troco: R$ %.2f\n", calculaTroco(total, pago));

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90f;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
