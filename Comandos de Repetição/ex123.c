/*Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros
números primos maiores ou iguais a M.*/

#include <stdio.h>

int main() {
    int M, N;
    int contador = 0; // Conta quantos primos já foram encontrados

    printf("Digite o valor de M (início da busca): ");
    scanf("%d", &M);

    printf("Digite o valor de N (quantidade de primos): ");
    scanf("%d", &N);

    printf("Os %d primeiros números primos maiores ou iguais a %d são:\n", N, M);

    while (contador < N) {
        int ehPrimo = 1; // Começa assumindo que é primo
        if (M < 2) {
            ehPrimo = 0; // Números menores que 2 não são primos
        } else {
            for (int i = 2; i * i <= M; i++) {
                if (M % i == 0) {
                    ehPrimo = 0;
                    break;
                }
            }
        }

        if (ehPrimo) {
            printf("%d ", M);
            contador++;
        }

        M++;
    }

    printf("\n");
    return 0;
}
