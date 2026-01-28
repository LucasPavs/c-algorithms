#include <stdio.h>

int main() {
    float peso, altura, imc;
    int abaixo = 0, adequado = 0, acima = 0;

    for (int i = 1; i <= 20; i++) {
        printf("Pessoa %d\n", i);
        printf("Digite o peso (kg): ");
        scanf("%f", &peso);
        printf("Digite a altura (m): ");
        scanf("%f", &altura);

        imc = peso / (altura * altura);

        if (imc < 18.5)
            abaixo++;
        else if (imc <= 24.9)
            adequado++;
        else
            acima++;
    }

    printf("\nPercentual abaixo do peso: %.2f%%\n", (abaixo / 20.0) * 100);
    printf("Percentual com peso adequado: %.2f%%\n", (adequado / 20.0) * 100);
    printf("Percentual acima do peso: %.2f%%\n\n", (acima / 20.0) * 100);

    return 0;
}
