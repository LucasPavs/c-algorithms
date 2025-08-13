#include <stdio.h>

int main() {
    int valor;
    int c100, c50, c20, c10;

    printf("Digite o valor a ser sacado (ate R$1000): ");
    scanf("%d", &valor);

    if (valor <= 0 || valor > 1000) {
        printf("\nValor invalido! O valor deve estar entre R$10 e R$1000.\n\n");
    } 
    else if (valor % 10 != 0) {
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

    return 0;
}
