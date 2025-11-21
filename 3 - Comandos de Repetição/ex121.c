/*Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e
um número inteiro N e imprima todos os termos da progressão menores ou iguais a N
(caso a razão seja positiva) ou todos os termos maiores ou iguais a N (caso a razão seja
negativa).*/

#include <stdio.h>

int main() {
    int termo_inicial, razao, N;
    int termo_atual;

    // Leitura dos dados
    printf("Digite o termo inicial da PA: ");
    scanf("%d", &termo_inicial);

    printf("Digite a razão da PA: ");
    scanf("%d", &razao);

    printf("Digite o número limite N: ");
    scanf("%d", &N);

    printf("Termos da PA dentro do limite:\n");

    termo_atual = termo_inicial;

    if (razao > 0) {
        while (termo_atual <= N) {
            printf("%d ", termo_atual);
            termo_atual += razao;
        }
    } else if (razao < 0) {
        while (termo_atual >= N) {
            printf("%d ", termo_atual);
            termo_atual += razao;
        }
    } else {
        // Caso a razão seja 0, a PA não progride
        if ((razao == 0 && termo_inicial == N) || (razao == 0 && ((razao > 0 && termo_inicial <= N) || (razao < 0 && termo_inicial >= N)))) {
            printf("%d ", termo_inicial);
        } else if (razao == 0 && ((razao > 0 && termo_inicial > N) || (razao < 0 && termo_inicial < N))) {
            // não imprime nada
        } else {
            printf("%d ", termo_inicial);
        }
    }

    printf("\n");
    return 0;
}
