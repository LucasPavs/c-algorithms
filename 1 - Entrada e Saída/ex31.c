#include <stdio.h>

#define pacertos 5
#define perros 3
#define pbranco 0

int main() {
    int acertos, erros, brancos;
    int pontuacao_final;

    printf("Digite o número de questões acertadas: ");
    scanf("%d", &acertos);

    printf("Digite o número de questões erradas: ");
    scanf("%d", &erros);

    printf("Digite o número de questões em branco: ");
    scanf("%d", &brancos);

    pontuacao_final = (acertos * pacertos) - (erros * perros) + (brancos * pbranco);

    printf("A pontuação final do candidato é: %d\n", pontuacao_final);

}
