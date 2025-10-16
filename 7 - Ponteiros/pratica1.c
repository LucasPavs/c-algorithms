#include <stdio.h>

int main() {
    int a, b;
    int *pa, *pb;

    pa = &a;
    pb = &b;

    printf("Informe um valor para a: ");
    scanf("%d", &a);
    printf("Informe um valor para b: ");
    scanf("%d", &b);
    
    printf("O valor de a: %d \n", a);
    printf("O endereço de a: %p \n", &a);
    
    printf("O valor de b: %d \n", b);
    printf("O endereço de b: %p \n", &b);

    printf("O valor apontado por pa: %d\n", *pa);
    printf("O valor apontado por pb: %d\n", *pb);

    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("Novo valor de a: %d", a);
    printf("\nNovo valor de b: %d", b);

    return 0;
}