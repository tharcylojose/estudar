/* Questao 17 - Estatisticas de turma (menor, maior, media, contagem) */
#include <stdio.h>
#include <float.h>

int main() {
    float nota, soma = 0.0;
    float maior = -1.0, menor = 11.0;
    int quantidade = 0;

    printf("Digite as notas dos alunos (digite -1.0 para encerrar):\n");

    while (1) {
        printf("Nota: ");
        scanf("%f", &nota);

        if (nota == -1.0) {
            break;
        }

        soma += nota;
        quantidade++;

        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;
    }

    if (quantidade == 0) {
        printf("Nenhuma nota foi digitada.\n");
        return 0;
    }

    printf("\n=== Estatisticas da Turma ===\n");
    printf("a) Total de alunos avaliados: %d\n", quantidade);
    printf("b) Maior nota: %.2f\n", maior);
    printf("c) Menor nota: %.2f\n", menor);
    printf("d) Media geral: %.2f\n", soma / quantidade);

    return 0;
}
