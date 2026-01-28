#include <stdio.h>

int main(){
    int n, razao;
    int m;

    printf("Informe o valor inicial: ");
    scanf("%d", &n);

    printf("Informe a razao: ");
    scanf("%d", &razao);

    printf("Informe o valor que deseja verificar dentro da razao: ");
    scanf("%d", &m);

    if (n == m) {
        printf("O termo %d encontra-se dentro da progressao.\n\n", m);
        return 0;
    }

    if (razao == 0) {
        printf("O termo nao se encontra na progressao.\n\n");
        return 0;
    }

    while ((razao > 0 && n < m) || (razao < 0 && n > m)){
        n += razao;
        if(m == n){
            printf("O termo %d encontra-se dentro da progressao.\n\n", m);
            return 0;
        }
    }

    printf("O termo nao se encontra na progressao.\n\n");
    return 0;
}
