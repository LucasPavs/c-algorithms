#include <stdio.h>

int main() {
    int ordem, graos = 1;

    printf("Informe a quantidade que corresponde ao numero de linhas e colunas do tabuleiro: ");
    scanf("%d", &ordem);

    int matriz[ordem][ordem];

    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            matriz[i][j] = graos;
            graos *= 2;
        }
    }

    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%d\t ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}