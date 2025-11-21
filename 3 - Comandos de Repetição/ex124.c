/*Escreva um programa que imprima os seis primeiros pares de números primos
gêmeos. Dois números são chamados de primos gêmeos se eles forem primos e a
diferença entre os dois for igual a 2. (Por exemplo, 11 e 13 são primos gêmeos).*/

#include <stdio.h>

int main() {
    int contador = 0; // Contador de pares de primos gêmeos encontrados
    int num = 3;      // Começamos do 3, pois o primeiro par é (3, 5)

    printf("Os 6 primeiros pares de primos gêmeos são:\n");

    while (contador < 6) {
        // Verifica se 'num' é primo
        int primo1 = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primo1 = 0;
                break;
            }
        }
        // Verifica se 'num + 2' é primo
        int primo2 = 1;
        for (int i = 2; i * i <= num + 2; i++) {
            if ((num + 2) % i == 0) {
                primo2 = 0;
                break;
            }
        }
        // Se ambos forem primos, imprime o par
        if (primo1 && primo2) {
            printf("(%d, %d)\n", num, num + 2);
            contador++;
        }
        num++;
    }
    
    printf("\n");
    
    return 0;
}
