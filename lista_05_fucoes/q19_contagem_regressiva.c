/* Questão 19 - Contagem regressiva e progressiva recursivas */
#include <stdio.h>

/* protótipos */
void contagem(int n);            /* de n até 1 e "Fogo!" */
void contagemCrescente(int n);   /* de 1 até n */

int main(void) {
    int n;

    printf("Digite um número positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o número deve ser positivo!\n");
        return 1;
    }

    printf("\n--- Contagem regressiva ---\n");
    contagem(n);

    printf("\n--- Contagem crescente ---\n");
    contagemCrescente(n);

    return 0;
}

void contagem(int n) {
    if (n == 0) {                /* caso base: encerra e dispara a mensagem final */
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);           /* imprime ANTES da chamada recursiva */
    contagem(n - 1);
}

/* DIFERENÇA: aqui a chamada recursiva vem ANTES do printf.
   Assim, a função desce até n == 0 sem imprimir nada; só na volta
   (desempilhamento) cada chamada imprime seu n, começando pelo 1 (a última
   chamada empilhada é a primeira a imprimir). Quando o printf fica antes da
   recursão, a ordem é a da ida (n, n-1, ..., 1); quando fica depois, é a da
   volta (1, 2, ..., n). */
void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }
    contagemCrescente(n - 1);    /* chamada recursiva primeiro */
    printf("%d\n", n);           /* impressão na volta da recursão */
}
