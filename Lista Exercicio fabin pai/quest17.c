#include <stdio.h>

int main(){
    int N;

    printf("Informe o valor:");
    scanf("%d", &N);

    for(int i = 1; i < 11; i++){
        int mult = N * i;
        printf("%d X %d = %d\n", N, i,mult);
    }

    printf("\n\n");

    return 0;
}