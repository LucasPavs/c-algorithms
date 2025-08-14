#include <stdio.h>

int main() {
    int N;
    int contador = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    while (contador <= N) {
        printf("\n%d\n", contador * 2);
        contador++;
    }

    printf("\n");
    return 0;
}
