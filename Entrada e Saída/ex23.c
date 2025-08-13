#include <stdio.h>
#include <math.h> 
const float M_PI = 3.14;

int main() {
    double raio, volume;

    printf("Digite o valor do raio da esfera em cm: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * M_PI * pow(raio, 3);

    printf("O volume da esfera com raio de %.2lf cm eh: %.2lf cm³\n", raio, volume);

}
