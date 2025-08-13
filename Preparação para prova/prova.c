#include <stdio.h>

int main(){
    int N, i = 2;

    printf("Informe o numero: ");
    scanf("%d", &N);

    printf("fatoracao do %d: \n", N);

    while (i <= N){
        if(N % i == 0){
            if(N == i){
                printf("%d", i);
                return 0;
            }
            else{
                printf("%dx", i);
                N = N/i;
                continue;
            }
        }
        i++;
    }
    
}
