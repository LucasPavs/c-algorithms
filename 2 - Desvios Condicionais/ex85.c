#include <stdio.h>

int main() {
    int num1, num2;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); 

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    switch(operador) {
        case '+':
            printf("\n%d %c %d = %d\n\n", num1, operador, num2, num1 + num2);
            break;
        case '-':
            printf("\n%d %c %d = %d\n\n", num1, operador, num2, num1 - num2);
            break;
        case '*':
            printf("\n%d %c %d = %d\n\n", num1, operador, num2, num1 * num2);
            break;
        case '/':
            if (num1 != 0 && num2 != 0) {
                printf("\n%d %c %d = %.2f\n\n", num1, operador, num2, (float)num1 / num2);
            } else {
                printf("\nErro! Divisão por zero.\n\n");
            }
            break;
        default:
            printf("\nOperador inválido!\n\n");
            break;
    }

    return 0;
}
