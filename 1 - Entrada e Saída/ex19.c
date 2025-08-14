#include <stdio.h>

int main() {
    float ang1, ang2, ang3;

    printf("Digite o valor do primeiro ângulo: ");
    scanf("%f", &ang1);

    printf("Digite o valor do segundo ângulo: ");
    scanf("%f", &ang2);

    if (ang1 <= 0 || ang2 <= 0 || (ang1 + ang2) >= 180) {
        printf("Ângulos inválidos! A soma deve ser menor que 180° e maior que 0.\n");
        return 1;
    }

    ang3 = 180 - (ang1 + ang2);

    printf("O terceiro ângulo do triângulo é: %.2f°\n", ang3);

    return 0;
}
