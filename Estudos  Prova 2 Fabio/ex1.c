#include <stdio.h>

int main() {
    int ordem, i, j, graos = 1;

    printf("Informe um numero correspondente ao numero de linhas e colunas do tabuleiro:  ");
    scanf("%d", &ordem);

    int matriz[ordem][ordem];

    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            matriz[i][j] = graos;
            graos *= 2;
        }    
    }

    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            printf("%d\t ", matriz[i][j]); 
        }    
        printf("\n");
    }

    return 0;
}