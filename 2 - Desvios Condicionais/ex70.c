#include <stdio.h>

int main(){
    int a,b,c;

    printf("Informe os lados do seu triangulo: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a == b && b == c){
        printf("\nTriangulo Equilatero.\n\n");
    }
    else if(a == b || b ==c || a == c){
        printf("\nTriangulo Isosceles.\n\n");
    }
    else{
        printf("\nTriangulo Escaleno.\n\n");
    }

    return 0;
}