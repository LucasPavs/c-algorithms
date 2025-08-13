#include <stdio.h>

int main() {
    int N;
    int a = 0, b = 1, proximo;

    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    printf("Série de Fibonacci até %d:\n", N);

    while (a <= N) {
        proximo = a + b;
        a = b;
        b = proximo;
    }
    
    printf("%d\n", a);

    return 0;
}
