/*
 * Questao 26 - Orcamento para Cercamento Perimetral de Terrenos
 */
#include <stdio.h>

int main() {
    float comprimento, largura, precoMetro;

    printf("Digite o comprimento e a largura do terreno (m): ");
    scanf("%f %f", &comprimento, &largura);

    printf("Digite o preco por metro do arame farpado (R$): ");
    scanf("%f", &precoMetro);

    float perimetro = 2 * (comprimento + largura);
    float metrosArame = perimetro * 3; /* cercamento exige 3 fios */
    float custoTotal = metrosArame * precoMetro;

    printf("Metros de arame necessarios: %.2f\n", metrosArame);
    printf("Custo total do cercamento: R$ %.2f\n", custoTotal);

    return 0;
}
