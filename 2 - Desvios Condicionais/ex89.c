#include <stdio.h>

int main() {
    int numero;

    char *centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char *dezenas[]  = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    printf("Digite um número entre 1 e 999: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 999) {
        printf("Número fora do intervalo permitido.\n\n");
        return 1;
    }

    int c = numero / 100;
    int d = (numero % 100) / 10;
    int u = numero % 10;

    printf("Número em algarismos romanos: %s%s%s\n\n", centenas[c], dezenas[d], unidades[u]);

    return 0;
}
