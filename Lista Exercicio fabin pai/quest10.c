#include <stdio.h>

int main() {
    float peso, altura, imc;
    int abaixo = 0, dentro = 0, acima = 0;

    for (int i = 1; i <= 10; i++) {
        printf("\nPessoa %d:\n", i);
        printf("Digite o peso (kg): ");
        scanf("%f", &peso);
        printf("Digite a altura (m): ");
        scanf("%f", &altura);

        imc = peso / (altura * altura);

        if (imc < 18.0) {
            abaixo++;
        } else if (imc <= 25.0) {
            dentro++;
        } else {
            acima++;
        }
    }

    float abaixo_percentual = (abaixo / 10.0) * 100.0;
    float dentro_percentual = (dentro / 10.0) * 100.0;
    float acima_percentual = (acima / 10.0) * 100.0;

    
    printf("\nRESULTADOS:\n");
    printf("Percentual de pessoas abaixo do peso: %.1f%%\n", abaixo_percentual);
    printf("Percentual de pessoas com peso adequado: %.1f%%\n", dentro_percentual);
    printf("Percentual de pessoas acima do peso: %.1f%%\n", acima_percentual);

    return 0;
}
