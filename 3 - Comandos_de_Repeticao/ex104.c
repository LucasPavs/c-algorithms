#include <stdio.h>

int main() {
    int N, soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            soma += i;
        }
    }

    if (soma == N) {
        printf("%d eh um número perfeito.\n\n", N);
    } else {
        printf("%d não eh um número perfeito.\n\n", N);
    }

    return 0;
}

