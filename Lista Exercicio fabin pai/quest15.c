#include <stdio.h>
#include <ctype.h>

int main() {
    char texto[101];
    int contagem[26] = {0}; // 26 letras do alfabeto

    printf("Digite um texto (até 100 caracteres): ");
    fgets(texto, 101, stdin);

    // Conta as letras em maiúsculo
    for (int i = 0; texto[i] != '\0'; i++) {
        if (isalpha(texto[i])) { // Verifica se é uma letra
            char letra = toupper(texto[i]); // Converte para maiúscula
            contagem[letra - 'A']++; // Incrementa o contador da letra
        }
    }

    printf("\nQuantidade de cada letra:\n");
    for (int i = 0; i < 26; i++) {
        if (contagem[i] > 0) {
            printf("%c: %d\n", 'A' + i, contagem[i]);
        }
    }

    printf("\n");

    return 0;
}
