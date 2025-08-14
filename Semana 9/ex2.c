#include <stdio.h>

const int tamanho = 10;

int media(int vet[tamanho]) {
    int i, soma = 0, media;

    for (i = 0; i < tamanho; i++) {
        soma += vet[i];
    }
    media = soma / tamanho;
    return media;
}

int main() {
    int vet[tamanho], i;

    for (i = 0; i < tamanho; i++) {
        printf("Informe o %dº numero: ", i+1);
        scanf("%d", &vet[i]);
    }
    int Media = media(vet);
    printf("\nA media final entre os 10 numeros informados é: %d\n\n", Media);

    return 0;
}