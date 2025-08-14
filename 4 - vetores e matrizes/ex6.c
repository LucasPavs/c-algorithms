#include <stdio.h>

const int order = 4;

int main() {
    int matrix[order][order], i, j, n, cont = 0;

    for (i = 0; i < order; i++) {
        for (j = 0; j < order; j++) {
            printf("Informe o elemento que deseja colocar na posição a%d%d da matriz: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nInforme um número que deseja verificar: ");
    scanf("%d", &n);

    for (j = 0; j < order; j++) {
            for (i = 0; i < order; i++) {
                if (matrix[i][j] == n) {
                    cont++;
                    continue;
                }
            }
    }

    printf("\nO número informado apareceu em %d colunas da matriz. \n\n", cont);

    return 0;
}