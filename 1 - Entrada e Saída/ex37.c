#include <stdio.h>


int main() {
    int num, milhar, centena, dezena, unidade;

    printf("Digite um número entre 1 e 9999: ");
    scanf("%d", &num);

    milhar = num / 1000;
    centena = (num % 1000) / 100;
    dezena = (num % 100) / 10;
    unidade = num % 10;

    printf("Milhar: %d\n", milhar);
    printf("Centena: %d\n", centena);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d\n", unidade);

    return 0;
}
