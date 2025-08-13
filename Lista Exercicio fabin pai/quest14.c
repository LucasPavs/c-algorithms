#include <stdio.h>

int main() {
    char texto[1000]; 
    int contador = 0;

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    while (texto[contador] != '\0') {
        contador++;
    }

    printf("Quantidade total de caracteres: %d\n", contador);

    return 0;
}
