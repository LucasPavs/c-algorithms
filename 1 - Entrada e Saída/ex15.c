#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int k;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite a posiçao k: ");
    scanf("%d", &k);

    int tamanho = strlen(palavra);

    if (k >= 1 && k <= tamanho) {
    
        printf("A %dª letra da palavra é: %c\n", k, palavra[k - 1]);
    } else {
        printf("Posição inválida! A palavra tem %d letras.\n", tamanho);
    }

    return 0;
}
