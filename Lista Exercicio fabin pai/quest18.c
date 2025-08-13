#include <stdio.h>

int main(){
    int N, pos = 0, neg = 0, neu = 0;

    for(int i = 1; i < 11; i++){
        printf("Informe o %d numero: ", i);
        scanf("%d", &N);

        if(N > 0){
            printf("Numero positivo.\n");
            pos++;
        }
        else if(N < 0){
            printf("Numero negativo.\n");
            neg++;
        }
        else{
            printf("Numero neutro.\n");
            neu++;
        }
    }

    if(pos > neg && pos > neu){
        printf("Tem mais numeros positivos.\n\n");
    }
    else if(neg > pos && neg > neu){
        printf("Tem mais numeros negativos.\n\n");
    }
    else{
        printf("Tem mais numeros neutros.\n\n");
    }
}