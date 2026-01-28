/*Escreva um programa que leia um número inteiro N e verifique se ele pertence à série
de Fibonacci.*/

#include <stdio.h>

int main() {
    int N;
    int a = 0, b = 1, proximo;

    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    if (N == 0 || N == 1) {
        printf("%d pertence à série de Fibonacci.\n", N);
        return 0;
    }

    proximo = a + b;

    while (proximo <= N) {
        if (proximo == N) {
            printf("%d pertence à série de Fibonacci.\n", N);
            return 0;
        }
        a = b;
        b = proximo;
        proximo = a + b;
    }

    printf("%d NÃO pertence à série de Fibonacci.\n", N);
    return 0;
}
