#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media, provaFinal;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("Media parcial: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situacao: Aprovado por media.\n");
    } 
    else if (media >= 4.0) {
        provaFinal = (25 - (3 * media)) / 2;
        printf("Situacao: Prova final.\n");
        printf("O aluno precisa tirar %.2f na prova final para ser aprovado.\n", provaFinal);
    } 
    else {
        printf("Situacao: Reprovado por media.\n");
    }

    return 0;
}
