#include <stdio.h>

int main() {
    int M, N, i;
    int resultado = 1;

    printf("Digite a base (M): ");
    scanf("%d", &M);

    printf("Digite o expoente (N): ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        resultado *= M;
    }

    printf("\n%d elevado a %d é: %d\n\n", M, N, resultado);
    return 0;
}
