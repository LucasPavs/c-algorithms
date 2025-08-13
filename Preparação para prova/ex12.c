#include <stdio.h>

int main() {
    int N;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &N);

    for (int num = 2; num <= N; num++) {
        int primo = 1; // Assume que é primo
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = 0; // Não é primo
                break;
            }
        }
        if (primo) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}