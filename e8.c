#include <stdio.h>

int main() {
    int inicio, fim, duracao;

    printf("Digite a hora de in�cio do jogo: ");
    scanf("%d", &inicio);

    printf("Digite a hora de fim do jogo: ");
    scanf("%d", &fim);

    if (inicio < fim) {
        duracao = fim - inicio;
    } else {
        duracao = (24 - inicio) + fim;
    }

    printf("A dura��o do jogo foi de %d horas.\n", duracao);

    return 0;
}
