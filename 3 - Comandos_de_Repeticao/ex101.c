#include <stdio.h>

int main() {
    int N;
    int numero_impar = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    for (int contador = 1; contador <= N; contador++) {
        printf("%d ", numero_impar);
        numero_impar += 2;
    }

    printf("\n");
    return 0;
}
