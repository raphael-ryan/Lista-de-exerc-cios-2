#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a nota da 1� avalia��o: ");
    scanf("%f", &nota1);

    printf("Digite a nota da 2� avalia��o: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7.0) {
        printf("Aluno aprovado com m�dia %.2f\n", media);
    } else {
        printf("Aluno reprovado com m�dia %.2f\n", media);
    }

    return 0;
}
