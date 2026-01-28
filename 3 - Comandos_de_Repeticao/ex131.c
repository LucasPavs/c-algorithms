#include <stdio.h>

const int quantidade = 10;

int main() {
    int i, numero, maior, segundo_maior;

    printf("Informe o 1º numero: ");
    scanf("%d", &numero);
    maior = numero;
    segundo_maior = numero;

    for (i = 1; i < quantidade; i++) {
        printf("Informe o %dº numero: ", i + 1);
        scanf("%d", &numero);

        if (numero > maior) {
            segundo_maior = maior;
            maior = numero;
        }
        else if (numero > segundo_maior) {
            segundo_maior = numero;
        }
    }

    printf("\nMaior: %d\n Segundo maior: %d \n\n", maior, segundo_maior);

    return 0;
}