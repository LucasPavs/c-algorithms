#include <stdio.h>

int main() {
    float valorEmprestimo;
    printf("Digite o valor a ser financiado: R$ ");
    scanf("%f", &valorEmprestimo);

    float p1 = valorEmprestimo * 0.20;
    float p2 = p1 * 1.07;
    float p3 = p2 * 1.07;
    float p4 = p3 * 1.07;
    float p5 = p4 * 1.07;

    float totalPago = p1 + p2 + p3 + p4 + p5;
    float juros = totalPago - valorEmprestimo;

    printf("\nPrestacao 1: R$ %.2f\n", p1);
    printf("Prestacao 2: R$ %.2f\n", p2);
    printf("Prestacao 3: R$ %.2f\n", p3);
    printf("Prestacao 4: R$ %.2f\n", p4);
    printf("Prestacao 5: R$ %.2f\n", p5);
    printf("\nTotal pago pelo cliente: R$ %.2f\n", totalPago);
    printf("Total de juros pagos: R$ %.2f\n\n", juros);

    return 0;
}
