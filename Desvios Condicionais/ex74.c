#include <stdio.h>

int main(){
    int a, b, c;
    
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    
    printf("Informe o terceiro valor: ");
    scanf("%d", &c);
    
    if((b > a && a > c) || (b < a && a < c)){
    printf("O numero %d nao eh o maior e nem o menor.\n\n", a);
    }
    else if((a > b && b > c) || (a < b && b < c)){
        printf("O numero %d nao eh o maior e nem o menor.\n\n", b);
    }
    else{
        printf("O numero %d nao eh o maior e nem o menor.\n\n", c);
    }
    
    return 0;
    }