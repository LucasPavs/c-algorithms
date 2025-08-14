#include <stdio.h>

int main(){
    float reais, milhas, valor;

    printf("Informe quantas reais voce gastou na passagem: ");
    scanf("%f", &reais);

    printf("Informe quantas milhas voce gastou na passagem: ");
    scanf("%f", &milhas);

    printf("Informe o valor total da passagem sem utilizar milhas: ");
    scanf("%f", &valor);

    float reais_em_milhas = valor - reais;
    float valor_cada_milha = reais_em_milhas / milhas;
    float valor_total_milha = valor_cada_milha * valor;

    printf("\n Para nao pagar nada em dinheiro na passagem, ele precisaria acumular %.1f milhas.\n\n", valor_total_milha);

    return 0;
    
}