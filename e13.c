#include <stdio.h>

int main() {
    int qtdAtual, qtdMax, qtdMin;
    float qtdMedia;

    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &qtdAtual);

    printf("Digite a quantidade m�xima em estoque: ");
    scanf("%d", &qtdMax);

    printf("Digite a quantidade m�nima em estoque: ");
    scanf("%d", &qtdMin);

    qtdMedia = (qtdMax + qtdMin) / 2.0;

    printf("A quantidade m�dia �: %.2f\n", qtdMedia);

    if (qtdAtual >= qtdMedia) {
        printf("N�o efetuar compra.\n");
    } else {
        printf("Efetuar compra.\n");
    }

    return 0;
}
