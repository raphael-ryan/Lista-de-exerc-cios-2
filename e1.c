
#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor > 10) {
        printf("� MAIOR QUE 10!\n");
    } else {
        printf("N�O � MAIOR QUE 10!\n");
    }

    return 0;
}
