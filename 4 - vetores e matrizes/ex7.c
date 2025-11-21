#include <stdio.h>

const int lines = 3;
const int columns = 4;

int main() {
    int matrix[lines][columns], i, j, maior, column_position;

    for (i = 0; i < lines; i++) {
        for (j = 0; j < columns; j++) {
            printf("Informe o elemento que deseja colocar na posição a%d%d da matriz: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }   
    
    for (i = 0; i < lines; i++) {
        maior = matrix[i][0];
        column_position = 0;
        for (j = 0; j < columns; j++) {
            if (matrix[i][j] > maior) {
                maior = matrix[i][j];
                column_position = j;
            }
        }
        printf("O maior numero da linha %d é o (%d), sua posição é: a%d%d \n", i + 1, maior, i + 1, column_position + 1);
    }   
    
    printf("\n\n");

    return 0;
}