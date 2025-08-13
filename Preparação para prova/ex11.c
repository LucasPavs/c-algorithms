/*Escreva um programa que leia um número inteiro N e determine o menor número 
natural M tal que a soma dos números de 1 até M seja maior ou igual a N.*/

#include <stdio.h>

int main() {
    int N, M = 0, soma = 0;

    printf("Informe um valor: ");
    scanf("%d", &N);

    for (M = 1; soma < N; M++) {
        soma += M;
    }

    printf("O menor numero natural que atende ao requerido eh: %d\n", M - 1);

    return 0;
}