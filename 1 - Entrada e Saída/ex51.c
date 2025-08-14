#include <stdio.h>

int main() {
    int posicao, guiche, tempo_espera;

    printf("Digite a posição de Carlos na fila: ");
    scanf("%d",&posicao);

    guiche = (posicao - 1) % 5 + 1;
    tempo_espera = (posicao - 1) / 5 * 15;

    printf("Carlos será atendido no guichê %d e esperará %d minutos.\n", guiche, tempo_espera);

    return 0;
}
