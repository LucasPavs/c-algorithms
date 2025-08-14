#include <stdio.h>

int main() {
    float horas_trabalhadas, valor_hora, pagamento;
    
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o valor de cada hora trabalhada: ");
    scanf("%f", &valor_hora);

    if (horas_trabalhadas <= 160) {
        pagamento = horas_trabalhadas * valor_hora;
    } else {
        float horas_extras = horas_trabalhadas - 160;
        float valor_hora_extra = valor_hora * 1.5; 
        pagamento = (160 * valor_hora) + (horas_extras * valor_hora_extra);
    }

    printf("O pagamento do funcionário é: R$ %.2f\n", pagamento);

    return 0;
}
