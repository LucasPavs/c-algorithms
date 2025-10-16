#include <stdio.h>

enum Operacao {
    SOMAR = 1,
    SUBTRAIR = 2,
    MULTIPLICAR = 3,
    DIVIDIR = 4
};

int main() {
    
    enum Operacao escolha_operacao;

    int escolha_menu;
    double num1, num2, resultado;

    // 1. Mostra o menu para o usuário
    printf("===== CALCULADORA SIMPLES =====\n");
    printf("Escolha uma operacao:\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Digite o número da sua opcao: ");

    // 2. Lê a escolha do usuário
    scanf("%d", &escolha_menu);

    // 3. Converte a escolha numérica do menu para o nosso tipo enum
    escolha_operacao = (enum Operacao)escolha_menu;

    // 4. Pede os números para o cálculo
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    switch (escolha_operacao) {
        case SOMAR:
            resultado = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;

        case SUBTRAIR:
            resultado = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;

        case MULTIPLICAR:
            resultado = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;

        case DIVIDIR:
            // Tratamento de erro para divisão por zero
            if (num2 == 0) {
                printf("ERRO: Divisão por zero não é permitida!\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            }
            break;

        // Caso o usuário digite um número que não corresponde a nenhuma operação
        default:
            printf("ERRO: Operação inválida!\n");
            break;
    }

    return 0;
}

