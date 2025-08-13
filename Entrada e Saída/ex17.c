#include <stdio.h>

int main() {
    float area, valor, custo;

    printf("Digite a área da casa em metros quadrados: ");
    scanf("%f", &area);

    printf("Digite o valor cobrado por metro quadrado: R$ ");
    scanf("%f", &valor);

    custo = area * valor;

    printf("O custo final do projeto é: R$ %.2f\n", custo);

    return 0;
}
