#include <stdio.h>

int main() {
    int M, N;

    printf("Digite o valor de M: ");
    scanf("%d", &M);

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    if (M != 0 && N % M == 0) {
        printf("%d é múltiplo de %d.\n\n", N, M);

    } else {
        printf("%d não é múltiplo de %d.\n\n", N, M);
    }

    return 0;
}
