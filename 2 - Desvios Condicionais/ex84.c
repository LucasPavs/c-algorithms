#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18) {
        printf("Abaixo do peso. Voce precisa ganhar %.2f kg para atingir o peso ideal.\n", (18 * altura * altura) - peso);
    }
    else if (imc > 25) {
        printf("Acima do peso. Voce precisa perder %.2f kg para atingir o peso ideal.\n", peso - (25 * altura * altura));
    }
    else {
        printf("Peso adequado.\n");
    }

    return 0;
}
