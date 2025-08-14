#include <stdio.h>

int mediaAritmetica(int n1, int n2, int n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {
    int i, n[3];

    for (i = 0; i < 3; i++) {
        printf("Informe um  numero: ");
        scanf("%d", &n[i]);
    }

    int media = mediaAritmetica(n[0], n[1], n[2]);

    printf("%d \n\n", media);

    return 0;
}