#include <stdio.h>

const int size = 11;

int main() {
    char vet[size], Palindrimo = 1;

    printf("Informe uma palavra de 20 caracteres:");
    scanf("%s", vet);
    getchar();

    for (int i = 0; i < size / 2; i++) {
        if (vet[i] != vet[size - 2 - i]) {
            Palindrimo = 0;
            break;
        }
    }

    if (Palindrimo) {
        printf("Seu vetor eh palindromo!\n");
    } else {
        printf("Seu vetor nao eh palindromo!\n");
    } 

    return 0;
}