#include <stdio.h>

int main() {
    int N, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, digite um numero inteiro POSITIVO.\n");
    } else {
        // Calcula a soma de 1 até N
        for (int i = 1; i <= N; i++) {
            soma += i;
        }

        printf("A soma dos numeros de 1 ate %d eh %d.\n\n", N, soma);
    }

    return 0;
}
