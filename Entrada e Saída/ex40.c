#include <stdio.h>

const float gorjeta = 0.1;

int main() {
    float consumo, total;

    printf("Digite o valor consumido: R$ ");
    scanf("%f", &consumo);

    total = consumo + (consumo * gorjeta) + 10.0;

    printf("Valor final da conta: R$ %.2f\n\n", total);

    getchar();
    return 0;
}
