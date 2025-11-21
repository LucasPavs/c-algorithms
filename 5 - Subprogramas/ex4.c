#include <stdio.h>

int Algarismos(int n) {
    int cont = 0;

    while (n != 0) {
        n = n / 10;
        cont++;
    }
    return cont;
}

int main() {
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    int algarismos = Algarismos(num);

    printf("Seu numero possui %d algarismos.\n\n", algarismos);

}