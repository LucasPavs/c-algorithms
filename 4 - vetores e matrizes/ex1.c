#include <stdio.h>

int main() {
    int ordem, i, j;
    long int graos = 1;

    printf("Informe a ordem do tabuleiro: ");
    scanf("%d", &ordem);

    long int matriz[ordem][ordem];

    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            matriz[i][j] = graos;
            graos *= 2;
        }
    }

    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            printf("%li\t ", matriz[i][j]); 
        }
        printf("\n");
    }

    return 0;
}