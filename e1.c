
#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor > 10) {
        printf("É MAIOR QUE 10!\n");
    } else {
        printf("NÃO É MAIOR QUE 10!\n");
    }

    return 0;
}
