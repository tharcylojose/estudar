#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double R, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &R);

    if (R < 0) {
        printf("Raio invalido! O raio nao pode ser negativo.\n");
        return 1;
    }

    area   = 4 * PI * pow(R, 2);
    volume = (4.0 / 3.0) * PI * pow(R, 3);   /* 4.0/3.0 garante divisao real */

    printf("Area da superficie: %.3f\n", area);
    printf("Volume: %.3f\n", volume);

    return 0;
}
