#include <stdio.h>

int main() {
    int M, contador = 0;
    int numero = 2;

    printf("Digite quantos números primos você quer ver: ");
    scanf("%d", &M);

    printf("Os %d primeiros números primos são: ", M);

    while (contador < M) {
        int primo = 1;

        // Verifica se é primo
        for (int j = 2; j * j <= numero; j++) {
            if (numero % j == 0) {
                primo = 0;
                break;
            }
        }

        if (primo) {
            printf("%d ", numero);
            contador++; // Contou mais um primo
        }

        numero++; // Vai para o próximo número
    }

    printf("\n\n");
    return 0;
}
