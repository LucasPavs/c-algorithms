#include <stdio.h>

int main(){
    int k;
    int fatorial = 1;

    printf("Informe o numero: ");
    scanf("%d", &k);

    for(int i = 1; i <= k; i++){
        fatorial *= i; 
    }

    printf("\nO numero %d! eh: %d\n\n", k, fatorial);

    return 0;
}