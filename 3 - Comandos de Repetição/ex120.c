//Escreva um programa que leia um número inteiro positivo N e imprima 
//a maior quantidade possível de números inteiros positivos de forma que a soma de todos os
//números impressos seja menor ou igual a N.

#include <stdio.h>

int main(){
    int N;
    int soma = 0;
    int i = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    printf("Numeros cuja soma eh menor ou igual a %d:\n", N);

    while (soma + i <= N){
        printf("%d ", i);
        soma += i;
        i++;
    }

    printf("\n");

    return 0;
}