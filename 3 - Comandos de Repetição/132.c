#include <stdio.h>

int main() {
    int numero_de_linhas;

    printf("Informe o numero de linhas da sua figura: ");
    scanf("%d", &numero_de_linhas);

    for (int k = 0; k < numero_de_linhas; k++) {
        for (int i = numero_de_linhas; i > 1; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}