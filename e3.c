#include <stdio.h>

int main() {
    int macas;
    float preco;

    printf("Digite o número de maçãs compradas: ");
    scanf("%d", &macas);

    if (macas < 12) {
        preco = macas * 1.30;
    } else {
        preco = macas * 1.00;
    }

    printf("O custo total da compra é: R$ %.2f\n", preco);

    return 0;
}
