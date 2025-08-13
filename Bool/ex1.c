#include <stdio.h>

int main() {
    int num;
    int ehPositivo;

    printf("Informe um número inteiro: ");
    scanf("%d", &num);

    ehPositivo = num > 0;

    if (ehPositivo) {
        printf("O numero é positivo. \n\n");
    } else {
        printf("O numero não é positivo. \n\n");
    }

    return 0;
}