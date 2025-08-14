#include <stdio.h>

int main() {
    int N;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    for (int divisor = 1; divisor <= N; divisor++) {
        if (N % divisor == 0) {
            printf("\n%d\n", divisor);
        }
    }

    printf("\n");
    return 0;
}