#include <stdio.h>

int main() {
    int horas, minutos, fuso;
    int total_minutos, nova_hora, novo_minuto;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    printf("Digite o fuso horario: ");
    scanf("%d", &fuso);

    total_minutos = horas * 60 + minutos + fuso * 60;

    if (total_minutos < 0) {
        total_minutos += 1440;
    }
    total_minutos %= 1440;

    nova_hora = total_minutos / 60;
    novo_minuto = total_minutos % 60;

    printf("\n%02d:%02d\n\n", nova_hora, novo_minuto);

    return 0;
}
