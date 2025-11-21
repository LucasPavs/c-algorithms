#include <stdio.h>

int main() {
    float tamanhoMB, taxaKBs;
    int tempoTotalSegundos, horas, minutos, segundos;

    printf("Digite o tamanho do arquivo (em MB): ");
    scanf("%f", &tamanhoMB);

    printf("Digite a taxa de transmissão (em KB/s): ");
    scanf("%f", &taxaKBs);

    tempoTotalSegundos = (int)((tamanhoMB * 1024) / taxaKBs);

    horas = tempoTotalSegundos / 3600;
    minutos = (tempoTotalSegundos % 3600) / 60;
    segundos = tempoTotalSegundos % 60;

    printf("Tempo aproximado: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    getchar();
    return 0;
}
