#include <stdio.h>

int main() {
    int macas;
    float preco;

    printf("Digite o n�mero de ma��s compradas: ");
    scanf("%d", &macas);

    if (macas < 12) {
        preco = macas * 1.30;
    } else {
        preco = macas * 1.00;
    }

    printf("O custo total da compra �: R$ %.2f\n", preco);

    return 0;
}
