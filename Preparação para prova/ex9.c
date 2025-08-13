#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    int contador = 0;

    while (1) {
        printf("Digite um nome (ou 'fim' para encerrar): ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0;

        if (strcmp(nome, "fim") == 0) {
            break;
        }

        if (strlen(nome) > 5) {
            contador++;
        }
    }

    printf("Quantidade de nomes com mais de 5 letras: %d\n\n", contador);
    return 0;
}
