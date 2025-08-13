#include <stdio.h>

int main() {
    int votosMaria = 0, votosFrancisco = 0, votosMarta = 0, votosJoao = 0;
    int voto;

    printf("ELEIÇÃO PARA REPRESENTANTE DE TURMA\n");
    printf("Digite o número do candidato:\n");
    printf("[1] Maria\n[2] Francisco\n[3] Marta\n[4] João\n");

    while (votosMaria < 10 && votosFrancisco < 10 && votosMarta < 10 && votosJoao < 10) {
        printf("Seu voto: ");
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                votosMaria++;
                break;
            case 2:
                votosFrancisco++;
                break;
            case 3:
                votosMarta++;
                break;
            case 4:
                votosJoao++;
                break;
            default:
                printf("Voto inválido. Tente novamente.\n");
        }
    }

    printf("\nRESULTADO DA ELEIÇÃO:\n\n");
    printf("Maria: %d votos\n", votosMaria);
    printf("Francisco: %d votos\n", votosFrancisco);
    printf("Marta: %d votos\n", votosMarta);
    printf("João: %d votos\n", votosJoao);

    if (votosMaria == 10) {
        printf("\nVencedora: Maria\n\n");
    } else if (votosFrancisco == 10) {
        printf("\nVencedor: Francisco\n\n");
    } else if (votosMarta == 10) {
        printf("\nVencedora: Marta\n\n");
    } else if (votosJoao == 10) {
        printf("\nVencedor: João\n\n");
    }

    return 0;
}
