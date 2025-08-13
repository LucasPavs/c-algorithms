#include <stdio.h>

const int numeros = 5;
const int tamanho = 4;

int Palindromo(int n[tamanho]) {
    int i, ehPalindromo = 1;

    for (i = 0; i < tamanho; i++) {
        if (n[i] != n[tamanho - 1 - i]) {
            ehPalindromo = 0;
        }
    } 
    return ehPalindromo;      
}

int main() {    
    int i, k, num[tamanho];

    printf("Informe os 4 digitos de 5 numeros para testar se são palindromos ou não: \n");
    for (k = 1; k <= numeros; k++) {
        for (i = 0; i < tamanho; i++) {
            scanf("%d", &num[i]);
        } 
        if (Palindromo(num)) {
            printf("Esse numero eh palindromo. \n\n");
        }
        else {
            printf("Esse numero nao eh palindromo. \n\n");
        }
    }          

    return 0;
}