#include <stdio.h>

int main() {
    char verbo[30];
    char radical[30];
    int i = 0, len = 0;
    char term1, term2;

    printf("Digite um verbo regular no infinitivo (-ar, -er ou -ir): ");
    scanf("%s", verbo);

    // Descobrir tamanho do verbo
    while (verbo[len] != '\0') {
        len++;
    }

    if (len < 3) {
        printf("Verbo muito curto.\n");
        return 1;
    }

    // Pega os dois últimos caracteres
    term1 = verbo[len - 2];
    term2 = verbo[len - 1];

    // Copia o radical (tira as duas últimas letras)
    for (i = 0; i < len - 2; i++) {
        radical[i] = verbo[i];
    }
    radical[i] = '\0';

    printf("\nConjugação do verbo \"%s\":\n", verbo);

    if (term1 == 'a' && term2 == 'r') {
        // 1ª conjugação (-ar)
        printf("\nPresente do Indicativo:\n");
        printf("Eu %so\n", radical);
        printf("Tu %sas\n", radical);
        printf("Ele/Ela %sa\n", radical);
        printf("Nós %samos\n", radical);
        printf("Vós %sais\n", radical);
        printf("Eles/Elas %sam\n", radical);

        printf("\nPretérito Perfeito:\n");
        printf("Eu %sei\n", radical);
        printf("Tu %saste\n", radical);
        printf("Ele/Ela %sou\n", radical);
        printf("Nós %samos\n", radical);
        printf("Vós %sastes\n", radical);
        printf("Eles/Elas %saram\n", radical);

        printf("\nFuturo do Presente:\n");
        printf("Eu %sarei\n", radical);
        printf("Tu %sarás\n", radical);
        printf("Ele/Ela %sará\n", radical);
        printf("Nós %saremos\n", radical);
        printf("Vós %sareis\n", radical);
        printf("Eles/Elas %sarão\n\n", radical);

    } else if (term1 == 'e' && term2 == 'r') {
        // 2ª conjugação (-er)
        printf("\nPresente do Indicativo:\n");
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele/Ela %se\n", radical);
        printf("Nós %semos\n", radical);
        printf("Vós %seis\n", radical);
        printf("Eles/Elas %sem\n", radical);

        printf("\nPretérito Perfeito:\n");
        printf("Eu %si\n", radical);
        printf("Tu %seste\n", radical);
        printf("Ele/Ela %seu\n", radical);
        printf("Nós %semos\n", radical);
        printf("Vós %sestes\n", radical);
        printf("Eles/Elas %seram\n", radical);

        printf("\nFuturo do Presente:\n");
        printf("Eu %serei\n", radical);
        printf("Tu %serás\n", radical);
        printf("Ele/Ela %será\n", radical);
        printf("Nós %seremos\n", radical);
        printf("Vós %sereis\n", radical);
        printf("Eles/Elas %serão\n\n", radical);

    } else if (term1 == 'i' && term2 == 'r') {
        // 3ª conjugação (-ir)
        printf("\nPresente do Indicativo:\n");
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele/Ela %se\n", radical);
        printf("Nós %simos\n", radical);
        printf("Vós %sis\n", radical);
        printf("Eles/Elas %sem\n", radical);

        printf("\nPretérito Perfeito:\n");
        printf("Eu %si\n", radical);
        printf("Tu %siste\n", radical);
        printf("Ele/Ela %siu\n", radical);
        printf("Nós %simos\n", radical);
        printf("Vós %sistes\n", radical);
        printf("Eles/Elas %siram\n", radical);

        printf("\nFuturo do Presente:\n");
        printf("Eu %sirei\n", radical);
        printf("Tu %sirás\n", radical);
        printf("Ele/Ela %sirá\n", radical);
        printf("Nós %siremos\n", radical);
        printf("Vós %sireis\n", radical);
        printf("Eles/Elas %sirão\n\n", radical);

    } else {
        printf("\nVerbo irregular ou de conjugação desconhecida.\n\n");
    }

    return 0;
}
