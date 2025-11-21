#include <stdio.h>

int main() {
    float comprimento, largura, area, valor;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    area = comprimento * largura;
    valor = area * 300.0;

    printf("O valor de mercado do terreno é: R$ %.2f\n", valor);

    return 0;
}
