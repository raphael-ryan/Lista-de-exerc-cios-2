#include <stdio.h>

int main() {
    int conta;
    float saldo, debito, credito, saldoAtual;

    printf("Digite o número da conta do cliente: ");
    scanf("%d", &conta);

    printf("Digite o saldo: ");
    scanf("%f", &saldo);

    printf("Digite o valor do débito: ");
    scanf("%f", &debito);

    printf("Digite o valor do crédito: ");
    scanf("%f", &credito);

    saldoAtual = saldo - debito + credito;

    printf("O saldo atual é: R$ %.2f\n", saldoAtual);

    if (saldoAtual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}
