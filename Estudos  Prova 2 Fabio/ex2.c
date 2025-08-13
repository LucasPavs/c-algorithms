#include <stdio.h>

const int tamanho = 10;

int main() {
    char gabarito[tamanho], resposta[tamanho];
    int i, acertos = 0;

    for (i = 0; i < tamanho; i++) {
            printf("Informe a %dº resposta do gabarito: ", i + 1);
            scanf(" %c", &gabarito[i]);
            if (gabarito[i] != 'a' && gabarito[i] != 'b' && gabarito[i] != 'c' && gabarito[i] != 'd' && gabarito[i] != 'e') {
                printf("As respostas só podem ser dadas respeitando as alternativas (a, b, c, d, e): ");
                i--;
                continue;
            }
        }

        printf("\n");

    for (i = 0; i < tamanho; i++) {
            printf("Informe a %dº resposta da sua resposta: ", i + 1);
            scanf(" %c", &resposta[i]);
            if (gabarito[i] != 'a' && gabarito[i] != 'b' && gabarito[i] != 'c' && gabarito[i] != 'd' && gabarito[i] != 'e') {
                printf("As respostas só podem ser dadas respeitando as alternativas (a, b, c, d, e): ");
                i--;
                continue;
        }
    }
    
    for (i = 0; i < tamanho; i++) {
            if (resposta[i] == gabarito[i]) {
                acertos++;
        }
    }

    printf("O candidato teve %d acertos. \n\n", acertos);

    return 0;
}