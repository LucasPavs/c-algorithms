#include <stdio.h>

int main(){
    int N;

    printf("Informe um numero: ");
    scanf("%d", &N);

    if(N % 4 == 0){
        printf("Numero eh divisivel por 4.\n\n");
    }
    else{
        printf("Numero nao eh divisivel por 4.\n\n");
    }

    if(N % 10 == 4){
        printf("O ultimo digito eh 4.\n\n");
    }
    else{
        printf("O ultimo numero nao eh 4.\n\n");
    }

    return 0;
}