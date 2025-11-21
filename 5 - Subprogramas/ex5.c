#include <stdio.h>

int Divisores(int n) {
    int i, cont = 0;
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            cont++;
        }
    }
    return cont;
}

int ehPrimo(int n) {
    int numDivisores = Divisores(n);
    
    if (numDivisores == 2) {
        return 1;
    }
    return 0;
}

int main() {
    int n, m;

    printf("Informe um numero que represente o inicio e outro que represente o fim do intervalo: ");
    scanf("%d%d", &n, &m);

    for (int k = n; k <= m; k++) {
        if(ehPrimo(k) == 1) {
            printf("O numero %d eh primo. \n", k);
        }
        else {
            printf("O numero %d nao eh primo. \n", k);
        }
    }

    printf("\n\n");

    return 0;
}
