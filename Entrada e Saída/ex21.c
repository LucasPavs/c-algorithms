#include <stdio.h>

int main() {
    float producao, lucro, venda;

    printf("Digite o preco de producao do produto: R$ ");
    scanf("%f", &producao);

    printf("Digite a margem de lucro desejada (em %%): ");
    scanf("%f", &lucro);

    venda = producao + (producao * lucro / 100);

    printf("O preco de venda do produto deve ser: R$ %.2f\n", venda);

    return 0;
}
