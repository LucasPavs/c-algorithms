#include <stdio.h>

int main() {
    float peso, altura;
    float mediaPesoDupla, mediaAlturaDupla;
    float somaPesoTotal = 0, somaAlturaTotal = 0;
    int i, j;
    
    for (i = 1; i <= 4; i++) {
        float somaPesoDupla = 0, somaAlturaDupla = 0;

        printf("\n--- Dupla %d ---\n", i);

        for (j = 1; j <= 2; j++) {
            printf("Jogador %d - Peso (kg): ", j);
            scanf("%f", &peso);
            printf("Jogador %d - Altura (m): ", j);
            scanf("%f", &altura);

            somaPesoDupla += peso;
            somaAlturaDupla += altura;
        }

        mediaPesoDupla = somaPesoDupla / 2;
        mediaAlturaDupla = somaAlturaDupla / 2;

        printf("Média de peso da dupla %d: %.2f kg\n", i, mediaPesoDupla);
        printf("Média de altura da dupla %d: %.2f m\n", i, mediaAlturaDupla);

        somaPesoTotal += somaPesoDupla;
        somaAlturaTotal += somaAlturaDupla;
    }

    printf("\n==== MÉDIA GERAL DO TORNEIO ====\n");
    printf("Peso médio dos jogadores: %.2f kg\n", somaPesoTotal / 8);
    printf("Altura média dos jogadores: %.2f m\n", somaAlturaTotal / 8);

    getchar();
}
