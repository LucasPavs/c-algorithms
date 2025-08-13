#include <stdio.h>

int main(){
    int num, num_anterior = 0;
    int contador = -1;

    while(1){
        printf("Digite o valor: ");
        scanf("%d", &num);

        if(num <= 0){
            printf("Apenas numeros positivos.\n");
            continue;
        }

        if(num == num_anterior){
            break;
        }

        contador++;
        num_anterior = num;
    }

    printf("Quantidade de numeros lidos: %d.\n\n", contador);

    return 0;
}