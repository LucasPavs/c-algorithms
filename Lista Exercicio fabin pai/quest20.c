#include <stdio.h>

int main() {
    int valor, valor_total;
    int c100, c50, c20, c10;

    while (valor_total <= 10.000)
    {
        printf("Digite o valor a ser sacado: ");
        scanf("%d", &valor);
        
    if (valor % 10 != 0) {
        printf("\nValor invalido! So e possivel sacar multiplos de R$10.\n\n");
    } else {
        c100 = valor / 100;
        valor %= 100;

        c50 = valor / 50;
        valor %= 50;

        c20 = valor / 20;
        valor %= 20;

        c10 = valor / 10;

        printf("\nCedulas fornecidas:\n");
        if (c100 > 0) printf("\nR$ 100: %dx\n\n", c100);
        if (c50 > 0)  printf("R$ 50: %dx\n\n", c50);
        if (c20 > 0)  printf("R$ 20: %dx\n\n", c20);
        if (c10 > 0)  printf("R$ 10: %dx\n\n", c10);
    }
    valor_total += valor;
}

    printf("Excedido o limite de saque diario, estamos temporariamente indisponiveis.\n\n");
    return 0;
}
