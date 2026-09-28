#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite o lado a: ");
    scanf("%lf", &a);
    printf("Digite o lado b: ");
    scanf("%lf", &b);
    printf("Digite o lado c: ");
    scanf("%lf", &c);

    /* Condicao de existencia do triangulo */
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("Os valores informados nao formam um triangulo valido.\n");
        return 1;
    }

    p = (a + b + c) / 2.0;                       /* semiperimetro */
    area = sqrt(p * (p - a) * (p - b) * (p - c)); /* Formula de Heron */

    printf("Semiperimetro: %.2f\n", p);
    printf("Area do triangulo: %.2f\n", area);

    return 0;
}
