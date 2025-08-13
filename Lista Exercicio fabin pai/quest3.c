//Escreva um programa que leia o valor de um ano e verifique se ele é ou não bissexto.
//Um ano é bissexto se ele for divisível por quatrocentos ou se se ele for divisível por 4 mas não for divisível por 100.

#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0) && (ano % 100 != 0)){
        printf("O ano %d é bissexto.\n\n", ano);
    } 
    else {
        printf("O ano %d não é bissexto.\n\n", ano);
    }

    return 0;
}
