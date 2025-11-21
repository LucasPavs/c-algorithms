#include <stdio.h>

int main() {
    int mes_inicio, ano_inicio, anos_pena, meses_pena;
    int mes_final, ano_final;

    printf("Digite o mes de inicio (1-12): ");
    scanf("%d", &mes_inicio);
    printf("Digite o ano de inicio (>= 2000): ");
    scanf("%d", &ano_inicio);
    printf("Digite a pena (anos e meses):\n");
    printf("Anos: ");
    scanf("%d", &anos_pena);
    printf("Meses: ");
    scanf("%d", &meses_pena);

    mes_final = mes_inicio + meses_pena;
    ano_final = ano_inicio + anos_pena;

    if (mes_final > 12) {
        ano_final += mes_final / 12;
        mes_final = mes_final % 12;
    }

    printf("O preso terminara de cumprir a pena em %02d/%d.\n\n", mes_final, ano_final);

    return 0;
}
