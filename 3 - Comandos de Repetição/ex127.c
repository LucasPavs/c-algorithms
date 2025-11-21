/*Escreva  um  programa  que  leia  várias  palavras  e,  para  cada  palavra  lida,  determine  o 
seu número de letras. O processamento deverá ser encerrado quando forem lidas duas 
palavras de cinco letras.*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];
    int contador = 0;

    while (1)
    {
        printf("Informe uma palavra: ");
        fgets(palavra, sizeof(palavra), stdin);
        palavra[strcspn(palavra, "\n")] = 0;

        int num_letras = strlen(palavra);
        printf("A palavra tem %d letras.\n\n", num_letras);

        if(num_letras == 5){
            contador++;
            if(contador == 2){
                return 0;
            }
        }
    }
}