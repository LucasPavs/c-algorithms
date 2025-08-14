#include <stdio.h>

int main() {
    float valorCompra;
    float valorVista, parcela3x, valorTotal10x, parcela10x;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    valorVista = valorCompra * 0.90; // 10% de desconto
    parcela3x = valorCompra / 3.0;   // 3 parcelas sem juros
    valorTotal10x = valorCompra * 1.20; // 20% de juros
    parcela10x = valorTotal10x / 10.0;

    printf("\n==== Formas de Pagamento ====\n");
    printf("1. À vista com 10%% de desconto: R$ %.3f\n", valorVista);
    printf("2. Em 3x no cartão: 3 parcelas de R$ %.3f\n", parcela3x);
    printf("3. Em 10x no cartão com 20%% de juros: 10 parcelas de R$ %.3f (Total: R$ %.2f)\n", parcela10x, valorTotal10x);

}
