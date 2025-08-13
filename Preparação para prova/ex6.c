#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Informe um numero: ");
    scanf("%d", &num);

    printf("\n--- Rastreando o processo ---\n");

    while (num > 0) {
        int digito = num % 10;
        printf("Dígito atual: %d\n", digito);

        if (digito % 2 == 0) {
            soma += digito;
            printf("É par! Soma parcial: %d\n", soma);
        } else {
            printf("É ímpar! Soma permanece: %d\n", soma);
        }

        num /= 10;
    }

    printf("\nSoma dos numeros pares eh: %d\n\n", soma);

    return 0;
}
