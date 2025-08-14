#include <stdio.h>
#include <math.h>

int potenciacao(int m, int n) {
    return pow(m, n);
}

int main() {
    int m, n;

    printf("Para calcular m elavado a n, informe m e n: ");
    scanf("%d%d", &m,&n);
    
    int calculapotenciacao = potenciacao(m, n);

    printf("\nm elevado a n = %d. \n\n", calculapotenciacao);

}