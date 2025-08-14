#include <stdio.h>

int main() {
    char nome1[50], nome2[50], nome3[50];
    int votos1, votos2, votos3, total_votos;
    float perc1, perc2, perc3;

    printf("Digite o nome do primeiro candidato: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a quantidade de votos de %s: ", nome1);
    scanf("%d", &votos1);

    printf("Digite o nome do segundo candidato: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a quantidade de votos de %s: ", nome2);
    scanf("%d", &votos2);

    printf("Digite o nome do terceiro candidato: ");
    scanf(" %[^\n]", nome3);
    printf("Digite a quantidade de votos de %s: ", nome3);
    scanf("%d", &votos3);

    total_votos = votos1 + votos2 + votos3;

    perc1 = (votos1 * 100.0) / total_votos;
    perc2 = (votos2 * 100.0) / total_votos;
    perc3 = (votos3 * 100.0) / total_votos;

    printf("\nResultado da eleição:\n");
    printf("%s: %.4f%% dos votos\n", nome1, perc1);
    printf("%s: %.4f%% dos votos\n", nome2, perc2);
    printf("%s: %.4f%% dos votos\n", nome3, perc3);

    if (perc1 > perc2 && perc1 > perc3) {
        printf("\nO vencedor da eleição é: %s\n", nome1);
    } else if (perc2 > perc1 && perc2 > perc3) { 
        
        printf("\nO vencedor da eleição é: %s\n", nome2);
    } else if (perc3 > perc1 && perc3 > perc2) {
        printf("\nO vencedor da eleição é: %s\n", nome3);
    } else {
        printf("\nHouve empate entre os candidatos.\n");
    }

}
