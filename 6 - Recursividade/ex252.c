#include <stdio.h>

int somaIntervalo(int min, int max) {
    if (min == max) {
        return min;
    }
    if (min > max) {
        return somaIntervalo(max, min);
    }  
    return min + somaIntervalo(min + 1, max);
}

int main() {
    int minimo, maximo;

    printf("Informe o valor minimo: ");
    scanf("%d", &minimo);

    printf("Informe o valor maximo: ");
    scanf("%d", &maximo);

    printf("\nA soma do intervalo dos numeros %d e %d é: %d\n\n", minimo, maximo, somaIntervalo(minimo, maximo));

    return 0;
}