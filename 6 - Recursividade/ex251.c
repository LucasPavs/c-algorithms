#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return  n * fatorial(n-1);
}

int main() {
    int num;

    printf("Informe um nuemro para verifivar seu valor em fatorial: ");
    scanf("%d", &num);

    printf("\nO valor fatorial do numero informado %d é %d\n\n", num, fatorial(num));

    return 0;
}