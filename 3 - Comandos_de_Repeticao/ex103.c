#include <stdio.h>

int main() {
    int N, i, divisores;
    divisores = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("%d nao eh primo.\n", N);
        return 0;
    }

    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("\n%d eh primo.\n", N);
    } else {
        printf("\n%d nao eh primo.\n", N);
    }

    printf("\n");

    return 0;
}
