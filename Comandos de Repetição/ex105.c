#include <stdio.h>

int main() {
    int M, N, soma = 0;

    printf("Digite dois números inteiros (M e N): ");
    scanf("%d %d", &M, &N);

    if (M > N) {
        int temp = M;
        M = N;
        N = temp;
    }

    for (int i = M; i <= N; i++) {
        soma += i;
    }

    printf("\nA soma dos números no intervalo [%d, %d] é: %d\n\n", M, N, soma);

    return 0;
}
