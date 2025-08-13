#include <stdio.h>

int main() {
    int M, N;

    printf("Digite dois números inteiros (M e N): ");
    scanf("%d %d", &M, &N);

    // Garante que M seja menor ou igual a N
    if (M > N) {
        int temp = M;
        M = N;
        N = temp;
    }

    printf("\nIntervalo considerado: [%d, %d]\n", M, N);
    printf("Números primos no intervalo: ");

    // Laço para percorrer todos os números entre M e N (inclusive)
    for (int i = M; i <= N; i++) {
        if (i >= 2) { // Só verifica números maiores ou iguais a 2, pois 0 e 1 não são primos
            int primo = 1; // Flag que indica se o número é primo (1 = sim, 0 = não)

            // Verifica se i tem algum divisor além de 1 e ele mesmo (até a raiz quadrada de i)
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) { // Se for divisível por j, não é primo
                    primo = 0;
                    break;
                }
            }

            if (primo) { // Se for primo
                printf("%d ", i); // Exibe o número primo 
            }
        }
    }

    printf("\n\n");
    return 0;
}
