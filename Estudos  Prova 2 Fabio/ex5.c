#include <stdio.h>

const int tamanho = 20;

int main() {
    int vet[tamanho], ehPalindromo = 1;

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < tamanho / 2; i++) {
        if (vet[i] != vet[tamanho - 1 - i]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo == 1) {
        printf("Seu numero eh palindromo!\n\n");
    } else {
        printf("Seu numero nao eh palindromo :(\n\n");
    }

    return 0;
}