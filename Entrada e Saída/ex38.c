#include <stdio.h>

int main() {
    int segundos, horas, minutos, resto;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
