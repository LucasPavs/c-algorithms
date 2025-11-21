#include <stdio.h>

int main() {
    int hora_chegada, minuto_chegada, senha;
    int tempo_espera, total_minutos, hora_atendimento, minuto_atendimento;

    printf("Digite a hora de chegada: ");
    scanf("%d", &hora_chegada);

    printf("Digite os minutos de chegada: ");
    scanf("%d", &minuto_chegada);

    printf("Digite o número da senha de Ana: ");
    scanf("%d", &senha);

    tempo_espera = (senha - 1) * 25;
    total_minutos = hora_chegada * 60 + minuto_chegada + tempo_espera;

    hora_atendimento = total_minutos / 60;
    minuto_atendimento = total_minutos % 60;

    printf("Ana sera atendida as %02d:%02d\n\n", hora_atendimento, minuto_atendimento);

    return 0;
}
