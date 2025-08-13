#include <stdio.h>

const int ordem = 10; 

int main() {
    int matriz[ordem][ordem];
    int i, j;

    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            printf("Informe o termo a%d,%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }

        int coluna = 0;
        int maior = matriz[i][0];
        
        for (j = 0; j < ordem; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                coluna = j;
            }
        }
        printf("O maior numero da linha %d está na posição a%d,%d. \n\n", i + 1, i + 1, coluna + 1);
    }

    return 0;
}