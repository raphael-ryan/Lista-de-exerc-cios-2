#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 0) {
        printf("O valor � positivo.\n");
    } else {
        printf("O valor � negativo.\n");
    }

    return 0;
}
