#include <stdio.h>

int main() {
    char nome[100];
    float preco, total_prazo = 0, total_item;
    int quantidade;
    char continuar;

    do {
        printf("\nDigite o nome do item: ");
        scanf(" %[^\n]", nome);
        printf("Digite o preço unitário do item: ");
        scanf("%f", &preco);
        printf("Digite a quantidade comprada: ");
        scanf("%d", &quantidade);

        total_item = preco * quantidade;
        total_prazo += total_item;

        printf("Deseja adicionar outro item? (s para sim / n para não): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    float total_vista = total_prazo * 0.85;

    printf("\nValor total da compra a prazo: R$ %.2f\n", total_prazo);
    printf("Valor total da compra à vista (15%% de desconto): R$ %.2f\n\n", total_vista);

    return 0;
}
