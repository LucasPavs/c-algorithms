#include <stdio.h>

int main() {
    int n, i;
    long long int a = 1, b = 1, fib;

    // Entrada de dados
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    // Validação de N
    if (n <= 0) {
        printf("\nN deve ser um número inteiro positivo.\n\n");
        return 1;
    }

    // Casos base
    if (n == 1 || n == 2) {
        printf("\nO %dº termo da série de Fibonacci é: 1\n\n", n);
        return 0;
    }

    // Cálculo do N-ésimo termo
    for (i = 3; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    // Saída
    printf("\nO %dº termo da série de Fibonacci é: %lld\n\n", n, fib);

    return 0;
}
