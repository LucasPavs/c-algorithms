#include <stdio.h>


int main() {
    float metros;
    
    printf("Digite a distância em metros: ");
    scanf("%f", &metros);

    printf("\nEquivalências:\n");
    printf("Quilômetros: %.3f km\n", metros / 1000);
    printf("Hectômetros: %.3f hm\n", metros / 100);
    printf("Decâmetros: %.3f dam\n", metros / 10);
    printf("Decímetros: %.1f dm\n", metros * 10);
    printf("Centímetros: %.1f cm\n", metros * 100);
    printf("Milímetros: %.1f mm\n", metros * 1000);

    return 0;
}
