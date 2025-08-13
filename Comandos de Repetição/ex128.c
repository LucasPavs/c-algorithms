/*Escreva  um  programa  que  leia  o  nome  e  o  peso  de  20  bois  que  participam  de  uma 
exposição e imprima o nome do boi mais leve e o nome do boi mais pesado. Para isso, 
suponha que todos os bois têm pesos distintos.*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char nome_mais_leve[100], nome_mais_pesado[100];
    int peso_mais_leve, peso_mais_pesado, peso;

    for (int i = 0; i < 20; i++) {
        printf("Informe o nome do boi: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0;

        printf("Informe o peso do boi: ");
        scanf("%d", &peso);
        getchar(); // Limpa o \n do buffer

        if (i == 0) {
            peso_mais_leve = peso_mais_pesado = peso;
            strcpy(nome_mais_leve, nome);
            strcpy(nome_mais_pesado, nome);
        } else {
            if (peso < peso_mais_leve) {
                peso_mais_leve = peso;
                strcpy(nome_mais_leve, nome);
            }
            if (peso > peso_mais_pesado) {
                peso_mais_pesado = peso;
                strcpy(nome_mais_pesado, nome);
            }
        }
    }

    printf("\nBoi mais leve: %s\n", nome_mais_leve);
    printf("Boi mais pesado: %s\n", nome_mais_pesado);

    return 0;
}