#include <stdio.h>
#include <math.h>

int main() {
    double seno, cos1, cos2;

    printf("Digite o valor do seno (entre -1 e 1): ");
    scanf("%lf", &seno);

    if (seno < -1 || seno > 1) {
        printf("Valor inválido! O seno deve estar entre -1 e 1.\n");
        return 1;
    }
    double raiz = sqrt(1 - pow(seno, 2));

    cos1 = raiz;
    cos2 = -raiz;

    printf("O valor do cosseno pode ser: %.4f ou %.4f\n", cos1, cos2);

    return 0;
}
