#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int maior, segundo_maior;
    int pos_maior, pos_segundo_maior;


    printf("Digite o 1º número: ");
    scanf("%d", &num1);
    printf("Digite o 2º número: ");
    scanf("%d", &num2);
    printf("Digite o 3º número: ");
    scanf("%d", &num3);
    printf("Digite o 4º número: ");
    scanf("%d", &num4);
    printf("Digite o 5º número: ");
    scanf("%d", &num5);

    maior = num1;
    segundo_maior = num1;
    pos_maior = 1;
    pos_segundo_maior = 1;

    if (num2 > maior) {
        segundo_maior = maior;
        maior = num2;
        pos_maior = 2;
        pos_segundo_maior = 1;
    }
    else if (num2 > segundo_maior) {
        segundo_maior = num2;
        pos_segundo_maior = 2;
    }

    if (num3 > maior) {
        segundo_maior = maior;
        maior = num3;
        pos_maior = 3;
        pos_segundo_maior = 1;
    }
    else if (num3 > segundo_maior) {
        segundo_maior = num3;
        pos_segundo_maior = 3;
    }

    if (num4 > maior) {
        segundo_maior = maior;
        maior = num4;
        pos_maior = 4;
        pos_segundo_maior = 1;
    }
    else if (num4 > segundo_maior) {
        segundo_maior = num4;
        pos_segundo_maior = 4;
    }

    if (num5 > maior) {
        segundo_maior = maior;
        maior = num5;
        pos_maior = 5;
        pos_segundo_maior = 1;
    }
    else if (num5 > segundo_maior) {
        segundo_maior = num5;
        pos_segundo_maior = 5;
    }

    printf("\nO segundo maior número é %d, digitado na %dª posição.\n\n", segundo_maior, pos_segundo_maior);

    return 0;
}
