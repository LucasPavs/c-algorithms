#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite;

    srand(time(NULL));
    numeroSecreto = rand() % 50 + 1; 

    printf("=== Jogo de Adivinhação ===\n");
    printf("Tente adivinhar o número entre 1 e 50!\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite > numeroSecreto) {
            printf("Muito alto! Tente um número menor.\n");
        } else if (palpite < numeroSecreto) {
            printf("Muito baixo! Tente um número maior.\n");
        } else {
            printf("Parabéns! Você acertou o número %d!\n\n", numeroSecreto);
        }
    } while (palpite != numeroSecreto);

    return 0;
}
