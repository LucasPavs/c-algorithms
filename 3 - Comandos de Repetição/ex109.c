#include <stdio.h>

int main() {
    int M, N, X;
    int quant = 0; // Contador de divisores exatos

    printf("Digite o primeiro numero da sequencia: ");
    scanf("%d", &M);

    printf("\nDigite o segundo numero da sequencia: ");
    scanf("%d", &N);

    printf("\nDigite o número X: ");
    scanf("%d", &X);

    // Garante que M seja o menor e N o maior
    if (M > N) {
        int temp = M;
        M = N;
        N = temp;
    }

    // Exibe o intervalo considerado
    printf("\nIntervalo considerado: [%d, %d]\n", M, N);
    printf("Números no intervalo:\n");

    // Percorre o intervalo e imprime todos os números
    for (int i = M; i <= N; i++) {
        printf("%d ", i);
    }

    printf("\n\nVerificando divisores de %d no intervalo:\n", X);

    // Verifica quais números do intervalo são divisores de X
    for (int i = M; i <= N; i++) {
        if (X % i == 0) {
            printf("Divisor exato: %d\n", i);
            quant++; // Incrementa o contador de divisores
        }
    }

    // Verifica se encontrou algum divisor
    if (quant == 0) {
        printf("\nNão há divisores exatos de %d no intervalo [%d, %d].\n\n", X, M, N);
    } else {
        printf("\nTotal de divisores exatos de %d no intervalo: %d\n\n", X, quant);
    }

    return 0;
}
