#include <stdio.h>

const float CONSUMO_POR_LITRO = 14.0;

int main() {
    float distancia, preco_litro, litros_necessarios, custo_total;

    printf("Digite a distância da viagem em km: ");
    scanf("%f", &distancia);

    printf("Digite o preço do litro de combustível: ");
    scanf("%f", &preco_litro);

    litros_necessarios = distancia / CONSUMO_POR_LITRO;
    custo_total = litros_necessarios * preco_litro;

    printf("João irá gastar R$ %.2f com combustível durante a viagem.\n", custo_total);

}
