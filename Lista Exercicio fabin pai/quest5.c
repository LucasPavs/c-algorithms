//Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se o número lido é ou não um palíndromo.

#include <stdio.h>

int main(){
int a,b,c,d;

printf("Informe o primeiro algarismo: ");
scanf("%d", &a);

printf("Informe o segundo algarismo: ");
scanf("%d", &b);

printf("Informe o terceiro algarismo: ");
scanf("%d", &c);

printf("Informe o quarto algarismo: ");
scanf("%d", &d);

if(a == d && b == c ){
    printf("Esse numero eh um palindromo.\n\n");
}
else{
    printf("Nao eh um palindromo.\n\n");
}
return 0;
}