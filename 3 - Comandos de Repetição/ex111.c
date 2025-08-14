#include <stdio.h>

int main() {
    int termo_inicial, razao, n, i;

    printf("Digite o termo inicial da PA: ");
    scanf("%d", &termo_inicial);

    printf("Digite a razão da PA: ");
    scanf("%d", &razao);

    printf("Digite a quantidade de termos (N): ");
    scanf("%d", &n);

    // Validação de N
    if (n <= 0) {
        printf("O número de termos deve ser positivo.\n");
        return 1;
    }

    // Impressão dos N primeiros termos da PA
    printf("\n\nOs %d primeiros termos da PA são:\n", n);
    for (i = 0; i < n; i++) {
        int termo = termo_inicial + i * razao;
        printf("%d ", termo);
    }

    printf("\n\n");
    return 0;
}
