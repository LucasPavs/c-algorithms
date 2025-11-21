#include <stdio.h>

const int order = 3;

int main() {
    int matrix[order][order], i, j, a, b = 1;

    for (i = 0; i < order; i++) {
        int a = 1;
        for (j = 0; j < order; j++) {
            printf("Informe o valor da posição a%d%d: ", a,b);
            scanf("%d", &matrix[i][j]);
            a++;
        }
        b++;
    }
    
    int multiplicador;

    printf("Enter the number you want to use to multiply the matrix: ");
    scanf("%d", &multiplicador);


    for (i = 0; i < order; i++) {
        for (j = 0; j < order; j++) {
            matrix[i][j] *= multiplicador;
            printf("%d\t ", matrix[i][j]);
        }    
        printf("\n\n");
    }

    return 0;
}