#include <stdio.h>

const int order = 3;

void readMatrix(int matrix[order][order]) {
    int i, j;

    for (i = 0; i < order; i++) {
        for(j = 0; j < order; j++) {
            printf("Enter the element of position %d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }   
}

void matrixSum(int matrix1[order][order], int matrix2[order][order], int result[order][order]) {
    int i, j;

    for (i = 0; i < order; i++) {
        for(j = 0; j < order; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }   
}

void printMatrix(int result[order][order]) {
    int i, j;

    for (i = 0; i < order; i++) {
        for(j = 0; j < order; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }   
}

int main() {
    int matrix1[order][order];
    int matrix2[order][order];
    int sum[order][order];

    printf("Enter the elements of the first matrix: \n");
    readMatrix(matrix1);

    printf("Enter the elements of the second matrix: \n");
    readMatrix(matrix2);

    matrixSum(matrix1, matrix1, sum);

    printf("The result of the sum of the two matrices is: \n");
    printMatrix(sum);

    printf("\n\n");

    return 0;
}