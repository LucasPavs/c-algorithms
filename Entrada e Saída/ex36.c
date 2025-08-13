#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Antes da permutação: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Após a permutação: a = %d, b = %d\n", a, b);
    getchar();
    return 0;
}
