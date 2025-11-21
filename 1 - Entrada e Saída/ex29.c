#include <stdio.h>

int main() {
    int totalQuestoes, acertou;
    float percentualAcertos, percentualErros;

    printf("Digite o número total de questões da prova: ");
    scanf("%d", &totalQuestoes);

    printf("Digite o número de questões que o candidato acertou: ");
    scanf("%d", &acertou);

    percentualAcertos = (float)acertou / totalQuestoes * 100;
    percentualErros = 100 - percentualAcertos;

    printf("\nPercentual de acertos: %.2f%%\n", percentualAcertos);
    printf("Percentual de erros: %.2f%%\n", percentualErros);

}
