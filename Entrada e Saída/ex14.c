#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);  

    int comprimento = strlen(palavra);  

    printf("O comprimento da palavra %s é: %d letras\n", palavra, comprimento);

    return 0;
}
