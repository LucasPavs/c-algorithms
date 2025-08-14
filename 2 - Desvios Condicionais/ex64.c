#include <stdio.h>

int main(){
    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);

    if( num > 0){
        printf("\nPositivo.\n\n");
    }
    else if( num < 0){
        printf("\nNegativo.\n\n");
    }
    else{
        printf("\nNeutro.\n\n");
    }

    return 0;
}