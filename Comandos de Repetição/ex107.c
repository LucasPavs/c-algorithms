#include <stdio.h> 

int main() {
    int M, N, soma = 0, quant = 0; 

    printf("Digite dois números inteiros (M e N): ");
    scanf("%d %d", &M, &N);

    // Garante que M seja o menor e N o maior, trocando os valores se necessário
    if (M > N) {
        int temp = M;
        M = N;
        N = temp;
    }

    // Exibe o intervalo considerado após a ordenação
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
                soma += i;       // Adiciona o número à soma dos primos
                quant++;         // Incrementa a contagem de primos
            }
        }
    }

    // Exibe a média dos primos, se pelo menos um foi encontrado
    if (quant > 0) {
        printf("\n\nA média dos números primos no intervalo é: %.2f\n\n", (float)soma / quant);
    } else {
        printf("\n\nNenhum número primo encontrado no intervalo.\n");
    }

    return 0;
}
