#include <stdio.h>

const int tamanho = 4;

int verificaQuantosPrimosLinha(int matriz[tamanho][tamanho], int linha) {
    int i, j, cont_primo = 0;

    i = linha;
    for (j = 0; j < tamanho; j++) {
        int divisores = 0;
        for (int possiveis_div = 1; possiveis_div <= matriz[i][j]; possiveis_div++) {
            if (matriz[i][j] % possiveis_div == 0) {
                divisores++;
            }
        }
        if (divisores == 2 && matriz[i][j] >= 2) {
            cont_primo++;
        }
    }
    return cont_primo;
}

int main() {
    int matriz[tamanho][tamanho], i, j, linha;

    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            printf("Informe o numero da posicao a%d%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
    }
}

printf("Informe a linha da matriz que deseja verificar: ");
scanf("%d", &linha);
linha -= 1;

int primo = verificaQuantosPrimosLinha(matriz, linha);
printf("\nA linha %d, possui %d numeros primos. \n\n", linha+1, primo);

    return 0;
}