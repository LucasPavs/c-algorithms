#include <stdio.h>

const int tamanho = 10;

int main() {
    int vet[tamanho], i;

    for (i = 0; i < tamanho; i++) {
        printf("Informe o %dº termo do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    
    printf("Vetor antes da inversão: \n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    for (i = 0; i < tamanho / 2; i++) {
        int troca = vet[i];
        vet[i] = vet[tamanho - 1 - i];
        vet[tamanho - 1 - i] = troca;
    }

    printf("Vetor após a inversão: \n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }

    printf("\n\n");

    return 0;
}