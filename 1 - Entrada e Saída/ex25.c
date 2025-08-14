#include <stdio.h>

int main() {
    int N, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    for (i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", i, N, i * N);
    }

}
