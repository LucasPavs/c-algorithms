#include <stdio.h>

int main() {
    int numero;
    unsigned long long fatorial; 

    printf("Digite 10 números inteiros:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Número %d: ", i);
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Fatorial não definido para número negativo.\n");
        } else {
            fatorial = 1;
            for (int j = 1; j <= numero; j++) {
                fatorial *= j;
            }
            printf("Fatorial de %d é %llu\n", numero, fatorial);
        }
    }

    return 0;
}
