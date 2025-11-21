#include <stdio.h>

const int order = 3;

void readMatrix(int matrix[order][order]) {
    int i, j;

    for (i = 0; i < order; i++) {
        for (j = 0; j < order; j++) {
            printf("In the position a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int emptyLines(int matrix[order][order]) {
    int i, j, cont = 0;

    for (i = 0; i < order; i++) {
            if (matrix[i][0] == 0 && matrix [i][1] == 0 && matrix[i][2] == 0) {
                cont++;
            }
    }
    return cont;
}

int main() {
    int matrix[order][order];

    printf("Enter the elements of the matrix: \n");
    readMatrix(matrix);

    printf("\n");

    int nEmpty = emptyLines(matrix);

    printf("The number of empty lines is: %d \n\n", nEmpty);

    return 0;
}