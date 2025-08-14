#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    if (caractere >= 'A' && caractere <= 'Z') {
        printf("É uma letra maiúscula.\n\n");

    } else if (caractere >= 'a' && caractere <= 'z') {
        printf("É uma letra minúscula.\n\n");

    } else if (caractere >= '0' && caractere <= '9') {
        printf("É um numeral.\n\n");

    } else {
        printf("Não é letra e nem numeral.\n\n");
    }

    return 0;
}
