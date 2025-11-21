#include <stdio.h>
const float IPI = 0.20; const float ICMS = 0.17; const float LUCRO = 0.20;

int main() {

    float preco_atual, preco_compra, preco_promocional;

    printf("Digite o preco atual do veiculo: R$ ");
    scanf("%f", &preco_atual);

    preco_compra = preco_atual / (1 + IPI + ICMS + LUCRO);
    preco_promocional = preco_compra * (1 + ICMS + LUCRO);

    printf("Preco promocional do veiculo: R$ %.2f\n\n", preco_promocional);

    return 0;
}
