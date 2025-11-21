#include <stdio.h>

int main() {
    float x, y;
    
    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    
    printf("Digite a coordenada y: ");
    scanf("%f", &y);
    
    if (y == 2 * x + 1) {
        printf("O ponto (%.2f, %.2f) pertence à reta y = 2x + 1.\n", x, y);
    } else {
        printf("O ponto (%.2f, %.2f) NAO pertence à reta y = 2x + 1.\n", x, y);
    }

    return 0;
}
