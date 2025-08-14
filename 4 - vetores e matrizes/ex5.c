#include <stdio.h>
#include <stdbool.h>

const int order = 3;

bool ehSimetrica(int matrix[order][order]) {
    int i, j;
    for (i = 0; i < order; i++) {
        for (j = i + 1; j < order; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[order][order];
    int i, j;

    printf("Informe os elementos da matriz %dx%d:\n", order, order);
    for (i = 0; i < order; i++) {
        for (j = 0; j < order; j++) {
            printf("Elemento a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    if (ehSimetrica(matrix)) {
        printf("\nA matriz informada é simétrica!\n");
    } else {
        printf("\nA matriz informada não é simétrica.\n");
    }

    return 0;
}
