#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cromossomos[11];
    int i, j = 0;
    char ordem[] = "ADS";

    printf("Digite a sequência de 10 cromossomos (letras maiusculas): ");
    scanf("%10s", cromossomos);

    // Converter para maiúsculo
    for (i = 0; i < 10; i++) {
        cromossomos[i] = toupper(cromossomos[i]);
    }

    // Verifica se ADS aparece em sequência
    if (strstr(cromossomos, "ADS")) {
        printf("Alta aptidão para a programação.\n");
        return 0;
    }

    // Verifica se A, D e S aparecem em ordem, mas não em sequência
    for (i = 0; i < strlen(cromossomos); i++) {
        if (cromossomos[i] == ordem[j]) {
            j++;
            if (j == 3) break; // achou A, depois D, depois S
        }
    }

    if (j == 3) {
        printf("Aptidão média para a programação.\n");
    } else {
        printf("Baixa aptidão para a programação.\n");
    }

    return 0;
}
