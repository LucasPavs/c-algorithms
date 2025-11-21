#include <stdio.h>

int Area(int l) {
    return l * l;
}

int Perimetro(int l) {
    return l * 4;
}

int main() {
    int lado;

    printf("Informe o lado do seu quadrado: ");
    scanf("%d", &lado);

    int area = Area(lado);
    int perimetro = Perimetro(lado);

    printf("A area do seu quadrado eh: %d e o perimetro eh: %d\n\n", area, perimetro);

    return 0;
}