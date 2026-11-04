/* Questão 25 - Troco na menor quantidade de cédulas (100, 50, 20, 10, 5 e 2)

   Observação matemática: com cédulas de 5 e 2 só não é possível pagar R$ 1 e R$ 3.
   Usar a estratégia gulosa pura falharia em valores como R$ 8 (5 + 2 + sobra de 1),
   embora 8 = 4 x 2 seja possível. Por isso, se o troco for ÍMPAR separamos
   primeiro UMA cédula de 5 (precisa de exatamente uma, pois duas valem uma de 10);
   o restante fica par e é decomposto pelas demais cédulas. */
#include <stdio.h>

int main(void) {
    int total, entregue, troco;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;

    printf("Valor total a pagar (R$): ");
    scanf("%d", &total);
    printf("Valor entregue pelo cliente (R$): ");
    scanf("%d", &entregue);

    if (entregue < total) {
        printf("Erro: valor entregue insuficiente! Faltam R$ %d.\n", total - entregue);
        return 1;
    }

    troco = entregue - total;

    if (troco == 0) {
        printf("Sem troco.\n");
        return 0;
    }

    printf("Troco: R$ %d\n", troco);

    if (troco == 1 || troco == 3) {
        printf("Não é possível compor R$ %d com as cédulas disponíveis.\n", troco);
        return 0;
    }

    if (troco % 2 != 0) {      /* troco ímpar: separa uma cédula de 5 */
        n5 = 1;
        troco -= 5;
    }

    if (troco >= 100) { n100 = troco / 100; troco %= 100; }
    if (troco >= 50)  { n50  = troco / 50;  troco %= 50;  }
    if (troco >= 20)  { n20  = troco / 20;  troco %= 20;  }
    if (troco >= 10)  { n10  = troco / 10;  troco %= 10;  }
    if (troco >= 2)   { n2   = troco / 2;   troco %= 2;   }

    if (n100 > 0) printf("%d cédula(s) de R$ 100\n", n100);
    if (n50  > 0) printf("%d cédula(s) de R$ 50\n",  n50);
    if (n20  > 0) printf("%d cédula(s) de R$ 20\n",  n20);
    if (n10  > 0) printf("%d cédula(s) de R$ 10\n",  n10);
    if (n5   > 0) printf("%d cédula(s) de R$ 5\n",   n5);
    if (n2   > 0) printf("%d cédula(s) de R$ 2\n",   n2);

    return 0;
}
