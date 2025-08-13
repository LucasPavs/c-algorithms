#include <stdio.h>

int main() {
    float a, b, c, d;
    float razao_pa, razao_pg;
    int eh_pa = 0, eh_pg = 0;

    // Entrada dos numeros
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);
    printf("Digite o quarto numero: ");
    scanf("%f", &d);

    razao_pa = b - a;
    if ((c - b == razao_pa) && (d - c == razao_pa)) {
        eh_pa = 1;
    }

    if (a != 0 && b != 0 && c != 0) {
        razao_pg = b / a;
        if ((c / b == razao_pg) && (d / c == razao_pg)) {
            eh_pg = 1;
        }
    }

    if (eh_pa && eh_pg) {
        printf("Os numeros formam uma PA e uma PG.\n");
    } else if (eh_pa) {
        printf("Os numeros formam uma Progressao Aritmetica.\n");
    } else if (eh_pg) {
        printf("Os numeros formam uma Progressao Geometrica.\n");
    } else {
        printf("Os numeros nao formam nenhum tipo de progressao.\n");
    }

    return 0;
}
