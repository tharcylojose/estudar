/* Questão 26 - Nome do mês e quantidade de dias (com fevereiro bissexto) */
#include <stdio.h>

int main(void) {
    int mes, ano, dias;

    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("Erro: mês inválido!\n");
        return 1;
    }

    switch (mes) {
        case 1:  printf("Janeiro");   dias = 31; break;
        case 2:
            printf("Fevereiro");
            if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
        case 3:  printf("Março");     dias = 31; break;
        case 4:  printf("Abril");     dias = 30; break;
        case 5:  printf("Maio");      dias = 31; break;
        case 6:  printf("Junho");     dias = 30; break;
        case 7:  printf("Julho");     dias = 31; break;
        case 8:  printf("Agosto");    dias = 31; break;
        case 9:  printf("Setembro");  dias = 30; break;
        case 10: printf("Outubro");   dias = 31; break;
        case 11: printf("Novembro");  dias = 30; break;
        default: printf("Dezembro");  dias = 31; break;   /* mes == 12 */
    }

    printf(" de %d possui %d dias.\n", ano, dias);

    return 0;
}
