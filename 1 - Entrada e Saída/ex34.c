#include <stdio.h>


int main() {
    int diaCompra, prazoEntrega;
    int diaEntrega, mesEntrega;

    printf("Digite o dia da compra (1 a 30): ");
    scanf("%d", &diaCompra);

    printf("Digite o prazo de entrega em dias: ");
    scanf("%d", &prazoEntrega);

    int totalDias = diaCompra + prazoEntrega;

    mesEntrega = (totalDias - 1) / 30 + 1;
    diaEntrega = (totalDias - 1) % 30 + 1;

    printf("O cliente deve receber o produto no dia %d do mês %d.\n", diaEntrega, mesEntrega);

    
    return 0;
}
