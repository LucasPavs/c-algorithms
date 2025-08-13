#include <stdio.h>

int main(){
    int a,b,c;

    printf("Informe os valores dos angulos do triangulo: ");
    scanf("%d%d%d", &a, &b , &c);

    if( a == 90 || b == 90 || c == 90){
        printf("\nEh um triangulo retangulo.\n\n");
    }

    return 0;
}