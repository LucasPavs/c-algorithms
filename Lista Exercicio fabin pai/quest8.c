#include <stdio.h>

int main(){
    int num, pares = 0, impar = 0;

    printf("Digite 10 numeros inteiros:\n\n");

    for(int i = 1; i < 11; i++){
        printf("\nInforme o %d° numero: ", i);
        scanf("%d", &num);

        if(num % 2 == 0){
            pares++;
        }
        else{
            impar++;
        }
    }

    printf("\nQuantidade de numeros inteiros pares: %d\n\n", pares);
    printf("Quantidade de numeros inteiros impares: %d\n\n", impar);

    return 0;
}