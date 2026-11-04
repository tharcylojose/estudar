/* Questão 16 - Eficiência de consumo de combustível */
#include <stdio.h>

int main(void) {
    float km, litros, consumo;

    printf("Distância percorrida (km): ");
    scanf("%f", &km);
    printf("Litros de gasolina consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0) {
        printf("Erro: a quantidade de litros deve ser maior que zero!\n");
        return 1;
    }

    consumo = km / litros;
    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0f) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0f) {
        printf("Econômico!\n");
    } else {
        printf("Super econômico!\n");
    }

    return 0;
}
