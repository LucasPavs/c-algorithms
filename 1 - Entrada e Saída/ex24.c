#include <stdio.h>

int main(){

    int tinicial, razao, i;

    printf("Digite o termo inicial da PA: ");
    scanf("%d", &tinicial);

    printf("Digite a razão da PA: ");
    scanf("%d", &razao);

    printf("Os 5 primeiros termos da PA são:\n");
    for (i = 0; i < 5; i++) {
        int termo = tinicial + i * razao;
        printf("%d ", termo);
    }

    printf("\n");

}




