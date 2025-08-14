#include <stdio.h>

const int tamanho = 10;

int somaNumerosDoVetor(int vet[tamanho]) {
    int i, soma = 0;

    for (i = 0; i < tamanho; i++) {
        soma += vet[i];
    }
    return soma;
}

int main() {
    int i, vetor[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Informe o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    int soma = somaNumerosDoVetor(vetor);
    printf("\nA soma de todos os termos do vetor é: %d\n\n", soma);

    return 0;
}