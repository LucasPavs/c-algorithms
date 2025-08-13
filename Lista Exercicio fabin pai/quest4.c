// Escreva um programa que leia três números inteiros distintos e identifique o maior número lido.

#include <stdio.h>

int main(){
float a, b, c;

printf("Informe o primeiro valor: ");
scanf("%f", &a);

printf("Informe o segundo valor: ");
scanf("%f", &b);

printf("Informe o terceiro valor: ");
scanf("%f", &c);

if(a > b && a > c){
printf("O numero %.3f eh maior.\n\n", a);
}
else if(b > a && b > c){
    printf("O numero %.3f eh maior.\n\n", b);
}
else{
    printf("O numero %.3f eh maior.\n\n", c);
}

return 0;
}