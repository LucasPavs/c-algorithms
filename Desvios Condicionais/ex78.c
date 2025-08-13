#include <stdio.h>
const float valor_comp = 0.7;

int main(){
    float gasolina, alcool;

    printf("Informe o preço da gasolina por litro: ");
    scanf("%f", &gasolina);

    printf("Informe o preço do alcool por litro: ");
    scanf("%f", &alcool);

    float comparacao = gasolina * valor_comp;

    if(comparacao <= alcool){
        printf("\nVoce deve abastecer com gasolina.\n\n");
    }
    else{
        printf("\nVoce deve abastecer com alcool.\n\n");
    }

    return 0;
}