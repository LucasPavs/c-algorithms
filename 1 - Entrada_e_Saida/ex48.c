#include <stdio.h>

int main() {
    float valor_financiado, taxa, valor_total_com_taxa, valor_parcela;
    int numero_parcelas;

    printf("Digite o valor a ser financiado: R$ ");
    scanf("%f", &valor_financiado);

    printf("Digite o numero de parcelas (ate 120): ");
    scanf("%d", &numero_parcelas);

    if (numero_parcelas < 1 || numero_parcelas > 120) {
        printf("Numero de parcelas invalido. Escolha entre 1 e 120.\n");
    } 
    else {
        taxa = valor_financiado * 0.04;
        valor_total_com_taxa = valor_financiado + taxa;
        valor_parcela = valor_total_com_taxa / numero_parcelas;

        printf("\nValor total com taxa: R$ %.2f\n", valor_total_com_taxa);
        printf("Valor de cada parcela (%dx): R$ %.2f\n\n", numero_parcelas, valor_parcela);
    }

    return 0;
}
