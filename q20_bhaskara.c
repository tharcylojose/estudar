/* Questão 20 - Equação do 2º grau (fórmula de Bhaskara)
   Compilar com: gcc q20_bhaskara.c -o q20 -lm */
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Erro: o coeficiente 'a' deve ser diferente de zero!\n");
        return 1;
    }

    delta = b * b - 4 * a * c;
    printf("Delta = %.2f\n", delta);

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz única: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes reais distintas: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}
