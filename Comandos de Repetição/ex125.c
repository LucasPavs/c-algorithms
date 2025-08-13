#include <stdio.h>

int main() {
    unsigned long long int n, encontrados = 0, numero = 2;
    printf("Digite a quantidade de números perfeitos que deseja exibir: ");
    scanf("%llu", &n);

    printf("Os %llu primeiros números perfeitos são:\n", n);
    while (encontrados < n) {
        unsigned long long int soma = 0;
        for (unsigned long long int i = 1; i <= numero / 2; i++) {
            if (numero % i == 0) {
                soma += i;
            }
        }
        if (soma == numero) {
            printf("%llu\n", numero);
            encontrados++;
        }
        numero++;
    }
    return 0;
}