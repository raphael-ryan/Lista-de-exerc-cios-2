#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    if (valor1 > valor2) {
        printf("O maior valor �: %d\n", valor1);
    } else {
        printf("O maior valor �: %d\n", valor2);
    }

    return 0;
}
