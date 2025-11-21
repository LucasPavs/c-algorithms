#include <stdio.h>

int main() {
    int total_pessoas, i;

    printf("Informe o número total de pessoas que irão participar do evento:");
    scanf("%d", &total_pessoas);

    char nome[20];
    int numero_bilhete;

    for (i = 1; i < total_pessoas; i++) {
        printf("Informe o seu nome: ");
        scanf("%s", nome);
        printf("Informe o numero do seu bilhete: ");
        scanf("%d", &numero_bilhete);
        if(numero_bilhete == i) {
            printf("\nParabéns %s você foi o vencedor do sorteio, pois o numero do seu bilhete é igual a %d.", nome, i);
        }
    }

    return 0;
}