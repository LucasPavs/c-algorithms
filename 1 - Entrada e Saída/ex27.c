#include <stdio.h>

int main() {
    float comprimento, largura, lDesejados;
    float volumeEmMetrosCubicos, alturaNecessaria;

    printf("Digite o comprimento da cisterna (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura da cisterna (em metros): ");
    scanf("%f", &largura);

    printf("Digite a quantidade de litros que deseja armazenar: ");
    scanf("%f", &lDesejados);

    volumeEmMetrosCubicos = lDesejados / 1000;

    alturaNecessaria = volumeEmMetrosCubicos / (comprimento * largura);

    printf("Você deve encher a cisterna até %.2f metros de altura.\n", alturaNecessaria);

}
