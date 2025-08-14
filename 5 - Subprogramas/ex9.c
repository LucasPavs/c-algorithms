#include <stdio.h>

const int qtd = 5;

int reverse(int num) {
    int milhar = num /1000;
    int resto = num % 1000;
    int centena = resto / 100;
    resto = resto % 100;
    int dezena = resto / 10;
    int unidade = resto % 10;
    int reverso = (unidade * 1000) + (dezena * 100) + (centena * 10) + milhar;
    return reverso; 
}

int main() {
    int n, i;

    for (i = 1; i <= qtd; i++) {
        printf("Informe o %dº numero: ", i);
        scanf("%d", &n);
        printf("O reverso do numero informado eh: %d. \n\n", reverse(n));
    }

    return 0;
}


