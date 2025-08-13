#include <stdio.h>

int main() {
    int querContinuar = 1;  // começa como true

    while (querContinuar) {
        int numero;
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            querContinuar = 0;  // muda para false, para sair do loop
        } else {
            printf("Voce digitou: %d\n", numero);
        }
    }

    printf("Programa encerrado.\n\n");

    return 0;
}